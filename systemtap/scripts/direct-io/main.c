#include"main.h"

int main(int argc, char *argv[])
{
	int fd, rc;
	unsigned char *wrbuf, *rdbuf;
	int wrlen, rdlen;

	rc = posix_memalign((void **)&wrbuf, getpagesize(), BUF_SIZE);
	if (rc) {
		perror("alloc wrbuf error");
		return rc;
	}
	rc = posix_memalign((void **)&rdbuf, getpagesize(), BUF_SIZE);
	if (rc) {
		perror("alloc rdbuf error");
		return rc;
	}

	fd = open(FPATH, O_DIRECT | O_SYNC | O_CREAT | O_RDWR);
	if (fd == -1) {
		perror("open file error");
		return errno;
	}

	memset(wrbuf, 0xA5, BUF_SIZE);
	wrlen = write(fd, wrbuf, BUF_SIZE);
	if (wrlen == -1) {
		perror("write file error");
		return errno;
	}

	lseek(fd, 0x0, SEEK_SET);
	memset(rdbuf, 0x00, BUF_SIZE);
	rdlen = read(fd, rdbuf, BUF_SIZE);
	if (rdlen == -1) {
		perror("read file error");
		return errno;
	}
	printf("%X\n", rdbuf[0]);

	close(fd);

	return 0;
}


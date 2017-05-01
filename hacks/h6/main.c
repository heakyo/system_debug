/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年04月25日 19时59分24秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include<stdio.h>

void display()
{
	printf("------------\n");
	printf("------------\n");
	printf("------------\n");
	printf("------------\n");
	printf("------------\n");
}

int main(int argc, char *argv[])
{
	int i;

	printf("i:%d\n", 1);
	display();
	printf("i:%d\n", 2);
	printf("i:%d\n", 3);
	printf("i:%d\n", 4);
	for (i = 0; i < 10; i++)
		printf("loop: %d\n", i);
	printf("i:%d\n", 5);
	printf("i:%d\n", 6);
	printf("i:%d\n", 7);
	printf("i:%d\n", 8);
	printf("i:%d\n", 9);
	printf("i:%d\n", 0);

	return 0;
}

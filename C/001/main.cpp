//example20：C language implements printing out heart shapes, a confession tool for beginners

#include<stdio.h>//Header Files
int main()//Main function entry 
{
	printf("      ****        ****\n");//Print the first line
	printf("   *********    *********\n");//Print the second line
	printf("*************  *************\n");//Print the third line
	int i, j;//Defining variables 
	for (i = 0; i < 3; i++)//Print lines 4-6, a total of 3 lines, so i is less than 3
	{
		for (j = 0; j < 29; j++)//Limit the number of * characters output per line
		{
			printf("*");//These three lines only print *, no spaces are output
		}
		printf("\n");//After printing a line, a line break is required
	}
	for (i = 0; i < 7; i++) //Print lines 7-13, a total of 7 lines, so i is less than 7 
	{
		for (j = 0; j < 2 * (i + 1) - 1; j++)//This for loop is parallel to the following for 
		{
			printf(" ");//Print space
}
		for (j = 0; j < 27 - i * 4; j++)//读者可以带入几个数找出条件 
		{
			printf("*");//打印*
		}
		printf("\n");
	}
	for (i = 0; i < 14; i++)//打印最后一行的*
	{
		printf(" ");//打印空格 
	}
	printf("*\n");//打印* 
	return 0;
}


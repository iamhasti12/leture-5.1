#include<stdio.h>

main()
{
	int age;
	
	printf("Enter your age= ");
	scanf("%d",&age);
	
	if(age<18 &&age>0)
	{
		printf("You are not eligible for voting");
	}
	else if (age==18)
	{
		printf("You are also eligible for voting");
	}
	else if (age>18)
	{
		printf("You are eligible for voting");
	}
	else
	{
		printf("Please enter proper age");
	}
}
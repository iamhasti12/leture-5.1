#include<stdio.h>

main()
{
 int num;
 printf("enter the number = ");
 scanf("%d",&num);
 
  if (num<0)
  {
  	printf("The value is negative");
  }
  else if (num==0)
  {
  	printf("The value is nuteral");
  }
  else if (num>0)
  {
  	printf("The value is positive");
  }
}
/*Write a program to find the factorial of a given number using while loop.*/

#include<stdio.h>
void main()
{
int n;
long int fact;  
scanf("%d",&n);  
fact=1;
int n1=n;
while(n>0)
{
  fact*=n;
  n--;
}
printf("The Factorial of %d is : %ld",n1,fact);
}
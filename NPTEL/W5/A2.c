/*Write a C program to count total number of digits of an Integer number (N).*/

#include <stdio.h>
int main()
{
int N; 
scanf("%d",&N); 
int c=0,n=N;
while(N>0)
{
  c++;
  N/=10;
}
printf("The number %d contains %d digits.",n,c);
}
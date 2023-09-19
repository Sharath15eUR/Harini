/*Write a C program to check whether a given number (N) is a perfect number or not.*/

#include <stdio.h>
int main()
{
int N; 
scanf("%d",&N);
int s=1;
for(int i=2;i<=N/2;i++)
{
  if(N%i==0)
    s+=i;
}
if(s==N)
  printf("%d is a perfect number.",N);
else printf("%d is not a perfect number.",N);
}
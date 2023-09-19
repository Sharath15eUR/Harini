/*Write a C program to check whether the given number(N) can be expressed as Power of Two (2) or not*/

#include <stdio.h>
int main()
{
int N;
scanf("%d",&N);
int n=N;
while(N>0)
{
  if(N%2==0)
   N=N/2;
   else break;
}
if(N==1)
  printf("%d is a number that can be expressed as power of 2.",n);
  else
  printf("%d cannot be expressed as power of 2.",n);
}
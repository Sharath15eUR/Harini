#include<stdio.h>
int HCF(int, int); //You have to write this function which calculates the HCF. 
	 
int main()
{
   int a, b, c, d, result;
   scanf("%d %d %d %d", &a, &b, &c, &d); /* Takes 4 number as input from the test data */
   result = HCF(HCF(a, b), HCF(c,d));
   printf("The HCF is %d", result);
}

//Complete the rest of the program to calculate HCF
int HCF(int x,int y)
{
  int min=x<y?x:y;
  for(int i=2;i<=min;i++)
  {
    if(x%i==0&&y%i==0)
      return i*HCF(x/i,y/i);
  }
  return 1;
}
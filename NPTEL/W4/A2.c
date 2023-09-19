/*The length of three sides are taken as input. Write a C program to find whether a triangle can be formed or not. If not display “This Triangle is NOT possible.” If the triangle can be formed then check whether the triangle formed is equilateral, isosceles, scalene or a right-angled triangle. (If it is a right-angled triangle then only print Right-angle triangle do not print it as Scalene Triangle).*/

#include<stdio.h>
int main()
{
int a,b,c; 
scanf("%d %d %d",&a, &b, &c); /*The length of three sides are entered from the test cases */
if(a+b>c && b+c>a && a+c>b)
{
  if(a==b && b==c)
    printf("Equilateral Triangle");
  else if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b)
    printf("Right-angle Triangle");
  else if((a==b&b!=c)||(b==c&c!=a)||(a==c&c!=b))
    printf("Isosceles Triangle");
  else printf("Scalene Triangle");
}
else
  printf("Triangle is not possible");
}
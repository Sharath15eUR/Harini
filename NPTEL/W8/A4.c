#include<stdio.h>
#include<string.h>

void reverse(char[], int, int);
    int main()
    {
        char str1[20];
        scanf("%s", str1); //The string is taken as input form the test data. 
     
/* Complete the program to print the string in reverse order using the function
void reverse(char[], int, int);
Use the printf statement as
printf("The string after reversing is: %s\n", str1); 
You can use different variable also.
*/
reverse(str1,strlen(str1),0);
return 0;
}
void reverse(char str1[20], int n, int x)
{
  printf("The string after reversing is: "); 
  for(int i=n-1;i>=0;i--)
    printf("%c",str1[i]);
}
#include<stdio.h>
int fib(int n)
{
if(n == 0)
{
return 0;
}
if(n == 1)
{
return 1;
}
else{
return fib(n-1) + fib(n-2);
}
}
void main()
{
int n=7 ,i;
printf("Enter n value:")'
scanf("%d",&n);
printf("Fibonacciseries \n");
for (i=0; i<n; i++)
{
printf(" %d \t",fib(i));
}
}

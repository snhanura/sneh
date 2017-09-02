#include<stdio.h>
void main()
{
int n,i;
printf("enter the value");
scanf("%d",n);
for(i=2;i<n/2;++i)
{
if(n%i==0)
{
flag=1;
break;
}
}
if(falg==0)
{
printf("it is a prime number");
}
else
{
printf("it is not a prime number");
}}

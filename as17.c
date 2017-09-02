#include<stdio.h>
void main()
{
int n,or,n1,sum=0;
printf("enter the number");
while(n>0)
{
or=n;
n1=n%10;
n2=n1*n1*n1;
sum=sum+n2;
n=n1/10;
}
if(or==n)
{
printf("the given number is amstrong number");
}
else
{
printf("the given number is not a amstrong number");
}}

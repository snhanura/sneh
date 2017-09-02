include<stdio.h>
void main()
{
int start,end,or,n1,sum=0;
printf("enter the values");
scanf("%d%d",&start,&end);
for(i=start;i<=end;start++)
{
or=start;
n1=start%10;
n2=n1*n1*n1;
sum=sum+n2;
start=n1/10;
}
if(or==start)
{
printf("the given number is amstrong number");
}
else
{
printf("the given number is not a amstrong number");
}}

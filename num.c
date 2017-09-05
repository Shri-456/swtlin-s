#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("enter a num");
scanf("%d",&a);
if(a<0)
{
printf("/n tne num is negative");
elseif(a>0)
{
printf("/n the num is positive");
}
elseif(a==0)
{
printf("\n the num is zero");
}
else
{
printf("/n it is invalid");
}
}

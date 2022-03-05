#include<stdio.h>
#include<conio.h>
void main()
{
int n,n1,max;
printf("Enter the  numbers for finding LCM",n,n1);
scanf("%d%d",&n,&n1);
max=(n>n1)?n:n1;
while(1)
{
if(max%n==0&&max%n1==0)
{
printf("LCM=%d",max);
break;
}
else
{
max++;
}}
getch();
}

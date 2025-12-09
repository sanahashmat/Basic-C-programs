//to check largest of 2 numbers using if
#include<stdio.h>
int main()
{
int a,b,large;
printf("Enter two integers:\n");
scanf("%d%d",&a,&b);
if(a>b)
{
printf("largest=%d",a);
}
if(b>a)
{
printf("largest=%d",b);
}
return 0;
}

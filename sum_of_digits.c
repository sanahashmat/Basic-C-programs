#include<stdio.h>
int main()
{
int d,n,sum;
sum=0;
printf("enter three digit number:");
scanf("%d",&n);
do{
    d=n%10;
    sum=sum+d;
    n=n/10;
}while(n>0);
printf("sum of digits=%d",sum);
return 0;
}



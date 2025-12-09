//to check sum of natural numbers using while loop
#include<stdio.h>
int main()
{
int i,n,sum=0;
printf("enter the value:");
scanf("%d",&n);
i=1;
while(i<=n)
{
sum=sum+i;
i++;
}
printf("sum of natural number %d",sum);
return 0;
}

//using do while loop
#include<stdio.h>
int main()
{
   int i,n,sum=0;
    printf("enter number:");
    scanf("%d",&n);
    i=1;
    do{
       sum=sum+i;
        i++;
    }while(i<=n);
    printf("sum=%d",sum);
    return 0;

}


//using for loop
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter number:");
    scanf("%d",&n);
       for(i=1;i<=n;i++)
       {
           sum=sum+i;
       }
    printf("sum %d",sum);
    return 0;
}

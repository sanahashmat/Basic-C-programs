//to check number is positive or negative
#include<stdio.h>
int main()
{
int x;
printf("enter a number:");
scanf("%d",&x);
x>0?printf("positive"):x<0?printf("negative"):printf("zero");
return 0;
}


//using if else
#include<stdio.h>
int main()
{

    int x;
    printf("enter a number:");
    scanf("%d",&x);
    if(x>0)
    {
        printf("positive");
    }
    else if(x<0)
    {
        printf("negative");
    }
    else{
        printf("zero");
    }
    return 0;
}


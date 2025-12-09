#include<stdio.h>
int main()
{
int b,h,l,w,r,circle,triangle,rectangle;
char ch;
float area;
do
{
printf("Enter 1 to find area of circle,2 to find area of triangle,3 to find area of rectangle,E-exit:\n");
ch=getchar();
printf("Enter your choice:\n");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("enter radius of circle:\n");
               scanf("%d",&r);
               area=3.142*r*r;
               printf("%f",area);
               break;
case 2:printf("enter base and height of triangle:\n");
                scanf("%d %d",&b,&h);
                area= 0.5*b*h;
                printf("%f",area);
                break;
case 3:printf("enter length and width of rectangle:\n");
                scanf("%d %d",&l,&w);
                area=l*w;
                printf("%f",area);
                break;
case 'E':       break;
default:printf("enter correct choice:");
}
}while(ch!='E');
return 0;
}

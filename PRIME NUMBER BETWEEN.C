
#include<stdio.h>
int main()
{
int initial,b,i,final;
printf("Enter two numbers(intervals): ");
scanf("%d %d",&initial,&final);
printf("Prime numbers between %d and %d are: ",initial,final);
while (initial<final)
{
b=0;
for(i = 2; i <= initial/2; ++i)
{
if(final%i==0)
{
b=1;
break;
}
}
if (b == 0)
printf("%d ",initial);
++initial;
}
return 0;
}

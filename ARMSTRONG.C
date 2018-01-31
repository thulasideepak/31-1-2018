#include<stdio.h>
int main()
{
int a,b,c,d,e;
printf("\n enter the values :");
scanf("%d%d%d",&a,&b,&c);
d=(a*a*a)+(b*b*b)+(c*c*c);
e=(a*100)+(b*10)+(c*1);
if(d==e)
{
printf("\n yes");
}
else
{
printf("\n no");
}
return 0;
}

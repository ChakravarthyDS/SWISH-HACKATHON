#include<stdio.h>
int main()
{
int a,b,sum=0;
scanf("%d %d\n",&a,&b);
while(a>0)
{
sum=sum+a;
int c= a*(b/100);
a=a-c;
}
printf("%d\n",sum);
return 0;
}

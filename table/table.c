#include<stdio.h>
int main()
{
int a;
int i;
printf("enter the number for table=");
scanf("%d",&a);

for(i=1;i<=10;i=i+1)
printf("\n%d X %d =%d",a,i,a*i);

getchar();
return 0;
}

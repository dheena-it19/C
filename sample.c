#include<stdio.h>
int main()
{
int n=5,i,j,k;
for(i=1;i<=n;i++)
{
for(j=i;j<n;j++)
{
printf(" ");
}
for(k=1;k<=i;k++)
{
printf("*");
}
printf("\n");
}
}






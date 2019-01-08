#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int f(int m, int n)
{int sum=0;
for(;m<=n;m++)
{sum+=m;}
return sum;}
int main()
{
int m=3.5,n=7;
printf("%d",f(m,n));
}

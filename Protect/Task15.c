#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int f(int m, int n) 
{
int x=m,y=n;
while (n) 
{int r=n;
n=m%n;
m=r;} 
return x*y/m;
}
int main()
{
int m=9,n=12;
printf("%d",f(m,n));
}

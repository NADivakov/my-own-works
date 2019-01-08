#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int f(int x, int y)
{
if((x==0)&&(y==0)) return 0;
else if(y==0) return 12/x;
else if(x==0) return 12/y;
else return 144/(x*y);
}
int main()
{
int x=4,y=3;
printf("%d",f(x,y));
}

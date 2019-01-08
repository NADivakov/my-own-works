#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int f(int m2, int m1, int m0)
{
return (m2*100)+(m1*10)+m0;
}
int main()
{int m2=5,m1=7,m0=3;
printf("%d", f(m2,m1,m0));
}

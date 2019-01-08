#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double f(double x, double y)
{
	return sqrt(x*x+y*y);
}
int main()
{
int x=3,y=4;
printf("%0.0lf",f(x,y));
}

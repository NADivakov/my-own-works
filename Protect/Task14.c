#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int f(int m)
{
if((m>=90)&&(m<=100)) return 5;
if((m>=80)&&(m<90)) return 4;
if((m>=70)&&(m<80)) return 3;
if((m>=60)&&(m<70)) return 2;
if(m<60) return 1;
}
int main()
{
  int m=100;
 printf("%d",f(m));
}

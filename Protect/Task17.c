#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool f(int n) 
{
int i,j=0;
for(i=2;i<n;i++){if(n%i==0)j=j+1;}
if(j>0)return false;
else return true;
}
int main()
{
int n=2;
for(;n<1002;n++){if(f(n)==1){printf("%d,",n);}}
printf("\n");
}

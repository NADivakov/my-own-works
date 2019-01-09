#include <stdlib.h>
#include <stdio.h>
#include <math.h> 
int f(int N, int n)
{
int number=N;
while(number%n!=0)
{number++;}
return number; 
}
int main()
{
int n=5,N=22;
printf("%d",f(N,n));
}

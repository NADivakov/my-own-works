#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int f(int M, int N)
{   
	int sum=0; 
	if(M%2==0){M++;}
	else {for(;M<=N;M+=2){sum+=M;}}
	return sum;
}
int main()
{
	int M=3,N=9;
	printf("%d",f(M,N));
}

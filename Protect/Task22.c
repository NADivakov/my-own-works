#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define N 20 
int main()
{
int i,array[N],min=13,max=-7;
srand(time(NULL));
for(i=0;i<N;i++){array[i]=-6+rand()%12;}
for(i=0;i<N;i++){printf("%d ",array[i]);}
for(i=0;i<N;i++){if(array[i]<min){min=array[i];}}
for(i=0;i<N;i++){if(array[i]>max){max=array[i];}}
printf("\n");
printf("min=%d\n max=%d",min,max);
}

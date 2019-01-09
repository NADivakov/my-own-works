#include <stdlib.h>
#include <stdio.h>
#include <math.h> 
int main()
{
int i,array[10],swaper;
for(i=0;i<10;i++){scanf("%d",&array[i]);}
for(i=0;i<5;i++){swaper=array[i];array[i]=array[9-i];array[9-i]=swaper;}
for(i=0;i<10;i++){printf("%d ",array[i]);}
}

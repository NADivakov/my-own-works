#include <stdlib.h>
#include <stdio.h>
#define M 12
#define N 24
int main()
{
int i,j,array[M][N];
for(i=0;i<M;i++){printf("\n");for(j=0;j<N;j++){array[i][j]=0+rand() %10; printf("%d ",array[i][j]);}}
}

#include <stdlib.h>
#include <stdio.h>
#define M 5
#define N 5
int main()
{
int i,j,array[M][N],sum=0,sumarr[M];
srand(time(NULL));
for(i=0;i<M;i++){printf("\n");sumarr[i]=sum;sum=0;for(j=0;j<N;j++){array[i][j]=0+rand() %10; printf("%d ",array[i][j]);sum+=array[i][j];}}
sumarr[i]=sum;
printf("\n");
for(i=1;i<M+1;i++){printf("%d  ",sumarr[i]);
}
}

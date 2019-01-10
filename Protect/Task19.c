#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#define K 5 

int fmina(int *arr, int N) { 
int min = arr[0], i; 
for (i = 0; i < K; ++i) 
if (min > arr[i]) 
min = arr[i]; 
return min; 
} 

int main() 
{ 
srand(time(NULL)); 
int arr[K], min = 0, i; 
for (i = 0; i < K; ++i) { 
arr[i] = rand() % 99; 
printf("%d ", arr[i]); 
} 
printf("\n"); 
printf("%d\n", fmina(arr, min)); 
system("pause"); 
} 

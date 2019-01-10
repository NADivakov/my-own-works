#include <stdio.h> 
#include <stdlib.h> 

void f(int *m1, int *m0, int N) { 
*m0 = N % 10; 
*m1 = (N - *m0) / 10; 
} 

int main() 
{ 
int m1, m0, num; 
printf("Enter number: "); 
scanf("%d", &num); 
f(&m1, &m0, num); 
printf("m1: %d\nm2: %d\nnum: %d\n", m1, m0, num); 
system("pause"); 
} 

#include <stdio.h> 
#include <stdlib.h> 

void swap(int *a, int *b) { 
int buf = *a; 
*a = *b; 
*b = buf; 
} 

int main() 
{ 
int a = 1, b = 2; 
printf("Standart: %d %d\n", a, b); 
swap(&a, &b); 
printf("Swap: %d %d\n", a, b); 
system("pause"); 
} 

#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

void sq(int rows, int cols) { 
int i, j; 
for (i = 0; i < rows; ++i) { 
for (j = 0; j < cols; ++j) { 
printf("*"); 
} 
printf("\n"); 
} 
} 

int main() 
{ 
sq(10, 10); 
system("pause"); 
} 

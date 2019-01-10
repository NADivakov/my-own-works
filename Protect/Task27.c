void sq(int rows, int cols, char ch) { 
int i, j; 
for (i = 0; i < rows; ++i) { 
for (j = 0; j < cols; ++j) { 
printf("%c", ch); 
} 
printf("\n"); 
} 
} 

int main() 
{ 
sq(10, 10, '#'); 
system("pause"); 
}

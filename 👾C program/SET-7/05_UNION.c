#include <stdio.h> 
union sum 
{ 
    int a; 
    int b; 
}; 
  
int main() 
{ 
    union sum s; 
    s.a = 5; 
    s.b = 10; 
    printf("Sum is %d", s.a + s.b); 
    return 0; 
}
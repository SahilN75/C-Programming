#include <stdio.h>
/* Function declaration */ void display();
int main()
{ display();
display();
return 0; }
/* Function definition */
void display()
{ int n1 = 10; /* static variables are declared only once */
static int n2 = 10;
printf("Local n1 = %d, Static n2 = %d\n", n1, n2);
n1++; // Increment local variable
n2++; // Increment static variable
}
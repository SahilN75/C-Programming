#include <stdio.h> /* function declaration */
void next();
void display();
static int counter = 7; /* global variable */
int main()
 {
 while(counter<10) {
 next();
 counter++; }
display();
//return 0;
}
void next() { /* function definition */
 static int iteration = 13; /* local static variable */
 iteration ++; //14
 printf("iteration=%d and counter= %d\n", iteration, counter);
}
void display()
{
printf("%d",counter);
}

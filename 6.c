#include<stdio.h>
int find_factorial(int n);
int main()
{
 int num, fact;
 //Ask user for the input and store it in num
 printf("\nEnter any integer number:");
 scanf("%d",&num); //5
 //Calling our user defined function
 fact =find_factorial(num); //function call
 //Displaying factorial of input number
 printf("\nfactorial of %d is: %d",num, fact);
 // return 0;
}
int find_factorial(int n)
{
 //Factorial of 0 is 1
 if (n==0)
 return(1); //return constant
 //Function calling itself: recursion
 return(n*find_factorial(n-1));
}

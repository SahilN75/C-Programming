#include <stdio.h>
int main()
{
 auto int j = 1;
//auto int j ;
 {
 auto int j= 2;
 {

 auto int j = 3;
 printf ( " %d ", j); //j=3 j=1, j=2, j=3
}

 printf ( "\t %d ",j);
 }
 printf( "%d\n", j);}
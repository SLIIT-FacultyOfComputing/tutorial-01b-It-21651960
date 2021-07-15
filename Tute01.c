/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

int x,y;
float avg;//marks

printf ("Enter marks  :");//printing 
scanf ("%d%d",&x,&y);//input marks

avg= (x+y)/2;
printf("Average :%.2f",avg);
  
  return 0;
}


/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  int m1,m2;
  float cal,ave;

  printf("Enter marks of subject 1 :");
  scanf("%d", &m1);

  printf("Enter marks of subject 2 :");
  scanf("%d", &m2);

  cal = m1 + m2;
  printf("Sum : %.2f",cal);
  ave = cal / 2;
  printf("\nAverage : %.2f",ave);
  return 0;
}


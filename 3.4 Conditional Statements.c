#include <stdio.h>

int main() {
  int marks;
  printf("Enter your marks: ");
  scanf("%d", &marks);
  printf("Marks are: %d\n", marks);

  if (marks > 90 && marks <= 100) {
    printf("A");
  } else if (marks <= 90 && marks > 80) {
    printf("B");
  } else if (marks <= 80 && marks > 70) {
    printf("Fail");
  } else if (marks <= 70 && marks > 60) {
    printf("Fail");
  } else if (marks <= 60 && marks > 50) {
    printf("Fail");
  } else if (marks <= 30 && marks >= 0) {
    printf("Fail");
  } else if (marks <= 30 && marks >= 0) {
    printf("Fail");
  } else {
    printf("Invalid marks\n");
  }
  printf("\nThank You");
}

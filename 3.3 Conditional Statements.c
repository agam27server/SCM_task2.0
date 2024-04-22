#include <stdio.h>

int main() {
  int marks;
  printf("Enter your marks: ");
  scanf("%d", &marks);
  printf("Marks %d:\n",marks);

  if (marks > 30 && marks<=100) {
    printf("PASS");
  } else if (marks <= 30 && marks>=0) {
    printf("Fail");
  } else {
    printf("Invalid marks");
  }
}
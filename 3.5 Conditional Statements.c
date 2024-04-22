#include <stdio.h>

int main() {
  char ch;
  printf("Enter your character: ");
  scanf("%c", &ch);
  printf("Character is: %c\n", ch);

  if (ch >= 'A' && ch <= 'Z') {
    printf("Upper Case");
  }
  else {
    printf("Lower Case\n");
  }
  printf("\nThank You");
}

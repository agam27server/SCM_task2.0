#include <stdio.h>

int main() {
  char day;
  printf("Enter day: ");
  scanf("%c", &day);

  switch (day) {
  case "mon":
    printf("Monday\n");
    break;
  case "tues":
    printf("Tuesday\n");
    break;
  case "wed":
    printf("Wednesday\n");
    break;
  case "thurs":
    printf("Thursday\n");
    break;
  case "fri":
    printf("Friday\n");
    break;
  case "sat":
    printf("Saturday\n");
    break;
  case "sun":
    printf("Sunday\n");
    break;
  default:
    printf("Invalid Day");
  }
}

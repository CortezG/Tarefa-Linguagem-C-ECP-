#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char date[11];
  int day, month, year;

  printf("Enter a date in the format DD/MM/YYYY: ");
  scanf("%10s", date);

  if (strlen(date) != 10 || date[2] != '/' || date[5] != '/' ||
      !isdigit(date[0]) || !isdigit(date[1]) || !isdigit(date[3]) ||
      !isdigit(date[4]) || !isdigit(date[6]) || !isdigit(date[7]) ||
      !isdigit(date[8]) || !isdigit(date[9])) {
    printf("Invalid date format\n");
    return 1;
  }

  day = (date[0] - '0') * 10 + (date[1] - '0');
  month = (date[3] - '0') * 10 + (date[4] - '0');
  year = (date[6] - '0') * 1000 + (date[7] - '0') * 100 +
         (date[8] - '0') * 10 + (date[9] - '0');

  printf("Day: %d\nMonth: %d\nYear: %d\n", day, month, year);

  return 0;
}

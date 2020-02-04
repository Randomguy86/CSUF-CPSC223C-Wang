// Temperature Table

#include <stdio.h>

int (*convert)(int);

int cel_to_fahr(int temp) {
  return (int)(5.0 / 9 * (temp - 32.0));
}

int fahr_to_cel(int temp) {
  return (int)(9.0 / 5 * (temp + 32.0));
}

#define BUFLEN 100

void print_header(char first, char second) {
  char buf[BUFLEN];

  printf("==================================\n");
  sprintf(buf, "  %c\t\t  %c", first, second);
  printf("%s\n", buf);
  printf("==================================\n");
}

void temp_table(char first, char second, int (*convert)(int), int start, int stop, int step) {
  print_header(first,second);
  int temp = start;
  while (temp <= stop) {
    int other = convert(temp);
    printf("%3d %c\t\t%3d %c\n", temp, first, other, second);
    temp += step;
  }
  printf("\n");
}

int main() {
  temp_table('F', 'C', cel_to_fahr, -80, 300, 20);
  temp_table('C', 'F', fahr_to_cel, -60, 150, 10);

  return 0;
}

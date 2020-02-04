#include <stdio.h>
#include <ctype.h>

#define IN 1
#define OUT 0
#define BUFLEN 50
#define MAX_WORD_LEN 16
#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
  char wordbuf[BUFLEN];
  int index = 0;
  memset(wordbuf, 0, sizeof(wordbuf));

  long nc, n1, nw;
  int c, state = OUT;
  nc = n1 = nw = 0;
  int words[MAX_WORD_LEN];
  memset(words, 0, sizeof(words));

  while((c = getchar()) != EOF) {
    ++nc;
    if (isalpha(c)) { wordbuf[index++] = c; }

    if (c == '\n') { ++n1; }
    if (c == ' ' || c == '\n' || c == 't') { state = OUT; }
    else if (state == OUT) {
      state = IN;
      ++nw;
      words[index]++;
      wordbuf[0] = wordbuf[index];
      index = 0;
    }
  }
  int amount;
  printf("%ld chars, %ld words, and %ld lines\n", nc, nw, n1);
  for (int i = 0; i < MAX_WORD_LEN; ++i) {
    amount = words[i];
    printf("%d -- ", i);
    for (int n = 0; n < amount; ++n)
      printf("*");
    printf("\n");
  }
  return 0;
}

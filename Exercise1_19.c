#include <stdio.h>
#define MAXIMUM 1000

int getline(char s[], int lim) {
  int c, i;
  for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
s[i] = '\0';
return i;
}

void reverse(char s[]) {
  int i = 0, c = 0;
  char temp;
  while (s[i] != '\0')
    ++i;
  c = i - 1;
  for (i = 0; i < c; i++) {
   temp = s[i];
   s[i] = s[c];
   s[c] = temp;
   --c;
  }
}

int main(int argc, const char * argv[]) {
  int c;
  char input[MAXIMUM];
  while ( (c = getline(input, MAXIMUM)) > 0 ) {
    reverse(input);
    printf("%s\n", input);
  }
  return 0;
}

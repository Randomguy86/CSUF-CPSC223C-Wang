#define MAXIMUM 1000

#include <stdio.h>
#include <stdlib.h>

int getlinerevised(char s[], int lim);
void copy(char to[], char from[]);

int main(int argc, const char * argv[]) {
  int length, c;
  char input[MAXIMUM];
  char tempinput[MAXIMUM];
  while ((c=getchar())!=EOF) {
  length = getlinerevised(input, MAXIMUM);
  copy(tempinput, input);
  printf("%s\n", tempinput);
  }
}

int getlinerevised(char s[], int lim) {
  int c, i, l = 0;
  for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
    s[i] = c;
  if ((c != ' ') && (c != '\t'))
    l = i;
  s[l + 1] = '\0';
  return (l + 1);
}

void copy(char to[], char from[])
 {
 int i;
 i = 0;
 while ((to[i] = from[i]) != '\0')
  ++i;
 }

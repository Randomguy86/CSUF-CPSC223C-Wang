
#include <stdio.h>
#define MAXIMUM 1000

int main()
{
  int c, i = 0;
  char input[MAXIMUM];
  char longest[MAXIMUM];
  while ((c = getline(input, MAXIMUM)) > 0)
    if (c > i) {
      c = i;
      copy(longest, input);
    }
if (i > 0)
  printf("%s", longest);
return 0;
}

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


void copy(char to[], char from[])
 {
 int i;
 i = 0;
 while ((to[i] = from[i]) != '\0')
 ++i;
 }

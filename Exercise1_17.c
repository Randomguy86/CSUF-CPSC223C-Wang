#include <stdio.h>

#define LENGTH 81

int getline(char s[], int lim);

int main(int argc, const char * argv[]) {
 int c, length = 0;
 char input[LENGTH];
 while ( (length = getline(input, LENGTH)) != 0 ) {
   if ( (length == LENGTH - 1) && (input[length - 1] != '\n')) {
     printf("%s", input);
     while ((c = getchar()) != EOF && (c != '\n'))
        putchar(c);
     putchar('\n');
    }
  }
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

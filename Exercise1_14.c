#define CHAR 128

#include <stdio.h>

int main(int argc, const char * argv[]) {
  int i,c,n;
  int letter[CHAR];

  for(i=0;i<CHAR;++i)
    letter[i] = 0;

  while((c=getchar())!=EOF)
    ++letter[c];

  for( i=0 ;i < CHAR;i++)
  {
    putchar(i);
    for(n=0;n < letter[i];n++)
      printf("*");
    putchar('\n');
  }
  return 0;
}

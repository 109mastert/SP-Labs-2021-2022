#include <stdio.h>
#include <ctype.h>
#include <string.h>

void writeToFile() {
  FILE *f = fopen("text.txt", "w");
  char c;
  while((c = getchar()) != '#') {
    fputc(c, f);
  }
  fclose(f);
}
int smcheck(char a)
{
    a=tolower(a);
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
        return 1;
    else
        return 0;
}


int main() {

  writeToFile();
  char ch,pch= 'b';
  int br=0;
  FILE *in = fopen ("text.txt","r");
  for(;;)
  {
      if((ch=fgetc(in))==EOF)
        break;
      if(smcheck(ch))
      {
          if(smcheck(ch) && smcheck(pch))
          {
              printf("%c%c\n",tolower(pch),tolower(ch));
              br++;
          }
          pch=ch;
      }
      else
        pch='b';
  }
  printf("%d",br);

  fclose(in);
  // Vasiot kod zapocnuva od tuka



  return 0;
}

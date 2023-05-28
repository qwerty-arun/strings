# include <stdio.h>
# include <string.h>
int main()
{
  char str[]="QWERTY";
  int len=strlen(str);
  char revstr[len];
  int i=0,j=len-1;
  revstr[0]='\0';
  while(j>=0)
  {
    revstr[i]=str[j];
    j--;
 i++;
  }
printf("Reversed String: %s",revstr);
}

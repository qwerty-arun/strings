# include <stdio.h>
# include <string.h>
int main()
{
  char str1[6]="Hello";
  char str2[6]="World";
  char str[10];
  int i=0,j=0;
while(str1[i]!='\0')
  {
str[i]=str1[i];
i++;
  }
  while(str2[j]!='\0')
  {
    str[i]=str2[j];
    i++;
    j++;
  }
 printf("%s",str);
}

# include<stdio.h>
int main()
{
  char str[10];
  printf("Enter string: \n");
  scanf("%s",str);
  int i=0;
  while(str[i]!='\0')
  {
    i++;
  }
  printf("The length of the string: %d",i);
}

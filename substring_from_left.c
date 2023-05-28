# include <stdio.h>
int main()
{
  int n;
  char str[10];
  printf("Enter string: \n");
  scanf("%s",str);
  printf("Enter no. of characters to be extracted from left: \n");
  scanf("%d",&n);
  char ext[10];
  int i=0;
  while(i<=n-1)
  {
    ext[i]=str[i];
    i++;
  }
  printf("The extracted string is: %s",ext);
}

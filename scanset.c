# include<stdio.h>
int main()
{
  char str[10];
  printf("Enter string: \n");
  scanf("%[aeiou]",str);//Accepts only vowels in the input
  //scanf("%[^aeiou]",str);//Accepts only consonants in the input
  printf("The string is :%s",str);
  return 0;
}

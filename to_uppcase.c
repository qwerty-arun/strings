#include <stdio.h>
int main()
{
    char str[10];
    char up[10];
    printf("Enter String: \n");
    scanf("%s", str);
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
    printf("The uppercase string is: %s", str);
    return 0;
}

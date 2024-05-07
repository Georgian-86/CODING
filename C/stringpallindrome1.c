#include <stdio.h>
#include <string.h>
int main()
{
    char str[100] , temp;
    char str1[100];
    int i, j;
    printf("\n enter  the string : ");
    gets(str);
    //displaying original string
    printf("Original String is: %s\n", str);
    //converting to uppercase
    for (i = 0; i <= strlen(str) - 1; i++)
    {
        if ('a' <= str[i] && str[i] <= 'z')
            str[i] = str[i] + 'A' - 'a';
    }
    //copying the string into another array
    strcpy(str1, str);
    //sorting the characters in ascending order using bubble sort algorithm
    for (i = 0; i < strlen(str1); i++)
    {
        for (j = i + 1; j < strlen(str1); j++)
        {
            if (str1[i] > str1[j])
            {
                temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;     
            }
        }
    }
}
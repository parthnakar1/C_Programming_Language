// The library function to find length of string : strlen(str). Return type is integer.
#include<stdio.h>
#include<string.h>

int slen(char a[])
{
    int i = 0;
    while(a[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char city1[] = "Mumbai";
    char city2[] = "New York";

    printf("String 1 = %s\n",city1);
    printf("String 2 = %s\n",city2);

    printf("Lengths by calculation = %d, %d\n",slen(city1),slen(city2));
    printf("Lengths by function = %d, %d\n",strlen(city1),strlen(city2));

    return 0;
}
/* Expected output:
String 1 = Mumbai
String 2 = New York
Lengths by calculation = 6, 8
Lengths by function = 6, 8
*/
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char first[255], last[255], age[2];

    printf("Enter your first name: ");
    fgets(first, 255, stdin);
    first[strlen(first)-1] = '\0'; /* remove the newline at the end */

    printf("Now enter your last name: ");
    gets(last); /* buffer overflow? what's that? */

    printf("Now enter your age: ");
    gets(age); /* didn't conduct age */

    printf("Hello %s %s!\n", first, last, age);
    return 0;
}


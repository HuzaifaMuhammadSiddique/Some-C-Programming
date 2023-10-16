#include <stdio.h>

int main(void)
{
    int age = 21;
    double weight = 59.8;
    double height = 176.49;

    printf("%i \n", age);
    printf("%f \n", weight);
    printf("%f \n", height);
    printf("Hello World! \n");

    char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    printf("%s \n", greetings);

    char name[] = "Huzaifa";
    char fullName[] = "Huzaifa Muhammad Siddique.";

    char firstLetter = fullName[0];

    printf("%s \n", name);
    printf("%s \n", fullName);
    printf("%c \n", firstLetter);

    printf("My weight is %.1f \n", weight);
    printf("My height is %.2f \n", height);

    printf("%lu \n", sizeof(name));
    
}

#include <stdio.h>

int main() {
    int age;
    char status;

    printf("Enter your age: ");
    scanf("%d", &age);

    status = (age > 22) ? 'M' : 'U';

    if (status == 'M')
        printf("Married\n");
    else
        printf("Unmarried\n");

    return 0;
}

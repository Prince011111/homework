#include <stdio.h>
#include <string.h>
#include <ctype.h>
int validatePassword(char password[]) {
    int uppercase, lowercase, number, special, length;
    uppercase = lowercase = number = special = length = 0;
    if (strlen(password) < 8) {
        return 0;
    }
    for (int i = 0; i < strlen(password); i++) {
        if (isupper(password[i])) {
            uppercase++;
        } else if (islower(password[i])) {
            lowercase++;
        } else if (isdigit(password[i])) {
            number++;
        } else if (strchr("!@#$%^&*()-+?_=,<> ", password[i])) {
            special++;
        }
        length++;
    }
    if (uppercase < 2 || lowercase < 2 || number < 2 || special < 2) {
        return 0;
    }

    return 1;
}

int main() {
    char password[50];

    printf("Enter the password: ");
    scanf("%s", password);

    if (validatePassword(password)) {
        printf("The password is valid.\n");
    } else {
        printf("The password is not valid.\n");
    }

    return 0;
}
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Bir karakter girin: ");
    scanf("%c", &ch);

    if (isalpha(ch)) {
        printf("'%c' bir alfabetik karakterdir.\n", ch);
    } else {
        printf("'%c' bir alfabetik karakter değildir.\n", ch);
    }

    if (islower(ch)) {
        printf("'%c' bir küçük harfidir.\n", ch);
    } else {
        printf("'%c' küçük harf değildir.\n", ch);
    }

    if (isupper(ch)) {
        printf("'%c' bir büyük harfidir.\n", ch);
    } else {
        printf("'%c' büyük harf değildir.\n", ch);
    }

    if (isdigit(ch)) {
        printf("'%c' bir rakamdır.\n", ch);
    } else {
        printf("'%c' bir rakam değildir.\n", ch);
    }

    if (isspace(ch)) {
        printf("'%c' bir boşluk karakteridir.\n", ch);
    } else {
        printf("'%c' bir boşluk karakteri değildir.\n", ch);
    }

    char upperChar = toupper(ch);
    printf("'%c' karakterinin büyük hali: '%c'\n", ch, upperChar);

    char lowerChar = tolower(ch);
    printf("'%c' karakterinin küçük hali: '%c'\n", ch, lowerChar);

    return 0;
}

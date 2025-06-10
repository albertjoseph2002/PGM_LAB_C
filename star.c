#include <stdio.h>

void main() {
    char str[100];
    int spaces = 0, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == ' ') {
            spaces++;
        }
        else{
            char ch=str[i];
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        }
    

        printf("Spaces: %d\n", spaces);
        printf("Vowels: %d\n", vowels);
        printf("Consonants: %d\n", consonants);


}
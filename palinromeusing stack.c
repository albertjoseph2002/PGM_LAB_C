#include <stdio.h>
#include <string.h>

// Function to push an element onto the stack
void push(char stack[], int *top, char element) {
    stack[++(*top)] = element;
}

// Function to pop an element from the stack
char pop(char stack[], int *top) {
    if (*top == -1) {
        return '\0';
    } else {
        return stack[(*top)--];
    }
}

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int length = strlen(str);
    char stack[length];
    int top = -1;

    // Push all characters of the string to the stack
    for (int i = 0; i < length; i++) {
        push(stack, &top, str[i]);
    }

    // Check characters from stack with the original string
    for (int i = 0; i < length; i++) {
        if (str[i] != pop(stack, &top)) {
            return 0; // Not a palindrome
        }
    }

    return 1; // Is a palindrome
}

int main() {
    char str[] = "madam";
    
    if (isPalindrome(str))
        printf("\"%s\" is a palindrome.\n", str);
    else
        printf("\"%s\" is not a palindrome.\n", str);

    return 0;
}

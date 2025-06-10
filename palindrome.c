#include <stdio.h>
#include <string.h>

void push(char ch);
char pop();
char stack[10];
int top = -1;

int main() {
    char str[10];
    int res = 1; // Initialize to 1 (true)
    
    printf("Enter the string: ");
    gets(str);
    
    int l = strlen(str);
    
    // Push all characters of the string to the stack
    for (int i = 0; i < l; i++) {
        push(str[i]);
    }
    
    // Check characters from stack with the original string
    for (int i = 0; i < l; i++) {
        if (str[i] != pop()) {
            res = 0; // Not a palindrome
            break;
        }
    }
    
    if (res == 1) {
        printf("\n%s is a palindrome.\n", str);
    } else {
        printf("\n%s is not a palindrome.\n", str);
    }
    
    return 0;
}

void push(char ch) {
    if (top < 9) { // Prevent stack overflow
        stack[++top] = ch;
    } else {
        printf("Stack overflow\n");
    }
}

char pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        return '\0'; // Return null character if stack is empty
    } else {
        return stack[top--];
    }
}

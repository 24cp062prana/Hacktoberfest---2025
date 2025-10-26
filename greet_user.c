#include <stdio.h>
#include <string.h>

int main() {
    char name[50];

    // Prompt the user for their name
    printf("Enter your name: ");
    
    // Using fgets() to allow spaces in the name and prevent buffer overflow
    if (fgets(name, sizeof(name), stdin) != NULL) {
        // Remove the trailing newline character if present (from fgets)
        name[strcspn(name, "\n")] = '\0';
    }

    // Display the greeting
    printf("Hello, %s! Welcome to the C world.\n", name);

    return 0;
}

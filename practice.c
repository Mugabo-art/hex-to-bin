#include <stdio.h>
#include <string.h>

// Function to convert binary to hexadecimal
void binaryToHex(char binary[]) {
    int binaryLength = strlen(binary);
    int decimal = 0, base = 1;

    // Convert binary to decimal
    for (int i = binaryLength - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += base;
        }
        base *= 2;
    }

    // Convert decimal to hexadecimal
    printf("Hexadecimal equivalent: 0x%X\n", decimal);
}

int main() {
    char binary[65]; // Maximum 64-bit binary number + null terminator

    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Validate the input
    for (int i = 0; i < strlen(binary); i++) {
        if (binary[i] != '0' && binary[i] != '1') {
            printf("Invalid binary number!\n");
            return 1;
        }
    }

    binaryToHex(binary);

    return 0;
 }

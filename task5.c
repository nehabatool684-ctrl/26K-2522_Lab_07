#include <stdio.h>

int main() {
    // 1. Declare a 2D character array char sentences
    char sentences[3][100];

    // 2 & 3. Read 3 semicolon-separated sentences using Negated Scanset %[^;]
    printf("Enter a paragraph with 3 sentences separated by semicolons:\n");
    printf("(Example: Learn C programming; Nested loops are powerful; Practice daily)\n\n");
    
    for (int i = 0; i < 3; i++) {
        // %99[^;\n] reads text until a semicolon or newline is reached
        // %*c discards the semicolon delimiter so the buffer stays clean
        scanf(" %99[^;\n]%*c", sentences[i]);
    }

    printf("\n--- Analysis Results ---\n");

    // 4. Write Nested Loops to count and display vowels
    // Outer loop for rows (each sentence)
    for (int r = 0; r < 3; r++) {
        int vowel_count = 0;

        // Inner loop for string characters (runs until the null terminator '\0')
        for (int c = 0; sentences[r][c] != '\0'; c++) {
            char ch = sentences[r][c];

            // Case-insensitive check matching both lowercase and uppercase vowels
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowel_count++;
            }
        }

        // Display the results for the current sentence row
        printf("Sentence %d: \"%s\"\n", r + 1, sentences[r]);
        printf("Vowel Count: %d\n\n", vowel_count);
    }

    return 0;
}

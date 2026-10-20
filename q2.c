#include <stdio.h>
#include <ctype.h>

int main() {
    char logs[3][3][30]; 
    int uppercase_count = 0;

    for(int i=0;i<3;i++){
        printf("Enter log %d (format: User,Status,Time): ", i);
        scanf(" %[^,],%[^,],%[^\n]", logs[i][0], logs[i][1], logs[i][2]);
    }

    printf("\n--- Parsed Logs ---\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%s ", logs[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            for(int k=0; logs[i][j][k] != '\0'; k++){
                if(logs[i][j][k] >= 'A' && logs[i][j][k] <= 'Z'){
                    uppercase_count++;
                }
            }
        }
    }

    printf("\nTotal Uppercase Letters: %d\n", uppercase_count);
    return 0;
}


#include <stdio.h>

int main() {
    float sensors_data[3][4];
    int defected_hardware = 0;

    // 1. Input sensor data
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            printf("Enter sensors data for day %d hardware %d: \n", row + 1, col + 1);
            scanf("%f", &sensors_data[row][col]);
        }
    }

    // 2. Print initial matrix
    printf("\n-------------- Initial Sensor Data ---------\n");
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            printf("%.2f\t", sensors_data[row][col]);
        }
        printf("\n");
    }

    // 3. Ask for the defective hardware column
    printf("\nEnter column index for defected hardware (index: 0-3):\n ");
    scanf("%d", &defected_hardware);

    // Validate user input to prevent crashes
    if (defected_hardware < 0 || defected_hardware > 3) {
        printf("Invalid column index!\n");
        return 1;
    }

    // 4. Safely shift columns left to overwrite the defective hardware column
    // The loop stops at col < 3 so that col + 1 never goes out of bounds (max 3)
    for (int row = 0; row < 3; row++) {
        for (int col = defected_hardware; col < 3; col++) {
            sensors_data[row][col] = sensors_data[row][col + 1];
        }
    }

    // 5. Print updated matrix (The last column will now hold duplicate or old data)
    printf("\n--- Updated Sensor Data (Shifted) ---\n");
    for (int row = 0; row < 3; row++) {
        // We only print up to column 3 (indices 0 to 2) because one column was removed
        for (int col = 0; col < 3; col++) {
            printf("%.2f\t", sensors_data[row][col]);
        }
        printf("\n");
    }

    return 0;
}

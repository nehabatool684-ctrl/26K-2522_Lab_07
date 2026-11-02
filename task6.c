#include <stdio.h>
void insertion(int target_row, int shifts[4][3]) {
    for (int row = 2; row >= target_row; row--) {
        for (int col = 0; col < 3; col++) {
            shifts[row + 1][col] = shifts[row][col]; 
        }
    }
    
    int zeroth, first, second = 0;
    printf("enter the frist elementy for the shifts array: "); 
    scanf("%d", &zeroth);
    printf("enter the second elementy for the shifts array: "); 
    scanf("%d", &first);
    printf("enter the third elementy for the shifts array: "); 
    scanf("%d", &second);
    
    shifts[target_row][0] = zeroth;
    shifts[target_row][1] = first;
    shifts[target_row][2] = second;
    
    for (int row = 0; row < 4; row++) {
        for (int col = 0; col < 3; col++) {
            printf(" %d ", shifts[row][col]);
        }
        printf("\n");
    }
}

int main() {
    int shifts[4][3];
    int target_row = 0;
    
    // FIXED: Only input up to row < 3 (leaving the 4th row empty for the shifted data)
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            printf("enter production data for workstation %d, shifts %d: ", row + 1, col + 1);
            scanf("%d", &shifts[row][col]);
        }
    }
    
    // FIXED: Only print up to row < 3 since the 4th row has not been filled yet
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            printf(" %d ", shifts[row][col]);
        }
        printf("\n");
    }
    
    printf("enter targeted row for insertion (0-2): ");
    scanf("%d", &target_row);
    
    // FIXED: Changed logical operator from || (OR) to && (AND) and adjusted bounds to <= 2
    if (target_row >= 0 && target_row <= 2) {
        insertion(target_row, shifts); // FIXED: Removed the invalid "void" prefix and incorrect [4][3] subscripts
    }
    else {
        printf("invalid row entered do again!\n");
        printf("enter targeted row for insertion (0-2): ");
        scanf("%d", &target_row);
        insertion(target_row, shifts); // FIXED: Removed the invalid "void" prefix and incorrect [4][3] subscripts
    }
    
    return 0;
}

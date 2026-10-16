#include <stdio.h>
#include<stdlib.h>

int main() {
    char students_name[3][50];
    int marks[3][3]={};

    for(int i=0;i<3;i++){
        //for(int j=0;j<3;j++){}
        printf("enter name of %d student:\n",i+1);
        scanf(" %[^\n]",students_name[i]);
    }
    //for(int i=0; i<3;i++){
        //for(int j=0;j<3;j++){}
        //printf("enter name of %d student:\n",i);
        //printf("%s",students_name[i]);}
    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
        printf("enter marks for %s for subject %d :\n",students_name[i],j+1);
        scanf("%d",&marks[i][j]);
    }
    }
    printf("----------------Student Report---------------\n");
    int sum=0;
    float average=0.00;
    for(int i=0; i<3;i++){
        puts(students_name[i]);
        sum=0;
        average=0;
        for(int j=0;j<3;j++){
        printf(" Subject %d: %d\n",j+1,marks[i][j]);
        sum=sum+marks[i][j];
    }
        average=sum/3;
        printf("Average: %.2f\n\n",average);
        
    }
printf("-----------------------------------------------");
    
    return 0;
}

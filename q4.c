#include <stdio.h>
#include<string.h>

int main() {
    char animal[3][100];
    int longest=0;

    for(int i=0;i<3;i++){
        printf("Enter %d group;\n",i+1);
        scanf(" %[^\n]",animal[i]);
        getchar();// eats he space joh ham scanf main dalrahe hain takye ham directly 3rd input per jump na karen and skipping 2nd input!! so very impo
    }
    //for(int i=0;i<3;i++){
        //printf("%s ",animal[i]);
        //printf("\n");
    //}
    
    
    int count=0;
    int max=0;
    int j=0;
    for(int i=0; i<3; i++){
        for(int k=0; animal[i][k]!='\0';k++){
           if(animal[i][k]!=' '){ // changed while to if
               count=count+1;
               if(max<count){
                   max=count;
               }
           } else {
               count=0; // reset only when space comes
           }
        }
        count=0;
    }
    printf("max length is:%d",max);
}



//
// Created by jotaSV on 15/10/2019.
//

#include <stdio.h>
#include "pr05.h"
int main_pr05(){
    char str[]="olaxxxmeuxxxmundo";
    char substr[]="mundo";
    int mA[MAXCOLS][MAXCOLS] = { {1,2,3},{4,5,6},{7,8,9} };
    int mB[][MAXCOLS]= { {9,8,7},{6,5,4},{3,2,1} };
    int mC[MAXCOLS][MAXCOLS];
//    int index = indexSubString(str,substr);
//    if (index != -1){
//        printf("'%s' existe em '%s' apartir da posição %d", substr,str,index);
//    }else {
//        printf(" '%s' nao existe em '%s' ", substr,str);
//    }

    //deleteRepeatedChars(str);
    printMatrix(mA,MAXCOLS,MAXCOLS);

    printf(" %d\n",multiplyLineColumn(mA,mB,mC,0,0,3));
}


int indexSubString(char str[],char sub[]){
    int i=0 , j=0,k;
    for(i = 0 ; str[i]!='\0';i++){
        if(str[i]==sub[0]){
            for(j=1;sub[j]!='\0';j++){
                if(sub[j]!=str[i+j]){
                    break;
                }
            }
            if(sub[j]=='\0'){
                return i;
            }
        }

    }
    return -1;

}

void deleteRepeatedChars(char str[]){
    int i=0,j=0,t=0;
    for(i = 0; str[i] != '\0';i++){
        for(int j = i-1; j>=0; j--){
            if(str[i]==str[j]){
                break;
            }
        }
        if(j == -1)
            str[t++]=str[i];

        str[t]='\0';
    }
    printf("%s", str);
}

void printMatrix(int m[][MAXCOLS],int lines, int columns){
    for(int i = 0 ; i < lines ; i++){
        for(int j = 0 ; j< columns; j++){
            printf(" %d", m[i][j]);
        }
        printf("\n");
    }
}

int multiplyLineColumn(int mA[][MAXCOLS],int mB[][MAXCOLS], int mC[][MAXCOLS],int lineA, int columnB,int linesAColsB){
    int i = 0;
    mC[lineA][columnB]=0;
    for(i=0;i<linesAColsB;i++){
        mC[lineA][columnB]+=mA[lineA][i]*mB[i][columnB];
    }
    return mC[lineA][columnB];
}
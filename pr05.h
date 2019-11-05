//
// Created by jotaSV on 15/10/2019.
//

#ifndef LP1_PR05_H
#define LP1_PR05_H
#define MAXCOLS 3
int main_pr05();

int indexSubString(char str[],char sub[]);
void deleteRepeatedChars(char str[]);
void printMatrix(int m[][MAXCOLS],int lines, int columns);
int multiplyLineColumn(int mA[][MAXCOLS],int mB[][MAXCOLS], int mC[][MAXCOLS],int lineA, int columnB,int linesAColsB);




#endif //LP1_PR05_H

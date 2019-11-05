////
//// Created by jotaSV on 01/10/2019.
////
//#include <stdio.h>
//#include "pr03.h"
//int main_pr03(int argc,const char * argv[]){
//    printf("main_pr03()\n");
//    printf(" %d \n", readDigitsToInt());
//    printf(" %d", multiply(2,3));
//}
//
//int readDigitsToInt()
//{
//    char c = '\0';
//    int num = 0;
//    printf("Insira um numero: \n");
//    while((c= getchar()) != '\n'){
//        num *= 10;
//        num += c - '0';
//    }
//    return num;
//}
//
//int multiply(int p1, int p2)
//{
//    int mult=0,flag=0;
//    if(p2 < 0 ){
//        p2 *= -1;
//        flag = 1;
//    }
//    for (int i = 0 ; i<p2;i++){
//        mult = mult + p1;
//    }
//    if(flag == 1){
//        mult *= -1;
//    }
//    printf(" %d" , mult);
//    return mult;
//
//}
//
//void printNumberClassesUnitsToUpperClasses(int n )
//{
//    int aux,i=1;
//    while(n > 0){
//        aux = n % 10;
//        aux = aux * i;
//        i = i * 10;
//        n = n / 10;
//        printf(" %d \n", aux);
//    }
//}
//// funçao anterior mas ao contrario , ou seja imprimir 200 + 10 + 8 , invés de 8 10 200
//void printNumberClassesFromHigherToUnits(int n){
//
//}
//
//void printTriangle(int n){
//    int i=0,j=0;
//    for(i=0;i<=n/2;i++){
//        for(int k = 0 ; k<i;k++){
//            printf(" ");
//        }
//        for ( j = i+1;j<=(n-i);j++){
//            printf(" %d",j);
//        }
//        printf("\n");
//    }
//
//
//}
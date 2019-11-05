//
// Created by jotaSV on 24/09/2019.
//

#include <stdio.h>


void readCharPrintAscii(){
    char c;
    printf("Insira um caracter: \n");
    scanf(" %c", &c);
    printf("%d", c);
}

void readDateGender(){
    int d,m,a;
    char g;

    printf("Insira o dia:\n");
    scanf(" %2d", &d);
    printf("Insira o mes:\n");
    scanf(" %2d", &m);
    printf("Insira o ano:\n");
    scanf(" %4d", &a);
    printf("Insira o genero: \n");
    scanf(" %c", &g);
    printf("Nasceu em: %d/%d/%d e do genero : %c", d,m,a,g);

}

void readIntsDivisionFloat(){
    int a, b;
    float res=0.0;

    printf("Insira 2 inteiros: \n");
    scanf(" %d %d", &a, &b);
    res = (float)a / b ;
    printf("O resultado da divisao e: %.2f", res);
}

void countStream(){
    char c;
    int digitos=0,letras=0,special=0,white=0;
    while (c != '.'){
        scanf("%c", &c);
        if((int)c >= 48 && (int)c <= 57 ){
            digitos++;
        }
        if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' ){
            letras++;
        }
        if ((int)c == 32){
            white++;
        }
        if ((int)c >= 33 && (int)c <= 45 || (int)c == 47 || (int)c >= 91 && (int)c <= 96 || (int)c >= 123 && (int)c <= 126  ){
            special++;
        }
    }
    printf("digitos: %d \n letras: %d \n white: %d \n special: %d \n", digitos,letras,white,special);

}
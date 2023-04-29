#include <stdio.h>
#include "sum.h"

/* Global Variables (a and b)*/
static int a, b;

/* Functions Defenitions */
void setA(int x){
    a = x;
}

void setB(int x){
    b = x;
}

int sum(){
    return a + b;
}

/* Getters & Setters */
int getA(){
    return a;
}

int getB(){
    return b;
}
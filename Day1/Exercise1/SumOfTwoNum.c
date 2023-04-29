/*************************************************
 * Program Name: SumOfTwoNames;
 * Hierarchy: main.c;
 * Purpose: To find the sum of two numbers entered by the user;
 * Author: 4LittleNightmares @2023 (Pedro Afonso Matos);
 * Date: 29/4/2023;
 * Last Update: 29/4/2023;
 * Path: Day1\Exercise1\SumOfTwoNum.c;
 * input: Two integers (a, b);
*************************************************/

/* Libraries and Headers */
#include <stdio.h>

/* Prototypes */


/* Main Function */
int main(){
    /* Variebles */
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    setA(a);
    setB(b);
    int result = sum();
    printf("Sum = %d\n", result);

    return 0;
}
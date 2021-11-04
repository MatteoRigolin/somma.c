// @file somma.c
// @brief file esempio somma
// @date file creato il 26/10/2021

/**
* @fn int somma(int a, int b)
* @brief funzione che somma i parametri
* @param int a: primo valore da sommare
* @param int b: secondo valore da sommare
* @return int: la funzione ritorna la somma di 4 e 2
* @date 26/10/2021
* @author Matteo Rigolin
* @file somma.c
*/
#include <stdio.h>

int somma(int a, int b){
return a+b;
}

int main(){
int s = somma(4,2);
printf("%d",s);
return 0;
}

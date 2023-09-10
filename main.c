/*
programa que compara 2 numeros 
*/
#include <stdio.h>

int main() {
    float numone = 0, numtwo = 0; //declarar e inicializar variables

    printf("Dame dos numeros: \n");
    scanf("%f %f", &numone , &numtwo);

    if(numone == numtwo){
        printf("======================================\n el numero:  %f  : es igual a :  %F \n Ambos numeros son iguales \n======================================", numone, numtwo);
    }
    else if(numone < numtwo){
        printf("======================================\n el numero %f es menor que %f \n======================================",numone,numtwo);
    }
    else if(numone > numtwo){
        printf("======================================\n el numero %f es mayor al %f \n======================================",numone,numtwo);
    }else{
        printf("======================================\n eror \n======================================"); 
    }

   return 0;
}

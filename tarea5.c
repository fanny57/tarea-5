#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int cuentamovimientos (char Palabra[20]){

    char alfabeto[50]={"abcdefghijklmnñopqrstuvwxyz"};
    int j=0;
    int k=0;
    int contadorder =0;
    int contadorizq =0;
    int movimientos =0;
    char palabra[20];
    int i;

    for(i=0;i<strlen(Palabra);i++){
        contadorder =0;
        contadorizq =0;

        while(palabra[i]!=alfabeto[j]){
            j++;
            contadorder++;
            if(j==26){
                j=0;
            }


        }

        while(palabra[i]!=alfabeto[k]){


            if(k==0){
                k=26;
            }
            k--;
            contadorizq++;

        }

        if(contadorizq<contadorder){
            movimientos=movimientos+contadorizq;
            k=j;

        }
        else{
             movimientos=movimientos+contadorder;
             j=k;

        }
    }
    //return movimientos;


}
int main(){

    int movimientos;
    int Cdeletras;
    char palabra[20];
    scanf("%s",&palabra);
    Cdeletras=strlen(palabra);
	movimientos=cuentamovimientos(palabra);
    printf("Palabra= %s--Cantidad de letras= %d--Movimientos = %d\n",palabra,Cdeletras,movimientos);
}

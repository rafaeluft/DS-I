#include "Stack.h"
#include <stdio.h>
#include<string.h>

/*
Escreva um algoritmo que use uma pilha para inverter a ordem das 
letras de cada palavra de uma string ASCII, preservando a ordem 
das palavras. Por exemplo, para a string ESTE EXERCICIO E MUITO FACIL 
o resultado deve ser ETSE OICICREXE E OTIUM LICAF.
*/

int main(int argc, char* argv[]){
  if(argc>1){
    Stack *S1 = Stack_create();  
    int temp;
    for(int i=0; i<strlen(argv[1]); i++){
      char lido = argv[1][i];
      switch(lido){
        case '\0':
        case '\n': break;
        case ' ': 
          while(Stack_pop(S1, &temp)) 
            putchar((char)temp); 
          putchar(' '); break;
        default: Stack_push(S1, lido); 
      }
    }
    while(Stack_pop(S1, &temp)) 
      putchar((char)temp);
  }
  return 0;
}
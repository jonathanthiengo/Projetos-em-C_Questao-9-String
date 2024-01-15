/*O código de César é uma das mais simples e conhecidas técnicas de criptografia. É um tipo
de substituição na qual cada letra do texto é substituída por outra, que se apresenta no
alfabeto abaixo dela um número fixo de vezes. Por exemplo, com uma troca de três posições,
‘A’ seria substituído por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante. Implemente um programa
que faça uso desse Código de César. O programa vai pedir uma string e um número. Então deve
mostrar a string codificada com esse numero de troca.
Exemplo: String: a ligeira raposa marrom saltou sobre o cachorro cansado
Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR
*/



#include <stdio.h>
#include<string.h>
#define TAM 50

int main(void) {
  int i;
  char Frase[] = {'a',' ','l','i','g','e','i','r','a',' ','r','a','p','o','s','a',' ','m','a','r','r','o','m',' ','s','a','l','t','o','u',' ','s','o','b','r','e',' ','o',' ','c','a','c','h','o','r','r','o',' ','c','a','n','s','a','d','o'};
 
 int tam = strlen(Frase);

 for(i=0;i<tam;i++){
   if((Frase [i] >= 97 && Frase[i] <= 122)){
     Frase[i] = Frase[i] - 29;
   }
 }
 printf("%s",Frase);
  
  return 0;
}
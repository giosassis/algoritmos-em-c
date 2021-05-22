
//for//
#include <stdio.h>
/*int main(){
    for (int i = 0; i <= 100; i++){
        printf("%d\n", i);
    }
}

//while//
int main() {
  int numero = 1;
  while(numero <= 100) {
    printf("%d\n ", numero);
    numero++;
  }
}*/

//somar//
int main() {
  int soma = 0;
  for(int i = 1; i <= 100; i++) {
    soma = soma + i;
  }

  printf("A soma eh %d", soma);
}
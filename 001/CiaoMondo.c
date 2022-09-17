#include <stdio.h>

int main() {
  
  #dichiaro le variabili
  int a;
  
  #scrivo a schermo di inserire un numero
  printf("Scrivi un numero intero: ");
  
  #leggo il numero scritto
  scanf("%d", &a);
  
  #scrivo a schermo il numero inserito
  printf("Il numero che hai inserito è %d", a);
  
  #termino il programma
  return 0;
}

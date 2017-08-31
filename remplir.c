#include "declaration.h"

//pour donner une grille initiale de sudoku
void remplir(int tab[max][max], int taille){
  int i=0,j=0;
  char n,x;
  while(i<taille){
    printf("ligne %d: ", i+1);
    for(j=0;j<taille;j++){
      scanf("%c", &n);
      if(!((n>='0' && n<='9') || (n>='A' && n<='G')))
	while(!((n>='0' && n<='9') || (n>='A' && n<='G'))){
	scanf("%c", &n);
      }
      x=n;
         tab[i][j]= x-48;
      if((x>='A') && (x<='G'))
          tab[i][j]=x-55;
      }
  i++;
  }
  printf("\n");
  affiche(tab,taille);
}

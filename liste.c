#include "declaration.h"

liste cdr (liste l){
  if (l) {
    return l->suiv;
  }
  else {
    return (liste) 0;
  }
}


liste cons (liste l, int tab[max][max], int taille){
  liste new;
  int i,j;
  new=(liste)malloc(sizeof (cell));
  for(i=0;i<taille;i++)
    for(j=0;j<taille;j++)
      new->tableau[i][j]=tab[i][j];
  new->suiv=l;

  return new;
}


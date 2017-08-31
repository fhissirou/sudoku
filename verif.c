#include "declaration.h"

int racine(int n){
  int a=1;
  int x=1;
  while(x<n){
    a++;
    n=n-x;
    x=x+2;
  }
  return a;
  }

// la verification de l'existance d'un nombre sur une ligne
int  verif_dans_lig(int tab[max][max], int i, int n,int taille){
  int j;
  for(j=0;j<taille;j++)
    if(tab[i][j]==n)
      return 0;
  return 1;
}
// la verification de l'existance d'un nombre dans une colonne
int verif_dans_col(int tab[max][max], int j, int n, int taille){
  int i;
  for(i=0;i<taille;i++)  
    if(tab[i][j]==n)
      return 0;
  return 1;
}
// la verification de l'existance d'un nombre dans sous carre
int verif_dans_bloc(int tab[max][max], int i, int j, int n, int taille){
  int x,y;
  int a;
  int  res;
res=racine(taille);
  x=res*(i/res);
  y=res*(j/res);
  for(i=x;i<x+res;i++)
    for(j=y;j<y+res;j++)
      if(tab[i][j]==n)
	return 0 ;
  return 1;
}



int verif_tous(int tab[max][max],int i,int j,int k, int taille){
 if((verif_dans_lig(tab,i,k, taille) && verif_dans_col(tab,j,k, taille) && verif_dans_bloc(tab,i,j,k, taille))==1)
   return 1;
 return 0;
}

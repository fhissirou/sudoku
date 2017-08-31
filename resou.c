#include "declaration.h"






void initialise(int tab[max][max], int tab2[max][max], int taille){
  int i,j;
  for(i=0;i<taille;i++)
    for(j=0;j<taille;j++)
      tab[i][j]=tab2[i][j];
}


//pour resoudre une grille sudoku
int resoudre(int tab[max][max], int n, int taille){
  int i,j,k;
  if(n==taille*taille)
    return 1;
  i=n/9;
  j=n%9;
  if(tab[i][j]!=0)
    return resoudre(tab,n+1,taille);
  for(k=taille;k>0;k--){
    if(verif_tous(tab,i,j,k,taille)==1){
      tab[i][j]=k;
      if(resoudre(tab,n+1,taille)==1)
	return 1;
    }
  }
  tab[i][j]=0;
  return 0;
}
 

//cette fonction peut chercher toutes les solutions possibles de la grille
int resolve2(int tab[max][max], liste *l, int taille){
  int i,j,k;
  int comp=0;
  int tab2[max][max];
  initialise(tab2,tab,taille);

  for(i=0;i<taille;i++)
    for(j=0;j<taille;j++){
     if(tab[i][j]==0){
  for(k=taille;k>0;k--){
      if(verif_tous(tab,i,j,k,taille)==1){
	tab[i][j]=k;
	if(resoudre(tab,0,taille)==1){
	  comp+=1;
	  *l=cons(*l,tab,taille);
	  initialise(tab,tab2,taille);
	}
      }
    }
  }
    }
  if(comp==1){
    printf("grille initiale\n");
    affiche(tab2,taille);
  }
  return comp;
}


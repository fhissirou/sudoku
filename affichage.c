#include "declaration.h" 



//affichage de la grille sudoku
void affiche(int tab[max][max],int taille){
  int i,j,a,res;
  char tableau[]="ABCDEFG";
  res=racine(taille);
  a=res;
  if(taille<=9){
  while(a){
  printf("+-----+ ");
  a--;
  }
  printf("\n");
  }
  else{
  while(a){
    printf("+-------+ ");
  a--;
  }
  printf("\n");
  }
  for(i=0;i<taille;i++){
    printf("|");
    for(j=0;j<taille;j++){
      if(tab[i][j]>9){
      printf("%c", tableau[tab[i][j]-10]);
      }
      else{

	printf("%d", tab[i][j]);
	
      }
       if((((j+1)%res)==0)&&((j+1)!=taille))
	printf("| |");
	else
	printf("|");
	}
    printf("\n");
    if(((i+1)%res)==0){
      a=res;
    if(taille<=9){
  while(a){
  printf("+-----+ ");
  a--;
  }
  printf("\n");
  }
  else{
  while(a){
    printf("+-------+ ");
  a--;
  }
  printf("\n");
  }
    }
  }
printf("\n\n");
}

//affichage d'une liste
void affiche3 (liste l, int taille) {

   if(l){
    affiche(l->tableau,taille);
      if(cdr(l)){
    l=cdr(l);
    affiche3(l, taille);
    }
  }
  else{
    printf("\n");
  return;
  } 
}




#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#include "declaration.h"




void main () {


 int tab[max][max];
  liste l;
  int k,t;
  int i;
  int j;
  int taille;
  l=(liste)0;
  printf("1-pour des grille aleatoires \n");
  printf("2-pour donner votre grille initiale \n");
  printf("3-pour jouer \n");
  printf("4-pour quitter\n");
  scanf("%d", &k);
  switch(k) {
  case 1: 
printf("aleatoire : \n");
 printf("donner la taille : ");
 scanf("%d",&taille);
 printf("\ndonner le nombre d'element a mettre dans la grille initiale :");
 scanf("%d",&t);
 aleatoire(tab,taille,t);
 break;
  case 2: 
 printf("donner la taille : ");
 scanf("%d",&taille);
    printf("donner votre grille : \n ");
    remplir(tab,taille);
    if(resolve2(tab,&l,taille)==0)
      printf("grille invalide et elle n'a pas de solution\n");
      else
    affiche3(l,taille);
    break;
  
  case 4 : printf("au revoir!!! \n");
    break;
  default : printf("saisie incorrect");
    main();
    break;
  }


} 

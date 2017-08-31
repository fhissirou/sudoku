#ifndef declaration_h
 
#define declaration_h

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define A 10
#define B 11
#define C 12
#define D 13
#define E 14
#define F 15
#define G 16
#define max 16


struct cell {
  int tableau[max][max];
  struct cell *suiv;
};
typedef struct cell cell;
typedef struct cell * liste;

liste cdr (liste);
liste cons (liste , int [max][max], int );
int racine(int );
int  verif_dans_lig(int [max][max] , int , int ,int );
int verif_dans_col(int [max][max] , int , int , int);
int verif_dans_bloc(int [max][max], int , int , int , int );
int verif_tous(int [max][max],int ,int ,int , int);
int resoudre(int [max][max], int , int );
void affiche(int [max][max],int);
void initialise(int [max][max], int [max][max]  , int);
void remplir(int [max][max], int);
int resolve2(int [max][max], liste * , int );
void affiche3 (liste , int) ;

void aleatoire(int [max][max], int ,int );
void joue(void);

#endif
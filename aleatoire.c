#include "declaration.h" 

void aleatoire(int tab[max][max], int taille,int t) {

 int j,i;
 int n;
  int k=0;
  liste l;
  l=(liste)0;
  int comp;
  
  srand(time(0));
  
for(i=0;i<taille;i++)
    for(j=0;j<taille;j++)
      tab[i][j]=0;


   while(k<t){
    
    i=rand()% taille;
    j=rand()%taille;
    if(tab[i][j]!=0){
      continue;
}
    else {
      do{
      
	n=(rand()%taille)+1;
    
      
}
while(verif_tous(tab,i,j,n,taille)==0);
tab[i][j]=n;      
k++; 
    }
    
  }
  
   
   if(resolve2(tab,&l,taille)==1) {
     printf("\nsolution de la grille\n");
     affiche3(l,taille);
}
   else {
     aleatoire(tab, taille ,t);
     }
}

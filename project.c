#include <stdio.h>
#include <string.h>
#include <stdlib.h>




struct etudiant{
    int identifiant;
  char nom[20];
  char prenom[20];
  float moyenne;
};

//struct etudiant t[20];
int n;
struct etudiant *t;

// fonction pour cherecher par nom
void chercher1(){
int i,test,n;
char Nom[7];
printf("le nom que vous voulez chercher svp\n");
scanf("%s",&Nom);
for (i = 0; i < n; i++){
    int test=strcmp((t+i)->nom,Nom);
    if (test==0) {
        printf ("\nles information sur l'etudier %s ",(t+i)->nom);
        printf("--------------------------------\n");
        printf("son nom: %s\n",(t+i)->nom);
          printf("son prenom: %s\n",(t+i)->prenom);
            printf("son identifaint: %d\n",(t+i)->identifiant);

    }
}
}


// fonction pour modifier
void modifier(){
int i,id;
printf("entrer identifiant pour l'etudier que vous voulez modifier\n ");
scanf("%d", &id);
for (i = 0; i < n; i++){

    if (id == (t+i)->identifiant ){
    printf("nom : ");
    scanf("%s",&t[i].nom);
      printf("prenom : ");
    scanf("%s",&t[i].prenom);
      printf("identifiant : ");
    scanf("%d",&t[i].identifiant);
}
}
}

// fonction pour affichage
void affichage(){
 printf(" les noms de tous les Etudiants sont :\n");

for( int i=0; i<3;i++) {
    
     printf(" %s\n",t[i].nom);}
}

// fonction recherche par identiant
void chercher2(){
    int iden,indice,i;
   printf("entrer identifiant pour l'etudier que vous voulez : \n");
    scanf("%d",&iden);

    for(i=1; i<3; i++) {

        if (iden==t[i].identifiant) {
                printf("les informations de cet etudiant sont : le nome: %s le prenom: %s et le moyenne: %.2f\n",t[i].nom,t[i].prenom,t[i].moyenne);
                indice=1;
                break;
        }
        
    }

    if(indice!=1){
        printf("incorrect \n");
    }
}


    // fonction pour le tri
    void tri(){
  int i;
  struct etudiant tmp;
         for (i = 0; i <3; i++){
      for (int j = i+1; j < 3 ; j++){
         if (t[j].moyenne>t[i].moyenne) {
                 tmp=*(t+i);
                     *(t+i)=*(t+j);
                     *(t+j)=tmp;
         }
      }
}
        

                 for(i=0; i<3; i++) {
             printf(" %s %s moyenne par croissante: %.2f\n",t[i].nom,t[i].prenom,t[i].moyenne);}}




int main(){
printf("donner le nobre des etudiants");
scanf("%d",&n);
t=(struct etudiant*)malloc(n*sizeof(struct etudiant));
struct etudiant tmp;

int i,k;
float note,some;

for(i=0;i<3;i++){
    float some=0;
    printf("saisir les informations d'un etudiants :\n");
    printf("taper identifiant:\n");
    scanf("%d",&(t+i)->identifiant);
     printf("taper le nom :\n");
    scanf("%s",&(t+i)->nom);
     printf("taper prenom :\n");
    scanf("%s",&(t+i)->prenom);
    printf("taper les notes :\n");


    for(int k=0; k<3;k++){
        printf("note : %d\n",k+1);
        scanf("%f",&note);
        some+=note;

    }
   (t+i)->moyenne=(some / 2);
 
}


for( int i=0; i<n; i++) {

      printf("le moyenne generale de l'etudiant %s %s est : %.2f\n",(t+i)->nom,(t+i)->prenom,(t+i)->moyenne);

}

int choix;
do{

printf("\n                                      ************************* MENU  *************************");
printf("\n                                               1-/ afficher les noms du tous les etudiants");
printf("\n                                               2-/ modifier du tableau des etudiants");
printf("\n                                               3-/ chercher et afficher des etudiants par leur nom");
printf("\n                                               4-/ chercher et afficher des etudiants par  identifiants");
printf("\n                                               5-/ moyenne des etudiants au croissante");
printf("\n                                               6-/ fin du pogramme");
printf("\n");
printf("entrer votre choix");
scanf("%d",&choix);
switch(choix)
{
    case 1:
    affichage();
    break;
    case 2:
    modifier();
    break;
    case 3:
     chercher1();
    break;
    case 4:
     chercher2();
    break;
    case 5:
    tri();
    break;
    case 6:
    printf("   fin du programme");
    break;
    default : 
    printf("error");
}
}while(choix!=6);


return 0;

}

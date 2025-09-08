#include <stdio.h>
#include <stdlib.h>

int main(){

    int a,i;
    int nom,quantite,categorie;
    float prix;
    float produit[4][100];
    int n=0;


    do{
    printf("--------Menu--------\n");
    printf("1. Ajouter un nouveau produit \n");
    printf("2. Afficher la liste complete :\n");
    printf("3. Rechercher un produit par nom \n");
    printf("4. Mettre a jour le stock \n");
    printf("5. Calculer la valeur totale de l'inventaire \n");
    printf("7. Quitter le programme\n ");
    scanf("%d",&a);


    switch(a){
    case 1:
        printf("combien de produit tu va saisir : ");
        scanf("%d",&n);
        for(i=0;i<n;i++){
            printf("Saisir le nom du produit numero %d : ",i+1);
            scanf("%s",&nom);
            printf("Saisir le prix du produit numero %d :",i+1);
            scanf("%d",&prix);
            printf("Saisir la quantite du produit %d : ",i+1);
            scanf("%d",&quantite);
            do {
                    printf("Saisir le categorie du produit %d : ",i+1);
                    scanf("%d",&categorie);
                    }while(categorie>0 && categorie<4){
                printf("Ereur la categorie est 1 ou 2,3 !");

            }


        }
    break;
    case 2:
        for(i=0;i<n;i++){
            printf("La liste des produits : ");

        for(int j=0;j<n;j++){
                printf("Nom du produit %d est : %s",i+1,nom );
                printf("Prix deu produit %d est : %.2f MAD",i+1,prix);
                printf("Prix deu produit %d est : %d",i+1,quantite);
                printf("Prix deu produit %d est : %d ",i+1,categorie);


        }
        }
    break;
    case 3:

    break;
    case 4:

    break;
    case 5:

    break;
    case 6:

    break;
    case 7:

    break;
    default:
    printf("Error!!");

    }
    }
    while(a != 4);


    struct Produit {
        char nom[50];
        float prix;
        int quantite;
        int categorie;
    };

    return 0;
}

do {


//printf("My number: %d\n", s1.myNum);

//
// Created by lisaf on 29/09/2021.
//
#include <stdio.h>
#include "TD4.h"
#include "mesfonctions.h"
#define COMPARATIF 10

//EXERCICE1

void Exercice1()
{
    int entier1=0;
    int entier2=0;
    printf(" \n saisissez un entier:");
    scanf("%d",&entier1);
    printf("\n saisissez un entier:");
    scanf("%d",&entier2);
    printf("le plus grand entier est : %d", getMax(entier1, entier2 ));
}

void Exercice2()
{
    printf("l'entier rentre est : %d", saisirEntier());
}

void Exercice3()
{
    int lon=saisirEntier(), lar=saisirEntier();
    printf("aire rectangle : %d \n perimetre rectangle : %d", calculAire(lon,lar), calculPerimetre(lon,lar));

}

void Exercice4()
{

    int entier = saisirEntier();
    const int trois=3;
    if (entiersMultiples(entier,trois)==1)
    {
        printf("\n %d est un multiple de 3", entier);
    }
    else
    {
        printf("\n %d n'est pas un multiple de 3", entier);
    }
    if (entier >= COMPARATIF){
        printf("\n %d est >= a 10", entier);
    }
    else{
        printf("\n %d est < a 10", entier);
    }
}

void Exercice5()
{
    int note1=saisirEntier(), note2=saisirEntier(),note3=saisirEntier();
    printf("la moyenne est de %f", calculMoyenne(note1,note2,note3));
}

void Exercice5_7()
{
    int nbreclasses=saisirEntier(), nbretotal=0, nbreeleve=0, k=0;

            while(k < nbreclasses){
                k = k+1;
                printf("\n saisissez le nombre d'eleves dans une classe :");
                scanf("%d", &nbreeleve);
                nbretotal= nbretotal + nbreeleve;
            }
            printf("\nle nombre total d'eleves est : %d", nbretotal);
}

/*int nbreclasses=0, nbretotal=0, nbreeleve=0, k=0;
            printf("\n saisissez le nombre de classes");
            scanf("%d", &nbreclasses);
            while(k < nbreclasses){
                k = k+1;
                printf("\n saisissez le nombre d'eleves dans une classe :");
                scanf("%d", &nbreeleve);
                nbretotal= nbretotal + nbreeleve;
            }
            printf("\nle nombre total d'eleves est : %d", nbretotal);*/
//
// Created by lisaf on 29/09/2021.
//

#include <stdio.h>
#include "mesfonctions.h"

/* Fonction qui donne le plus grand nombre.
 * paramètres :
 * IN : entier1 et entier2
 * OUT : le plus grand entre entier1 et entier2
 */

int getMax(int entier1, int entier2 )
{
    if(entier1>=entier2)
    {
        return ( entier1);
    }

    else
    {
        return ( entier2);

    }
}

/* fonction qui demande à l'utilisateur de saisir un entier.
 * paramètre:
 * IN : rien
 * OUT : un entier
 */
int saisirEntier()
{
    int entier=0;
    printf("saisissez un entier");
    scanf("%d", &entier);
    return entier;
}


/* fonction du calcul de l'aire d'un rectangle
 * IN : lon (longueur du rectangle), lar (largeur rectangle)
 * OUT : aire du rectangle
 */
int calculAire(int lon, int lar)
{
    return (lon*lar);
}


/* fonction du calcul de le perimetre d'un rectangle
 * IN : lon (longueur du rectangle), lar (largeur rectangle)
 * OUT : perimetre du rectangle
 */
int calculPerimetre(int lon, int lar)
{
    return ((lon+lar)*2);
}


/* fonction qui compare deux nombres entrée
 * IN : entier1, entier2
 * OUT : indique si le premier nombre entré est un multiple du second
 */
int entiersMultiples(int entier1, int entier2)
{
    if (entier1 % entier2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/* fonction qui calcule la moyenne de trois notes si les notes sont valides
 * IN : 3 notes
 * OUT : moyenne des notes si notes valides, -1 sinon
 */
float calculMoyenne(int note1, int note2, int note3)
{
    float moy=0;
    if ((note1 >= 0 && note1 <= 20) && (note2 >= 0 && note2 <= 20) && (note3 >=0 && note3 <= 20))
    {
        moy=(note3+note2+note1)/3 ;
        return ( moy );
    }
    else
    {
        return (-1);
    }
}



/*Algorithme paire-avant_impaire
Variable n,i,a,temp,T[50]:entier;
constant N=50 :entier;

debut
     ecrire("Entrer le taille de tableau:");
    lire(n);
    
    tantque (n<1 ou n>50)
        ecrire("Veuillez entrer la valeur entre 1 et 50:");
        lire(n);
    fintantque

   afficher("Entrer les contenus du tableau:\n");

    pour (i=0;i<n;i++) 
        ecrire("T[",i,"]=");
        lire(T[i]);
    }
   
	//triage

	pour ( i = 1; i < n; i++ )
		si ( T[i-1]%2 != 0 ) alors
			si ( (T[i])%2 =0 ) alors
				a <- i-1;
                temp <- T[i];
				T[i] <- T[a];
				T[a] <- temp;
                
                i <- 0;    // On recommence le triage à partir de 1 case
			finsi
		finsi
	finpour

    //affichage du tableau trié
    afficher("\n Tableau en ordre paire en premier:\n")
    pour (i<-0;i<n;i++)
        afficher(T[i]" ");
    finpour
fin        
*/

//programme C

#include<stdio.h>
#include<stdlib.h>

#define N 50

int main()
{
    int n,i,a,temp,T[N];

    printf("Entrer le taille de tableau:");
    scanf("%d",&n);

    while (n<1 || n>50) {
        printf("Veuillez entrer la valeur entre 1 et 50:");
        scanf("%d",&n);
    }

    printf("Entrer les contenus du tableau:\n");

    for (i=0;i<n;i++) {
        printf("T[%d]=",i);
        scanf("%d",&T[i]);
    }
   
	//triage

	for(i=1;i<n;i++) {
		if ( T[i-1]%2 != 0 ) {
			if ( (T[i])%2 ==0 ) {
				a=i-1;
                temp=T[i];
				T[i]=T[a];
				T[a]=temp;
                
                i=0;    // On recommence le triage à partir de 1 case
			}
		}
	}
    
    //affichage du tableau trié   
    printf("\n Tableau en ordre paire en premier:\n");
    for (i=0;i<n;i++) {
        printf("%d ",T[i]);
    }

    return (0);
}    

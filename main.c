#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_RESERVATIONS 100



typedef struct {
    char nom[50];
    char prenom[50];
    char telephone[20];
    int age;
    int reference;
    char statut[20];
    char date_Reservation[15];
} Reservation;


Reservation reservations[MAX_RESERVATIONS];
int nbrReservations = 0;



void ajouter() {
    if (nbrReservation < MAX_RESERVATIONS)
        Reservation r;

        printf("Nom : ");
        scanf("%s", r.nom);
        printf("Prenom : ");
        scanf("%s", r.prenom);
        printf("Telephone : ");
        scanf("%s", r.telephone);
        printf("Age : ");
        scanf("%d", &r.age);
        printf("Statut (valide, reporte, annule, traite) : ");
        scanf("%s", r.statut);
        printf("Date de reservation (jj/mm/aaaa) : ");
        scanf("%s", r.date_Reservation);

        // Ajouter la nouvelle réservation dans le tableau

        r.reference = nbrReservations + 1;
        reservations[nbrReservations] = r;
        nbrReservations++;

        printf("Reservation a ete ajoutee. Reference: %d\n", r.reference);
    } else {
        printf("Le nombre maximal de réservations a été atteint.\n");
    }
}

void modifier (int reference) {
    for (int i = 0; i < nbrReservations; i++) {
        if (reservations[i].reference == reference) {
            printf("Modifier la reservation %d :\n", reference);
            printf("Nouveau Nom : ");
            scanf("%s", reservations[i].nom);
            printf("Nouveau Prenom : ");
            scanf("%s", reservations[i].prenom);
            printf("Nouveau Telephone : ");
            scanf("%s", reservations[i].telephone);
            printf("Nouvel Age : ");
            scanf("%d", &reservations[i].age);
            printf("Nouveau Statut : ");
            scanf("%s", reservations[i].statut);
            printf("Nouvelle Date (jj/mm/aaaa) : ");
            scanf("%s", reservations[i].date_Reservation);
            printf("Modification réussie.\n");
            return;
        }
    }
    printf("Reservation non trouvée.\n");
}

}

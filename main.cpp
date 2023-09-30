#include <stdio.h>
int main() {
    // Déclaration et initialisation du tableau de noms de joueurs
    char joueurs[][50] = {
        "Lionel Messi",
        "Cristiano Ronaldo",
        "Neymar Jr.",
        "Kylian Mbappé",
        "Robert Lewandowski",
        "Kevin De Bruyne",
        "Sergio Ramos",
        "Virgil van Dijk",
        "Mohamed Salah",
        "Luka Modric"
    };
    // Calcul de la taille du tableau
    int taille = sizeof(joueurs) / sizeof(joueurs[0]);

    // Boucle for pour parcourir et afficher la liste des joueurs
    printf("Liste des meilleurs joueurs de football du monde :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d. %s\n", i + 1, joueurs[i]);
    }
    return 0;
}

/**
 * Euclidian Algorithm
 *
 * The Euclidean algorithm (also called Euclid's algorithm) is an
 * algorithm to determine the greatest common divisor of two integers.
 */
#include <stdlib.h>// Inclus la bibliothèque stdlib pour pouvoir utiliser la fonction `atoi`
#include <string.h>
#include <stdio.h>
// Fonction qui calcule le plus grand commun diviseur de deux entiers a et b
int gcd(int a, int b) {     // Déclare la fonction gcd qui prend en paramètre 2 entiers a et b et retourne un entier
  int r;      // Déclare une variable `r` qui est le reste de la division
  while (b != 0) {      // Tant que b n’est pas zéro
    r = b;      // Sauvegarde la valeur de b dans r
    b = b % a;    // Calcule le reste de a divisé par b et le stocke dans b
    a = r;      // Affecte l’ancienne valeur de b (r) à a
  }
return a;    // Quand b vaut 0, a contient le pgcd, on le retourne
}
// Fonction principale
int main(int argc, char* argv[]) {    
    if (argc <= 2) {      // Vérifie qu’on a bien fourni deux arguments
        return -1;      // Sinon, on quitte le programme avec un code d’erreur
    }

    int a = atoi(argv[1]);    // Convertit le premier argument en entier
    int b = atoi(argv[2]);    // Convertit le deuxième argument en entier

    int result = gcd(a, b);   // Appelle la fonction gcd pour calculer le pgcd

    printf("%d\n", result);   // Affiche le résultat dans le terminal

    return 0;   // Retourne 0 pour indiquer que le programme s’est terminé correctement
}

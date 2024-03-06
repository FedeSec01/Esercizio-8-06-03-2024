/*
Nome: Federico
Cognome: Russo
Data e ora: 06-03-2024 9:17
Obiettivo: Scrivere un codice che faccia la moltiplicazione dati due numeri presi dall'utente ed uno che faccia la media aritmetica
*/

#include <stdio.h>

// Complessità: O(1)
void calcolaProdotto() {
    double num1, num2;

    printf("Inserisci il primo numero: ");
    scanf("%lf", &num1);
    printf("Inserisci il secondo numero: ");
    scanf("%lf", &num2);

    printf("Prodotto: %.2lf\n", num1 * num2);
}

// Complessità: O(1)
void calcolaMedia() {
    int num1, num2;

    printf("Inserisci il primo numero intero: ");
    scanf("%d", &num1);
    printf("Inserisci il secondo numero intero: ");
    scanf("%d", &num2);

    printf("La media aritmetica è: %.2f\n", (num1 + num2) / 2.0);
}

// Complessità: O(1)
int main() {
    int scelta = 0;

    while (1) {
        printf("\nScegli un'opzione:\n");
        printf("1. Calcola il prodotto di due numeri\n");
        printf("2. Calcola la media aritmetica di due numeri\n");
        printf("3. Esci\n");
        printf("Inserisci la tua scelta (1, 2, 3): ");
        scanf("%d", &scelta);

        switch(scelta) {
            case 1:
                calcolaProdotto();
                break;
            case 2:
                calcolaMedia();
                break;
            case 3:
                printf("Uscita in corso...\n");
                return 0;
            default:
                printf("Scelta non valida! Riprova.\n");
        }
    }
    return 0;
}

/*
Nome: Federico
Cognome: Russo
Data e ora: 06-03-2024 13:09
Obiettivo: 
*/

#include <stdio.h>
#include <math.h>

int main() {
    int scelta;
    float num1, num2, risultato;

    printf("Scegli un'operazione:\n"
           "1. Somma\n"
           "2. Sottrazione\n"
           "3. Moltiplicazione\n"
           "4. Quoziente\n"
           "5. Radice quadrata\n"
           "6. Potenza\n"
           "Inserisci il numero corrispondente all'operazione: ");
    scanf("%d", &scelta);

    // Acquisizione dei numeri da parte dell'utente
    printf("Inserisci due numeri: ");
    scanf("%f %f", &num1, &num2);

    switch(scelta) {
        case 1:
            risultato = num1 + num2;
            printf("Risultato della somma: %.2f\n", risultato);
            break;
        case 2:
            risultato = num1 - num2;
            printf("Risultato della sottrazione: %.2f\n", risultato);
            break;
        case 3:
            risultato = num1 * num2;
            printf("Risultato della moltiplicazione: %.2f\n", risultato);
            break;
        case 4:
            if (num2 != 0) {
                risultato = num1 / num2;
                printf("Risultato del quoziente: %.2f\n", risultato);
            } else {
                printf("Impossibile dividere per zero!\n");
            }
            break;
        case 5:
            if (num1 >= 0) {
                risultato = sqrt(num1);
                printf("Radice quadrata: %.2f\n", risultato);
            } else {
                printf("Impossibile calcolare la radice quadrata di un numero negativo!\n");
            }
            break;
        case 6:
            risultato = pow(num1, num2);
            printf("Risultato della potenza: %.2f\n", risultato);
            break;
        default:
            printf("Scelta non valida!\n");
            break;
    }

    return 0;
}

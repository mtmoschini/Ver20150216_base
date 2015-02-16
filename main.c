#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N_VALORI_DA_INSERIRE 7
#define VALORE_MASSIMO 3

float potenza(int base, int esponente);
void aggiornaFrequenza(int frequenze[], int valore);

int main(int argc, char** argv) {
    int b, e;
    float p;
    int i;
    int frequenze[VALORE_MASSIMO+1];
    int v;
    
    // ---- Sezione 1
    printf("Inserisci la base (numero relativo): ");
    scanf("%d", &b);
    
    printf("Inserisci l'esponente (numero relativo): ");
    scanf("%d", &e);
    
    p = potenza(b, e);
    printf("%d^%d=%f\n", b, e, p);
    
    // ---- Sezione 2
    // Inizializzazione del vettore delle frequenze
    for(i=0; i<4; i++)
        frequenze[i] = 0;
    
    // Inserimento dei valori
    printf("\nInserisci %d numeri da 0 a %d (inclusi)\n", N_VALORI_DA_INSERIRE, VALORE_MASSIMO);
    for(i=0; i<N_VALORI_DA_INSERIRE; i++) {
        printf("Inserisci il %do valore: ", i+1);
        scanf("%d", &v);
        aggiornaFrequenza(frequenze, v);
    }
    
    // Stampa delle frequenze
    for(i=0; i<VALORE_MASSIMO+1; i++) {
        printf("Hai inserito il valore %d per %d volte\n", i, frequenze[i]);
    }
    
    return (EXIT_SUCCESS);
}

/*
 * Calcola la potenza.
 * Sia base che esponente sono un numero relativo (negativo, nullo o positivo).
 * NOTA: considera 0^0=1
 */
float potenza(int base, int esponente) {
       
    int i=0;
    int r;
    float potenza;
    
    if(base==0 && esponente==0)
    {
        potenza=1;        
    }
    else
    {
        while(i<esponente)
        {
            r=base*base;
                       
            i++;
        }
        potenza=r;
    }
    // TODO Implementa il corpo della funzione
    return potenza;
}

/*
 * Calcola la frequenza di un determinato valore, incrementando di 1 quanto
 * contenuto nella posizione valore.
 * 
 * Esempio:
 * valore = 2
 * Se frequenze[2] vale 1 prima della chiamata, allora frequenze[2] varrà 2 
 * dopo la chiamata.
 */
void aggiornaFrequenza(int frequenze[], int valore) {
    // TODO Implementa il corpo della funzione
  
    
    return;
}
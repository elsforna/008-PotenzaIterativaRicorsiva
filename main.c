#include <stdio.h>
#include <stdlib.h>

int potenzaIterativa(int base, int esponente);
int potenzaRicorsiva(int base, int esponente);

int main(int argc, char** argv) {
    int base,esponente;
    int rIterativo, rRicorsivo;
    
    printf("Inserisci la base (intera): ");
    scanf("%d", &base);
    printf("Inserisci l'esponente (intero non neativo): ");
    scanf("%d", &esponente);
    
    rIterativo = potenzaIterativa(base, esponente);
    rRicorsivo = potenzaRicorsiva(base, esponente);
    
    printf("%d^%d = %d (formulazione iterativa)\n", base, esponente, rIterativo);
    printf("%d^%d = %d (formulazione ricorsiva)\n", base, esponente, rRicorsivo);
    return (EXIT_SUCCESS);
}

int potenzaRicorsiva(int base, int esponente) {
    
    int risultato = 1;
    
    if(esponente!=0) {
        
      risultato = base*potenzaRicorsiva (base, esponente-1);   
    
    }else {
        return risultato;
    }
    return risultato;
}

int potenzaIterativa(int base, int esponente) {
    int p=1;
    while(esponente>0) { 
        p *=base;
        esponente--;
    }
    return p;
}
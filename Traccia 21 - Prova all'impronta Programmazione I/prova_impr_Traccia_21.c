

//TRACCIA 21
//Scrivere un programma per simulare l'inserimento di un PIN per il telefonino.
//Nella prima fase viene costruito il PIN di riferimento, che deve essere di lunghezza 5
//e deve essere costruito in modo casuale. Nella seconda fase l’utente inserisce il
//codice di tentativo e ha al massimo 3 tentativi per indovinarlo.




#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// Prototipo della procedura che prende in input due interi.
void sbloccoDisp(int);

int main(int argc, char const *argv[])
{
    int password = 2422;

    scanf("%d",&password);
    
    // Procedura 
    sbloccoDisp(password);
   
    return 0;
}


void sbloccoDisp(int password ){
    //genero pin
    srand((unsigned)time(NULL));
    int pin = 10000+rand()%89999;
    printf("pin = %d\n", pin);
    printf("pin = %d\n", RAND_MAX);
    
    
    //inizializzo tentativi
    int tentativi = 3;

    for(tentativi = 3; tentativi > 0; tentativi--){
        
    printf("inseriscri il pin, hai %d tentativi", tentativi);
        
    if(password == pin){
        printf("hai sbloccato il dispositivo");
        exit(0);
    }else{
        printf("pin errato\n\n");
        }
    }
}

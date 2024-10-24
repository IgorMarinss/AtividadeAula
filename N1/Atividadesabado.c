#include <stdio.h>

int main () {
    
    int r1, r2, r3, r4, r5;

    printf("Por gentileza, informar as perguntas a seguir com 1 para sim e 0 para nao.\n");
    printf("Voce tem algum compromisso hoje?\n");
    scanf("%d",&r1);
    printf("Voce estara na cidade?\n");
    scanf("%d",&r2);
    printf("Voce tem dinheiro?\n");
    scanf("%d",&r3);
    printf("Esta chovendo?\n");
    scanf("%d",&r4);
    printf("Onde voce vai, e perto?\n");
    scanf("%d",&r5);

    if(r1 == 0 && r2 == 1 && r4 == 1 && r5 == 1) {

        printf("Pode ir!");
    }

    else if (r1 == 1 || r2 == 0 || r4 == 0 || r5 == 0) {

        printf("Sua vida esta problematizada, infelizmente voce nao ira.");
    }
    
    return 0;

}
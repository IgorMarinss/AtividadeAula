#include <stdio.h>

typedef struct{
    int nasc_dia;
    int nasc_mes;
    int nasc_ano;
    int dias_vida;
} Dias;

int dias_de_vida(int nasc_dia, int nasc_mes, int nasc_ano, int atual_dia, int atual_mes, int atual_ano){

    int dias = 0, i;
    for(i = nasc_mes; i <= 12; i++){
        if(i == nasc_mes){
            if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12){
                dias += 31 - nasc_dia;
            }
            else if(i == 2){
                
                if(nasc_mes % 4 == 0){
                    dias += 29 - nasc_dia;
                }
                else{
                    dias += 28 - nasc_dia;
                }
            }

            else if(i == 4 || i == 6 || i == 9 || i == 11){
                dias += 30 - nasc_dia;
            } 
        }
        else{
            if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12){
                dias += 31;
            }
            else if(i == 2){
                
                if(nasc_mes % 4 == 0){
                    dias += 29;
                }
                else{
                    dias += 28;
                }
            }

            else if(i == 4 || i == 6 || i == 9 || i == 11){
                dias += 30;
            } 
        }
    }
    

    for(i = (nasc_ano + 1); i <= (atual_ano-1);i++){
        if(i % 4 == 0){
            dias += 366;
        }
        else{
            dias += 365;
        }
    }
         for(i = 1; i < atual_mes;i++){

            if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12){
                dias += 31;
            }
            else if(i == 2){
                
                if(atual_ano % 4 == 0){
                    dias += 29;
                }
                else{
                    dias += 28;
                }
            }

            else if(i == 4 || i == 6 || i == 9 || i == 11){
                dias += 30;
            }  

         }
        dias += atual_dia;

    return dias;
}

int main (){
    Dias Pessoa;
    int atual_dia, atual_mes, atual_ano;
    int dias=0;

    printf("Informe o atual dia: ");
    scanf("%d", &atual_dia);

    printf("Informe o atual mes: ");
    scanf("%d", &atual_mes);

    printf("Informe o atual ano: ");
    scanf("%d", &atual_ano);

    printf("Informe a seu dia de nascimento: ");
    scanf("%d", &Pessoa.nasc_dia);

    printf("Informe a seu mes de nascimento: ");
    scanf("%d", &Pessoa.nasc_mes);

    printf("Informe a seu ano de nascimento: ");
    scanf("%d", &Pessoa.nasc_ano);

    dias = dias_de_vida(Pessoa.nasc_dia, Pessoa.nasc_mes, Pessoa.nasc_ano, atual_dia, atual_mes, atual_ano);

    printf("Voce viveu %d dias", dias);

    return 0;
}
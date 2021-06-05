#include <stdio.h>
#include <stdlib.h>

#define TRUE    1
#define FALSE   0

#define OPCJA_PROSTOKAT 1
#define OPCJA_TROJKAT   2
#define OPCJA_WYJSCIE   0

void pole_prostokata();
void pole_trojkata();

int main() {
    int wybrana_opcja, wyjscie_z_programu;

    wyjscie_z_programu = FALSE;
    while(TRUE) {
        printf("Opcje programu:\n");
        printf("===============\n");
        printf("%d %s\n", OPCJA_PROSTOKAT,  " - pole prostokata");
        printf("%d %s\n", OPCJA_TROJKAT,    " - pole trojkata");
        printf("%d %s\n", OPCJA_WYJSCIE,    " - koniec");
        printf("\nPodaj kod polecenia: ");
        if(scanf("%d", &wybrana_opcja)==0)
            exit(EXIT_FAILURE);
        else
        {
            switch(wybrana_opcja) {
                case OPCJA_PROSTOKAT:
                    pole_prostokata();
                    break;
                case OPCJA_TROJKAT:
                    pole_trojkata();
                    break;
                case OPCJA_WYJSCIE:
                  wyjscie_z_programu = TRUE;
                   break;
                default:
                    printf("Niepoprawny kod polecenia.\n");
        }
        }
        if (wyjscie_z_programu == TRUE)
            break;
    }

    return EXIT_SUCCESS;
}

void pole_prostokata() {
float a, b, wynik;
    printf("podaj a: \n");
    if(scanf("%f", &a)==0)
        {
        printf("podaj cyfre\n");
        exit(EXIT_FAILURE);
        }
    else
    {
    if(a<=0)
        {

            printf("podaj a wieksze od 0\n");
            exit(EXIT_FAILURE);
        }
    }
    printf("podaj b: \n");
    if(scanf("%f", &b)==0)
        {
            printf("podaj cyfre");
            exit(EXIT_FAILURE);
        }
    else
    {
    if(b<=0)
        {

            printf("podaj b wieksze od 0\n");
            exit(EXIT_FAILURE);
        }
    }
    wynik= a * b;

    printf("%s\n" "%.2f" "%s", "\npole prostokata - ", wynik, "\n\n");
}

void pole_trojkata() {

/* TODO - osoba3 */
float a, h, wynik;
    printf("podaj a: \n");
    if(scanf("%f", &a)==0)
        {
        printf("podaj cyfre\n");
        exit(EXIT_FAILURE);
        }
    else
    {
    if(a<=0)
    {

        printf("podaj a wieksze od 0\n");
        exit(EXIT_FAILURE);
    }
    }
    printf("podaj h: \n");
    if(scanf("%f", &h)==0)
        {
        printf("podaj cyfre");
        exit(EXIT_FAILURE);
        }
    else
    {
    if(h<=0)
    {

        printf("podaj h wieksze od 0\n");
        exit(EXIT_FAILURE);
    }
    }
    wynik= ((a * h)/2.0);


    printf("%s\n" "%.2f" "%s", "pole trojkata - ", wynik, "\n\n" );
}


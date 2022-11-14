#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ordenamientoAsc(char vec[]);
void invertirCadena(char cadena[]);


int main()
{
    char vec[]="algoritmo";
    ordenamientoAsc(vec);
    printf("%s\n",vec);


   char cadena[20] = "UTN-FRA";

    printf("%s\n", cadena);

    invertirCadena(cadena);




    return 0;
}

int ordenamientoAsc(char vec[])
{
    int retorno=0;
    int aux;
    int auxCad;

    auxCad=strlen(vec);


    if(vec != NULL)
    {
        for(int i=0; i < auxCad - 1 ; i++)
        {
            for(int j= i + 1; j < auxCad ; j++)
            {
                if(vec[i] > vec[j])
                {
                    aux= vec[i];
                    vec[i]= vec[j];
                    vec[j]=aux;
                }
            }
        }
        retorno=1;
    }
    return retorno;
}






void invertirCadena(char cadena[]){

    for(int i = strlen(cadena) - 1 ; i >= 0 ; i--) {

       printf("%c", cadena[i]);

    }


}



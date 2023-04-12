#include <stdio.h>

#include < stdlib.h >

#include < hora.h >

Int dado(vetorDado[6]);

Int main()
{

    Int vetorDado[6], I;

    Dado(vetorDado[6]);
}

Int dado(vetorDado[6]{
    Int vetorDado[6], I;

    Srand(time(NULL));

    For(int i = 0; i < 7; i++)
    {

        vetorDado[i] = rand() % 1 + 10;

        printf(“Número sorteado
               : % g\n”, vetorDado[i]);
    }  

}
#include <stdio.h>
#include <stdlib.h>
int X = 0;
void P1 ( void )
{
 X = X + 1; 
 printf ( "\nCHAMADO O PROCEDIMENTO P1 %d VEZ(ES)", X );
 printf ( "\n" );
 if ( X < 5 )
 P1 ( ); 
 printf ( "\nRETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA %d", X );
 X = X - 1; 
 getchar ( ); 
}
int main ( void )
{

 printf ( "EXEMPLO0503 - CHAMADA/RETORNO COM VARIAVEL GLOBAL\n" );
 X = 0;
 P1 ( ); 
 printf ( "\n" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); 
 return ( EXIT_SUCCESS );
} 
/*EXEMPLO0503 - CHAMADA/RETORNO COM VARIAVEL GLOBAL

CHAMADO O PROCEDIMENTO P1 1 VEZ(ES)

CHAMADO O PROCEDIMENTO P1 2 VEZ(ES)

CHAMADO O PROCEDIMENTO P1 3 VEZ(ES)

CHAMADO O PROCEDIMENTO P1 4 VEZ(ES)

CHAMADO O PROCEDIMENTO P1 5 VEZ(ES)

RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA 5

RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA 4

RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA 3

RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA 2

RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA 1


PRESSIONAR <Enter> PARA TERMINAR.*/
#include <stdio.h> 
#include <stdlib.h> 
void P2 (int X); 
void P1 (int X)
{
 printf ( "CHAMADO O PROCEDIMENTO P1 COM X = %d\n", X );
 if ( X < 5 )
 P2 ( X );
 printf ( "RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA COM X = %d\n", X );
 getchar ( ); 
} 
void P2 (int X)
{
 printf ( "CHAMADO O PROCEDIMENTO P2 COM X = %d\n", X );
 X = X+1;
 printf ( "RETORNANDO AO PROCEDIMENTO P2 PARA A CHAMADA COM X = %d\n", X );
 getchar ( ); 
 P1 ( X );
} 
int main ( void )
{

 printf ( "EXEMPLO0506 - CHAMADA/RETORNO COM PARAMETRO\n\n" );
 P1 ( 1 ); 
 printf ( "\n" );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); 
 return ( EXIT_SUCCESS );
}
/*EXEMPLO0506 - CHAMADA/RETORNO COM PARAMETRO

CHAMADO O PROCEDIMENTO P1 COM X = 1
CHAMADO O PROCEDIMENTO P2 COM X = 1
RETORNANDO AO PROCEDIMENTO P2 PARA A CHAMADA COM X = 2

CHAMADO O PROCEDIMENTO P1 COM X = 2
CHAMADO O PROCEDIMENTO P2 COM X = 2
RETORNANDO AO PROCEDIMENTO P2 PARA A CHAMADA COM X = 3

CHAMADO O PROCEDIMENTO P1 COM X = 3
CHAMADO O PROCEDIMENTO P2 COM X = 3
RETORNANDO AO PROCEDIMENTO P2 PARA A CHAMADA COM X = 4

CHAMADO O PROCEDIMENTO P1 COM X = 4
CHAMADO O PROCEDIMENTO P2 COM X = 4
RETORNANDO AO PROCEDIMENTO P2 PARA A CHAMADA COM X = 5

CHAMADO O PROCEDIMENTO P1 COM X = 5
RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA COM X = 5

RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA COM X = 4

RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA COM X = 3

RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA COM X = 2

RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA COM X = 1


PRESSIONAR <Enter> PARA TERMINAR.*/
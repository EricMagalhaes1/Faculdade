#include <stdio.h>
#include <stdlib.h>
void P2 ( int X ); 
void P1 ( int X )
{
 X = X + 1;
 printf ( "CHAMADO O PROCEDIMENTO P1 COM X = %d\n", X );
 if ( X < 4 )
 {
 P1 ( X );
 P2 ( X );
 }
 printf ( "\nRETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA COM X = %d\n", X );
 getchar ( ) ; 
} 
void P2 ( int X )
{
 printf ( "CHAMADO O PROCEDIMENTO P2 COM X = %d\n", X );
 if ( X > 1 )
 P2 ( X - 1 );
 printf ( "RETORNANDO AO PROCEDIMENTO P2 PARA A CHAMADA COM X = %d", X );
 getchar ( ); 
} 
int main ( void )
{

 printf ( "EXEMPLO0508 - MULTIPLAS CHAMADAS/RETORNOS\n\n" );
 P1 ( 1 );
 printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
 getchar ( ); 
 return ( EXIT_SUCCESS );
}
/*EXEMPLO0508 - MULTIPLAS CHAMADAS/RETORNOS

CHAMADO O PROCEDIMENTO P1 COM X = 2
CHAMADO O PROCEDIMENTO P1 COM X = 3
CHAMADO O PROCEDIMENTO P1 COM X = 4

RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA COM X = 4

CHAMADO O PROCEDIMENTO P2 COM X = 3
CHAMADO O PROCEDIMENTO P2 COM X = 2
CHAMADO O PROCEDIMENTO P2 COM X = 1
RETORNANDO AO PROCEDIMENTO P2 PARA A CHAMADA COM X = 1
RETORNANDO AO PROCEDIMENTO P2 PARA A CHAMADA COM X = 2
RETORNANDO AO PROCEDIMENTO P2 PARA A CHAMADA COM X = 3

RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA COM X = 3

CHAMADO O PROCEDIMENTO P2 COM X = 1
RETORNANDO AO PROCEDIMENTO P2 PARA A CHAMADA COM X = 1
RETORNANDO AO PROCEDIMENTO P2 PARA A CHAMADA COM X = 2

RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA COM X = 2


PRESSIONAR <Enter> PARA TERMINAR.*/
#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

void iniciarJogo();
void imprimirMatrix();
int vitoriaLinha(int l, char c);
int vitoriaLinhas(char c);
int vitoriaColuna(int c, char j);
int vitoriaColunas(char j);
int vitoriaDiagonalPrinc(char c);
int vitoriaDiagonalSec(char c);
int validarCoord(int l, int c);
void lerCoord(char player);
int possibilidadesJogo();
void jogar();

#endif // FUNCTIONS_H_INCLUDED

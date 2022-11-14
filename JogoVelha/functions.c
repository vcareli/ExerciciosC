
//Iniciar Matriz
void iniciarJogo(){
    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            jogo[l][c] = ' ';
        }
    }
}

//Imprimir Jogo
void imprimirMatrix(){
    printf("\n\n\t 0   1   2\n\n");
    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            if(c == 0){
                printf("\t");
            }
            printf(" %c ", jogo[l][c]);
            if(c < 2){
                printf("|");
            }
            if(c == 2){
                printf("  %d", l);
            }
        }
        printf("\n");
        if(l < 2){
            printf("\t-----------\n");
        }
    }
}

/*
Funcoes para verificar vitoria em linha / Coluna / Diagonais
1 - ganhou
0 - nao ganhou
*/
int vitoriaLinha(int l, char c){
    if(jogo[l][0] == c && jogo[l][1] == c && jogo[l][2] == c)
        return 1;
    else
        return 0;
}

int vitoriaLinhas(char c){
    int vitoria = 0;
    for(l = 0; l < 3; l++){
        vitoria += vitoriaLinha(l, c);
    }
    return vitoria;
}

int vitoriaColuna(int c, char j){
    if(jogo[0][c] == j && jogo[1][c] == j && jogo[2][c] == j){
        return 1;
    }else{
        return 0;
    }
}

int vitoriaColunas(char j){
    int vitoria = 0;
    for(c = 0; c < 3; c++){
        vitoria += vitoriaColuna(c, j);
    }
    return vitoria;
}

int vitoriaDiagonalPrinc(char c){
    if(jogo[0][0] == c && jogo[1][1] == c && jogo[2][2] == c){
        return 1;
    }else{
        return 0;
    }
}

int vitoriaDiagonalSec(char c){
    if(jogo[0][2] == c && jogo[1][1] == c && jogo[2][0] == c){
        return 1;
    }else{
        return 0;
    }
}

/*
Funcao validar coordenada
1 - sim
2 - nao
*/
int validarCoord(int l, int c){
    if(l >= 0 && l < 3 && c >=0 && c < 3 && jogo[l][c] == ' '){
        return 1;
    }else{
        return 0;
    }
}

//Proced. Ler coordenadas
void lerCoord(char player){
    int linha, coluna;
    printf("Digite linha e coluna: ");
    scanf("%d%d", &linha, &coluna);
    while(validarCoord(linha, coluna) == 0){
        printf("Coordenadas invalidas! Digite novamente: ");
        scanf("%d%d", &linha, &coluna);
    }
    jogo[linha][coluna] = player;
}

//Verificar quant posicoes vazias
int possibilidadesJogo(){
    int vazias = 0;
    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            if(jogo[l][c] == ' '){
                vazias++;
            }
        }
    }
    return vazias;
}

//Proced. jogar
void jogar(){
    int jogador = 1;
    int vitoriaX = 0, vitoriaO = 0;
    char jogador1 = 'X', jogador2 = 'O';
    do{
        imprimirMatrix();
        if(jogador == 1){
            lerCoord(jogador1);
            jogador++;
            vitoriaX += vitoriaLinhas(jogador1);
            vitoriaX += vitoriaColunas(jogador1);
            vitoriaX += vitoriaDiagonalPrinc(jogador1);
            vitoriaX += vitoriaDiagonalSec(jogador1);
        }else{
            lerCoord(jogador2);
            jogador = 1;
            vitoriaO += vitoriaLinhas(jogador2);
            vitoriaO += vitoriaColunas(jogador2);
            vitoriaO += vitoriaDiagonalPrinc(jogador2);
            vitoriaO += vitoriaDiagonalSec(jogador2);
        }
    }while(vitoriaX == 0 && vitoriaO == 0 && possibilidadesJogo() > 0);
    imprimirMatrix();
    if(vitoriaO == 1){
        printf("Parabens Jogador O... Vc ganhou!");
    }else if(vitoriaX == 1){
        printf("Parabens Jogador X... Vc ganhou!");
    }else{
        printf("empate... Ninguem ganhou!");
    }
}

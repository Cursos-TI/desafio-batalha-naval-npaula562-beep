#include <stdio.h>

/*
    Desafio Batalha Naval - MateCheck

    NÍVEL NOVATO
    - Criar um tabuleiro (matriz bidimensional).
    - Posicionar dois navios no tabuleiro: um na vertical e outro na horizontal.
    - Exibir no console as coordenadas de cada parte dos navios.

    NÍVEL AVENTUREIRO
    - Criar tabuleiro maior.
    - Posicionar navios horizontalmente, verticalmente e diagonalmente.
    - Exibir navios no console.

    NÍVEL MESTRE
    - Criar habilidades (cone, cruz, quadrado) e mostrar os impactos no tabuleiro.
*/

#define TAM 5  // tamanho do tabuleiro (5x5)

// Função para inicializar o tabuleiro com água (0)
void inicializarTabuleiro(int tabuleiro[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;  // água
        }
    }
}

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[TAM][TAM]) {
    printf("\n   ");
    for (int j = 0; j < TAM; j++) {
        printf("%d ", j);
    }
    printf("\n");

    for (int i = 0; i < TAM; i++) {
        printf("%d  ", i);
        for (int j = 0; j < TAM; j++) {
            if (tabuleiro[i][j] == 0) printf("~ ");   // água
            else if (tabuleiro[i][j] == 1) printf("N "); // navio
        }
        printf("\n");
    }
}

// Função para posicionar navios
void posicionarNavios(int tabuleiro[TAM][TAM]) {
    // Navio 1 (vertical) -> 3 partes
    for (int i = 1; i <= 3; i++) {
        tabuleiro[i][1] = 1;  // coluna fixa, linha varia
        printf("Navio vertical em (%d,%d)\n", i, 1);
    }

    // Navio 2 (horizontal) -> 3 partes
    for (int j = 2; j <= 4; j++) {
        tabuleiro[3][j] = 1;  // linha fixa, coluna varia
        printf("Navio horizontal em (%d,%d)\n", 3, j);
    }
}

int main() {
    int tabuleiro[TAM][TAM];

    inicializarTabuleiro(tabuleiro);  // cria o tabuleiro vazio
    posicionarNavios(tabuleiro);      // coloca os navios
    exibirTabuleiro(tabuleiro);       // mostra o tabuleiro

    return 0;
}
Navio vertical em (1,1)
Navio vertical em (2,1)
Navio vertical em (3,1)
Navio horizontal em (3,2)
Navio horizontal em (3,3)
Navio horizontal em (3,4)

    
0 1 2 3 4
0  ~ ~ ~ ~ ~
1  ~ N ~ ~ ~
2  ~ N ~ ~ ~
3  ~ N N N N
4  ~ ~ ~ ~ ~

    
    #include <stdio.h>

/*

    NÍVEL AVENTUREIRO
    - Criar tabuleiro maior.
    - Posicionar navios horizontalmente, verticalmente e diagonalmente.
    - Exibir navios no console.


#define TAM 8  // tabuleiro maior (8x8)

// Função para inicializar o tabuleiro com água (0)
void inicializarTabuleiro(int tabuleiro[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;  // água
        }
    }
}

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[TAM][TAM]) {
    printf("\n   ");
    for (int j = 0; j < TAM; j++) {
        printf("%d ", j);
    }
    printf("\n");

    for (int i = 0; i < TAM; i++) {
        printf("%d  ", i);
        for (int j = 0; j < TAM; j++) {
            if (tabuleiro[i][j] == 0) printf("~ ");   // água
            else if (tabuleiro[i][j] == 1) printf("N "); // navio
        }
        printf("\n");
    }
}

// Função para posicionar navios
void posicionarNavios(int tabuleiro[TAM][TAM]) {
    // Navio 1 (vertical) -> 4 partes
    for (int i = 1; i <= 4; i++) {
        tabuleiro[i][2] = 1;
        printf("Navio vertical em (%d,%d)\n", i, 2);
    }

    // Navio 2 (horizontal) -> 4 partes
    for (int j = 3; j <= 6; j++) {
        tabuleiro[5][j] = 1;
        printf("Navio horizontal em (%d,%d)\n", 5, j);
    }

    // Navio 3 (diagonal) -> 4 partes
    for (int k = 0; k < 4; k++) {
        tabuleiro[2 + k][2 + k] = 1;
        printf("Navio diagonal em (%d,%d)\n", 2 + k, 2 + k);
    }
}

int main() {
    int tabuleiro[TAM][TAM];

    inicializarTabuleiro(tabuleiro);  // cria o tabuleiro vazio
    posicionarNavios(tabuleiro);      // coloca os navios
    exibirTabuleiro(tabuleiro);       // mostra o tabuleiro

    return 0;
}
0 1 2 3 4 5 6 7
0  ~ ~ ~ ~ ~ ~ ~ ~
1  ~ ~ N ~ ~ ~ ~ ~
2  ~ ~ N N ~ ~ ~ ~
3  ~ ~ N ~ N ~ ~ ~
4  ~ ~ N ~ ~ N ~ ~
5  ~ ~ ~ N N N N ~
6  ~ ~ ~ ~ ~ ~ ~ ~
7  ~ ~ ~ ~ ~ ~ ~ ~

    #include <stdio.h>

/*
    

    NÍVEL MESTRE
    - Criar habilidades (cone, cruz, quadrado) e mostrar os impactos no tabuleiro.
*/

#define TAM 8  // tabuleiro 8x8

// Função para inicializar o tabuleiro
void inicializarTabuleiro(int tabuleiro[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;  // água
        }
    }
}

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[TAM][TAM]) {
    printf("\n   ");
    for (int j = 0; j < TAM; j++) {
        printf("%d ", j);
    }
    printf("\n");

    for (int i = 0; i < TAM; i++) {
        printf("%d  ", i);
        for (int j = 0; j < TAM; j++) {
            if (tabuleiro[i][j] == 0) printf("~ ");   // água
            else if (tabuleiro[i][j] == 1) printf("N "); // navio
            else if (tabuleiro[i][j] == 2) printf("X "); // impacto da habilidade
        }
        printf("\n");
    }
}

// Funções de habilidades
void habilidadeCruz(int tabuleiro[TAM][TAM], int x, int y) {
    printf("\nHabilidade CRUZ em (%d,%d):\n", x, y);
    tabuleiro[x][y] = 2;
    if (x > 0) tabuleiro[x-1][y] = 2;
    if (x < TAM-1) tabuleiro[x+1][y] = 2;
    if (y > 0) tabuleiro[x][y-1] = 2;
    if (y < TAM-1) tabuleiro[x][y+1] = 2;
}

void habilidadeCone(int tabuleiro[TAM][TAM], int x, int y) {
    printf("\nHabilidade CONE em (%d,%d):\n", x, y);
    for (int i = 0; i < 3; i++) {
        for (int j = -i; j <= i; j++) {
            if (x+i < TAM && y+j >= 0 && y+j < TAM) {
                tabuleiro[x+i][y+j] = 2;
            }
        }
    }
}

void habilidadeQuadrado(int tabuleiro[TAM][TAM], int x, int y) {
    printf("\nHabilidade QUADRADO em (%d,%d):\n", x, y);
    for (int i = x; i < x+2 && i < TAM; i++) {
        for (int j = y; j < y+2 && j < TAM; j++) {
            tabuleiro[i][j] = 2;
        }
    }
}

// Função para posicionar navios (igual ao Aventureiro)
void posicionarNavios(int tabuleiro[TAM][TAM]) {
    // Navio 1 (vertical) -> 4 partes
    for (int i = 1; i <= 4; i++) {
        tabuleiro[i][2] = 1;
    }

    // Navio 2 (horizontal) -> 4 partes
    for (int j = 3; j <= 6; j++) {
        tabuleiro[5][j] = 1;
    }

    // Navio 3 (diagonal) -> 4 partes
    for (int k = 0; k < 4; k++) {
        tabuleiro[2 + k][2 + k] = 1;
    }
}

int main() {
    int tabuleiro[TAM][TAM];

    inicializarTabuleiro(tabuleiro);
    posicionarNavios(tabuleiro);

    printf("\n--- Tabuleiro inicial ---\n");
    exibirTabuleiro(tabuleiro);

    // Testando habilidades
    habilidadeCruz(tabuleiro, 4, 4);
    exibirTabuleiro(tabuleiro);

    habilidadeCone(tabuleiro, 1, 5);
    exibirTabuleiro(tabuleiro);

    habilidadeQuadrado(tabuleiro, 6, 1);
    exibirTabuleiro(tabuleiro);

    return 0;
}
--- Tabuleiro inicial ---
   0 1 2 3 4 5 6 7
0  ~ ~ ~ ~ ~ ~ ~ ~
1  ~ ~ N ~ ~ ~ ~ ~
2  ~ ~ N N ~ ~ ~ ~
3  ~ ~ N ~ N ~ ~ ~
4  ~ ~ N ~ ~ N ~ ~
5  ~ ~ ~ N N N N ~
6  ~ ~ ~ ~ ~ ~ ~ ~
7  ~ ~ ~ ~ ~ ~ ~ ~

    0 1 2 3 4 5 6 7
3  ~ ~ N ~ X ~ ~ ~
4  ~ ~ N X X X ~ ~
5  ~ ~ ~ N X N N ~

/*
  Instituto Tecnológico de Aeronáutica

  Vinícius Freitas de Almeida - Aluno da Graduação, Turma de 2024

  16/03/2020
  ---------------------------------------------------------------

  Essa aqui é a resolução esperada do problema, usando o conceito de recursão.
  Se você resolveu de maneira diferente, mas funcionou, sem problemas! :D

  A ideia é que você entenda como a recursão pode facilitar a vida na hora
  de resolver os problemas de CES-10, CES-11 ou de programação em geral.
*/

#include <stdio.h>

//DICA: È melhor criar constantes com nomes que têm significado do que jogar números aleatórios no código!
#define N_MAX 3

//A matriz onde o modelo ficará armazenado
//O '+1' é para armazenar o terminador de string '\0' e facilitar a vida
char modelo[N_MAX][N_MAX];

void mostrar_matriz(char matriz[N_MAX][N_MAX], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            //Mostrar caractere por caractere da matriz
            putchar(matriz[i][j]);
        }
        //Ao final de uma linha, precisa do newline
        putchar('\n');
    }
}

//Faz a potencia n^k
int potencia(int n, int k) {
    //k negativo será desprezado
    //Para k >= 0:
    //Valor da potência
    int p = 1;
    //Repetir k vezes
    for (int i = 0; i < k; i++)
        p *= n;
    return p;
}

//Função recursiva da fractal
char fractal(int i, int j, int contagem, int n) {
    //A princípio, não pintar de preto
    char c = '.';
    //Limite da recursão
    if (contagem > 1)
        c = fractal(i / n, j / n, contagem - 1, n);
    //Quadrado preto '*'
    if (c == '*') {
        return '*';
    } else {
        //c é, a princípio, quadrado branco '.'
        //Mas vamos consultar o modelo para pintar de preto, se necessário
        return modelo[i % n][j % n];
    }
}

int main() {
    //Variáveis de entrada
    //n: dimensão do modelo (2 <= n <= 3)
    //k: passos do algoritmo (1 <= k <= 5)
    int n, k;
    //Leitura da linha inicial
    scanf("%d %d\n", &n, &k);

    for (int i = 0; i < n; i++) {
        //Ler cada linha e colocar na matriz
        for (int j = 0; j < n; j++)
            modelo[i][j] = getchar();
        //Descartar o '\n'
        getchar();
    }

    //M é o tamanho da matriz de saída
    //M = n^k
    int M = potencia(n, k);
    //Escrever a matriz de saída
    //caractere por caractere
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            //Aqui usamos a função da fractal para cada i,j da matriz
            putchar(fractal(i, j, k, n));
        }
        putchar('\n');
    }

    return 0;
}

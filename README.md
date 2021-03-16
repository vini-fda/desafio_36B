# Descrição do problema

Desde que Kalevitch, um abstracionista famoso de Berlim, ouviu falar de fractais, ele as tornou o tópico principal de suas telas. Toda manhã o artista pegava um pedaço de papel quadriculado e começava a fazer um modelo de sua futura tela. Ele pega um quadrado de n × n quadradinhos e pinta alguns de preto. Depois, ele pega um pedaço limpo de papel e pinta a fractal usando o seguinte algoritmo:

- Passo 1: O papel é dividido em n² quadradinhos idênticos e alguns deles são pintados de preto, de acordo com o modelo.
- Passo 2: Cada quadrado que permanecer branco é dividido em n² quadrados menores e alguns deles são pintados de preto de acordo com o modelo.

Cada passo seguinte repete o passo 2.

Infelizmente, esse cansativo trabalho demanda tempo demais desse gênio da pintura. Kalevitch sempre sonhou em tornar o processo automático para passar a fazer fractais 3D ou mesmo 4D.

## Entrada

A primeira linha contém inteiros n e k(2 <= n <= 3, 1 <= k <= 5), em que k é a quantidade de passos do algoritmo. Cada uma das n linhas seguintes contém n símbolos que determinam o modelo. O caractere '.' significa um quadrado branco, ao passo que '*' faz o papel de um quadrado preto. É garantido que o modelo tem pelo menos um quadrado branco.

## Saída

Faça a saída de uma matriz n^k × n^k, que é o retrato da tela após a execução de k passos do algoritmo.

# Exemplos

## Exemplo 1

Entrada:
```text
2 3
.*
..
```
Saída:
```
.*******
..******
.*.*****
....****
.***.***
..**..**
.*.*.*.*
........
```

## Exemplo 2
Entrada:
```
3 2
.*.
***
.*.
```
Saída:
```
.*.***.*.
*********
.*.***.*.
*********
*********
*********
.*.***.*.
*********
.*.***.*.
```

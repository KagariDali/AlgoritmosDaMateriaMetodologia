# Algoritmo Base

A escolha do algoritmo baseia-se na necessidade de utilizar estruturas
fundamentais da programação, como estruturas de decisão, repetição e
operações de entrada e saída de dados. Esses elementos são essenciais no
ensino e na prática da programação, sendo amplamente utilizados na
resolução de problemas computacionais.

Dessa forma, a adoção de um algoritmo que contemple essas estruturas
permite uma comparação mais representativa entre as linguagens, uma vez
que explora características comuns a diferentes contextos de
desenvolvimento.

## Descrição

O algoritmo utilizado no experimento foi desenvolvido com o objetivo de
reunir estruturas fundamentais da programação em uma única implementação.

O procedimento recebe como entrada a quantidade de valores a serem
processados, gera uma sequência de números inteiros entre `0` e `100`
por meio de uma expressão matemática determinística, calcula a soma e a
média dos valores gerados e, por fim, verifica se a média obtida é
superior a `50`.

A geração dos valores é realizada pela expressão:

`(37 × i + 11) mod 101`

Na qual o índice da iteração determina o valor produzido. Dessa forma,
o algoritmo permite controlar o tamanho da entrada e executar a mesma
sequência de operações nas diferentes linguagens avaliadas.

## Pseudocódigo

```text
Algoritmo "MediaValoresCalculados"

var
    tamanho : inteiro
    i       : inteiro
    valor   : inteiro
    soma    : inteiro longo
    media   : inteiro

início
    leia(tamanho)
    soma ← 0

    para i de 0 até tamanho - 1 faça
        valor ← (37 × i + 11) mod 101
        soma ← soma + valor
    fimpara

    media ← soma div tamanho

    escreva("Média: ", media)

    se media > 50 então
        escreva("Aprovado")
    senão
        escreva("Reprovado")
    fimse
fim

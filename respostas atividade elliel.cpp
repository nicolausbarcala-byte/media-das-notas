1. Qual será a saída do programa?

O programa irá exibir os números de 1 até 5 na tela.

`1 2 3 4 5`

2. Quantas vezes o laço será executado?

O laço será repetido 5 vezes, começando pelo número 1 e finalizando no 5.

3. O que aconteceria se retirássemos `i++`?

O programa ficaria em repetição infinita, pois o valor de `i` não seria alterado e continuaria mostrando o número 1.

4. Reescreva o código usando for.

c

```c
for (int i = 1; i < 6; i++) {
    printf("%d ", i);
}
```

5. Reescreva o código usando do while.

c

```c
int i = 1;

do {
    printf("%d ", i);
    i = i + 1;
} while (i < 6);
```

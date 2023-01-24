# Lista-de-Exercicios-Manipulacao-de-Bits
Lista de exercícios sobre manipulações bit a bit - Cadeira de introdução a linguagem C - Fundação Liberato

Nibble é o nome dado a metade (4 bits) de um byte. Pode ser os 4 bits menos
significativos ou os 4 mais significativos.

Os dados são de 8 bits (sem sinal). 
Realize todas as tarefas solicitadas utilizando operadores de bit.

Elabore um programa que realize a função especificada abaixo e depois exiba o 
resultado :

1. Solicite um valor para a variável x. Coloque os bits pares (0,2,4,etc) de x em 1. Exiba o 
valor original e o resultado.

2. Solicite um valor para a variável x. Coloque os bits impares (1,3,5..) de x em 0. Exiba o 
valor original e o resultado.

3. Solicite um valor para a variável x e um índice b que indica um dos bits da variável. Ligue
o bit correspondente. Exiba o valor original e o resultado.

4. Solicite um valor para a variável x e um índice b que indica um dos bits da variável. Ligue
o bit correspondente. Exiba o valor original e o resultado.

5. Solicite um valor para a variável x e um índice b que indica um dos bits da variável. 
Inverta o valor do bit correspondente. Exiba o valor original e o resultado.

6. Solicite um valor para a variável x e um índice b que indica um dos bits da variável. 
Mantenha o valor daquele bit, zere os demais. Exiba o valor original e o resultado.

7. Solicite um valor para a variável x e um índice b que indica um dos bits da variável. 
Mantenha o valor daquele bit, ligue os demais. Exiba o valor original e o resultado.

8. Solicite um valor para a variável x. Se a variável x for par, zere os 4 bits menos
significativos, se for impar ligue os 4 bits mais significativos. Exiba o valor original e o
resultado.

9. Solicite um valor para a variável x. Inverta o valor dos 3 bits mais significativos da
variável x.

10. Solicite um valor para a variável x. Se o bit 7 desta variável for 1, copie o nibble (4 bits)
menos significativo para a variável y e zere o bit 7 de x. Se o bit 7 de x for zero, copie
para y o nibble mais significativo. Exiba o valor de ambas variáveis.

11. Solicite um valor para a variável x. Calcule o complemento deste valor.

12. Solicite um valor para a variável x. Calcule o complemento-2 deste valor.

13. Solicite um valor para a variável x. Gere uma série com 8 termos, com a seguinte regra :
xn = 2*xn-1 , onde xn é o termo atual e xn-1 é o termo anterior. Utilize operadores de
deslocamento para realizar a multiplicação.

14. Solicite um valor para a variável x. Gere uma série, com a seguinte regra : xn = xn-1/2,
onde xn é o termo atual e xn-1 é o termo anterior. A série encerra quando xn for zero.
Utilize operadores de deslocamento para realizar a divisão.

15. Considere agora valores com sinal. Solicite um valor para a variável x. Se este valor for
negativo, exiba o valor absoluto em formato decimal (valor sem sinal) seguido da letra D.
Se for positivo, exiba o valor seguido da letra C
# 👩‍💻 Lista de Exercícios: Avaliação de Conhecimento

> Programar em C os exercícios abaixo

--------------------------------------------------------

1. Uma loja vende seus produtos no sistema entrada mais duas prestações, sendo a entrada
maior do que ou igual às duas prestações; estas devem ser iguais, inteiras e as maiores possíveis.
Por exemplo, se o valor da mercadoria for R$ 270,00, a entrada e as duas prestações são iguais a R$ 90,00; se o valor da mercadoria for R$ 302,75, a entrada é de R$ 102,75 e as duas prestações são a iguais a R$ 100,00. 
Escreva um programa que receba o valor da mercadoria e forneça o valor da entrada e das duas prestações, de acordo com as regras acima. Observe que uma justificativa para a adoção desta regra é que ela facilita a confecção e o consequente pagamento dos boletos das duas prestações. => CHECK

2. Um programa para gerenciar os saques de um caixa eletrônico deve possuir algum
mecanismo para decidir o número de notas de cada valor que deve ser disponibilizado para o
cliente que realizou o saque. Um possível critério seria o da "distribuição ótima" no sentido de que as notas de menor valor disponíveis fossem distribuídas em número mínimo possível. 
Por exemplo, se a máquina só dispõe de notas de R$ 50, de R$ 10, de R$ 5 e de R4 1, para uma quantia solicitada de R$ 87, o programa deveria indicar uma nota de R$ 50, três notas de R$ 10, uma nota de R$ 5 e duas notas de R$ 1. Escreva um programa que receba o valor da quantia solicitada e retorne a distribuição das notas de acordo com o critério da distribuição ótima. => CHECK

3. Escreva um programa que realize arredondamentos de números utilizando a regra usual da
matemática: se a parte fracionária for maior do que ou igual a 0,5, o número é arredondado
para o inteiro imediatamente superior, caso contrário, é arredondado para o inteiro imediatamente inferior.

4. Escreva um programa para determinar o número de algarismos de um número inteiro positivo dado.

5. Fazer um programa em "C" que solicita o total gasto pelo cliente de uma loja imprime as  opções de pagamento, solicita a opção desejada e imprime o valor total das prestações (se houverem). 
   1) Opção: a vista com 10% de desconto 
   2) Opção: em duas vezes (preço da etiqueta) 
   3) Opção: de 3 até 10 vezes com 3% de juros ao mês (somente para compras acima de R$ 100,00). 

- OBS: fazer uma função que imprime as opções solicita a opção desejada e retorna a opção escolhida. No programa principal, testar a opção escolhida e ativar a função correspondente (uma função para cada opção). 
- => CHECK
## Métodos de Ordenação
### `Selection Sort`,`Insertion Sort`, `Bubble Sort` e `Merge Sort` <br>
**Ordenação** é a operação de rearranjar os dados em uma determinada ordem. A eficiência no manuseio de dados
pode ser aumentada se os dados estiverem dispostos de acordo com algum critério de ordem.
### InsertionSort
A idéia da ordenação por inserção é dividir os elementos em
duas subestruturas, uma com os elementos já ordenados e
outra com elementos ainda por ordenar.
- O número mínimo de comparações e movimentos ocorre
quando os itens estão originalmente em ordem.
- O número máximo de comparações e movimentos ocorre
quando os itens estão originalmente em ordem reversa.
- Bom método a ser usado `quando a sequência esta quase
ordenada`, ou quando se deseja `adicionar poucos itens a
uma sequência já ordenada`.
- O algoritmo de ordenação por inserção é estável.
> Bom para pequenas listas
### SelectionSort
A idéia da ordenação por seleção é procurar o menor
elemento do vetor (ou maior) e movimentá-lo para a
primeira (última) posição do vetor.
Repetir para os n elementos do vetor.
- Uma vantagem do Selection Sort é que entre os
algoritmos de ordenação ele apresenta uma das menores
quantidades de movimentos entre os elementos, assim
pode haver algum ganho quando se necessita ordenar
estruturas complexas.
- Uma desvantagem é que o número de comparações é
igual para o melhor caso, caso médio e o pior caso. Assim,
mesmo que o vetor esteja ordenado o custo continua
quadrático (n²).
- Não é estável (depende da implementação).
### BubbleSort
A idéia da ordenação por bolhas é flutuar o maior
elemento para o fim.
Repita n vezes a flutuação.
- Simples de entender e implementar.
- Uma desvantagem é que na prática ele tem `execução
lenta` mesmo quando comparado a outros algoritmos
quadráticos (n²
).
- Tem um `número muito grande de movimentação de
elementos`, assim não deve ser usado se a estrutura a ser
ordenada for complexa.
> \+ simples porém - eficiência. <br> Algoritmo ineficiente para listas muito grandes.
### MergeSort / Intercalação direta
Divida o vetor em 2 subvetores (ao meio) recursivamente
até ele ter o tamanho 1.
Intercale pares de elementos adjacentes. Repita esse
processo até restar apenas um arquivo de tamanho n.
- Dividir e Conquistar;
- Divide, recursivamente, o conjunto de dados até que o
subconjunto possua 1 elemento
- Combina 2 subconjuntos de forma a obter 1 conjunto
maior e ordenado
- Esse processo se repete até que exista apenas 1 conjunto.
-  Método de ordenação com tempo: <br>
-- Melhor caso: n ∗ log2n;<br>
-- Pior caso:n ∗ log2n;<br>
- Pode ser adaptado para ordenação de arquivos externos
(memória secundária).
- Utiliza `mais memória` para poder ordenar (vetor auxiliar).
- O MergeSort é `estável`: não altera a ordem de dados
iguais.
### QuickSort
O Quicksort é o algoritmo mais eficiente na ordenação por comparação. Nele se 
escolhe um elemento chamado de pivô, a partir disto é organizada a lista para que
todos os números anteriores a ele sejam menores que ele, e todos os números posteriores 
a ele sejam maiores que ele. Ao final desse processo o número pivô já está em sua posição final. Os dois grupos desordenados recursivamente sofreram o mesmo processo até que a lista esteja ordenada.

## Quando usar?

**Bubble sort** <br>

Para listas já ordenadas em ordem crescente é o único algoritmo que não realiza movimentações,
mas em compensação é o que tem o maior tempo e o maior número de comparações. Não só em listas 
já ordenadas, mas em todos os casos o bubble sort se mostrou um algoritmo ineficiente.

**Selection sort** <br>

Mais eficiente do que o Insertion sort em relação ao tempo e a quantidade de movimentações.

**Insertion Sort** <br>

Eficiente para problemas com pequenas entradas. É um bom método quando se desejar adicionar 
poucos elementos em um arquivo já ordenado.

**Quick Sort** <br>

O quick sort certamente é o algoritmo mais eficiente em listas totalmente desordenadas, 
ele se torna muito eficiente em relação aos outros no quesito de tempo.

Fontes: <br>
🔗 https://ww2.inf.ufg.br/~hebert/disc/aed1/AED1_04_ordenacao1.pdf <br>
🔗 https://www.devmedia.com.br/algoritmos-de-ordenacao-analise-e-comparacao/28261

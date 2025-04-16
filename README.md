# Juiz Virtual

**Número da Lista**: 1<br>
**Conteúdo da Disciplina**: Grafos 1 <br>

## Alunos
|Matrícula | Aluno |
| -- | -- |
| 22/2006178 | Thales Henrique Euflauzino dos Santos  |
| 22/2021924 | Víctor Hugo Lima Schmidt               |

## Sobre 
Para explorar o conteúdo do tópico de Grafos 1, a dupla escolheu dois exercícios na plataforma online [LeetCode](https://leetcode.com/): dois de nível difícil e dois de nível médio, para igualar o trabalho de cada um dos membros.


## Screenshots

### [882 (Difícil)](https://leetcode.com/problems/reachable-nodes-in-subdivided-graph)

![PrintResolucao882](/assets/print882.jpg)

### [773 (Difícil)](https://leetcode.com/problems/sliding-puzzle/)
Para resolver o exercício, eu modelei cada configuração do tabuleiro como um nó num grafo implícito e usei BFS para explorar em camadas, serializando o tabuleiro em uma string e trocando o ‘0’ com posições vizinhas para gerar novos nós. Em seguida, mantive um conjunto de estados visitados para evitar revisitar configurações, contei os níveis da BFS para obter o mínimo de movimentos e retornei a distância quando cheguei ao estado “123450” ou –1 se não fosse alcançável.
![PrintResolucao773](/assets/print773.jpg)

https://github.com/user-attachments/assets/355c9b22-e76c-44cd-8d9d-fe2b97883f11



### [133 (Médio)](https://leetcode.com/problems/clone-graph/)
Para clonar o grafo em C, eu defini uma função recursiva que, ao receber um nó original, primeiro checa num vetor de ponteiros se ele já foi copiado (evitando ciclos), e se não, aloco um novo struct Node com malloc, copio o val e o numNeighbors, aloco o array neighbors, registro esse clone no vetor e então percorro cada vizinho chamando a própria função recursiva para preencher o array de vizinhos do clone; no cloneGraph, basta inicializar o vetor de clones com NULL e disparar essa função a partir do nó de entrada, retornando assim uma cópia profunda de todo o grafo.

![PrintResolucao133](/assets/print133.png)

## Instalação 
**Linguagens**: Python, C++<br>

## Uso 
Explique como usar seu projeto caso haja algum passo a passo após o comando de execução.

## Outros 

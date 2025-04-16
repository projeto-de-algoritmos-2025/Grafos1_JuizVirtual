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

- [882 (Difícil)](https://leetcode.com/problems/reachable-nodes-in-subdivided-graph)
![PrintResolucao882](/assets/print882.jpg)

- [773 (Difícil)](https://leetcode.com/problems/sliding-puzzle/)
![PrintResolucao773](/assets/print773.jpg)

- [133 (Médio)](https://leetcode.com/problems/clone-graph/)
![PrintResolucao133](/assets/print133.png)

## Instalação 
**Linguagens**: Python, C++<br>

## Uso 
Explique como usar seu projeto caso haja algum passo a passo após o comando de execução.

## Outros 
### Informações sobre os desafios
#### [Sliding Puzzle - 773(Difícil)](https://leetcode.com/problems/sliding-puzzle/)
Para resolver o exercício, eu modelei cada configuração do tabuleiro como um nó num grafo implícito e usei BFS para explorar em camadas, serializando o tabuleiro em uma string e trocando o ‘0’ com posições vizinhas para gerar novos nós. Em seguida, mantive um conjunto de estados visitados para evitar revisitar configurações, contei os níveis da BFS para obter o mínimo de movimentos e retornei a distância quando cheguei ao estado “123450” ou –1 se não fosse alcançável.

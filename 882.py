from typing import List
import heapq
from collections import defaultdict

class Solution:
    def reachableNodes(self, edges: List[List[int]], maxMoves: int, n: int) -> int:
        # Criar grafo como um dicionário de adjacência
        graph = defaultdict(dict)
        for u, v, cnt in edges:
            graph[u][v] = cnt
            graph[v][u] = cnt

        # Dijkstra com heap de min caminho a partir do no 0
        heap = [(-maxMoves, 0)] 
        visited = {}
        
        while heap:
            moves_left, node = heapq.heappop(heap)
            moves_left = -moves_left  # Inverter o sinal para trabalhar com números positivos

            if node in visited:
                continue
            visited[node] = moves_left

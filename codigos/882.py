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
            moves_left = -moves_left  # fazer modulo para ter n positivo

            if node in visited:
                continue
            visited[node] = moves_left
            # ve os vizinhos do no atual
            for nei in graph[node]:
                cnt = graph[node][nei]
                # verifica se tem vizinho pra add na fila
                if nei not in visited and moves_left > cnt:
                    heapq.heappush(heap, (-(moves_left - cnt - 1), nei))
                    
        # contador dos nos alcancaveis 
        result = len(visited)

        # contador de nos intermediarios 
        used_edges = {}
        for u in graph:
            for v in graph[u]:
                if u < v:
                    used_u = visited.get(u, 0)
                    used_v = visited.get(v, 0)
                    max_used = min(graph[u][v], used_u + used_v)
                    result += max_used

        return result

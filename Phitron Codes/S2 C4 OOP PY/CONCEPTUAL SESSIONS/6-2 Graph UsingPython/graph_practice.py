"""  
Py week 06  |  121122, Saturday, 06.30 am 
Graph Practice 
"""
from queue import Queue

class Graph:
        def __init__(self, num_of_nodes, isDirected=False) -> None:
                self.num_of_nodes = num_of_nodes 
                self.isDirected = isDirected
                self.adj_list = [[] for _ in range(self.num_of_nodes)]  # list of lists 
                self.adj_matrix = [[0 for col in range(self.num_of_nodes)] for row in range(self.num_of_nodes)]

        def add_node_in_adj_list(self, node1, node2):
                self.adj_list[node1].append(node2)
                if not self.isDirected:
                        self.adj_list[node2].append(node1)
        
        def add_node_in_adj_matrix(self, node1, node2):
                self.adj_matrix[node1].append(node2)
                if not self.isDirected:
                        self.adj_matrix[node2].append(node1)

        def bfs(self, start_node):
                visited = []
                qu = Queue()

                visited.append(start_node)
                qu.put(start_node)
                while not qu.empty():
                        curr_node = qu.get()
                        print(curr_node)
                        for child in self.adj_list[curr_node]:
                                if child not in visited:
                                        visited.append(child)
                                        qu.put(child)
        
        visited = []
        def dfs(self, start_node):
                if start_node not in self.visited:
                        print(start_node)
                        self.visited.append(start_node)
                        for child in self.adj_list[start_node]:
                                self.dfs(child)




g = Graph(5)
g.add_node_in_adj_list(0, 1)
g.add_node_in_adj_list(0, 2)
g.add_node_in_adj_list(1, 2)
g.add_node_in_adj_list(1, 3)
g.add_node_in_adj_list(2, 4)

g.add_node_in_adj_matrix(0, 1)
g.add_node_in_adj_matrix(0, 2)
g.add_node_in_adj_matrix(1, 2)
g.add_node_in_adj_matrix(1, 3)
g.add_node_in_adj_matrix(2, 4)

print(g.adj_list)
print(g.adj_matrix)

g.bfs(0)
print("\n")
g.dfs(0)



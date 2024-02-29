"""  
Conceptual session: 6-2 : 
Graph Implementation Using Python OOP
Concept Date: 091122, Wednesday
Watch Date: 101122, Thursday, 04.00 pm 
"""
from queue import Queue
class Graph:
        def __init__(self, num_of_nodes, isDirected = False) -> None:
                self.num_of_nodes = num_of_nodes 
                self.isDirected = isDirected
                # self.adj_list = [[] for _ in range(self.num_of_nodes)]   # a nested list for adjacency list 
                # self.adj_list = {node : set() for node in range(self.num_of_nodes)}   # we are taking a set here for adj list 
                self.adj_list = {node : [] for node in range(self.num_of_nodes)}   # here taking a dict of list || all three are cool! 
                self.adj_matrix = [[0 for col in range(self.num_of_nodes)] for row in range(self.num_of_nodes)]  # for adjacency matrix #[[0]*self.num_of_nodes for _ in range(self.num_of_nodes)]

        def add_node_in_adjacency_list(self, node1, node2):
                self.adj_list[node1].append(node2)
                if not self.isDirected:      # for bi - directional graph (if self.isDirected == Flase: or not true then it is bidirectional graph, then do below)
                        self.adj_list[node2].append(node1)

        def add_node_in_adjacency_matrix(self, node1, node2):
                self.adj_matrix[node1].append(node2)
                if not self.isDirected:     # if isDirected is not true i.e if false then do following 
                        self.adj_matrix[node2].append(node1)

        def bfs(self, start_node):   # O(V+E)   vertex + edge 
                #  take an queue and a set or list for tracing visited 
                visited = set()
                qu = Queue() 
                visited.add(start_node)
                qu.put(start_node)   # push 

                while not qu.empty():
                        curr_node = qu.get()   # pop   
                        print(curr_node, end=" ")
                        for child in self.adj_list[curr_node]:   # accessing the dict where node is the key, and it's child are in set as value 
                                if child not in visited:
                                        visited.add(child)
                                        qu.put(child)
        
        visited = set()   # for dfs  visited is now calss attribute 
        def dfs(self, start_node):
                if start_node not in self.visited:   # if the node is not visited, then do the following else do nothing 
                        print(start_node, end=" ")
                        self.visited.add(start_node)
                        for child in self.adj_list[start_node]:
                                self.dfs(child) 


g =Graph(5)   # bi directional of True not given 
g.add_node_in_adjacency_list(0, 1)
g.add_node_in_adjacency_list(0, 2)
g.add_node_in_adjacency_list(1, 2)
g.add_node_in_adjacency_list(1, 4)
g.add_node_in_adjacency_list(2, 3)
g.add_node_in_adjacency_list(2, 4)

g.add_node_in_adjacency_matrix(0, 1)
g.add_node_in_adjacency_matrix(0, 2)
g.add_node_in_adjacency_matrix(1, 2)
g.add_node_in_adjacency_matrix(1, 4)
g.add_node_in_adjacency_matrix(2, 3)
g.add_node_in_adjacency_matrix(2, 4)

# g.add_node_in_adjacency_matrix(0, 1)
# g.add_node_in_adjacency_matrix(0, 2)
# g.add_node_in_adjacency_matrix(1, 3)
# g.add_node_in_adjacency_matrix(2, 4)

print(f"Adjacency List (Node as key and a set of child as value of dict):  {g.adj_list}")
print(f"Adjacency Matrix: {g.adj_matrix}")
print(f"Bfs: {g.bfs(0)}")
print()
print(f"Dfs: {g.dfs(0)}")
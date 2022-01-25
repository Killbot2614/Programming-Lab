# 10.Traveling Salesman Problem (TSP)

# Given a set of cities and distances between every pair of cities, the problem is to find the shortest possible route that visits every city exactly once and returns to the starting point. 
#    Consider city 1 as the starting and ending point. Since the route is cyclic, we can consider any point as a starting point.
#    Generate all (n-1)! permutations of cities.
#    Calculate the cost of every permutation and keep track of the minimum cost permutation.
#    Return the permutation with minimum cost.
# Input consider following values:
# { 0, 10, 15, 20 },{ 10, 0, 35, 25 },{ 15, 35, 0, 30 },{ 20, 25, 30, 0 }

from sys import maxsize
from itertools import permutations
x = 4
 
def problem(graph, s):
    vertex = []
    for i in range(x):
        if i != s:
            vertex.append(i)
            
    min_path = maxsize
    next_permutation = permutations(vertex)
    for i in next_permutation:
        
        current_pathweight = 0
        
        k = y
        for j in i:
            current_pathweight += graph[k][j]
            k = j
        current_pathweight += graph[k][y]
        
        min_path = min(min_path, current_pathweight)
         
    return min_path
 
if __name__ == "__main__":
    graph = [[0, 10, 15, 20], [10, 0, 35, 25],
            [15, 35, 0, 30], [20, 25, 30, 0]]
    y = 0
    print(problem(graph, y))
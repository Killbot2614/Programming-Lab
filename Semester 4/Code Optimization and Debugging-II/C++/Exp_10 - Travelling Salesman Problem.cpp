// 10.Travelling Salesman Problem(TSP)

/*Given a set of cities and distances between every pair of cities, the problem is to find the shortest possible route that visits every city exactly once and returns to the starting point. 

    Consider city 1 as the starting and ending point. Since the route is cyclic, we can consider any point as a starting point.
    Generate all (n-1)! permutations of cities.
    Calculate the cost of every permutation and keep track of the minimum cost permutation.
    Return the permutation with minimum cost.

Input consider following values:

{ 0, 10, 15, 20 },{ 10, 0, 35, 25 },{ 15, 35, 0, 30 },{ 20, 25, 30, 0 }
*/

#include <bits/stdc++.h>
#define x 4
using std::cout;
using std::vector;
using std::min;

void problem(int graph[][x], vector<bool>& v, int currPos, int n, int count, int cost, int& result)
{
 
    if (count == n && graph[currPos][0]) {
        result = min(result, cost + graph[currPos][0]);
        return;
    }
    
    for (int i = 0; i < n; i++) {
        if (!v[i] && graph[currPos][i]) {
            
            v[i] = true;
            problem(graph, v, i, n, count + 1,
                cost + graph[currPos][i], result);
                
            v[i] = false;
        }
    }
};
 
int main()
{
    int n = 4;
    int graph[][x] = {
        { 0, 10, 15, 20 },
        { 10, 0, 35, 25 },
        { 15, 35, 0, 30 },
        { 20, 25, 30, 0 }
    };
 
    vector <bool> v(n);
    for (int i = 0; i < n; i++)
        v[i] = false;
        
    v[0] = true;
    int result = INT_MAX;
 
    problem(graph, v, 0, n, 1, 0, result);
    cout << result;
    return 0;
}

/* Input: 80
   Ouptut: 80
*/

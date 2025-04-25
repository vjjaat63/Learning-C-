#include <bits/stdc++.h>
using namespace std;

// Function to check if an edge exists between two nodes
bool exist(vector<pair<int, int>> &edges, int curr, int target)
{
    for (auto &edge : edges)
    {
        if (edge == make_pair(curr, target) || edge == make_pair(target, curr))
            return true;
    }
    return false;
}

// Recursive function to solve the graph coloring problem
bool sol(int curr, vector<pair<int, int>> &edges, int m, int n, vector<int> &color)
{
    if (curr == n)
        return true; // Successfully colored all nodes

    for (int i = 1; i <= m; i++)
    { // Try assigning colors 1 to m
        bool ispos = true;

        // Check if adjacent nodes have the same color
        for (int j = 0; j < n; j++)
        {
            if (exist(edges, curr, j) && color[j] == i)
            {
                ispos = false;
                break;
            }
        }

        if (ispos)
        {
            color[curr] = i; // Assign color
            if (sol(curr + 1, edges, m, n, color))
                return true;
            color[curr] = 0; // Backtrack
        }
    }

    return false;
}

// Function to check if the graph can be colored with m colors
bool graphColoring(int v, vector<pair<int, int>> &edges, int m)
{
    vector<int> color(v, 0); // Initialize all nodes with color 0 (unassigned)
    return sol(0, edges, m, v, color);
}

int main()
{
    // **Predefined Input**
    int v = 4; // Number of vertices
    int m = 3; // Number of colors

    vector<pair<int, int>> edges = {
        {0, 1}, {0, 2}, {1, 2}, {1, 3} // Predefined edges
    };

    // **Run the Graph Coloring Algorithm**
    if (graphColoring(v, edges, m))
    {
        cout << "Yes, the graph can be colored using " << m << " colors.\n";
    }
    else
    {
        cout << "No, the graph cannot be colored using " << m << " colors.\n";
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define INF INT_MAX // Define infinity as INT_MAX

void floydWarshall(vector<vector<int>> &distance)
{
    int V = distance.size();

    for (int k = 0; k < V; k++)
    {
        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < V; j++)
            {
                if (distance[i][k] != INF && distance[k][j] != INF)
                {
                    distance[i][j] = min(distance[i][j], distance[i][k] + distance[k][j]);
                }
            }
        }
    }
}

int main()
{
    vector<vector<int>> distance = {
        {0, 4, INF, 5, INF},
        {INF, 0, 1, INF, 6},
        {2, INF, 0, 3, INF},
        {INF, INF, 1, 0, 2},
        {1, INF, INF, 4, 0}};

    floydWarshall(distance);

    // Print Shortest Distance Matrix
    cout << "\nShortest Distance Matrix:\n";
    for (int i = 0; i < distance.size(); i++)
    {
        for (int j = 0; j < distance.size(); j++)
        {
            if (distance[i][j] == INF)
                cout << "INF   "; // Print "INF" for unreachable paths
            else
                cout << distance[i][j] << "   ";
        }
        cout << endl;
    }

    return 0;
}

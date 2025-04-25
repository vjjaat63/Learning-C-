#include <bits/stdc++.h>
using namespace std;

// Custom comparator for min-heap (sorting by distance)
class Compare
{
public:
    bool operator()(const pair<int, int> &a, const pair<int, int> &b)
    {
        return a.second > b.second;
    }
};

// Dijkstra's Algorithm to compute shortest paths from a source
vector<int> dijkstra(vector<vector<pair<int, int>>> &adj, int src)
{
    int n = adj.size();
    vector<int> dist(n, INT_MAX);
    vector<bool> explored(n, false);
    priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq;

    dist[src] = 0;
    pq.push({src, 0});

    while (!pq.empty())
    {
        int node = pq.top().first;
        pq.pop();

        if (explored[node])
            continue;
        explored[node] = true;

        for (auto &neighbor : adj[node])
        {
            int nextNode = neighbor.first;
            int weight = neighbor.second;

            if (!explored[nextNode] && dist[node] + weight < dist[nextNode])
            {
                dist[nextNode] = dist[node] + weight;
                pq.push({nextNode, dist[nextNode]});
            }
        }
    }

    return dist;
}

int main()
{
    int vertex, edge;
    cout << "Enter the number of vertices: ";
    cin >> vertex;
    cout << "Enter the number of edges: ";
    cin >> edge;

    vector<vector<pair<int, int>>> graph(vertex);

    cout << "Enter the edges (u v weight):" << endl;
    for (int i = 0; i < edge; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;

        graph[u].push_back({v, w});
        graph[v].push_back({u, w}); // Undirected graph
    }

    int start;
    cout << "Enter starting node: ";
    cin >> start;

    vector<int> distance = dijkstra(graph, start);

    cout << "Shortest distances from source " << start << ":\n";
    for (int i = 0; i < vertex; i++)
    {
        if (distance[i] == INT_MAX)
            cout << "Node " << i << " -1 \n";
        else
            cout << "Node " << i << " -> " << distance[i] << endl;
    }

    return 0;
}

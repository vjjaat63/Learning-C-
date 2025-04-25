#include <bits/stdc++.h>
using namespace std;

// Disjoint Set (Union-Find) with Path Compression & Union by Rank
class DSU
{
    vector<int> parent, rank;

public:
    DSU(int n)
    {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; i++)
            parent[i] = i; // Every node is its own parent
    }

    int find(int x)
    { // Find with Path Compression
        if (parent[x] != x)
            parent[x] = find(parent[x]);
        return parent[x];
    }

    void unite(int x, int y)
    { // Union by Rank
        int rootX = find(x);
        int rootY = find(y);
        if (rootX != rootY)
        {
            if (rank[rootX] > rank[rootY])
                parent[rootY] = rootX;
            else if (rank[rootX] < rank[rootY])
                parent[rootX] = rootY;
            else
            {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
        }
    }
};

// Kruskal's Algorithm to find Minimum Spanning Tree
int kruskalMST(int V, vector<vector<int>> &edges)
{
    // Sort edges by weight
    sort(edges.begin(), edges.end(), [](vector<int> &a, vector<int> &b)
         { return a[2] < b[2]; });

    DSU dsu(V);
    int mstWeight = 0;
    int mstEdges = 0;

    cout << "Edges in the Minimum Spanning Tree:\n";

    for (auto &edge : edges)
    {
        int u = edge[0];
        int v = edge[1];
        int w = edge[2];

        // Check if u and v belong to different sets
        if (dsu.find(u) != dsu.find(v))
        {
            dsu.unite(u, v);
            mstWeight += w;
            mstEdges++;
            cout << u << " - " << v << " (Weight: " << w << ")\n";
            if (mstEdges == V - 1)
                break; // Stop when MST is complete
        }
    }

    return mstWeight;
}

int main()
{
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    vector<vector<int>> edges;
    cout << "Enter edges (u v weight):\n";
    for (int i = 0; i < E; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back({u, v, w});
    }

    int mstWeight = kruskalMST(V, edges);
    cout << "Total weight of Minimum Spanning Tree: " << mstWeight << endl;

    return 0;
}

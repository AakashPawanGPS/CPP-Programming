#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void addEdgeDir(vector<int> adjDir[], int u, int v)
{
    adjDir[u].push_back(v);
}

void bfs(vector<int> adj[], int V, int s)
{
    bool visited[V + 1];
    for (int i = 0; i < V; i++)
    {
        visited[i] = false;
    }
    queue<int> q;
    visited[s] = true;
    q.push(s);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        cout << u << " ";
        for (int v : adj[u])
        {
            if (visited[v] == false)
            {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

void dfsRecur(vector<int> adj[], int v, bool visited[])
{
    visited[v] = true;
    cout << v << " ";
    for (int u : adj[v])
    {
        if (visited[u] == false)
        {
            dfsRecur(adj, u, visited);
        }
    }
}

void dfs(vector<int> adj[], int v, int s)
{
    bool visited[v];
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
    }
    dfsRecur(adj, s, visited);
}

void shortestPathUnweighted(vector<int> adj[], int V, int s)
{
    int dist[V] = {INT_MAX};
    dist[s] = 0;
    bool visited[V] = {false};
    visited[s] = true;
    queue<int> q;
    q.push(s);

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : adj[u])
        {
            if (visited[v] == false)
            {
                dist[v] = dist[u] + 1;
                visited[v] = true;
                q.push(v);
            }
        }
    }
    for (int i = 0; i < V; i++)
    {
        cout << dist[i] << " ";
    }
}

bool detectCycleUndirectedUtil(vector<int> adj[], int s, bool visited[], int parent)
{
    visited[s] = true;
    for (int u : adj[s])
    {
        if (visited[u] == false)
        {
            if (detectCycleUndirectedUtil(adj, u, visited, s) == true)
            {
                return true;
            }
        }
        else if (u != parent)
            return true;
    }
    return false;
}

bool detectCycleUndirected(vector<int> adj[], int V)
{
    bool visited[V] = {false};
    for (int i = 0; i < V; i++)
    {
        if (visited[i] == false)
        {
            if (detectCycleUndirectedUtil(adj, i, visited, -1) == true)
                return true;
        }
    }
    return false;
}

bool detectCycleDirectedUtil(vector<int> adjDir[], int s, bool visited[], bool recurStack[])
{
    visited[s] = true;
    recurStack[s] = true;
    for (int u : adjDir[s])
    {
        if ((visited[u] == false) && (detectCycleDirectedUtil(adjDir, u, visited, recurStack) == true))
        {
            return true;
        }
        else if (recurStack[u] == true)
        {
            return true;
        }
    }
    recurStack[s] = false;
    return false;
}

bool detectCycleDirected(vector<int> adjDir[], int V)
{
    bool visited[V] = {false};
    bool recurStack[V] = {false};
    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
        {
            if (detectCycleDirectedUtil(adjDir, i, visited, recurStack))
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{

    int V = 5;
    vector<int> adj[V];

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 3);
    addEdge(adj, 2, 4);
    addEdge(adj, 3, 4);

    vector<int> adjDir[V];
    addEdgeDir(adjDir, 0, 1);
    addEdgeDir(adjDir, 0, 2);
    addEdgeDir(adjDir, 1, 2);
    addEdgeDir(adjDir, 2, 0);
    addEdgeDir(adjDir, 2, 3);
    addEdgeDir(adjDir, 3, 3);
    addEdgeDir(adjDir, 4, 0);
    addEdgeDir(adjDir, 1, 4);

    // bfs(adj, V, 0);
    // cout << endl;
    // dfs(adj, V, 0);
    // cout << endl;
    // shortestPathUnweighted(adj, V, 1);

    // cout << detectCycleundirected(adj, V);

    cout << detectCycleDirected(adjDir, V);

    return 0;
}
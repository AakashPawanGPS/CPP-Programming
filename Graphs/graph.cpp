#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void bfs(vector<int> adj[], int v, int s)
{
    bool visited[v + 1];
    for (int i = 0; i < v; i++)
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

void dfsRecur(vector<int> adj[], int s, bool visited[])
{
    visited[s] = true;
    cout << s << " ";
    for (int u : adj[s])
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

int main()
{

    int v = 5;
    vector<int> adj[v];

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 3);
    addEdge(adj, 2, 4);
    addEdge(adj, 3, 4);

    bfs(adj, v, 0);
    cout << endl;
    dfs(adj, v, 0);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

// class to represent a graph.
class graph
{

private:
    int v;
    vector<char> *adj;

public:
    // constructor.
    graph(int v)
    {
        this->v = v;
        adj = new vector<char>[v];
        int index = 0;
    }

    // set all the edges.
    void add_edge(char u, char v)
    {
        adj[index++].push_back(v);
        adj[v].push_back(u);
    }

    void printDist(char source, char dest);
    bool BFS(char source, char dest, char parent[]);
};

// function to print the shortest path.
void graph::printDist(char source, char dest)
{

    // it stores parent for each vertex to trace the path.
    char parent[v];

    // BFS returns false means destination is not reachable.
    if (BFS(source, dest, parent) == false)
    {
        cout << "-1";
        return;
    }

    // stack to store the shortest path.
    stack<char> st;

    // tracing the path.
    while (parent[dest] != -1)
    {
        st.push(dest);
        dest = parent[dest];
    }

    // printing the minimum Distace
    cout << st.size();

    return;
}

// this function returns if destination is reachable or not
// additionally it sets the parent array to say the path (if exist).
bool graph::BFS(char source, char dest, char parent[])
{

    queue<char> q;
    bool visited[v];

    // setting all the vertices as non-visited
    // and parents of all vertices as -1.
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
        parent[i] = -1;
    }

    // pushing the source into the queue and mark it as visited.
    q.push(source);
    visited[source] = true;

    // loop executes until all vertices are traversed.
    while (!q.empty())
    {

        // popping one element from queue.
        char temp = q.front();
        q.pop();

        // check for all adjacents.
        for (char k : adj[temp])
        {
            if (visited[k] == false)
            {

                // pushing into queue and mark it visited as well as
                // set the parent of the adjacent in parent array.
                q.push(k);
                visited[k] = true;
                parent[k] = temp;

                // if destination is reached, returns true
                // to state that there exist a path.
                if (k == dest)
                    return true;
            }
        }
    }

    // if destination is not reachable.
    return false;
}

// driver function.
int main()
{

    // sample graph.
    graph g(5);

    g.add_edge('w', 'x');
    g.add_edge('x', 'y');
    g.add_edge('z', 'y');
    g.add_edge('z', 'v');
    g.add_edge('w', 'v');

    char src, des;
    cin >> src >> des;

    g.printDist(src, des);

    return 0;
}
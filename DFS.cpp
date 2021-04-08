#include <bits/stdc++.h>
using namespace std;
class Graph{
    public:
       Graph(int );
       ~Graph();
       void addedge(int , int);
       void addundirectedge(int , int);
       void BFS(int);
       void DFS();

    private:
      int vertexnumber;
      list<int> *adj;
      void DFSVisit(int,bool[]);
};

Graph::Graph(int n):vertexnumber(n)
{
    adj = new list<int>[vertexnumber];
}
Graph::~Graph(){
    delete[] adj;
}
void Graph::addedge(int u , int v){
    adj[u].push_back(v);
}
void Graph::addundirectedge(int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void Graph:BFS(int s){
    bool *visited = new bool[vertexnumber];
    fill(visited,visited+vertexnumber,false);

    list<int> queue;
    visited[s] = true;
    queue.push_back(s);

    while(!queue.empty())
    {
        s = queue.front();
        cout << s << " ";
        queue.pop_front();

        for(auto i = adj[s].begin();i!adj[s].end();++i){
            if ( !visited[*i]){
                visited[*i] = true;
            }
        }
    }
}

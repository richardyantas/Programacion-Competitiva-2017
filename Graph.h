#include<bits/stdc++.h>

#define NMAX 50
#define pb push_back
#define mp make_pair
#define INF 2e9

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;

class Graph
{
    int V;
    vector<pair<int,int> > *A;
public:
    Graph(int V);
    
    void addEdge(int u,int v,int w);
    void dijkstra(int s);
};

Graph::Graph(int V)
{
    this->V = V;
    A = new vector< pair<int,int> > (V);    
}

void Graph::addEdge(int u,int v,int w)
{
    A[u].pb(mp(v,w));
    A[v].pb(mp(u,w));
}

void Graph::dijkstra(int src)
{
    priority_queue< ii > pq;
    vi dist(V,INF);
    pq.push(mp(0,src));
    dist[src]=0;
    
    while(!pq.empty())
    {
        int u=pq.top().second;
        pq.pop();
        vii::iterator it;
        for(it = A[u].begin();it!=A[u].end();++it)
        {
            int v=(*it).first;
            int weight=(*it).second;
            
            if(dist[v]>dist[u]+weight)
            {
                dist[v]=dist[u]+weight;
                pq.push(mp(dist[v],v));
            }
        }
    }
    
    printf("vertex distances from source \n");
    for(int i=0;i<V;++i)
    {
        printf("%d     %d\n",i,dist[i]);
    }
}


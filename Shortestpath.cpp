#include <bits/stdc++.h>
#include "miniwin.h"
#include "Graph.h"
#include <CGAL/Triangulation_vertex_base_with_info_2.h>
#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
#include <CGAL/Delaunay_triangulation_2.h>
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> pii;
#define NMAX 30
#define pb push_back
#define mp make_pair
#define INF 2e9

using namespace miniwin;
using namespace std;

struct Node
{
    int x,y;
};

int main(){
    
  int V=9,E,a,b,w;
  Graph g(V);
  //scanf("%d %d",&E,&V);
  //while(scanf("%d %d %d",&a,&b,&w))
  //{
   //   g.addEdge(a,b,w);
  //}
  
  //g.dijkstra(0);
  
  Node node[NMAX]; 
  for(int i=0;i<NMAX;i++)
  {
    node[i].x = rand()%1000;
    node[i].y = rand()%600;
  }
    
  vredimensiona(1000, 600);
  color(AMARILLO);
  rectangulo_lleno(0, 0, 1000, 600);
  color(ROJO);  
  
  for(int i=0;i<NMAX;i++)
  {
      circulo(node[i].x,node[i].y,5);
  }
  refresca();  
  return 0;
}

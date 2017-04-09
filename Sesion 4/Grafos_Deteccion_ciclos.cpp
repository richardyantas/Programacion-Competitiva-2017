#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair

#define MAXN 100
//typedef pair<int,int> ii

vector< int > G[MAXN];
vector< bool > Visit(MAXN,false);

int parents[MAXN];
int num_cycles=0;

void dfs(int node){
	Visit[node] = true;
	for( int i=0;i<G[node].size();i++ ){
		int n = G[node][i];
		if( !Visit[n] ){
			parents[n] = node;
			//Visit[n] = true;
			dfs(n);			
		}	
		else{
			 if( n != parents[node] ){
			 	 cout << " node : " << node << " " << n << " " << parents[node] << " " << num_cycles <<endl; 
				 num_cycles++;
			 }
		}			
	}
}



/*
  Input:

  1 2
  2 3
  3 6
  4 2
  5 4
  4 7
  2 6
  5 7


*/
int main(){
	int a,b,c=0,N=0;
	//set<int> m;
	freopen("int.txt","r",stdin);	

	while(cin >> a >> b){
		if( a==0 && b==0 )break;
		G[a].pb(b);
		G[b].pb(a);
		//m.insert(a);
		//m.insert(b);
		N = max(a,b);
		
	}
	
	for(int i=1;i<=N;i++){
			cout << i << " ";
			for(int j=0;j<G[i].size();j++){
					cout<<G[i][j]<<" ";
			}
			cout<<endl;
	}
	
	//int N = m.size();
	dfs(1);

	cout << "*****************" << endl;
	
	
	for(int i=1;i<=N;i++){
		cout << " "<< parents[i];
	}
	cout << endl;

	cout << "Numero de ciclos: " << num_cycles/2 << endl;

	return 0;
}

#include<bits/stdc++.h>
#define REP(i,a,b) for(int i=a;i<b;i++)
#define NMAX 10000

using namespace std;

//int x[] = {-1,2,4,-3,5,2,-5,2} ;
//int n=8; 
int a,x[NMAX],j=0;


void func1(int n){
	int p = INT_MIN ;
	REP(a,0,n){ 
		REP(b,a,n){
			int s=0;
			REP(c,a,b+1){
				s+=x[c];
			}
			p = max(p,s);
		}
	}
	cout << p << endl;
}

int main(){
	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	
	while(cin >> a) {
		x[j++] = a;
	}
	func1(j);
	
	
	return 0;
}

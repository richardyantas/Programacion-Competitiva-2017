#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n,m[1001];

int main(){
		
	cin >> n;

	for (int i = 2; i <= n ; ++i)
	{
		m[i] = i;
	}

	int cont,k;
	for (int i = n/2; i >= 2; i--)		
	{
		cont = 0;
		for( int j = n/2 + 1; j <= n ; j++)
		{	
			if( m[j]%i == 0 )
			{
				cont++;
				k = j;
			}		
		}
		if(cont == 1)
		{
			m[k] = i;			
		}
	}

	sort(m+n/2+1,m+n+1);

	if(n == 1){
		cout << "{1}" << endl;
	}else{
		cout << "{";
		for (int i = n/2+1; i < n; ++i)	
		{
			cout << m[i] << ",";
		}
		cout << m[n] << "}" << endl;
	}
	
	
return 0;

}

#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;


string sum( string numb1, string  numb2){
	int n1 = numb1.size() , n2 = numb2.size();
	string result = "";
	int q = 0,d = abs(n2-n1),m = max(n1,n2);	
	while(d--){n1<n2?numb1 = "0" + numb1:numb2="0"+numb2;};	
	int n;
	for (int i = 0; i < m; ++i){		
		n  = (numb1[m-i-1]-'0')+(numb2[m-i-1]-'0')+q;
		result += (n)%10 + '0';	
		q = n/10;		
	}
	if(q>0)result += (q+'0');
	reverse(result.begin(),result.end());
	return result;
}

int main(){
	string numb1,numb2;
	cin >> numb1 >> numb2;
	//int n1 = numb1.size(), n2=	 numb2.size();

	int var = 5;

	//cout << var-- << endl; // muestra = 5 -> var = 4
	//cout << --var << endl; // var = 3 -> muestra = 3

	//while(--var)cout<< "papu" << endl;
	//while(var--)cout<<"papu"<<endl;

	cout << sum( numb1 , numb2 ) << endl;


}
#include<bits/stdc++.h>
using namespace std;
#define push_back pb
#define make_pair mp
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;

namespace first{
	int x = 5;
	int y = 10;
}

namespace second{
	double x = 3.1416;
	double y = 2.7183;
}

int fib(int n){
	if( n == 0) return 1;
	if( n == 1) return 1;
	return fib(n-1) + fib(n-2);
	
}

int main () {
	//using first;
	using namespace first;
	using namespace second;
	
	//cout << first::x << endl;
	//cout << second::y << endl;
	

	int n = 1452;
	int* p = &n;
 	char* c = "hello";
	char* b = "hello";
	
	cout << b << endl;
	

	cout << c << endl;
	cout << p << endl;
	cout << *p << endl;
	cout << (*p == n) << endl;
	cout << &*p << endl;
	
	
	int a = 5;
	//int& b = a;
  	//b++; 
	cout << a << endl;
	cout << &b << endl;
	cout << &a << endl;
	
	//int f = fin(5);
	int* pp;

  	cout << pp << endl;

	//cout << c << endl;
	
	int numbers[3]={1,2,5};
	int * po;

	po = numbers;
	
	cout << "numbers: " << " " <<  numbers << endl;
	cout << "po: " << " " << po << endl;
	cout << "*po: " << " " <<  *po << endl;
	cout << "*(po + 2): " << " " << *(po + 2) <<endl;
	
	
	
	return 0;
}

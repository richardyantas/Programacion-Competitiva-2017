#include<iostream>
#include<vector>
using namespace std;

class PackingParts{

	public:
		int pack(vector<int> parts,vector<int> boxes){
			int p = parts.size(), b = boxes.size();
			int i=0,j=0,cont = 0;
			while( i<p || j<b ){
				if( parts[i] <= boxes[j] ){
					i++;
					j++;
					cont++;
				}
				else{
					j++;
				}
			}
		}
};


int main(){
	char a , b;
	vector<int> parts,boxes;

	PackingParts solution;

	while(cin >> a && a != '\n' ){
		
		parts.push_back(a);
	}

	while(cin >> b && b != '\n' ){
		boxes.push_back(b);
	}

	int result = solution.pack(parts,boxes);
	cout << result << endl;


	return 0;
}

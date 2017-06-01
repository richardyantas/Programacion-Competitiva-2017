// Author: Richard Valentin Yantas Alcantara
// ShorterSuperSum.cpp

#include<iostream>
#include<vector>
using namespace std;
class ShorterSuperSum
{
	public:
		int calculate(int k,int n){
				
				int c[100][100];

			 	for (int j = 0; j <= n; j++)
			 	{
			 		c[0][j] = j;
			 	}

			 	for (int i = 1; i <= k; i++)
			 	{
			 		for (int j = 0; j <= n; j++)
			 		{
			 			c[i][j]=c[i][j-1]+c[i-1][j];

			 			/*
			 			for (int z = 0; z <= j; ++z)
			 			{
			 				c[i][j] += c[i-1][z];
			 			}
			 			*/			 			
			 		}
			 	}

			 	return c[k][n];
		}
};

int main(){

	ShorterSuperSum solve;
	int k,n;
	cin >> k >> n;
	cout << solve.calculate(k,n)<< endl;

	return 0;
}

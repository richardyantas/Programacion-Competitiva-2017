// Author: Richard Valentin Yantas Alcantara
// NumberofFiboCalls.cpp

#include<iostaream>
#include<vector>

using namespace std;

class NumberofFiboCalls{

	public:
		vector<int> fiboCallsMade(int n){

			vector< pair<int,int> > f(n+1);
			vector< int > s;

			f[0].first = 1;
			f[0].second = 0;
			f[1].first = 0;
			f[1].second = 1;

			for (int i = 2; i <= n; ++i)
			{
				f[i].first = f[i-1].first + f[i-2].first;
				f[i].second = f[i-1].second + f[i-2].second;
			}

			s.push_back( f[n].first );
			s.push_back( f[n].second );

			return s;
		}
	
};

int main(){

	NumberofFiboCalls solve;
	int n;
	cin >> n;
	
	cout << solve.fiboCallsMade(n)[0] << " " << solve.fiboCallsMade(n)[1] << endl;

	return 0;
}

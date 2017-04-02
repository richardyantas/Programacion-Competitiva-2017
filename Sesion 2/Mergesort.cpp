#include<bits/stdc++.h>
using namespace std;

void merge(int,int, int*);

void merge_sort( int ini,int fin, int* A){
	if( ini == fin ) return;
	int mid = (ini+fin)/2;
	merge_sort( ini,mid,A);
	merge_sort( mid+1,fin,A );
	merge( ini,fin, A );
}

void merge(int ini,int fin,int* arr){
	int i = ini;
	int mid = (ini + fin )/2;
	int j = mid + 1;
	int k = ini;
	int p[1000];	
	while(  ini <= k && k<= fin ){
		if( j > fin )p[k++] = arr[i++];			
		if( i > mid )p[k++] = arr[j++];
		if( ini<=i && i<=mid && mid+1<=j && j<=fin ){			
			if( arr[i] <= arr[j] ){
				p[k++] = arr[i++];	
			}
			else{
				p[k++] = arr[j++];
			}									
		}		  
	}
	for( int i=ini;i<=fin;i++ ){
		arr[i]=p[i];
	}
}

int main(){
	int a[] = { 2, 42, 3, 7, 1 , 15 , 32 , 78 , 6 };
	merge_sort( 0 , 8 , a );
	for( int i = 0; i<9 ;i ++ ){
		cout << a[i] << " ";
	}
	return 0;
}

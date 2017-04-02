#include<bits/stdc++.h>
using namespace std;

void print_array( int array[] ){
	for(int i=0;i<5;i++){
		cout << array[i] << " ";
	}
}

void sort1( int array[] ){
	for( int i = 0; i<5 ;i++){
		 for( int j = i;j < 5 ;j++){
		 	if( array[i] >= array[j] ){
				swap( array[i] , array[j] );
			}
		 }
	}
}


void sort2( int array[],int ini, int fin){
		if( ini == fin ) return;
		int k = (ini + fin)/2;
		sort2( array, ini, k );
		sort2( array, k+1, fin );	
		
		sort2_merge( array , ini , fin , i , j  );	
}

void sort2_merge(int array[], int ini, int fin, int i, int j ){
	int a[],b[];
	int k = (ini + fin)/2;
	for(int i=ini;i<k;i++){
		a[i] = a ;	}
	for(int j= )
}



int main(){
	int a[] = {4,2,-2,3,5};
	
		
	print_array(a);
}

#include <iostream>
using namespace std;

int main(){
	int n = 5;
	int A[5] = {2,3,7,9,1};
	
	cout << "Original array list: " << endl;
	for(int x=0; x<n; x++){
		cout << A[x];
		cout << " | ";
	}
	cout << endl;
	for(int i=n; i>1; i--){
		for(int j=0; j<i-1;j++)
		if(A[j] > A[j+1])
		{
		
			int swap = A[j];
			A[j] = A[j+1];
			A[j+1] = swap;	
			cout << "The swapped elements are: " << A[j] << " and " << A[j+1] <<endl;
		}	
	}
	cout << "Sorted Array: " << endl;
	for(int k=0; k<5;k++){
		cout << A[k] << " ";
	} 
	return 0;
}

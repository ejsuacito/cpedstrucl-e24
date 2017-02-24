#include <iostream>
using namespace std;

void shell_sort (int *A, int n){
	int h,i,j,k;
	for (h=n; h /= 2;) {
		for(i=h; i < n; i++) {
			k = A[i];
			for (j=i; j>=h && k < A[j-h]; j-=h) {
				A[j] = A[j-h];
			}
			A[j] = k;
		}
	}
}
int main(int ac, char **av){
	

	int A[5] = {5,3,4,2,7};
	int n = sizeof A / sizeof A[0];
	shell_sort(A,n); 
	
	cout << "Sorted Array list: " << endl;
	for(int l=0; l<5; l++)
	{
		cout << A[l] << " ";
	}
	
	return 0;
}	

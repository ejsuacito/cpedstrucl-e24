#include <iostream>
using namespace std;

void shell_sort (int *a, int n){
	int h,i,j,k;
	for (h=n; h /= 2;) {
		for(i=h; i < n; i++) {
			k = a[i];
			for (j=i; j>=h && k < a[j-h]; j-=h) {
				a[j] = a[j-h];
			}
			a[j] = k;
		}
	}
	
}
int main(int ac, char **av){
	

	int A[5] = {11,5,3,7,1};
	int n = sizeof A / sizeof A[5];
	shell_sort(A,n); 
	cout << "Original Array list: " << endl;
	for(int x=0; x < n; x++)
	{
		cout << A[x];
		cout << " | ";
	}
	cout << endl;
	
	cout << "Sorted Array list: " << endl;
	for(int k=0; k<5; k++)
	{
		cout << A[k] << " ";
	}
	
	return 0;
}	

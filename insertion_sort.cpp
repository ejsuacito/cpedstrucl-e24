#include <iostream>
using namespace std;

int main(){
	int n = 5;
	int A[5] = {9,5,1,0,3};
	int j;
	cout << "Original Array list: " << endl;
	for(int x=0; x < n; x++)
	{
		cout << A[x];
		cout << " | ";
	}
	cout << endl;
	
	for(int i; i<n;i++)
	{
		int tmp=A[i];
		for(j=i-1;j>=0 && tmp<A[j];j--)
		{
			A[j+1] = A[j];
		}
		A[j+1] = tmp;
	cout << "The swapped elements are: " << A[j+1] << " and " << A[j] <<endl;
	}
	cout << "Sorted Array list: " << endl;
	for(int k=0; k<5; k++)
	{
		cout << A[k] << " ";
	}
	return 0;
}

#include <iostream>
using namespace std;

int main(){
	int n = 5;
	int A[5] = {1,4,7,2,6};
	
	cout << "Original Array list: " << endl;
	for(int x=0; x < n; x++)
	{
		cout << A[x];
		cout << " | ";
	}
	cout << endl;
	for(int i=0; i<n-1;i++)
	{
		int min = A[i], index = i;
		for(int j=i+1; j<n;j++)
		{
			if(A[j] < min)
			{
				min = 	A[j];
				index = j;	
			}
		}
		A[index] = A[i];
		A[i] = min;
		cout << "The swapped elements are: " << A[i] << " and " << A[i+1] <<endl;
	}
	cout << "Sorted Array list: " << endl;
	for(int k=0; k<5; k++)
	{
		cout << A[k] << " ";
	}
	return 0;
}

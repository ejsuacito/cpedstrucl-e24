#include <iostream>
using namespace std;

int main(){
	int n = 5;

	int numArr[5] = {4,8,7,6,10};
	int size,l1,l2,k,h1,h2;	
	int temp[5];
	cout << "Original array list: " << endl;
	for(int x=0; x<n; x++){
		cout << numArr[x];
		cout << " | ";
	}
	cout << endl;
	for(size=1;size<n;size=size*2)
	{
		
		l1 = 0;
		k = 0;
		while(l1+size<n)
		{
			h1 = l1 + size - 1;
			l2 = h1 + 1;
			h2 = l2 + size -1; 
			if (h2 >= n)
				h2 = n -1;
			int	i = l1;
			int j = l2;
			while(i<=h1 && j<=h2)
			{
				if(numArr[i] <= numArr[j])
					temp[k++] = numArr[i++];
				else 
					temp[k++] = numArr[j++];
			}
			while(i<=h1)
				temp[k++]=numArr[i++];
			while(j<=h2)
				temp[k++]=numArr[j++];
			l1 = h2 + 1;
		}
		for(int i=l1; k<n;i++)
			temp[k++]=numArr[i];
		for(int i=0; i<n;i++)
			numArr[i]=temp[i];
	}
	cout << "Sorted Array list: " << endl;
	for(int l=0; l<5; l++)
	{
		cout << numArr[l] << " ";
	}
	
	return 0;
}

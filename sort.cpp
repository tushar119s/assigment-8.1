#include<iostream>
#include<vector>
using namespace std;
 
void printVector(vector<int>A)
{

	for(int i=0;i<A.size();i++)
	{
		cout<<A[i]<<" ";	
	}
	cout<<"\n";
}
 

void sort(vector<int>&A)
{
	int i, key, j;
	for (i = 1; i < A.size(); i++)
	{
		key = A[i];
		j = i - 1;
		while (j >= 0 && A[j] > key) 
		{
			A[j + 1] = A[j];
			j = j - 1;
		}
		A[j + 1] = key;
	}
}
 
int main() {
	vector<int>A= {6,1,2,3,4,6,1,5,3,4,8};
	// your code goes here
	sort(A);
	cout<<"sorted vector: ";
	printVector(A);
 
	return 0;
}
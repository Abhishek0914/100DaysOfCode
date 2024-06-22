#include<iostream>
using namespace std;

void selectionSort(vector<int>&A){
	int n = A.size();
    for (int i = 0; i < n - 1; ++i) {
        
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (A[j] < A[minIndex]) {
                minIndex = j;
            }
        }
        swap(A[minIndex], A[i]);
    }
}

void printVector(vector<int>A){
	for(int a:A){
		cout<<a<<" ";
	}
	cout<<"\n";
}
int main(){
	vector<int>A={4,3,2,5,1};
	selectionSort(A);
	cout<<"Sorted Aay: "; 
	printVector(A);
}
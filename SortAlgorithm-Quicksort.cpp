//============================================================================
// Name        : SortAlgorithm-Quicksort.cpp
// Author      : Shubhit Chouhan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int Partition(int *A,int start, int end){
	int pivot = A[end];
	int partitionIndex = start;
	for(int i = start;i<end;i++){
		if(A[i]<= pivot){
			swap(A[i],A[partitionIndex]);
			partitionIndex+=1;
		}
	}
	swap(A[partitionIndex],A[end]);
	return partitionIndex;
}

void QuickSort(int *A, int start, int end){
	if(start<end){
		int partitionIndex = Partition(A,start,end);
		QuickSort(A,start,partitionIndex-1);
		QuickSort(A,partitionIndex+1,end);
	}
}
int main() {
	int A[] = {1,4,2,5,7,2,6,3};
	QuickSort(A,0,7);
	for(int i=0;i<8;i++) cout<<A[i]<<" "<<flush;
	return 0;
}

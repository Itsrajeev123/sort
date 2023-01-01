#include<bits/stdc++.h>
using namespace std;

void mergeArrays(int arr1[], int arr2[], int n,int m, int arr3[]){
	int i = 0, j = 0, k = 0;
	while(i < n){
	arr3[k++] = arr1[i++];
	}
	while(j < m){
	arr3[k++] = arr2[j++];
	}
	sort(arr3, arr3+n+m);
}
int main()
{
	int arr1[] = {1,7,9,12};
	int n = sizeof(arr1) / sizeof(arr1[0]);

	int arr2[] = {2,4,10,16};
	int m = sizeof(arr2) / sizeof(arr2[0]);

	int arr3[n+m];
	mergeArrays(arr1, arr2, n, m, arr3);

	cout << "Array after merging" <<endl;
	for (int i=0; i < n+m; i++)
		cout << arr3[i] << " ";

	return 0;
}

#include <iostream>
using namespace std;
void heapify(int arr[], int n, int i)
{
	int largest = i;
	int l=2*i+1;
	int r=2*i+2;
	if (l<n&&arr[l]>arr[largest])
		largest=l;
	if (r<n&&arr[r]>arr[largest])
		largest=r;
	if (largest!=i)
	{
		swap(arr[i],arr[largest]);
		heapify(arr,n,largest);
	}
}
void heapSort(int arr[], int n)
{
	for (int i=n/2-1;i>=0;i--)
		heapify(arr,n,i);
for (int i=n-1; i>=0; i--) {
    swap(arr[0],arr[i]);
		heapify(arr,i,0);
	}
}


int main() {
int arr[8],i;
for(i=0;i<8;i++){
    cout<<"enter values"<<endl;
    cin>>arr[i];
}
	int n = sizeof(arr)/sizeof(arr[0]);
	heapSort(arr, n);
cout<<"minimum="<<arr[1];
}




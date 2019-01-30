#include<iostream>
using namespace std;
void buildheap(int [],int );
void max_heapify (int Arr[ ], int i,int n);
int main(){
int arr[5],i,hsize=0;
for(i=1;i<=5;i++){
    cin>>arr[i];
}
buildheap(arr,5);
for(i=1;i<=5;i++){
    cout<<arr[i]<<endl;
}
}
void buildheap(int arr[],int n){
	 for(int i = n/2 ; i >= 1 ; i-- )
        {
            max_heapify (arr, i,n) ;
        }
}
void max_heapify (int Arr[ ], int i, int N)
    {
        int left = 2*i   ;                //left child
        int right = 2*i +1     ;      //right child
        int largest;
        if(left<= N and Arr[left] > Arr[i] )
              largest = left;
        else
             largest = i;
        if(right <= N and Arr[right] > Arr[largest] )
            largest = right;
        if(largest != i )
        {
            swap (Arr[i] , Arr[largest]);
            max_heapify (Arr, largest,N);
        } 
     }

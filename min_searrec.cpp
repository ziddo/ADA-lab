#include<iostream>
using namespace std;
int minsearch(int [],int );
int maxsearch(int [],int );
int main(){
    int n;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"minimum="<<minsearch(a,n-1)<<endl;
    cout<<"maximum="<<maxsearch(a,n-1);

}
int minsearch(int a[],int max){
    if(max==0)
    return a[0];
    else{
        int t=minsearch(a,max-1);
        if(a[max]>t)
          return t;
        else
        return a[max];

    }
}
int maxsearch(int a[],int max){
    if(max==0)
    return a[0];
    else{
        int t=maxsearch(a,max-1);
        if(a[max]<t)
          return t;
        else
        return a[max];

    }
}

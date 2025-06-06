#include <bits/stdc++.h>
using namespace std;

int bs(int arr[] , int low, int high, int x){
    int mid = (high + low) /2; 
    if(high>=low){
        if(x==arr[mid]){
            return arr[mid];
        }
        if(x>arr[mid]){
            return bs(arr,mid+1,high,x);
        }
        if(x<arr[mid]){
            return bs(arr, low, mid-1, x);
        }
        
    }
    return -1;
}

int main(){
    int arr[100];
    int n ;
    cout<<"enter n";
    cin>> n;
    //input
    
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int f;
    cin>>f;
    
    int r = bs(arr,0,n-1,f);
    if(r != -1){
        cout<<"element present"<<endl;
        
    }
    else
    cout<<"element not present"<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int ls(vector<int> & arr,int x){
    for(int i=0; i<arr.size();i++)
        if(arr[i] == x)
            return i;

    return -1; 
    
}

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    cout<<"enter value of x: "<<endl;
    int x;
    cin>>x;
    int result= ls(arr,x);
    if (result != -1)
        cout<<"found at "<<result;
    else
        cout<<"not found";
}
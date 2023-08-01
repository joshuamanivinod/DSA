#include <bits/stdc++.h>
using namespace std;

int main(){
    // input
    vector<int> arr = {6,3,8,5,2,0};
    int n=arr.size();

    // code
    for(int i=1;i<n;i++){//number of rounds
        for(int j=0;j<n-i;j++){//loop runs from 0 to n-2 as j+1 is already sorted
            if(arr[j]>arr[j+1]){//as j+1 is already sorted
                swap(arr[j],arr[j+1]);
            }
        }
    }

    // Output
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
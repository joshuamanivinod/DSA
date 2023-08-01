#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {13,46,24,52,20,9};
    int n =arr.size();
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        int min_index = i;
        for(int j=i;j<n;j++){
            if(arr[min_index]>arr[j]){
                min_index=j;
            }
        }
        swap(arr[min_index],arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
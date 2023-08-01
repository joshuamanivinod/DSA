#include <bits/stdc++.h>
using namespace std;

int Peak(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
            return mid;
        }else if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }else if(arr[mid]<arr[mid-1]){
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    int even[6]={1,4,6,9,7,2};
    int index = Peak(even,6);
    cout<<"the peak is: "<<even[index]<<" at index: "<<index;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int getPivot(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<end){
        int mid=start+(end-start)/2;
        if(arr[mid]>=arr[0]){
            // first line
            start=mid+1;
        }else if(arr[mid]<arr[0]){
            // second line
            end=mid;
        }
    }
    return start;
}

int BinarySearch(int arr[],int s,int e,int key){
    int start=s;
    int end=e;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]<key){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    int n=5;
    int arr[n]={8,9,2,3,5};
    int pivot = getPivot(arr,5);
    int k=5;
    int index = -1;
    if(k>=arr[pivot] && k<=arr[n-1]){
        index = BinarySearch(arr,pivot,n-1,k);
    }else{
        index = BinarySearch(arr,0,pivot-1,k);
    }
    cout<<index;
    return 0;
}

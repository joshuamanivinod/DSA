#include <bits/stdc++.h>
using namespace std;

bool Search(int *arr,int s,int e,int key){
    if(s>e){
        return false;
    }
    int mid = s+(e-s)/2;
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]>key){
        return Search(arr,s,mid-1,key);
    }else{
        return Search(arr,mid+1,e,key);
    }
}

int main(){
    int arr[5]={2,4,6,8,9};
    int size = 5;
    int key = 6;
    cout<<(Search(arr,0,size-1,key)?"YES":"NO");
}
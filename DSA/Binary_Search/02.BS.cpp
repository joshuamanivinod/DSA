#include <bits/stdc++.h>
using namespace std;

int startIndex(int arr[],int size,int key){
    int start = 0;
    int end=size-1;
    int ans= -1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return ans;
}
int endIndex(int arr[],int size,int key){
    int start = 0;
    int end=size-1;
    int ans= -1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return ans;
}



int main(){
    int num[6]={1,2,3,3,3,5};
    pair <int,int> p;
    p.first = startIndex(num,6,3);
    p.second = endIndex(num,6,3);
    cout<<p.first<<" "<<p.second;
    cout<<"Total number of recurrence: "<<(p.second-p.first+1)<<endl;
    return 0;
}
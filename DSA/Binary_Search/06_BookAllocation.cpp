#include <bits/stdc++.h>
using namespace std;
// Max no. of pages assigned to a student is minimum
// note that isPossible is bool
bool isPossible(vector<int>& arr, int n, int m,int mid){
    int studentCount = 1;
    int pageSum = 0;
    for(int i=0;i<n;i++){
        if(pageSum+arr[i]<=mid){
            pageSum+=arr[i];
        }else{
            studentCount++;
            if(studentCount>m || arr[i]>mid){
                return false;
            }
            pageSum=arr[i]; 
        }
    }
    return true;
}

int findPages(vector<int>& arr, int n, int m){
    int start=0;
    int end = 0;

    for(int i=0;i<n;i++){
        end += arr[i];
    }
    int ans=-1;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }else{
            start=mid+1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
    return -1;
}

int main(){
    int n=4;
    vector<int> arr={12,34,67,90};
    int m=2;
    int min_pages = findPages(arr,n,m);
    cout<<min_pages;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int SqRoot(int n){
    int start = 0;
    int end = n;
    int mid= start + (end-start)/2; //4
    int ans = -1;
    while(start<=end){
        int square = mid*mid;//4
        if(square == n){
            return mid;
        }else if(square > n){//9>8
            end = mid - 1;//2
        }else{
            ans=mid;//2
            start = mid + 1;//3
        }
        mid = start + (end-start)/2;//2
        int ans=mid;
    }
    return ans;
}

int main(){
    int n=6;
    int root_n = SqRoot(n);
    cout<<root_n;
}

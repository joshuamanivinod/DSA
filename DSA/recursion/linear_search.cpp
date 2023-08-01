#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n) {
    cout << "Size of array is " << n << endl;

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    } cout << endl;

}


bool isPresent(int *arr,int size,int key){
    print(arr,size);
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }else{
        return isPresent(arr+1,size-1,key);
    }
}

int main(){
    int arr[5]={2,4,6,8,9};
    int size = 5;
    int key = 6;
    cout<<(isPresent(arr,size,key)?"Yes":"No");
}
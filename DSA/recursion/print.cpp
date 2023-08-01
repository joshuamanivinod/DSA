#include <bits/stdc++.h>
using namespace std;

void print(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    print(n-1);
}

void printInc(int n){
    if(n==0){
        return;
    }
    printInc(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cin>>n;
    int i=1;
    printInc(n);
    cout<<endl;
    print(n);
}
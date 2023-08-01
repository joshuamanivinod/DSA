#include <bits/stdc++.h>
using namespace std;

int main(){
    int a=5;
    int& b=a; //dynamic
    a++;
    cout<<"b: "<<b;
}
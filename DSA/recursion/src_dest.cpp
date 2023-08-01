#include <bits/stdc++.h>
using namespace std;

void start(int s,int d){
    if(s==d){
        cout<<"finished"<<endl;
        return;
    }
    cout<<s<<" "<<d<<endl;
    start(s+1,d);
}

int main(){
    int s = 1;
    int d = 10;
    start(s,d);
}
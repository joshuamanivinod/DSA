#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int maxi = 0;
    int ans=0;
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            maxi = max(maxi,arr[i][j]);
            arr[i][j]=maxi-arr[i][j];
            ans=max(ans,arr[i][j]);
        }
    }
    cout<<"ans: "<<ans;

    return 0;
}

/*
1
2
13
0
15
26
7
48
99
86
11
12
92
89
0
99 */
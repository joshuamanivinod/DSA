#include <iostream> 
#include <bits/stdc++.h>
using namespace std;
int main() { 
    // Click HELP above to see examples of handling input/debug/output 
    // INPUT: std::cin >> n; 
    // DEBUG: std::cout << n << std::endl; 
    // OUTPUT: std::cout << output << std::endl; 

    // Write the code to solve the problem below, 
    // format the “result” as specified in the problem statement 
    // and finally, write the result to stdout 
    // IMPORTANT: Remove all debug statements for final submission 
    
    int t;
    cin>>t;
    while(t>0){
        stack <char> q;
        int m,n;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                char a;
                cin>>a;
                q.push(a);
            }
        }
        stack <char> b;
        while(!q.empty()){
            if(q.top()!=' '){
                b.push(q.top());
            }
            q.pop();
        }
        int k;
        cin>>k;
        stack <char> a;
        while(k>0){
            a=b;
            string s;
            cin>>s;
            int num = s.size();
            bool isTrue = true;
            for(int i=0;i<num;i++){
                while(s[i]!=a.top() && !a.empty()){
                    if(a.empty()){
                        isTrue = false;
                    }
                    a.pop();
                }
                cout<<a.top();
                if(a.empty()){
                    isTrue = false;
                }
                a.pop();
            }
            cout<<endl;
            // cout<<a.top()<<endl;
            if(isTrue){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
            k--;
        }
        
        
        t--;
    }
    return 0; 
} 



/*
1
5 5
steem
water
aaaaa
drink
depth
3
sttai
dem
aaaaddeetswa
*/

#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;
        while(s<e){
            swap(nums[s],nums[e]);
            s++;
            e--;
        }
    }

int main(){
    vector<int> nums ={1,2,3,4,5};
    reverse(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}
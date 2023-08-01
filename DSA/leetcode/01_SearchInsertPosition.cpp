#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
        int s=0;
        int n=nums.size();
        int e=n-1;
        int mid = s+(e-s)/2;
        if(s==e){
            if(nums[0]>=target){
                return 0;
            }else{
                return 1;
            }
        }
        while(s<e){
            mid = s+(e-s)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>target){
                if(target<nums[0]){
                    return 0;
                }
                e=mid-1;
                if(nums[mid-1]<target){
                    return mid;
                }
            }else{
                if(target>nums[n-1]){
                    return n;
                }
                s=mid+1;
            }
        }
        return -1;
    }

int main(){
    vector<int> nums={1,3};
    int target=2;
    int s=0;
    int n=nums.size();
    int e=n-1;
    int mid = s+(e-s)/2;
    if(s==e){
        if(nums[0]>=target){
            cout<<"0";
        }else{
            cout<<"1";
        }
    }
    while(s<=e){
        mid = s+(e-s)/2;
        if(nums[mid]==target){
            return mid;
        }else if(nums[mid]>target){
            if(target<nums[0]){
                cout<<"0";
            }
            e=mid-1;
            if(nums[mid-1]<target){
                cout<<mid;
            }
        }else{
            if(target>nums[n-1]){
                cout<<n;
            }
            s=mid+1;
        }
    }
    return -1;
}
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
#include <vector>

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int>solution;
            int size=nums.size();
            for(int i=0;i<size-1;i++){
                for(int j=0;j<size;j++){
                    if(nums[i]+nums[j]==target){
                        solution.push_back(i);
                        solution.push_back(j);
                        break;
                    }
                }
                
            }
            return solution;
            
        }
    };
int main(){
    Solution sol;
    int n,target;
    vector<int>arr;
    cout<<"Enter the number of elements:";
    cin>>n;

    for(int i=0;i<n;i++){
        int ele;
        cout<<"Enter the element "<<i+1<<":";
        cin>>ele;
        arr.push_back(ele);
    }
    cout<<"Enter the target element:";
    cin>>target;
    vector<int>result=sol.twoSum(arr,target);
    for(int i=0;i<2;i++){
        cout<<result[i]<<" ";
    }
}

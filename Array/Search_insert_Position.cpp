#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(){
    vector<int>arr={1,3,5,6};
    int target;
    bool found=false;
    cout<<"Enter the target:";
    cin>>target;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==target){
            cout<<i;
            found=true;
            break;
            
        }
    }
    if(found==false){
        arr.push_back(target);
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(arr[i]==target){
                cout<<i;
            }
        }
    }
}
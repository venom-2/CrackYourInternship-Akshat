#include<iostream>
#include<vector>
using namespace std;
vector<int> moveZeroes(vector<int> &nums){
    vector<int> ans;  //using extra space
    for(auto i:nums){
        if(i!=0){
            ans.push_back(i);
        }
    }
    for(auto i:nums){
        if(i==0){
            ans.push_back(0);
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {0,1,0,3,12};
    vector<int> result = moveZeroes(arr);
    for(auto i:result){
        cout<<i<<" ";
    }
    return 0;
}
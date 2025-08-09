#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    int balance=0;
    string name;
public:
    int search(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                return mid;
                //we are supposed to return index, hence use mid and not nums[mid]
            }
            else if(target<nums[mid]){
                end=mid-1;
            }
            else if(target>nums[mid]){
                start=mid+1;
            }
        }
        return -1; // indiates that target not found in array 
    }

    void display(vector <int>&nums){
        cout<<"array is: [ ";
        for(auto x: nums ){
            cout<<x<<" ";
        }
        cout<<" ]"<<endl;

    }

    //below method accesses the private variables 
    void update(){
        balance++;
        name="varad";
        cout<<"balance of: "<<name<<" is : "<<balance;
    }
};




int main(){
    Solution sol;

    vector<int> nums = {-10, -3, 0, 5, 9, 12, 18};
    int target = 9;

    sol.display(nums);

    // Call the function
    int index = sol.search(nums, target);

    // Output result
    if (index != -1)
        cout << "Target " << target << " found at index: " << index << endl;
    else
        cout << "Target " << target << " not found in the array." << endl;

    sort(nums.begin(),nums.end());
    sol.display(nums);

    sol.update();
    return 0;
}
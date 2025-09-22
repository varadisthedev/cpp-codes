//given a sorted array, count the number of occurrence of a target element. if the count is more than the number itself, return true and the count , 
//if not, return false and the difference of count and the number
//you must implement a BigO(log n ) solution
#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int calc_first_occurence(vector <int> &nums,int target){
        //binary search to calc the first most occurance 
        int R=nums.size()-1;
        int L=0;
        int mid=0;
        int ans=-1;

        while(L<=R){
            mid=L+(R-L)/2;
            if(nums[mid]==target){
                //target found at least once, but not necessarily have to be the first occurance;
                //move the search to right 
                ans=mid;
                R=mid-1;

            }
            else if(nums[mid]<target){ // move search to right 
                L=mid+1;

            }
            else if(nums[mid]>target){
                R=mid-1;
            }


        }
        return ans;
    }
    int calc_last_occurence(vector <int> &nums,int target){
        //binary search to calc the last most occurance 
        int R=nums.size()-1;
        int L=0;
        int mid=0;
        int ans=-1;

        while(L<=R){
            mid=L+(R-L)/2;
            if(nums[mid]==target){
            
                ans=mid;
                L=mid+1;

            }
            else if(nums[mid]<target){
                L=mid+1;

            }
            else if(nums[mid]>target){
                R=mid-1;
            }


        }
        return ans;
    }
    
    pair<bool,int> return_result(int target,vector<int> &nums){
       
        int first=calc_first_occurence(nums,target);
        int last= calc_last_occurence(nums,target);
        if(first!=-1&&last!=-1){
            int count=last-first+1;
            if(count>target){
            return {true,count};
            }
            else{
            return{false,target-count};

            }
        }
        else{
            return{false,-1};
        }
    }
        
};

int main(){
    Solution s;
    int target=5;
    vector<int> v={1,3,2,4,5,5,5,55,5,5,5,5,13}; 

    sort(v.begin(), v.end());  
    auto result=s.return_result(target,v);
    cout << boolalpha << result.first << " " << result.second;
    return 0;
    
}
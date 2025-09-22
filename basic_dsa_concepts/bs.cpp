
#include <bits/stdc++.h>
using namespace std;

int main() {
   vector<int> v;

   //implementing bs beginner level 
   int start=0;
   int end=nums.size()-1;

   while (start<=end){ //using <= if the search element is in the last 
    int  mid=start+(end-start)/2; // for smaller arrays
    
    if(target<nums[mid]){

        end=mid-1;
    }
    else if(target>nums[mid]){
        start=mid+1;
    }
    else if(nums[mid]==target){
        return mid;
    }
    


   }
   return -1;
    //-1 means falure 


    return 0;
}
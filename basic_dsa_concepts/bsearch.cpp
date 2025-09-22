#include<bits/stdc++.h> 
using namespace std;


int bsearch(vector<int>&v, int high, int low ,int mid, int target){ // taking pointer to arr var and not arr so that we dont get the copy but the actual vector

    mid=(high-low)/2;
    if(target==mid){
        return mid;
    }
    else if(target<mid){
        high=mid;
        bsearch(v,high,0,mid,target);
        //recall fucnction
    }
    else if(target>mid){
        low=mid;
        bsearch(v,high,low,mid,target);
        //recall fucnction
    }
    return 1;


}
int main(){
    int mid,high,low=0;
    vector<int> v={1,2,3,4,5,6,7};
    cout<<"index was:"<<bsearch(v,v.size(),0,mid,4);

}
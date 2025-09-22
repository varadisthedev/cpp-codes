#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


int main(){

    unordered_map<int, int> frequency ;

    vector<int> v={1,3,4,2,2,3,2,1,2,4,5,3,5,2};
    //coutn frequency of each eelemnt 
    for(auto x: v){
        frequency[x]++;
    }

    for( auto &pair: frequency){
        cout<<"element: "  <<pair.first<<" occured "<<pair.second<< "times "<<endl ;
        
    }


    return 0;
}
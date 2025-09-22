// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
   map<int,string>mp;
   mp[1]="varad";
   mp[5]="dev";
   for(auto it: mp){
       cout<<it.first<<" "<<it.second<<endl;
   }
   mp.insert({4,"abhas"});
  cout<<mp[4];
  

    return 0;
}
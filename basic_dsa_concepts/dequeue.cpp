#include<bits/stdc++.h>
using namespace std;


//generic display function for deque
void display(deque<int> d){
    for( auto p: d){
        cout<<p<<" ";
    }
    cout<<endl;
}
int main(){
    deque<int>d={1,3,2,12,32,12,32,21};
    display(d);

    d.push_back(34);
    d.push_front(12);
    display(d);


    //insertion in deque requires iterator 
    auto it= d.begin()+2;
    d.insert(it,11);
    display(d);


    cout<<"accessign elements of double ended queue "<<endl;
    cout<<"first element is"<<d.front()<<" last element is: "<<d.back()<<endl;

    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void test(){
    static auto x=0;
    //if i had taken a non static var then after each call, the value 
    //woulve been resetted
    x++;
    cout<<x<<" "<<endl;
}


class Varad{
public:
static void hello (){
    cout<<"hello from a static method, i didnt use an obj to call this one ";
}
};


int main(){
    for(int i=0;i<5;i++){
        test();
    }

    Varad::hello();

    
    return 0;
}
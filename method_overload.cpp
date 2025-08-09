#include<bits/stdc++.h>
using namespace std;



class method{
public:
    void display(int x){
        cout<< x<<endl;
    }

    void display(double x){
        cout<< x<<endl;
    }

    void display(string x){
        cout<< x<<endl;
    }

};
int main(){
    method obj1; //to create the obj of class "method"
    obj1.display(1);
    obj1.display(4.3);
    obj1.display("hello ");
    return 0;
}
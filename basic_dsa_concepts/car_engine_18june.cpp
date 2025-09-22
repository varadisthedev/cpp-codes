#include<bits/stdc++.h>
using namespace std;
int main(){
    // code goes here
    int choice;
    cout<<" welcome to grand i10 neyos sir."<<endl;
    cout<<"press [1] to step on clutch \npress[2] to step on accelator\n";
    cout<<" enter choice: ";
    cin>>choice;
    switch( choice ){
        case 1:
        cout<<"clutch pressed. now what?\n";
        cout<<"press[1] to turn the key";
        int condi;
        cin>>condi;
        if ( condi == 1){
            cout<<"engine started!";
        }
        else{
            cout<<"engine is not started yet!";
        }
        
        
        break;

        case 2:
        break;

        case 3:
        break;

        default:
        break;
    }
    return 0;
}
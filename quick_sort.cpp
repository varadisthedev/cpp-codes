#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=10;
    int arr[n];

    for( int i=0 ; i <11; i++){
        arr[i]=i;
    }
    cout<< "array before sort: ";

    for( auto x: arr){
        cout<<x<<" ";
    }
    return 0;
}
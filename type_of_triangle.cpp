#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter 1st side: ";
    cin>>a;
    cout<<"enter 2nd side: ";
    cin>>b;
    cout<<"enter 3rd side: ";
    cin>>c;
    if(a==b && b==c){
        cout<<"it is an equilateral triangle";
    }
    else if(a==b || b==c || c==a){
        cout<<"it is an isosceles triangle";

    }
    else{
        cout<<"it is a scalane triangle";

    }
}
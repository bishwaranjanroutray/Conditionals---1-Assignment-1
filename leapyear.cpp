#include<iostream>
using namespace std;

int main(){
    cout<<"enter the year: ";
    int y;
    cin>>y;
    if(y%4==0){
        cout<<"the entered year is leap year";
    }
    else{
        cout<<"the entered year is not leap year";

    }
}
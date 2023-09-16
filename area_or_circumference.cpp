// Given the radius of the circle, predict whether numerically the area of this circle is larger than the circumference or not.

#include<iostream>
using namespace std;

int main(){
    int r;
    cout<<"enter the radius: ";
    cin>>r;
    float circumference = 2*3.14*r;
    float area = 3.14*r*r;
    if(area>circumference){
        cout<<"area is greater than circumference";
    }
    else{
        cout<<"circumference is greater than area";

    }

}
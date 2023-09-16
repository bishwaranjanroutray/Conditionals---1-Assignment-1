// Given the radius of the circle, predict whether numerically the area of this circle is larger than the circumference or not.

#include<iostream>
using namespace std;

int main(){
    int l,b;
    cout<<"enter the length: ";
    cin>>l;
    cout<<"enter the breadth: ";
    cin>>b;
    float perimeter = 2*(l+b);
    float area = l*b;
    if(area>perimeter){
        cout<<"area is greater than perimeter";
    }
    else{
        cout<<"perimeter is greater than area";

    }

}
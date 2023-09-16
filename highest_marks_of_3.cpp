#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter marks of A: ";
    cin>>a;
    cout<<"enter marks of B: ";
    cin>>b;
    cout<<"enter marks of C: ";
    cin>>c;
    if(a<=b && a<=c){
        cout<<"A has scored least marks";        
    }
    else if(b<=a && b<=c){
        cout<<"B has scored least marks";
    }
    else{ 
        cout<<"C has scored least marks";
        
    }
}

#include<iostream>
using namespace std;
bool iseven(){
    int a;
    cout<<"enter number : " ;
    cin>>a;
    if(a&1){
        return 0;
    }
    return 1;
}
int main(){
   if(iseven()){
    cout<<"number is even"<<endl;
   }
    else{
    cout<<"number is odd"<<endl; 
    }
   
}
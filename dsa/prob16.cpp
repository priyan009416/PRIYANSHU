#include<iostream>
using namespace std; 
int main(){
    int n ;
    cout<<"enter anhy number : ";
    cin>>n;
    for(int i=2; i<=n ; i++ ){
         if(n%i == 0){
            cout<<"this number is not prime number "<<endl;
            break;
         }

    }
}
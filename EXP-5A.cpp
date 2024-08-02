//KANWALJEET SINGH
//ENTC B2
//EXP 5A
//23070123124
#include<iostream>
using namespace std;

int main() {
    int  n1;
    cout<<"Enter a positive number: ";   //Output - Enter a positive number: 20
    cin>>n1;
    if(n1==0) {
        cout<<n1<<" is zero."<<endl;
    }
    else if(n1%2!=0){
        cout<<n1<<" is odd."<<endl;
    }
    else {
        cout<<n1<<" is even."<<endl;        //98 is even.
    }
}
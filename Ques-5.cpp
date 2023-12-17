// Sum of Even Digits 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int sum=0;
    int lastdigit=0;
    while(n>0){
        lastdigit=n%10;
        if(lastdigit%2==0) sum += lastdigit;
        n /= 10;
    }cout<<sum;
}
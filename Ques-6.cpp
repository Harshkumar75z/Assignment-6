// WAP to print the sum of a given number and its reverse.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int a=n; // Because the value of n change in loop
    int lastdigit=0;
    int rev=0;
    int sum=0;
    while(n>0){
        rev=rev*10;
        lastdigit=n%10;
        rev=rev+lastdigit;
        n=n/10;
    }
    sum=rev+a;
    cout<<sum;
}
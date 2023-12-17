// Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of each digit of the number is equal to //the number itself, then the number is called an Armstrong number.
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=500;i++){
        int x=i;
        int cubeSum=0;
        while(x>0){
            int ld =x%10;
            cubeSum += (ld*ld*ld);
            x /= 10;
        }
        if(i==cubeSum) cout<<cubeSum<<endl;
    }
}
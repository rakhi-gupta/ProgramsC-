#include<iostream>

using namespace std;

int power(int a, int b){    
    if(b == 0){return 1;}
    return  a * power(a, b-1);
}

int powerBetter(int a, int b){
    int halfAnswer = 1,  retval = 1;
   
    halfAnswer =  power(a, b/2);
   
    if(b%2 == 0)
        retval = halfAnswer*halfAnswer;
    else 
        retval = halfAnswer*halfAnswer*a;

     return   retval;
}

int main(){
    int n;
    int result = powerBetter(5, 3);
    cout << "result is: " << result; 
    cin >> n;
    return 0;
    
}
#include<iostream>

using namespace std;

int factorial(int n){

    if(n == 1 || n == 0){
        return 1;
    }

    return n * factorial(n-1);

}




int main(){
    int n;
    int result = factorial(5);
    cout << "factorial is: " << result; 
    cin >> n;
    return 0;
    
}
i#include <iostream>

#include <vector>
using namespace std;


int FindInArray(vector<int>& arr, int idx, int data){
   int myMin;

    if(idx == arr.size()-1){
        return false;
    }
    if(arr[idx] == data){
        return idx;
    }
    else{
     FindInArray(arr, idx+1), data);
    }


}

int main(){
    int h;
    vector<int> arr = {1,2,3,4,0,9,6,5};
    int result = FindInArray(arr, 0, 4);
    cout<<result;
    cin >> h;
    return 0;
}



#include <iostream>

#include <vector>
using namespace std;

int coinChangePermutation_INF(vector<int>& arr, int target, string ans){
    int count = 0;
    if(target == 0){
        cout<<ans << endl;
    }
    
    for(int elem : arr){
        if(target-elem >=0){
            count += coinChangePermutation_INF(arr, target-elem, ans + to_string(elem));
        }
    }
}



int coinChangePermutation(vector<int>& arr,  int target, string ans){
    int count = 0;
    if(target == 0){
        cout<< ans << endl;
        return 1;
    }
    
    for(int i = 0; i< arr.size(); i++){
        int temp = arr[i];
        if(arr[i] > 0 && target - arr[i] >=0){
            arr[i] = - arr[i] ;
            count += coinChangePermutation(arr,  target-temp, ans + to_string(arr[i]));
            arr[i] = -arr[i] ;
        }
    }

    return count;
}

int coinChangeCombination_INF(vector<int>& arr, int idx,  int target, string ans){
    int count = 0;
    if(target == 0){
        cout<< ans << endl;
    }
    
    for(int i = idx; i< arr.size(); i++){
        if(target - arr[i] >=0){
            count += coinChangeCombination_INF(arr, i,  target-arr[i], ans + to_string(arr[i]));
        }
    }

    return count;
}


int coinChangeCombination(vector<int>& arr, int idx,  int target, string ans){
    int count = 0;
    if(target == 0){
        cout<< ans << endl;
    }
    
    for(int i = idx; i< arr.size(); i++){
        if(target - arr[i] >=0){
            count += coinChangeCombination(arr, i+1,  target-arr[i], ans + to_string(arr[i]));
        }
    }

    return count;
}




int main(){
 int h;
 vector<int> arr = {2,3,5,7};
  int numberOfCombinations = coinChangePermutation(arr, 10, "");
    cout<< numberOfCombinations;
    cin>>h;
    return 0;
}
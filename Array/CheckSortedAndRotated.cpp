#include<iostream>
#include<vector>
using namespace std;

bool CheckSR(vector<int> arr){
    int n=arr.size(),count=0;

    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            count++;
        }
    }
    if(arr[n-1]>arr[0]){
        count++;
    }

    if(count<=1){
        return true;
    }

    return false;
}

int main(){

    vector<int> a;


    a.push_back(5);
    a.push_back(7);
    a.push_back(11);
    a.push_back(1);
    a.push_back(5);


    cout<<CheckSR(a);






}


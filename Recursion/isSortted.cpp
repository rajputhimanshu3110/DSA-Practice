#include<iostream>
using namespace std;


bool isSorted(int* arr, int n){

    if(n==0||n==1)
        return true;

    if(0[arr]>1[arr])
        return false;
    else
        return isSorted(arr+1,n-1);




}

int main(){
    int n;
    cout<<"ENter Size of array:";
    cin>>n;

    int* arr = new int[n];

    cout<<"Enter values of array :"<<endl;

    for(int i=0;i<n;i++){
        cin>>i[arr];
    }

    cout<<"Array is Sorted : "<<isSorted(arr,n);


    return 0;


}

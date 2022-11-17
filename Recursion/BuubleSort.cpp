#include<iostream>
using namespace std;


void bubbleSort(int* arr, int n){
    if(n>=0){
    for(int i=0;i<n-1;i++){
        if(i[arr]>arr[i+1]){
            swap(i[arr],arr[i+1]);
        }
    }
    bubbleSort(arr,n-1);
    }

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

    bubbleSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<i[arr]<<" ";
    }



    return 0;

}

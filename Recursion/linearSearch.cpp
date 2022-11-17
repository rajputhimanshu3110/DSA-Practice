#include<iostream>
using namespace std;


int linearSearch(int arr[],int key, int n){

    if(n==0)
        return -1;
    if(arr[n-1]==key)
        return n;
    else
        return linearSearch(arr,key,n-1);

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

    int key;
    cout<<"ENter key of array:";
    cin>>key;

    cout<<"Position : "<<linearSearch(arr,key,n);


    return 0;




}

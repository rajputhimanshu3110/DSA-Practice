//Peak Index in Mountain array in binary search

#include<iostream>
using namespace std;


int PM(int arr[],int n){
    int s=0,e=n-1,mid;

    while(s<=e){
        mid=(s+e)/2;
        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else if(arr[mid]>arr[mid+1]){
            e=mid-1;
        }
    }
    return -1;

}

int main(){
    int arr[4]={1,2,5,4};
    cout<<PM(arr,4);

}

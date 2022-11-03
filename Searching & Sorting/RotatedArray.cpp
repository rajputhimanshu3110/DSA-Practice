 //Find  element in rotated array

#include<iostream>
using namespace std;

int BS(int arr[],int s,int e, int k){
    while(s<e){
        int mid=(s+e)/2;
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]>k){
            e=mid-1;
        }else{
            s=mid+1;
        }
    }

}


int Pivot(int arr[],int n){
    int s=0,e=n-1,mid;

    while(s<e){
        mid=(s+e)/2;
        if(arr[0]<=arr[mid]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    }
    return s;

}

int main(){
    int key=2,n=5;
    int arr[n]={5,7,1,2,4};
    int p = Pivot(arr,n);

    if(arr[p]<=key<=arr[n-1]){
        cout<<BS(arr,p,n-1,key);
    }else{
        cout<<BS(arr,0,p-1,key);
    }

}


//Find Pivot element using sorted array

#include<iostream>
using namespace std;


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
    int arr[4]={2,3,5,1};
    cout<<Pivot(arr,4);

}

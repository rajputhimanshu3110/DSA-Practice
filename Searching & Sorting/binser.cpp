#include <iostream>
using namespace std;

int fa(int arr[],int n, int k){
        int s=0,e=n-1,sol=-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(arr[mid]==k){
                sol=mid;
                e=mid-1;
            }
            else if(arr[mid]<k){
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
        return sol;
}
int la(int arr[],int n, int k){
        int s=0,e=n-1,sol=-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(arr[mid]==k){
                sol=mid;
                s=mid+1;
            }
            else if(arr[mid]<k){
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
        return sol;
}

int main(){
    int n,key;
    cout<<"Enter the size of array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the Key to find occurence ";
    cin>>key;

    cout<<"First Occurence :"<<fa(arr,n,key)<<", Last Occurence: "<<la(arr,n,key);
    cout<<" Total Occurence : "<<la(arr,n,key)-fa(arr,n,key)+1;


}

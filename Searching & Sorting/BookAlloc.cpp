//Book Allocation Problem

#include<iostream>
using namespace std;

bool IsPossibleSolution(int arr[],int n,int m,int mid){
    int pageSum=0;
    int student = 1;

    for(int i=0; i<n; i++  ) {
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }else{
            student++;
            if(student > m || arr[i] > mid){
                return false;
            }else{
                pageSum=arr[i];
            }
        }
    }
    return true;
}

int allocateBooks(int arr[], int n, int m ){
        int s=0;
        int sum=0;

        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        int e=sum;
        int ans=-1;

        while(s<=e){
            int mid=(s+e)/2;
            if(IsPossibleSolution(arr,n,m,mid)){
                ans=mid;
                e=mid-1;
            }else{

                s = mid + 1;
            }


        }
    return ans;



}


int main(){
    int n = 5;

    int arr[n] = {40,20,30,10,50};
    cout<<allocateBooks(arr,n,3);


 }

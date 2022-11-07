#include <iostream>
using namespace std;

int main(){
    int n=4,i,j;
    int arr[n] = {5,4,3,8};

    for(i=1;i<n-1;i++){
        int val=arr[i];
        j=i-1;
        while(0<=j){
            if(arr[i]<arr[j]){
                arr[j+1]=arr[j];

            }
            j--;

        }
        arr[j+1]=val;


    }
    for(int k=0;k<n;k++){
        cout<<arr[k]<<endl;
    }

return 0;
}

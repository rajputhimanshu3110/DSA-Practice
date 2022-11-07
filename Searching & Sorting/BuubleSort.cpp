#include <iostream>
using namespace std;

int main(){
    int n=4,i,j;
    int arr[n] = {5,4,3,8};

    for(i=0;i<n-1;i++){
        for(j=0;j<n;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

    }
    for(int k=0;k<n;k++){
        cout<<arr[k]<<endl;
    }

return 0;
}

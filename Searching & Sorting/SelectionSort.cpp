#include <iostream>
using namespace std;

int main(){
    int n=4,i,j;
    int arr[n] = {5,4,3,8};

    for(i=0;i<n-1;i++){
            int min = i;
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                min=j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;


    }
    for(int k=0;k<n;k++){
        cout<<arr[k]<<endl;
    }

return 0;
}

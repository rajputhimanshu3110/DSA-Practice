#include<iostream>
using namespace std;


int main(){

   int r,c;
   cout<<"Enter Rows: ";
   cin>>r;
   cout<<"Enter Columns: ";
   cin>>c;
int arr[r][c];
   cout<<"Enter Elements roe wise :"<<endl;

   for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
   }

   int sum[r];

   for(int i=0;i<r;i++){
        int s=0;
        for(int j=0;j<c;j++){
            s+= arr[i][j];
        }
    sum[i] = s;
   }


   for(int k=0;k<r;k++){
    cout<<sum[k];
   }


   return 0;



}

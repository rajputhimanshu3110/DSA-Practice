#include<iostream>
using namespace std;




int main(){

    int r,c,key;
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

   cout<<"Enter Key to search: ";
   cin>>key;

   int s=r,e=(r*c)-1;

   while(s<=e){
    int mid=(s+e)/2;

    int element = arr[mid/c][mid%c];
    if(key==element){
        cout<<"Element Found at "<<mid/c<<","<<mid%c;
        return 0;
    }

    if(element<key){
        s=mid+1;
    }else{
        e=mid-1;
    }
   }
        cout<<"Element Not found";

        return 0;







}



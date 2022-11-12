
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

   int row=0,col=c-1;

   while(row<r && col>=0){

    int element = arr[row][col];
    if(key==element){
        cout<<"Element Found at "<<row<<","<<col;
        return 0;
    }

    if(element<key){
        row++;
    }else{
        col--;
    }
   }
        cout<<"Element Not found";

        return 0;







}



#include<iostream>
using namespace std;

int fibbo(int n){

    if (n<0){
        return 0;
    }
    if (n==1){
        return 1;
    }


    return fibbo(n-1)+fibbo(n-2);

}


int main(){

    int n;
    cin>>n;

    int ans= fibbo(n);

    cout<<"the fibbo of "<<n<<" is "<<ans;



    return 0;



}
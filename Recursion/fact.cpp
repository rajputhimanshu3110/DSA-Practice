
#include <iostream>
using namespace std;


int fact(int n){

    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}


int main(){
    cout<<"Enter to get fact:";
    int n;
    cin>>n;

    cout<<"The fact of "<<n<<" is:"<<fact(n);

    return 0;

}

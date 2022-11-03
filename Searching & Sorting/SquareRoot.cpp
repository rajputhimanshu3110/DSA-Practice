 //Find  square root of a eleement
#include<iostream>
using namespace std;

int SquareRoot(int k){
    int s=0,e=k,ans;
    while(s<=e){
        int mid=(s+e)/2;

        long long int sq = mid*mid;
        if(sq==k){
            return mid;
        }
        else if(sq>k){
            e=mid-1;
        }else{
            ans=mid;
            s=mid+1;
        }
    }
    return ans;

}

int main(){
    cout<<SquareRoot(8);


}


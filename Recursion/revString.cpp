#include<iostream>
#include<string>
using namespace std;

string revString(string st, int s, int e){


    if(s>e){
        return st;
    }

    swap(st[e],st[s]);
    return revString(st,s+1,e-1);

}


int main(){
    string s;
    cin>>s;
    int n=s.size();



    cout<<"The Reverse of string is "<<revString(s,0,n-1)<<endl;



    return 0;


}

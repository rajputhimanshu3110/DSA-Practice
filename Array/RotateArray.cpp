#include<iostream>
#include<vector>
using namespace std;

vector<int> Rotate(vector<int> a,int r){
    vector<int> b;
    int n=a.size(),i=0;

            for(int j=0;j<n;j++){
                int p=(n-r+j)%n;
                b.push_back(a[p]);
            }

    return b;
}

void print_arr(vector<int> a){

    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int> a;

    a.push_back(1);
    a.push_back(2);
    a.push_back(5);
    a.push_back(7);
    a.push_back(11);

    print_arr(a);

    vector<int> m= Rotate(a,2);

    print_arr(m);




}


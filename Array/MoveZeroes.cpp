#include<iostream>
#include<vector>
using namespace std;

vector<int> MoveZeroes(vector<int> a){
    int n=a.size(),i=0;

            for(int j=0;j<n;j++){
                if(a[j]!=0){
                    swap(a[i],a[j]);
                    i++;
                }
            }

    return a;
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
    a.push_back(0);
    a.push_back(0);
    a.push_back(5);

    print_arr(a);

    vector<int> m= MoveZeroes(a);

    print_arr(m);




}

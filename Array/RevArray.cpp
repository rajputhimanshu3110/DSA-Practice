#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> a){
    int s=0, e= a.size()-1;
    while(s<=e){
        swap(a[s],a[e]);
        s++;
        e--;
    }
    return a;
}

vector<int> reverseIndex(vector<int> a, int s){
    int e= a.size()-1;
    while(s<=e){
        swap(a[s],a[e]);
        s++;
        e--;
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

    a.push_back(4);
    a.push_back(6);
    a.push_back(3);
    a.push_back(8);
    a.push_back(11);

    vector<int> rev = reverseIndex(a,2);

    print_arr(rev);

}

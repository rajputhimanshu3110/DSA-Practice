#include<iostream>
#include<vector>
using namespace std;

vector<int> MergeSorted(vector<int> a, vector<int> b){
    vector<int> c;
    int n=a.size(), m=b.size();
    int i=0,j=0,k=0;

    while(i<n||j<m){
        if(i<n&&j<m){
            if(a[i]<b[j]){
                c.push_back(a[i]);
                i++;
            }else{
                c.push_back(b[j]);
                j++;
            }
        }else if(i<n){
            c.push_back(a[i]);
                i++;

        }else if(j<m){
            c.push_back(b[j]);
                j++;

        }
        k++;
    }

    return c;
}

void print_arr(vector<int> a){

    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int> a;
    vector<int> b;

    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);

    b.push_back(6);
    b.push_back(7);
    b.push_back(8);
    b.push_back(9);
    b.push_back(10);

    vector<int> m= MergeSorted(a,b);

    print_arr(m);




}

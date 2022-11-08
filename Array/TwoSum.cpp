#include<iostream>
#include<vector>
using namespace std;

void print_arr(vector<int> a){

    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

vector<int> reverse(vector<int> a){
    int s=0, e= a.size()-1;
    while(s<=e){
        swap(a[s],a[e]);
        s++;
        e--;
    }
    return a;
}

int main(){
    int m=5,n=3;
    int a[m] = {1,2,3,4,5};
    int b[n]=   {1,2,3};

    vector<int> sum;

    int i=m-1,j=n-1,carry=0;

    while(i>=0&&j>=0){
            int s= a[i]+b[j]+carry;
            carry = s/10;
            s=s%10;
            sum.push_back(s);
            i--;j--;

    }

    while(i>=0){
            int s = a[i]+carry;
            carry = s/10;
            s=s%10;
            sum.push_back(s);
            i--;

    }

    while(j>=0){
            int s= b[j]+carry;
            carry = s/10;
            s=s%10;
            sum.push_back(s);
            j--;

    }

    while(carry !=0){
            int s= carry;
            carry = s/10;
            s=s%10;
            sum.push_back(s);

    }

    print_arr(reverse(sum));





    return 0;
}



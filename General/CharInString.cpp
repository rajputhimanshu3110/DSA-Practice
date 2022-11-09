#include<iostream>
#include<string>
using namespace std;


int main(){
    string s;

    getline(cin,s);

    int arr[26]={0},i=0;

    while(s[i]!='\0'){

        if(s[i]>='a'&&s[i]<='z'){
            int n = s[i]-'a';
            arr[n]++;
        }
        else if(s[i]>='A'&&s[i]<='Z'){
            int n = s[i]-'A';
            arr[n]++;
        }
        i++;
    }
    int maxi=-1,ans;
    for(int j=0;j<26;j++){
        if(maxi<arr[j]){
            ans=j;
            maxi=arr[j];
        }
    }

    char finalAns = ans+ 'a';

    cout<<finalAns;



    return 0;

}

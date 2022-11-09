#include<iostream>
using namespace std;

void Reverse(char *s,int st,int e){
    int l=(st+e)/2;
    int j=0;
    for(int i=st;i<=l;i++){
        swap(s[i],s[e-j]);
        j++;
    }
}

int main(){

    char s[250] = {'t','h','e',' ','m','a','n',' ', ' ', ' ', 'b' ,'r','o'};
    int st=0,e;
    for(int i=0;s[i]!='\0';i++){
        if(s[i+1]==' '||s[i+1]=='\0'){
            e=i;
            Reverse(s,st,e);
            st=i+2;

        }
    }

    cout<<s;
    return 0;

}

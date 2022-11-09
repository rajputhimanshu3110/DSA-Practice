#include<iostream>
using namespace std;


int getSize(char text[]){
    int countT=0;
    for(int i=0;text[i] != '\0';i++){
        countT++;
    }

    return countT;

}

int main(){

    char text[20];

    cin>>text;

    int n= getSize(text);
    bool IsPalindrome;
    for(int i=0;i<n;i++){
        if(text[i]==text[n-i-1]){
            IsPalindrome = true;
        }else{
            IsPalindrome = false;
        }
    }

        cout<<"Palindrome :"<<IsPalindrome;

    return 0;




}

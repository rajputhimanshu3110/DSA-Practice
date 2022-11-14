#include<iostream>
using namespace std;

int main(){
    int a=5,b=6;
    int *ap = &a;
    int *bp=&b;

    cout<<"value of a "<<*ap<<endl;
    cout<<"value of b "<<*bp<<endl;

    cout<<"address of a "<<ap<<endl;
    cout<<"address of b "<<bp<<endl;

    cout<<"increment using pointers"<<endl;

    (*ap)++;(*bp)=(*bp)+10;

    cout<<"value of a "<<*ap<<endl;
    cout<<"value of b "<<*bp<<endl;


    return 0;


}

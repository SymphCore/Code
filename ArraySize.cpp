#include<iostream>
using namespace std;
int main(){
    int a[10] = {2,3,4,5};
    int *ptr=a;
    int size = sizeof(ptr)/sizeof(ptr[0]);
    for(int a=0;a<=3;a++){
        cout << ptr[a] << endl;
    }
    cout <<endl<< size << endl << endl;
    cout << sizeof(ptr) << endl << sizeof(ptr[0])<<endl;
}
#include<iostream>
using namespace std;
int main(){
    char a[100][100];
    int n;
    cin >> n;
    for(int b=1;b<=n;b++){
        cin >> a[b];
    }
    for(int b=1;b<=n;b++){
        cout << a[b] << endl;
    }
}
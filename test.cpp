#include<iostream>
#include <fstream>
using namespace std;
char** BlocksIO(string type);
int main(){
    string type;
    cin >> type;
    char** j;
    j=BlocksIO(type);
    cout << j[0];   
}
char** BlocksIO(string type){
  ifstream myfile;
  //if(a==1){
   string in=type+"/block";
   // const char* ina = in;
    myfile.open(in.c_str());
    int n;
    myfile >> n;
    char **blocks;
    for(int a=1;a<=n;a++){
      myfile >> blocks[a];
    }
    myfile.close();
    return blocks;
}
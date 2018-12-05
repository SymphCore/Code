#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream myfile;
    myfile.open("headers");
    myfile << "#include <iostream>" << endl;
    myfile << "using namespace std;" << endl;
    myfile.close;
    ofstream myfile;
    myfile.open("struct");
    // NOB is number of blocks
  //  for(int a=1;a)
    for(int i=1;i<=NOB;i++){
        //bl here means block name
        myfile << "struct " << bl[i]<<"i" <<"{";//May Require I for input and O for output
        myfile << endl;
        //NOI here is number of INPUTS of a PIN
        for(int ii=1;ii<=N;ii++){
            myfile << ati[ii] <<" ";//ati here is Type of memory storage
            myfile << aini[ii] <<";";//ain stands for the name of pin
            myfile << endl;
        }
        myfile << "};";
        myfile << endl;
    
    }
    for(int i=1;i<=NOB;i++){
        //bl here means block name
        myfile << "struct " << bl[i]<<"o" <<"{";//May Require I for input and O for output
        myfile << endl;
        //NOI here is number of INPUTS of a PIN
        for(int ii=1;ii<=N;ii++){
            myfile << ato[ii] <<" ";//ati here is Type of memory storage
            myfile << aino[ii] <<";";//ain stands for the name of pin
            myfile << endl;
        }
        myfile << "};";
        myfile << endl;
    
    }
    myfile.close;
     /* May Require
        same code 
        here but for
       Output Pins */
    ofstream myfile;
    myfile.open("body");
    myfile << "int main(){" << endl;
    for(int i=1;i<=NOB;i++){
        myfile << "if(filed(" << bl[i] << ")){" << endl;
        for(int a=blockIndex(bl[i]);a<=NOP(bl[i])+blockIndex(bl[i]);a++){ // Block Index is from  char** joinBlockandPinANDblockIndex(char** bl, int n) NOP is number of output pin
            myfile >> aali[mathed[a]] >> "=" >> aalo[a] >> endl; // aali stands for input and aalo stands for output pins;
        }
        myfile >> "}" >> endl; 
    }
    myfile >> "gsmsync();" >> endl >> "}" >> endl;
    myfile.close;
    ofstream myfile;
    myfile.open("gsmsync");
    for(int a=1;a<=NOB;a++){
        myfile >> "if(" >> endl;
        for(int b=blockIndex(bl[a]);b<=blockIndex(bl[a]+NOP(bl[i]));b++){
            myfile >> aali[b] >> "!=" >> "'\O'";
            if(b!=blockIndex(bl[a]+NOP(bl[i])){
                myfile >> "&&";
            } 
        }
        myfile >> "){" >> endl;4
        myfile >> "setFiled(">>bl[a]>>");">>endl;
    }
    myfile.close;
    //This need to be tested //////////////////////////////////////////////////////////////
      myfile.open("functions")
        myfile >> "bool filed(char *fileName){
            ifstream myfile;
            myfile.open(filename);
            bool ret=0;
            myfile << ret;
            return ret;
        }

        void setFiled(char *fileName){
            ofstream myfile;
            myfile.open(filename);
            bool ret=1;
        } ">> endl;
        myfile.close;
}
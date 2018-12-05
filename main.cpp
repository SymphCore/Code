#include<iostream>
#include<blocks.h>
using namespace std;
int main(){
    string type;
    cin >> type;
    cin >> input;
    cin >> outputReq;
    
    for(int a=1;a<=population;a++){
    char bReq[a][]=BlocksIO(type);
    int BIN[a] = BlocksIOn(type);

    char blockUsed[a][]=RandomBlockGenerator(bReq,BIN);
    int RBGn[a]=g[0]; /// THIS MUST ME CHANGED*******************************

    int UQ[a][]=getUniqueCode(blockUsed[a],RBGn[a]);

    char bl[a][][] = joinBlockandOut(blockUsed[a], UQ[a], RBGn[a]);

    char ani[a][] = getAllPins(bl[a], RBGn[a], 'i');
    char ano[a][] = getAllPins(bl[a], RBGn[a], 'o');
    int p1[a]=NumberOfallPins(bl[a],RBGn,'i');
    int p2[a]=NumberOfallPins(bl[a],RBGn,'o');
    int matched[a][] = Connect(ani[a],p1[a],ano[a],p2[a]);

    char ani[a][]=GetAllPinsWOnumber(bl[a],RBGn[a],'i');
    char ano[a][]=GetAllPinsWOnumber(bl[a],RBGn[a],'o');
    
    char ati[a]=atiANDaanl(bl[a], RBGn[a],'i');
    char ati[a]=atiANDaanl(bl[a], RBGn[a],'o');

    char anni[a]=aan(p1[a]);
    char anno[a]=aan(p2[a]);

    int aanli[a]=atiANDaanl(bl[a],RBGn[a],'i');
    int aanlo[a]=atiANDaanl(bl[a],RBGn[a],'o');

    char aai[a]=joinBlockandPinANDblockIndex(bl[a],RGBn[a],'i');
    char aao[a]=joinBlockandPinANDblockIndex(bl[a],RBGn[a],'o');

    
    GenerateCode();
    int output = run(generateCode);
    int arr[a]=fitnessfunction(outputReq,output);
    }
    /// POPULATION MUST BE SAVED ANYWHERE
    sort(arr,arr+population);
    int index=sort(Arr);
    for(int a=1;a<=population;a+=2){
        mutate(arr[index[a]],arr[index[b]]);

    }
    run(mutaed);
    arr[a]=code1;
}
// Blocks IO is reading pins
// RandomBlockGenerator generates population
// Random() gives out random from a max value
// search() searches for a character in an array
// getUniqueCode does this. Suppose blocks ifelse, ifelse, then it will output 1 and 2
// getAllPins reads input pin of all blocks
// GetAllPinsWOnumber gives out pins but it does not have a unique code
// atiANDaanl can be seen in copy
// aini too
// aan too
// joinBlockandOut outputs the ifelse1 , ifelse2
// joinBlockandPinANDblockIndex does this block1.pin1 block2.pin1
// GetPinNumber gives out (Needs to be seen in copy)
// NumberOfPins gives out number of pins in an block
// Connect joins wires of different pins
// GetNumber here does this suppose ifelse block1 ifelse, So it will output 1 0 1
// CountInteger counts the number of a char in an array
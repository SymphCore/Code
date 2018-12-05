#include<iostream>
using namespace std;
int f=0;
int s;
char g[100][100];
int  *null = NULL;
// bl1[] and bl2[] will have blocks witout number eg ifelse block block
char** mutate(char bl1[][],char bl2[][],int n1, int n2,int rate,int rank1,int rank2){
    float i=n1/(n1+n2);
    float o=1-i;
    int arr[n1];
    int y=random(1);
    int gh[]={n1,n2};
    int mutated[gh[y]];
    for(int a=0;a<rate;a++){
        addEvent(bl1[a],rank1);
        addEvent(bl2[a],rank2);
        mutated[a]=getValue();
        setZero();
    }
    if(y==1){
        for(int a=rate+1,a<n1;a++){
            mutated[a]=bl1[a];
        }
        s = n1;
    }
    else if(y==0){
        for(int a=rate+1,a<n2;a++){
            mutated[a]=bl2[a];
        }
        s = n2;
    }
    return **mutated;
}
void addEvent(char b[],int rank){
    for(int a=0;a<rank;a++){
        arr[f]=b;
        f++;
    }
}
char* getValue(){
    return g[random(f)];
}
void setZero(){
    for(int a=0;a<f;a++){
        arr[a]={0};
    }
    f=0;
}
int random(int max){
    int x=rand();
    x=x%max;
    return x;
}
void CreateCopyofLeftedMutation(char** mutated){
    for(int a=0;a<s;a++){
        if(mutated[a])
    }
}
int* connectMutated(char mutated[][],int matched,int n,int rate){
    int out[100]={null};
    for(int a=n;a>rate;a++){
        if(matched[a]>rate){
            out[a]=matched[a];
        }
    }
    return *out;
}
void CopyLeftMutated(char **Mutated,int n,int rate){
    for(int a=0;a<n;a++){
        int o=0;
        int temp = strlen((Mutated[a]);
        o=static_cast<int>(Mutated[a][temp]);
        while(o>=48&&o<=57){
            o=static_cast<int>(Mutated[a][--temp]);
        }
        char ju[temp];
        for(int f=0;f<temp;a++){
            ju[f]=Mutated[a][f];
        }
        std::filesystem::copy(ju[a], out[a], std::filesystem::copy_options::recursive);
    }
}

/*************************************************************************************
    ConnectLeftMutated must be mutated more with pins of input blocks and output blocks
*****************************************************************************/
// give out form connectMuated to MutHalf of ConnectLeftMuated
char** ConnectLeftMuated(int* MutHalf,int n,){
   // while(countNull(MutHalf,n)){
    //int yon[m+1]={0};
    int out[n]={0};
    for(int a=0;a<m;a++){
        if(MutHalf[a]==null){
            yon[a]=1;
            char *current = p2[m];
            int x[n+1] = search(n,pl[a],current);
            int y=countInteger(pl[a],current,n);
            out[x[Random(y)]]=a;
        }
    }
        return *out;
    
}
char** GetAllPinsOfMutatedBlocks(char** bl,int n,char k,char **p1,int n1,char **p2, int n2){
  char out[100][100];
  ifstream myfile;
  int count = 0;
  for(int a=1;a<=n1;a++){
    int x;
    myfile.open(out[a]+"/block"+k);
    myfile >> x;
    for(int b=1;b<=x;b++){
      count++;
      myfile >> out[count];
    }
  }
  myfile.close;
  return out;
}
bool countNull(char** bl,int k){
    bool ret=0;
    for(int a=0;a<bl;a++){
        if(bl[a]==null){
            ret=1;
            goto here;
        }
    }
    here:
    return ret;
}
/*
int *Connect(char **p1,int n,char **p2, int m){
  int yon[m+1]={0};
  int out[n+1]={0};
  for(int a=1;a<=m;a++){
    if(yon[a]==0){
      yon[a]=1;
      char *current = p2[m];
      int x[n+1] = search(n,pl[a],current);
      int y=countInteger(pl[a],current,n);
      out[x[Random(y)]]=a;
    }
  }
  return *out;
}
*/
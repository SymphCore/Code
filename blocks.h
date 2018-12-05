#include<bits/stdc++.h>
using namespace std;
char** BlocksIO(string type);
int NumberOfPins(char* bl);
int main(){

}
int g[100];
char** BlocksIO(string type){
  ifstream myfile;
  //if(a==1){
   string in=type+"/block";
   // const char* ina = in;
    myfile.open(in.c_str());
    int n;
    myfile >> n;
    char* blocks[n];
    for(int a=1;a<=n;a++){
      myfile >> blocks[a];
    }
    myfile.close;
    return blocks;
}
int BlocksIOn(string type){
  ifstream myfile;
  string in=type+"/block";
  myfile.open(in.c_str());
  int out;
  myfile >> out;
  myfile.close();
  return out;
}
char** RandomBlockGenerator(char** b,int n){
  //int n=sizeof(b)/sizeof(b[0]);
  int arr[n+1]={0};
  int count = 0;
  for(int a=1;a<=n;a++){
    int x=Random(a);
    arr[a]=x;
    count+=x;
  }
  char out[count][100];
  int y=0;
  for(int a=1;a<=n;a++){
    for(int c=1;c<=arr[a];c++){
      y++;
      out[y]=b[a];
    }
  }
  g[0]=count;
  return out;
}
int Random(int min){
  int r;
  r=rand();
  r=r%(min+1);
  return r;
}
int search(int n, char** arr,char* se){
  int out[n+1];
  int count=0;
  for(int a=1;a<=n;a++){
    if(strcmp(char[a],se)){
      count++;
      out[count]=a;
    }
  }
  return (out,count);
}
//kl = getUniqueCode
int* getUniqueCode(char** arr, int n){
  int out[n+1];
  int yon[n+1]={0};
  for(int a=1;a<=n;a++){
    if(yon[a]==0){
      char current = arr[i];
      int* c=search(n,arr,current);
      int d=1;
      for(int b=1;b<=count;b++){
        yon[c[b]]=1;
        out[c[b]]=d;
        d++;
      }
    }
  }
  return out;
}
char** joinPinsandOut(int *kl,){

}
char** getAllPins(char** bl,int n,char k){
  //int size = sizeof(bl)/sizeof(bl[0])dd;
  char out[100][100];
  ifstream myfile;
  int count = 0;
  for(int a=1;a<=n;a++){
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
char** GetAllPinsWOnumber(char** bl,int n,char k){
  char out[100][100];
  ifstream myfile;
  int count = 0;
  for(int a=1;a<=n;a++){
    int x;
    myfile.open(out[a]+"/pi"+k);
    myfile >> x;
    for(int b=1;b<=x;b++){
      count++;
      myfile >> out[count];
    }
  }
  myfile.close;
  return out;
}
char** atiANDaanl(char** bl, int nob,char k){
  char out[100][100];
  int aanl[100];
  ifstream myfile;
  int count = 0;
  for(int a=1;a<=nob;a++){
    int x;
    myfile.open(out[a]+"/type"+k);
    myfile >> x;
    for(int b=1;b<=x;b++){
      aanl[count]=b;
      count++;
      myfile >> out[count];
    }
  }
  return (out,aanl);
}
// Need ani(Get app pins) for aini
char** aini(int** aini,int n){
  char** out[100][100];
  int k=0;
  char** temp[100][100];
  temp= getUniqueCode(bl,n);
  return temp;
}
int* aan(int n){
  int out[n+1]={0};
  for(int a=1;a<=n;a++){
    out[a]=a;
  }
  return out;
}

char** joinBlockandOut(char bl**,int* ou,int n){
  char** out;
  for(int a=1;a<=n;a++){
    out = bl[a]+static_cast<char>(ou[a]);
    std::filesystem::copy(bl[a], out[a], std::filesystem::copy_options::recursive);
  }
  return out;
}
char** joinBlockandPinANDblockIndex(char** bl, int n, char k){
  char out[100][100];
  int blockIndex[n+1]={0};
  int count=0;
  int n=1;
  for(int a=1;a<=n;a++){
    blockIndex[a]=n;
    for(int b=1;b<=NumberOfPins(bl[a],k);b++){
      n++;
      count++;
      out[count]=bl[b]+"."+GetPinNumber(bl[a],b); 
    }
  }
  return out;
}

char* GetPinNumber(char* bl,int a){
  ifstream myfile;
  myfile.open(bl+"/block");
  int temp;
  myfile >> temp;
  char out[100];
  for(int b=1;b<=a;b++){
    myfile >> out[b];
  }
  return out;
}
int NumberOfPins(char* bl,char k){
  ifstream myfile;
  int ret;
  myfile.open(bl+"/block"+k);
  myfile >> ret;
  return ret;
}
int NumberOfallPins(char **bl,int n, char k){
   ifstream myfile;
  int ret=0;;
  
  for(int a=1;a<N;a++){
    myfile.open(bl+"/block"+k);
    int x;
    myfile >> x;
    ret+=x;
  }
  return ret;
}
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
int* GetNumber(char **pin,int n,char se){
  int arr[n+1];
  int k=0;
      for(int b=1;b<=n/*countInteger(pin,se,n)*/;b++){
        if(strcmp(pin[b],se)){
          k++;
          arr[k]=1;
        }
      }
    return arr*;
}
int GetNumberK(char **pin,int n,char *se){
  //int arr[n+1];
  int k=0;
      for(int b=1;b<=n/*countInteger(pin,se,n)*/;b++){
        if(strcmp(pin[b],se)){
          k++;
         // arr[k]=1;
        }
      }
    return (k);
}
int countInteger(char **pin, char* k,int n){
  int count=0;
  for(int a=1;a<=n;a++){
    if(strcmp(pin[a],k)){
      count++;
    }
  }
  return count;
}

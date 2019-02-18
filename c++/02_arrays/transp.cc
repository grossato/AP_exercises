#include <iostream>
#include <vector>
auto& transpose(auto& a,auto &b,int n,int m){
    int i,j;
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      b[i*n+j]=a[j*m+i];
    }}

  return b;



}

int main(){
  int n=6;
   int m=5;
  int N=n*m;
  int i,j;
   std::vector<int> b(N);
  std::vector<int> v1(N);
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      v1[i*m+j]=i;}
    

  }
  for(i=0;i<N;i++){
    std::cout<< v1[i]<< " ";
 
}
  std::cout<< "\n";
  b=transpose(v1,b,n,m);
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
	
      std::cout<< b[i*n+j]<< " ";


    }
   std::cout<<"\n";
  }
       std::cout<<"\n";
}

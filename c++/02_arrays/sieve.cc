#include <iostream>
#include <cmath>

int main(){
  
  int i,j,l;
  std::size_t n;
  std::cin >> n;
  bool a[n];
  for(i=2;i<=n;i++) a[i]=true;
  i=2;
  l=0;  
  do{
   
    l=0;
    for(j=i*i;j<=n;j=i*i+l*i){
      a[j]=false;
      l++;
    }
    i++; 
  }
  while(i<=std::sqrt(n));
  for(i=2;i<=n;i++){
    if( a[i]==true) std::cout << i <<"  ";
  



  

}
}

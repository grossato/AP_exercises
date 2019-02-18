#include <iostream>
#include <vector>
#include <algorithm>
int main(){
  std::string word;
  std::vector<std::string> vow;
  for(int i=0;i<10;i++){
    std::cin >> word;
      vow.push_back(word);
  }
  std::cout<<"\n";
  std::sort( vow.begin(), vow.end() );
  for(int i=0;i<10;i++){
    if( i==0) std::cout<< vow[0]<<"\n";
    if(i!=0 && vow[i]!=vow[i-1]) std::cout <<vow[i]<<"\n"; 
     
  }
}

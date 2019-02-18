#include <algorithm>
#include <iostream>
#include <vector>
#include <fstream>
int main(){
  int n=0;
std::vector<double> v;
 double c,mean;
 std::ifstream file("temperatures.txt");
 
 while( file   >>  c){
  v.push_back(c);
  n++;
 }
 c=0;
 for(int i=0;i<n;i++){
    c+=v[i];
    
}
 std::cout<< "the mean is: "<<c/n<< "\n";
 std::sort( v.begin(), v.end() );
 if(n%2==0){
   std::cout <<"median:  " <<v[n/2]<< "\n" ;   

 }
 else{
   std::cout <<"median:  " <<(v[(n-1)/2]+ v[(n+1)/2] )/2<< "\n";
}
}

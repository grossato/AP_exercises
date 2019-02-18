
#include <iostream>
int main() 

{
  int i=1;
  std::string a,b;
  std::getline(std::cin,a);
while(std::getline(std::cin,b))
  {if (a==b) i++;
    if (a!=b){
      std::cout << i<< "\n";
	i=1;
	a=b;
       
             }
   }
 
 std::cout << i<< "\n";
 }

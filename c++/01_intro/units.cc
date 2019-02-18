#include<iostream>
int main(){
float a,b,k;
std::cout << " write down the measure ( right sintax is 'number' 'unit' \n";
std::string u;
  std::cin >> a;

 std::getline(std::cin,u);

if(u==" inch"){
k=0.0254;
b=a*k;
std::cout << a << " inches are: " << b << " meters\n";
}
if(u==" erg"){
k=1E-7;
b=a*k;
std::cout << a << " ergs are: " << b << " joule\n";
}
}

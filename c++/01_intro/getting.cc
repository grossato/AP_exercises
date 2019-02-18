#include<iostream>
int getint(){
int num;
while(!(std::cin>>num)){
        std::cin.clear();
	std::cin.ignore();
        std::cout << "this is not an int \n";
                        }
std::cout << num << "\n";
return num;


}
float getfloat(){
float num;
while(!(std::cin>>num)){
        std::cin.clear();
	std::cin.ignore();
        std::cout << "this is not a float \n";
                        }
std::cout << num << "\n";
return num
}
int main(){
int a;
float b;
a = getint()
b=getfloat()
}

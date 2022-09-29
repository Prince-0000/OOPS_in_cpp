#include<iostream>
using namespace std;
class Box{
  public:
  int length = 16;
  int breadth = 12;
  int height = 8;  // instance variables
};
int main(){
  A ob; // class object 
  cout<<"Box has following dimensions : "<<endl;
  cout<<"Length = "<<ob.length<<endl;
  cout<<"Breadth = "<<ob.breadth<<endl;
  cout<<"height = "<<ob.height;
  
  }

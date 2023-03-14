#include <iostream>

using namespace std;

class A{
  
  public:
  
  int a;
  A(int);
  private:
  
};

A::A(int c){
  cout << c<< endl;
}

int hesapla(int x){
 
   A a(x);
}
  
int main(){
  
  int a=10;
  long b;
  string son="Kaybettin";
  
  cout << a<<endl;
  cin >> b;
  
  if(b>10){
     hesapla(b);
  }else if(b<0){
    cout << "furki--"<<endl;
  }else{
    cout << son <<endl;
  }
  
  return 0;
}

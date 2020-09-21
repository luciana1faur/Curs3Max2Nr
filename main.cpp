#include <iostream>
using namespace std;

int main(){
  int a, b;
  int max;

  cout << "a = ";
  cin >> a;

  cout << "b = ";
  cin >> b;

  if(a > b)
     max = a;
     else 
       max = b;

      cout << "Valoarea maxima este: " << max << endl;


  return 0;
}
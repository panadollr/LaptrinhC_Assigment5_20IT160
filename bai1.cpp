#include <iostream>
using namespace std;

void swap(int *a, int *b){
  int temp = *b;
  *b = *a;
  *a = temp;
}

int main() 
{
  int a, b;
  while(true){
    cout << "Enter a : "; cin >> a;
  cout << "Enter b : "; cin >> b;
     cout << "Before swap:  a = " << a << ", b = " << b << endl;
  swap(&a,&b);
  cout << "After swap: a = " << a << ", b = " << b << endl;
  }
    return 0;
}
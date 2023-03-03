#include <iostream>
using namespace std;

void sum(int *ptr, int size){
  int sum=0;
 for(int i = 0; i < size; i++) {
        sum += *ptr;
        ptr++;
    }
    cout << "The sum of array is : " << sum;
}

int main() 
{
  int arr[10];
  int input;
  cout << "Input the number of elements to store in the array (max 10): " << endl;
  int size=0;
  while(input != -1 && size != 10){
   cout << "element[" << size << "] (enter -1 to stop) : ";
    cin >> input;
    arr[size] = input;
    size++;
  }
  if(input == -1 || size == 10){
   sum(arr, size);
  }
    return 0;
}
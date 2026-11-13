#include <iostream>
using namespace std;

int main ( ) {
  int arr[10]= {1, 6, 3, 2, 4, 5, 8, 9, 10, 12};
  int lower_values[10] = {};
  int bigger_values[10] = {}; 

  //quicksort: nós assumimos um pivot, tudo que for menor que o pivot é deslocado para a esquerda do array
  //tudo que for maior que o pivot, vai pra direita do array.
  
  int pivot = arr[0];
  int size = sizeof(arr) / 2;

  for(int i = 0; i < size; i++) {
    if(arr[i] < pivot) {
      lower_values[i] = arr[i];
    }else {
      bigger_values[i] = arr[i];
    }
  };

  for(int i = 0; i < sizeof(lower_values); i++){
    cout << lower_values[i] << "\n";
  }


  for(int i = 0; i < sizeof(bigger_values); i++) {
    cout << bigger_values[i] << "\n";
  } 


}

#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.
int contador = 0;

int main(void)
{
  int numero;

  for (int i = 0; i < SIZE; i++) {
        cin >> numero;
        if(0 > numero){
            contador = contador + 1;
        }
    }
  cout << contador ;

    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int fib(int n) {
  n = n - 2;
  
  int a = 0;
  int b = 1;
  int c = 1;

  for (int i = 0; i < n; i++) {
    a = b;
    b = c;
    c = a + b;
  }

  return c;
}

int main() {

  int n = 5;

  cout << fib(n);

}
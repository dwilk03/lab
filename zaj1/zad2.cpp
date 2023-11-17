#include <iostream>

int main() {
  int a,b;
  int sum;

  std::cout << "Podaj kolejno dwie liczby" << std::endl;

  std::cin >> a >> b;
  sum = a + b;

  std::cout << "Suma wynosi " << sum << std::endl;

  return 0;
}

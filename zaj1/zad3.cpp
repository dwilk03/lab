#include <iostream>
#include <cmath>

int main() {
  int a,b,c;
  int delta;
  float x1,x2;

  std::cout << "Podaj kolejno wspolczynniki" << std::endl;

  std::cin >> a >> b >> c;
  delta = std::pow(b,2) - (4*a*c);
  std::cout << "Delta wynosi " << delta << std::endl;

  x1 = (-b - std::sqrt(delta)) / 2*(float)a;
  x2 = (-b + std::sqrt(delta)) / 2*(float)a;
  std::cout << "X1 wynosi " << x1 << std::endl;
  std::cout << "X2 wynosi " << x2 << std::endl;

  return 0;
}

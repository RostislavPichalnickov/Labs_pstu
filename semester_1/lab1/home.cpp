#include <clocale>
#include <iostream>
int main() {
  std::setlocale(LC_ALL, "");
  double a, b;
  std::cout << "Введите а и b - ";
  std::cin >> a >> b;
  if (a != 0) {
    double x;
    if (b == 0) {
      x = 0;
    } else {
      x = b / a;
    }
    std::cout << "x = " << x << std::endl;
  }
  else {
  	if (b == 0){
   		std::cout << "нет решений" << std::endl;
   }
   else{
    std::cout << "количество возможных x бесконечно" << std::endl;
   }
   }

}

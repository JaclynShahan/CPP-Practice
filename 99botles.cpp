int main() {

  // Write a for loop here:
  for (int i = 99; i > 0; i--) {
    std::cout << i << " bottles of pop on the wall. Take one down and pass it around "<< i-1 << " bottles of pop on the wall.\n";
  }
  

  #include <iostream>

// Define average() here:
double average(double num1, double num2) {
  double new_average = (num1 + num2) / 2;
  return new_average;
}

int main() {
  
  std::cout << average(42.0, 24.0) << "\n";
  std::cout << average(1.0, 2.0) << "\n";
 
}
  
  
}

#include <iostream>
#include <cmath>

// Define tenth_power() here:
int tenth_power(int num) {
int newPower = pow(num, 10);
  return newPower;
}

int main() {
  
  std::cout << tenth_power(0) << "\n";
  std::cout << tenth_power(1) << "\n";
  std::cout << tenth_power(2) << "\n";
  
}
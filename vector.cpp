#include <iostream>
#include <vector>

int main() {
  int totalEven = 0;
  int totalOdd = 1;
  
  std::vector<int> numbers = {2, 4, 3, 6, 1, 9};
  
  for (int i = 0; i < numbers.size(); i++) {
    if (numbers[i] % 2 == 0) {
      totalEven = totalEven + numbers[i];
    } else {
      totalOdd = totalOdd * numbers[i];
    }
  }
  std::cout << "Sum of even is " << totalEven << "\n";
  std::cout << "Product of odd is " << totalOdd << "\n";
}
#include <iostream>

// Define introduction() here:
void introduction(std::string first_name, std::string last_name) {
  std::cout << last_name << ", " << first_name << " " <<  last_name << "\n";
}

int main() {
  
  introduction("Beyonce", "Knowles");
  
}

#include <iostream>
#include <vector>

// Define first_three_multiples() here:
std::vector<int> first_three_multiples(int num) {
  
  std::vector<int> multiples{num, num * 2, num * 3};
  
  return multiples;
  
}

int main() {
  
  for (int element : first_three_multiples(8)) {
    std::cout << element << "\n";
  }
  
}

#include <iostream>

// Define needs_water() here:
std::string needs_water(int days, bool is_succulent) {
  
  if (days > 3 && is_succulent == false) {
    return "Time to water the plant.";
  } else if (days < 13 && is_succulent) {
    return "Don't water the plant!";
  } else if (days >= 13 && is_succulent) {
    return "Go ahead and give the plant a little water.";
  } else {
    return "Don't water the plant!";
  }
  
}

int main() {
  
  std::cout << needs_water(10, false) << "\n";
  
}
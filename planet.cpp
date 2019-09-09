int main() {
  double weight;
  int planet;
  
  std::cout << "Enter your Earth weight (kg): \n";
  std::cin >> weight;
  std::cout << "Enter the planet number to visit:\n";
  std::cout << "  1. Venus  2. Mars  3. Jupiter\n";
  std::cout << "  4. Saturn  5. Uranus . 6. Neptune\n\n";
  std::cin >> planet;
 if (planet == 1) {

    weight = weight * 0.78;

  } else if (planet == 2) {

    weight = weight * 0.39;

  } else if (planet == 3) {

    weight = weight * 2.65;

  } else if (planet == 4) {

    weight = weight * 1.17;

  } else if (planet == 5) {

    weight = weight * 1.05;

  } else if (planet == 6) {

    weight = weight * 1.23;

  }

  std::cout << "\nYour weight: " << weight << "\n";

} 

  

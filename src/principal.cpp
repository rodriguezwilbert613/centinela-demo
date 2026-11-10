#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<std::string> equipo{"ana", "luis"};
  for (const auto& n : equipo) std::cout << n << '\n';
}

#include "HumanA.hpp"
#include "Weapon.hpp"

int main(void) {
  Weapon club = Weapon("crude spiked club");
  HumanA bob("Bob", club);

  std::cout << club.getType() << std::endl;
  bob.attack();
  club.setType("some other type of club");
  bob.attack();

  return 0;
}

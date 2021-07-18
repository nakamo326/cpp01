#include "zombie.hpp"

void randomChump(std::string name) {
  Zombie chump(name);
  chump.announce();
  return;
}

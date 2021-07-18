#include "zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main(void) {
  Zombie a(std::string("Shaun"));
  Zombie* p;

  a.announce();
  p = newZombie(std::string("Ed"));
  randomChump(std::string("Liz"));

  return 0;
}

#include "zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main(void) {
  Zombie a(std::string("Shaun"));
  Zombie* p;

  p = newZombie(std::string("Ed"));
  randomChump(std::string("Liz"));

  a.announce();
  p->announce();

  delete p;

  return 0;
}

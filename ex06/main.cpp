#include "Karen.hpp"

int main(int argc, char const *argv[]) {
  Karen karen;
  if (argc != 2)
    return 1;
  karen.complain(std::string(argv[1]));
  return 0;
}

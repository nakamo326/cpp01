#include <fstream>
#include <iostream>

int main(int argc, char const *argv[]) {
  std::ifstream ifs;
  if (argc != 4 || argv[1][0] == '\0' || argv[2][0] == '\0' ||
      argv[3][0] == '\0') {
    std::cout << "USAGE: ./replace [filename] [search] [replace]" << std::endl;
    return 1;
  }
  ifs.open(argv[1], std::ios::in);
  if (!ifs) {
    std::cerr << "failed to open file." << std::endl;
    return 1;
  }

  return 0;
}

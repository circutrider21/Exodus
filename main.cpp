#include <iostream>
#include "toml.hpp"

using namespace std;

int main(int argc, char *argv[]) {
  parser p = new parser();
  string toparse = argv[1];
  p.argone(toparse);
}
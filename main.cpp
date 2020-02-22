#include <iostream>
#include "toml.hpp"

int main(int argc, char *argv[]) {
  parser p = new parser();
  String toparse = argv[1];
  p.argone(toparse);
}
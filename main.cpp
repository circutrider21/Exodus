#include <iostream>
#include "toml.hpp"
#include "parser.hpp"

using namespace std;

int main(int argc, char *argv[]) {
  Parser p;
  string toparse = argv[1];
  p.argone(toparse);
}
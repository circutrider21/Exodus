#include <iostream>
#include "toml.hpp"
using namespace std;

public class parser {
  public:
  int parse() {
    const auto data = toml::parse("build.toml");

  }
}
#include <iostream>
#include "toml.hpp"
using namespace std;

class Parser {
  public:
  int parse(string command) {
    const auto data = toml::parse("build.toml");
    const auto physical = toml::find(data, command);
    const auto color = toml::find<std::string>(physical, "run");
    system(color.c_str());
  }
  void argone(string t) {
    if (t.compare("version") == 0) {
      cout << "1.3.0" << "\n";
    } else if (t.compare("help") == 0) {
      cout << "USAGE: Exodus <command>\n";
    } else if (t.compare("about") == 0) {
      cout << "\tExodus is a command line build tool written in C++ \nand designed to simplify the process of compiling small coding projects\nExodus is extensible and able to be extended into other compilers and tools\nFinnally Exodus uses ToruNiina's Toml Parser to parse the toml conf files\n";
      cout << "Copyright 2020 Peeled Fruit Studios Under The Mit License\n";
    } else {
      parse(t);
    }
  }
};
#include <iostream>
#include <termcolor.hpp>
#include <toml.hpp>
using namespace std;

namespace cli {
  class Execute {
    public:
    void run(string to_run) {
      system(to_run.c_str);
    }
  };
  class Helptext {
    public:
    void intro() {
      cout << "Exodus " << termcolor::blue << "v1.0.1" << termcolor::reset << ", By Peeled Fruit Studios\n";
    }
    void help() {
      cout << termcolor::red << "Usage: Exodus <Command>";
      cout << termcolor::reset << "\t Time: Specifies whether to time the build";
      cout << "All these commands can be specified in the Build.toml file"
    }
  };
}

namespace builder {
  class cpp {
    public:
    void build() {

    }
  };
  class java {
    public:
  };
}
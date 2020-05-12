#include <iostream>
#include <termcolor.hpp>
#include <toml.hpp>
#include <fstream>
#include <string>
#include <bits/stdc++.h>
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

  class Main {
    private:
    char[] args;

    public:
    main(char info[]) {
      args = info;

    }
    void start() {
      builder::parser read;
      map<string, string> = read.read();
    }
  };
}

namespace builder {
  class cpp {
    public:
    string compiler;
    string cops;
    string files;
    cpp(string s_compiler, string s_cops, string s_files) {
        compiler = s_compiler;
        cops = s_cops;
        files = s_files
    }
    void build() {
      system(compiler.c_str + cops.c_str + files);
    }
  };
}

class parser {
  private:
  ifstream dump_file() {
    ifstream bf("build.toml");
    return bf;
  }
  public:
  void read(string custom_command, bool target) {
    ifstream contents = dump_file();
    toml::ParseResult pr = toml::parse(contents);
    if (!pr.valid()) {
      cout << termcolor::red << "Error: " << termcolor::reset << pr.errorReason << endl;
      return;
    }
    const toml::Value& val = pr.value;
    const toml::Value* r_lang = val.find("language");
    if (r_lang && r_lang->is<std::string>()) {
      string lang = lang->as<string>;
    } else {
      cout << termcolor::red << "Error: " << termcolor::reset << "There is no language provided" << endl;
    }
    if (target == true) {
      const toml::Value*  = val.find(custom_command + ".info");
    }
  }
};
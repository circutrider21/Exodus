#include <iostream>
#include <cli.hpp>

using namespace std;
using namespace cli;

int main(int argc, char *argv[]) {
  if (argc == 0) {
    Helptext::intro();
    Helptext::help();
  }
  Main app(argv);
  app.start();
}
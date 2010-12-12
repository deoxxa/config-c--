#include <string>
#include <iostream>

#include "config.h"

int main()
{
  std::cout << "\nAbout to parse...\n\n";

  Config* config = new Config;

  if (config->load("default.cfg"))
  {
    std::cout << "\nParsing finished.\n\n";
    config->dump();
    std::cout << "Port value: " << config->iData("core.net.port") << "\n";
  }
  else
  {
    std::cout << "\nParsing failed!\n\n";
  }
}

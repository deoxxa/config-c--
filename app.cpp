#include <string>
#include <list>
#include <iostream>

#include "config.h"

int main()
{
  std::cout << "\nAbout to parse...\n";

  Config* config = new Config;

  if (config->load("default.cfg"))
  {
    std::cout << "\nParsing finished.\n";

    std::cout << "\nDump of config:\n";
    config->dump();

    std::cout << "\nPort value:\n";
    std::cout << config->iData("core.net.port") << "\n";

    std::cout << "\nKeys in 'core.net':\n";
    std::list<std::string>* tmp = config->mData("core.net")->keys();
    std::list<std::string>::iterator tmp_iter = tmp->begin();
    for (;tmp_iter!=tmp->end();++tmp_iter)
    {
      std::cout << *tmp_iter << "\n";
    }

    std::cout << "\n";
  }
  else
  {
    std::cout << "\nParsing failed!\n\n";
  }
}

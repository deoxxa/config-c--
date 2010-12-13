#include <string>

#include "config/parser.h"
#include "config/node.h"
#include "config.h"

Config::Config()
{
  m_parser = new ConfigParser;
  m_root = new ConfigNode;
}

Config::~Config()
{
  delete m_parser;
  delete m_root;
}

bool Config::load(std::string file)
{
  return m_parser->parse(file, m_root);
}

void Config::dump()
{
  m_root->dump();
}

ConfigNode* Config::root()
{
  return m_root;
}

bool Config::bData(std::string key)
{
  if (m_root->has(key))	
  {
    return m_root->get(key, false)->bData();
  }
}

int Config::iData(std::string key)
{
  if (m_root->has(key))	
  {
    return m_root->get(key, false)->iData();
  }
}

long Config::lData(std::string key)
{
  if (m_root->has(key))	
  {
    return m_root->get(key, false)->lData();
  }
}

float Config::fData(std::string key)
{
  if (m_root->has(key))	
  {
    return m_root->get(key, false)->fData();
  }
}

double Config::dData(std::string key)
{
  if (m_root->has(key))	
  {
    return m_root->get(key, false)->dData();
  }
}

std::string Config::sData(std::string key)
{
  if (m_root->has(key))	
  {
    return m_root->get(key, false)->sData();
  }
}

ConfigNode* Config::mData(std::string key)
{
  if (m_root->has(key))
  {
    return m_root->get(key, false);
  }
}

bool Config::has(std::string key)
{
  return m_root->has(key);
}

int Config::type(std::string key)
{
  if (m_root->has(key))
  {
    return m_root->get(key)->type();
  }
  else
  {
    return CONFIG_NODE_UNDEFINED;
  }
}

std::list<std::string>* Config::keys(int type)
{
  return m_root->keys();
}

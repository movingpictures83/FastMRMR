#ifndef FASTMRMRPLUGIN_H
#define FASTMRMRPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>

class FastMRMRPlugin : public Plugin
{
public: 
 std::string toString() {return "FastMRMR";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif

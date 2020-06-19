#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "FastMRMRPlugin.h"

void FastMRMRPlugin::input(std::string file) {
 inputfile = file;
}

void FastMRMRPlugin::run() {}

void FastMRMRPlugin::output(std::string file) {
 std::string outputfile = file;
 std::string myCommand = "";
 myCommand += "mrmr-reader "+inputfile;
 std::cout << myCommand << std::endl;
 system(myCommand.c_str());
 myCommand = "mv data.mrmr "+std::string(PluginManager::prefix());
 system(myCommand.c_str());
 myCommand = "fast-mrmr -f "+std::string(PluginManager::prefix())+"/data.mrmr";
 std::cout << myCommand << std::endl;
 system(myCommand.c_str());
}

PluginProxy<FastMRMRPlugin> FastMRMRPluginProxy = PluginProxy<FastMRMRPlugin>("FastMRMR", PluginManager::getInstance());

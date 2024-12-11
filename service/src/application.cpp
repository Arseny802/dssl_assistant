#include "application.h"

#include <iostream>
#include <string>
#include <vector>

#include <Poco/Util/ServerApplication.h>

int application::main(const std::vector<std::string> &) {
  std::cout << std::endl << "Server started" << std::endl;

  waitForTerminationRequest();  // wait for CTRL-C or kill

  std::cout << std::endl << "Shutting down..." << std::endl;

  return Poco::Util::Application::EXIT_OK;
}
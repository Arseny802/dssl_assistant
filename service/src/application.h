#pragma once

#include <Poco/Util/ServerApplication.h>


class application : public Poco::Util::ServerApplication
{
protected:
  int main(const std::vector<std::string> &);
};
/* 
 * File:   Core.cpp
 * Author: gzdzl
 * 
 * Created on 2015年12月25日, 下午8:38
 */

#include "Core.h"
namespace app
{

  Core::Core() { }

  Core::Core(const Core& orig) { }

  Core::~Core() { }

  string Core::getName() {
      return this->_name;
  }

  void Core::setName(string name) {
      this->_name = name;
  }
}



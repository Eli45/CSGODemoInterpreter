#ifndef DEMO_EXCEPTION_H
#define DEMO_EXCEPTION_H

#include "TypeDefinesAndConstants.h"
//#include <exeception> //Todo: Figure out if stdexcept or exception is needed here.
#include <stdexcept>

class DemoException : public std::runtime_error  {

    DemoException(String error);

    virtual const char* what() const throw();   //TODO: figure out if const throw should be here or in implementation
};

#endif
#include "DemoException.h"

DemoException::DemoException(String error): runtime_error(error)  {

}

const char* DemoException::what() const throw()   {
    return runtime_error::what();   //TODO: make sure this is right.
}
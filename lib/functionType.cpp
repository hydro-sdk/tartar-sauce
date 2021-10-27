#include "functionType.hpp"

swid::FunctionType::FunctionType() {}

swid::NullabilitySuffix swid::FunctionType::getNullabilitySuffix() {
  return this->nullabilitySuffix;
}
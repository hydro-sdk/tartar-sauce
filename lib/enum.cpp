#include "enum.hpp"

swid::Enum::Enum(swid::Enum::Params params)
    : identifier(params.identifier), children(params.children) {
  this->originalPackagePath = params.originalPackagePath;
}

std::wstring swid::Enum::getIdentifier() const { return this->identifier; }

std::vector<std::wstring> swid::Enum::getChildren() const {
  return this->children;
}
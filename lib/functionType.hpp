#include <concepts>
#include <iostream>

#include "nullabilitySuffix.hpp"

namespace swid {
  template <typename T>
  concept FunctionTypeConcept = requires(T t) {
    { t.getNullabilitySuffix() } -> std::same_as<swid::NullabilitySuffix>;
  };

  class FunctionType {
  private:
    swid::NullabilitySuffix nullabilitySuffix;

  public:
    FunctionType();

    swid::NullabilitySuffix getNullabilitySuffix();
  };
} // namespace swid

template <class T>
requires swid::FunctionTypeConcept<T>
void print(T functionType) { functionType.getNullabilitySuffix(); }

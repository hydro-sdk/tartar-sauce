#include <concepts>

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

#pragma once
#include <concepts>
#include <string>
#include <vector>

namespace swid {
  template <typename T>
  concept EnumConcept = requires(T t) {
    { t.getOriginalPackagePath() } -> std::same_as<std::wstring const>;
    { t.getIdentifier() } -> std::same_as<std::wstring const>;
    { t.getChildren() } -> std::same_as<std::vector<std::wstring> const>;
  };

  namespace detail {
    template <class T, class U, class V> class OriginalPackagePath {
    protected:
      U originalPackagePath;

    public:
      auto getOriginalPackagePath() -> V const {
        return this->originalPackagePath;
      }
    };

    class EnumIdentifierClone {
    private:
      std::wstring identifier;
      std::wstring &originalPackagePath;
      std::vector<std::wstring> &children;

    public:
      EnumIdentifierClone(std::wstring);

      std::wstring getOriginalPackagePath() const;
      std::wstring getIdentifier() const;
      std::vector<std::wstring> getChildren() const;
    };
  } // namespace detail

  class Enum
      : public detail::OriginalPackagePath<Enum, std::wstring, std::wstring> {
  private:
    std::wstring identifier;
    std::vector<std::wstring> children;

  public:
    struct Params {
      std::wstring identifier;
      std::wstring originalPackagePath;
      std::vector<std::wstring> children;
    };

    Enum(Params);

    std::wstring getIdentifier() const;
    std::vector<std::wstring> getChildren() const;
  }; // namespace detail
} // namespace swid
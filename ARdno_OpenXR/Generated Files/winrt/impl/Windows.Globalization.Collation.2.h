// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210312.4

#ifndef WINRT_Windows_Globalization_Collation_2_H
#define WINRT_Windows_Globalization_Collation_2_H
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Globalization.Collation.1.h"
WINRT_EXPORT namespace winrt::Windows::Globalization::Collation
{
    struct __declspec(empty_bases) CharacterGrouping : Windows::Globalization::Collation::ICharacterGrouping
    {
        CharacterGrouping(std::nullptr_t) noexcept {}
        CharacterGrouping(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Globalization::Collation::ICharacterGrouping(ptr, take_ownership_from_abi) {}
        CharacterGrouping(CharacterGrouping const&) noexcept = default;
        CharacterGrouping(CharacterGrouping&&) noexcept = default;
        CharacterGrouping& operator=(CharacterGrouping const&) & noexcept = default;
        CharacterGrouping& operator=(CharacterGrouping&&) & noexcept = default;
    };
    struct __declspec(empty_bases) CharacterGroupings : Windows::Globalization::Collation::ICharacterGroupings
    {
        CharacterGroupings(std::nullptr_t) noexcept {}
        CharacterGroupings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Globalization::Collation::ICharacterGroupings(ptr, take_ownership_from_abi) {}
        CharacterGroupings();
        explicit CharacterGroupings(param::hstring const& language);
        CharacterGroupings(CharacterGroupings const&) noexcept = default;
        CharacterGroupings(CharacterGroupings&&) noexcept = default;
        CharacterGroupings& operator=(CharacterGroupings const&) & noexcept = default;
        CharacterGroupings& operator=(CharacterGroupings&&) & noexcept = default;
    };
}
#endif
// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210312.4

#ifndef WINRT_Windows_Security_Authentication_Identity_Core_2_H
#define WINRT_Windows_Security_Authentication_Identity_Core_2_H
#include "winrt/impl/Windows.Security.Authentication.Identity.Core.1.h"
WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Identity::Core
{
    struct __declspec(empty_bases) MicrosoftAccountMultiFactorAuthenticationManager : Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager
    {
        MicrosoftAccountMultiFactorAuthenticationManager(std::nullptr_t) noexcept {}
        MicrosoftAccountMultiFactorAuthenticationManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager(ptr, take_ownership_from_abi) {}
        MicrosoftAccountMultiFactorAuthenticationManager(MicrosoftAccountMultiFactorAuthenticationManager const&) noexcept = default;
        MicrosoftAccountMultiFactorAuthenticationManager(MicrosoftAccountMultiFactorAuthenticationManager&&) noexcept = default;
        MicrosoftAccountMultiFactorAuthenticationManager& operator=(MicrosoftAccountMultiFactorAuthenticationManager const&) & noexcept = default;
        MicrosoftAccountMultiFactorAuthenticationManager& operator=(MicrosoftAccountMultiFactorAuthenticationManager&&) & noexcept = default;
        [[nodiscard]] static auto Current();
    };
    struct __declspec(empty_bases) MicrosoftAccountMultiFactorGetSessionsResult : Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorGetSessionsResult
    {
        MicrosoftAccountMultiFactorGetSessionsResult(std::nullptr_t) noexcept {}
        MicrosoftAccountMultiFactorGetSessionsResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorGetSessionsResult(ptr, take_ownership_from_abi) {}
        MicrosoftAccountMultiFactorGetSessionsResult(MicrosoftAccountMultiFactorGetSessionsResult const&) noexcept = default;
        MicrosoftAccountMultiFactorGetSessionsResult(MicrosoftAccountMultiFactorGetSessionsResult&&) noexcept = default;
        MicrosoftAccountMultiFactorGetSessionsResult& operator=(MicrosoftAccountMultiFactorGetSessionsResult const&) & noexcept = default;
        MicrosoftAccountMultiFactorGetSessionsResult& operator=(MicrosoftAccountMultiFactorGetSessionsResult&&) & noexcept = default;
    };
    struct __declspec(empty_bases) MicrosoftAccountMultiFactorOneTimeCodedInfo : Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo
    {
        MicrosoftAccountMultiFactorOneTimeCodedInfo(std::nullptr_t) noexcept {}
        MicrosoftAccountMultiFactorOneTimeCodedInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo(ptr, take_ownership_from_abi) {}
        MicrosoftAccountMultiFactorOneTimeCodedInfo(MicrosoftAccountMultiFactorOneTimeCodedInfo const&) noexcept = default;
        MicrosoftAccountMultiFactorOneTimeCodedInfo(MicrosoftAccountMultiFactorOneTimeCodedInfo&&) noexcept = default;
        MicrosoftAccountMultiFactorOneTimeCodedInfo& operator=(MicrosoftAccountMultiFactorOneTimeCodedInfo const&) & noexcept = default;
        MicrosoftAccountMultiFactorOneTimeCodedInfo& operator=(MicrosoftAccountMultiFactorOneTimeCodedInfo&&) & noexcept = default;
    };
    struct __declspec(empty_bases) MicrosoftAccountMultiFactorSessionInfo : Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo
    {
        MicrosoftAccountMultiFactorSessionInfo(std::nullptr_t) noexcept {}
        MicrosoftAccountMultiFactorSessionInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo(ptr, take_ownership_from_abi) {}
        MicrosoftAccountMultiFactorSessionInfo(MicrosoftAccountMultiFactorSessionInfo const&) noexcept = default;
        MicrosoftAccountMultiFactorSessionInfo(MicrosoftAccountMultiFactorSessionInfo&&) noexcept = default;
        MicrosoftAccountMultiFactorSessionInfo& operator=(MicrosoftAccountMultiFactorSessionInfo const&) & noexcept = default;
        MicrosoftAccountMultiFactorSessionInfo& operator=(MicrosoftAccountMultiFactorSessionInfo&&) & noexcept = default;
    };
    struct __declspec(empty_bases) MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo : Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo
    {
        MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo(std::nullptr_t) noexcept {}
        MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo(ptr, take_ownership_from_abi) {}
        MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo(MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo const&) noexcept = default;
        MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo(MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo&&) noexcept = default;
        MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo& operator=(MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo const&) & noexcept = default;
        MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo& operator=(MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo&&) & noexcept = default;
    };
}
#endif
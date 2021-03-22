// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210312.4

#ifndef WINRT_Windows_ApplicationModel_Calls_Provider_2_H
#define WINRT_Windows_ApplicationModel_Calls_Provider_2_H
#include "winrt/impl/Windows.ApplicationModel.Calls.Provider.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Calls::Provider
{
    struct __declspec(empty_bases) PhoneCallOrigin : Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin,
        impl::require<PhoneCallOrigin, Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin2, Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin3>
    {
        PhoneCallOrigin(std::nullptr_t) noexcept {}
        PhoneCallOrigin(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin(ptr, take_ownership_from_abi) {}
        PhoneCallOrigin();
        PhoneCallOrigin(PhoneCallOrigin const&) noexcept = default;
        PhoneCallOrigin(PhoneCallOrigin&&) noexcept = default;
        PhoneCallOrigin& operator=(PhoneCallOrigin const&) & noexcept = default;
        PhoneCallOrigin& operator=(PhoneCallOrigin&&) & noexcept = default;
    };
    struct PhoneCallOriginManager
    {
        PhoneCallOriginManager() = delete;
        [[nodiscard]] static auto IsCurrentAppActiveCallOriginApp();
        static auto ShowPhoneCallOriginSettingsUI();
        static auto SetCallOrigin(winrt::guid const& requestId, Windows::ApplicationModel::Calls::Provider::PhoneCallOrigin const& callOrigin);
        static auto RequestSetAsActiveCallOriginAppAsync();
        [[nodiscard]] static auto IsSupported();
    };
}
#endif

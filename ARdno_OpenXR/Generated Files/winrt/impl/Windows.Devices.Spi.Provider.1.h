// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210312.4

#ifndef WINRT_Windows_Devices_Spi_Provider_1_H
#define WINRT_Windows_Devices_Spi_Provider_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.Spi.Provider.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Spi::Provider
{
    struct __declspec(empty_bases) IProviderSpiConnectionSettings :
        Windows::Foundation::IInspectable,
        impl::consume_t<IProviderSpiConnectionSettings>
    {
        IProviderSpiConnectionSettings(std::nullptr_t = nullptr) noexcept {}
        IProviderSpiConnectionSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IProviderSpiConnectionSettings(IProviderSpiConnectionSettings const&) noexcept = default;
        IProviderSpiConnectionSettings(IProviderSpiConnectionSettings&&) noexcept = default;
        IProviderSpiConnectionSettings& operator=(IProviderSpiConnectionSettings const&) & noexcept = default;
        IProviderSpiConnectionSettings& operator=(IProviderSpiConnectionSettings&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IProviderSpiConnectionSettingsFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IProviderSpiConnectionSettingsFactory>
    {
        IProviderSpiConnectionSettingsFactory(std::nullptr_t = nullptr) noexcept {}
        IProviderSpiConnectionSettingsFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IProviderSpiConnectionSettingsFactory(IProviderSpiConnectionSettingsFactory const&) noexcept = default;
        IProviderSpiConnectionSettingsFactory(IProviderSpiConnectionSettingsFactory&&) noexcept = default;
        IProviderSpiConnectionSettingsFactory& operator=(IProviderSpiConnectionSettingsFactory const&) & noexcept = default;
        IProviderSpiConnectionSettingsFactory& operator=(IProviderSpiConnectionSettingsFactory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISpiControllerProvider :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpiControllerProvider>
    {
        ISpiControllerProvider(std::nullptr_t = nullptr) noexcept {}
        ISpiControllerProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISpiControllerProvider(ISpiControllerProvider const&) noexcept = default;
        ISpiControllerProvider(ISpiControllerProvider&&) noexcept = default;
        ISpiControllerProvider& operator=(ISpiControllerProvider const&) & noexcept = default;
        ISpiControllerProvider& operator=(ISpiControllerProvider&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISpiDeviceProvider :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpiDeviceProvider>,
        impl::require<Windows::Devices::Spi::Provider::ISpiDeviceProvider, Windows::Foundation::IClosable>
    {
        ISpiDeviceProvider(std::nullptr_t = nullptr) noexcept {}
        ISpiDeviceProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISpiDeviceProvider(ISpiDeviceProvider const&) noexcept = default;
        ISpiDeviceProvider(ISpiDeviceProvider&&) noexcept = default;
        ISpiDeviceProvider& operator=(ISpiDeviceProvider const&) & noexcept = default;
        ISpiDeviceProvider& operator=(ISpiDeviceProvider&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISpiProvider :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpiProvider>
    {
        ISpiProvider(std::nullptr_t = nullptr) noexcept {}
        ISpiProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISpiProvider(ISpiProvider const&) noexcept = default;
        ISpiProvider(ISpiProvider&&) noexcept = default;
        ISpiProvider& operator=(ISpiProvider const&) & noexcept = default;
        ISpiProvider& operator=(ISpiProvider&&) & noexcept = default;
    };
}
#endif

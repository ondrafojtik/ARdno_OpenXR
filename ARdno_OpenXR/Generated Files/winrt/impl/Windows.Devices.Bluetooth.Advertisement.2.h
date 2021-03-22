// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210312.4

#ifndef WINRT_Windows_Devices_Bluetooth_Advertisement_2_H
#define WINRT_Windows_Devices_Bluetooth_Advertisement_2_H
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Devices.Bluetooth.Advertisement.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth::Advertisement
{
    struct __declspec(empty_bases) BluetoothLEAdvertisement : Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisement
    {
        BluetoothLEAdvertisement(std::nullptr_t) noexcept {}
        BluetoothLEAdvertisement(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisement(ptr, take_ownership_from_abi) {}
        BluetoothLEAdvertisement();
        BluetoothLEAdvertisement(BluetoothLEAdvertisement const&) noexcept = default;
        BluetoothLEAdvertisement(BluetoothLEAdvertisement&&) noexcept = default;
        BluetoothLEAdvertisement& operator=(BluetoothLEAdvertisement const&) & noexcept = default;
        BluetoothLEAdvertisement& operator=(BluetoothLEAdvertisement&&) & noexcept = default;
    };
    struct __declspec(empty_bases) BluetoothLEAdvertisementBytePattern : Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePattern
    {
        BluetoothLEAdvertisementBytePattern(std::nullptr_t) noexcept {}
        BluetoothLEAdvertisementBytePattern(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePattern(ptr, take_ownership_from_abi) {}
        BluetoothLEAdvertisementBytePattern();
        BluetoothLEAdvertisementBytePattern(uint8_t dataType, int16_t offset, Windows::Storage::Streams::IBuffer const& data);
        BluetoothLEAdvertisementBytePattern(BluetoothLEAdvertisementBytePattern const&) noexcept = default;
        BluetoothLEAdvertisementBytePattern(BluetoothLEAdvertisementBytePattern&&) noexcept = default;
        BluetoothLEAdvertisementBytePattern& operator=(BluetoothLEAdvertisementBytePattern const&) & noexcept = default;
        BluetoothLEAdvertisementBytePattern& operator=(BluetoothLEAdvertisementBytePattern&&) & noexcept = default;
    };
    struct __declspec(empty_bases) BluetoothLEAdvertisementDataSection : Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSection
    {
        BluetoothLEAdvertisementDataSection(std::nullptr_t) noexcept {}
        BluetoothLEAdvertisementDataSection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSection(ptr, take_ownership_from_abi) {}
        BluetoothLEAdvertisementDataSection();
        BluetoothLEAdvertisementDataSection(uint8_t dataType, Windows::Storage::Streams::IBuffer const& data);
        BluetoothLEAdvertisementDataSection(BluetoothLEAdvertisementDataSection const&) noexcept = default;
        BluetoothLEAdvertisementDataSection(BluetoothLEAdvertisementDataSection&&) noexcept = default;
        BluetoothLEAdvertisementDataSection& operator=(BluetoothLEAdvertisementDataSection const&) & noexcept = default;
        BluetoothLEAdvertisementDataSection& operator=(BluetoothLEAdvertisementDataSection&&) & noexcept = default;
    };
    struct BluetoothLEAdvertisementDataTypes
    {
        BluetoothLEAdvertisementDataTypes() = delete;
        [[nodiscard]] static auto Flags();
        [[nodiscard]] static auto IncompleteService16BitUuids();
        [[nodiscard]] static auto CompleteService16BitUuids();
        [[nodiscard]] static auto IncompleteService32BitUuids();
        [[nodiscard]] static auto CompleteService32BitUuids();
        [[nodiscard]] static auto IncompleteService128BitUuids();
        [[nodiscard]] static auto CompleteService128BitUuids();
        [[nodiscard]] static auto ShortenedLocalName();
        [[nodiscard]] static auto CompleteLocalName();
        [[nodiscard]] static auto TxPowerLevel();
        [[nodiscard]] static auto SlaveConnectionIntervalRange();
        [[nodiscard]] static auto ServiceSolicitation16BitUuids();
        [[nodiscard]] static auto ServiceSolicitation32BitUuids();
        [[nodiscard]] static auto ServiceSolicitation128BitUuids();
        [[nodiscard]] static auto ServiceData16BitUuids();
        [[nodiscard]] static auto ServiceData32BitUuids();
        [[nodiscard]] static auto ServiceData128BitUuids();
        [[nodiscard]] static auto PublicTargetAddress();
        [[nodiscard]] static auto RandomTargetAddress();
        [[nodiscard]] static auto Appearance();
        [[nodiscard]] static auto AdvertisingInterval();
        [[nodiscard]] static auto ManufacturerSpecificData();
    };
    struct __declspec(empty_bases) BluetoothLEAdvertisementFilter : Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementFilter
    {
        BluetoothLEAdvertisementFilter(std::nullptr_t) noexcept {}
        BluetoothLEAdvertisementFilter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementFilter(ptr, take_ownership_from_abi) {}
        BluetoothLEAdvertisementFilter();
        BluetoothLEAdvertisementFilter(BluetoothLEAdvertisementFilter const&) noexcept = default;
        BluetoothLEAdvertisementFilter(BluetoothLEAdvertisementFilter&&) noexcept = default;
        BluetoothLEAdvertisementFilter& operator=(BluetoothLEAdvertisementFilter const&) & noexcept = default;
        BluetoothLEAdvertisementFilter& operator=(BluetoothLEAdvertisementFilter&&) & noexcept = default;
    };
    struct __declspec(empty_bases) BluetoothLEAdvertisementPublisher : Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisher,
        impl::require<BluetoothLEAdvertisementPublisher, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisher2>
    {
        BluetoothLEAdvertisementPublisher(std::nullptr_t) noexcept {}
        BluetoothLEAdvertisementPublisher(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisher(ptr, take_ownership_from_abi) {}
        BluetoothLEAdvertisementPublisher();
        explicit BluetoothLEAdvertisementPublisher(Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisement const& advertisement);
        BluetoothLEAdvertisementPublisher(BluetoothLEAdvertisementPublisher const&) noexcept = default;
        BluetoothLEAdvertisementPublisher(BluetoothLEAdvertisementPublisher&&) noexcept = default;
        BluetoothLEAdvertisementPublisher& operator=(BluetoothLEAdvertisementPublisher const&) & noexcept = default;
        BluetoothLEAdvertisementPublisher& operator=(BluetoothLEAdvertisementPublisher&&) & noexcept = default;
    };
    struct __declspec(empty_bases) BluetoothLEAdvertisementPublisherStatusChangedEventArgs : Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisherStatusChangedEventArgs,
        impl::require<BluetoothLEAdvertisementPublisherStatusChangedEventArgs, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisherStatusChangedEventArgs2>
    {
        BluetoothLEAdvertisementPublisherStatusChangedEventArgs(std::nullptr_t) noexcept {}
        BluetoothLEAdvertisementPublisherStatusChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisherStatusChangedEventArgs(ptr, take_ownership_from_abi) {}
        BluetoothLEAdvertisementPublisherStatusChangedEventArgs(BluetoothLEAdvertisementPublisherStatusChangedEventArgs const&) noexcept = default;
        BluetoothLEAdvertisementPublisherStatusChangedEventArgs(BluetoothLEAdvertisementPublisherStatusChangedEventArgs&&) noexcept = default;
        BluetoothLEAdvertisementPublisherStatusChangedEventArgs& operator=(BluetoothLEAdvertisementPublisherStatusChangedEventArgs const&) & noexcept = default;
        BluetoothLEAdvertisementPublisherStatusChangedEventArgs& operator=(BluetoothLEAdvertisementPublisherStatusChangedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) BluetoothLEAdvertisementReceivedEventArgs : Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs,
        impl::require<BluetoothLEAdvertisementReceivedEventArgs, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs2>
    {
        BluetoothLEAdvertisementReceivedEventArgs(std::nullptr_t) noexcept {}
        BluetoothLEAdvertisementReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs(ptr, take_ownership_from_abi) {}
        BluetoothLEAdvertisementReceivedEventArgs(BluetoothLEAdvertisementReceivedEventArgs const&) noexcept = default;
        BluetoothLEAdvertisementReceivedEventArgs(BluetoothLEAdvertisementReceivedEventArgs&&) noexcept = default;
        BluetoothLEAdvertisementReceivedEventArgs& operator=(BluetoothLEAdvertisementReceivedEventArgs const&) & noexcept = default;
        BluetoothLEAdvertisementReceivedEventArgs& operator=(BluetoothLEAdvertisementReceivedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) BluetoothLEAdvertisementWatcher : Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher,
        impl::require<BluetoothLEAdvertisementWatcher, Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher2>
    {
        BluetoothLEAdvertisementWatcher(std::nullptr_t) noexcept {}
        BluetoothLEAdvertisementWatcher(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher(ptr, take_ownership_from_abi) {}
        BluetoothLEAdvertisementWatcher();
        explicit BluetoothLEAdvertisementWatcher(Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFilter const& advertisementFilter);
        BluetoothLEAdvertisementWatcher(BluetoothLEAdvertisementWatcher const&) noexcept = default;
        BluetoothLEAdvertisementWatcher(BluetoothLEAdvertisementWatcher&&) noexcept = default;
        BluetoothLEAdvertisementWatcher& operator=(BluetoothLEAdvertisementWatcher const&) & noexcept = default;
        BluetoothLEAdvertisementWatcher& operator=(BluetoothLEAdvertisementWatcher&&) & noexcept = default;
    };
    struct __declspec(empty_bases) BluetoothLEAdvertisementWatcherStoppedEventArgs : Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcherStoppedEventArgs
    {
        BluetoothLEAdvertisementWatcherStoppedEventArgs(std::nullptr_t) noexcept {}
        BluetoothLEAdvertisementWatcherStoppedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcherStoppedEventArgs(ptr, take_ownership_from_abi) {}
        BluetoothLEAdvertisementWatcherStoppedEventArgs(BluetoothLEAdvertisementWatcherStoppedEventArgs const&) noexcept = default;
        BluetoothLEAdvertisementWatcherStoppedEventArgs(BluetoothLEAdvertisementWatcherStoppedEventArgs&&) noexcept = default;
        BluetoothLEAdvertisementWatcherStoppedEventArgs& operator=(BluetoothLEAdvertisementWatcherStoppedEventArgs const&) & noexcept = default;
        BluetoothLEAdvertisementWatcherStoppedEventArgs& operator=(BluetoothLEAdvertisementWatcherStoppedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) BluetoothLEManufacturerData : Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerData
    {
        BluetoothLEManufacturerData(std::nullptr_t) noexcept {}
        BluetoothLEManufacturerData(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerData(ptr, take_ownership_from_abi) {}
        BluetoothLEManufacturerData();
        BluetoothLEManufacturerData(uint16_t companyId, Windows::Storage::Streams::IBuffer const& data);
        BluetoothLEManufacturerData(BluetoothLEManufacturerData const&) noexcept = default;
        BluetoothLEManufacturerData(BluetoothLEManufacturerData&&) noexcept = default;
        BluetoothLEManufacturerData& operator=(BluetoothLEManufacturerData const&) & noexcept = default;
        BluetoothLEManufacturerData& operator=(BluetoothLEManufacturerData&&) & noexcept = default;
    };
}
#endif

// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210312.4

#ifndef WINRT_Windows_Devices_Geolocation_Geofencing_2_H
#define WINRT_Windows_Devices_Geolocation_Geofencing_2_H
#include "winrt/impl/Windows.Devices.Geolocation.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Devices.Geolocation.Geofencing.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Geolocation::Geofencing
{
    struct __declspec(empty_bases) Geofence : Windows::Devices::Geolocation::Geofencing::IGeofence
    {
        Geofence(std::nullptr_t) noexcept {}
        Geofence(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Geolocation::Geofencing::IGeofence(ptr, take_ownership_from_abi) {}
        Geofence(param::hstring const& id, Windows::Devices::Geolocation::IGeoshape const& geoshape);
        Geofence(param::hstring const& id, Windows::Devices::Geolocation::IGeoshape const& geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates const& monitoredStates, bool singleUse);
        Geofence(param::hstring const& id, Windows::Devices::Geolocation::IGeoshape const& geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates const& monitoredStates, bool singleUse, Windows::Foundation::TimeSpan const& dwellTime);
        Geofence(param::hstring const& id, Windows::Devices::Geolocation::IGeoshape const& geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates const& monitoredStates, bool singleUse, Windows::Foundation::TimeSpan const& dwellTime, Windows::Foundation::DateTime const& startTime, Windows::Foundation::TimeSpan const& duration);
        Geofence(Geofence const&) noexcept = default;
        Geofence(Geofence&&) noexcept = default;
        Geofence& operator=(Geofence const&) & noexcept = default;
        Geofence& operator=(Geofence&&) & noexcept = default;
    };
    struct __declspec(empty_bases) GeofenceMonitor : Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor
    {
        GeofenceMonitor(std::nullptr_t) noexcept {}
        GeofenceMonitor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor(ptr, take_ownership_from_abi) {}
        GeofenceMonitor(GeofenceMonitor const&) noexcept = default;
        GeofenceMonitor(GeofenceMonitor&&) noexcept = default;
        GeofenceMonitor& operator=(GeofenceMonitor const&) & noexcept = default;
        GeofenceMonitor& operator=(GeofenceMonitor&&) & noexcept = default;
        [[nodiscard]] static auto Current();
    };
    struct __declspec(empty_bases) GeofenceStateChangeReport : Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport
    {
        GeofenceStateChangeReport(std::nullptr_t) noexcept {}
        GeofenceStateChangeReport(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport(ptr, take_ownership_from_abi) {}
        GeofenceStateChangeReport(GeofenceStateChangeReport const&) noexcept = default;
        GeofenceStateChangeReport(GeofenceStateChangeReport&&) noexcept = default;
        GeofenceStateChangeReport& operator=(GeofenceStateChangeReport const&) & noexcept = default;
        GeofenceStateChangeReport& operator=(GeofenceStateChangeReport&&) & noexcept = default;
    };
}
#endif

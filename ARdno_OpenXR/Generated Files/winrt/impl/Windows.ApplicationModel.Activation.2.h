// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210312.4

#ifndef WINRT_Windows_ApplicationModel_Activation_2_H
#define WINRT_Windows_ApplicationModel_Activation_2_H
#include "winrt/impl/Windows.ApplicationModel.Activation.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Activation
{
    struct __declspec(empty_bases) AppointmentsProviderAddAppointmentActivatedEventArgs : Windows::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs,
        impl::require<AppointmentsProviderAddAppointmentActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        AppointmentsProviderAddAppointmentActivatedEventArgs(std::nullptr_t) noexcept {}
        AppointmentsProviderAddAppointmentActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IAppointmentsProviderAddAppointmentActivatedEventArgs(ptr, take_ownership_from_abi) {}
        AppointmentsProviderAddAppointmentActivatedEventArgs(AppointmentsProviderAddAppointmentActivatedEventArgs const&) noexcept = default;
        AppointmentsProviderAddAppointmentActivatedEventArgs(AppointmentsProviderAddAppointmentActivatedEventArgs&&) noexcept = default;
        AppointmentsProviderAddAppointmentActivatedEventArgs& operator=(AppointmentsProviderAddAppointmentActivatedEventArgs const&) & noexcept = default;
        AppointmentsProviderAddAppointmentActivatedEventArgs& operator=(AppointmentsProviderAddAppointmentActivatedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AppointmentsProviderRemoveAppointmentActivatedEventArgs : Windows::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs,
        impl::require<AppointmentsProviderRemoveAppointmentActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        AppointmentsProviderRemoveAppointmentActivatedEventArgs(std::nullptr_t) noexcept {}
        AppointmentsProviderRemoveAppointmentActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IAppointmentsProviderRemoveAppointmentActivatedEventArgs(ptr, take_ownership_from_abi) {}
        AppointmentsProviderRemoveAppointmentActivatedEventArgs(AppointmentsProviderRemoveAppointmentActivatedEventArgs const&) noexcept = default;
        AppointmentsProviderRemoveAppointmentActivatedEventArgs(AppointmentsProviderRemoveAppointmentActivatedEventArgs&&) noexcept = default;
        AppointmentsProviderRemoveAppointmentActivatedEventArgs& operator=(AppointmentsProviderRemoveAppointmentActivatedEventArgs const&) & noexcept = default;
        AppointmentsProviderRemoveAppointmentActivatedEventArgs& operator=(AppointmentsProviderRemoveAppointmentActivatedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AppointmentsProviderReplaceAppointmentActivatedEventArgs : Windows::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs,
        impl::require<AppointmentsProviderReplaceAppointmentActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        AppointmentsProviderReplaceAppointmentActivatedEventArgs(std::nullptr_t) noexcept {}
        AppointmentsProviderReplaceAppointmentActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IAppointmentsProviderReplaceAppointmentActivatedEventArgs(ptr, take_ownership_from_abi) {}
        AppointmentsProviderReplaceAppointmentActivatedEventArgs(AppointmentsProviderReplaceAppointmentActivatedEventArgs const&) noexcept = default;
        AppointmentsProviderReplaceAppointmentActivatedEventArgs(AppointmentsProviderReplaceAppointmentActivatedEventArgs&&) noexcept = default;
        AppointmentsProviderReplaceAppointmentActivatedEventArgs& operator=(AppointmentsProviderReplaceAppointmentActivatedEventArgs const&) & noexcept = default;
        AppointmentsProviderReplaceAppointmentActivatedEventArgs& operator=(AppointmentsProviderReplaceAppointmentActivatedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AppointmentsProviderShowAppointmentDetailsActivatedEventArgs : Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs,
        impl::require<AppointmentsProviderShowAppointmentDetailsActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        AppointmentsProviderShowAppointmentDetailsActivatedEventArgs(std::nullptr_t) noexcept {}
        AppointmentsProviderShowAppointmentDetailsActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IAppointmentsProviderShowAppointmentDetailsActivatedEventArgs(ptr, take_ownership_from_abi) {}
        AppointmentsProviderShowAppointmentDetailsActivatedEventArgs(AppointmentsProviderShowAppointmentDetailsActivatedEventArgs const&) noexcept = default;
        AppointmentsProviderShowAppointmentDetailsActivatedEventArgs(AppointmentsProviderShowAppointmentDetailsActivatedEventArgs&&) noexcept = default;
        AppointmentsProviderShowAppointmentDetailsActivatedEventArgs& operator=(AppointmentsProviderShowAppointmentDetailsActivatedEventArgs const&) & noexcept = default;
        AppointmentsProviderShowAppointmentDetailsActivatedEventArgs& operator=(AppointmentsProviderShowAppointmentDetailsActivatedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AppointmentsProviderShowTimeFrameActivatedEventArgs : Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs,
        impl::require<AppointmentsProviderShowTimeFrameActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        AppointmentsProviderShowTimeFrameActivatedEventArgs(std::nullptr_t) noexcept {}
        AppointmentsProviderShowTimeFrameActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IAppointmentsProviderShowTimeFrameActivatedEventArgs(ptr, take_ownership_from_abi) {}
        AppointmentsProviderShowTimeFrameActivatedEventArgs(AppointmentsProviderShowTimeFrameActivatedEventArgs const&) noexcept = default;
        AppointmentsProviderShowTimeFrameActivatedEventArgs(AppointmentsProviderShowTimeFrameActivatedEventArgs&&) noexcept = default;
        AppointmentsProviderShowTimeFrameActivatedEventArgs& operator=(AppointmentsProviderShowTimeFrameActivatedEventArgs const&) & noexcept = default;
        AppointmentsProviderShowTimeFrameActivatedEventArgs& operator=(AppointmentsProviderShowTimeFrameActivatedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) BackgroundActivatedEventArgs : Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs
    {
        BackgroundActivatedEventArgs(std::nullptr_t) noexcept {}
        BackgroundActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IBackgroundActivatedEventArgs(ptr, take_ownership_from_abi) {}
        BackgroundActivatedEventArgs(BackgroundActivatedEventArgs const&) noexcept = default;
        BackgroundActivatedEventArgs(BackgroundActivatedEventArgs&&) noexcept = default;
        BackgroundActivatedEventArgs& operator=(BackgroundActivatedEventArgs const&) & noexcept = default;
        BackgroundActivatedEventArgs& operator=(BackgroundActivatedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) BarcodeScannerPreviewActivatedEventArgs : Windows::ApplicationModel::Activation::IBarcodeScannerPreviewActivatedEventArgs,
        impl::require<BarcodeScannerPreviewActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        BarcodeScannerPreviewActivatedEventArgs(std::nullptr_t) noexcept {}
        BarcodeScannerPreviewActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IBarcodeScannerPreviewActivatedEventArgs(ptr, take_ownership_from_abi) {}
        BarcodeScannerPreviewActivatedEventArgs(BarcodeScannerPreviewActivatedEventArgs const&) noexcept = default;
        BarcodeScannerPreviewActivatedEventArgs(BarcodeScannerPreviewActivatedEventArgs&&) noexcept = default;
        BarcodeScannerPreviewActivatedEventArgs& operator=(BarcodeScannerPreviewActivatedEventArgs const&) & noexcept = default;
        BarcodeScannerPreviewActivatedEventArgs& operator=(BarcodeScannerPreviewActivatedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) CachedFileUpdaterActivatedEventArgs : Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs,
        impl::require<CachedFileUpdaterActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        CachedFileUpdaterActivatedEventArgs(std::nullptr_t) noexcept {}
        CachedFileUpdaterActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::ICachedFileUpdaterActivatedEventArgs(ptr, take_ownership_from_abi) {}
        CachedFileUpdaterActivatedEventArgs(CachedFileUpdaterActivatedEventArgs const&) noexcept = default;
        CachedFileUpdaterActivatedEventArgs(CachedFileUpdaterActivatedEventArgs&&) noexcept = default;
        CachedFileUpdaterActivatedEventArgs& operator=(CachedFileUpdaterActivatedEventArgs const&) & noexcept = default;
        CachedFileUpdaterActivatedEventArgs& operator=(CachedFileUpdaterActivatedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) CommandLineActivatedEventArgs : Windows::ApplicationModel::Activation::ICommandLineActivatedEventArgs,
        impl::require<CommandLineActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        CommandLineActivatedEventArgs(std::nullptr_t) noexcept {}
        CommandLineActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::ICommandLineActivatedEventArgs(ptr, take_ownership_from_abi) {}
        CommandLineActivatedEventArgs(CommandLineActivatedEventArgs const&) noexcept = default;
        CommandLineActivatedEventArgs(CommandLineActivatedEventArgs&&) noexcept = default;
        CommandLineActivatedEventArgs& operator=(CommandLineActivatedEventArgs const&) & noexcept = default;
        CommandLineActivatedEventArgs& operator=(CommandLineActivatedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) CommandLineActivationOperation : Windows::ApplicationModel::Activation::ICommandLineActivationOperation
    {
        CommandLineActivationOperation(std::nullptr_t) noexcept {}
        CommandLineActivationOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::ICommandLineActivationOperation(ptr, take_ownership_from_abi) {}
        CommandLineActivationOperation(CommandLineActivationOperation const&) noexcept = default;
        CommandLineActivationOperation(CommandLineActivationOperation&&) noexcept = default;
        CommandLineActivationOperation& operator=(CommandLineActivationOperation const&) & noexcept = default;
        CommandLineActivationOperation& operator=(CommandLineActivationOperation&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ContactPanelActivatedEventArgs : Windows::ApplicationModel::Activation::IContactPanelActivatedEventArgs,
        impl::require<ContactPanelActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        ContactPanelActivatedEventArgs(std::nullptr_t) noexcept {}
        ContactPanelActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IContactPanelActivatedEventArgs(ptr, take_ownership_from_abi) {}
        ContactPanelActivatedEventArgs(ContactPanelActivatedEventArgs const&) noexcept = default;
        ContactPanelActivatedEventArgs(ContactPanelActivatedEventArgs&&) noexcept = default;
        ContactPanelActivatedEventArgs& operator=(ContactPanelActivatedEventArgs const&) & noexcept = default;
        ContactPanelActivatedEventArgs& operator=(ContactPanelActivatedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) DeviceActivatedEventArgs : Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs,
        impl::require<DeviceActivatedEventArgs, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::ApplicationModel::Activation::IViewSwitcherProvider, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        DeviceActivatedEventArgs(std::nullptr_t) noexcept {}
        DeviceActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IDeviceActivatedEventArgs(ptr, take_ownership_from_abi) {}
        DeviceActivatedEventArgs(DeviceActivatedEventArgs const&) noexcept = default;
        DeviceActivatedEventArgs(DeviceActivatedEventArgs&&) noexcept = default;
        DeviceActivatedEventArgs& operator=(DeviceActivatedEventArgs const&) & noexcept = default;
        DeviceActivatedEventArgs& operator=(DeviceActivatedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) DevicePairingActivatedEventArgs : Windows::ApplicationModel::Activation::IDevicePairingActivatedEventArgs,
        impl::require<DevicePairingActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        DevicePairingActivatedEventArgs(std::nullptr_t) noexcept {}
        DevicePairingActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IDevicePairingActivatedEventArgs(ptr, take_ownership_from_abi) {}
        DevicePairingActivatedEventArgs(DevicePairingActivatedEventArgs const&) noexcept = default;
        DevicePairingActivatedEventArgs(DevicePairingActivatedEventArgs&&) noexcept = default;
        DevicePairingActivatedEventArgs& operator=(DevicePairingActivatedEventArgs const&) & noexcept = default;
        DevicePairingActivatedEventArgs& operator=(DevicePairingActivatedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) DialReceiverActivatedEventArgs : Windows::ApplicationModel::Activation::IDialReceiverActivatedEventArgs,
        impl::require<DialReceiverActivatedEventArgs, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::ApplicationModel::Activation::IViewSwitcherProvider, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        DialReceiverActivatedEventArgs(std::nullptr_t) noexcept {}
        DialReceiverActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IDialReceiverActivatedEventArgs(ptr, take_ownership_from_abi) {}
        DialReceiverActivatedEventArgs(DialReceiverActivatedEventArgs const&) noexcept = default;
        DialReceiverActivatedEventArgs(DialReceiverActivatedEventArgs&&) noexcept = default;
        DialReceiverActivatedEventArgs& operator=(DialReceiverActivatedEventArgs const&) & noexcept = default;
        DialReceiverActivatedEventArgs& operator=(DialReceiverActivatedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) FileActivatedEventArgs : Windows::ApplicationModel::Activation::IFileActivatedEventArgs,
        impl::require<FileActivatedEventArgs, Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithNeighboringFiles, Windows::ApplicationModel::Activation::IFileActivatedEventArgsWithCallerPackageFamilyName, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::ApplicationModel::Activation::IViewSwitcherProvider, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        FileActivatedEventArgs(std::nullptr_t) noexcept {}
        FileActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IFileActivatedEventArgs(ptr, take_ownership_from_abi) {}
        FileActivatedEventArgs(FileActivatedEventArgs const&) noexcept = default;
        FileActivatedEventArgs(FileActivatedEventArgs&&) noexcept = default;
        FileActivatedEventArgs& operator=(FileActivatedEventArgs const&) & noexcept = default;
        FileActivatedEventArgs& operator=(FileActivatedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) FileOpenPickerActivatedEventArgs : Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs,
        impl::require<FileOpenPickerActivatedEventArgs, Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs2, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        FileOpenPickerActivatedEventArgs(std::nullptr_t) noexcept {}
        FileOpenPickerActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IFileOpenPickerActivatedEventArgs(ptr, take_ownership_from_abi) {}
        FileOpenPickerActivatedEventArgs(FileOpenPickerActivatedEventArgs const&) noexcept = default;
        FileOpenPickerActivatedEventArgs(FileOpenPickerActivatedEventArgs&&) noexcept = default;
        FileOpenPickerActivatedEventArgs& operator=(FileOpenPickerActivatedEventArgs const&) & noexcept = default;
        FileOpenPickerActivatedEventArgs& operator=(FileOpenPickerActivatedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) FileOpenPickerContinuationEventArgs : Windows::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs,
        impl::require<FileOpenPickerContinuationEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        FileOpenPickerContinuationEventArgs(std::nullptr_t) noexcept {}
        FileOpenPickerContinuationEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IFileOpenPickerContinuationEventArgs(ptr, take_ownership_from_abi) {}
        FileOpenPickerContinuationEventArgs(FileOpenPickerContinuationEventArgs const&) noexcept = default;
        FileOpenPickerContinuationEventArgs(FileOpenPickerContinuationEventArgs&&) noexcept = default;
        FileOpenPickerContinuationEventArgs& operator=(FileOpenPickerContinuationEventArgs const&) & noexcept = default;
        FileOpenPickerContinuationEventArgs& operator=(FileOpenPickerContinuationEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) FileSavePickerActivatedEventArgs : Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs,
        impl::require<FileSavePickerActivatedEventArgs, Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs2, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        FileSavePickerActivatedEventArgs(std::nullptr_t) noexcept {}
        FileSavePickerActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IFileSavePickerActivatedEventArgs(ptr, take_ownership_from_abi) {}
        FileSavePickerActivatedEventArgs(FileSavePickerActivatedEventArgs const&) noexcept = default;
        FileSavePickerActivatedEventArgs(FileSavePickerActivatedEventArgs&&) noexcept = default;
        FileSavePickerActivatedEventArgs& operator=(FileSavePickerActivatedEventArgs const&) & noexcept = default;
        FileSavePickerActivatedEventArgs& operator=(FileSavePickerActivatedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) FileSavePickerContinuationEventArgs : Windows::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs,
        impl::require<FileSavePickerContinuationEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        FileSavePickerContinuationEventArgs(std::nullptr_t) noexcept {}
        FileSavePickerContinuationEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IFileSavePickerContinuationEventArgs(ptr, take_ownership_from_abi) {}
        FileSavePickerContinuationEventArgs(FileSavePickerContinuationEventArgs const&) noexcept = default;
        FileSavePickerContinuationEventArgs(FileSavePickerContinuationEventArgs&&) noexcept = default;
        FileSavePickerContinuationEventArgs& operator=(FileSavePickerContinuationEventArgs const&) & noexcept = default;
        FileSavePickerContinuationEventArgs& operator=(FileSavePickerContinuationEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) FolderPickerContinuationEventArgs : Windows::ApplicationModel::Activation::IFolderPickerContinuationEventArgs,
        impl::require<FolderPickerContinuationEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        FolderPickerContinuationEventArgs(std::nullptr_t) noexcept {}
        FolderPickerContinuationEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IFolderPickerContinuationEventArgs(ptr, take_ownership_from_abi) {}
        FolderPickerContinuationEventArgs(FolderPickerContinuationEventArgs const&) noexcept = default;
        FolderPickerContinuationEventArgs(FolderPickerContinuationEventArgs&&) noexcept = default;
        FolderPickerContinuationEventArgs& operator=(FolderPickerContinuationEventArgs const&) & noexcept = default;
        FolderPickerContinuationEventArgs& operator=(FolderPickerContinuationEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) LaunchActivatedEventArgs : Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,
        impl::require<LaunchActivatedEventArgs, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs, Windows::ApplicationModel::Activation::IViewSwitcherProvider, Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        LaunchActivatedEventArgs(std::nullptr_t) noexcept {}
        LaunchActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs(ptr, take_ownership_from_abi) {}
        LaunchActivatedEventArgs(LaunchActivatedEventArgs const&) noexcept = default;
        LaunchActivatedEventArgs(LaunchActivatedEventArgs&&) noexcept = default;
        LaunchActivatedEventArgs& operator=(LaunchActivatedEventArgs const&) & noexcept = default;
        LaunchActivatedEventArgs& operator=(LaunchActivatedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) LockScreenActivatedEventArgs : Windows::ApplicationModel::Activation::ILockScreenActivatedEventArgs,
        impl::require<LockScreenActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        LockScreenActivatedEventArgs(std::nullptr_t) noexcept {}
        LockScreenActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::ILockScreenActivatedEventArgs(ptr, take_ownership_from_abi) {}
        LockScreenActivatedEventArgs(LockScreenActivatedEventArgs const&) noexcept = default;
        LockScreenActivatedEventArgs(LockScreenActivatedEventArgs&&) noexcept = default;
        LockScreenActivatedEventArgs& operator=(LockScreenActivatedEventArgs const&) & noexcept = default;
        LockScreenActivatedEventArgs& operator=(LockScreenActivatedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) LockScreenComponentActivatedEventArgs : Windows::ApplicationModel::Activation::IActivatedEventArgs
    {
        LockScreenComponentActivatedEventArgs(std::nullptr_t) noexcept {}
        LockScreenComponentActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IActivatedEventArgs(ptr, take_ownership_from_abi) {}
        LockScreenComponentActivatedEventArgs(LockScreenComponentActivatedEventArgs const&) noexcept = default;
        LockScreenComponentActivatedEventArgs(LockScreenComponentActivatedEventArgs&&) noexcept = default;
        LockScreenComponentActivatedEventArgs& operator=(LockScreenComponentActivatedEventArgs const&) & noexcept = default;
        LockScreenComponentActivatedEventArgs& operator=(LockScreenComponentActivatedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) PickerReturnedActivatedEventArgs : Windows::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs
    {
        PickerReturnedActivatedEventArgs(std::nullptr_t) noexcept {}
        PickerReturnedActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IPickerReturnedActivatedEventArgs(ptr, take_ownership_from_abi) {}
        PickerReturnedActivatedEventArgs(PickerReturnedActivatedEventArgs const&) noexcept = default;
        PickerReturnedActivatedEventArgs(PickerReturnedActivatedEventArgs&&) noexcept = default;
        PickerReturnedActivatedEventArgs& operator=(PickerReturnedActivatedEventArgs const&) & noexcept = default;
        PickerReturnedActivatedEventArgs& operator=(PickerReturnedActivatedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ProtocolActivatedEventArgs : Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs,
        impl::require<ProtocolActivatedEventArgs, Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::ApplicationModel::Activation::IViewSwitcherProvider, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        ProtocolActivatedEventArgs(std::nullptr_t) noexcept {}
        ProtocolActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs(ptr, take_ownership_from_abi) {}
        ProtocolActivatedEventArgs(ProtocolActivatedEventArgs const&) noexcept = default;
        ProtocolActivatedEventArgs(ProtocolActivatedEventArgs&&) noexcept = default;
        ProtocolActivatedEventArgs& operator=(ProtocolActivatedEventArgs const&) & noexcept = default;
        ProtocolActivatedEventArgs& operator=(ProtocolActivatedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ProtocolForResultsActivatedEventArgs : Windows::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs,
        impl::require<ProtocolForResultsActivatedEventArgs, Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs, Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::ApplicationModel::Activation::IViewSwitcherProvider, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        ProtocolForResultsActivatedEventArgs(std::nullptr_t) noexcept {}
        ProtocolForResultsActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IProtocolForResultsActivatedEventArgs(ptr, take_ownership_from_abi) {}
        ProtocolForResultsActivatedEventArgs(ProtocolForResultsActivatedEventArgs const&) noexcept = default;
        ProtocolForResultsActivatedEventArgs(ProtocolForResultsActivatedEventArgs&&) noexcept = default;
        ProtocolForResultsActivatedEventArgs& operator=(ProtocolForResultsActivatedEventArgs const&) & noexcept = default;
        ProtocolForResultsActivatedEventArgs& operator=(ProtocolForResultsActivatedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) RestrictedLaunchActivatedEventArgs : Windows::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs,
        impl::require<RestrictedLaunchActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        RestrictedLaunchActivatedEventArgs(std::nullptr_t) noexcept {}
        RestrictedLaunchActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IRestrictedLaunchActivatedEventArgs(ptr, take_ownership_from_abi) {}
        RestrictedLaunchActivatedEventArgs(RestrictedLaunchActivatedEventArgs const&) noexcept = default;
        RestrictedLaunchActivatedEventArgs(RestrictedLaunchActivatedEventArgs&&) noexcept = default;
        RestrictedLaunchActivatedEventArgs& operator=(RestrictedLaunchActivatedEventArgs const&) & noexcept = default;
        RestrictedLaunchActivatedEventArgs& operator=(RestrictedLaunchActivatedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SearchActivatedEventArgs : Windows::ApplicationModel::Activation::ISearchActivatedEventArgs,
        impl::require<SearchActivatedEventArgs, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs, Windows::ApplicationModel::Activation::ISearchActivatedEventArgsWithLinguisticDetails, Windows::ApplicationModel::Activation::IViewSwitcherProvider, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        SearchActivatedEventArgs(std::nullptr_t) noexcept {}
        SearchActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::ISearchActivatedEventArgs(ptr, take_ownership_from_abi) {}
        SearchActivatedEventArgs(SearchActivatedEventArgs const&) noexcept = default;
        SearchActivatedEventArgs(SearchActivatedEventArgs&&) noexcept = default;
        SearchActivatedEventArgs& operator=(SearchActivatedEventArgs const&) & noexcept = default;
        SearchActivatedEventArgs& operator=(SearchActivatedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ShareTargetActivatedEventArgs : Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs,
        impl::require<ShareTargetActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        ShareTargetActivatedEventArgs(std::nullptr_t) noexcept {}
        ShareTargetActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IShareTargetActivatedEventArgs(ptr, take_ownership_from_abi) {}
        ShareTargetActivatedEventArgs(ShareTargetActivatedEventArgs const&) noexcept = default;
        ShareTargetActivatedEventArgs(ShareTargetActivatedEventArgs&&) noexcept = default;
        ShareTargetActivatedEventArgs& operator=(ShareTargetActivatedEventArgs const&) & noexcept = default;
        ShareTargetActivatedEventArgs& operator=(ShareTargetActivatedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SplashScreen : Windows::ApplicationModel::Activation::ISplashScreen
    {
        SplashScreen(std::nullptr_t) noexcept {}
        SplashScreen(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::ISplashScreen(ptr, take_ownership_from_abi) {}
        SplashScreen(SplashScreen const&) noexcept = default;
        SplashScreen(SplashScreen&&) noexcept = default;
        SplashScreen& operator=(SplashScreen const&) & noexcept = default;
        SplashScreen& operator=(SplashScreen&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StartupTaskActivatedEventArgs : Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs,
        impl::require<StartupTaskActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        StartupTaskActivatedEventArgs(std::nullptr_t) noexcept {}
        StartupTaskActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs(ptr, take_ownership_from_abi) {}
        StartupTaskActivatedEventArgs(StartupTaskActivatedEventArgs const&) noexcept = default;
        StartupTaskActivatedEventArgs(StartupTaskActivatedEventArgs&&) noexcept = default;
        StartupTaskActivatedEventArgs& operator=(StartupTaskActivatedEventArgs const&) & noexcept = default;
        StartupTaskActivatedEventArgs& operator=(StartupTaskActivatedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) TileActivatedInfo : Windows::ApplicationModel::Activation::ITileActivatedInfo
    {
        TileActivatedInfo(std::nullptr_t) noexcept {}
        TileActivatedInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::ITileActivatedInfo(ptr, take_ownership_from_abi) {}
        TileActivatedInfo(TileActivatedInfo const&) noexcept = default;
        TileActivatedInfo(TileActivatedInfo&&) noexcept = default;
        TileActivatedInfo& operator=(TileActivatedInfo const&) & noexcept = default;
        TileActivatedInfo& operator=(TileActivatedInfo&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ToastNotificationActivatedEventArgs : Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs,
        impl::require<ToastNotificationActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser, Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs>
    {
        ToastNotificationActivatedEventArgs(std::nullptr_t) noexcept {}
        ToastNotificationActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IToastNotificationActivatedEventArgs(ptr, take_ownership_from_abi) {}
        ToastNotificationActivatedEventArgs(ToastNotificationActivatedEventArgs const&) noexcept = default;
        ToastNotificationActivatedEventArgs(ToastNotificationActivatedEventArgs&&) noexcept = default;
        ToastNotificationActivatedEventArgs& operator=(ToastNotificationActivatedEventArgs const&) & noexcept = default;
        ToastNotificationActivatedEventArgs& operator=(ToastNotificationActivatedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) UserDataAccountProviderActivatedEventArgs : Windows::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs
    {
        UserDataAccountProviderActivatedEventArgs(std::nullptr_t) noexcept {}
        UserDataAccountProviderActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IUserDataAccountProviderActivatedEventArgs(ptr, take_ownership_from_abi) {}
        UserDataAccountProviderActivatedEventArgs(UserDataAccountProviderActivatedEventArgs const&) noexcept = default;
        UserDataAccountProviderActivatedEventArgs(UserDataAccountProviderActivatedEventArgs&&) noexcept = default;
        UserDataAccountProviderActivatedEventArgs& operator=(UserDataAccountProviderActivatedEventArgs const&) & noexcept = default;
        UserDataAccountProviderActivatedEventArgs& operator=(UserDataAccountProviderActivatedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) VoiceCommandActivatedEventArgs : Windows::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs,
        impl::require<VoiceCommandActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        VoiceCommandActivatedEventArgs(std::nullptr_t) noexcept {}
        VoiceCommandActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IVoiceCommandActivatedEventArgs(ptr, take_ownership_from_abi) {}
        VoiceCommandActivatedEventArgs(VoiceCommandActivatedEventArgs const&) noexcept = default;
        VoiceCommandActivatedEventArgs(VoiceCommandActivatedEventArgs&&) noexcept = default;
        VoiceCommandActivatedEventArgs& operator=(VoiceCommandActivatedEventArgs const&) & noexcept = default;
        VoiceCommandActivatedEventArgs& operator=(VoiceCommandActivatedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) WebAccountProviderActivatedEventArgs : Windows::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs,
        impl::require<WebAccountProviderActivatedEventArgs, Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    {
        WebAccountProviderActivatedEventArgs(std::nullptr_t) noexcept {}
        WebAccountProviderActivatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IWebAccountProviderActivatedEventArgs(ptr, take_ownership_from_abi) {}
        WebAccountProviderActivatedEventArgs(WebAccountProviderActivatedEventArgs const&) noexcept = default;
        WebAccountProviderActivatedEventArgs(WebAccountProviderActivatedEventArgs&&) noexcept = default;
        WebAccountProviderActivatedEventArgs& operator=(WebAccountProviderActivatedEventArgs const&) & noexcept = default;
        WebAccountProviderActivatedEventArgs& operator=(WebAccountProviderActivatedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) WebAuthenticationBrokerContinuationEventArgs : Windows::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs
    {
        WebAuthenticationBrokerContinuationEventArgs(std::nullptr_t) noexcept {}
        WebAuthenticationBrokerContinuationEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Activation::IWebAuthenticationBrokerContinuationEventArgs(ptr, take_ownership_from_abi) {}
        WebAuthenticationBrokerContinuationEventArgs(WebAuthenticationBrokerContinuationEventArgs const&) noexcept = default;
        WebAuthenticationBrokerContinuationEventArgs(WebAuthenticationBrokerContinuationEventArgs&&) noexcept = default;
        WebAuthenticationBrokerContinuationEventArgs& operator=(WebAuthenticationBrokerContinuationEventArgs const&) & noexcept = default;
        WebAuthenticationBrokerContinuationEventArgs& operator=(WebAuthenticationBrokerContinuationEventArgs&&) & noexcept = default;
    };
}
#endif

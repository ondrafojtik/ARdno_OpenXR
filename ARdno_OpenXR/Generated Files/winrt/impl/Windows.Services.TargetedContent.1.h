// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210312.4

#ifndef WINRT_Windows_Services_TargetedContent_1_H
#define WINRT_Windows_Services_TargetedContent_1_H
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Services.TargetedContent.0.h"
WINRT_EXPORT namespace winrt::Windows::Services::TargetedContent
{
    struct __declspec(empty_bases) ITargetedContentAction :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITargetedContentAction>
    {
        ITargetedContentAction(std::nullptr_t = nullptr) noexcept {}
        ITargetedContentAction(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ITargetedContentAction(ITargetedContentAction const&) noexcept = default;
        ITargetedContentAction(ITargetedContentAction&&) noexcept = default;
        ITargetedContentAction& operator=(ITargetedContentAction const&) & noexcept = default;
        ITargetedContentAction& operator=(ITargetedContentAction&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ITargetedContentAvailabilityChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITargetedContentAvailabilityChangedEventArgs>
    {
        ITargetedContentAvailabilityChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ITargetedContentAvailabilityChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ITargetedContentAvailabilityChangedEventArgs(ITargetedContentAvailabilityChangedEventArgs const&) noexcept = default;
        ITargetedContentAvailabilityChangedEventArgs(ITargetedContentAvailabilityChangedEventArgs&&) noexcept = default;
        ITargetedContentAvailabilityChangedEventArgs& operator=(ITargetedContentAvailabilityChangedEventArgs const&) & noexcept = default;
        ITargetedContentAvailabilityChangedEventArgs& operator=(ITargetedContentAvailabilityChangedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ITargetedContentChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITargetedContentChangedEventArgs>
    {
        ITargetedContentChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ITargetedContentChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ITargetedContentChangedEventArgs(ITargetedContentChangedEventArgs const&) noexcept = default;
        ITargetedContentChangedEventArgs(ITargetedContentChangedEventArgs&&) noexcept = default;
        ITargetedContentChangedEventArgs& operator=(ITargetedContentChangedEventArgs const&) & noexcept = default;
        ITargetedContentChangedEventArgs& operator=(ITargetedContentChangedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ITargetedContentCollection :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITargetedContentCollection>
    {
        ITargetedContentCollection(std::nullptr_t = nullptr) noexcept {}
        ITargetedContentCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ITargetedContentCollection(ITargetedContentCollection const&) noexcept = default;
        ITargetedContentCollection(ITargetedContentCollection&&) noexcept = default;
        ITargetedContentCollection& operator=(ITargetedContentCollection const&) & noexcept = default;
        ITargetedContentCollection& operator=(ITargetedContentCollection&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ITargetedContentContainer :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITargetedContentContainer>
    {
        ITargetedContentContainer(std::nullptr_t = nullptr) noexcept {}
        ITargetedContentContainer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ITargetedContentContainer(ITargetedContentContainer const&) noexcept = default;
        ITargetedContentContainer(ITargetedContentContainer&&) noexcept = default;
        ITargetedContentContainer& operator=(ITargetedContentContainer const&) & noexcept = default;
        ITargetedContentContainer& operator=(ITargetedContentContainer&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ITargetedContentContainerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITargetedContentContainerStatics>
    {
        ITargetedContentContainerStatics(std::nullptr_t = nullptr) noexcept {}
        ITargetedContentContainerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ITargetedContentContainerStatics(ITargetedContentContainerStatics const&) noexcept = default;
        ITargetedContentContainerStatics(ITargetedContentContainerStatics&&) noexcept = default;
        ITargetedContentContainerStatics& operator=(ITargetedContentContainerStatics const&) & noexcept = default;
        ITargetedContentContainerStatics& operator=(ITargetedContentContainerStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ITargetedContentImage :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITargetedContentImage>,
        impl::require<Windows::Services::TargetedContent::ITargetedContentImage, Windows::Storage::Streams::IRandomAccessStreamReference>
    {
        ITargetedContentImage(std::nullptr_t = nullptr) noexcept {}
        ITargetedContentImage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ITargetedContentImage(ITargetedContentImage const&) noexcept = default;
        ITargetedContentImage(ITargetedContentImage&&) noexcept = default;
        ITargetedContentImage& operator=(ITargetedContentImage const&) & noexcept = default;
        ITargetedContentImage& operator=(ITargetedContentImage&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ITargetedContentItem :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITargetedContentItem>
    {
        ITargetedContentItem(std::nullptr_t = nullptr) noexcept {}
        ITargetedContentItem(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ITargetedContentItem(ITargetedContentItem const&) noexcept = default;
        ITargetedContentItem(ITargetedContentItem&&) noexcept = default;
        ITargetedContentItem& operator=(ITargetedContentItem const&) & noexcept = default;
        ITargetedContentItem& operator=(ITargetedContentItem&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ITargetedContentItemState :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITargetedContentItemState>
    {
        ITargetedContentItemState(std::nullptr_t = nullptr) noexcept {}
        ITargetedContentItemState(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ITargetedContentItemState(ITargetedContentItemState const&) noexcept = default;
        ITargetedContentItemState(ITargetedContentItemState&&) noexcept = default;
        ITargetedContentItemState& operator=(ITargetedContentItemState const&) & noexcept = default;
        ITargetedContentItemState& operator=(ITargetedContentItemState&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ITargetedContentObject :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITargetedContentObject>
    {
        ITargetedContentObject(std::nullptr_t = nullptr) noexcept {}
        ITargetedContentObject(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ITargetedContentObject(ITargetedContentObject const&) noexcept = default;
        ITargetedContentObject(ITargetedContentObject&&) noexcept = default;
        ITargetedContentObject& operator=(ITargetedContentObject const&) & noexcept = default;
        ITargetedContentObject& operator=(ITargetedContentObject&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ITargetedContentStateChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITargetedContentStateChangedEventArgs>
    {
        ITargetedContentStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ITargetedContentStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ITargetedContentStateChangedEventArgs(ITargetedContentStateChangedEventArgs const&) noexcept = default;
        ITargetedContentStateChangedEventArgs(ITargetedContentStateChangedEventArgs&&) noexcept = default;
        ITargetedContentStateChangedEventArgs& operator=(ITargetedContentStateChangedEventArgs const&) & noexcept = default;
        ITargetedContentStateChangedEventArgs& operator=(ITargetedContentStateChangedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ITargetedContentSubscription :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITargetedContentSubscription>
    {
        ITargetedContentSubscription(std::nullptr_t = nullptr) noexcept {}
        ITargetedContentSubscription(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ITargetedContentSubscription(ITargetedContentSubscription const&) noexcept = default;
        ITargetedContentSubscription(ITargetedContentSubscription&&) noexcept = default;
        ITargetedContentSubscription& operator=(ITargetedContentSubscription const&) & noexcept = default;
        ITargetedContentSubscription& operator=(ITargetedContentSubscription&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ITargetedContentSubscriptionOptions :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITargetedContentSubscriptionOptions>
    {
        ITargetedContentSubscriptionOptions(std::nullptr_t = nullptr) noexcept {}
        ITargetedContentSubscriptionOptions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ITargetedContentSubscriptionOptions(ITargetedContentSubscriptionOptions const&) noexcept = default;
        ITargetedContentSubscriptionOptions(ITargetedContentSubscriptionOptions&&) noexcept = default;
        ITargetedContentSubscriptionOptions& operator=(ITargetedContentSubscriptionOptions const&) & noexcept = default;
        ITargetedContentSubscriptionOptions& operator=(ITargetedContentSubscriptionOptions&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ITargetedContentSubscriptionStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITargetedContentSubscriptionStatics>
    {
        ITargetedContentSubscriptionStatics(std::nullptr_t = nullptr) noexcept {}
        ITargetedContentSubscriptionStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ITargetedContentSubscriptionStatics(ITargetedContentSubscriptionStatics const&) noexcept = default;
        ITargetedContentSubscriptionStatics(ITargetedContentSubscriptionStatics&&) noexcept = default;
        ITargetedContentSubscriptionStatics& operator=(ITargetedContentSubscriptionStatics const&) & noexcept = default;
        ITargetedContentSubscriptionStatics& operator=(ITargetedContentSubscriptionStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ITargetedContentValue :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITargetedContentValue>
    {
        ITargetedContentValue(std::nullptr_t = nullptr) noexcept {}
        ITargetedContentValue(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ITargetedContentValue(ITargetedContentValue const&) noexcept = default;
        ITargetedContentValue(ITargetedContentValue&&) noexcept = default;
        ITargetedContentValue& operator=(ITargetedContentValue const&) & noexcept = default;
        ITargetedContentValue& operator=(ITargetedContentValue&&) & noexcept = default;
    };
}
#endif
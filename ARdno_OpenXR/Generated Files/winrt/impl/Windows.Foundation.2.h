// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210312.4

#ifndef WINRT_Windows_Foundation_2_H
#define WINRT_Windows_Foundation_2_H
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct AsyncActionCompletedHandler : Windows::Foundation::IUnknown
    {
        AsyncActionCompletedHandler(std::nullptr_t = nullptr) noexcept {}
        AsyncActionCompletedHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        AsyncActionCompletedHandler(AsyncActionCompletedHandler const&) noexcept = default;
        AsyncActionCompletedHandler(AsyncActionCompletedHandler&&) noexcept = default;
        AsyncActionCompletedHandler& operator=(AsyncActionCompletedHandler const&) & noexcept = default;
        AsyncActionCompletedHandler& operator=(AsyncActionCompletedHandler&&) & noexcept = default;
        template <typename L> AsyncActionCompletedHandler(L lambda);
        template <typename F> AsyncActionCompletedHandler(F* function);
        template <typename O, typename M> AsyncActionCompletedHandler(O* object, M method);
        template <typename O, typename M> AsyncActionCompletedHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> AsyncActionCompletedHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IAsyncAction const& asyncInfo, Windows::Foundation::AsyncStatus const& asyncStatus) const;
    };
    template <typename TProgress>
    struct AsyncActionProgressHandler : Windows::Foundation::IUnknown
    {
        static_assert(impl::has_category_v<TProgress>, "TProgress must be WinRT type.");
        AsyncActionProgressHandler(std::nullptr_t = nullptr) noexcept {}
        AsyncActionProgressHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        AsyncActionProgressHandler(AsyncActionProgressHandler const&) noexcept = default;
        AsyncActionProgressHandler(AsyncActionProgressHandler&&) noexcept = default;
        AsyncActionProgressHandler& operator=(AsyncActionProgressHandler const&) & noexcept = default;
        AsyncActionProgressHandler& operator=(AsyncActionProgressHandler&&) & noexcept = default;
        template <typename L> AsyncActionProgressHandler(L lambda);
        template <typename F> AsyncActionProgressHandler(F* function);
        template <typename O, typename M> AsyncActionProgressHandler(O* object, M method);
        template <typename O, typename M> AsyncActionProgressHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> AsyncActionProgressHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IAsyncActionWithProgress<TProgress> const& asyncInfo, impl::param_type<TProgress> const& progressInfo) const;
    };
    template <typename TProgress>
    struct AsyncActionWithProgressCompletedHandler : Windows::Foundation::IUnknown
    {
        static_assert(impl::has_category_v<TProgress>, "TProgress must be WinRT type.");
        AsyncActionWithProgressCompletedHandler(std::nullptr_t = nullptr) noexcept {}
        AsyncActionWithProgressCompletedHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        AsyncActionWithProgressCompletedHandler(AsyncActionWithProgressCompletedHandler const&) noexcept = default;
        AsyncActionWithProgressCompletedHandler(AsyncActionWithProgressCompletedHandler&&) noexcept = default;
        AsyncActionWithProgressCompletedHandler& operator=(AsyncActionWithProgressCompletedHandler const&) & noexcept = default;
        AsyncActionWithProgressCompletedHandler& operator=(AsyncActionWithProgressCompletedHandler&&) & noexcept = default;
        template <typename L> AsyncActionWithProgressCompletedHandler(L lambda);
        template <typename F> AsyncActionWithProgressCompletedHandler(F* function);
        template <typename O, typename M> AsyncActionWithProgressCompletedHandler(O* object, M method);
        template <typename O, typename M> AsyncActionWithProgressCompletedHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> AsyncActionWithProgressCompletedHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IAsyncActionWithProgress<TProgress> const& asyncInfo, Windows::Foundation::AsyncStatus const& asyncStatus) const;
    };
    template <typename TResult>
    struct AsyncOperationCompletedHandler : Windows::Foundation::IUnknown
    {
        static_assert(impl::has_category_v<TResult>, "TResult must be WinRT type.");
        AsyncOperationCompletedHandler(std::nullptr_t = nullptr) noexcept {}
        AsyncOperationCompletedHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        AsyncOperationCompletedHandler(AsyncOperationCompletedHandler const&) noexcept = default;
        AsyncOperationCompletedHandler(AsyncOperationCompletedHandler&&) noexcept = default;
        AsyncOperationCompletedHandler& operator=(AsyncOperationCompletedHandler const&) & noexcept = default;
        AsyncOperationCompletedHandler& operator=(AsyncOperationCompletedHandler&&) & noexcept = default;
        template <typename L> AsyncOperationCompletedHandler(L lambda);
        template <typename F> AsyncOperationCompletedHandler(F* function);
        template <typename O, typename M> AsyncOperationCompletedHandler(O* object, M method);
        template <typename O, typename M> AsyncOperationCompletedHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> AsyncOperationCompletedHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IAsyncOperation<TResult> const& asyncInfo, Windows::Foundation::AsyncStatus const& asyncStatus) const;
    };
    template <typename TResult, typename TProgress>
    struct AsyncOperationProgressHandler : Windows::Foundation::IUnknown
    {
        static_assert(impl::has_category_v<TResult>, "TResult must be WinRT type.");
        static_assert(impl::has_category_v<TProgress>, "TProgress must be WinRT type.");
        AsyncOperationProgressHandler(std::nullptr_t = nullptr) noexcept {}
        AsyncOperationProgressHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        AsyncOperationProgressHandler(AsyncOperationProgressHandler const&) noexcept = default;
        AsyncOperationProgressHandler(AsyncOperationProgressHandler&&) noexcept = default;
        AsyncOperationProgressHandler& operator=(AsyncOperationProgressHandler const&) & noexcept = default;
        AsyncOperationProgressHandler& operator=(AsyncOperationProgressHandler&&) & noexcept = default;
        template <typename L> AsyncOperationProgressHandler(L lambda);
        template <typename F> AsyncOperationProgressHandler(F* function);
        template <typename O, typename M> AsyncOperationProgressHandler(O* object, M method);
        template <typename O, typename M> AsyncOperationProgressHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> AsyncOperationProgressHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress> const& asyncInfo, impl::param_type<TProgress> const& progressInfo) const;
    };
    template <typename TResult, typename TProgress>
    struct AsyncOperationWithProgressCompletedHandler : Windows::Foundation::IUnknown
    {
        static_assert(impl::has_category_v<TResult>, "TResult must be WinRT type.");
        static_assert(impl::has_category_v<TProgress>, "TProgress must be WinRT type.");
        AsyncOperationWithProgressCompletedHandler(std::nullptr_t = nullptr) noexcept {}
        AsyncOperationWithProgressCompletedHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        AsyncOperationWithProgressCompletedHandler(AsyncOperationWithProgressCompletedHandler const&) noexcept = default;
        AsyncOperationWithProgressCompletedHandler(AsyncOperationWithProgressCompletedHandler&&) noexcept = default;
        AsyncOperationWithProgressCompletedHandler& operator=(AsyncOperationWithProgressCompletedHandler const&) & noexcept = default;
        AsyncOperationWithProgressCompletedHandler& operator=(AsyncOperationWithProgressCompletedHandler&&) & noexcept = default;
        template <typename L> AsyncOperationWithProgressCompletedHandler(L lambda);
        template <typename F> AsyncOperationWithProgressCompletedHandler(F* function);
        template <typename O, typename M> AsyncOperationWithProgressCompletedHandler(O* object, M method);
        template <typename O, typename M> AsyncOperationWithProgressCompletedHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> AsyncOperationWithProgressCompletedHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress> const& asyncInfo, Windows::Foundation::AsyncStatus const& asyncStatus) const;
    };
    struct DeferralCompletedHandler : Windows::Foundation::IUnknown
    {
        DeferralCompletedHandler(std::nullptr_t = nullptr) noexcept {}
        DeferralCompletedHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        DeferralCompletedHandler(DeferralCompletedHandler const&) noexcept = default;
        DeferralCompletedHandler(DeferralCompletedHandler&&) noexcept = default;
        DeferralCompletedHandler& operator=(DeferralCompletedHandler const&) & noexcept = default;
        DeferralCompletedHandler& operator=(DeferralCompletedHandler&&) & noexcept = default;
        template <typename L> DeferralCompletedHandler(L lambda);
        template <typename F> DeferralCompletedHandler(F* function);
        template <typename O, typename M> DeferralCompletedHandler(O* object, M method);
        template <typename O, typename M> DeferralCompletedHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> DeferralCompletedHandler(weak_ref<O>&& object, M method);
        auto operator()() const;
    };
    template <typename T>
    struct EventHandler : Windows::Foundation::IUnknown
    {
        static_assert(impl::has_category_v<T>, "T must be WinRT type.");
        EventHandler(std::nullptr_t = nullptr) noexcept {}
        EventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        EventHandler(EventHandler const&) noexcept = default;
        EventHandler(EventHandler&&) noexcept = default;
        EventHandler& operator=(EventHandler const&) & noexcept = default;
        EventHandler& operator=(EventHandler&&) & noexcept = default;
        template <typename L> EventHandler(L lambda);
        template <typename F> EventHandler(F* function);
        template <typename O, typename M> EventHandler(O* object, M method);
        template <typename O, typename M> EventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> EventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Foundation::IInspectable const& sender, impl::param_type<T> const& args) const;
    };
    template <typename TSender, typename TResult>
    struct TypedEventHandler : Windows::Foundation::IUnknown
    {
        static_assert(impl::has_category_v<TSender>, "TSender must be WinRT type.");
        static_assert(impl::has_category_v<TResult>, "TResult must be WinRT type.");
        TypedEventHandler(std::nullptr_t = nullptr) noexcept {}
        TypedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        TypedEventHandler(TypedEventHandler const&) noexcept = default;
        TypedEventHandler(TypedEventHandler&&) noexcept = default;
        TypedEventHandler& operator=(TypedEventHandler const&) & noexcept = default;
        TypedEventHandler& operator=(TypedEventHandler&&) & noexcept = default;
        template <typename L> TypedEventHandler(L lambda);
        template <typename F> TypedEventHandler(F* function);
        template <typename O, typename M> TypedEventHandler(O* object, M method);
        template <typename O, typename M> TypedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> TypedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(impl::param_type<TSender> const& sender, impl::param_type<TResult> const& args) const;
    };
    struct __declspec(empty_bases) Deferral : Windows::Foundation::IDeferral
    {
        Deferral(std::nullptr_t) noexcept {}
        Deferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IDeferral(ptr, take_ownership_from_abi) {}
        explicit Deferral(Windows::Foundation::DeferralCompletedHandler const& handler);
        Deferral(Deferral const&) noexcept = default;
        Deferral(Deferral&&) noexcept = default;
        Deferral& operator=(Deferral const&) & noexcept = default;
        Deferral& operator=(Deferral&&) & noexcept = default;
    };
    struct GuidHelper
    {
        GuidHelper() = delete;
        static auto CreateNewGuid();
        [[nodiscard]] static auto Empty();
        static auto Equals(winrt::guid const& target, winrt::guid const& value);
    };
    struct __declspec(empty_bases) MemoryBuffer : Windows::Foundation::IMemoryBuffer
    {
        MemoryBuffer(std::nullptr_t) noexcept {}
        MemoryBuffer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IMemoryBuffer(ptr, take_ownership_from_abi) {}
        explicit MemoryBuffer(uint32_t capacity);
        MemoryBuffer(MemoryBuffer const&) noexcept = default;
        MemoryBuffer(MemoryBuffer&&) noexcept = default;
        MemoryBuffer& operator=(MemoryBuffer const&) & noexcept = default;
        MemoryBuffer& operator=(MemoryBuffer&&) & noexcept = default;
    };
    struct PropertyValue
    {
        PropertyValue() = delete;
        static auto CreateEmpty();
        static auto CreateUInt8(uint8_t value);
        static auto CreateInt16(int16_t value);
        static auto CreateUInt16(uint16_t value);
        static auto CreateInt32(int32_t value);
        static auto CreateUInt32(uint32_t value);
        static auto CreateInt64(int64_t value);
        static auto CreateUInt64(uint64_t value);
        static auto CreateSingle(float value);
        static auto CreateDouble(double value);
        static auto CreateChar16(char16_t value);
        static auto CreateBoolean(bool value);
        static auto CreateString(param::hstring const& value);
        static auto CreateInspectable(Windows::Foundation::IInspectable const& value);
        static auto CreateGuid(winrt::guid const& value);
        static auto CreateDateTime(Windows::Foundation::DateTime const& value);
        static auto CreateTimeSpan(Windows::Foundation::TimeSpan const& value);
        static auto CreatePoint(Windows::Foundation::Point const& value);
        static auto CreateSize(Windows::Foundation::Size const& value);
        static auto CreateRect(Windows::Foundation::Rect const& value);
        static auto CreateUInt8Array(array_view<uint8_t const> value);
        static auto CreateInt16Array(array_view<int16_t const> value);
        static auto CreateUInt16Array(array_view<uint16_t const> value);
        static auto CreateInt32Array(array_view<int32_t const> value);
        static auto CreateUInt32Array(array_view<uint32_t const> value);
        static auto CreateInt64Array(array_view<int64_t const> value);
        static auto CreateUInt64Array(array_view<uint64_t const> value);
        static auto CreateSingleArray(array_view<float const> value);
        static auto CreateDoubleArray(array_view<double const> value);
        static auto CreateChar16Array(array_view<char16_t const> value);
        static auto CreateBooleanArray(array_view<bool const> value);
        static auto CreateStringArray(array_view<hstring const> value);
        static auto CreateInspectableArray(array_view<Windows::Foundation::IInspectable const> value);
        static auto CreateGuidArray(array_view<winrt::guid const> value);
        static auto CreateDateTimeArray(array_view<Windows::Foundation::DateTime const> value);
        static auto CreateTimeSpanArray(array_view<Windows::Foundation::TimeSpan const> value);
        static auto CreatePointArray(array_view<Windows::Foundation::Point const> value);
        static auto CreateSizeArray(array_view<Windows::Foundation::Size const> value);
        static auto CreateRectArray(array_view<Windows::Foundation::Rect const> value);
    };
    struct __declspec(empty_bases) Uri : Windows::Foundation::IUriRuntimeClass,
        impl::require<Uri, Windows::Foundation::IUriRuntimeClassWithAbsoluteCanonicalUri, Windows::Foundation::IStringable>
    {
        Uri(std::nullptr_t) noexcept {}
        Uri(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUriRuntimeClass(ptr, take_ownership_from_abi) {}
        explicit Uri(param::hstring const& uri);
        Uri(param::hstring const& baseUri, param::hstring const& relativeUri);
        Uri(Uri const&) noexcept = default;
        Uri(Uri&&) noexcept = default;
        Uri& operator=(Uri const&) & noexcept = default;
        Uri& operator=(Uri&&) & noexcept = default;
        static auto UnescapeComponent(param::hstring const& toUnescape);
        static auto EscapeComponent(param::hstring const& toEscape);
    };
    struct __declspec(empty_bases) WwwFormUrlDecoder : Windows::Foundation::IWwwFormUrlDecoderRuntimeClass
    {
        WwwFormUrlDecoder(std::nullptr_t) noexcept {}
        WwwFormUrlDecoder(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IWwwFormUrlDecoderRuntimeClass(ptr, take_ownership_from_abi) {}
        explicit WwwFormUrlDecoder(param::hstring const& query);
        WwwFormUrlDecoder(WwwFormUrlDecoder const&) noexcept = default;
        WwwFormUrlDecoder(WwwFormUrlDecoder&&) noexcept = default;
        WwwFormUrlDecoder& operator=(WwwFormUrlDecoder const&) & noexcept = default;
        WwwFormUrlDecoder& operator=(WwwFormUrlDecoder&&) & noexcept = default;
    };
    struct __declspec(empty_bases) WwwFormUrlDecoderEntry : Windows::Foundation::IWwwFormUrlDecoderEntry
    {
        WwwFormUrlDecoderEntry(std::nullptr_t) noexcept {}
        WwwFormUrlDecoderEntry(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IWwwFormUrlDecoderEntry(ptr, take_ownership_from_abi) {}
        WwwFormUrlDecoderEntry(WwwFormUrlDecoderEntry const&) noexcept = default;
        WwwFormUrlDecoderEntry(WwwFormUrlDecoderEntry&&) noexcept = default;
        WwwFormUrlDecoderEntry& operator=(WwwFormUrlDecoderEntry const&) & noexcept = default;
        WwwFormUrlDecoderEntry& operator=(WwwFormUrlDecoderEntry&&) & noexcept = default;
    };
}
#endif
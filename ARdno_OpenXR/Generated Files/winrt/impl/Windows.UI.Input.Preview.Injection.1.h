// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210312.4

#ifndef WINRT_Windows_UI_Input_Preview_Injection_1_H
#define WINRT_Windows_UI_Input_Preview_Injection_1_H
#include "winrt/impl/Windows.UI.Input.Preview.Injection.0.h"
WINRT_EXPORT namespace winrt::Windows::UI::Input::Preview::Injection
{
    struct __declspec(empty_bases) IInjectedInputGamepadInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInjectedInputGamepadInfo>
    {
        IInjectedInputGamepadInfo(std::nullptr_t = nullptr) noexcept {}
        IInjectedInputGamepadInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IInjectedInputGamepadInfo(IInjectedInputGamepadInfo const&) noexcept = default;
        IInjectedInputGamepadInfo(IInjectedInputGamepadInfo&&) noexcept = default;
        IInjectedInputGamepadInfo& operator=(IInjectedInputGamepadInfo const&) & noexcept = default;
        IInjectedInputGamepadInfo& operator=(IInjectedInputGamepadInfo&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IInjectedInputGamepadInfoFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInjectedInputGamepadInfoFactory>
    {
        IInjectedInputGamepadInfoFactory(std::nullptr_t = nullptr) noexcept {}
        IInjectedInputGamepadInfoFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IInjectedInputGamepadInfoFactory(IInjectedInputGamepadInfoFactory const&) noexcept = default;
        IInjectedInputGamepadInfoFactory(IInjectedInputGamepadInfoFactory&&) noexcept = default;
        IInjectedInputGamepadInfoFactory& operator=(IInjectedInputGamepadInfoFactory const&) & noexcept = default;
        IInjectedInputGamepadInfoFactory& operator=(IInjectedInputGamepadInfoFactory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IInjectedInputKeyboardInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInjectedInputKeyboardInfo>
    {
        IInjectedInputKeyboardInfo(std::nullptr_t = nullptr) noexcept {}
        IInjectedInputKeyboardInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IInjectedInputKeyboardInfo(IInjectedInputKeyboardInfo const&) noexcept = default;
        IInjectedInputKeyboardInfo(IInjectedInputKeyboardInfo&&) noexcept = default;
        IInjectedInputKeyboardInfo& operator=(IInjectedInputKeyboardInfo const&) & noexcept = default;
        IInjectedInputKeyboardInfo& operator=(IInjectedInputKeyboardInfo&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IInjectedInputMouseInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInjectedInputMouseInfo>
    {
        IInjectedInputMouseInfo(std::nullptr_t = nullptr) noexcept {}
        IInjectedInputMouseInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IInjectedInputMouseInfo(IInjectedInputMouseInfo const&) noexcept = default;
        IInjectedInputMouseInfo(IInjectedInputMouseInfo&&) noexcept = default;
        IInjectedInputMouseInfo& operator=(IInjectedInputMouseInfo const&) & noexcept = default;
        IInjectedInputMouseInfo& operator=(IInjectedInputMouseInfo&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IInjectedInputPenInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInjectedInputPenInfo>
    {
        IInjectedInputPenInfo(std::nullptr_t = nullptr) noexcept {}
        IInjectedInputPenInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IInjectedInputPenInfo(IInjectedInputPenInfo const&) noexcept = default;
        IInjectedInputPenInfo(IInjectedInputPenInfo&&) noexcept = default;
        IInjectedInputPenInfo& operator=(IInjectedInputPenInfo const&) & noexcept = default;
        IInjectedInputPenInfo& operator=(IInjectedInputPenInfo&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IInjectedInputTouchInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInjectedInputTouchInfo>
    {
        IInjectedInputTouchInfo(std::nullptr_t = nullptr) noexcept {}
        IInjectedInputTouchInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IInjectedInputTouchInfo(IInjectedInputTouchInfo const&) noexcept = default;
        IInjectedInputTouchInfo(IInjectedInputTouchInfo&&) noexcept = default;
        IInjectedInputTouchInfo& operator=(IInjectedInputTouchInfo const&) & noexcept = default;
        IInjectedInputTouchInfo& operator=(IInjectedInputTouchInfo&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IInputInjector :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInputInjector>
    {
        IInputInjector(std::nullptr_t = nullptr) noexcept {}
        IInputInjector(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IInputInjector(IInputInjector const&) noexcept = default;
        IInputInjector(IInputInjector&&) noexcept = default;
        IInputInjector& operator=(IInputInjector const&) & noexcept = default;
        IInputInjector& operator=(IInputInjector&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IInputInjector2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInputInjector2>,
        impl::require<Windows::UI::Input::Preview::Injection::IInputInjector2, Windows::UI::Input::Preview::Injection::IInputInjector>
    {
        IInputInjector2(std::nullptr_t = nullptr) noexcept {}
        IInputInjector2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IInputInjector2(IInputInjector2 const&) noexcept = default;
        IInputInjector2(IInputInjector2&&) noexcept = default;
        IInputInjector2& operator=(IInputInjector2 const&) & noexcept = default;
        IInputInjector2& operator=(IInputInjector2&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IInputInjectorStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInputInjectorStatics>
    {
        IInputInjectorStatics(std::nullptr_t = nullptr) noexcept {}
        IInputInjectorStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IInputInjectorStatics(IInputInjectorStatics const&) noexcept = default;
        IInputInjectorStatics(IInputInjectorStatics&&) noexcept = default;
        IInputInjectorStatics& operator=(IInputInjectorStatics const&) & noexcept = default;
        IInputInjectorStatics& operator=(IInputInjectorStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IInputInjectorStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IInputInjectorStatics2>,
        impl::require<Windows::UI::Input::Preview::Injection::IInputInjectorStatics2, Windows::UI::Input::Preview::Injection::IInputInjectorStatics>
    {
        IInputInjectorStatics2(std::nullptr_t = nullptr) noexcept {}
        IInputInjectorStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IInputInjectorStatics2(IInputInjectorStatics2 const&) noexcept = default;
        IInputInjectorStatics2(IInputInjectorStatics2&&) noexcept = default;
        IInputInjectorStatics2& operator=(IInputInjectorStatics2 const&) & noexcept = default;
        IInputInjectorStatics2& operator=(IInputInjectorStatics2&&) & noexcept = default;
    };
}
#endif

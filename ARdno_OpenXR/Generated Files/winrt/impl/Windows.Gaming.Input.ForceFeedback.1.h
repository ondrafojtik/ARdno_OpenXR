// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210312.4

#ifndef WINRT_Windows_Gaming_Input_ForceFeedback_1_H
#define WINRT_Windows_Gaming_Input_ForceFeedback_1_H
#include "winrt/impl/Windows.Gaming.Input.ForceFeedback.0.h"
WINRT_EXPORT namespace winrt::Windows::Gaming::Input::ForceFeedback
{
    struct __declspec(empty_bases) IConditionForceEffect :
        Windows::Foundation::IInspectable,
        impl::consume_t<IConditionForceEffect>,
        impl::require<Windows::Gaming::Input::ForceFeedback::IConditionForceEffect, Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect>
    {
        IConditionForceEffect(std::nullptr_t = nullptr) noexcept {}
        IConditionForceEffect(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IConditionForceEffect(IConditionForceEffect const&) noexcept = default;
        IConditionForceEffect(IConditionForceEffect&&) noexcept = default;
        IConditionForceEffect& operator=(IConditionForceEffect const&) & noexcept = default;
        IConditionForceEffect& operator=(IConditionForceEffect&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IConditionForceEffectFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IConditionForceEffectFactory>
    {
        IConditionForceEffectFactory(std::nullptr_t = nullptr) noexcept {}
        IConditionForceEffectFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IConditionForceEffectFactory(IConditionForceEffectFactory const&) noexcept = default;
        IConditionForceEffectFactory(IConditionForceEffectFactory&&) noexcept = default;
        IConditionForceEffectFactory& operator=(IConditionForceEffectFactory const&) & noexcept = default;
        IConditionForceEffectFactory& operator=(IConditionForceEffectFactory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IConstantForceEffect :
        Windows::Foundation::IInspectable,
        impl::consume_t<IConstantForceEffect>,
        impl::require<Windows::Gaming::Input::ForceFeedback::IConstantForceEffect, Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect>
    {
        IConstantForceEffect(std::nullptr_t = nullptr) noexcept {}
        IConstantForceEffect(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IConstantForceEffect(IConstantForceEffect const&) noexcept = default;
        IConstantForceEffect(IConstantForceEffect&&) noexcept = default;
        IConstantForceEffect& operator=(IConstantForceEffect const&) & noexcept = default;
        IConstantForceEffect& operator=(IConstantForceEffect&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IForceFeedbackEffect :
        Windows::Foundation::IInspectable,
        impl::consume_t<IForceFeedbackEffect>
    {
        IForceFeedbackEffect(std::nullptr_t = nullptr) noexcept {}
        IForceFeedbackEffect(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IForceFeedbackEffect(IForceFeedbackEffect const&) noexcept = default;
        IForceFeedbackEffect(IForceFeedbackEffect&&) noexcept = default;
        IForceFeedbackEffect& operator=(IForceFeedbackEffect const&) & noexcept = default;
        IForceFeedbackEffect& operator=(IForceFeedbackEffect&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IForceFeedbackMotor :
        Windows::Foundation::IInspectable,
        impl::consume_t<IForceFeedbackMotor>
    {
        IForceFeedbackMotor(std::nullptr_t = nullptr) noexcept {}
        IForceFeedbackMotor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IForceFeedbackMotor(IForceFeedbackMotor const&) noexcept = default;
        IForceFeedbackMotor(IForceFeedbackMotor&&) noexcept = default;
        IForceFeedbackMotor& operator=(IForceFeedbackMotor const&) & noexcept = default;
        IForceFeedbackMotor& operator=(IForceFeedbackMotor&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IPeriodicForceEffect :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPeriodicForceEffect>,
        impl::require<Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffect, Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect>
    {
        IPeriodicForceEffect(std::nullptr_t = nullptr) noexcept {}
        IPeriodicForceEffect(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IPeriodicForceEffect(IPeriodicForceEffect const&) noexcept = default;
        IPeriodicForceEffect(IPeriodicForceEffect&&) noexcept = default;
        IPeriodicForceEffect& operator=(IPeriodicForceEffect const&) & noexcept = default;
        IPeriodicForceEffect& operator=(IPeriodicForceEffect&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IPeriodicForceEffectFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPeriodicForceEffectFactory>
    {
        IPeriodicForceEffectFactory(std::nullptr_t = nullptr) noexcept {}
        IPeriodicForceEffectFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IPeriodicForceEffectFactory(IPeriodicForceEffectFactory const&) noexcept = default;
        IPeriodicForceEffectFactory(IPeriodicForceEffectFactory&&) noexcept = default;
        IPeriodicForceEffectFactory& operator=(IPeriodicForceEffectFactory const&) & noexcept = default;
        IPeriodicForceEffectFactory& operator=(IPeriodicForceEffectFactory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IRampForceEffect :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRampForceEffect>,
        impl::require<Windows::Gaming::Input::ForceFeedback::IRampForceEffect, Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect>
    {
        IRampForceEffect(std::nullptr_t = nullptr) noexcept {}
        IRampForceEffect(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IRampForceEffect(IRampForceEffect const&) noexcept = default;
        IRampForceEffect(IRampForceEffect&&) noexcept = default;
        IRampForceEffect& operator=(IRampForceEffect const&) & noexcept = default;
        IRampForceEffect& operator=(IRampForceEffect&&) & noexcept = default;
    };
}
#endif

// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210312.4

#ifndef WINRT_Windows_ApplicationModel_Contacts_Provider_2_H
#define WINRT_Windows_ApplicationModel_Contacts_Provider_2_H
#include "winrt/impl/Windows.ApplicationModel.Contacts.Provider.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Contacts::Provider
{
    struct __declspec(empty_bases) ContactPickerUI : Windows::ApplicationModel::Contacts::Provider::IContactPickerUI,
        impl::require<ContactPickerUI, Windows::ApplicationModel::Contacts::Provider::IContactPickerUI2>
    {
        ContactPickerUI(std::nullptr_t) noexcept {}
        ContactPickerUI(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::Provider::IContactPickerUI(ptr, take_ownership_from_abi) {}
        ContactPickerUI(ContactPickerUI const&) noexcept = default;
        ContactPickerUI(ContactPickerUI&&) noexcept = default;
        ContactPickerUI& operator=(ContactPickerUI const&) & noexcept = default;
        ContactPickerUI& operator=(ContactPickerUI&&) & noexcept = default;
        using Windows::ApplicationModel::Contacts::Provider::IContactPickerUI::AddContact;
        using impl::consume_t<ContactPickerUI, Windows::ApplicationModel::Contacts::Provider::IContactPickerUI2>::AddContact;
    };
    struct __declspec(empty_bases) ContactRemovedEventArgs : Windows::ApplicationModel::Contacts::Provider::IContactRemovedEventArgs
    {
        ContactRemovedEventArgs(std::nullptr_t) noexcept {}
        ContactRemovedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::Provider::IContactRemovedEventArgs(ptr, take_ownership_from_abi) {}
        ContactRemovedEventArgs(ContactRemovedEventArgs const&) noexcept = default;
        ContactRemovedEventArgs(ContactRemovedEventArgs&&) noexcept = default;
        ContactRemovedEventArgs& operator=(ContactRemovedEventArgs const&) & noexcept = default;
        ContactRemovedEventArgs& operator=(ContactRemovedEventArgs&&) & noexcept = default;
    };
}
#endif

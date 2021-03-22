// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210312.4

#ifndef WINRT_Windows_ApplicationModel_Calls_Background_0_H
#define WINRT_Windows_ApplicationModel_Calls_Background_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Calls::Background
{
    enum class PhoneCallBlockedReason : int32_t
    {
        InCallBlockingList = 0,
        PrivateNumber = 1,
        UnknownNumber = 2,
    };
    enum class PhoneIncomingCallDismissedReason : int32_t
    {
        Unknown = 0,
        CallRejected = 1,
        TextReply = 2,
        ConnectionLost = 3,
    };
    enum class PhoneLineChangeKind : int32_t
    {
        Added = 0,
        Removed = 1,
        PropertiesChanged = 2,
    };
    enum class PhoneLineProperties : uint32_t
    {
        None = 0,
        BrandingOptions = 0x1,
        CanDial = 0x2,
        CellularDetails = 0x4,
        DisplayColor = 0x8,
        DisplayName = 0x10,
        NetworkName = 0x20,
        NetworkState = 0x40,
        Transport = 0x80,
        Voicemail = 0x100,
    };
    enum class PhoneTriggerType : int32_t
    {
        NewVoicemailMessage = 0,
        CallHistoryChanged = 1,
        LineChanged = 2,
        AirplaneModeDisabledForEmergencyCall = 3,
        CallOriginDataRequest = 4,
        CallBlocked = 5,
        IncomingCallDismissed = 6,
    };
    struct IPhoneCallBlockedTriggerDetails;
    struct IPhoneCallOriginDataRequestTriggerDetails;
    struct IPhoneIncomingCallDismissedTriggerDetails;
    struct IPhoneLineChangedTriggerDetails;
    struct IPhoneNewVoicemailMessageTriggerDetails;
    struct PhoneCallBlockedTriggerDetails;
    struct PhoneCallOriginDataRequestTriggerDetails;
    struct PhoneIncomingCallDismissedTriggerDetails;
    struct PhoneLineChangedTriggerDetails;
    struct PhoneNewVoicemailMessageTriggerDetails;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::Calls::Background::IPhoneCallBlockedTriggerDetails>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Calls::Background::IPhoneCallOriginDataRequestTriggerDetails>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Calls::Background::IPhoneIncomingCallDismissedTriggerDetails>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Calls::Background::IPhoneLineChangedTriggerDetails>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Calls::Background::IPhoneNewVoicemailMessageTriggerDetails>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Calls::Background::PhoneCallBlockedTriggerDetails>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Calls::Background::PhoneCallOriginDataRequestTriggerDetails>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Calls::Background::PhoneIncomingCallDismissedTriggerDetails>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Calls::Background::PhoneLineChangedTriggerDetails>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Calls::Background::PhoneNewVoicemailMessageTriggerDetails>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Calls::Background::PhoneCallBlockedReason>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Calls::Background::PhoneIncomingCallDismissedReason>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Calls::Background::PhoneLineChangeKind>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Calls::Background::PhoneLineProperties>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Calls::Background::PhoneTriggerType>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Calls::Background::PhoneCallBlockedTriggerDetails> = L"Windows.ApplicationModel.Calls.Background.PhoneCallBlockedTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Calls::Background::PhoneCallOriginDataRequestTriggerDetails> = L"Windows.ApplicationModel.Calls.Background.PhoneCallOriginDataRequestTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Calls::Background::PhoneIncomingCallDismissedTriggerDetails> = L"Windows.ApplicationModel.Calls.Background.PhoneIncomingCallDismissedTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Calls::Background::PhoneLineChangedTriggerDetails> = L"Windows.ApplicationModel.Calls.Background.PhoneLineChangedTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Calls::Background::PhoneNewVoicemailMessageTriggerDetails> = L"Windows.ApplicationModel.Calls.Background.PhoneNewVoicemailMessageTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Calls::Background::PhoneCallBlockedReason> = L"Windows.ApplicationModel.Calls.Background.PhoneCallBlockedReason";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Calls::Background::PhoneIncomingCallDismissedReason> = L"Windows.ApplicationModel.Calls.Background.PhoneIncomingCallDismissedReason";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Calls::Background::PhoneLineChangeKind> = L"Windows.ApplicationModel.Calls.Background.PhoneLineChangeKind";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Calls::Background::PhoneLineProperties> = L"Windows.ApplicationModel.Calls.Background.PhoneLineProperties";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Calls::Background::PhoneTriggerType> = L"Windows.ApplicationModel.Calls.Background.PhoneTriggerType";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Calls::Background::IPhoneCallBlockedTriggerDetails> = L"Windows.ApplicationModel.Calls.Background.IPhoneCallBlockedTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Calls::Background::IPhoneCallOriginDataRequestTriggerDetails> = L"Windows.ApplicationModel.Calls.Background.IPhoneCallOriginDataRequestTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Calls::Background::IPhoneIncomingCallDismissedTriggerDetails> = L"Windows.ApplicationModel.Calls.Background.IPhoneIncomingCallDismissedTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Calls::Background::IPhoneLineChangedTriggerDetails> = L"Windows.ApplicationModel.Calls.Background.IPhoneLineChangedTriggerDetails";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Calls::Background::IPhoneNewVoicemailMessageTriggerDetails> = L"Windows.ApplicationModel.Calls.Background.IPhoneNewVoicemailMessageTriggerDetails";
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Calls::Background::IPhoneCallBlockedTriggerDetails>{ 0xA4A690A2,0xE4C1,0x427F,{ 0x86,0x4E,0xE4,0x70,0x47,0x7D,0xDB,0x67 } }; // A4A690A2-E4C1-427F-864E-E470477DDB67
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Calls::Background::IPhoneCallOriginDataRequestTriggerDetails>{ 0x6E9B5B3F,0xC54B,0x4E82,{ 0x4C,0xC9,0xE3,0x29,0xA4,0x18,0x45,0x92 } }; // 6E9B5B3F-C54B-4E82-4CC9-E329A4184592
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Calls::Background::IPhoneIncomingCallDismissedTriggerDetails>{ 0xBAD30276,0x83B6,0x5732,{ 0x9C,0x38,0x0C,0x20,0x65,0x46,0x19,0x6A } }; // BAD30276-83B6-5732-9C38-0C206546196A
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Calls::Background::IPhoneLineChangedTriggerDetails>{ 0xC6D321E7,0xD11D,0x40D8,{ 0xB2,0xB7,0xE4,0x0A,0x01,0xD6,0x62,0x49 } }; // C6D321E7-D11D-40D8-B2B7-E40A01D66249
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Calls::Background::IPhoneNewVoicemailMessageTriggerDetails>{ 0x13A8C01B,0xB831,0x48D3,{ 0x8B,0xA9,0x8D,0x22,0xA6,0x58,0x0D,0xCF } }; // 13A8C01B-B831-48D3-8BA9-8D22A6580DCF
    template <> struct default_interface<Windows::ApplicationModel::Calls::Background::PhoneCallBlockedTriggerDetails>{ using type = Windows::ApplicationModel::Calls::Background::IPhoneCallBlockedTriggerDetails; };
    template <> struct default_interface<Windows::ApplicationModel::Calls::Background::PhoneCallOriginDataRequestTriggerDetails>{ using type = Windows::ApplicationModel::Calls::Background::IPhoneCallOriginDataRequestTriggerDetails; };
    template <> struct default_interface<Windows::ApplicationModel::Calls::Background::PhoneIncomingCallDismissedTriggerDetails>{ using type = Windows::ApplicationModel::Calls::Background::IPhoneIncomingCallDismissedTriggerDetails; };
    template <> struct default_interface<Windows::ApplicationModel::Calls::Background::PhoneLineChangedTriggerDetails>{ using type = Windows::ApplicationModel::Calls::Background::IPhoneLineChangedTriggerDetails; };
    template <> struct default_interface<Windows::ApplicationModel::Calls::Background::PhoneNewVoicemailMessageTriggerDetails>{ using type = Windows::ApplicationModel::Calls::Background::IPhoneNewVoicemailMessageTriggerDetails; };
    template <> struct abi<Windows::ApplicationModel::Calls::Background::IPhoneCallBlockedTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PhoneNumber(void**) noexcept = 0;
            virtual int32_t __stdcall get_LineId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_CallBlockedReason(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::Background::IPhoneCallOriginDataRequestTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RequestId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_PhoneNumber(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::Background::IPhoneIncomingCallDismissedTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LineId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_PhoneNumber(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_DismissalTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_TextReplyMessage(void**) noexcept = 0;
            virtual int32_t __stdcall get_Reason(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::Background::IPhoneLineChangedTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LineId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_ChangeType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall HasLinePropertyChanged(uint32_t, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Calls::Background::IPhoneNewVoicemailMessageTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LineId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_VoicemailCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_OperatorMessage(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_Background_IPhoneCallBlockedTriggerDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) PhoneNumber() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) LineId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Calls::Background::PhoneCallBlockedReason) CallBlockedReason() const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::Background::IPhoneCallBlockedTriggerDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_Background_IPhoneCallBlockedTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_Background_IPhoneCallOriginDataRequestTriggerDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) RequestId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) PhoneNumber() const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::Background::IPhoneCallOriginDataRequestTriggerDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_Background_IPhoneCallOriginDataRequestTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_Background_IPhoneIncomingCallDismissedTriggerDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) LineId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) PhoneNumber() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) DismissalTime() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TextReplyMessage() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Calls::Background::PhoneIncomingCallDismissedReason) Reason() const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::Background::IPhoneIncomingCallDismissedTriggerDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_Background_IPhoneIncomingCallDismissedTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_Background_IPhoneLineChangedTriggerDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) LineId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Calls::Background::PhoneLineChangeKind) ChangeType() const;
        WINRT_IMPL_AUTO(bool) HasLinePropertyChanged(Windows::ApplicationModel::Calls::Background::PhoneLineProperties const& lineProperty) const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::Background::IPhoneLineChangedTriggerDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_Background_IPhoneLineChangedTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Calls_Background_IPhoneNewVoicemailMessageTriggerDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) LineId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) VoicemailCount() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) OperatorMessage() const;
    };
    template <> struct consume<Windows::ApplicationModel::Calls::Background::IPhoneNewVoicemailMessageTriggerDetails>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Calls_Background_IPhoneNewVoicemailMessageTriggerDetails<D>;
    };
}
#endif

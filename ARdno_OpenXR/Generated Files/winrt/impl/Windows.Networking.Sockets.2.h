// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210312.4

#ifndef WINRT_Windows_Networking_Sockets_2_H
#define WINRT_Windows_Networking_Sockets_2_H
#include "winrt/impl/Windows.ApplicationModel.Background.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Networking.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Networking.Sockets.1.h"
WINRT_EXPORT namespace winrt::Windows::Networking::Sockets
{
    struct BandwidthStatistics
    {
        uint64_t OutboundBitsPerSecond;
        uint64_t InboundBitsPerSecond;
        uint64_t OutboundBitsPerSecondInstability;
        uint64_t InboundBitsPerSecondInstability;
        bool OutboundBandwidthPeaked;
        bool InboundBandwidthPeaked;
    };
    inline bool operator==(BandwidthStatistics const& left, BandwidthStatistics const& right) noexcept
    {
        return left.OutboundBitsPerSecond == right.OutboundBitsPerSecond && left.InboundBitsPerSecond == right.InboundBitsPerSecond && left.OutboundBitsPerSecondInstability == right.OutboundBitsPerSecondInstability && left.InboundBitsPerSecondInstability == right.InboundBitsPerSecondInstability && left.OutboundBandwidthPeaked == right.OutboundBandwidthPeaked && left.InboundBandwidthPeaked == right.InboundBandwidthPeaked;
    }
    inline bool operator!=(BandwidthStatistics const& left, BandwidthStatistics const& right) noexcept
    {
        return !(left == right);
    }
    struct RoundTripTimeStatistics
    {
        uint32_t Variance;
        uint32_t Max;
        uint32_t Min;
        uint32_t Sum;
    };
    inline bool operator==(RoundTripTimeStatistics const& left, RoundTripTimeStatistics const& right) noexcept
    {
        return left.Variance == right.Variance && left.Max == right.Max && left.Min == right.Min && left.Sum == right.Sum;
    }
    inline bool operator!=(RoundTripTimeStatistics const& left, RoundTripTimeStatistics const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) ControlChannelTrigger : Windows::Networking::Sockets::IControlChannelTrigger,
        impl::require<ControlChannelTrigger, Windows::Networking::Sockets::IControlChannelTrigger2>
    {
        ControlChannelTrigger(std::nullptr_t) noexcept {}
        ControlChannelTrigger(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Sockets::IControlChannelTrigger(ptr, take_ownership_from_abi) {}
        ControlChannelTrigger(param::hstring const& channelId, uint32_t serverKeepAliveIntervalInMinutes);
        ControlChannelTrigger(param::hstring const& channelId, uint32_t serverKeepAliveIntervalInMinutes, Windows::Networking::Sockets::ControlChannelTriggerResourceType const& resourceRequestType);
        ControlChannelTrigger(ControlChannelTrigger const&) noexcept = default;
        ControlChannelTrigger(ControlChannelTrigger&&) noexcept = default;
        ControlChannelTrigger& operator=(ControlChannelTrigger const&) & noexcept = default;
        ControlChannelTrigger& operator=(ControlChannelTrigger&&) & noexcept = default;
    };
    struct __declspec(empty_bases) DatagramSocket : Windows::Networking::Sockets::IDatagramSocket,
        impl::require<DatagramSocket, Windows::Networking::Sockets::IDatagramSocket2, Windows::Networking::Sockets::IDatagramSocket3>
    {
        DatagramSocket(std::nullptr_t) noexcept {}
        DatagramSocket(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Sockets::IDatagramSocket(ptr, take_ownership_from_abi) {}
        DatagramSocket();
        DatagramSocket(DatagramSocket const&) noexcept = default;
        DatagramSocket(DatagramSocket&&) noexcept = default;
        DatagramSocket& operator=(DatagramSocket const&) & noexcept = default;
        DatagramSocket& operator=(DatagramSocket&&) & noexcept = default;
        using Windows::Networking::Sockets::IDatagramSocket::BindServiceNameAsync;
        using impl::consume_t<DatagramSocket, Windows::Networking::Sockets::IDatagramSocket2>::BindServiceNameAsync;
        static auto GetEndpointPairsAsync(Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName);
        static auto GetEndpointPairsAsync(Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName, Windows::Networking::HostNameSortOptions const& sortOptions);
    };
    struct __declspec(empty_bases) DatagramSocketControl : Windows::Networking::Sockets::IDatagramSocketControl,
        impl::require<DatagramSocketControl, Windows::Networking::Sockets::IDatagramSocketControl2, Windows::Networking::Sockets::IDatagramSocketControl3>
    {
        DatagramSocketControl(std::nullptr_t) noexcept {}
        DatagramSocketControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Sockets::IDatagramSocketControl(ptr, take_ownership_from_abi) {}
        DatagramSocketControl(DatagramSocketControl const&) noexcept = default;
        DatagramSocketControl(DatagramSocketControl&&) noexcept = default;
        DatagramSocketControl& operator=(DatagramSocketControl const&) & noexcept = default;
        DatagramSocketControl& operator=(DatagramSocketControl&&) & noexcept = default;
    };
    struct __declspec(empty_bases) DatagramSocketInformation : Windows::Networking::Sockets::IDatagramSocketInformation
    {
        DatagramSocketInformation(std::nullptr_t) noexcept {}
        DatagramSocketInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Sockets::IDatagramSocketInformation(ptr, take_ownership_from_abi) {}
        DatagramSocketInformation(DatagramSocketInformation const&) noexcept = default;
        DatagramSocketInformation(DatagramSocketInformation&&) noexcept = default;
        DatagramSocketInformation& operator=(DatagramSocketInformation const&) & noexcept = default;
        DatagramSocketInformation& operator=(DatagramSocketInformation&&) & noexcept = default;
    };
    struct __declspec(empty_bases) DatagramSocketMessageReceivedEventArgs : Windows::Networking::Sockets::IDatagramSocketMessageReceivedEventArgs
    {
        DatagramSocketMessageReceivedEventArgs(std::nullptr_t) noexcept {}
        DatagramSocketMessageReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Sockets::IDatagramSocketMessageReceivedEventArgs(ptr, take_ownership_from_abi) {}
        DatagramSocketMessageReceivedEventArgs(DatagramSocketMessageReceivedEventArgs const&) noexcept = default;
        DatagramSocketMessageReceivedEventArgs(DatagramSocketMessageReceivedEventArgs&&) noexcept = default;
        DatagramSocketMessageReceivedEventArgs& operator=(DatagramSocketMessageReceivedEventArgs const&) & noexcept = default;
        DatagramSocketMessageReceivedEventArgs& operator=(DatagramSocketMessageReceivedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) MessageWebSocket : Windows::Networking::Sockets::IMessageWebSocket,
        impl::require<MessageWebSocket, Windows::Networking::Sockets::IMessageWebSocket2, Windows::Networking::Sockets::IMessageWebSocket3>
    {
        MessageWebSocket(std::nullptr_t) noexcept {}
        MessageWebSocket(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Sockets::IMessageWebSocket(ptr, take_ownership_from_abi) {}
        MessageWebSocket();
        MessageWebSocket(MessageWebSocket const&) noexcept = default;
        MessageWebSocket(MessageWebSocket&&) noexcept = default;
        MessageWebSocket& operator=(MessageWebSocket const&) & noexcept = default;
        MessageWebSocket& operator=(MessageWebSocket&&) & noexcept = default;
    };
    struct __declspec(empty_bases) MessageWebSocketControl : Windows::Networking::Sockets::IMessageWebSocketControl,
        impl::require<MessageWebSocketControl, Windows::Networking::Sockets::IWebSocketControl2, Windows::Networking::Sockets::IMessageWebSocketControl2>
    {
        MessageWebSocketControl(std::nullptr_t) noexcept {}
        MessageWebSocketControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Sockets::IMessageWebSocketControl(ptr, take_ownership_from_abi) {}
        MessageWebSocketControl(MessageWebSocketControl const&) noexcept = default;
        MessageWebSocketControl(MessageWebSocketControl&&) noexcept = default;
        MessageWebSocketControl& operator=(MessageWebSocketControl const&) & noexcept = default;
        MessageWebSocketControl& operator=(MessageWebSocketControl&&) & noexcept = default;
    };
    struct __declspec(empty_bases) MessageWebSocketInformation : Windows::Networking::Sockets::IWebSocketInformation,
        impl::require<MessageWebSocketInformation, Windows::Networking::Sockets::IWebSocketInformation2>
    {
        MessageWebSocketInformation(std::nullptr_t) noexcept {}
        MessageWebSocketInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Sockets::IWebSocketInformation(ptr, take_ownership_from_abi) {}
        MessageWebSocketInformation(MessageWebSocketInformation const&) noexcept = default;
        MessageWebSocketInformation(MessageWebSocketInformation&&) noexcept = default;
        MessageWebSocketInformation& operator=(MessageWebSocketInformation const&) & noexcept = default;
        MessageWebSocketInformation& operator=(MessageWebSocketInformation&&) & noexcept = default;
    };
    struct __declspec(empty_bases) MessageWebSocketMessageReceivedEventArgs : Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs,
        impl::require<MessageWebSocketMessageReceivedEventArgs, Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs2>
    {
        MessageWebSocketMessageReceivedEventArgs(std::nullptr_t) noexcept {}
        MessageWebSocketMessageReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs(ptr, take_ownership_from_abi) {}
        MessageWebSocketMessageReceivedEventArgs(MessageWebSocketMessageReceivedEventArgs const&) noexcept = default;
        MessageWebSocketMessageReceivedEventArgs(MessageWebSocketMessageReceivedEventArgs&&) noexcept = default;
        MessageWebSocketMessageReceivedEventArgs& operator=(MessageWebSocketMessageReceivedEventArgs const&) & noexcept = default;
        MessageWebSocketMessageReceivedEventArgs& operator=(MessageWebSocketMessageReceivedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ServerMessageWebSocket : Windows::Networking::Sockets::IServerMessageWebSocket
    {
        ServerMessageWebSocket(std::nullptr_t) noexcept {}
        ServerMessageWebSocket(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Sockets::IServerMessageWebSocket(ptr, take_ownership_from_abi) {}
        ServerMessageWebSocket(ServerMessageWebSocket const&) noexcept = default;
        ServerMessageWebSocket(ServerMessageWebSocket&&) noexcept = default;
        ServerMessageWebSocket& operator=(ServerMessageWebSocket const&) & noexcept = default;
        ServerMessageWebSocket& operator=(ServerMessageWebSocket&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ServerMessageWebSocketControl : Windows::Networking::Sockets::IServerMessageWebSocketControl
    {
        ServerMessageWebSocketControl(std::nullptr_t) noexcept {}
        ServerMessageWebSocketControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Sockets::IServerMessageWebSocketControl(ptr, take_ownership_from_abi) {}
        ServerMessageWebSocketControl(ServerMessageWebSocketControl const&) noexcept = default;
        ServerMessageWebSocketControl(ServerMessageWebSocketControl&&) noexcept = default;
        ServerMessageWebSocketControl& operator=(ServerMessageWebSocketControl const&) & noexcept = default;
        ServerMessageWebSocketControl& operator=(ServerMessageWebSocketControl&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ServerMessageWebSocketInformation : Windows::Networking::Sockets::IServerMessageWebSocketInformation
    {
        ServerMessageWebSocketInformation(std::nullptr_t) noexcept {}
        ServerMessageWebSocketInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Sockets::IServerMessageWebSocketInformation(ptr, take_ownership_from_abi) {}
        ServerMessageWebSocketInformation(ServerMessageWebSocketInformation const&) noexcept = default;
        ServerMessageWebSocketInformation(ServerMessageWebSocketInformation&&) noexcept = default;
        ServerMessageWebSocketInformation& operator=(ServerMessageWebSocketInformation const&) & noexcept = default;
        ServerMessageWebSocketInformation& operator=(ServerMessageWebSocketInformation&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ServerStreamWebSocket : Windows::Networking::Sockets::IServerStreamWebSocket
    {
        ServerStreamWebSocket(std::nullptr_t) noexcept {}
        ServerStreamWebSocket(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Sockets::IServerStreamWebSocket(ptr, take_ownership_from_abi) {}
        ServerStreamWebSocket(ServerStreamWebSocket const&) noexcept = default;
        ServerStreamWebSocket(ServerStreamWebSocket&&) noexcept = default;
        ServerStreamWebSocket& operator=(ServerStreamWebSocket const&) & noexcept = default;
        ServerStreamWebSocket& operator=(ServerStreamWebSocket&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ServerStreamWebSocketInformation : Windows::Networking::Sockets::IServerStreamWebSocketInformation
    {
        ServerStreamWebSocketInformation(std::nullptr_t) noexcept {}
        ServerStreamWebSocketInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Sockets::IServerStreamWebSocketInformation(ptr, take_ownership_from_abi) {}
        ServerStreamWebSocketInformation(ServerStreamWebSocketInformation const&) noexcept = default;
        ServerStreamWebSocketInformation(ServerStreamWebSocketInformation&&) noexcept = default;
        ServerStreamWebSocketInformation& operator=(ServerStreamWebSocketInformation const&) & noexcept = default;
        ServerStreamWebSocketInformation& operator=(ServerStreamWebSocketInformation&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SocketActivityContext : Windows::Networking::Sockets::ISocketActivityContext
    {
        SocketActivityContext(std::nullptr_t) noexcept {}
        SocketActivityContext(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Sockets::ISocketActivityContext(ptr, take_ownership_from_abi) {}
        explicit SocketActivityContext(Windows::Storage::Streams::IBuffer const& data);
        SocketActivityContext(SocketActivityContext const&) noexcept = default;
        SocketActivityContext(SocketActivityContext&&) noexcept = default;
        SocketActivityContext& operator=(SocketActivityContext const&) & noexcept = default;
        SocketActivityContext& operator=(SocketActivityContext&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SocketActivityInformation : Windows::Networking::Sockets::ISocketActivityInformation
    {
        SocketActivityInformation(std::nullptr_t) noexcept {}
        SocketActivityInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Sockets::ISocketActivityInformation(ptr, take_ownership_from_abi) {}
        SocketActivityInformation(SocketActivityInformation const&) noexcept = default;
        SocketActivityInformation(SocketActivityInformation&&) noexcept = default;
        SocketActivityInformation& operator=(SocketActivityInformation const&) & noexcept = default;
        SocketActivityInformation& operator=(SocketActivityInformation&&) & noexcept = default;
        [[nodiscard]] static auto AllSockets();
    };
    struct __declspec(empty_bases) SocketActivityTriggerDetails : Windows::Networking::Sockets::ISocketActivityTriggerDetails
    {
        SocketActivityTriggerDetails(std::nullptr_t) noexcept {}
        SocketActivityTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Sockets::ISocketActivityTriggerDetails(ptr, take_ownership_from_abi) {}
        SocketActivityTriggerDetails(SocketActivityTriggerDetails const&) noexcept = default;
        SocketActivityTriggerDetails(SocketActivityTriggerDetails&&) noexcept = default;
        SocketActivityTriggerDetails& operator=(SocketActivityTriggerDetails const&) & noexcept = default;
        SocketActivityTriggerDetails& operator=(SocketActivityTriggerDetails&&) & noexcept = default;
    };
    struct SocketError
    {
        SocketError() = delete;
        static auto GetStatus(int32_t hresult);
    };
    struct __declspec(empty_bases) StreamSocket : Windows::Networking::Sockets::IStreamSocket,
        impl::require<StreamSocket, Windows::Networking::Sockets::IStreamSocket2, Windows::Networking::Sockets::IStreamSocket3>
    {
        StreamSocket(std::nullptr_t) noexcept {}
        StreamSocket(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Sockets::IStreamSocket(ptr, take_ownership_from_abi) {}
        StreamSocket();
        StreamSocket(StreamSocket const&) noexcept = default;
        StreamSocket(StreamSocket&&) noexcept = default;
        StreamSocket& operator=(StreamSocket const&) & noexcept = default;
        StreamSocket& operator=(StreamSocket&&) & noexcept = default;
        using Windows::Networking::Sockets::IStreamSocket::ConnectAsync;
        using impl::consume_t<StreamSocket, Windows::Networking::Sockets::IStreamSocket2>::ConnectAsync;
        static auto GetEndpointPairsAsync(Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName);
        static auto GetEndpointPairsAsync(Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName, Windows::Networking::HostNameSortOptions const& sortOptions);
    };
    struct __declspec(empty_bases) StreamSocketControl : Windows::Networking::Sockets::IStreamSocketControl,
        impl::require<StreamSocketControl, Windows::Networking::Sockets::IStreamSocketControl2, Windows::Networking::Sockets::IStreamSocketControl3, Windows::Networking::Sockets::IStreamSocketControl4>
    {
        StreamSocketControl(std::nullptr_t) noexcept {}
        StreamSocketControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Sockets::IStreamSocketControl(ptr, take_ownership_from_abi) {}
        StreamSocketControl(StreamSocketControl const&) noexcept = default;
        StreamSocketControl(StreamSocketControl&&) noexcept = default;
        StreamSocketControl& operator=(StreamSocketControl const&) & noexcept = default;
        StreamSocketControl& operator=(StreamSocketControl&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StreamSocketInformation : Windows::Networking::Sockets::IStreamSocketInformation,
        impl::require<StreamSocketInformation, Windows::Networking::Sockets::IStreamSocketInformation2>
    {
        StreamSocketInformation(std::nullptr_t) noexcept {}
        StreamSocketInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Sockets::IStreamSocketInformation(ptr, take_ownership_from_abi) {}
        StreamSocketInformation(StreamSocketInformation const&) noexcept = default;
        StreamSocketInformation(StreamSocketInformation&&) noexcept = default;
        StreamSocketInformation& operator=(StreamSocketInformation const&) & noexcept = default;
        StreamSocketInformation& operator=(StreamSocketInformation&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StreamSocketListener : Windows::Networking::Sockets::IStreamSocketListener,
        impl::require<StreamSocketListener, Windows::Networking::Sockets::IStreamSocketListener2, Windows::Networking::Sockets::IStreamSocketListener3>
    {
        StreamSocketListener(std::nullptr_t) noexcept {}
        StreamSocketListener(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Sockets::IStreamSocketListener(ptr, take_ownership_from_abi) {}
        StreamSocketListener();
        StreamSocketListener(StreamSocketListener const&) noexcept = default;
        StreamSocketListener(StreamSocketListener&&) noexcept = default;
        StreamSocketListener& operator=(StreamSocketListener const&) & noexcept = default;
        StreamSocketListener& operator=(StreamSocketListener&&) & noexcept = default;
        using Windows::Networking::Sockets::IStreamSocketListener::BindServiceNameAsync;
        using impl::consume_t<StreamSocketListener, Windows::Networking::Sockets::IStreamSocketListener2>::BindServiceNameAsync;
    };
    struct __declspec(empty_bases) StreamSocketListenerConnectionReceivedEventArgs : Windows::Networking::Sockets::IStreamSocketListenerConnectionReceivedEventArgs
    {
        StreamSocketListenerConnectionReceivedEventArgs(std::nullptr_t) noexcept {}
        StreamSocketListenerConnectionReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Sockets::IStreamSocketListenerConnectionReceivedEventArgs(ptr, take_ownership_from_abi) {}
        StreamSocketListenerConnectionReceivedEventArgs(StreamSocketListenerConnectionReceivedEventArgs const&) noexcept = default;
        StreamSocketListenerConnectionReceivedEventArgs(StreamSocketListenerConnectionReceivedEventArgs&&) noexcept = default;
        StreamSocketListenerConnectionReceivedEventArgs& operator=(StreamSocketListenerConnectionReceivedEventArgs const&) & noexcept = default;
        StreamSocketListenerConnectionReceivedEventArgs& operator=(StreamSocketListenerConnectionReceivedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StreamSocketListenerControl : Windows::Networking::Sockets::IStreamSocketListenerControl,
        impl::require<StreamSocketListenerControl, Windows::Networking::Sockets::IStreamSocketListenerControl2>
    {
        StreamSocketListenerControl(std::nullptr_t) noexcept {}
        StreamSocketListenerControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Sockets::IStreamSocketListenerControl(ptr, take_ownership_from_abi) {}
        StreamSocketListenerControl(StreamSocketListenerControl const&) noexcept = default;
        StreamSocketListenerControl(StreamSocketListenerControl&&) noexcept = default;
        StreamSocketListenerControl& operator=(StreamSocketListenerControl const&) & noexcept = default;
        StreamSocketListenerControl& operator=(StreamSocketListenerControl&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StreamSocketListenerInformation : Windows::Networking::Sockets::IStreamSocketListenerInformation
    {
        StreamSocketListenerInformation(std::nullptr_t) noexcept {}
        StreamSocketListenerInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Sockets::IStreamSocketListenerInformation(ptr, take_ownership_from_abi) {}
        StreamSocketListenerInformation(StreamSocketListenerInformation const&) noexcept = default;
        StreamSocketListenerInformation(StreamSocketListenerInformation&&) noexcept = default;
        StreamSocketListenerInformation& operator=(StreamSocketListenerInformation const&) & noexcept = default;
        StreamSocketListenerInformation& operator=(StreamSocketListenerInformation&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StreamWebSocket : Windows::Networking::Sockets::IStreamWebSocket,
        impl::require<StreamWebSocket, Windows::Networking::Sockets::IStreamWebSocket2>
    {
        StreamWebSocket(std::nullptr_t) noexcept {}
        StreamWebSocket(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Sockets::IStreamWebSocket(ptr, take_ownership_from_abi) {}
        StreamWebSocket();
        StreamWebSocket(StreamWebSocket const&) noexcept = default;
        StreamWebSocket(StreamWebSocket&&) noexcept = default;
        StreamWebSocket& operator=(StreamWebSocket const&) & noexcept = default;
        StreamWebSocket& operator=(StreamWebSocket&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StreamWebSocketControl : Windows::Networking::Sockets::IStreamWebSocketControl,
        impl::require<StreamWebSocketControl, Windows::Networking::Sockets::IWebSocketControl2, Windows::Networking::Sockets::IStreamWebSocketControl2>
    {
        StreamWebSocketControl(std::nullptr_t) noexcept {}
        StreamWebSocketControl(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Sockets::IStreamWebSocketControl(ptr, take_ownership_from_abi) {}
        StreamWebSocketControl(StreamWebSocketControl const&) noexcept = default;
        StreamWebSocketControl(StreamWebSocketControl&&) noexcept = default;
        StreamWebSocketControl& operator=(StreamWebSocketControl const&) & noexcept = default;
        StreamWebSocketControl& operator=(StreamWebSocketControl&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StreamWebSocketInformation : Windows::Networking::Sockets::IWebSocketInformation,
        impl::require<StreamWebSocketInformation, Windows::Networking::Sockets::IWebSocketInformation2>
    {
        StreamWebSocketInformation(std::nullptr_t) noexcept {}
        StreamWebSocketInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Sockets::IWebSocketInformation(ptr, take_ownership_from_abi) {}
        StreamWebSocketInformation(StreamWebSocketInformation const&) noexcept = default;
        StreamWebSocketInformation(StreamWebSocketInformation&&) noexcept = default;
        StreamWebSocketInformation& operator=(StreamWebSocketInformation const&) & noexcept = default;
        StreamWebSocketInformation& operator=(StreamWebSocketInformation&&) & noexcept = default;
    };
    struct __declspec(empty_bases) WebSocketClosedEventArgs : Windows::Networking::Sockets::IWebSocketClosedEventArgs
    {
        WebSocketClosedEventArgs(std::nullptr_t) noexcept {}
        WebSocketClosedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Sockets::IWebSocketClosedEventArgs(ptr, take_ownership_from_abi) {}
        WebSocketClosedEventArgs(WebSocketClosedEventArgs const&) noexcept = default;
        WebSocketClosedEventArgs(WebSocketClosedEventArgs&&) noexcept = default;
        WebSocketClosedEventArgs& operator=(WebSocketClosedEventArgs const&) & noexcept = default;
        WebSocketClosedEventArgs& operator=(WebSocketClosedEventArgs&&) & noexcept = default;
    };
    struct WebSocketError
    {
        WebSocketError() = delete;
        static auto GetStatus(int32_t hresult);
    };
    struct __declspec(empty_bases) WebSocketKeepAlive : Windows::ApplicationModel::Background::IBackgroundTask
    {
        WebSocketKeepAlive(std::nullptr_t) noexcept {}
        WebSocketKeepAlive(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Background::IBackgroundTask(ptr, take_ownership_from_abi) {}
        WebSocketKeepAlive();
        WebSocketKeepAlive(WebSocketKeepAlive const&) noexcept = default;
        WebSocketKeepAlive(WebSocketKeepAlive&&) noexcept = default;
        WebSocketKeepAlive& operator=(WebSocketKeepAlive const&) & noexcept = default;
        WebSocketKeepAlive& operator=(WebSocketKeepAlive&&) & noexcept = default;
    };
    struct __declspec(empty_bases) WebSocketServerCustomValidationRequestedEventArgs : Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs
    {
        WebSocketServerCustomValidationRequestedEventArgs(std::nullptr_t) noexcept {}
        WebSocketServerCustomValidationRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs(ptr, take_ownership_from_abi) {}
        WebSocketServerCustomValidationRequestedEventArgs(WebSocketServerCustomValidationRequestedEventArgs const&) noexcept = default;
        WebSocketServerCustomValidationRequestedEventArgs(WebSocketServerCustomValidationRequestedEventArgs&&) noexcept = default;
        WebSocketServerCustomValidationRequestedEventArgs& operator=(WebSocketServerCustomValidationRequestedEventArgs const&) & noexcept = default;
        WebSocketServerCustomValidationRequestedEventArgs& operator=(WebSocketServerCustomValidationRequestedEventArgs&&) & noexcept = default;
    };
}
#endif
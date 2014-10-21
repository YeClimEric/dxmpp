#ifndef DXMPP_ConnectionCallback_hpp
#define DXMPP_ConnectionCallback_hpp

#include "pugixml/pugixml.hpp"
#include "JID.hpp"
#include <string>
#include <boost/shared_ptr.hpp>
#include "Stanza.hpp"
#include <memory>

namespace DXMPP
{
    class Connection;
    typedef boost::shared_ptr<Connection> SharedConnection;
    
    class ConnectionCallback
    {
    public:
        enum class ConnectionState
        {
            NotConnected = 0,
            Connecting,
            Connected,
            
            ErrorConnecting,
            ErrorAuthenticating,
            ErrorUnknown
        };

        virtual void ConnectionStateChanged(ConnectionState NewState,
            SharedConnection Sender) = 0;

        virtual ~ConnectionCallback()
        {
        }
    };
}

#endif // DXMPP_ConnectionCallback_hpp

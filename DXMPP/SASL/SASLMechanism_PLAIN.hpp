//
//  SASLMechanism_PLAIN.hpp
//  DXMPP
//
//  Created by Stefan Karlsson on 31/05/14.
//  Copyright (c) 2014 Deus ex Machinae. All rights reserved.
//

#ifndef DXMPP_SASLMechanism_PLAIN_hpp
#define DXMPP_SASLMechanism_PLAIN_hpp

#include "SASLMechanism.hpp"

namespace DXMPP
{
    namespace SASL
    {
        namespace Weak
        {
            class SASL_Mechanism_PLAIN : public SASLMechanism
            {
            public:
                void Begin();
                
                SASL_Mechanism_PLAIN(const RawWriter &Writer,
                    const JID &MyJID, 
                    const std::string &Password)        
                    :SASLMechanism(Writer, MyJID, Password)
                {   
                }            
                
                void Challenge(const pugi::xpath_node &challenge);
            };
        }
    }
}


#endif // DXMPP_SASLMechanism_PLAIN_hpp

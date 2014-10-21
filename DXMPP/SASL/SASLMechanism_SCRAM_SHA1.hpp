//
//  SASLMechanism_SCRAM_SHA1.hpp
//  DXMPP
//
//  Created by Stefan Karlsson on 31/05/14.
//  Copyright (c) 2014 Deus ex Machinae. All rights reserved.
//

#ifndef DXMPP_SASLMechanism_SCRAM_SHA1_hpp
#define DXMPP_SASLMechanism_SCRAM_SHA1_hpp

#include "SASLMechanism.hpp"

#include <cryptopp/cryptlib.h>
#include <cryptopp/sha.h>

namespace DXMPP
{
    namespace SASL
    {
        typedef CryptoPP::SHA1 SHAVersion; // CryptoPP::SHA256
    
        class SASL_Mechanism_SCRAM_SHA1 : public SASLMechanism
        {
        public:
            void Begin();
            
            SASL_Mechanism_SCRAM_SHA1(const RawWriter &Writer,
                const JID &MyJID, 
                const std::string &Password)        
                :SASLMechanism(Writer, MyJID, Password)
            {   
            }            
            
            void Challenge(const pugi::xpath_node &challenge);
        };
    }
}


#endif // DXMPP_SASLMechanism_SCRAM_SHA1_hpp

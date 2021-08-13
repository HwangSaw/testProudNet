﻿  






// Generated by PIDL compiler.
// Do not modify this file, but modify the source .pidl file.
   
#pragma once


#include "S2C_common.h"

     
namespace S2C {


	class Stub : public ::Proud::IRmiStub
	{
	public:
               
		virtual bool Chat ( ::Proud::HostID, ::Proud::RmiContext& , const Proud::String & , const int & , const float & )		{ 
			return false;
		} 

#define DECRMI_S2C_Chat bool Chat ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const Proud::String & a, const int & b, const float & c) PN_OVERRIDE

#define DEFRMI_S2C_Chat(DerivedClass) bool DerivedClass::Chat ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const Proud::String & a, const int & b, const float & c)
#define CALL_S2C_Chat Chat ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const Proud::String & a, const int & b, const float & c)
#define PARAM_S2C_Chat ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const Proud::String & a, const int & b, const float & c)
               
		virtual bool ShowChat ( ::Proud::HostID, ::Proud::RmiContext& , const Proud::String & , const int & , const float & )		{ 
			return false;
		} 

#define DECRMI_S2C_ShowChat bool ShowChat ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const Proud::String & a, const int & b, const float & c) PN_OVERRIDE

#define DEFRMI_S2C_ShowChat(DerivedClass) bool DerivedClass::ShowChat ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const Proud::String & a, const int & b, const float & c)
#define CALL_S2C_ShowChat ShowChat ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const Proud::String & a, const int & b, const float & c)
#define PARAM_S2C_ShowChat ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const Proud::String & a, const int & b, const float & c)
               
		virtual bool SystemChat ( ::Proud::HostID, ::Proud::RmiContext& , const Proud::String & )		{ 
			return false;
		} 

#define DECRMI_S2C_SystemChat bool SystemChat ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const Proud::String & txt) PN_OVERRIDE

#define DEFRMI_S2C_SystemChat(DerivedClass) bool DerivedClass::SystemChat ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const Proud::String & txt)
#define CALL_S2C_SystemChat SystemChat ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const Proud::String & txt)
#define PARAM_S2C_SystemChat ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const Proud::String & txt)
               
		virtual bool P2PChat ( ::Proud::HostID, ::Proud::RmiContext& , const Proud::String & , const int & , const float & )		{ 
			return false;
		} 

#define DECRMI_S2C_P2PChat bool P2PChat ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const Proud::String & a, const int & b, const float & c) PN_OVERRIDE

#define DEFRMI_S2C_P2PChat(DerivedClass) bool DerivedClass::P2PChat ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const Proud::String & a, const int & b, const float & c)
#define CALL_S2C_P2PChat P2PChat ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const Proud::String & a, const int & b, const float & c)
#define PARAM_S2C_P2PChat ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const Proud::String & a, const int & b, const float & c)
 
		virtual bool ProcessReceivedMessage(::Proud::CReceivedMessage &pa, void* hostTag) PN_OVERRIDE;
		static const PNTCHAR* RmiName_Chat;
		static const PNTCHAR* RmiName_ShowChat;
		static const PNTCHAR* RmiName_SystemChat;
		static const PNTCHAR* RmiName_P2PChat;
		static const PNTCHAR* RmiName_First;
		virtual ::Proud::RmiID* GetRmiIDList() PN_OVERRIDE { return g_RmiIDList; }
		virtual int GetRmiIDListCount() PN_OVERRIDE { return g_RmiIDListCount; }
	};

#ifdef SUPPORTS_CPP11 
	
	class StubFunctional : public Stub 
	{
	public:
               
		std::function< bool ( ::Proud::HostID, ::Proud::RmiContext& , const Proud::String & , const int & , const float & ) > Chat_Function;
		virtual bool Chat ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const Proud::String & a, const int & b, const float & c) 
		{ 
			if (Chat_Function==nullptr) 
				return true; 
			return Chat_Function(remote,rmiContext, a, b, c); 
		}

               
		std::function< bool ( ::Proud::HostID, ::Proud::RmiContext& , const Proud::String & , const int & , const float & ) > ShowChat_Function;
		virtual bool ShowChat ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const Proud::String & a, const int & b, const float & c) 
		{ 
			if (ShowChat_Function==nullptr) 
				return true; 
			return ShowChat_Function(remote,rmiContext, a, b, c); 
		}

               
		std::function< bool ( ::Proud::HostID, ::Proud::RmiContext& , const Proud::String & ) > SystemChat_Function;
		virtual bool SystemChat ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const Proud::String & txt) 
		{ 
			if (SystemChat_Function==nullptr) 
				return true; 
			return SystemChat_Function(remote,rmiContext, txt); 
		}

               
		std::function< bool ( ::Proud::HostID, ::Proud::RmiContext& , const Proud::String & , const int & , const float & ) > P2PChat_Function;
		virtual bool P2PChat ( ::Proud::HostID remote, ::Proud::RmiContext& rmiContext , const Proud::String & a, const int & b, const float & c) 
		{ 
			if (P2PChat_Function==nullptr) 
				return true; 
			return P2PChat_Function(remote,rmiContext, a, b, c); 
		}

	};
#endif

}


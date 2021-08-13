﻿  





// Generated by PIDL compiler.
// Do not modify this file, but modify the source .pidl file.

  
#include "S2C_stub.h"


const unsigned char sz_S2C_stub_hRmi[] = 
{ 0x00, 0x99, 0xaa, 0xbb, 0xcc, 0xdd, 0xff, 0x00, 0x99, 0xaa, 0xbb, 0xcc, 0xdd, 0xff,
0xaa, 0xbb, 0xcc, 0xdd, 0xff,0x99, 0xaa, 0xbb, 0xcc, 0x99, 0xaa, 0xdd, 0xff, 0x00 };   


namespace S2C {


	bool Stub::ProcessReceivedMessage(::Proud::CReceivedMessage &pa, void* hostTag) 
	{
#ifndef __FreeBSD__ 
		{
			// unusable but required. you may ignore it, because it does not occur any worthless load.
			unsigned char x = sz_S2C_stub_hRmi[0]; 
			x++; 
		}
#endif
		::Proud::HostID remote=pa.GetRemoteHostID();
		if(remote==::Proud::HostID_None)
		{
			ShowUnknownHostIDWarning(remote);
		}

		::Proud::CMessage &__msg=pa.GetReadOnlyMessage();
		int orgReadOffset = __msg.GetReadOffset();

		::Proud::RmiID __rmiID;
		if(!__msg.Read(__rmiID))
			goto __fail;
					
		switch((int)__rmiID) // case is to prevent from clang compile error
		{
			case Rmi_Chat:
				{
					::Proud::RmiContext ctx;
					ctx.m_rmiID = __rmiID;
					ctx.m_sentFrom=pa.GetRemoteHostID();
					ctx.m_relayed=pa.IsRelayed();
					ctx.m_hostTag = hostTag;
					ctx.m_encryptMode = pa.GetEncryptMode();
					ctx.m_compressMode = pa.GetCompressMode();
			
			        if(BeforeDeserialize(remote, ctx, __msg) == false)
			        {
			            // The user don't want to call the RMI function. 
						// So, We fake that it has been already called.
						__msg.SetReadOffset(__msg.GetLength());
			            return true;
			        }
			
					Proud::String a; __msg >> a;
					int b; __msg >> b;
					float c; __msg >> c;
					m_core->PostCheckReadMessage(__msg,RmiName_Chat);
					
			
					if(m_enableNotifyCallFromStub && !m_internalUse)
					{
						::Proud::String parameterString;
						
						::Proud::AppendTextOut(parameterString,a);	
										
						parameterString += _PNT(", ");
						::Proud::AppendTextOut(parameterString,b);	
										
						parameterString += _PNT(", ");
						::Proud::AppendTextOut(parameterString,c);	
						
						NotifyCallFromStub(remote, (::Proud::RmiID)Rmi_Chat, 
							RmiName_Chat,parameterString);
			
			#ifdef VIZAGENT
						m_core->Viz_NotifyRecvToStub(remote, (::Proud::RmiID)Rmi_Chat, 
							RmiName_Chat, parameterString);
			#endif
					}
					else if(!m_internalUse)
					{
			#ifdef VIZAGENT
						m_core->Viz_NotifyRecvToStub(remote, (::Proud::RmiID)Rmi_Chat, 
							RmiName_Chat, _PNT(""));
			#endif
					}
						
					int64_t __t0 = 0;
					if(!m_internalUse && m_enableStubProfiling)
					{
						::Proud::BeforeRmiSummary summary;
						summary.m_rmiID = (::Proud::RmiID)Rmi_Chat;
						summary.m_rmiName = RmiName_Chat;
						summary.m_hostID = remote;
						summary.m_hostTag = hostTag;
						BeforeRmiInvocation(summary);
			
						__t0 = ::Proud::GetPreciseCurrentTimeMs();
					}
						
					// Call this method.
					bool __ret = Chat (remote,ctx , a, b, c );
						
					if(__ret==false)
					{
						// Error: RMI function that a user did not create has been called. 
						m_core->ShowNotImplementedRmiWarning(RmiName_Chat);
					}
						
					if(!m_internalUse && m_enableStubProfiling)
					{
						::Proud::AfterRmiSummary summary;
						summary.m_rmiID = (::Proud::RmiID)Rmi_Chat;
						summary.m_rmiName = RmiName_Chat;
						summary.m_hostID = remote;
						summary.m_hostTag = hostTag;
						int64_t __t1;
			
						__t1 = ::Proud::GetPreciseCurrentTimeMs();
			
						summary.m_elapsedTime = (uint32_t)(__t1 - __t0);
						AfterRmiInvocation(summary);
					}
				}
				break;
			case Rmi_ShowChat:
				{
					::Proud::RmiContext ctx;
					ctx.m_rmiID = __rmiID;
					ctx.m_sentFrom=pa.GetRemoteHostID();
					ctx.m_relayed=pa.IsRelayed();
					ctx.m_hostTag = hostTag;
					ctx.m_encryptMode = pa.GetEncryptMode();
					ctx.m_compressMode = pa.GetCompressMode();
			
			        if(BeforeDeserialize(remote, ctx, __msg) == false)
			        {
			            // The user don't want to call the RMI function. 
						// So, We fake that it has been already called.
						__msg.SetReadOffset(__msg.GetLength());
			            return true;
			        }
			
					Proud::String a; __msg >> a;
					int b; __msg >> b;
					float c; __msg >> c;
					m_core->PostCheckReadMessage(__msg,RmiName_ShowChat);
					
			
					if(m_enableNotifyCallFromStub && !m_internalUse)
					{
						::Proud::String parameterString;
						
						::Proud::AppendTextOut(parameterString,a);	
										
						parameterString += _PNT(", ");
						::Proud::AppendTextOut(parameterString,b);	
										
						parameterString += _PNT(", ");
						::Proud::AppendTextOut(parameterString,c);	
						
						NotifyCallFromStub(remote, (::Proud::RmiID)Rmi_ShowChat, 
							RmiName_ShowChat,parameterString);
			
			#ifdef VIZAGENT
						m_core->Viz_NotifyRecvToStub(remote, (::Proud::RmiID)Rmi_ShowChat, 
							RmiName_ShowChat, parameterString);
			#endif
					}
					else if(!m_internalUse)
					{
			#ifdef VIZAGENT
						m_core->Viz_NotifyRecvToStub(remote, (::Proud::RmiID)Rmi_ShowChat, 
							RmiName_ShowChat, _PNT(""));
			#endif
					}
						
					int64_t __t0 = 0;
					if(!m_internalUse && m_enableStubProfiling)
					{
						::Proud::BeforeRmiSummary summary;
						summary.m_rmiID = (::Proud::RmiID)Rmi_ShowChat;
						summary.m_rmiName = RmiName_ShowChat;
						summary.m_hostID = remote;
						summary.m_hostTag = hostTag;
						BeforeRmiInvocation(summary);
			
						__t0 = ::Proud::GetPreciseCurrentTimeMs();
					}
						
					// Call this method.
					bool __ret = ShowChat (remote,ctx , a, b, c );
						
					if(__ret==false)
					{
						// Error: RMI function that a user did not create has been called. 
						m_core->ShowNotImplementedRmiWarning(RmiName_ShowChat);
					}
						
					if(!m_internalUse && m_enableStubProfiling)
					{
						::Proud::AfterRmiSummary summary;
						summary.m_rmiID = (::Proud::RmiID)Rmi_ShowChat;
						summary.m_rmiName = RmiName_ShowChat;
						summary.m_hostID = remote;
						summary.m_hostTag = hostTag;
						int64_t __t1;
			
						__t1 = ::Proud::GetPreciseCurrentTimeMs();
			
						summary.m_elapsedTime = (uint32_t)(__t1 - __t0);
						AfterRmiInvocation(summary);
					}
				}
				break;
			case Rmi_SystemChat:
				{
					::Proud::RmiContext ctx;
					ctx.m_rmiID = __rmiID;
					ctx.m_sentFrom=pa.GetRemoteHostID();
					ctx.m_relayed=pa.IsRelayed();
					ctx.m_hostTag = hostTag;
					ctx.m_encryptMode = pa.GetEncryptMode();
					ctx.m_compressMode = pa.GetCompressMode();
			
			        if(BeforeDeserialize(remote, ctx, __msg) == false)
			        {
			            // The user don't want to call the RMI function. 
						// So, We fake that it has been already called.
						__msg.SetReadOffset(__msg.GetLength());
			            return true;
			        }
			
					Proud::String txt; __msg >> txt;
					m_core->PostCheckReadMessage(__msg,RmiName_SystemChat);
					
			
					if(m_enableNotifyCallFromStub && !m_internalUse)
					{
						::Proud::String parameterString;
						
						::Proud::AppendTextOut(parameterString,txt);	
						
						NotifyCallFromStub(remote, (::Proud::RmiID)Rmi_SystemChat, 
							RmiName_SystemChat,parameterString);
			
			#ifdef VIZAGENT
						m_core->Viz_NotifyRecvToStub(remote, (::Proud::RmiID)Rmi_SystemChat, 
							RmiName_SystemChat, parameterString);
			#endif
					}
					else if(!m_internalUse)
					{
			#ifdef VIZAGENT
						m_core->Viz_NotifyRecvToStub(remote, (::Proud::RmiID)Rmi_SystemChat, 
							RmiName_SystemChat, _PNT(""));
			#endif
					}
						
					int64_t __t0 = 0;
					if(!m_internalUse && m_enableStubProfiling)
					{
						::Proud::BeforeRmiSummary summary;
						summary.m_rmiID = (::Proud::RmiID)Rmi_SystemChat;
						summary.m_rmiName = RmiName_SystemChat;
						summary.m_hostID = remote;
						summary.m_hostTag = hostTag;
						BeforeRmiInvocation(summary);
			
						__t0 = ::Proud::GetPreciseCurrentTimeMs();
					}
						
					// Call this method.
					bool __ret = SystemChat (remote,ctx , txt );
						
					if(__ret==false)
					{
						// Error: RMI function that a user did not create has been called. 
						m_core->ShowNotImplementedRmiWarning(RmiName_SystemChat);
					}
						
					if(!m_internalUse && m_enableStubProfiling)
					{
						::Proud::AfterRmiSummary summary;
						summary.m_rmiID = (::Proud::RmiID)Rmi_SystemChat;
						summary.m_rmiName = RmiName_SystemChat;
						summary.m_hostID = remote;
						summary.m_hostTag = hostTag;
						int64_t __t1;
			
						__t1 = ::Proud::GetPreciseCurrentTimeMs();
			
						summary.m_elapsedTime = (uint32_t)(__t1 - __t0);
						AfterRmiInvocation(summary);
					}
				}
				break;
			case Rmi_P2PChat:
				{
					::Proud::RmiContext ctx;
					ctx.m_rmiID = __rmiID;
					ctx.m_sentFrom=pa.GetRemoteHostID();
					ctx.m_relayed=pa.IsRelayed();
					ctx.m_hostTag = hostTag;
					ctx.m_encryptMode = pa.GetEncryptMode();
					ctx.m_compressMode = pa.GetCompressMode();
			
			        if(BeforeDeserialize(remote, ctx, __msg) == false)
			        {
			            // The user don't want to call the RMI function. 
						// So, We fake that it has been already called.
						__msg.SetReadOffset(__msg.GetLength());
			            return true;
			        }
			
					Proud::String a; __msg >> a;
					int b; __msg >> b;
					float c; __msg >> c;
					m_core->PostCheckReadMessage(__msg,RmiName_P2PChat);
					
			
					if(m_enableNotifyCallFromStub && !m_internalUse)
					{
						::Proud::String parameterString;
						
						::Proud::AppendTextOut(parameterString,a);	
										
						parameterString += _PNT(", ");
						::Proud::AppendTextOut(parameterString,b);	
										
						parameterString += _PNT(", ");
						::Proud::AppendTextOut(parameterString,c);	
						
						NotifyCallFromStub(remote, (::Proud::RmiID)Rmi_P2PChat, 
							RmiName_P2PChat,parameterString);
			
			#ifdef VIZAGENT
						m_core->Viz_NotifyRecvToStub(remote, (::Proud::RmiID)Rmi_P2PChat, 
							RmiName_P2PChat, parameterString);
			#endif
					}
					else if(!m_internalUse)
					{
			#ifdef VIZAGENT
						m_core->Viz_NotifyRecvToStub(remote, (::Proud::RmiID)Rmi_P2PChat, 
							RmiName_P2PChat, _PNT(""));
			#endif
					}
						
					int64_t __t0 = 0;
					if(!m_internalUse && m_enableStubProfiling)
					{
						::Proud::BeforeRmiSummary summary;
						summary.m_rmiID = (::Proud::RmiID)Rmi_P2PChat;
						summary.m_rmiName = RmiName_P2PChat;
						summary.m_hostID = remote;
						summary.m_hostTag = hostTag;
						BeforeRmiInvocation(summary);
			
						__t0 = ::Proud::GetPreciseCurrentTimeMs();
					}
						
					// Call this method.
					bool __ret = P2PChat (remote,ctx , a, b, c );
						
					if(__ret==false)
					{
						// Error: RMI function that a user did not create has been called. 
						m_core->ShowNotImplementedRmiWarning(RmiName_P2PChat);
					}
						
					if(!m_internalUse && m_enableStubProfiling)
					{
						::Proud::AfterRmiSummary summary;
						summary.m_rmiID = (::Proud::RmiID)Rmi_P2PChat;
						summary.m_rmiName = RmiName_P2PChat;
						summary.m_hostID = remote;
						summary.m_hostTag = hostTag;
						int64_t __t1;
			
						__t1 = ::Proud::GetPreciseCurrentTimeMs();
			
						summary.m_elapsedTime = (uint32_t)(__t1 - __t0);
						AfterRmiInvocation(summary);
					}
				}
				break;
		default:
			goto __fail;
		}		
		return true;
__fail:
		{
			__msg.SetReadOffset(orgReadOffset);
			return false;
		}
	}
	#ifdef USE_RMI_NAME_STRING
	const PNTCHAR* Stub::RmiName_Chat =_PNT("Chat");
	#else
	const PNTCHAR* Stub::RmiName_Chat =_PNT("");
	#endif
	#ifdef USE_RMI_NAME_STRING
	const PNTCHAR* Stub::RmiName_ShowChat =_PNT("ShowChat");
	#else
	const PNTCHAR* Stub::RmiName_ShowChat =_PNT("");
	#endif
	#ifdef USE_RMI_NAME_STRING
	const PNTCHAR* Stub::RmiName_SystemChat =_PNT("SystemChat");
	#else
	const PNTCHAR* Stub::RmiName_SystemChat =_PNT("");
	#endif
	#ifdef USE_RMI_NAME_STRING
	const PNTCHAR* Stub::RmiName_P2PChat =_PNT("P2PChat");
	#else
	const PNTCHAR* Stub::RmiName_P2PChat =_PNT("");
	#endif
	const PNTCHAR* Stub::RmiName_First = RmiName_Chat;

}



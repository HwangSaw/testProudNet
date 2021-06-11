#pragma once
#include "pch.h"
using namespace Proud;

class CSngServer : public INetServerEvent
{
public:
	CSngServer();
	~CSngServer();
	virtual void OnClientJoin(CNetClientInfo* clientInfo) override;
	
	virtual void OnClientLeave(CNetClientInfo* clientInfo, ErrorInfo* errorinfo, const ByteArray& comment) override;
	
	virtual void OnClientOffline(CRemoteOfflineEventArgs& /*args*/) override;
	
	virtual void OnClientOnline(CRemoteOnlineEventArgs& /*args*/) override;

	virtual void OnP2PGroupJoinMemberAckComplete(HostID groupHostID, HostID memberHostID, ErrorType result) override;

	virtual void OnUserWorkerThreadBegin() override;

	virtual void OnUserWorkerThreadEnd() override;

	virtual void OnClientHackSuspected(HostID /*clientID*/, HackType /*hackType*/) override;

	virtual void OnP2PGroupRemoved(HostID /*groupID*/) override;

	virtual void OnError(ErrorInfo* errorInfo) override;

	virtual void OnWarning(ErrorInfo* errorInfo) override;

	virtual void OnInformation(ErrorInfo* errorInfo) override;

	virtual void OnException(const Exception& e) override;

	virtual void OnNoRmiProcessed(RmiID rmiID) override;

};


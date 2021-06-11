#include "stdafx.h"
#include "PCH.h"
#include "CSngServer.h"

CSngServer::CSngServer()
{
	//m_netServer = CNetServer::Create();
	//m_netServer->SetEventSink(this); // for receiving events
}

CSngServer::~CSngServer()
{
}

void CSngServer::OnClientJoin(CNetClientInfo* clientInfo)
{
}

void CSngServer::OnClientLeave(CNetClientInfo* clientInfo, ErrorInfo* errorinfo, const ByteArray& comment)
{
}

void CSngServer::OnClientOffline(CRemoteOfflineEventArgs&)
{
}

void CSngServer::OnClientOnline(CRemoteOnlineEventArgs&)
{
}

void CSngServer::OnP2PGroupJoinMemberAckComplete(HostID groupHostID, HostID memberHostID, ErrorType result)
{
}

void CSngServer::OnUserWorkerThreadBegin()
{
}

void CSngServer::OnUserWorkerThreadEnd()
{
}

void CSngServer::OnClientHackSuspected(HostID, HackType)
{
}

void CSngServer::OnP2PGroupRemoved(HostID)
{
}

void CSngServer::OnError(ErrorInfo* errorInfo)
{
}

void CSngServer::OnWarning(ErrorInfo* errorInfo)
{
}

void CSngServer::OnInformation(ErrorInfo* errorInfo)
{
}

void CSngServer::OnException(const Exception& e)
{
}

void CSngServer::OnNoRmiProcessed(RmiID rmiID)
{
}

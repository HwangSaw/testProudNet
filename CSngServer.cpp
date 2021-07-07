#include "stdafx.h"
#include "PCH.h"
#include "CSngServer.h"

CSngServer::CSngServer()
{

}

CSngServer::~CSngServer()
{
	//delete m_netServer;
}

void CSngServer::Start()
{
	/*ErrInfo err;
	CStartServerParameter sp;
	sp.m_protocolVersion = g_sngProtocolVersion;
	sp.m_tcpPorts.Add(12349);
	m_netServer->Start(sp, err);*/
}

void CSngServer::OnClientJoin(CNetClientInfo* clientInfo)
{
	printf("%s: %d\n", __FUNCTIONT__, clientInfo->m_HostID);
}

void CSngServer::OnClientLeave(CNetClientInfo* clientInfo, ErrorInfo* errorinfo, const ByteArray& comment)
{
	printf("%s: %d\n", __FUNCTIONT__, clientInfo->m_HostID);
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

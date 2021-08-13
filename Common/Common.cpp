// Common.cpp : 정적 라이브러리를 위한 함수를 정의합니다.
//

//

#include "pch.h"
#include "Common.h"
#include "framework.h"

static const PNGUID protocolV =
{ 0xbe3ab433,0x18ef,0x44fa,{0xbe,0xcb,0x50,0x8a,0x6f,0x9d,0x1b,0x77} };


Guid g_sngProtocolVersion = Guid::From(protocolV);


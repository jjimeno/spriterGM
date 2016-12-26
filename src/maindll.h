//-----------------------------------------------------------------------------
// Copyright (c) 2016 Vitaliy Zhygotsky, Leichanka Aliaksandr
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to
// deal in the Software without restriction, including without limitation the
// rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
// sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
// IN THE SOFTWARE.
//-----------------------------------------------------------------------------
#ifdef _WIN32

#define WIN32_LEAN_AND_MEAN 

#include <windows.h>

#define DLLEXPORT extern "C" __declspec(dllexport)

BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		break;
	case DLL_THREAD_ATTACH:
		break;
	case DLL_THREAD_DETACH:
		break;
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

#endif

#if defined(__linux__) || defined(__unix__ )
#define DLLEXPORT extern "C"
#endif

#include <string>

DLLEXPORT double spriter_LoadModel(const char *pFile);

DLLEXPORT double spriter_CreateInstance(double ModelIndex, const char *pInstanceName, double bEnableBones);

DLLEXPORT double spriter_UpdateInstance(double ModelIndex, double InstanceIndex, double TimeElapsed);

DLLEXPORT double spriter_GetSpriteInfoCount(double ModelIndex, double InstanceIndex);

#if defined(ANDROID)
DLLEXPORT std::string spriter_GetSpriteInfoFileName(double ModelIndex, double InstanceIndex, double SpriteInfoIndex);

DLLEXPORT std::string spriter_GetSpriteInfoString(double ModelIndex, double InstanceIndex, double SpriteInfoIndex);
#else
DLLEXPORT const char *spriter_GetSpriteInfoFileName(double ModelIndex, double InstanceIndex, double SpriteInfoIndex);

DLLEXPORT const char *spriter_GetSpriteInfoString(double ModelIndex, double InstanceIndex, double SpriteInfoIndex);
#endif

DLLEXPORT double spriter_GetSpriteInfoPositionX(double ModelIndex, double InstanceIndex, double SpriteInfoIndex);

DLLEXPORT double spriter_GetSpriteInfoPositionY(double ModelIndex, double InstanceIndex, double SpriteInfoIndex);

DLLEXPORT double spriter_GetSpriteInfoPivotX(double ModelIndex, double InstanceIndex, double SpriteInfoIndex);

DLLEXPORT double spriter_GetSpriteInfoPivotY(double ModelIndex, double InstanceIndex, double SpriteInfoIndex);

DLLEXPORT double spriter_GetSpriteInfoSizeX(double ModelIndex, double InstanceIndex, double SpriteInfoIndex);

DLLEXPORT double spriter_GetSpriteInfoSizeY(double ModelIndex, double InstanceIndex, double SpriteInfoIndex);

DLLEXPORT double spriter_GetSpriteInfoScaleX(double ModelIndex, double InstanceIndex, double SpriteInfoIndex);

DLLEXPORT double spriter_GetSpriteInfoScaleY(double ModelIndex, double InstanceIndex, double SpriteInfoIndex);

DLLEXPORT double spriter_GetSpriteInfoAngle(double ModelIndex, double InstanceIndex, double SpriteInfoIndex);

DLLEXPORT double spriter_IsGetSpriteInfoRender(double ModelIndex, double InstanceIndex, double SpriteInfoIndex);

DLLEXPORT double spriter_GetSpriteInfoGMRenderPositionX(double ModelIndex, double InstanceIndex, double SpriteInfoIndex);

DLLEXPORT double spriter_GetSpriteInfoGMRenderPositionY(double ModelIndex, double InstanceIndex, double SpriteInfoIndex);

DLLEXPORT double spriter_GetSpriteInfoAlpha(double ModelIndex, double InstanceIndex, double SpriteInfoIndex);

DLLEXPORT double spriter_GetSpriteInfoType(double ModelIndex, double InstanceIndex, double SpriteInfoIndex);

DLLEXPORT double spriter_SetInstanceCurrentAnimation(double ModelIndex, double InstanceIndex, const char *pAnimationName, double BlendTime);

DLLEXPORT double spriter_SetInstancePosition(double ModelIndex, double InstanceIndex, double px, double py);

DLLEXPORT double spriter_GetInstancePositionX(double ModelIndex, double InstanceIndex);

DLLEXPORT double spriter_GetInstancePositionY(double ModelIndex, double InstanceIndex);

DLLEXPORT double spriter_SetInstanceScale(double ModelIndex, double InstanceIndex, double sx, double sy);

DLLEXPORT double spriter_SetInstanceAngle(double ModelIndex, double InstanceIndex, double angle);

DLLEXPORT double spriter_ApplyInstanceCharacterMap(double ModelIndex, double InstanceIndex, const char *charMap);

DLLEXPORT double spriter_RemoveInstanceCharacterMap(double ModelIndex, double InstanceIndex, const char *charMap);

DLLEXPORT double spriter_RemoveInstanceAllCharacterMap(double ModelIndex, double InstanceIndex);

DLLEXPORT double spriter_SetInstancePlaybackSpeedRatio(double ModelIndex, double InstanceIndex, double PlaybackSpeedRatio);

DLLEXPORT double spriter_InstanceStartResumePlayback(double ModelIndex, double InstanceIndex);

DLLEXPORT double spriter_InstancePausePlayback(double ModelIndex, double InstanceIndex);

DLLEXPORT double spriter_InstanceSetTimeRatio(double ModelIndex, double InstanceIndex, double TimeRatio);

DLLEXPORT double spriter_InstanceAnimationJustFinished(double ModelIndex, double InstanceIndex, double bLooped);

DLLEXPORT double spriter_InstanceGetTriggerInfoCount(double ModelIndex, double InstanceIndex);

#if defined(ANDROID)
DLLEXPORT std::string spriter_InstanceGetTriggerInfoName(double ModelIndex, double InstanceIndex, double TriggerIndex);
#else
DLLEXPORT const char* spriter_InstanceGetTriggerInfoName(double ModelIndex, double InstanceIndex, double TriggerIndex);
#endif

DLLEXPORT double spriter_InstanceGetSoundInfoCount(double ModelIndex, double InstanceIndex);

#if defined(ANDROID)
DLLEXPORT std::string spriter_InstanceGetSoundInfoName(double ModelIndex, double InstanceIndex, double SoundIndex);
#else
DLLEXPORT const char* spriter_InstanceGetSoundInfoName(double ModelIndex, double InstanceIndex, double SoundIndex);
#endif

DLLEXPORT double spriter_GetErrorsCount();

#if defined(ANDROID)
DLLEXPORT std::string spriter_GetLastError();
#else
DLLEXPORT const char* spriter_GetLastError();
#endif

DLLEXPORT double spriter_ForceGarbageCollection();

DLLEXPORT double spriter_AddLoadedSprite(double ModelIndex, const char *pSpriteName, double SpritePtr);

DLLEXPORT double spriter_FindLoadedSprite(double ModelIndex, const char *pSpriteName);

DLLEXPORT double spriter_GetNumSprites(double ModelIndex);

#if defined(ANDROID)
DLLEXPORT std::string spriter_GetSprite(double ModelIndex, double SpriteIndex);
#else
DLLEXPORT const char* spriter_GetSprite(double ModelIndex, double SpriteIndex);
#endif

DLLEXPORT double spriter_GetSpriteInfoSpriteIndex(double ModelIndex, double InstanceIndex, double SpriteInfoIndex);

DLLEXPORT double spriter_SetLoadedSpriteTexelSize(double ModelIndex, const char *pSpriteName, double TexelWidth, double TexelHeight);

DLLEXPORT double spriter_SetLoadedSpriteSize(double ModelIndex, const char *pSpriteName, double TextureWidth, double TextureHeight);

DLLEXPORT double spriter_GetSpriteInfoMeshPointX(double ModelIndex, double InstanceIndex, double SpriteInfoIndex, double PointIndex);
DLLEXPORT double spriter_GetSpriteInfoMeshPointY(double ModelIndex, double InstanceIndex, double SpriteInfoIndex, double PointIndex);

DLLEXPORT double spriter_GetSpriteInfoMeshUVX(double ModelIndex, double InstanceIndex, double SpriteInfoIndex, double PointIndex);
DLLEXPORT double spriter_GetSpriteInfoMeshUVY(double ModelIndex, double InstanceIndex, double SpriteInfoIndex, double PointIndex);

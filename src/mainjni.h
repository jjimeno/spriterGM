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

#ifndef ANDROID
#define ANDROID
#endif

#include <jni.h>
#include <android/asset_manager.h>
#include <android/asset_manager_jni.h>

#ifndef _Included_com_libspritergm_spriterGMNative
#define _Included_com_libspritergm_spriterGMNative
#ifdef __cplusplus
extern "C" {
#endif
	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_SetAssetManager
	* Signature: (Ljava/lang/Object;)V
	*/
	JNIEXPORT void JNICALL Java_com_libspritergm_spriterGMNative_spriter_1SetAssetManager
	(JNIEnv *, jclass, jobject);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_LoadModel
	* Signature: (Ljava/lang/String;)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1LoadModel
	(JNIEnv *, jclass, jstring);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_CreateInstance
	* Signature: (DLjava/lang/String/;)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1CreateInstance
	(JNIEnv *, jclass, jdouble, jstring, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_UpdateInstance
	* Signature: (DDD)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1UpdateInstance
	(JNIEnv *, jclass, jdouble, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_GetObjectInfoCount
	* Signature: (DD)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1GetObjectInfoCount
	(JNIEnv *, jclass, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_GetObjectInfoFileName
	* Signature: (DDD)Ljava/lang/String;
	*/
	JNIEXPORT jstring JNICALL Java_com_libspritergm_spriterGMNative_spriter_1GetObjectInfoFileName
	(JNIEnv *, jclass, jdouble, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_GetObjectInfoString
	* Signature: (DDD)Ljava/lang/String;
	*/
	JNIEXPORT jstring JNICALL Java_com_libspritergm_spriterGMNative_spriter_1GetObjectInfoString
	(JNIEnv *, jclass, jdouble, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_GetObjectInfoPositionX
	* Signature: (DDD)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1GetObjectInfoPositionX
	(JNIEnv *, jclass, jdouble, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_GetObjectInfoPositionY
	* Signature: (DDD)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1GetObjectInfoPositionY
	(JNIEnv *, jclass, jdouble, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_GetObjectInfoPivotX
	* Signature: (DDD)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1GetObjectInfoPivotX
	(JNIEnv *, jclass, jdouble, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_GetObjectInfoPivotY
	* Signature: (DDD)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1GetObjectInfoPivotY
	(JNIEnv *, jclass, jdouble, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_GetObjectInfoSizeX
	* Signature: (DDD)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1GetObjectInfoSizeX
	(JNIEnv *, jclass, jdouble, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_GetObjectInfoSizeY
	* Signature: (DDD)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1GetObjectInfoSizeY
	(JNIEnv *, jclass, jdouble, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_GetObjectInfoScaleX
	* Signature: (DDD)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1GetObjectInfoScaleX
	(JNIEnv *, jclass, jdouble, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_GetObjectInfoScaleY
	* Signature: (DDD)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1GetObjectInfoScaleY
	(JNIEnv *, jclass, jdouble, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_GetObjectInfoAngle
	* Signature: (DDD)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1GetObjectInfoAngle
	(JNIEnv *, jclass, jdouble, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_IsGetObjectInfoRender
	* Signature: (DDD)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1IsGetObjectInfoRender
	(JNIEnv *, jclass, jdouble, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_GetObjectInfoGMRenderPositionX
	* Signature: (DDD)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1GetObjectInfoGMRenderPositionX
	(JNIEnv *, jclass, jdouble, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_GetObjectInfoGMRenderPositionY
	* Signature: (DDD)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1GetObjectInfoGMRenderPositionY
	(JNIEnv *, jclass, jdouble, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_GetObjectInfoAlpha
	* Signature: (DDD)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1GetObjectInfoAlpha
	(JNIEnv *, jclass, jdouble, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_GetObjectInfoType
	* Signature: (DDD)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1GetObjectInfoType
	(JNIEnv *, jclass, jdouble, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_SetInstanceCurrentAnimation
	* Signature: (DDLjava/lang/String;D)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1SetInstanceCurrentAnimation
	(JNIEnv *, jclass, jdouble, jdouble, jstring, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_SetInstancePosition
	* Signature: (DDDD)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1SetInstancePosition
	(JNIEnv *, jclass, jdouble, jdouble, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_GetInstancePositionX
	* Signature: (DD)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1GetInstancePositionX
	(JNIEnv *, jclass, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_GetInstancePositionY
	* Signature: (DD)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1GetInstancePositionY
	(JNIEnv *, jclass, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_SetInstanceScale
	* Signature: (DDDD)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1SetInstanceScale
	(JNIEnv *, jclass, jdouble, jdouble, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_SetInstanceAngle
	* Signature: (DDD)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1SetInstanceAngle
	(JNIEnv *, jclass, jdouble, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_ApplyInstanceCharacterMap
	* Signature: (DDLjava/lang/String;)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1ApplyInstanceCharacterMap
	(JNIEnv *, jclass, jdouble, jdouble, jstring);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_RemoveInstanceCharacterMap
	* Signature: (DDLjava/lang/String;)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1RemoveInstanceCharacterMap
	(JNIEnv *, jclass, jdouble, jdouble, jstring);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_RemoveInstanceAllCharacterMap
	* Signature: (DD)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1RemoveInstanceAllCharacterMap
	(JNIEnv *, jclass, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_SetInstancePlaybackSpeedRatio
	* Signature: (DDD)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1SetInstancePlaybackSpeedRatio
	(JNIEnv *, jclass, jdouble, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_InstanceStartResumePlayback
	* Signature: (DD)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1InstanceStartResumePlayback
	(JNIEnv *, jclass, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_InstancePausePlayback
	* Signature: (DD)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1InstancePausePlayback
	(JNIEnv *, jclass, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_InstanceSetTimeRatio
	* Signature: (DDD)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1InstanceSetTimeRatio
	(JNIEnv *, jclass, jdouble, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_InstanceAnimationJustFinished
	* Signature: (DDD)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1InstanceAnimationJustFinished
	(JNIEnv *, jclass, jdouble, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_InstanceGetTriggerInfoCount
	* Signature: (DD)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1InstanceGetTriggerInfoCount
	(JNIEnv *, jclass, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_InstanceGetTriggerInfoName
	* Signature: (DDD)Ljava/lang/String;
	*/
	JNIEXPORT jstring JNICALL Java_com_libspritergm_spriterGMNative_spriter_1InstanceGetTriggerInfoName
	(JNIEnv *, jclass, jdouble, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_InstanceGetSoundInfoCount
	* Signature: (DD)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1InstanceGetSoundInfoCount
	(JNIEnv *, jclass, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_InstanceGetSoundInfoName
	* Signature: (DDD)Ljava/lang/String;
	*/
	JNIEXPORT jstring JNICALL Java_com_libspritergm_spriterGMNative_spriter_1InstanceGetSoundInfoName
	(JNIEnv *, jclass, jdouble, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_GetErrorsCount
	* Signature: ()D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1GetErrorsCount
	(JNIEnv *, jclass);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_GetLastError
	* Signature: ()Ljava/lang/String;
	*/
	JNIEXPORT jstring JNICALL Java_com_libspritergm_spriterGMNative_spriter_1GetLastError
	(JNIEnv *, jclass);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_ForceGarbageCollection
	* Signature: ()D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1ForceGarbageCollection
	(JNIEnv *, jclass);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_AddLoadedSprite
	* Signature: (DLjava/lang/String;D)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1AddLoadedSprite
	(JNIEnv *, jclass, jdouble, jstring, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_FindLoadedSprite
	* Signature: (DLjava/lang/String;)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1FindLoadedSprite
	(JNIEnv *, jclass, jdouble, jstring);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_GetNumSprites
	* Signature: (D)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1GetNumSprites
	(JNIEnv *, jclass, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_GetSprite
	* Signature: (DD)Ljava/lang/String;
	*/
	JNIEXPORT jstring JNICALL Java_com_libspritergm_spriterGMNative_spriter_1GetSprite
	(JNIEnv *, jclass, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_GetObjectInfoSpriteIndex
	* Signature: (DDD)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1GetObjectInfoSpriteIndex
	(JNIEnv *, jclass, jdouble, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_SetLoadedSpriteTexelSize
	* Signature: (DLjava/lang/String;DD)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1SetLoadedSpriteTexelSize
	(JNIEnv *, jclass, jdouble, jstring, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_SetLoadedSpriteSize
	* Signature: (DLjava/lang/String;DD)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1SetLoadedSpriteSize
	(JNIEnv *, jclass, jdouble, jstring, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_GetObjectInfoMeshPointX
	* Signature: (DDDD)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1GetObjectInfoMeshPointX
	(JNIEnv *, jclass, jdouble, jdouble, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_GetObjectInfoMeshPointY
	* Signature: (DDDD)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1GetObjectInfoMeshPointY
	(JNIEnv *, jclass, jdouble, jdouble, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_GetObjectInfoMeshUVX
	* Signature: (DDDD)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1GetObjectInfoMeshUVX
	(JNIEnv *, jclass, jdouble, jdouble, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_GetObjectInfoMeshUVY
	* Signature: (DDDD)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1GetObjectInfoMeshUVY
	(JNIEnv *, jclass, jdouble, jdouble, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_DestroyInstance
	* Signature: (DD)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1DestroyInstance
	(JNIEnv *, jclass, jdouble, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_DestroyModel
	* Signature: (D)D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1DestroyModel
	(JNIEnv *, jclass, jdouble);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_DestroyAllModels
	* Signature: ()D
	*/
	JNIEXPORT jdouble JNICALL Java_com_libspritergm_spriterGMNative_spriter_1DestroyAllModels
	(JNIEnv *, jclass);

	/*
	* Class:     com_libspritergm_spriterGMNative
	* Method:    spriter_GetObjectInfoName
	* Signature: (DDD)Ljava/lang/String;
	*/
	JNIEXPORT jstring JNICALL Java_com_libspritergm_spriterGMNative_spriter_1GetObjectInfoName
	(JNIEnv *, jclass, jdouble, jdouble, jdouble);

#ifdef __cplusplus
}
#endif
#endif


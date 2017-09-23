#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// UnityEngine.Animation
struct Animation_t3727210792;
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct AudioConfigurationChangeHandler_t4052631899;
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
struct List_1_t3980935299;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t725120530;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t904005552;
// System.Char[]
struct CharU5BU5D_t359175764;
// UnityEngine.ParticleSystem
struct ParticleSystem_t4233840295;
// System.Void
struct Void_t1868834623;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3667749246;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t2125158515;
// UnityEngine.CharacterController
struct CharacterController_t3640951870;
// UnityEngine.Collider
struct Collider_t3095653511;
// UnityEngine.Rigidbody
struct Rigidbody_t2541962521;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3834608424;
// UnityEngine.GUIStyle
struct GUIStyle_t3557499391;
// UnityEngine.Collider2D
struct Collider2D_t3477793500;
// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct List_1_t3207600570;
// UnityEngine.RectOffset
struct RectOffset_t2859112449;
// System.String[]
struct StringU5BU5D_t4030817796;
// System.Int32[]
struct Int32U5BU5D_t1323596133;
// System.Action`1<UnityEngine.Font>
struct Action_1_t441564542;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t1561329457;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t1635427537;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t2219038502;
// UnityEngine.Object
struct Object_t3505064284;
// UnityEngine.AnimationState
struct AnimationState_t1590093807;
// UnityEngine.AnimationCurve
struct AnimationCurve_t172923095;
// UnityEngine.Font
struct Font_t4231826360;
// System.IAsyncResult
struct IAsyncResult_t2065532872;
// System.AsyncCallback
struct AsyncCallback_t3883221941;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t1690182171;
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t2368264920;
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t2908844095;
// System.Single[]
struct SingleU5BU5D_t940991545;
// UnityEngine.GUISkin
struct GUISkin_t2773911288;
// UnityEngineInternal.GenericStack
struct GenericStack_t3898559185;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t856939485;

struct ContactPoint_t3373976741 ;
struct Object_t3505064284_marshaled_com;
struct AnimationCurve_t172923095_marshaled_com;



#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef ENUMERATOR_T831346815_H
#define ENUMERATOR_T831346815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animation/Enumerator
struct  Enumerator_t831346815  : public RuntimeObject
{
public:
	// UnityEngine.Animation UnityEngine.Animation/Enumerator::m_Outer
	Animation_t3727210792 * ___m_Outer_0;
	// System.Int32 UnityEngine.Animation/Enumerator::m_CurrentIndex
	int32_t ___m_CurrentIndex_1;

public:
	inline static int32_t get_offset_of_m_Outer_0() { return static_cast<int32_t>(offsetof(Enumerator_t831346815, ___m_Outer_0)); }
	inline Animation_t3727210792 * get_m_Outer_0() const { return ___m_Outer_0; }
	inline Animation_t3727210792 ** get_address_of_m_Outer_0() { return &___m_Outer_0; }
	inline void set_m_Outer_0(Animation_t3727210792 * value)
	{
		___m_Outer_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Outer_0), value);
	}

	inline static int32_t get_offset_of_m_CurrentIndex_1() { return static_cast<int32_t>(offsetof(Enumerator_t831346815, ___m_CurrentIndex_1)); }
	inline int32_t get_m_CurrentIndex_1() const { return ___m_CurrentIndex_1; }
	inline int32_t* get_address_of_m_CurrentIndex_1() { return &___m_CurrentIndex_1; }
	inline void set_m_CurrentIndex_1(int32_t value)
	{
		___m_CurrentIndex_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T831346815_H
#ifndef AUDIOSETTINGS_T2844817120_H
#define AUDIOSETTINGS_T2844817120_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSettings
struct  AudioSettings_t2844817120  : public RuntimeObject
{
public:

public:
};

struct AudioSettings_t2844817120_StaticFields
{
public:
	// UnityEngine.AudioSettings/AudioConfigurationChangeHandler UnityEngine.AudioSettings::OnAudioConfigurationChanged
	AudioConfigurationChangeHandler_t4052631899 * ___OnAudioConfigurationChanged_0;

public:
	inline static int32_t get_offset_of_OnAudioConfigurationChanged_0() { return static_cast<int32_t>(offsetof(AudioSettings_t2844817120_StaticFields, ___OnAudioConfigurationChanged_0)); }
	inline AudioConfigurationChangeHandler_t4052631899 * get_OnAudioConfigurationChanged_0() const { return ___OnAudioConfigurationChanged_0; }
	inline AudioConfigurationChangeHandler_t4052631899 ** get_address_of_OnAudioConfigurationChanged_0() { return &___OnAudioConfigurationChanged_0; }
	inline void set_OnAudioConfigurationChanged_0(AudioConfigurationChangeHandler_t4052631899 * value)
	{
		___OnAudioConfigurationChanged_0 = value;
		Il2CppCodeGenWriteBarrier((&___OnAudioConfigurationChanged_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSETTINGS_T2844817120_H
#ifndef AUDIOPLAYABLEGRAPHEXTENSIONS_T4270722747_H
#define AUDIOPLAYABLEGRAPHEXTENSIONS_T4270722747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.AudioPlayableGraphExtensions
struct  AudioPlayableGraphExtensions_t4270722747  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOPLAYABLEGRAPHEXTENSIONS_T4270722747_H
#ifndef VALUETYPE_T1150047225_H
#define VALUETYPE_T1150047225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1150047225  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1150047225_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1150047225_marshaled_com
{
};
#endif // VALUETYPE_T1150047225_H
#ifndef ANIMATIONPLAYABLEGRAPHEXTENSIONS_T361422842_H
#define ANIMATIONPLAYABLEGRAPHEXTENSIONS_T361422842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationPlayableGraphExtensions
struct  AnimationPlayableGraphExtensions_t361422842  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONPLAYABLEGRAPHEXTENSIONS_T361422842_H
#ifndef PHYSICS2D_T598791612_H
#define PHYSICS2D_T598791612_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Physics2D
struct  Physics2D_t598791612  : public RuntimeObject
{
public:

public:
};

struct Physics2D_t598791612_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D> UnityEngine.Physics2D::m_LastDisabledRigidbody2D
	List_1_t3980935299 * ___m_LastDisabledRigidbody2D_0;

public:
	inline static int32_t get_offset_of_m_LastDisabledRigidbody2D_0() { return static_cast<int32_t>(offsetof(Physics2D_t598791612_StaticFields, ___m_LastDisabledRigidbody2D_0)); }
	inline List_1_t3980935299 * get_m_LastDisabledRigidbody2D_0() const { return ___m_LastDisabledRigidbody2D_0; }
	inline List_1_t3980935299 ** get_address_of_m_LastDisabledRigidbody2D_0() { return &___m_LastDisabledRigidbody2D_0; }
	inline void set_m_LastDisabledRigidbody2D_0(List_1_t3980935299 * value)
	{
		___m_LastDisabledRigidbody2D_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_LastDisabledRigidbody2D_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICS2D_T598791612_H
#ifndef GUILAYOUT_T1609930989_H
#define GUILAYOUT_T1609930989_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayout
struct  GUILayout_t1609930989  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYOUT_T1609930989_H
#ifndef PHYSICS_T3639739577_H
#define PHYSICS_T3639739577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Physics
struct  Physics_t3639739577  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICS_T3639739577_H
#ifndef ATTRIBUTE_T2028985735_H
#define ATTRIBUTE_T2028985735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t2028985735  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T2028985735_H
#ifndef GUICONTENT_T2028340156_H
#define GUICONTENT_T2028340156_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIContent
struct  GUIContent_t2028340156  : public RuntimeObject
{
public:
	// System.String UnityEngine.GUIContent::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Texture UnityEngine.GUIContent::m_Image
	Texture_t725120530 * ___m_Image_1;
	// System.String UnityEngine.GUIContent::m_Tooltip
	String_t* ___m_Tooltip_2;

public:
	inline static int32_t get_offset_of_m_Text_0() { return static_cast<int32_t>(offsetof(GUIContent_t2028340156, ___m_Text_0)); }
	inline String_t* get_m_Text_0() const { return ___m_Text_0; }
	inline String_t** get_address_of_m_Text_0() { return &___m_Text_0; }
	inline void set_m_Text_0(String_t* value)
	{
		___m_Text_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_0), value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(GUIContent_t2028340156, ___m_Image_1)); }
	inline Texture_t725120530 * get_m_Image_1() const { return ___m_Image_1; }
	inline Texture_t725120530 ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Texture_t725120530 * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_1), value);
	}

	inline static int32_t get_offset_of_m_Tooltip_2() { return static_cast<int32_t>(offsetof(GUIContent_t2028340156, ___m_Tooltip_2)); }
	inline String_t* get_m_Tooltip_2() const { return ___m_Tooltip_2; }
	inline String_t** get_address_of_m_Tooltip_2() { return &___m_Tooltip_2; }
	inline void set_m_Tooltip_2(String_t* value)
	{
		___m_Tooltip_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Tooltip_2), value);
	}
};

struct GUIContent_t2028340156_StaticFields
{
public:
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Text
	GUIContent_t2028340156 * ___s_Text_3;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Image
	GUIContent_t2028340156 * ___s_Image_4;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_TextImage
	GUIContent_t2028340156 * ___s_TextImage_5;
	// UnityEngine.GUIContent UnityEngine.GUIContent::none
	GUIContent_t2028340156 * ___none_6;

public:
	inline static int32_t get_offset_of_s_Text_3() { return static_cast<int32_t>(offsetof(GUIContent_t2028340156_StaticFields, ___s_Text_3)); }
	inline GUIContent_t2028340156 * get_s_Text_3() const { return ___s_Text_3; }
	inline GUIContent_t2028340156 ** get_address_of_s_Text_3() { return &___s_Text_3; }
	inline void set_s_Text_3(GUIContent_t2028340156 * value)
	{
		___s_Text_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_Text_3), value);
	}

	inline static int32_t get_offset_of_s_Image_4() { return static_cast<int32_t>(offsetof(GUIContent_t2028340156_StaticFields, ___s_Image_4)); }
	inline GUIContent_t2028340156 * get_s_Image_4() const { return ___s_Image_4; }
	inline GUIContent_t2028340156 ** get_address_of_s_Image_4() { return &___s_Image_4; }
	inline void set_s_Image_4(GUIContent_t2028340156 * value)
	{
		___s_Image_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_Image_4), value);
	}

	inline static int32_t get_offset_of_s_TextImage_5() { return static_cast<int32_t>(offsetof(GUIContent_t2028340156_StaticFields, ___s_TextImage_5)); }
	inline GUIContent_t2028340156 * get_s_TextImage_5() const { return ___s_TextImage_5; }
	inline GUIContent_t2028340156 ** get_address_of_s_TextImage_5() { return &___s_TextImage_5; }
	inline void set_s_TextImage_5(GUIContent_t2028340156 * value)
	{
		___s_TextImage_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_TextImage_5), value);
	}

	inline static int32_t get_offset_of_none_6() { return static_cast<int32_t>(offsetof(GUIContent_t2028340156_StaticFields, ___none_6)); }
	inline GUIContent_t2028340156 * get_none_6() const { return ___none_6; }
	inline GUIContent_t2028340156 ** get_address_of_none_6() { return &___none_6; }
	inline void set_none_6(GUIContent_t2028340156 * value)
	{
		___none_6 = value;
		Il2CppCodeGenWriteBarrier((&___none_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIContent
struct GUIContent_t2028340156_marshaled_pinvoke
{
	char* ___m_Text_0;
	Texture_t725120530 * ___m_Image_1;
	char* ___m_Tooltip_2;
};
// Native definition for COM marshalling of UnityEngine.GUIContent
struct GUIContent_t2028340156_marshaled_com
{
	Il2CppChar* ___m_Text_0;
	Texture_t725120530 * ___m_Image_1;
	Il2CppChar* ___m_Tooltip_2;
};
#endif // GUICONTENT_T2028340156_H
#ifndef PARTICLEPHYSICSEXTENSIONS_T2780434054_H
#define PARTICLEPHYSICSEXTENSIONS_T2780434054_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticlePhysicsExtensions
struct  ParticlePhysicsExtensions_t2780434054  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLEPHYSICSEXTENSIONS_T2780434054_H
#ifndef PARTICLESYSTEMEXTENSIONSIMPL_T4139959981_H
#define PARTICLESYSTEMEXTENSIONSIMPL_T4139959981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystemExtensionsImpl
struct  ParticleSystemExtensionsImpl_t4139959981  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLESYSTEMEXTENSIONSIMPL_T4139959981_H
#ifndef UISYSTEMPROFILERAPI_T3930254999_H
#define UISYSTEMPROFILERAPI_T3930254999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UISystemProfilerApi
struct  UISystemProfilerApi_t3930254999  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UISYSTEMPROFILERAPI_T3930254999_H
#ifndef RECTTRANSFORMUTILITY_T3631876704_H
#define RECTTRANSFORMUTILITY_T3631876704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransformUtility
struct  RectTransformUtility_t3631876704  : public RuntimeObject
{
public:

public:
};

struct RectTransformUtility_t3631876704_StaticFields
{
public:
	// UnityEngine.Vector3[] UnityEngine.RectTransformUtility::s_Corners
	Vector3U5BU5D_t904005552* ___s_Corners_0;

public:
	inline static int32_t get_offset_of_s_Corners_0() { return static_cast<int32_t>(offsetof(RectTransformUtility_t3631876704_StaticFields, ___s_Corners_0)); }
	inline Vector3U5BU5D_t904005552* get_s_Corners_0() const { return ___s_Corners_0; }
	inline Vector3U5BU5D_t904005552** get_address_of_s_Corners_0() { return &___s_Corners_0; }
	inline void set_s_Corners_0(Vector3U5BU5D_t904005552* value)
	{
		___s_Corners_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_Corners_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORMUTILITY_T3631876704_H
#ifndef ANIMATORSTATEINFO_T1112099833_H
#define ANIMATORSTATEINFO_T1112099833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorStateInfo
struct  AnimatorStateInfo_t1112099833 
{
public:
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t1112099833, ___m_Name_0)); }
	inline int32_t get_m_Name_0() const { return ___m_Name_0; }
	inline int32_t* get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(int32_t value)
	{
		___m_Name_0 = value;
	}

	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t1112099833, ___m_Path_1)); }
	inline int32_t get_m_Path_1() const { return ___m_Path_1; }
	inline int32_t* get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(int32_t value)
	{
		___m_Path_1 = value;
	}

	inline static int32_t get_offset_of_m_FullPath_2() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t1112099833, ___m_FullPath_2)); }
	inline int32_t get_m_FullPath_2() const { return ___m_FullPath_2; }
	inline int32_t* get_address_of_m_FullPath_2() { return &___m_FullPath_2; }
	inline void set_m_FullPath_2(int32_t value)
	{
		___m_FullPath_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_3() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t1112099833, ___m_NormalizedTime_3)); }
	inline float get_m_NormalizedTime_3() const { return ___m_NormalizedTime_3; }
	inline float* get_address_of_m_NormalizedTime_3() { return &___m_NormalizedTime_3; }
	inline void set_m_NormalizedTime_3(float value)
	{
		___m_NormalizedTime_3 = value;
	}

	inline static int32_t get_offset_of_m_Length_4() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t1112099833, ___m_Length_4)); }
	inline float get_m_Length_4() const { return ___m_Length_4; }
	inline float* get_address_of_m_Length_4() { return &___m_Length_4; }
	inline void set_m_Length_4(float value)
	{
		___m_Length_4 = value;
	}

	inline static int32_t get_offset_of_m_Speed_5() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t1112099833, ___m_Speed_5)); }
	inline float get_m_Speed_5() const { return ___m_Speed_5; }
	inline float* get_address_of_m_Speed_5() { return &___m_Speed_5; }
	inline void set_m_Speed_5(float value)
	{
		___m_Speed_5 = value;
	}

	inline static int32_t get_offset_of_m_SpeedMultiplier_6() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t1112099833, ___m_SpeedMultiplier_6)); }
	inline float get_m_SpeedMultiplier_6() const { return ___m_SpeedMultiplier_6; }
	inline float* get_address_of_m_SpeedMultiplier_6() { return &___m_SpeedMultiplier_6; }
	inline void set_m_SpeedMultiplier_6(float value)
	{
		___m_SpeedMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_m_Tag_7() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t1112099833, ___m_Tag_7)); }
	inline int32_t get_m_Tag_7() const { return ___m_Tag_7; }
	inline int32_t* get_address_of_m_Tag_7() { return &___m_Tag_7; }
	inline void set_m_Tag_7(int32_t value)
	{
		___m_Tag_7 = value;
	}

	inline static int32_t get_offset_of_m_Loop_8() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t1112099833, ___m_Loop_8)); }
	inline int32_t get_m_Loop_8() const { return ___m_Loop_8; }
	inline int32_t* get_address_of_m_Loop_8() { return &___m_Loop_8; }
	inline void set_m_Loop_8(int32_t value)
	{
		___m_Loop_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORSTATEINFO_T1112099833_H
#ifndef ANIMATORTRANSITIONINFO_T1661546339_H
#define ANIMATORTRANSITIONINFO_T1661546339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorTransitionInfo
struct  AnimatorTransitionInfo_t1661546339 
{
public:
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_FullPath
	int32_t ___m_FullPath_0;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_UserName
	int32_t ___m_UserName_1;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_Name
	int32_t ___m_Name_2;
	// System.Single UnityEngine.AnimatorTransitionInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Boolean UnityEngine.AnimatorTransitionInfo::m_AnyState
	bool ___m_AnyState_4;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_TransitionType
	int32_t ___m_TransitionType_5;

public:
	inline static int32_t get_offset_of_m_FullPath_0() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t1661546339, ___m_FullPath_0)); }
	inline int32_t get_m_FullPath_0() const { return ___m_FullPath_0; }
	inline int32_t* get_address_of_m_FullPath_0() { return &___m_FullPath_0; }
	inline void set_m_FullPath_0(int32_t value)
	{
		___m_FullPath_0 = value;
	}

	inline static int32_t get_offset_of_m_UserName_1() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t1661546339, ___m_UserName_1)); }
	inline int32_t get_m_UserName_1() const { return ___m_UserName_1; }
	inline int32_t* get_address_of_m_UserName_1() { return &___m_UserName_1; }
	inline void set_m_UserName_1(int32_t value)
	{
		___m_UserName_1 = value;
	}

	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t1661546339, ___m_Name_2)); }
	inline int32_t get_m_Name_2() const { return ___m_Name_2; }
	inline int32_t* get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(int32_t value)
	{
		___m_Name_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_3() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t1661546339, ___m_NormalizedTime_3)); }
	inline float get_m_NormalizedTime_3() const { return ___m_NormalizedTime_3; }
	inline float* get_address_of_m_NormalizedTime_3() { return &___m_NormalizedTime_3; }
	inline void set_m_NormalizedTime_3(float value)
	{
		___m_NormalizedTime_3 = value;
	}

	inline static int32_t get_offset_of_m_AnyState_4() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t1661546339, ___m_AnyState_4)); }
	inline bool get_m_AnyState_4() const { return ___m_AnyState_4; }
	inline bool* get_address_of_m_AnyState_4() { return &___m_AnyState_4; }
	inline void set_m_AnyState_4(bool value)
	{
		___m_AnyState_4 = value;
	}

	inline static int32_t get_offset_of_m_TransitionType_5() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t1661546339, ___m_TransitionType_5)); }
	inline int32_t get_m_TransitionType_5() const { return ___m_TransitionType_5; }
	inline int32_t* get_address_of_m_TransitionType_5() { return &___m_TransitionType_5; }
	inline void set_m_TransitionType_5(int32_t value)
	{
		___m_TransitionType_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t1661546339_marshaled_pinvoke
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	float ___m_NormalizedTime_3;
	int32_t ___m_AnyState_4;
	int32_t ___m_TransitionType_5;
};
// Native definition for COM marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t1661546339_marshaled_com
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	float ___m_NormalizedTime_3;
	int32_t ___m_AnyState_4;
	int32_t ___m_TransitionType_5;
};
#endif // ANIMATORTRANSITIONINFO_T1661546339_H
#ifndef VECTOR3_T1243817149_H
#define VECTOR3_T1243817149_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t1243817149 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t1243817149, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t1243817149, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t1243817149, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t1243817149_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t1243817149  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t1243817149  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t1243817149  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t1243817149  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t1243817149  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t1243817149  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t1243817149  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t1243817149  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t1243817149  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t1243817149  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t1243817149_StaticFields, ___zeroVector_4)); }
	inline Vector3_t1243817149  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t1243817149 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t1243817149  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t1243817149_StaticFields, ___oneVector_5)); }
	inline Vector3_t1243817149  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t1243817149 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t1243817149  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t1243817149_StaticFields, ___upVector_6)); }
	inline Vector3_t1243817149  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t1243817149 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t1243817149  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t1243817149_StaticFields, ___downVector_7)); }
	inline Vector3_t1243817149  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t1243817149 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t1243817149  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t1243817149_StaticFields, ___leftVector_8)); }
	inline Vector3_t1243817149  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t1243817149 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t1243817149  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t1243817149_StaticFields, ___rightVector_9)); }
	inline Vector3_t1243817149  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t1243817149 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t1243817149  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t1243817149_StaticFields, ___forwardVector_10)); }
	inline Vector3_t1243817149  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t1243817149 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t1243817149  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t1243817149_StaticFields, ___backVector_11)); }
	inline Vector3_t1243817149  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t1243817149 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t1243817149  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t1243817149_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t1243817149  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t1243817149 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t1243817149  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t1243817149_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t1243817149  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t1243817149 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t1243817149  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T1243817149_H
#ifndef TIMESPAN_T3666512728_H
#define TIMESPAN_T3666512728_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t3666512728 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t3666512728, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t3666512728_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t3666512728  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t3666512728  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t3666512728  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t3666512728_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t3666512728  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t3666512728 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t3666512728  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t3666512728_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t3666512728  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t3666512728 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t3666512728  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t3666512728_StaticFields, ___Zero_2)); }
	inline TimeSpan_t3666512728  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t3666512728 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t3666512728  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T3666512728_H
#ifndef SHAREDBETWEENANIMATORSATTRIBUTE_T1362806614_H
#define SHAREDBETWEENANIMATORSATTRIBUTE_T1362806614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SharedBetweenAnimatorsAttribute
struct  SharedBetweenAnimatorsAttribute_t1362806614  : public Attribute_t2028985735
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHAREDBETWEENANIMATORSATTRIBUTE_T1362806614_H
#ifndef VECTOR2_T290648799_H
#define VECTOR2_T290648799_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t290648799 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t290648799, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t290648799, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t290648799_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t290648799  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t290648799  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t290648799  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t290648799  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t290648799  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t290648799  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t290648799  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t290648799  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t290648799_StaticFields, ___zeroVector_2)); }
	inline Vector2_t290648799  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t290648799 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t290648799  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t290648799_StaticFields, ___oneVector_3)); }
	inline Vector2_t290648799  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t290648799 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t290648799  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t290648799_StaticFields, ___upVector_4)); }
	inline Vector2_t290648799  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t290648799 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t290648799  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t290648799_StaticFields, ___downVector_5)); }
	inline Vector2_t290648799  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t290648799 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t290648799  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t290648799_StaticFields, ___leftVector_6)); }
	inline Vector2_t290648799  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t290648799 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t290648799  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t290648799_StaticFields, ___rightVector_7)); }
	inline Vector2_t290648799  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t290648799 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t290648799  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t290648799_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t290648799  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t290648799 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t290648799  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t290648799_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t290648799  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t290648799 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t290648799  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T290648799_H
#ifndef VOID_T1868834623_H
#define VOID_T1868834623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1868834623 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1868834623_H
#ifndef BOOLEAN_T1128463652_H
#define BOOLEAN_T1128463652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t1128463652 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t1128463652, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t1128463652_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t1128463652_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t1128463652_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T1128463652_H
#ifndef INT32_T3461472108_H
#define INT32_T3461472108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t3461472108 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t3461472108, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T3461472108_H
#ifndef ANIMATORCLIPINFO_T1178155208_H
#define ANIMATORCLIPINFO_T1178155208_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorClipInfo
struct  AnimatorClipInfo_t1178155208 
{
public:
	// System.Int32 UnityEngine.AnimatorClipInfo::m_ClipInstanceID
	int32_t ___m_ClipInstanceID_0;
	// System.Single UnityEngine.AnimatorClipInfo::m_Weight
	float ___m_Weight_1;

public:
	inline static int32_t get_offset_of_m_ClipInstanceID_0() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t1178155208, ___m_ClipInstanceID_0)); }
	inline int32_t get_m_ClipInstanceID_0() const { return ___m_ClipInstanceID_0; }
	inline int32_t* get_address_of_m_ClipInstanceID_0() { return &___m_ClipInstanceID_0; }
	inline void set_m_ClipInstanceID_0(int32_t value)
	{
		___m_ClipInstanceID_0 = value;
	}

	inline static int32_t get_offset_of_m_Weight_1() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t1178155208, ___m_Weight_1)); }
	inline float get_m_Weight_1() const { return ___m_Weight_1; }
	inline float* get_address_of_m_Weight_1() { return &___m_Weight_1; }
	inline void set_m_Weight_1(float value)
	{
		___m_Weight_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCLIPINFO_T1178155208_H
#ifndef ENUM_T1562276701_H
#define ENUM_T1562276701_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t1562276701  : public ValueType_t1150047225
{
public:

public:
};

struct Enum_t1562276701_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t359175764* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t1562276701_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t359175764* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t359175764** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t359175764* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t1562276701_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t1562276701_marshaled_com
{
};
#endif // ENUM_T1562276701_H
#ifndef UILINEINFO_T2625592273_H
#define UILINEINFO_T2625592273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UILineInfo
struct  UILineInfo_t2625592273 
{
public:
	// System.Int32 UnityEngine.UILineInfo::startCharIdx
	int32_t ___startCharIdx_0;
	// System.Int32 UnityEngine.UILineInfo::height
	int32_t ___height_1;
	// System.Single UnityEngine.UILineInfo::topY
	float ___topY_2;
	// System.Single UnityEngine.UILineInfo::leading
	float ___leading_3;

public:
	inline static int32_t get_offset_of_startCharIdx_0() { return static_cast<int32_t>(offsetof(UILineInfo_t2625592273, ___startCharIdx_0)); }
	inline int32_t get_startCharIdx_0() const { return ___startCharIdx_0; }
	inline int32_t* get_address_of_startCharIdx_0() { return &___startCharIdx_0; }
	inline void set_startCharIdx_0(int32_t value)
	{
		___startCharIdx_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(UILineInfo_t2625592273, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_topY_2() { return static_cast<int32_t>(offsetof(UILineInfo_t2625592273, ___topY_2)); }
	inline float get_topY_2() const { return ___topY_2; }
	inline float* get_address_of_topY_2() { return &___topY_2; }
	inline void set_topY_2(float value)
	{
		___topY_2 = value;
	}

	inline static int32_t get_offset_of_leading_3() { return static_cast<int32_t>(offsetof(UILineInfo_t2625592273, ___leading_3)); }
	inline float get_leading_3() const { return ___leading_3; }
	inline float* get_address_of_leading_3() { return &___leading_3; }
	inline void set_leading_3(float value)
	{
		___leading_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UILINEINFO_T2625592273_H
#ifndef VECTOR4_T1742286017_H
#define VECTOR4_T1742286017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t1742286017 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t1742286017, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t1742286017, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t1742286017, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t1742286017, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t1742286017_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t1742286017  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t1742286017  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t1742286017  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t1742286017  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t1742286017_StaticFields, ___zeroVector_5)); }
	inline Vector4_t1742286017  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t1742286017 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t1742286017  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t1742286017_StaticFields, ___oneVector_6)); }
	inline Vector4_t1742286017  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t1742286017 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t1742286017  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t1742286017_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t1742286017  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t1742286017 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t1742286017  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t1742286017_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t1742286017  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t1742286017 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t1742286017  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T1742286017_H
#ifndef MAINMODULE_T200958688_H
#define MAINMODULE_T200958688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/MainModule
struct  MainModule_t200958688 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/MainModule::m_ParticleSystem
	ParticleSystem_t4233840295 * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(MainModule_t200958688, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t4233840295 * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t4233840295 ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t4233840295 * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParticleSystem_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_t200958688_marshaled_pinvoke
{
	ParticleSystem_t4233840295 * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_t200958688_marshaled_com
{
	ParticleSystem_t4233840295 * ___m_ParticleSystem_0;
};
#endif // MAINMODULE_T200958688_H
#ifndef QUATERNION_T3887048810_H
#define QUATERNION_T3887048810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t3887048810 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t3887048810, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t3887048810, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t3887048810, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t3887048810, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t3887048810_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t3887048810  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t3887048810_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t3887048810  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t3887048810 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t3887048810  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T3887048810_H
#ifndef EMISSIONMODULE_T2369878041_H
#define EMISSIONMODULE_T2369878041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/EmissionModule
struct  EmissionModule_t2369878041 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/EmissionModule::m_ParticleSystem
	ParticleSystem_t4233840295 * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(EmissionModule_t2369878041, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t4233840295 * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t4233840295 ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t4233840295 * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParticleSystem_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t2369878041_marshaled_pinvoke
{
	ParticleSystem_t4233840295 * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_t2369878041_marshaled_com
{
	ParticleSystem_t4233840295 * ___m_ParticleSystem_0;
};
#endif // EMISSIONMODULE_T2369878041_H
#ifndef COLOR_T2011931022_H
#define COLOR_T2011931022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2011931022 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2011931022, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2011931022, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2011931022, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2011931022, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2011931022_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef COLOR32_T2879186034_H
#define COLOR32_T2879186034_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct ALIGN_TYPE(4) Color32_t2879186034 
{
public:
	// System.Byte UnityEngine.Color32::r
	uint8_t ___r_0;
	// System.Byte UnityEngine.Color32::g
	uint8_t ___g_1;
	// System.Byte UnityEngine.Color32::b
	uint8_t ___b_2;
	// System.Byte UnityEngine.Color32::a
	uint8_t ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color32_t2879186034, ___r_0)); }
	inline uint8_t get_r_0() const { return ___r_0; }
	inline uint8_t* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(uint8_t value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color32_t2879186034, ___g_1)); }
	inline uint8_t get_g_1() const { return ___g_1; }
	inline uint8_t* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(uint8_t value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color32_t2879186034, ___b_2)); }
	inline uint8_t get_b_2() const { return ___b_2; }
	inline uint8_t* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(uint8_t value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color32_t2879186034, ___a_3)); }
	inline uint8_t get_a_3() const { return ___a_3; }
	inline uint8_t* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(uint8_t value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T2879186034_H
#ifndef RECT_T4283203324_H
#define RECT_T4283203324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t4283203324 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t4283203324, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t4283203324, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t4283203324, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t4283203324, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T4283203324_H
#ifndef SCALEMODE_T2930800240_H
#define SCALEMODE_T2930800240_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScaleMode
struct  ScaleMode_t2930800240 
{
public:
	// System.Int32 UnityEngine.ScaleMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ScaleMode_t2930800240, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCALEMODE_T2930800240_H
#ifndef FORCEMODE_T1805496032_H
#define FORCEMODE_T1805496032_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ForceMode
struct  ForceMode_t1805496032 
{
public:
	// System.Int32 UnityEngine.ForceMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ForceMode_t1805496032, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORCEMODE_T1805496032_H
#ifndef SKELETONBONE_T2899358385_H
#define SKELETONBONE_T2899358385_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SkeletonBone
struct  SkeletonBone_t2899358385 
{
public:
	// System.String UnityEngine.SkeletonBone::name
	String_t* ___name_0;
	// System.String UnityEngine.SkeletonBone::parentName
	String_t* ___parentName_1;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::position
	Vector3_t1243817149  ___position_2;
	// UnityEngine.Quaternion UnityEngine.SkeletonBone::rotation
	Quaternion_t3887048810  ___rotation_3;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::scale
	Vector3_t1243817149  ___scale_4;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SkeletonBone_t2899358385, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_parentName_1() { return static_cast<int32_t>(offsetof(SkeletonBone_t2899358385, ___parentName_1)); }
	inline String_t* get_parentName_1() const { return ___parentName_1; }
	inline String_t** get_address_of_parentName_1() { return &___parentName_1; }
	inline void set_parentName_1(String_t* value)
	{
		___parentName_1 = value;
		Il2CppCodeGenWriteBarrier((&___parentName_1), value);
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(SkeletonBone_t2899358385, ___position_2)); }
	inline Vector3_t1243817149  get_position_2() const { return ___position_2; }
	inline Vector3_t1243817149 * get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(Vector3_t1243817149  value)
	{
		___position_2 = value;
	}

	inline static int32_t get_offset_of_rotation_3() { return static_cast<int32_t>(offsetof(SkeletonBone_t2899358385, ___rotation_3)); }
	inline Quaternion_t3887048810  get_rotation_3() const { return ___rotation_3; }
	inline Quaternion_t3887048810 * get_address_of_rotation_3() { return &___rotation_3; }
	inline void set_rotation_3(Quaternion_t3887048810  value)
	{
		___rotation_3 = value;
	}

	inline static int32_t get_offset_of_scale_4() { return static_cast<int32_t>(offsetof(SkeletonBone_t2899358385, ___scale_4)); }
	inline Vector3_t1243817149  get_scale_4() const { return ___scale_4; }
	inline Vector3_t1243817149 * get_address_of_scale_4() { return &___scale_4; }
	inline void set_scale_4(Vector3_t1243817149  value)
	{
		___scale_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_t2899358385_marshaled_pinvoke
{
	char* ___name_0;
	char* ___parentName_1;
	Vector3_t1243817149  ___position_2;
	Quaternion_t3887048810  ___rotation_3;
	Vector3_t1243817149  ___scale_4;
};
// Native definition for COM marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_t2899358385_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___parentName_1;
	Vector3_t1243817149  ___position_2;
	Quaternion_t3887048810  ___rotation_3;
	Vector3_t1243817149  ___scale_4;
};
#endif // SKELETONBONE_T2899358385_H
#ifndef HUMANLIMIT_T4263421870_H
#define HUMANLIMIT_T4263421870_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HumanLimit
struct  HumanLimit_t4263421870 
{
public:
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Min
	Vector3_t1243817149  ___m_Min_0;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Max
	Vector3_t1243817149  ___m_Max_1;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Center
	Vector3_t1243817149  ___m_Center_2;
	// System.Single UnityEngine.HumanLimit::m_AxisLength
	float ___m_AxisLength_3;
	// System.Int32 UnityEngine.HumanLimit::m_UseDefaultValues
	int32_t ___m_UseDefaultValues_4;

public:
	inline static int32_t get_offset_of_m_Min_0() { return static_cast<int32_t>(offsetof(HumanLimit_t4263421870, ___m_Min_0)); }
	inline Vector3_t1243817149  get_m_Min_0() const { return ___m_Min_0; }
	inline Vector3_t1243817149 * get_address_of_m_Min_0() { return &___m_Min_0; }
	inline void set_m_Min_0(Vector3_t1243817149  value)
	{
		___m_Min_0 = value;
	}

	inline static int32_t get_offset_of_m_Max_1() { return static_cast<int32_t>(offsetof(HumanLimit_t4263421870, ___m_Max_1)); }
	inline Vector3_t1243817149  get_m_Max_1() const { return ___m_Max_1; }
	inline Vector3_t1243817149 * get_address_of_m_Max_1() { return &___m_Max_1; }
	inline void set_m_Max_1(Vector3_t1243817149  value)
	{
		___m_Max_1 = value;
	}

	inline static int32_t get_offset_of_m_Center_2() { return static_cast<int32_t>(offsetof(HumanLimit_t4263421870, ___m_Center_2)); }
	inline Vector3_t1243817149  get_m_Center_2() const { return ___m_Center_2; }
	inline Vector3_t1243817149 * get_address_of_m_Center_2() { return &___m_Center_2; }
	inline void set_m_Center_2(Vector3_t1243817149  value)
	{
		___m_Center_2 = value;
	}

	inline static int32_t get_offset_of_m_AxisLength_3() { return static_cast<int32_t>(offsetof(HumanLimit_t4263421870, ___m_AxisLength_3)); }
	inline float get_m_AxisLength_3() const { return ___m_AxisLength_3; }
	inline float* get_address_of_m_AxisLength_3() { return &___m_AxisLength_3; }
	inline void set_m_AxisLength_3(float value)
	{
		___m_AxisLength_3 = value;
	}

	inline static int32_t get_offset_of_m_UseDefaultValues_4() { return static_cast<int32_t>(offsetof(HumanLimit_t4263421870, ___m_UseDefaultValues_4)); }
	inline int32_t get_m_UseDefaultValues_4() const { return ___m_UseDefaultValues_4; }
	inline int32_t* get_address_of_m_UseDefaultValues_4() { return &___m_UseDefaultValues_4; }
	inline void set_m_UseDefaultValues_4(int32_t value)
	{
		___m_UseDefaultValues_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HUMANLIMIT_T4263421870_H
#ifndef EVENTMODIFIERS_T3146810486_H
#define EVENTMODIFIERS_T3146810486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventModifiers
struct  EventModifiers_t3146810486 
{
public:
	// System.Int32 UnityEngine.EventModifiers::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EventModifiers_t3146810486, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTMODIFIERS_T3146810486_H
#ifndef EVENTTYPE_T2070299817_H
#define EVENTTYPE_T2070299817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventType
struct  EventType_t2070299817 
{
public:
	// System.Int32 UnityEngine.EventType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EventType_t2070299817, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTTYPE_T2070299817_H
#ifndef EVENT_T3559766914_H
#define EVENT_T3559766914_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Event
struct  Event_t3559766914  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Event::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Event_t3559766914, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

struct Event_t3559766914_StaticFields
{
public:
	// UnityEngine.Event UnityEngine.Event::s_Current
	Event_t3559766914 * ___s_Current_1;
	// UnityEngine.Event UnityEngine.Event::s_MasterEvent
	Event_t3559766914 * ___s_MasterEvent_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.Event::<>f__switch$map0
	Dictionary_2_t3667749246 * ___U3CU3Ef__switchU24map0_3;

public:
	inline static int32_t get_offset_of_s_Current_1() { return static_cast<int32_t>(offsetof(Event_t3559766914_StaticFields, ___s_Current_1)); }
	inline Event_t3559766914 * get_s_Current_1() const { return ___s_Current_1; }
	inline Event_t3559766914 ** get_address_of_s_Current_1() { return &___s_Current_1; }
	inline void set_s_Current_1(Event_t3559766914 * value)
	{
		___s_Current_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_Current_1), value);
	}

	inline static int32_t get_offset_of_s_MasterEvent_2() { return static_cast<int32_t>(offsetof(Event_t3559766914_StaticFields, ___s_MasterEvent_2)); }
	inline Event_t3559766914 * get_s_MasterEvent_2() const { return ___s_MasterEvent_2; }
	inline Event_t3559766914 ** get_address_of_s_MasterEvent_2() { return &___s_MasterEvent_2; }
	inline void set_s_MasterEvent_2(Event_t3559766914 * value)
	{
		___s_MasterEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_MasterEvent_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_3() { return static_cast<int32_t>(offsetof(Event_t3559766914_StaticFields, ___U3CU3Ef__switchU24map0_3)); }
	inline Dictionary_2_t3667749246 * get_U3CU3Ef__switchU24map0_3() const { return ___U3CU3Ef__switchU24map0_3; }
	inline Dictionary_2_t3667749246 ** get_address_of_U3CU3Ef__switchU24map0_3() { return &___U3CU3Ef__switchU24map0_3; }
	inline void set_U3CU3Ef__switchU24map0_3(Dictionary_2_t3667749246 * value)
	{
		___U3CU3Ef__switchU24map0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map0_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Event
struct Event_t3559766914_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Event
struct Event_t3559766914_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // EVENT_T3559766914_H
#ifndef PARTICLECOLLISIONEVENT_T1652970546_H
#define PARTICLECOLLISIONEVENT_T1652970546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleCollisionEvent
struct  ParticleCollisionEvent_t1652970546 
{
public:
	// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::m_Intersection
	Vector3_t1243817149  ___m_Intersection_0;
	// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::m_Normal
	Vector3_t1243817149  ___m_Normal_1;
	// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::m_Velocity
	Vector3_t1243817149  ___m_Velocity_2;
	// System.Int32 UnityEngine.ParticleCollisionEvent::m_ColliderInstanceID
	int32_t ___m_ColliderInstanceID_3;

public:
	inline static int32_t get_offset_of_m_Intersection_0() { return static_cast<int32_t>(offsetof(ParticleCollisionEvent_t1652970546, ___m_Intersection_0)); }
	inline Vector3_t1243817149  get_m_Intersection_0() const { return ___m_Intersection_0; }
	inline Vector3_t1243817149 * get_address_of_m_Intersection_0() { return &___m_Intersection_0; }
	inline void set_m_Intersection_0(Vector3_t1243817149  value)
	{
		___m_Intersection_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ParticleCollisionEvent_t1652970546, ___m_Normal_1)); }
	inline Vector3_t1243817149  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t1243817149 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t1243817149  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_2() { return static_cast<int32_t>(offsetof(ParticleCollisionEvent_t1652970546, ___m_Velocity_2)); }
	inline Vector3_t1243817149  get_m_Velocity_2() const { return ___m_Velocity_2; }
	inline Vector3_t1243817149 * get_address_of_m_Velocity_2() { return &___m_Velocity_2; }
	inline void set_m_Velocity_2(Vector3_t1243817149  value)
	{
		___m_Velocity_2 = value;
	}

	inline static int32_t get_offset_of_m_ColliderInstanceID_3() { return static_cast<int32_t>(offsetof(ParticleCollisionEvent_t1652970546, ___m_ColliderInstanceID_3)); }
	inline int32_t get_m_ColliderInstanceID_3() const { return ___m_ColliderInstanceID_3; }
	inline int32_t* get_address_of_m_ColliderInstanceID_3() { return &___m_ColliderInstanceID_3; }
	inline void set_m_ColliderInstanceID_3(int32_t value)
	{
		___m_ColliderInstanceID_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLECOLLISIONEVENT_T1652970546_H
#ifndef DELEGATE_T924411631_H
#define DELEGATE_T924411631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t924411631  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t2125158515 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t924411631, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t924411631, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t924411631, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t924411631, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t924411631, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t924411631, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t924411631, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t924411631, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t924411631, ___data_8)); }
	inline DelegateData_t2125158515 * get_data_8() const { return ___data_8; }
	inline DelegateData_t2125158515 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t2125158515 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T924411631_H
#ifndef TEXTGENERATIONERROR_T3035884644_H
#define TEXTGENERATIONERROR_T3035884644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextGenerationError
struct  TextGenerationError_t3035884644 
{
public:
	// System.Int32 UnityEngine.TextGenerationError::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextGenerationError_t3035884644, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTGENERATIONERROR_T3035884644_H
#ifndef CONTROLLERCOLLIDERHIT_T3653634219_H
#define CONTROLLERCOLLIDERHIT_T3653634219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ControllerColliderHit
struct  ControllerColliderHit_t3653634219  : public RuntimeObject
{
public:
	// UnityEngine.CharacterController UnityEngine.ControllerColliderHit::m_Controller
	CharacterController_t3640951870 * ___m_Controller_0;
	// UnityEngine.Collider UnityEngine.ControllerColliderHit::m_Collider
	Collider_t3095653511 * ___m_Collider_1;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Point
	Vector3_t1243817149  ___m_Point_2;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Normal
	Vector3_t1243817149  ___m_Normal_3;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_MoveDirection
	Vector3_t1243817149  ___m_MoveDirection_4;
	// System.Single UnityEngine.ControllerColliderHit::m_MoveLength
	float ___m_MoveLength_5;
	// System.Int32 UnityEngine.ControllerColliderHit::m_Push
	int32_t ___m_Push_6;

public:
	inline static int32_t get_offset_of_m_Controller_0() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t3653634219, ___m_Controller_0)); }
	inline CharacterController_t3640951870 * get_m_Controller_0() const { return ___m_Controller_0; }
	inline CharacterController_t3640951870 ** get_address_of_m_Controller_0() { return &___m_Controller_0; }
	inline void set_m_Controller_0(CharacterController_t3640951870 * value)
	{
		___m_Controller_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Controller_0), value);
	}

	inline static int32_t get_offset_of_m_Collider_1() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t3653634219, ___m_Collider_1)); }
	inline Collider_t3095653511 * get_m_Collider_1() const { return ___m_Collider_1; }
	inline Collider_t3095653511 ** get_address_of_m_Collider_1() { return &___m_Collider_1; }
	inline void set_m_Collider_1(Collider_t3095653511 * value)
	{
		___m_Collider_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_1), value);
	}

	inline static int32_t get_offset_of_m_Point_2() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t3653634219, ___m_Point_2)); }
	inline Vector3_t1243817149  get_m_Point_2() const { return ___m_Point_2; }
	inline Vector3_t1243817149 * get_address_of_m_Point_2() { return &___m_Point_2; }
	inline void set_m_Point_2(Vector3_t1243817149  value)
	{
		___m_Point_2 = value;
	}

	inline static int32_t get_offset_of_m_Normal_3() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t3653634219, ___m_Normal_3)); }
	inline Vector3_t1243817149  get_m_Normal_3() const { return ___m_Normal_3; }
	inline Vector3_t1243817149 * get_address_of_m_Normal_3() { return &___m_Normal_3; }
	inline void set_m_Normal_3(Vector3_t1243817149  value)
	{
		___m_Normal_3 = value;
	}

	inline static int32_t get_offset_of_m_MoveDirection_4() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t3653634219, ___m_MoveDirection_4)); }
	inline Vector3_t1243817149  get_m_MoveDirection_4() const { return ___m_MoveDirection_4; }
	inline Vector3_t1243817149 * get_address_of_m_MoveDirection_4() { return &___m_MoveDirection_4; }
	inline void set_m_MoveDirection_4(Vector3_t1243817149  value)
	{
		___m_MoveDirection_4 = value;
	}

	inline static int32_t get_offset_of_m_MoveLength_5() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t3653634219, ___m_MoveLength_5)); }
	inline float get_m_MoveLength_5() const { return ___m_MoveLength_5; }
	inline float* get_address_of_m_MoveLength_5() { return &___m_MoveLength_5; }
	inline void set_m_MoveLength_5(float value)
	{
		___m_MoveLength_5 = value;
	}

	inline static int32_t get_offset_of_m_Push_6() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t3653634219, ___m_Push_6)); }
	inline int32_t get_m_Push_6() const { return ___m_Push_6; }
	inline int32_t* get_address_of_m_Push_6() { return &___m_Push_6; }
	inline void set_m_Push_6(int32_t value)
	{
		___m_Push_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t3653634219_marshaled_pinvoke
{
	CharacterController_t3640951870 * ___m_Controller_0;
	Collider_t3095653511 * ___m_Collider_1;
	Vector3_t1243817149  ___m_Point_2;
	Vector3_t1243817149  ___m_Normal_3;
	Vector3_t1243817149  ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
// Native definition for COM marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t3653634219_marshaled_com
{
	CharacterController_t3640951870 * ___m_Controller_0;
	Collider_t3095653511 * ___m_Collider_1;
	Vector3_t1243817149  ___m_Point_2;
	Vector3_t1243817149  ___m_Normal_3;
	Vector3_t1243817149  ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
#endif // CONTROLLERCOLLIDERHIT_T3653634219_H
#ifndef SAMPLETYPE_T2947919268_H
#define SAMPLETYPE_T2947919268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UISystemProfilerApi/SampleType
struct  SampleType_t2947919268 
{
public:
	// System.Int32 UnityEngine.UISystemProfilerApi/SampleType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SampleType_t2947919268, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAMPLETYPE_T2947919268_H
#ifndef TEXTANCHOR_T4285376818_H
#define TEXTANCHOR_T4285376818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAnchor
struct  TextAnchor_t4285376818 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextAnchor_t4285376818, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTANCHOR_T4285376818_H
#ifndef HORIZONTALWRAPMODE_T2682339649_H
#define HORIZONTALWRAPMODE_T2682339649_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HorizontalWrapMode
struct  HorizontalWrapMode_t2682339649 
{
public:
	// System.Int32 UnityEngine.HorizontalWrapMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HorizontalWrapMode_t2682339649, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORIZONTALWRAPMODE_T2682339649_H
#ifndef VERTICALWRAPMODE_T775330695_H
#define VERTICALWRAPMODE_T775330695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.VerticalWrapMode
struct  VerticalWrapMode_t775330695 
{
public:
	// System.Int32 UnityEngine.VerticalWrapMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VerticalWrapMode_t775330695, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERTICALWRAPMODE_T775330695_H
#ifndef RENDERMODE_T2876490825_H
#define RENDERMODE_T2876490825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderMode
struct  RenderMode_t2876490825 
{
public:
	// System.Int32 UnityEngine.RenderMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderMode_t2876490825, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERMODE_T2876490825_H
#ifndef UIVERTEX_T1406930349_H
#define UIVERTEX_T1406930349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UIVertex
struct  UIVertex_t1406930349 
{
public:
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_t1243817149  ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_t1243817149  ___normal_1;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_t2879186034  ___color_2;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv0
	Vector2_t290648799  ___uv0_3;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv1
	Vector2_t290648799  ___uv1_4;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv2
	Vector2_t290648799  ___uv2_5;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv3
	Vector2_t290648799  ___uv3_6;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_t1742286017  ___tangent_7;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(UIVertex_t1406930349, ___position_0)); }
	inline Vector3_t1243817149  get_position_0() const { return ___position_0; }
	inline Vector3_t1243817149 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t1243817149  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_normal_1() { return static_cast<int32_t>(offsetof(UIVertex_t1406930349, ___normal_1)); }
	inline Vector3_t1243817149  get_normal_1() const { return ___normal_1; }
	inline Vector3_t1243817149 * get_address_of_normal_1() { return &___normal_1; }
	inline void set_normal_1(Vector3_t1243817149  value)
	{
		___normal_1 = value;
	}

	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(UIVertex_t1406930349, ___color_2)); }
	inline Color32_t2879186034  get_color_2() const { return ___color_2; }
	inline Color32_t2879186034 * get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(Color32_t2879186034  value)
	{
		___color_2 = value;
	}

	inline static int32_t get_offset_of_uv0_3() { return static_cast<int32_t>(offsetof(UIVertex_t1406930349, ___uv0_3)); }
	inline Vector2_t290648799  get_uv0_3() const { return ___uv0_3; }
	inline Vector2_t290648799 * get_address_of_uv0_3() { return &___uv0_3; }
	inline void set_uv0_3(Vector2_t290648799  value)
	{
		___uv0_3 = value;
	}

	inline static int32_t get_offset_of_uv1_4() { return static_cast<int32_t>(offsetof(UIVertex_t1406930349, ___uv1_4)); }
	inline Vector2_t290648799  get_uv1_4() const { return ___uv1_4; }
	inline Vector2_t290648799 * get_address_of_uv1_4() { return &___uv1_4; }
	inline void set_uv1_4(Vector2_t290648799  value)
	{
		___uv1_4 = value;
	}

	inline static int32_t get_offset_of_uv2_5() { return static_cast<int32_t>(offsetof(UIVertex_t1406930349, ___uv2_5)); }
	inline Vector2_t290648799  get_uv2_5() const { return ___uv2_5; }
	inline Vector2_t290648799 * get_address_of_uv2_5() { return &___uv2_5; }
	inline void set_uv2_5(Vector2_t290648799  value)
	{
		___uv2_5 = value;
	}

	inline static int32_t get_offset_of_uv3_6() { return static_cast<int32_t>(offsetof(UIVertex_t1406930349, ___uv3_6)); }
	inline Vector2_t290648799  get_uv3_6() const { return ___uv3_6; }
	inline Vector2_t290648799 * get_address_of_uv3_6() { return &___uv3_6; }
	inline void set_uv3_6(Vector2_t290648799  value)
	{
		___uv3_6 = value;
	}

	inline static int32_t get_offset_of_tangent_7() { return static_cast<int32_t>(offsetof(UIVertex_t1406930349, ___tangent_7)); }
	inline Vector4_t1742286017  get_tangent_7() const { return ___tangent_7; }
	inline Vector4_t1742286017 * get_address_of_tangent_7() { return &___tangent_7; }
	inline void set_tangent_7(Vector4_t1742286017  value)
	{
		___tangent_7 = value;
	}
};

struct UIVertex_t1406930349_StaticFields
{
public:
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_t2879186034  ___s_DefaultColor_8;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_t1742286017  ___s_DefaultTangent_9;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_t1406930349  ___simpleVert_10;

public:
	inline static int32_t get_offset_of_s_DefaultColor_8() { return static_cast<int32_t>(offsetof(UIVertex_t1406930349_StaticFields, ___s_DefaultColor_8)); }
	inline Color32_t2879186034  get_s_DefaultColor_8() const { return ___s_DefaultColor_8; }
	inline Color32_t2879186034 * get_address_of_s_DefaultColor_8() { return &___s_DefaultColor_8; }
	inline void set_s_DefaultColor_8(Color32_t2879186034  value)
	{
		___s_DefaultColor_8 = value;
	}

	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(UIVertex_t1406930349_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_t1742286017  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_t1742286017 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_t1742286017  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_simpleVert_10() { return static_cast<int32_t>(offsetof(UIVertex_t1406930349_StaticFields, ___simpleVert_10)); }
	inline UIVertex_t1406930349  get_simpleVert_10() const { return ___simpleVert_10; }
	inline UIVertex_t1406930349 * get_address_of_simpleVert_10() { return &___simpleVert_10; }
	inline void set_simpleVert_10(UIVertex_t1406930349  value)
	{
		___simpleVert_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIVERTEX_T1406930349_H
#ifndef FONTSTYLE_T3810402848_H
#define FONTSTYLE_T3810402848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FontStyle
struct  FontStyle_t3810402848 
{
public:
	// System.Int32 UnityEngine.FontStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FontStyle_t3810402848, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONTSTYLE_T3810402848_H
#ifndef COLLISION_T2342836553_H
#define COLLISION_T2342836553_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collision
struct  Collision_t2342836553  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t1243817149  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t1243817149  ___m_RelativeVelocity_1;
	// UnityEngine.Rigidbody UnityEngine.Collision::m_Rigidbody
	Rigidbody_t2541962521 * ___m_Rigidbody_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t3095653511 * ___m_Collider_3;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_Contacts
	ContactPointU5BU5D_t3834608424* ___m_Contacts_4;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_t2342836553, ___m_Impulse_0)); }
	inline Vector3_t1243817149  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t1243817149 * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t1243817149  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_t2342836553, ___m_RelativeVelocity_1)); }
	inline Vector3_t1243817149  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t1243817149 * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t1243817149  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision_t2342836553, ___m_Rigidbody_2)); }
	inline Rigidbody_t2541962521 * get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline Rigidbody_t2541962521 ** get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(Rigidbody_t2541962521 * value)
	{
		___m_Rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rigidbody_2), value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_t2342836553, ___m_Collider_3)); }
	inline Collider_t3095653511 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t3095653511 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t3095653511 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_3), value);
	}

	inline static int32_t get_offset_of_m_Contacts_4() { return static_cast<int32_t>(offsetof(Collision_t2342836553, ___m_Contacts_4)); }
	inline ContactPointU5BU5D_t3834608424* get_m_Contacts_4() const { return ___m_Contacts_4; }
	inline ContactPointU5BU5D_t3834608424** get_address_of_m_Contacts_4() { return &___m_Contacts_4; }
	inline void set_m_Contacts_4(ContactPointU5BU5D_t3834608424* value)
	{
		___m_Contacts_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Contacts_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_t2342836553_marshaled_pinvoke
{
	Vector3_t1243817149  ___m_Impulse_0;
	Vector3_t1243817149  ___m_RelativeVelocity_1;
	Rigidbody_t2541962521 * ___m_Rigidbody_2;
	Collider_t3095653511 * ___m_Collider_3;
	ContactPoint_t3373976741 * ___m_Contacts_4;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_t2342836553_marshaled_com
{
	Vector3_t1243817149  ___m_Impulse_0;
	Vector3_t1243817149  ___m_RelativeVelocity_1;
	Rigidbody_t2541962521 * ___m_Rigidbody_2;
	Collider_t3095653511 * ___m_Collider_3;
	ContactPoint_t3373976741 * ___m_Contacts_4;
};
#endif // COLLISION_T2342836553_H
#ifndef DATETIMEKIND_T2591853626_H
#define DATETIMEKIND_T2591853626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t2591853626 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t2591853626, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T2591853626_H
#ifndef ANIMATORCONTROLLERPARAMETERTYPE_T3261443667_H
#define ANIMATORCONTROLLERPARAMETERTYPE_T3261443667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorControllerParameterType
struct  AnimatorControllerParameterType_t3261443667 
{
public:
	// System.Int32 UnityEngine.AnimatorControllerParameterType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AnimatorControllerParameterType_t3261443667, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCONTROLLERPARAMETERTYPE_T3261443667_H
#ifndef TRACKEDREFERENCE_T2924287424_H
#define TRACKEDREFERENCE_T2924287424_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TrackedReference
struct  TrackedReference_t2924287424  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TrackedReference_t2924287424, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_t2924287424_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_t2924287424_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // TRACKEDREFERENCE_T2924287424_H
#ifndef RAYCASTHIT_T2938129192_H
#define RAYCASTHIT_T2938129192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t2938129192 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t1243817149  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t1243817149  ___m_Normal_1;
	// System.Int32 UnityEngine.RaycastHit::m_FaceID
	int32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t290648799  ___m_UV_4;
	// UnityEngine.Collider UnityEngine.RaycastHit::m_Collider
	Collider_t3095653511 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t2938129192, ___m_Point_0)); }
	inline Vector3_t1243817149  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t1243817149 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t1243817149  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t2938129192, ___m_Normal_1)); }
	inline Vector3_t1243817149  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t1243817149 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t1243817149  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t2938129192, ___m_FaceID_2)); }
	inline int32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline int32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(int32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t2938129192, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t2938129192, ___m_UV_4)); }
	inline Vector2_t290648799  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_t290648799 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_t290648799  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t2938129192, ___m_Collider_5)); }
	inline Collider_t3095653511 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider_t3095653511 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider_t3095653511 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit
struct RaycastHit_t2938129192_marshaled_pinvoke
{
	Vector3_t1243817149  ___m_Point_0;
	Vector3_t1243817149  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t290648799  ___m_UV_4;
	Collider_t3095653511 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit
struct RaycastHit_t2938129192_marshaled_com
{
	Vector3_t1243817149  ___m_Point_0;
	Vector3_t1243817149  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t290648799  ___m_UV_4;
	Collider_t3095653511 * ___m_Collider_5;
};
#endif // RAYCASTHIT_T2938129192_H
#ifndef PLAYABLEHANDLE_T2392337730_H
#define PLAYABLEHANDLE_T2392337730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t2392337730 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t2392337730, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t2392337730, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEHANDLE_T2392337730_H
#ifndef PLAYABLEOUTPUTHANDLE_T574882705_H
#define PLAYABLEOUTPUTHANDLE_T574882705_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t574882705 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t574882705, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t574882705, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUTHANDLE_T574882705_H
#ifndef OBJECT_T3505064284_H
#define OBJECT_T3505064284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t3505064284  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t3505064284, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t3505064284_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t3505064284_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t3505064284_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t3505064284_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T3505064284_H
#ifndef UICHARINFO_T2085013098_H
#define UICHARINFO_T2085013098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UICharInfo
struct  UICharInfo_t2085013098 
{
public:
	// UnityEngine.Vector2 UnityEngine.UICharInfo::cursorPos
	Vector2_t290648799  ___cursorPos_0;
	// System.Single UnityEngine.UICharInfo::charWidth
	float ___charWidth_1;

public:
	inline static int32_t get_offset_of_cursorPos_0() { return static_cast<int32_t>(offsetof(UICharInfo_t2085013098, ___cursorPos_0)); }
	inline Vector2_t290648799  get_cursorPos_0() const { return ___cursorPos_0; }
	inline Vector2_t290648799 * get_address_of_cursorPos_0() { return &___cursorPos_0; }
	inline void set_cursorPos_0(Vector2_t290648799  value)
	{
		___cursorPos_0 = value;
	}

	inline static int32_t get_offset_of_charWidth_1() { return static_cast<int32_t>(offsetof(UICharInfo_t2085013098, ___charWidth_1)); }
	inline float get_charWidth_1() const { return ___charWidth_1; }
	inline float* get_address_of_charWidth_1() { return &___charWidth_1; }
	inline void set_charWidth_1(float value)
	{
		___charWidth_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UICHARINFO_T2085013098_H
#ifndef ANIMATIONCURVE_T172923095_H
#define ANIMATIONCURVE_T172923095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationCurve
struct  AnimationCurve_t172923095  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t172923095, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t172923095_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t172923095_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ANIMATIONCURVE_T172923095_H
#ifndef QUERYTRIGGERINTERACTION_T1384280248_H
#define QUERYTRIGGERINTERACTION_T1384280248_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.QueryTriggerInteraction
struct  QueryTriggerInteraction_t1384280248 
{
public:
	// System.Int32 UnityEngine.QueryTriggerInteraction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(QueryTriggerInteraction_t1384280248, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUERYTRIGGERINTERACTION_T1384280248_H
#ifndef PARTICLESYSTEMCURVEMODE_T912476307_H
#define PARTICLESYSTEMCURVEMODE_T912476307_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystemCurveMode
struct  ParticleSystemCurveMode_t912476307 
{
public:
	// System.Int32 UnityEngine.ParticleSystemCurveMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ParticleSystemCurveMode_t912476307, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLESYSTEMCURVEMODE_T912476307_H
#ifndef GUILAYOUTENTRY_T2924348748_H
#define GUILAYOUTENTRY_T2924348748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutEntry
struct  GUILayoutEntry_t2924348748  : public RuntimeObject
{
public:
	// System.Single UnityEngine.GUILayoutEntry::minWidth
	float ___minWidth_0;
	// System.Single UnityEngine.GUILayoutEntry::maxWidth
	float ___maxWidth_1;
	// System.Single UnityEngine.GUILayoutEntry::minHeight
	float ___minHeight_2;
	// System.Single UnityEngine.GUILayoutEntry::maxHeight
	float ___maxHeight_3;
	// UnityEngine.Rect UnityEngine.GUILayoutEntry::rect
	Rect_t4283203324  ___rect_4;
	// System.Int32 UnityEngine.GUILayoutEntry::stretchWidth
	int32_t ___stretchWidth_5;
	// System.Int32 UnityEngine.GUILayoutEntry::stretchHeight
	int32_t ___stretchHeight_6;
	// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::m_Style
	GUIStyle_t3557499391 * ___m_Style_7;

public:
	inline static int32_t get_offset_of_minWidth_0() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2924348748, ___minWidth_0)); }
	inline float get_minWidth_0() const { return ___minWidth_0; }
	inline float* get_address_of_minWidth_0() { return &___minWidth_0; }
	inline void set_minWidth_0(float value)
	{
		___minWidth_0 = value;
	}

	inline static int32_t get_offset_of_maxWidth_1() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2924348748, ___maxWidth_1)); }
	inline float get_maxWidth_1() const { return ___maxWidth_1; }
	inline float* get_address_of_maxWidth_1() { return &___maxWidth_1; }
	inline void set_maxWidth_1(float value)
	{
		___maxWidth_1 = value;
	}

	inline static int32_t get_offset_of_minHeight_2() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2924348748, ___minHeight_2)); }
	inline float get_minHeight_2() const { return ___minHeight_2; }
	inline float* get_address_of_minHeight_2() { return &___minHeight_2; }
	inline void set_minHeight_2(float value)
	{
		___minHeight_2 = value;
	}

	inline static int32_t get_offset_of_maxHeight_3() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2924348748, ___maxHeight_3)); }
	inline float get_maxHeight_3() const { return ___maxHeight_3; }
	inline float* get_address_of_maxHeight_3() { return &___maxHeight_3; }
	inline void set_maxHeight_3(float value)
	{
		___maxHeight_3 = value;
	}

	inline static int32_t get_offset_of_rect_4() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2924348748, ___rect_4)); }
	inline Rect_t4283203324  get_rect_4() const { return ___rect_4; }
	inline Rect_t4283203324 * get_address_of_rect_4() { return &___rect_4; }
	inline void set_rect_4(Rect_t4283203324  value)
	{
		___rect_4 = value;
	}

	inline static int32_t get_offset_of_stretchWidth_5() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2924348748, ___stretchWidth_5)); }
	inline int32_t get_stretchWidth_5() const { return ___stretchWidth_5; }
	inline int32_t* get_address_of_stretchWidth_5() { return &___stretchWidth_5; }
	inline void set_stretchWidth_5(int32_t value)
	{
		___stretchWidth_5 = value;
	}

	inline static int32_t get_offset_of_stretchHeight_6() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2924348748, ___stretchHeight_6)); }
	inline int32_t get_stretchHeight_6() const { return ___stretchHeight_6; }
	inline int32_t* get_address_of_stretchHeight_6() { return &___stretchHeight_6; }
	inline void set_stretchHeight_6(int32_t value)
	{
		___stretchHeight_6 = value;
	}

	inline static int32_t get_offset_of_m_Style_7() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2924348748, ___m_Style_7)); }
	inline GUIStyle_t3557499391 * get_m_Style_7() const { return ___m_Style_7; }
	inline GUIStyle_t3557499391 ** get_address_of_m_Style_7() { return &___m_Style_7; }
	inline void set_m_Style_7(GUIStyle_t3557499391 * value)
	{
		___m_Style_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Style_7), value);
	}
};

struct GUILayoutEntry_t2924348748_StaticFields
{
public:
	// UnityEngine.Rect UnityEngine.GUILayoutEntry::kDummyRect
	Rect_t4283203324  ___kDummyRect_8;
	// System.Int32 UnityEngine.GUILayoutEntry::indent
	int32_t ___indent_9;

public:
	inline static int32_t get_offset_of_kDummyRect_8() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2924348748_StaticFields, ___kDummyRect_8)); }
	inline Rect_t4283203324  get_kDummyRect_8() const { return ___kDummyRect_8; }
	inline Rect_t4283203324 * get_address_of_kDummyRect_8() { return &___kDummyRect_8; }
	inline void set_kDummyRect_8(Rect_t4283203324  value)
	{
		___kDummyRect_8 = value;
	}

	inline static int32_t get_offset_of_indent_9() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t2924348748_StaticFields, ___indent_9)); }
	inline int32_t get_indent_9() const { return ___indent_9; }
	inline int32_t* get_address_of_indent_9() { return &___indent_9; }
	inline void set_indent_9(int32_t value)
	{
		___indent_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYOUTENTRY_T2924348748_H
#ifndef ANIMATIONEVENTSOURCE_T4161867386_H
#define ANIMATIONEVENTSOURCE_T4161867386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationEventSource
struct  AnimationEventSource_t4161867386 
{
public:
	// System.Int32 UnityEngine.AnimationEventSource::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AnimationEventSource_t4161867386, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONEVENTSOURCE_T4161867386_H
#ifndef TYPE_T785534729_H
#define TYPE_T785534729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutOption/Type
struct  Type_t785534729 
{
public:
	// System.Int32 UnityEngine.GUILayoutOption/Type::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Type_t785534729, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T785534729_H
#ifndef PLAYMODE_T3718842613_H
#define PLAYMODE_T3718842613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PlayMode
struct  PlayMode_t3718842613 
{
public:
	// System.Int32 UnityEngine.PlayMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PlayMode_t3718842613, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYMODE_T3718842613_H
#ifndef RAYCASTHIT2D_T3720863634_H
#define RAYCASTHIT2D_T3720863634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit2D
struct  RaycastHit2D_t3720863634 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t290648799  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t290648799  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t290648799  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// UnityEngine.Collider2D UnityEngine.RaycastHit2D::m_Collider
	Collider2D_t3477793500 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t3720863634, ___m_Centroid_0)); }
	inline Vector2_t290648799  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_t290648799 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_t290648799  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t3720863634, ___m_Point_1)); }
	inline Vector2_t290648799  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_t290648799 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_t290648799  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t3720863634, ___m_Normal_2)); }
	inline Vector2_t290648799  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_t290648799 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_t290648799  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t3720863634, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t3720863634, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t3720863634, ___m_Collider_5)); }
	inline Collider2D_t3477793500 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider2D_t3477793500 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider2D_t3477793500 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit2D
struct RaycastHit2D_t3720863634_marshaled_pinvoke
{
	Vector2_t290648799  ___m_Centroid_0;
	Vector2_t290648799  ___m_Point_1;
	Vector2_t290648799  ___m_Normal_2;
	float ___m_Distance_3;
	float ___m_Fraction_4;
	Collider2D_t3477793500 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit2D
struct RaycastHit2D_t3720863634_marshaled_com
{
	Vector2_t290648799  ___m_Centroid_0;
	Vector2_t290648799  ___m_Point_1;
	Vector2_t290648799  ___m_Normal_2;
	float ___m_Distance_3;
	float ___m_Fraction_4;
	Collider2D_t3477793500 * ___m_Collider_5;
};
#endif // RAYCASTHIT2D_T3720863634_H
#ifndef CONTACTPOINT_T3373976741_H
#define CONTACTPOINT_T3373976741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContactPoint
struct  ContactPoint_t3373976741 
{
public:
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Point
	Vector3_t1243817149  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Normal
	Vector3_t1243817149  ___m_Normal_1;
	// System.Int32 UnityEngine.ContactPoint::m_ThisColliderInstanceID
	int32_t ___m_ThisColliderInstanceID_2;
	// System.Int32 UnityEngine.ContactPoint::m_OtherColliderInstanceID
	int32_t ___m_OtherColliderInstanceID_3;
	// System.Single UnityEngine.ContactPoint::m_Separation
	float ___m_Separation_4;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(ContactPoint_t3373976741, ___m_Point_0)); }
	inline Vector3_t1243817149  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t1243817149 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t1243817149  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ContactPoint_t3373976741, ___m_Normal_1)); }
	inline Vector3_t1243817149  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t1243817149 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t1243817149  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_ThisColliderInstanceID_2() { return static_cast<int32_t>(offsetof(ContactPoint_t3373976741, ___m_ThisColliderInstanceID_2)); }
	inline int32_t get_m_ThisColliderInstanceID_2() const { return ___m_ThisColliderInstanceID_2; }
	inline int32_t* get_address_of_m_ThisColliderInstanceID_2() { return &___m_ThisColliderInstanceID_2; }
	inline void set_m_ThisColliderInstanceID_2(int32_t value)
	{
		___m_ThisColliderInstanceID_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherColliderInstanceID_3() { return static_cast<int32_t>(offsetof(ContactPoint_t3373976741, ___m_OtherColliderInstanceID_3)); }
	inline int32_t get_m_OtherColliderInstanceID_3() const { return ___m_OtherColliderInstanceID_3; }
	inline int32_t* get_address_of_m_OtherColliderInstanceID_3() { return &___m_OtherColliderInstanceID_3; }
	inline void set_m_OtherColliderInstanceID_3(int32_t value)
	{
		___m_OtherColliderInstanceID_3 = value;
	}

	inline static int32_t get_offset_of_m_Separation_4() { return static_cast<int32_t>(offsetof(ContactPoint_t3373976741, ___m_Separation_4)); }
	inline float get_m_Separation_4() const { return ___m_Separation_4; }
	inline float* get_address_of_m_Separation_4() { return &___m_Separation_4; }
	inline void set_m_Separation_4(float value)
	{
		___m_Separation_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTACTPOINT_T3373976741_H
#ifndef GUILAYOUTGROUP_T3426542126_H
#define GUILAYOUTGROUP_T3426542126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutGroup
struct  GUILayoutGroup_t3426542126  : public GUILayoutEntry_t2924348748
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry> UnityEngine.GUILayoutGroup::entries
	List_1_t3207600570 * ___entries_10;
	// System.Boolean UnityEngine.GUILayoutGroup::isVertical
	bool ___isVertical_11;
	// System.Boolean UnityEngine.GUILayoutGroup::resetCoords
	bool ___resetCoords_12;
	// System.Single UnityEngine.GUILayoutGroup::spacing
	float ___spacing_13;
	// System.Boolean UnityEngine.GUILayoutGroup::sameSize
	bool ___sameSize_14;
	// System.Boolean UnityEngine.GUILayoutGroup::isWindow
	bool ___isWindow_15;
	// System.Int32 UnityEngine.GUILayoutGroup::windowID
	int32_t ___windowID_16;
	// System.Int32 UnityEngine.GUILayoutGroup::m_Cursor
	int32_t ___m_Cursor_17;
	// System.Int32 UnityEngine.GUILayoutGroup::m_StretchableCountX
	int32_t ___m_StretchableCountX_18;
	// System.Int32 UnityEngine.GUILayoutGroup::m_StretchableCountY
	int32_t ___m_StretchableCountY_19;
	// System.Boolean UnityEngine.GUILayoutGroup::m_UserSpecifiedWidth
	bool ___m_UserSpecifiedWidth_20;
	// System.Boolean UnityEngine.GUILayoutGroup::m_UserSpecifiedHeight
	bool ___m_UserSpecifiedHeight_21;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMinWidth
	float ___m_ChildMinWidth_22;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMaxWidth
	float ___m_ChildMaxWidth_23;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMinHeight
	float ___m_ChildMinHeight_24;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMaxHeight
	float ___m_ChildMaxHeight_25;
	// UnityEngine.RectOffset UnityEngine.GUILayoutGroup::m_Margin
	RectOffset_t2859112449 * ___m_Margin_26;

public:
	inline static int32_t get_offset_of_entries_10() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t3426542126, ___entries_10)); }
	inline List_1_t3207600570 * get_entries_10() const { return ___entries_10; }
	inline List_1_t3207600570 ** get_address_of_entries_10() { return &___entries_10; }
	inline void set_entries_10(List_1_t3207600570 * value)
	{
		___entries_10 = value;
		Il2CppCodeGenWriteBarrier((&___entries_10), value);
	}

	inline static int32_t get_offset_of_isVertical_11() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t3426542126, ___isVertical_11)); }
	inline bool get_isVertical_11() const { return ___isVertical_11; }
	inline bool* get_address_of_isVertical_11() { return &___isVertical_11; }
	inline void set_isVertical_11(bool value)
	{
		___isVertical_11 = value;
	}

	inline static int32_t get_offset_of_resetCoords_12() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t3426542126, ___resetCoords_12)); }
	inline bool get_resetCoords_12() const { return ___resetCoords_12; }
	inline bool* get_address_of_resetCoords_12() { return &___resetCoords_12; }
	inline void set_resetCoords_12(bool value)
	{
		___resetCoords_12 = value;
	}

	inline static int32_t get_offset_of_spacing_13() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t3426542126, ___spacing_13)); }
	inline float get_spacing_13() const { return ___spacing_13; }
	inline float* get_address_of_spacing_13() { return &___spacing_13; }
	inline void set_spacing_13(float value)
	{
		___spacing_13 = value;
	}

	inline static int32_t get_offset_of_sameSize_14() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t3426542126, ___sameSize_14)); }
	inline bool get_sameSize_14() const { return ___sameSize_14; }
	inline bool* get_address_of_sameSize_14() { return &___sameSize_14; }
	inline void set_sameSize_14(bool value)
	{
		___sameSize_14 = value;
	}

	inline static int32_t get_offset_of_isWindow_15() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t3426542126, ___isWindow_15)); }
	inline bool get_isWindow_15() const { return ___isWindow_15; }
	inline bool* get_address_of_isWindow_15() { return &___isWindow_15; }
	inline void set_isWindow_15(bool value)
	{
		___isWindow_15 = value;
	}

	inline static int32_t get_offset_of_windowID_16() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t3426542126, ___windowID_16)); }
	inline int32_t get_windowID_16() const { return ___windowID_16; }
	inline int32_t* get_address_of_windowID_16() { return &___windowID_16; }
	inline void set_windowID_16(int32_t value)
	{
		___windowID_16 = value;
	}

	inline static int32_t get_offset_of_m_Cursor_17() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t3426542126, ___m_Cursor_17)); }
	inline int32_t get_m_Cursor_17() const { return ___m_Cursor_17; }
	inline int32_t* get_address_of_m_Cursor_17() { return &___m_Cursor_17; }
	inline void set_m_Cursor_17(int32_t value)
	{
		___m_Cursor_17 = value;
	}

	inline static int32_t get_offset_of_m_StretchableCountX_18() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t3426542126, ___m_StretchableCountX_18)); }
	inline int32_t get_m_StretchableCountX_18() const { return ___m_StretchableCountX_18; }
	inline int32_t* get_address_of_m_StretchableCountX_18() { return &___m_StretchableCountX_18; }
	inline void set_m_StretchableCountX_18(int32_t value)
	{
		___m_StretchableCountX_18 = value;
	}

	inline static int32_t get_offset_of_m_StretchableCountY_19() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t3426542126, ___m_StretchableCountY_19)); }
	inline int32_t get_m_StretchableCountY_19() const { return ___m_StretchableCountY_19; }
	inline int32_t* get_address_of_m_StretchableCountY_19() { return &___m_StretchableCountY_19; }
	inline void set_m_StretchableCountY_19(int32_t value)
	{
		___m_StretchableCountY_19 = value;
	}

	inline static int32_t get_offset_of_m_UserSpecifiedWidth_20() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t3426542126, ___m_UserSpecifiedWidth_20)); }
	inline bool get_m_UserSpecifiedWidth_20() const { return ___m_UserSpecifiedWidth_20; }
	inline bool* get_address_of_m_UserSpecifiedWidth_20() { return &___m_UserSpecifiedWidth_20; }
	inline void set_m_UserSpecifiedWidth_20(bool value)
	{
		___m_UserSpecifiedWidth_20 = value;
	}

	inline static int32_t get_offset_of_m_UserSpecifiedHeight_21() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t3426542126, ___m_UserSpecifiedHeight_21)); }
	inline bool get_m_UserSpecifiedHeight_21() const { return ___m_UserSpecifiedHeight_21; }
	inline bool* get_address_of_m_UserSpecifiedHeight_21() { return &___m_UserSpecifiedHeight_21; }
	inline void set_m_UserSpecifiedHeight_21(bool value)
	{
		___m_UserSpecifiedHeight_21 = value;
	}

	inline static int32_t get_offset_of_m_ChildMinWidth_22() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t3426542126, ___m_ChildMinWidth_22)); }
	inline float get_m_ChildMinWidth_22() const { return ___m_ChildMinWidth_22; }
	inline float* get_address_of_m_ChildMinWidth_22() { return &___m_ChildMinWidth_22; }
	inline void set_m_ChildMinWidth_22(float value)
	{
		___m_ChildMinWidth_22 = value;
	}

	inline static int32_t get_offset_of_m_ChildMaxWidth_23() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t3426542126, ___m_ChildMaxWidth_23)); }
	inline float get_m_ChildMaxWidth_23() const { return ___m_ChildMaxWidth_23; }
	inline float* get_address_of_m_ChildMaxWidth_23() { return &___m_ChildMaxWidth_23; }
	inline void set_m_ChildMaxWidth_23(float value)
	{
		___m_ChildMaxWidth_23 = value;
	}

	inline static int32_t get_offset_of_m_ChildMinHeight_24() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t3426542126, ___m_ChildMinHeight_24)); }
	inline float get_m_ChildMinHeight_24() const { return ___m_ChildMinHeight_24; }
	inline float* get_address_of_m_ChildMinHeight_24() { return &___m_ChildMinHeight_24; }
	inline void set_m_ChildMinHeight_24(float value)
	{
		___m_ChildMinHeight_24 = value;
	}

	inline static int32_t get_offset_of_m_ChildMaxHeight_25() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t3426542126, ___m_ChildMaxHeight_25)); }
	inline float get_m_ChildMaxHeight_25() const { return ___m_ChildMaxHeight_25; }
	inline float* get_address_of_m_ChildMaxHeight_25() { return &___m_ChildMaxHeight_25; }
	inline void set_m_ChildMaxHeight_25(float value)
	{
		___m_ChildMaxHeight_25 = value;
	}

	inline static int32_t get_offset_of_m_Margin_26() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t3426542126, ___m_Margin_26)); }
	inline RectOffset_t2859112449 * get_m_Margin_26() const { return ___m_Margin_26; }
	inline RectOffset_t2859112449 ** get_address_of_m_Margin_26() { return &___m_Margin_26; }
	inline void set_m_Margin_26(RectOffset_t2859112449 * value)
	{
		___m_Margin_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_Margin_26), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYOUTGROUP_T3426542126_H
#ifndef COMPONENT_T2896191854_H
#define COMPONENT_T2896191854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t2896191854  : public Object_t3505064284
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T2896191854_H
#ifndef GUILAYOUTOPTION_T2245866998_H
#define GUILAYOUTOPTION_T2245866998_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutOption
struct  GUILayoutOption_t2245866998  : public RuntimeObject
{
public:
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(GUILayoutOption_t2245866998, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(GUILayoutOption_t2245866998, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYOUTOPTION_T2245866998_H
#ifndef MULTICASTDELEGATE_T2741996530_H
#define MULTICASTDELEGATE_T2741996530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t2741996530  : public Delegate_t924411631
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t2741996530 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t2741996530 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2741996530, ___prev_9)); }
	inline MulticastDelegate_t2741996530 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t2741996530 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t2741996530 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2741996530, ___kpm_next_10)); }
	inline MulticastDelegate_t2741996530 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t2741996530 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t2741996530 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T2741996530_H
#ifndef DATETIME_T1495302782_H
#define DATETIME_T1495302782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t1495302782 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t3666512728  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t1495302782, ___ticks_0)); }
	inline TimeSpan_t3666512728  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t3666512728 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t3666512728  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t1495302782, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t1495302782_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t1495302782  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t1495302782  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t4030817796* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t4030817796* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t4030817796* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t4030817796* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t4030817796* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t4030817796* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t4030817796* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t1323596133* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t1323596133* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t1495302782_StaticFields, ___MaxValue_2)); }
	inline DateTime_t1495302782  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t1495302782 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t1495302782  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t1495302782_StaticFields, ___MinValue_3)); }
	inline DateTime_t1495302782  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t1495302782 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t1495302782  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t1495302782_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t4030817796* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t4030817796** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t4030817796* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t1495302782_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t4030817796* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t4030817796** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t4030817796* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t1495302782_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t4030817796* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t4030817796** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t4030817796* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t1495302782_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t4030817796* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t4030817796** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t4030817796* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t1495302782_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t4030817796* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t4030817796** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t4030817796* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t1495302782_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t4030817796* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t4030817796** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t4030817796* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t1495302782_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t4030817796* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t4030817796** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t4030817796* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t1495302782_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t1323596133* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t1323596133** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t1323596133* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t1495302782_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t1323596133* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t1323596133** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t1323596133* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t1495302782_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t1495302782_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T1495302782_H
#ifndef SCRIPTABLEOBJECT_T1187789741_H
#define SCRIPTABLEOBJECT_T1187789741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t1187789741  : public Object_t3505064284
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t1187789741_marshaled_pinvoke : public Object_t3505064284_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t1187789741_marshaled_com : public Object_t3505064284_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T1187789741_H
#ifndef RUNTIMEANIMATORCONTROLLER_T3324330239_H
#define RUNTIMEANIMATORCONTROLLER_T3324330239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimeAnimatorController
struct  RuntimeAnimatorController_t3324330239  : public Object_t3505064284
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEANIMATORCONTROLLER_T3324330239_H
#ifndef FONT_T4231826360_H
#define FONT_T4231826360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Font
struct  Font_t4231826360  : public Object_t3505064284
{
public:
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t1561329457 * ___m_FontTextureRebuildCallback_3;

public:
	inline static int32_t get_offset_of_m_FontTextureRebuildCallback_3() { return static_cast<int32_t>(offsetof(Font_t4231826360, ___m_FontTextureRebuildCallback_3)); }
	inline FontTextureRebuildCallback_t1561329457 * get_m_FontTextureRebuildCallback_3() const { return ___m_FontTextureRebuildCallback_3; }
	inline FontTextureRebuildCallback_t1561329457 ** get_address_of_m_FontTextureRebuildCallback_3() { return &___m_FontTextureRebuildCallback_3; }
	inline void set_m_FontTextureRebuildCallback_3(FontTextureRebuildCallback_t1561329457 * value)
	{
		___m_FontTextureRebuildCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontTextureRebuildCallback_3), value);
	}
};

struct Font_t4231826360_StaticFields
{
public:
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_t441564542 * ___textureRebuilt_2;

public:
	inline static int32_t get_offset_of_textureRebuilt_2() { return static_cast<int32_t>(offsetof(Font_t4231826360_StaticFields, ___textureRebuilt_2)); }
	inline Action_1_t441564542 * get_textureRebuilt_2() const { return ___textureRebuilt_2; }
	inline Action_1_t441564542 ** get_address_of_textureRebuilt_2() { return &___textureRebuilt_2; }
	inline void set_textureRebuilt_2(Action_1_t441564542 * value)
	{
		___textureRebuilt_2 = value;
		Il2CppCodeGenWriteBarrier((&___textureRebuilt_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONT_T4231826360_H
#ifndef PHYSICMATERIAL_T4088787729_H
#define PHYSICMATERIAL_T4088787729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PhysicMaterial
struct  PhysicMaterial_t4088787729  : public Object_t3505064284
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICMATERIAL_T4088787729_H
#ifndef AUDIOPLAYABLEOUTPUT_T1635370737_H
#define AUDIOPLAYABLEOUTPUT_T1635370737_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioPlayableOutput
struct  AudioPlayableOutput_t1635370737 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Audio.AudioPlayableOutput::m_Handle
	PlayableOutputHandle_t574882705  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioPlayableOutput_t1635370737, ___m_Handle_0)); }
	inline PlayableOutputHandle_t574882705  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t574882705 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t574882705  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOPLAYABLEOUTPUT_T1635370737_H
#ifndef AUDIOCLIPPLAYABLE_T3713713845_H
#define AUDIOCLIPPLAYABLE_T3713713845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioClipPlayable
struct  AudioClipPlayable_t3713713845 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::m_Handle
	PlayableHandle_t2392337730  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioClipPlayable_t3713713845, ___m_Handle_0)); }
	inline PlayableHandle_t2392337730  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t2392337730 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t2392337730  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIPPLAYABLE_T3713713845_H
#ifndef AUDIOMIXERPLAYABLE_T3559351340_H
#define AUDIOMIXERPLAYABLE_T3559351340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioMixerPlayable
struct  AudioMixerPlayable_t3559351340 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::m_Handle
	PlayableHandle_t2392337730  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioMixerPlayable_t3559351340, ___m_Handle_0)); }
	inline PlayableHandle_t2392337730  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t2392337730 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t2392337730  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOMIXERPLAYABLE_T3559351340_H
#ifndef AUDIOCLIP_T1835015024_H
#define AUDIOCLIP_T1835015024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t1835015024  : public Object_t3505064284
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t1635427537 * ___m_PCMReaderCallback_2;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t2219038502 * ___m_PCMSetPositionCallback_3;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_2() { return static_cast<int32_t>(offsetof(AudioClip_t1835015024, ___m_PCMReaderCallback_2)); }
	inline PCMReaderCallback_t1635427537 * get_m_PCMReaderCallback_2() const { return ___m_PCMReaderCallback_2; }
	inline PCMReaderCallback_t1635427537 ** get_address_of_m_PCMReaderCallback_2() { return &___m_PCMReaderCallback_2; }
	inline void set_m_PCMReaderCallback_2(PCMReaderCallback_t1635427537 * value)
	{
		___m_PCMReaderCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_2), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_3() { return static_cast<int32_t>(offsetof(AudioClip_t1835015024, ___m_PCMSetPositionCallback_3)); }
	inline PCMSetPositionCallback_t2219038502 * get_m_PCMSetPositionCallback_3() const { return ___m_PCMSetPositionCallback_3; }
	inline PCMSetPositionCallback_t2219038502 ** get_address_of_m_PCMSetPositionCallback_3() { return &___m_PCMSetPositionCallback_3; }
	inline void set_m_PCMSetPositionCallback_3(PCMSetPositionCallback_t2219038502 * value)
	{
		___m_PCMSetPositionCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T1835015024_H
#ifndef ANIMATIONLAYERMIXERPLAYABLE_T880055789_H
#define ANIMATIONLAYERMIXERPLAYABLE_T880055789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationLayerMixerPlayable
struct  AnimationLayerMixerPlayable_t880055789 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::m_Handle
	PlayableHandle_t2392337730  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationLayerMixerPlayable_t880055789, ___m_Handle_0)); }
	inline PlayableHandle_t2392337730  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t2392337730 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t2392337730  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationLayerMixerPlayable_t880055789_StaticFields
{
public:
	// UnityEngine.Animations.AnimationLayerMixerPlayable UnityEngine.Animations.AnimationLayerMixerPlayable::m_NullPlayable
	AnimationLayerMixerPlayable_t880055789  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationLayerMixerPlayable_t880055789_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationLayerMixerPlayable_t880055789  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationLayerMixerPlayable_t880055789 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationLayerMixerPlayable_t880055789  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONLAYERMIXERPLAYABLE_T880055789_H
#ifndef ANIMATIONMIXERPLAYABLE_T1243116365_H
#define ANIMATIONMIXERPLAYABLE_T1243116365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationMixerPlayable
struct  AnimationMixerPlayable_t1243116365 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::m_Handle
	PlayableHandle_t2392337730  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationMixerPlayable_t1243116365, ___m_Handle_0)); }
	inline PlayableHandle_t2392337730  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t2392337730 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t2392337730  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONMIXERPLAYABLE_T1243116365_H
#ifndef ANIMATIONOFFSETPLAYABLE_T4088677016_H
#define ANIMATIONOFFSETPLAYABLE_T4088677016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationOffsetPlayable
struct  AnimationOffsetPlayable_t4088677016 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::m_Handle
	PlayableHandle_t2392337730  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationOffsetPlayable_t4088677016, ___m_Handle_0)); }
	inline PlayableHandle_t2392337730  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t2392337730 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t2392337730  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationOffsetPlayable_t4088677016_StaticFields
{
public:
	// UnityEngine.Animations.AnimationOffsetPlayable UnityEngine.Animations.AnimationOffsetPlayable::m_NullPlayable
	AnimationOffsetPlayable_t4088677016  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationOffsetPlayable_t4088677016_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationOffsetPlayable_t4088677016  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationOffsetPlayable_t4088677016 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationOffsetPlayable_t4088677016  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONOFFSETPLAYABLE_T4088677016_H
#ifndef ANIMATIONPLAYABLEOUTPUT_T2794604597_H
#define ANIMATIONPLAYABLEOUTPUT_T2794604597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationPlayableOutput
struct  AnimationPlayableOutput_t2794604597 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::m_Handle
	PlayableOutputHandle_t574882705  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationPlayableOutput_t2794604597, ___m_Handle_0)); }
	inline PlayableOutputHandle_t574882705  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t574882705 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t574882705  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONPLAYABLEOUTPUT_T2794604597_H
#ifndef ANIMATORCONTROLLERPLAYABLE_T130308945_H
#define ANIMATORCONTROLLERPLAYABLE_T130308945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimatorControllerPlayable
struct  AnimatorControllerPlayable_t130308945 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::m_Handle
	PlayableHandle_t2392337730  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimatorControllerPlayable_t130308945, ___m_Handle_0)); }
	inline PlayableHandle_t2392337730  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t2392337730 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t2392337730  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimatorControllerPlayable_t130308945_StaticFields
{
public:
	// UnityEngine.Animations.AnimatorControllerPlayable UnityEngine.Animations.AnimatorControllerPlayable::m_NullPlayable
	AnimatorControllerPlayable_t130308945  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimatorControllerPlayable_t130308945_StaticFields, ___m_NullPlayable_1)); }
	inline AnimatorControllerPlayable_t130308945  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimatorControllerPlayable_t130308945 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimatorControllerPlayable_t130308945  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCONTROLLERPLAYABLE_T130308945_H
#ifndef ANIMATIONEVENT_T1386832287_H
#define ANIMATIONEVENT_T1386832287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationEvent
struct  AnimationEvent_t1386832287  : public RuntimeObject
{
public:
	// System.Single UnityEngine.AnimationEvent::m_Time
	float ___m_Time_0;
	// System.String UnityEngine.AnimationEvent::m_FunctionName
	String_t* ___m_FunctionName_1;
	// System.String UnityEngine.AnimationEvent::m_StringParameter
	String_t* ___m_StringParameter_2;
	// UnityEngine.Object UnityEngine.AnimationEvent::m_ObjectReferenceParameter
	Object_t3505064284 * ___m_ObjectReferenceParameter_3;
	// System.Single UnityEngine.AnimationEvent::m_FloatParameter
	float ___m_FloatParameter_4;
	// System.Int32 UnityEngine.AnimationEvent::m_IntParameter
	int32_t ___m_IntParameter_5;
	// System.Int32 UnityEngine.AnimationEvent::m_MessageOptions
	int32_t ___m_MessageOptions_6;
	// UnityEngine.AnimationEventSource UnityEngine.AnimationEvent::m_Source
	int32_t ___m_Source_7;
	// UnityEngine.AnimationState UnityEngine.AnimationEvent::m_StateSender
	AnimationState_t1590093807 * ___m_StateSender_8;
	// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::m_AnimatorStateInfo
	AnimatorStateInfo_t1112099833  ___m_AnimatorStateInfo_9;
	// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::m_AnimatorClipInfo
	AnimatorClipInfo_t1178155208  ___m_AnimatorClipInfo_10;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(AnimationEvent_t1386832287, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_FunctionName_1() { return static_cast<int32_t>(offsetof(AnimationEvent_t1386832287, ___m_FunctionName_1)); }
	inline String_t* get_m_FunctionName_1() const { return ___m_FunctionName_1; }
	inline String_t** get_address_of_m_FunctionName_1() { return &___m_FunctionName_1; }
	inline void set_m_FunctionName_1(String_t* value)
	{
		___m_FunctionName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_FunctionName_1), value);
	}

	inline static int32_t get_offset_of_m_StringParameter_2() { return static_cast<int32_t>(offsetof(AnimationEvent_t1386832287, ___m_StringParameter_2)); }
	inline String_t* get_m_StringParameter_2() const { return ___m_StringParameter_2; }
	inline String_t** get_address_of_m_StringParameter_2() { return &___m_StringParameter_2; }
	inline void set_m_StringParameter_2(String_t* value)
	{
		___m_StringParameter_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_StringParameter_2), value);
	}

	inline static int32_t get_offset_of_m_ObjectReferenceParameter_3() { return static_cast<int32_t>(offsetof(AnimationEvent_t1386832287, ___m_ObjectReferenceParameter_3)); }
	inline Object_t3505064284 * get_m_ObjectReferenceParameter_3() const { return ___m_ObjectReferenceParameter_3; }
	inline Object_t3505064284 ** get_address_of_m_ObjectReferenceParameter_3() { return &___m_ObjectReferenceParameter_3; }
	inline void set_m_ObjectReferenceParameter_3(Object_t3505064284 * value)
	{
		___m_ObjectReferenceParameter_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectReferenceParameter_3), value);
	}

	inline static int32_t get_offset_of_m_FloatParameter_4() { return static_cast<int32_t>(offsetof(AnimationEvent_t1386832287, ___m_FloatParameter_4)); }
	inline float get_m_FloatParameter_4() const { return ___m_FloatParameter_4; }
	inline float* get_address_of_m_FloatParameter_4() { return &___m_FloatParameter_4; }
	inline void set_m_FloatParameter_4(float value)
	{
		___m_FloatParameter_4 = value;
	}

	inline static int32_t get_offset_of_m_IntParameter_5() { return static_cast<int32_t>(offsetof(AnimationEvent_t1386832287, ___m_IntParameter_5)); }
	inline int32_t get_m_IntParameter_5() const { return ___m_IntParameter_5; }
	inline int32_t* get_address_of_m_IntParameter_5() { return &___m_IntParameter_5; }
	inline void set_m_IntParameter_5(int32_t value)
	{
		___m_IntParameter_5 = value;
	}

	inline static int32_t get_offset_of_m_MessageOptions_6() { return static_cast<int32_t>(offsetof(AnimationEvent_t1386832287, ___m_MessageOptions_6)); }
	inline int32_t get_m_MessageOptions_6() const { return ___m_MessageOptions_6; }
	inline int32_t* get_address_of_m_MessageOptions_6() { return &___m_MessageOptions_6; }
	inline void set_m_MessageOptions_6(int32_t value)
	{
		___m_MessageOptions_6 = value;
	}

	inline static int32_t get_offset_of_m_Source_7() { return static_cast<int32_t>(offsetof(AnimationEvent_t1386832287, ___m_Source_7)); }
	inline int32_t get_m_Source_7() const { return ___m_Source_7; }
	inline int32_t* get_address_of_m_Source_7() { return &___m_Source_7; }
	inline void set_m_Source_7(int32_t value)
	{
		___m_Source_7 = value;
	}

	inline static int32_t get_offset_of_m_StateSender_8() { return static_cast<int32_t>(offsetof(AnimationEvent_t1386832287, ___m_StateSender_8)); }
	inline AnimationState_t1590093807 * get_m_StateSender_8() const { return ___m_StateSender_8; }
	inline AnimationState_t1590093807 ** get_address_of_m_StateSender_8() { return &___m_StateSender_8; }
	inline void set_m_StateSender_8(AnimationState_t1590093807 * value)
	{
		___m_StateSender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_StateSender_8), value);
	}

	inline static int32_t get_offset_of_m_AnimatorStateInfo_9() { return static_cast<int32_t>(offsetof(AnimationEvent_t1386832287, ___m_AnimatorStateInfo_9)); }
	inline AnimatorStateInfo_t1112099833  get_m_AnimatorStateInfo_9() const { return ___m_AnimatorStateInfo_9; }
	inline AnimatorStateInfo_t1112099833 * get_address_of_m_AnimatorStateInfo_9() { return &___m_AnimatorStateInfo_9; }
	inline void set_m_AnimatorStateInfo_9(AnimatorStateInfo_t1112099833  value)
	{
		___m_AnimatorStateInfo_9 = value;
	}

	inline static int32_t get_offset_of_m_AnimatorClipInfo_10() { return static_cast<int32_t>(offsetof(AnimationEvent_t1386832287, ___m_AnimatorClipInfo_10)); }
	inline AnimatorClipInfo_t1178155208  get_m_AnimatorClipInfo_10() const { return ___m_AnimatorClipInfo_10; }
	inline AnimatorClipInfo_t1178155208 * get_address_of_m_AnimatorClipInfo_10() { return &___m_AnimatorClipInfo_10; }
	inline void set_m_AnimatorClipInfo_10(AnimatorClipInfo_t1178155208  value)
	{
		___m_AnimatorClipInfo_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_t1386832287_marshaled_pinvoke
{
	float ___m_Time_0;
	char* ___m_FunctionName_1;
	char* ___m_StringParameter_2;
	Object_t3505064284_marshaled_pinvoke ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_t1590093807 * ___m_StateSender_8;
	AnimatorStateInfo_t1112099833  ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t1178155208  ___m_AnimatorClipInfo_10;
};
// Native definition for COM marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_t1386832287_marshaled_com
{
	float ___m_Time_0;
	Il2CppChar* ___m_FunctionName_1;
	Il2CppChar* ___m_StringParameter_2;
	Object_t3505064284_marshaled_com* ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_t1590093807 * ___m_StateSender_8;
	AnimatorStateInfo_t1112099833  ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t1178155208  ___m_AnimatorClipInfo_10;
};
#endif // ANIMATIONEVENT_T1386832287_H
#ifndef ANIMATIONSTATE_T1590093807_H
#define ANIMATIONSTATE_T1590093807_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationState
struct  AnimationState_t1590093807  : public TrackedReference_t2924287424
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONSTATE_T1590093807_H
#ifndef ANIMATIONCLIPPLAYABLE_T2229931488_H
#define ANIMATIONCLIPPLAYABLE_T2229931488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationClipPlayable
struct  AnimationClipPlayable_t2229931488 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::m_Handle
	PlayableHandle_t2392337730  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationClipPlayable_t2229931488, ___m_Handle_0)); }
	inline PlayableHandle_t2392337730  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t2392337730 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t2392337730  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONCLIPPLAYABLE_T2229931488_H
#ifndef MINMAXCURVE_T1996474402_H
#define MINMAXCURVE_T1996474402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/MinMaxCurve
struct  MinMaxCurve_t1996474402 
{
public:
	// UnityEngine.ParticleSystemCurveMode UnityEngine.ParticleSystem/MinMaxCurve::m_Mode
	int32_t ___m_Mode_0;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMultiplier
	float ___m_CurveMultiplier_1;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMin
	AnimationCurve_t172923095 * ___m_CurveMin_2;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMax
	AnimationCurve_t172923095 * ___m_CurveMax_3;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMin
	float ___m_ConstantMin_4;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMax
	float ___m_ConstantMax_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(MinMaxCurve_t1996474402, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_CurveMultiplier_1() { return static_cast<int32_t>(offsetof(MinMaxCurve_t1996474402, ___m_CurveMultiplier_1)); }
	inline float get_m_CurveMultiplier_1() const { return ___m_CurveMultiplier_1; }
	inline float* get_address_of_m_CurveMultiplier_1() { return &___m_CurveMultiplier_1; }
	inline void set_m_CurveMultiplier_1(float value)
	{
		___m_CurveMultiplier_1 = value;
	}

	inline static int32_t get_offset_of_m_CurveMin_2() { return static_cast<int32_t>(offsetof(MinMaxCurve_t1996474402, ___m_CurveMin_2)); }
	inline AnimationCurve_t172923095 * get_m_CurveMin_2() const { return ___m_CurveMin_2; }
	inline AnimationCurve_t172923095 ** get_address_of_m_CurveMin_2() { return &___m_CurveMin_2; }
	inline void set_m_CurveMin_2(AnimationCurve_t172923095 * value)
	{
		___m_CurveMin_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurveMin_2), value);
	}

	inline static int32_t get_offset_of_m_CurveMax_3() { return static_cast<int32_t>(offsetof(MinMaxCurve_t1996474402, ___m_CurveMax_3)); }
	inline AnimationCurve_t172923095 * get_m_CurveMax_3() const { return ___m_CurveMax_3; }
	inline AnimationCurve_t172923095 ** get_address_of_m_CurveMax_3() { return &___m_CurveMax_3; }
	inline void set_m_CurveMax_3(AnimationCurve_t172923095 * value)
	{
		___m_CurveMax_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurveMax_3), value);
	}

	inline static int32_t get_offset_of_m_ConstantMin_4() { return static_cast<int32_t>(offsetof(MinMaxCurve_t1996474402, ___m_ConstantMin_4)); }
	inline float get_m_ConstantMin_4() const { return ___m_ConstantMin_4; }
	inline float* get_address_of_m_ConstantMin_4() { return &___m_ConstantMin_4; }
	inline void set_m_ConstantMin_4(float value)
	{
		___m_ConstantMin_4 = value;
	}

	inline static int32_t get_offset_of_m_ConstantMax_5() { return static_cast<int32_t>(offsetof(MinMaxCurve_t1996474402, ___m_ConstantMax_5)); }
	inline float get_m_ConstantMax_5() const { return ___m_ConstantMax_5; }
	inline float* get_address_of_m_ConstantMax_5() { return &___m_ConstantMax_5; }
	inline void set_m_ConstantMax_5(float value)
	{
		___m_ConstantMax_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MinMaxCurve
struct MinMaxCurve_t1996474402_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	float ___m_CurveMultiplier_1;
	AnimationCurve_t172923095_marshaled_pinvoke ___m_CurveMin_2;
	AnimationCurve_t172923095_marshaled_pinvoke ___m_CurveMax_3;
	float ___m_ConstantMin_4;
	float ___m_ConstantMax_5;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MinMaxCurve
struct MinMaxCurve_t1996474402_marshaled_com
{
	int32_t ___m_Mode_0;
	float ___m_CurveMultiplier_1;
	AnimationCurve_t172923095_marshaled_com* ___m_CurveMin_2;
	AnimationCurve_t172923095_marshaled_com* ___m_CurveMax_3;
	float ___m_ConstantMin_4;
	float ___m_ConstantMax_5;
};
#endif // MINMAXCURVE_T1996474402_H
#ifndef HUMANBONE_T1661871427_H
#define HUMANBONE_T1661871427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HumanBone
struct  HumanBone_t1661871427 
{
public:
	// System.String UnityEngine.HumanBone::m_BoneName
	String_t* ___m_BoneName_0;
	// System.String UnityEngine.HumanBone::m_HumanName
	String_t* ___m_HumanName_1;
	// UnityEngine.HumanLimit UnityEngine.HumanBone::limit
	HumanLimit_t4263421870  ___limit_2;

public:
	inline static int32_t get_offset_of_m_BoneName_0() { return static_cast<int32_t>(offsetof(HumanBone_t1661871427, ___m_BoneName_0)); }
	inline String_t* get_m_BoneName_0() const { return ___m_BoneName_0; }
	inline String_t** get_address_of_m_BoneName_0() { return &___m_BoneName_0; }
	inline void set_m_BoneName_0(String_t* value)
	{
		___m_BoneName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_BoneName_0), value);
	}

	inline static int32_t get_offset_of_m_HumanName_1() { return static_cast<int32_t>(offsetof(HumanBone_t1661871427, ___m_HumanName_1)); }
	inline String_t* get_m_HumanName_1() const { return ___m_HumanName_1; }
	inline String_t** get_address_of_m_HumanName_1() { return &___m_HumanName_1; }
	inline void set_m_HumanName_1(String_t* value)
	{
		___m_HumanName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_HumanName_1), value);
	}

	inline static int32_t get_offset_of_limit_2() { return static_cast<int32_t>(offsetof(HumanBone_t1661871427, ___limit_2)); }
	inline HumanLimit_t4263421870  get_limit_2() const { return ___limit_2; }
	inline HumanLimit_t4263421870 * get_address_of_limit_2() { return &___limit_2; }
	inline void set_limit_2(HumanLimit_t4263421870  value)
	{
		___limit_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.HumanBone
struct HumanBone_t1661871427_marshaled_pinvoke
{
	char* ___m_BoneName_0;
	char* ___m_HumanName_1;
	HumanLimit_t4263421870  ___limit_2;
};
// Native definition for COM marshalling of UnityEngine.HumanBone
struct HumanBone_t1661871427_marshaled_com
{
	Il2CppChar* ___m_BoneName_0;
	Il2CppChar* ___m_HumanName_1;
	HumanLimit_t4263421870  ___limit_2;
};
#endif // HUMANBONE_T1661871427_H
#ifndef AVATARMASK_T1996829447_H
#define AVATARMASK_T1996829447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AvatarMask
struct  AvatarMask_t1996829447  : public Object_t3505064284
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AVATARMASK_T1996829447_H
#ifndef MOTION_T1626098095_H
#define MOTION_T1626098095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Motion
struct  Motion_t1626098095  : public Object_t3505064284
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOTION_T1626098095_H
#ifndef ANIMATORCONTROLLERPARAMETER_T538510573_H
#define ANIMATORCONTROLLERPARAMETER_T538510573_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorControllerParameter
struct  AnimatorControllerParameter_t538510573  : public RuntimeObject
{
public:
	// System.String UnityEngine.AnimatorControllerParameter::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.AnimatorControllerParameterType UnityEngine.AnimatorControllerParameter::m_Type
	int32_t ___m_Type_1;
	// System.Single UnityEngine.AnimatorControllerParameter::m_DefaultFloat
	float ___m_DefaultFloat_2;
	// System.Int32 UnityEngine.AnimatorControllerParameter::m_DefaultInt
	int32_t ___m_DefaultInt_3;
	// System.Boolean UnityEngine.AnimatorControllerParameter::m_DefaultBool
	bool ___m_DefaultBool_4;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t538510573, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_0), value);
	}

	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t538510573, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultFloat_2() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t538510573, ___m_DefaultFloat_2)); }
	inline float get_m_DefaultFloat_2() const { return ___m_DefaultFloat_2; }
	inline float* get_address_of_m_DefaultFloat_2() { return &___m_DefaultFloat_2; }
	inline void set_m_DefaultFloat_2(float value)
	{
		___m_DefaultFloat_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultInt_3() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t538510573, ___m_DefaultInt_3)); }
	inline int32_t get_m_DefaultInt_3() const { return ___m_DefaultInt_3; }
	inline int32_t* get_address_of_m_DefaultInt_3() { return &___m_DefaultInt_3; }
	inline void set_m_DefaultInt_3(int32_t value)
	{
		___m_DefaultInt_3 = value;
	}

	inline static int32_t get_offset_of_m_DefaultBool_4() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t538510573, ___m_DefaultBool_4)); }
	inline bool get_m_DefaultBool_4() const { return ___m_DefaultBool_4; }
	inline bool* get_address_of_m_DefaultBool_4() { return &___m_DefaultBool_4; }
	inline void set_m_DefaultBool_4(bool value)
	{
		___m_DefaultBool_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCONTROLLERPARAMETER_T538510573_H
#ifndef TEXTGENERATIONSETTINGS_T503424141_H
#define TEXTGENERATIONSETTINGS_T503424141_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextGenerationSettings
struct  TextGenerationSettings_t503424141 
{
public:
	// UnityEngine.Font UnityEngine.TextGenerationSettings::font
	Font_t4231826360 * ___font_0;
	// UnityEngine.Color UnityEngine.TextGenerationSettings::color
	Color_t2011931022  ___color_1;
	// System.Int32 UnityEngine.TextGenerationSettings::fontSize
	int32_t ___fontSize_2;
	// System.Single UnityEngine.TextGenerationSettings::lineSpacing
	float ___lineSpacing_3;
	// System.Boolean UnityEngine.TextGenerationSettings::richText
	bool ___richText_4;
	// System.Single UnityEngine.TextGenerationSettings::scaleFactor
	float ___scaleFactor_5;
	// UnityEngine.FontStyle UnityEngine.TextGenerationSettings::fontStyle
	int32_t ___fontStyle_6;
	// UnityEngine.TextAnchor UnityEngine.TextGenerationSettings::textAnchor
	int32_t ___textAnchor_7;
	// System.Boolean UnityEngine.TextGenerationSettings::alignByGeometry
	bool ___alignByGeometry_8;
	// System.Boolean UnityEngine.TextGenerationSettings::resizeTextForBestFit
	bool ___resizeTextForBestFit_9;
	// System.Int32 UnityEngine.TextGenerationSettings::resizeTextMinSize
	int32_t ___resizeTextMinSize_10;
	// System.Int32 UnityEngine.TextGenerationSettings::resizeTextMaxSize
	int32_t ___resizeTextMaxSize_11;
	// System.Boolean UnityEngine.TextGenerationSettings::updateBounds
	bool ___updateBounds_12;
	// UnityEngine.VerticalWrapMode UnityEngine.TextGenerationSettings::verticalOverflow
	int32_t ___verticalOverflow_13;
	// UnityEngine.HorizontalWrapMode UnityEngine.TextGenerationSettings::horizontalOverflow
	int32_t ___horizontalOverflow_14;
	// UnityEngine.Vector2 UnityEngine.TextGenerationSettings::generationExtents
	Vector2_t290648799  ___generationExtents_15;
	// UnityEngine.Vector2 UnityEngine.TextGenerationSettings::pivot
	Vector2_t290648799  ___pivot_16;
	// System.Boolean UnityEngine.TextGenerationSettings::generateOutOfBounds
	bool ___generateOutOfBounds_17;

public:
	inline static int32_t get_offset_of_font_0() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t503424141, ___font_0)); }
	inline Font_t4231826360 * get_font_0() const { return ___font_0; }
	inline Font_t4231826360 ** get_address_of_font_0() { return &___font_0; }
	inline void set_font_0(Font_t4231826360 * value)
	{
		___font_0 = value;
		Il2CppCodeGenWriteBarrier((&___font_0), value);
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t503424141, ___color_1)); }
	inline Color_t2011931022  get_color_1() const { return ___color_1; }
	inline Color_t2011931022 * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(Color_t2011931022  value)
	{
		___color_1 = value;
	}

	inline static int32_t get_offset_of_fontSize_2() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t503424141, ___fontSize_2)); }
	inline int32_t get_fontSize_2() const { return ___fontSize_2; }
	inline int32_t* get_address_of_fontSize_2() { return &___fontSize_2; }
	inline void set_fontSize_2(int32_t value)
	{
		___fontSize_2 = value;
	}

	inline static int32_t get_offset_of_lineSpacing_3() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t503424141, ___lineSpacing_3)); }
	inline float get_lineSpacing_3() const { return ___lineSpacing_3; }
	inline float* get_address_of_lineSpacing_3() { return &___lineSpacing_3; }
	inline void set_lineSpacing_3(float value)
	{
		___lineSpacing_3 = value;
	}

	inline static int32_t get_offset_of_richText_4() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t503424141, ___richText_4)); }
	inline bool get_richText_4() const { return ___richText_4; }
	inline bool* get_address_of_richText_4() { return &___richText_4; }
	inline void set_richText_4(bool value)
	{
		___richText_4 = value;
	}

	inline static int32_t get_offset_of_scaleFactor_5() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t503424141, ___scaleFactor_5)); }
	inline float get_scaleFactor_5() const { return ___scaleFactor_5; }
	inline float* get_address_of_scaleFactor_5() { return &___scaleFactor_5; }
	inline void set_scaleFactor_5(float value)
	{
		___scaleFactor_5 = value;
	}

	inline static int32_t get_offset_of_fontStyle_6() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t503424141, ___fontStyle_6)); }
	inline int32_t get_fontStyle_6() const { return ___fontStyle_6; }
	inline int32_t* get_address_of_fontStyle_6() { return &___fontStyle_6; }
	inline void set_fontStyle_6(int32_t value)
	{
		___fontStyle_6 = value;
	}

	inline static int32_t get_offset_of_textAnchor_7() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t503424141, ___textAnchor_7)); }
	inline int32_t get_textAnchor_7() const { return ___textAnchor_7; }
	inline int32_t* get_address_of_textAnchor_7() { return &___textAnchor_7; }
	inline void set_textAnchor_7(int32_t value)
	{
		___textAnchor_7 = value;
	}

	inline static int32_t get_offset_of_alignByGeometry_8() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t503424141, ___alignByGeometry_8)); }
	inline bool get_alignByGeometry_8() const { return ___alignByGeometry_8; }
	inline bool* get_address_of_alignByGeometry_8() { return &___alignByGeometry_8; }
	inline void set_alignByGeometry_8(bool value)
	{
		___alignByGeometry_8 = value;
	}

	inline static int32_t get_offset_of_resizeTextForBestFit_9() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t503424141, ___resizeTextForBestFit_9)); }
	inline bool get_resizeTextForBestFit_9() const { return ___resizeTextForBestFit_9; }
	inline bool* get_address_of_resizeTextForBestFit_9() { return &___resizeTextForBestFit_9; }
	inline void set_resizeTextForBestFit_9(bool value)
	{
		___resizeTextForBestFit_9 = value;
	}

	inline static int32_t get_offset_of_resizeTextMinSize_10() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t503424141, ___resizeTextMinSize_10)); }
	inline int32_t get_resizeTextMinSize_10() const { return ___resizeTextMinSize_10; }
	inline int32_t* get_address_of_resizeTextMinSize_10() { return &___resizeTextMinSize_10; }
	inline void set_resizeTextMinSize_10(int32_t value)
	{
		___resizeTextMinSize_10 = value;
	}

	inline static int32_t get_offset_of_resizeTextMaxSize_11() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t503424141, ___resizeTextMaxSize_11)); }
	inline int32_t get_resizeTextMaxSize_11() const { return ___resizeTextMaxSize_11; }
	inline int32_t* get_address_of_resizeTextMaxSize_11() { return &___resizeTextMaxSize_11; }
	inline void set_resizeTextMaxSize_11(int32_t value)
	{
		___resizeTextMaxSize_11 = value;
	}

	inline static int32_t get_offset_of_updateBounds_12() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t503424141, ___updateBounds_12)); }
	inline bool get_updateBounds_12() const { return ___updateBounds_12; }
	inline bool* get_address_of_updateBounds_12() { return &___updateBounds_12; }
	inline void set_updateBounds_12(bool value)
	{
		___updateBounds_12 = value;
	}

	inline static int32_t get_offset_of_verticalOverflow_13() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t503424141, ___verticalOverflow_13)); }
	inline int32_t get_verticalOverflow_13() const { return ___verticalOverflow_13; }
	inline int32_t* get_address_of_verticalOverflow_13() { return &___verticalOverflow_13; }
	inline void set_verticalOverflow_13(int32_t value)
	{
		___verticalOverflow_13 = value;
	}

	inline static int32_t get_offset_of_horizontalOverflow_14() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t503424141, ___horizontalOverflow_14)); }
	inline int32_t get_horizontalOverflow_14() const { return ___horizontalOverflow_14; }
	inline int32_t* get_address_of_horizontalOverflow_14() { return &___horizontalOverflow_14; }
	inline void set_horizontalOverflow_14(int32_t value)
	{
		___horizontalOverflow_14 = value;
	}

	inline static int32_t get_offset_of_generationExtents_15() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t503424141, ___generationExtents_15)); }
	inline Vector2_t290648799  get_generationExtents_15() const { return ___generationExtents_15; }
	inline Vector2_t290648799 * get_address_of_generationExtents_15() { return &___generationExtents_15; }
	inline void set_generationExtents_15(Vector2_t290648799  value)
	{
		___generationExtents_15 = value;
	}

	inline static int32_t get_offset_of_pivot_16() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t503424141, ___pivot_16)); }
	inline Vector2_t290648799  get_pivot_16() const { return ___pivot_16; }
	inline Vector2_t290648799 * get_address_of_pivot_16() { return &___pivot_16; }
	inline void set_pivot_16(Vector2_t290648799  value)
	{
		___pivot_16 = value;
	}

	inline static int32_t get_offset_of_generateOutOfBounds_17() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t503424141, ___generateOutOfBounds_17)); }
	inline bool get_generateOutOfBounds_17() const { return ___generateOutOfBounds_17; }
	inline bool* get_address_of_generateOutOfBounds_17() { return &___generateOutOfBounds_17; }
	inline void set_generateOutOfBounds_17(bool value)
	{
		___generateOutOfBounds_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.TextGenerationSettings
struct TextGenerationSettings_t503424141_marshaled_pinvoke
{
	Font_t4231826360 * ___font_0;
	Color_t2011931022  ___color_1;
	int32_t ___fontSize_2;
	float ___lineSpacing_3;
	int32_t ___richText_4;
	float ___scaleFactor_5;
	int32_t ___fontStyle_6;
	int32_t ___textAnchor_7;
	int32_t ___alignByGeometry_8;
	int32_t ___resizeTextForBestFit_9;
	int32_t ___resizeTextMinSize_10;
	int32_t ___resizeTextMaxSize_11;
	int32_t ___updateBounds_12;
	int32_t ___verticalOverflow_13;
	int32_t ___horizontalOverflow_14;
	Vector2_t290648799  ___generationExtents_15;
	Vector2_t290648799  ___pivot_16;
	int32_t ___generateOutOfBounds_17;
};
// Native definition for COM marshalling of UnityEngine.TextGenerationSettings
struct TextGenerationSettings_t503424141_marshaled_com
{
	Font_t4231826360 * ___font_0;
	Color_t2011931022  ___color_1;
	int32_t ___fontSize_2;
	float ___lineSpacing_3;
	int32_t ___richText_4;
	float ___scaleFactor_5;
	int32_t ___fontStyle_6;
	int32_t ___textAnchor_7;
	int32_t ___alignByGeometry_8;
	int32_t ___resizeTextForBestFit_9;
	int32_t ___resizeTextMinSize_10;
	int32_t ___resizeTextMaxSize_11;
	int32_t ___updateBounds_12;
	int32_t ___verticalOverflow_13;
	int32_t ___horizontalOverflow_14;
	Vector2_t290648799  ___generationExtents_15;
	Vector2_t290648799  ___pivot_16;
	int32_t ___generateOutOfBounds_17;
};
#endif // TEXTGENERATIONSETTINGS_T503424141_H
#ifndef RIGIDBODY_T2541962521_H
#define RIGIDBODY_T2541962521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody
struct  Rigidbody_t2541962521  : public Component_t2896191854
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY_T2541962521_H
#ifndef JOINT_T4178934645_H
#define JOINT_T4178934645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Joint
struct  Joint_t4178934645  : public Component_t2896191854
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JOINT_T4178934645_H
#ifndef COLLIDER_T3095653511_H
#define COLLIDER_T3095653511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t3095653511  : public Component_t2896191854
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T3095653511_H
#ifndef RIGIDBODY2D_T3697683477_H
#define RIGIDBODY2D_T3697683477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody2D
struct  Rigidbody2D_t3697683477  : public Component_t2896191854
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY2D_T3697683477_H
#ifndef WILLRENDERCANVASES_T856939485_H
#define WILLRENDERCANVASES_T856939485_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Canvas/WillRenderCanvases
struct  WillRenderCanvases_t856939485  : public MulticastDelegate_t2741996530
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WILLRENDERCANVASES_T856939485_H
#ifndef TEXTGENERATOR_T365586992_H
#define TEXTGENERATOR_T365586992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextGenerator
struct  TextGenerator_t365586992  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TextGenerator::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// System.String UnityEngine.TextGenerator::m_LastString
	String_t* ___m_LastString_1;
	// UnityEngine.TextGenerationSettings UnityEngine.TextGenerator::m_LastSettings
	TextGenerationSettings_t503424141  ___m_LastSettings_2;
	// System.Boolean UnityEngine.TextGenerator::m_HasGenerated
	bool ___m_HasGenerated_3;
	// UnityEngine.TextGenerationError UnityEngine.TextGenerator::m_LastValid
	int32_t ___m_LastValid_4;
	// System.Collections.Generic.List`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::m_Verts
	List_1_t1690182171 * ___m_Verts_5;
	// System.Collections.Generic.List`1<UnityEngine.UICharInfo> UnityEngine.TextGenerator::m_Characters
	List_1_t2368264920 * ___m_Characters_6;
	// System.Collections.Generic.List`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::m_Lines
	List_1_t2908844095 * ___m_Lines_7;
	// System.Boolean UnityEngine.TextGenerator::m_CachedVerts
	bool ___m_CachedVerts_8;
	// System.Boolean UnityEngine.TextGenerator::m_CachedCharacters
	bool ___m_CachedCharacters_9;
	// System.Boolean UnityEngine.TextGenerator::m_CachedLines
	bool ___m_CachedLines_10;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TextGenerator_t365586992, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_LastString_1() { return static_cast<int32_t>(offsetof(TextGenerator_t365586992, ___m_LastString_1)); }
	inline String_t* get_m_LastString_1() const { return ___m_LastString_1; }
	inline String_t** get_address_of_m_LastString_1() { return &___m_LastString_1; }
	inline void set_m_LastString_1(String_t* value)
	{
		___m_LastString_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_LastString_1), value);
	}

	inline static int32_t get_offset_of_m_LastSettings_2() { return static_cast<int32_t>(offsetof(TextGenerator_t365586992, ___m_LastSettings_2)); }
	inline TextGenerationSettings_t503424141  get_m_LastSettings_2() const { return ___m_LastSettings_2; }
	inline TextGenerationSettings_t503424141 * get_address_of_m_LastSettings_2() { return &___m_LastSettings_2; }
	inline void set_m_LastSettings_2(TextGenerationSettings_t503424141  value)
	{
		___m_LastSettings_2 = value;
	}

	inline static int32_t get_offset_of_m_HasGenerated_3() { return static_cast<int32_t>(offsetof(TextGenerator_t365586992, ___m_HasGenerated_3)); }
	inline bool get_m_HasGenerated_3() const { return ___m_HasGenerated_3; }
	inline bool* get_address_of_m_HasGenerated_3() { return &___m_HasGenerated_3; }
	inline void set_m_HasGenerated_3(bool value)
	{
		___m_HasGenerated_3 = value;
	}

	inline static int32_t get_offset_of_m_LastValid_4() { return static_cast<int32_t>(offsetof(TextGenerator_t365586992, ___m_LastValid_4)); }
	inline int32_t get_m_LastValid_4() const { return ___m_LastValid_4; }
	inline int32_t* get_address_of_m_LastValid_4() { return &___m_LastValid_4; }
	inline void set_m_LastValid_4(int32_t value)
	{
		___m_LastValid_4 = value;
	}

	inline static int32_t get_offset_of_m_Verts_5() { return static_cast<int32_t>(offsetof(TextGenerator_t365586992, ___m_Verts_5)); }
	inline List_1_t1690182171 * get_m_Verts_5() const { return ___m_Verts_5; }
	inline List_1_t1690182171 ** get_address_of_m_Verts_5() { return &___m_Verts_5; }
	inline void set_m_Verts_5(List_1_t1690182171 * value)
	{
		___m_Verts_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Verts_5), value);
	}

	inline static int32_t get_offset_of_m_Characters_6() { return static_cast<int32_t>(offsetof(TextGenerator_t365586992, ___m_Characters_6)); }
	inline List_1_t2368264920 * get_m_Characters_6() const { return ___m_Characters_6; }
	inline List_1_t2368264920 ** get_address_of_m_Characters_6() { return &___m_Characters_6; }
	inline void set_m_Characters_6(List_1_t2368264920 * value)
	{
		___m_Characters_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Characters_6), value);
	}

	inline static int32_t get_offset_of_m_Lines_7() { return static_cast<int32_t>(offsetof(TextGenerator_t365586992, ___m_Lines_7)); }
	inline List_1_t2908844095 * get_m_Lines_7() const { return ___m_Lines_7; }
	inline List_1_t2908844095 ** get_address_of_m_Lines_7() { return &___m_Lines_7; }
	inline void set_m_Lines_7(List_1_t2908844095 * value)
	{
		___m_Lines_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Lines_7), value);
	}

	inline static int32_t get_offset_of_m_CachedVerts_8() { return static_cast<int32_t>(offsetof(TextGenerator_t365586992, ___m_CachedVerts_8)); }
	inline bool get_m_CachedVerts_8() const { return ___m_CachedVerts_8; }
	inline bool* get_address_of_m_CachedVerts_8() { return &___m_CachedVerts_8; }
	inline void set_m_CachedVerts_8(bool value)
	{
		___m_CachedVerts_8 = value;
	}

	inline static int32_t get_offset_of_m_CachedCharacters_9() { return static_cast<int32_t>(offsetof(TextGenerator_t365586992, ___m_CachedCharacters_9)); }
	inline bool get_m_CachedCharacters_9() const { return ___m_CachedCharacters_9; }
	inline bool* get_address_of_m_CachedCharacters_9() { return &___m_CachedCharacters_9; }
	inline void set_m_CachedCharacters_9(bool value)
	{
		___m_CachedCharacters_9 = value;
	}

	inline static int32_t get_offset_of_m_CachedLines_10() { return static_cast<int32_t>(offsetof(TextGenerator_t365586992, ___m_CachedLines_10)); }
	inline bool get_m_CachedLines_10() const { return ___m_CachedLines_10; }
	inline bool* get_address_of_m_CachedLines_10() { return &___m_CachedLines_10; }
	inline void set_m_CachedLines_10(bool value)
	{
		___m_CachedLines_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.TextGenerator
struct TextGenerator_t365586992_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	char* ___m_LastString_1;
	TextGenerationSettings_t503424141_marshaled_pinvoke ___m_LastSettings_2;
	int32_t ___m_HasGenerated_3;
	int32_t ___m_LastValid_4;
	List_1_t1690182171 * ___m_Verts_5;
	List_1_t2368264920 * ___m_Characters_6;
	List_1_t2908844095 * ___m_Lines_7;
	int32_t ___m_CachedVerts_8;
	int32_t ___m_CachedCharacters_9;
	int32_t ___m_CachedLines_10;
};
// Native definition for COM marshalling of UnityEngine.TextGenerator
struct TextGenerator_t365586992_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppChar* ___m_LastString_1;
	TextGenerationSettings_t503424141_marshaled_com ___m_LastSettings_2;
	int32_t ___m_HasGenerated_3;
	int32_t ___m_LastValid_4;
	List_1_t1690182171 * ___m_Verts_5;
	List_1_t2368264920 * ___m_Characters_6;
	List_1_t2908844095 * ___m_Lines_7;
	int32_t ___m_CachedVerts_8;
	int32_t ___m_CachedCharacters_9;
	int32_t ___m_CachedLines_10;
};
#endif // TEXTGENERATOR_T365586992_H
#ifndef BEHAVIOUR_T3597187219_H
#define BEHAVIOUR_T3597187219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t3597187219  : public Component_t2896191854
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T3597187219_H
#ifndef PCMREADERCALLBACK_T1635427537_H
#define PCMREADERCALLBACK_T1635427537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip/PCMReaderCallback
struct  PCMReaderCallback_t1635427537  : public MulticastDelegate_t2741996530
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PCMREADERCALLBACK_T1635427537_H
#ifndef AUDIOCONFIGURATIONCHANGEHANDLER_T4052631899_H
#define AUDIOCONFIGURATIONCHANGEHANDLER_T4052631899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct  AudioConfigurationChangeHandler_t4052631899  : public MulticastDelegate_t2741996530
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCONFIGURATIONCHANGEHANDLER_T4052631899_H
#ifndef STATEMACHINEBEHAVIOUR_T76260485_H
#define STATEMACHINEBEHAVIOUR_T76260485_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.StateMachineBehaviour
struct  StateMachineBehaviour_t76260485  : public ScriptableObject_t1187789741
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATEMACHINEBEHAVIOUR_T76260485_H
#ifndef FONTTEXTUREREBUILDCALLBACK_T1561329457_H
#define FONTTEXTUREREBUILDCALLBACK_T1561329457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Font/FontTextureRebuildCallback
struct  FontTextureRebuildCallback_t1561329457  : public MulticastDelegate_t2741996530
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONTTEXTUREREBUILDCALLBACK_T1561329457_H
#ifndef CANVASGROUP_T878294472_H
#define CANVASGROUP_T878294472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CanvasGroup
struct  CanvasGroup_t878294472  : public Component_t2896191854
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVASGROUP_T878294472_H
#ifndef CANVASRENDERER_T2861490723_H
#define CANVASRENDERER_T2861490723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CanvasRenderer
struct  CanvasRenderer_t2861490723  : public Component_t2896191854
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVASRENDERER_T2861490723_H
#ifndef GUISCROLLGROUP_T2988847976_H
#define GUISCROLLGROUP_T2988847976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIScrollGroup
struct  GUIScrollGroup_t2988847976  : public GUILayoutGroup_t3426542126
{
public:
	// System.Single UnityEngine.GUIScrollGroup::calcMinWidth
	float ___calcMinWidth_27;
	// System.Single UnityEngine.GUIScrollGroup::calcMaxWidth
	float ___calcMaxWidth_28;
	// System.Single UnityEngine.GUIScrollGroup::calcMinHeight
	float ___calcMinHeight_29;
	// System.Single UnityEngine.GUIScrollGroup::calcMaxHeight
	float ___calcMaxHeight_30;
	// System.Single UnityEngine.GUIScrollGroup::clientWidth
	float ___clientWidth_31;
	// System.Single UnityEngine.GUIScrollGroup::clientHeight
	float ___clientHeight_32;
	// System.Boolean UnityEngine.GUIScrollGroup::allowHorizontalScroll
	bool ___allowHorizontalScroll_33;
	// System.Boolean UnityEngine.GUIScrollGroup::allowVerticalScroll
	bool ___allowVerticalScroll_34;
	// System.Boolean UnityEngine.GUIScrollGroup::needsHorizontalScrollbar
	bool ___needsHorizontalScrollbar_35;
	// System.Boolean UnityEngine.GUIScrollGroup::needsVerticalScrollbar
	bool ___needsVerticalScrollbar_36;
	// UnityEngine.GUIStyle UnityEngine.GUIScrollGroup::horizontalScrollbar
	GUIStyle_t3557499391 * ___horizontalScrollbar_37;
	// UnityEngine.GUIStyle UnityEngine.GUIScrollGroup::verticalScrollbar
	GUIStyle_t3557499391 * ___verticalScrollbar_38;

public:
	inline static int32_t get_offset_of_calcMinWidth_27() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t2988847976, ___calcMinWidth_27)); }
	inline float get_calcMinWidth_27() const { return ___calcMinWidth_27; }
	inline float* get_address_of_calcMinWidth_27() { return &___calcMinWidth_27; }
	inline void set_calcMinWidth_27(float value)
	{
		___calcMinWidth_27 = value;
	}

	inline static int32_t get_offset_of_calcMaxWidth_28() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t2988847976, ___calcMaxWidth_28)); }
	inline float get_calcMaxWidth_28() const { return ___calcMaxWidth_28; }
	inline float* get_address_of_calcMaxWidth_28() { return &___calcMaxWidth_28; }
	inline void set_calcMaxWidth_28(float value)
	{
		___calcMaxWidth_28 = value;
	}

	inline static int32_t get_offset_of_calcMinHeight_29() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t2988847976, ___calcMinHeight_29)); }
	inline float get_calcMinHeight_29() const { return ___calcMinHeight_29; }
	inline float* get_address_of_calcMinHeight_29() { return &___calcMinHeight_29; }
	inline void set_calcMinHeight_29(float value)
	{
		___calcMinHeight_29 = value;
	}

	inline static int32_t get_offset_of_calcMaxHeight_30() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t2988847976, ___calcMaxHeight_30)); }
	inline float get_calcMaxHeight_30() const { return ___calcMaxHeight_30; }
	inline float* get_address_of_calcMaxHeight_30() { return &___calcMaxHeight_30; }
	inline void set_calcMaxHeight_30(float value)
	{
		___calcMaxHeight_30 = value;
	}

	inline static int32_t get_offset_of_clientWidth_31() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t2988847976, ___clientWidth_31)); }
	inline float get_clientWidth_31() const { return ___clientWidth_31; }
	inline float* get_address_of_clientWidth_31() { return &___clientWidth_31; }
	inline void set_clientWidth_31(float value)
	{
		___clientWidth_31 = value;
	}

	inline static int32_t get_offset_of_clientHeight_32() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t2988847976, ___clientHeight_32)); }
	inline float get_clientHeight_32() const { return ___clientHeight_32; }
	inline float* get_address_of_clientHeight_32() { return &___clientHeight_32; }
	inline void set_clientHeight_32(float value)
	{
		___clientHeight_32 = value;
	}

	inline static int32_t get_offset_of_allowHorizontalScroll_33() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t2988847976, ___allowHorizontalScroll_33)); }
	inline bool get_allowHorizontalScroll_33() const { return ___allowHorizontalScroll_33; }
	inline bool* get_address_of_allowHorizontalScroll_33() { return &___allowHorizontalScroll_33; }
	inline void set_allowHorizontalScroll_33(bool value)
	{
		___allowHorizontalScroll_33 = value;
	}

	inline static int32_t get_offset_of_allowVerticalScroll_34() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t2988847976, ___allowVerticalScroll_34)); }
	inline bool get_allowVerticalScroll_34() const { return ___allowVerticalScroll_34; }
	inline bool* get_address_of_allowVerticalScroll_34() { return &___allowVerticalScroll_34; }
	inline void set_allowVerticalScroll_34(bool value)
	{
		___allowVerticalScroll_34 = value;
	}

	inline static int32_t get_offset_of_needsHorizontalScrollbar_35() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t2988847976, ___needsHorizontalScrollbar_35)); }
	inline bool get_needsHorizontalScrollbar_35() const { return ___needsHorizontalScrollbar_35; }
	inline bool* get_address_of_needsHorizontalScrollbar_35() { return &___needsHorizontalScrollbar_35; }
	inline void set_needsHorizontalScrollbar_35(bool value)
	{
		___needsHorizontalScrollbar_35 = value;
	}

	inline static int32_t get_offset_of_needsVerticalScrollbar_36() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t2988847976, ___needsVerticalScrollbar_36)); }
	inline bool get_needsVerticalScrollbar_36() const { return ___needsVerticalScrollbar_36; }
	inline bool* get_address_of_needsVerticalScrollbar_36() { return &___needsVerticalScrollbar_36; }
	inline void set_needsVerticalScrollbar_36(bool value)
	{
		___needsVerticalScrollbar_36 = value;
	}

	inline static int32_t get_offset_of_horizontalScrollbar_37() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t2988847976, ___horizontalScrollbar_37)); }
	inline GUIStyle_t3557499391 * get_horizontalScrollbar_37() const { return ___horizontalScrollbar_37; }
	inline GUIStyle_t3557499391 ** get_address_of_horizontalScrollbar_37() { return &___horizontalScrollbar_37; }
	inline void set_horizontalScrollbar_37(GUIStyle_t3557499391 * value)
	{
		___horizontalScrollbar_37 = value;
		Il2CppCodeGenWriteBarrier((&___horizontalScrollbar_37), value);
	}

	inline static int32_t get_offset_of_verticalScrollbar_38() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t2988847976, ___verticalScrollbar_38)); }
	inline GUIStyle_t3557499391 * get_verticalScrollbar_38() const { return ___verticalScrollbar_38; }
	inline GUIStyle_t3557499391 ** get_address_of_verticalScrollbar_38() { return &___verticalScrollbar_38; }
	inline void set_verticalScrollbar_38(GUIStyle_t3557499391 * value)
	{
		___verticalScrollbar_38 = value;
		Il2CppCodeGenWriteBarrier((&___verticalScrollbar_38), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUISCROLLGROUP_T2988847976_H
#ifndef WINDOWFUNCTION_T2655288556_H
#define WINDOWFUNCTION_T2655288556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUI/WindowFunction
struct  WindowFunction_t2655288556  : public MulticastDelegate_t2741996530
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWFUNCTION_T2655288556_H
#ifndef GUI_T3744637891_H
#define GUI_T3744637891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUI
struct  GUI_t3744637891  : public RuntimeObject
{
public:

public:
};

struct GUI_t3744637891_StaticFields
{
public:
	// System.Single UnityEngine.GUI::s_ScrollStepSize
	float ___s_ScrollStepSize_0;
	// System.Int32 UnityEngine.GUI::s_HotTextField
	int32_t ___s_HotTextField_1;
	// System.Int32 UnityEngine.GUI::s_BoxHash
	int32_t ___s_BoxHash_2;
	// System.Int32 UnityEngine.GUI::s_RepeatButtonHash
	int32_t ___s_RepeatButtonHash_3;
	// System.Int32 UnityEngine.GUI::s_ToggleHash
	int32_t ___s_ToggleHash_4;
	// System.Int32 UnityEngine.GUI::s_ButtonGridHash
	int32_t ___s_ButtonGridHash_5;
	// System.Int32 UnityEngine.GUI::s_SliderHash
	int32_t ___s_SliderHash_6;
	// System.Int32 UnityEngine.GUI::s_BeginGroupHash
	int32_t ___s_BeginGroupHash_7;
	// System.Int32 UnityEngine.GUI::s_ScrollviewHash
	int32_t ___s_ScrollviewHash_8;
	// System.DateTime UnityEngine.GUI::<nextScrollStepTime>k__BackingField
	DateTime_t1495302782  ___U3CnextScrollStepTimeU3Ek__BackingField_9;
	// UnityEngine.GUISkin UnityEngine.GUI::s_Skin
	GUISkin_t2773911288 * ___s_Skin_10;
	// UnityEngineInternal.GenericStack UnityEngine.GUI::s_ScrollViewStates
	GenericStack_t3898559185 * ___s_ScrollViewStates_11;

public:
	inline static int32_t get_offset_of_s_ScrollStepSize_0() { return static_cast<int32_t>(offsetof(GUI_t3744637891_StaticFields, ___s_ScrollStepSize_0)); }
	inline float get_s_ScrollStepSize_0() const { return ___s_ScrollStepSize_0; }
	inline float* get_address_of_s_ScrollStepSize_0() { return &___s_ScrollStepSize_0; }
	inline void set_s_ScrollStepSize_0(float value)
	{
		___s_ScrollStepSize_0 = value;
	}

	inline static int32_t get_offset_of_s_HotTextField_1() { return static_cast<int32_t>(offsetof(GUI_t3744637891_StaticFields, ___s_HotTextField_1)); }
	inline int32_t get_s_HotTextField_1() const { return ___s_HotTextField_1; }
	inline int32_t* get_address_of_s_HotTextField_1() { return &___s_HotTextField_1; }
	inline void set_s_HotTextField_1(int32_t value)
	{
		___s_HotTextField_1 = value;
	}

	inline static int32_t get_offset_of_s_BoxHash_2() { return static_cast<int32_t>(offsetof(GUI_t3744637891_StaticFields, ___s_BoxHash_2)); }
	inline int32_t get_s_BoxHash_2() const { return ___s_BoxHash_2; }
	inline int32_t* get_address_of_s_BoxHash_2() { return &___s_BoxHash_2; }
	inline void set_s_BoxHash_2(int32_t value)
	{
		___s_BoxHash_2 = value;
	}

	inline static int32_t get_offset_of_s_RepeatButtonHash_3() { return static_cast<int32_t>(offsetof(GUI_t3744637891_StaticFields, ___s_RepeatButtonHash_3)); }
	inline int32_t get_s_RepeatButtonHash_3() const { return ___s_RepeatButtonHash_3; }
	inline int32_t* get_address_of_s_RepeatButtonHash_3() { return &___s_RepeatButtonHash_3; }
	inline void set_s_RepeatButtonHash_3(int32_t value)
	{
		___s_RepeatButtonHash_3 = value;
	}

	inline static int32_t get_offset_of_s_ToggleHash_4() { return static_cast<int32_t>(offsetof(GUI_t3744637891_StaticFields, ___s_ToggleHash_4)); }
	inline int32_t get_s_ToggleHash_4() const { return ___s_ToggleHash_4; }
	inline int32_t* get_address_of_s_ToggleHash_4() { return &___s_ToggleHash_4; }
	inline void set_s_ToggleHash_4(int32_t value)
	{
		___s_ToggleHash_4 = value;
	}

	inline static int32_t get_offset_of_s_ButtonGridHash_5() { return static_cast<int32_t>(offsetof(GUI_t3744637891_StaticFields, ___s_ButtonGridHash_5)); }
	inline int32_t get_s_ButtonGridHash_5() const { return ___s_ButtonGridHash_5; }
	inline int32_t* get_address_of_s_ButtonGridHash_5() { return &___s_ButtonGridHash_5; }
	inline void set_s_ButtonGridHash_5(int32_t value)
	{
		___s_ButtonGridHash_5 = value;
	}

	inline static int32_t get_offset_of_s_SliderHash_6() { return static_cast<int32_t>(offsetof(GUI_t3744637891_StaticFields, ___s_SliderHash_6)); }
	inline int32_t get_s_SliderHash_6() const { return ___s_SliderHash_6; }
	inline int32_t* get_address_of_s_SliderHash_6() { return &___s_SliderHash_6; }
	inline void set_s_SliderHash_6(int32_t value)
	{
		___s_SliderHash_6 = value;
	}

	inline static int32_t get_offset_of_s_BeginGroupHash_7() { return static_cast<int32_t>(offsetof(GUI_t3744637891_StaticFields, ___s_BeginGroupHash_7)); }
	inline int32_t get_s_BeginGroupHash_7() const { return ___s_BeginGroupHash_7; }
	inline int32_t* get_address_of_s_BeginGroupHash_7() { return &___s_BeginGroupHash_7; }
	inline void set_s_BeginGroupHash_7(int32_t value)
	{
		___s_BeginGroupHash_7 = value;
	}

	inline static int32_t get_offset_of_s_ScrollviewHash_8() { return static_cast<int32_t>(offsetof(GUI_t3744637891_StaticFields, ___s_ScrollviewHash_8)); }
	inline int32_t get_s_ScrollviewHash_8() const { return ___s_ScrollviewHash_8; }
	inline int32_t* get_address_of_s_ScrollviewHash_8() { return &___s_ScrollviewHash_8; }
	inline void set_s_ScrollviewHash_8(int32_t value)
	{
		___s_ScrollviewHash_8 = value;
	}

	inline static int32_t get_offset_of_U3CnextScrollStepTimeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(GUI_t3744637891_StaticFields, ___U3CnextScrollStepTimeU3Ek__BackingField_9)); }
	inline DateTime_t1495302782  get_U3CnextScrollStepTimeU3Ek__BackingField_9() const { return ___U3CnextScrollStepTimeU3Ek__BackingField_9; }
	inline DateTime_t1495302782 * get_address_of_U3CnextScrollStepTimeU3Ek__BackingField_9() { return &___U3CnextScrollStepTimeU3Ek__BackingField_9; }
	inline void set_U3CnextScrollStepTimeU3Ek__BackingField_9(DateTime_t1495302782  value)
	{
		___U3CnextScrollStepTimeU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_s_Skin_10() { return static_cast<int32_t>(offsetof(GUI_t3744637891_StaticFields, ___s_Skin_10)); }
	inline GUISkin_t2773911288 * get_s_Skin_10() const { return ___s_Skin_10; }
	inline GUISkin_t2773911288 ** get_address_of_s_Skin_10() { return &___s_Skin_10; }
	inline void set_s_Skin_10(GUISkin_t2773911288 * value)
	{
		___s_Skin_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_Skin_10), value);
	}

	inline static int32_t get_offset_of_s_ScrollViewStates_11() { return static_cast<int32_t>(offsetof(GUI_t3744637891_StaticFields, ___s_ScrollViewStates_11)); }
	inline GenericStack_t3898559185 * get_s_ScrollViewStates_11() const { return ___s_ScrollViewStates_11; }
	inline GenericStack_t3898559185 ** get_address_of_s_ScrollViewStates_11() { return &___s_ScrollViewStates_11; }
	inline void set_s_ScrollViewStates_11(GenericStack_t3898559185 * value)
	{
		___s_ScrollViewStates_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_ScrollViewStates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUI_T3744637891_H
#ifndef PCMSETPOSITIONCALLBACK_T2219038502_H
#define PCMSETPOSITIONCALLBACK_T2219038502_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip/PCMSetPositionCallback
struct  PCMSetPositionCallback_t2219038502  : public MulticastDelegate_t2741996530
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PCMSETPOSITIONCALLBACK_T2219038502_H
#ifndef ANIMATIONCLIP_T1056102805_H
#define ANIMATIONCLIP_T1056102805_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationClip
struct  AnimationClip_t1056102805  : public Motion_t1626098095
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONCLIP_T1056102805_H
#ifndef AUDIOSOURCE_T96308220_H
#define AUDIOSOURCE_T96308220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t96308220  : public Behaviour_t3597187219
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T96308220_H
#ifndef ANIMATION_T3727210792_H
#define ANIMATION_T3727210792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animation
struct  Animation_t3727210792  : public Behaviour_t3597187219
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATION_T3727210792_H
#ifndef SPRINGJOINT_T2939632921_H
#define SPRINGJOINT_T2939632921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpringJoint
struct  SpringJoint_t2939632921  : public Joint_t4178934645
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRINGJOINT_T2939632921_H
#ifndef BOXCOLLIDER_T2207829110_H
#define BOXCOLLIDER_T2207829110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BoxCollider
struct  BoxCollider_t2207829110  : public Collider_t3095653511
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOXCOLLIDER_T2207829110_H
#ifndef GUIELEMENT_T1387228998_H
#define GUIELEMENT_T1387228998_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIElement
struct  GUIElement_t1387228998  : public Behaviour_t3597187219
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIELEMENT_T1387228998_H
#ifndef ANIMATOR_T4115704266_H
#define ANIMATOR_T4115704266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_t4115704266  : public Behaviour_t3597187219
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_T4115704266_H
#ifndef MESHCOLLIDER_T3842405011_H
#define MESHCOLLIDER_T3842405011_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshCollider
struct  MeshCollider_t3842405011  : public Collider_t3095653511
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHCOLLIDER_T3842405011_H
#ifndef CAPSULECOLLIDER_T3355297462_H
#define CAPSULECOLLIDER_T3355297462_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CapsuleCollider
struct  CapsuleCollider_t3355297462  : public Collider_t3095653511
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPSULECOLLIDER_T3355297462_H
#ifndef CHARACTERCONTROLLER_T3640951870_H
#define CHARACTERCONTROLLER_T3640951870_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CharacterController
struct  CharacterController_t3640951870  : public Collider_t3095653511
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERCONTROLLER_T3640951870_H
#ifndef COLLIDER2D_T3477793500_H
#define COLLIDER2D_T3477793500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider2D
struct  Collider2D_t3477793500  : public Behaviour_t3597187219
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER2D_T3477793500_H
#ifndef CANVAS_T1569243928_H
#define CANVAS_T1569243928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Canvas
struct  Canvas_t1569243928  : public Behaviour_t3597187219
{
public:

public:
};

struct Canvas_t1569243928_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t856939485 * ___willRenderCanvases_2;

public:
	inline static int32_t get_offset_of_willRenderCanvases_2() { return static_cast<int32_t>(offsetof(Canvas_t1569243928_StaticFields, ___willRenderCanvases_2)); }
	inline WillRenderCanvases_t856939485 * get_willRenderCanvases_2() const { return ___willRenderCanvases_2; }
	inline WillRenderCanvases_t856939485 ** get_address_of_willRenderCanvases_2() { return &___willRenderCanvases_2; }
	inline void set_willRenderCanvases_2(WillRenderCanvases_t856939485 * value)
	{
		___willRenderCanvases_2 = value;
		Il2CppCodeGenWriteBarrier((&___willRenderCanvases_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVAS_T1569243928_H
#ifndef SPHERECOLLIDER_T880705747_H
#define SPHERECOLLIDER_T880705747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SphereCollider
struct  SphereCollider_t880705747  : public Collider_t3095653511
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPHERECOLLIDER_T880705747_H
#ifndef GUITEXT_T4174676755_H
#define GUITEXT_T4174676755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIText
struct  GUIText_t4174676755  : public GUIElement_t1387228998
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUITEXT_T4174676755_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1300 = { sizeof (MinMaxCurve_t1996474402)+ sizeof (RuntimeObject), sizeof(MinMaxCurve_t1996474402_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1300[6] = 
{
	MinMaxCurve_t1996474402::get_offset_of_m_Mode_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MinMaxCurve_t1996474402::get_offset_of_m_CurveMultiplier_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MinMaxCurve_t1996474402::get_offset_of_m_CurveMin_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MinMaxCurve_t1996474402::get_offset_of_m_CurveMax_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MinMaxCurve_t1996474402::get_offset_of_m_ConstantMin_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MinMaxCurve_t1996474402::get_offset_of_m_ConstantMax_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1301 = { sizeof (MainModule_t200958688)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1301[1] = 
{
	MainModule_t200958688::get_offset_of_m_ParticleSystem_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1302 = { sizeof (EmissionModule_t2369878041)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1302[1] = 
{
	EmissionModule_t2369878041::get_offset_of_m_ParticleSystem_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1303 = { sizeof (ParticleCollisionEvent_t1652970546)+ sizeof (RuntimeObject), sizeof(ParticleCollisionEvent_t1652970546 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1303[4] = 
{
	ParticleCollisionEvent_t1652970546::get_offset_of_m_Intersection_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParticleCollisionEvent_t1652970546::get_offset_of_m_Normal_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParticleCollisionEvent_t1652970546::get_offset_of_m_Velocity_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParticleCollisionEvent_t1652970546::get_offset_of_m_ColliderInstanceID_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1304 = { sizeof (ParticleSystemExtensionsImpl_t4139959981), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1305 = { sizeof (ParticlePhysicsExtensions_t2780434054), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1306 = { sizeof (ForceMode_t1805496032)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1306[5] = 
{
	ForceMode_t1805496032::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1307 = { sizeof (ControllerColliderHit_t3653634219), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1307[7] = 
{
	ControllerColliderHit_t3653634219::get_offset_of_m_Controller_0(),
	ControllerColliderHit_t3653634219::get_offset_of_m_Collider_1(),
	ControllerColliderHit_t3653634219::get_offset_of_m_Point_2(),
	ControllerColliderHit_t3653634219::get_offset_of_m_Normal_3(),
	ControllerColliderHit_t3653634219::get_offset_of_m_MoveDirection_4(),
	ControllerColliderHit_t3653634219::get_offset_of_m_MoveLength_5(),
	ControllerColliderHit_t3653634219::get_offset_of_m_Push_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1308 = { sizeof (Collision_t2342836553), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1308[5] = 
{
	Collision_t2342836553::get_offset_of_m_Impulse_0(),
	Collision_t2342836553::get_offset_of_m_RelativeVelocity_1(),
	Collision_t2342836553::get_offset_of_m_Rigidbody_2(),
	Collision_t2342836553::get_offset_of_m_Collider_3(),
	Collision_t2342836553::get_offset_of_m_Contacts_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1309 = { sizeof (QueryTriggerInteraction_t1384280248)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1309[4] = 
{
	QueryTriggerInteraction_t1384280248::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1310 = { sizeof (Physics_t3639739577), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1311 = { sizeof (ContactPoint_t3373976741)+ sizeof (RuntimeObject), sizeof(ContactPoint_t3373976741 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1311[5] = 
{
	ContactPoint_t3373976741::get_offset_of_m_Point_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint_t3373976741::get_offset_of_m_Normal_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint_t3373976741::get_offset_of_m_ThisColliderInstanceID_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint_t3373976741::get_offset_of_m_OtherColliderInstanceID_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint_t3373976741::get_offset_of_m_Separation_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1312 = { sizeof (Rigidbody_t2541962521), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1313 = { sizeof (Joint_t4178934645), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1314 = { sizeof (SpringJoint_t2939632921), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1315 = { sizeof (Collider_t3095653511), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1316 = { sizeof (BoxCollider_t2207829110), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1317 = { sizeof (SphereCollider_t880705747), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1318 = { sizeof (MeshCollider_t3842405011), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1319 = { sizeof (CapsuleCollider_t3355297462), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1320 = { sizeof (RaycastHit_t2938129192)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1320[6] = 
{
	RaycastHit_t2938129192::get_offset_of_m_Point_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit_t2938129192::get_offset_of_m_Normal_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit_t2938129192::get_offset_of_m_FaceID_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit_t2938129192::get_offset_of_m_Distance_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit_t2938129192::get_offset_of_m_UV_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit_t2938129192::get_offset_of_m_Collider_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1321 = { sizeof (PhysicMaterial_t4088787729), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1322 = { sizeof (CharacterController_t3640951870), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1323 = { sizeof (RaycastHit2D_t3720863634)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1323[6] = 
{
	RaycastHit2D_t3720863634::get_offset_of_m_Centroid_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit2D_t3720863634::get_offset_of_m_Point_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit2D_t3720863634::get_offset_of_m_Normal_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit2D_t3720863634::get_offset_of_m_Distance_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit2D_t3720863634::get_offset_of_m_Fraction_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit2D_t3720863634::get_offset_of_m_Collider_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1324 = { sizeof (Physics2D_t598791612), -1, sizeof(Physics2D_t598791612_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1324[1] = 
{
	Physics2D_t598791612_StaticFields::get_offset_of_m_LastDisabledRigidbody2D_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1325 = { sizeof (Rigidbody2D_t3697683477), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1326 = { sizeof (Collider2D_t3477793500), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1327 = { sizeof (AudioPlayableOutput_t1635370737)+ sizeof (RuntimeObject), sizeof(AudioPlayableOutput_t1635370737 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1327[1] = 
{
	AudioPlayableOutput_t1635370737::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1328 = { sizeof (AudioClipPlayable_t3713713845)+ sizeof (RuntimeObject), sizeof(AudioClipPlayable_t3713713845 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1328[1] = 
{
	AudioClipPlayable_t3713713845::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1329 = { sizeof (AudioMixerPlayable_t3559351340)+ sizeof (RuntimeObject), sizeof(AudioMixerPlayable_t3559351340 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1329[1] = 
{
	AudioMixerPlayable_t3559351340::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1330 = { sizeof (AudioSettings_t2844817120), -1, sizeof(AudioSettings_t2844817120_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1330[1] = 
{
	AudioSettings_t2844817120_StaticFields::get_offset_of_OnAudioConfigurationChanged_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1331 = { sizeof (AudioConfigurationChangeHandler_t4052631899), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1332 = { sizeof (AudioClip_t1835015024), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1332[2] = 
{
	AudioClip_t1835015024::get_offset_of_m_PCMReaderCallback_2(),
	AudioClip_t1835015024::get_offset_of_m_PCMSetPositionCallback_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1333 = { sizeof (PCMReaderCallback_t1635427537), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1334 = { sizeof (PCMSetPositionCallback_t2219038502), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1335 = { sizeof (AudioSource_t96308220), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1336 = { sizeof (AudioPlayableGraphExtensions_t4270722747), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1337 = { sizeof (SharedBetweenAnimatorsAttribute_t1362806614), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1338 = { sizeof (StateMachineBehaviour_t76260485), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1339 = { sizeof (AnimationClipPlayable_t2229931488)+ sizeof (RuntimeObject), sizeof(AnimationClipPlayable_t2229931488 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1339[1] = 
{
	AnimationClipPlayable_t2229931488::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1340 = { sizeof (AnimationLayerMixerPlayable_t880055789)+ sizeof (RuntimeObject), sizeof(AnimationLayerMixerPlayable_t880055789 ), sizeof(AnimationLayerMixerPlayable_t880055789_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1340[2] = 
{
	AnimationLayerMixerPlayable_t880055789::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimationLayerMixerPlayable_t880055789_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1341 = { sizeof (AnimationMixerPlayable_t1243116365)+ sizeof (RuntimeObject), sizeof(AnimationMixerPlayable_t1243116365 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1341[1] = 
{
	AnimationMixerPlayable_t1243116365::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1342 = { sizeof (AnimationOffsetPlayable_t4088677016)+ sizeof (RuntimeObject), sizeof(AnimationOffsetPlayable_t4088677016 ), sizeof(AnimationOffsetPlayable_t4088677016_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1342[2] = 
{
	AnimationOffsetPlayable_t4088677016::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimationOffsetPlayable_t4088677016_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1343 = { sizeof (AnimationPlayableOutput_t2794604597)+ sizeof (RuntimeObject), sizeof(AnimationPlayableOutput_t2794604597 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1343[1] = 
{
	AnimationPlayableOutput_t2794604597::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1344 = { sizeof (AnimatorControllerPlayable_t130308945)+ sizeof (RuntimeObject), sizeof(AnimatorControllerPlayable_t130308945 ), sizeof(AnimatorControllerPlayable_t130308945_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1344[2] = 
{
	AnimatorControllerPlayable_t130308945::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorControllerPlayable_t130308945_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1345 = { sizeof (AnimationPlayableGraphExtensions_t361422842), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1346 = { sizeof (AnimationEventSource_t4161867386)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1346[4] = 
{
	AnimationEventSource_t4161867386::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1347 = { sizeof (AnimationEvent_t1386832287), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1347[11] = 
{
	AnimationEvent_t1386832287::get_offset_of_m_Time_0(),
	AnimationEvent_t1386832287::get_offset_of_m_FunctionName_1(),
	AnimationEvent_t1386832287::get_offset_of_m_StringParameter_2(),
	AnimationEvent_t1386832287::get_offset_of_m_ObjectReferenceParameter_3(),
	AnimationEvent_t1386832287::get_offset_of_m_FloatParameter_4(),
	AnimationEvent_t1386832287::get_offset_of_m_IntParameter_5(),
	AnimationEvent_t1386832287::get_offset_of_m_MessageOptions_6(),
	AnimationEvent_t1386832287::get_offset_of_m_Source_7(),
	AnimationEvent_t1386832287::get_offset_of_m_StateSender_8(),
	AnimationEvent_t1386832287::get_offset_of_m_AnimatorStateInfo_9(),
	AnimationEvent_t1386832287::get_offset_of_m_AnimatorClipInfo_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1348 = { sizeof (AnimationClip_t1056102805), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1349 = { sizeof (PlayMode_t3718842613)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1349[3] = 
{
	PlayMode_t3718842613::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1350 = { sizeof (Animation_t3727210792), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1351 = { sizeof (Enumerator_t831346815), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1351[2] = 
{
	Enumerator_t831346815::get_offset_of_m_Outer_0(),
	Enumerator_t831346815::get_offset_of_m_CurrentIndex_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1352 = { sizeof (AnimationState_t1590093807), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1353 = { sizeof (AnimatorControllerParameterType_t3261443667)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1353[5] = 
{
	AnimatorControllerParameterType_t3261443667::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1354 = { sizeof (AnimatorClipInfo_t1178155208)+ sizeof (RuntimeObject), sizeof(AnimatorClipInfo_t1178155208 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1354[2] = 
{
	AnimatorClipInfo_t1178155208::get_offset_of_m_ClipInstanceID_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorClipInfo_t1178155208::get_offset_of_m_Weight_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1355 = { sizeof (AnimatorStateInfo_t1112099833)+ sizeof (RuntimeObject), sizeof(AnimatorStateInfo_t1112099833 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1355[9] = 
{
	AnimatorStateInfo_t1112099833::get_offset_of_m_Name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t1112099833::get_offset_of_m_Path_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t1112099833::get_offset_of_m_FullPath_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t1112099833::get_offset_of_m_NormalizedTime_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t1112099833::get_offset_of_m_Length_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t1112099833::get_offset_of_m_Speed_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t1112099833::get_offset_of_m_SpeedMultiplier_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t1112099833::get_offset_of_m_Tag_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t1112099833::get_offset_of_m_Loop_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1356 = { sizeof (AnimatorTransitionInfo_t1661546339)+ sizeof (RuntimeObject), sizeof(AnimatorTransitionInfo_t1661546339_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1356[6] = 
{
	AnimatorTransitionInfo_t1661546339::get_offset_of_m_FullPath_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorTransitionInfo_t1661546339::get_offset_of_m_UserName_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorTransitionInfo_t1661546339::get_offset_of_m_Name_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorTransitionInfo_t1661546339::get_offset_of_m_NormalizedTime_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorTransitionInfo_t1661546339::get_offset_of_m_AnyState_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorTransitionInfo_t1661546339::get_offset_of_m_TransitionType_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1357 = { sizeof (Animator_t4115704266), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1358 = { sizeof (AnimatorControllerParameter_t538510573), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1358[5] = 
{
	AnimatorControllerParameter_t538510573::get_offset_of_m_Name_0(),
	AnimatorControllerParameter_t538510573::get_offset_of_m_Type_1(),
	AnimatorControllerParameter_t538510573::get_offset_of_m_DefaultFloat_2(),
	AnimatorControllerParameter_t538510573::get_offset_of_m_DefaultInt_3(),
	AnimatorControllerParameter_t538510573::get_offset_of_m_DefaultBool_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1359 = { sizeof (SkeletonBone_t2899358385)+ sizeof (RuntimeObject), sizeof(SkeletonBone_t2899358385_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1359[5] = 
{
	SkeletonBone_t2899358385::get_offset_of_name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SkeletonBone_t2899358385::get_offset_of_parentName_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SkeletonBone_t2899358385::get_offset_of_position_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SkeletonBone_t2899358385::get_offset_of_rotation_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SkeletonBone_t2899358385::get_offset_of_scale_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1360 = { sizeof (HumanLimit_t4263421870)+ sizeof (RuntimeObject), sizeof(HumanLimit_t4263421870 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1360[5] = 
{
	HumanLimit_t4263421870::get_offset_of_m_Min_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanLimit_t4263421870::get_offset_of_m_Max_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanLimit_t4263421870::get_offset_of_m_Center_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanLimit_t4263421870::get_offset_of_m_AxisLength_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanLimit_t4263421870::get_offset_of_m_UseDefaultValues_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1361 = { sizeof (HumanBone_t1661871427)+ sizeof (RuntimeObject), sizeof(HumanBone_t1661871427_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1361[3] = 
{
	HumanBone_t1661871427::get_offset_of_m_BoneName_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanBone_t1661871427::get_offset_of_m_HumanName_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanBone_t1661871427::get_offset_of_limit_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1362 = { sizeof (AvatarMask_t1996829447), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1363 = { sizeof (Motion_t1626098095), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1364 = { sizeof (RuntimeAnimatorController_t3324330239), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1365 = { sizeof (FontStyle_t3810402848)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1365[5] = 
{
	FontStyle_t3810402848::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1366 = { sizeof (TextGenerationError_t3035884644)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1366[5] = 
{
	TextGenerationError_t3035884644::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1367 = { sizeof (TextGenerationSettings_t503424141)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1367[18] = 
{
	TextGenerationSettings_t503424141::get_offset_of_font_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t503424141::get_offset_of_color_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t503424141::get_offset_of_fontSize_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t503424141::get_offset_of_lineSpacing_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t503424141::get_offset_of_richText_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t503424141::get_offset_of_scaleFactor_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t503424141::get_offset_of_fontStyle_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t503424141::get_offset_of_textAnchor_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t503424141::get_offset_of_alignByGeometry_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t503424141::get_offset_of_resizeTextForBestFit_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t503424141::get_offset_of_resizeTextMinSize_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t503424141::get_offset_of_resizeTextMaxSize_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t503424141::get_offset_of_updateBounds_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t503424141::get_offset_of_verticalOverflow_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t503424141::get_offset_of_horizontalOverflow_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t503424141::get_offset_of_generationExtents_15() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t503424141::get_offset_of_pivot_16() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t503424141::get_offset_of_generateOutOfBounds_17() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1368 = { sizeof (TextGenerator_t365586992), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1368[11] = 
{
	TextGenerator_t365586992::get_offset_of_m_Ptr_0(),
	TextGenerator_t365586992::get_offset_of_m_LastString_1(),
	TextGenerator_t365586992::get_offset_of_m_LastSettings_2(),
	TextGenerator_t365586992::get_offset_of_m_HasGenerated_3(),
	TextGenerator_t365586992::get_offset_of_m_LastValid_4(),
	TextGenerator_t365586992::get_offset_of_m_Verts_5(),
	TextGenerator_t365586992::get_offset_of_m_Characters_6(),
	TextGenerator_t365586992::get_offset_of_m_Lines_7(),
	TextGenerator_t365586992::get_offset_of_m_CachedVerts_8(),
	TextGenerator_t365586992::get_offset_of_m_CachedCharacters_9(),
	TextGenerator_t365586992::get_offset_of_m_CachedLines_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1369 = { sizeof (TextAnchor_t4285376818)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1369[10] = 
{
	TextAnchor_t4285376818::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1370 = { sizeof (HorizontalWrapMode_t2682339649)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1370[3] = 
{
	HorizontalWrapMode_t2682339649::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1371 = { sizeof (VerticalWrapMode_t775330695)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1371[3] = 
{
	VerticalWrapMode_t775330695::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1372 = { sizeof (GUIText_t4174676755), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1373 = { sizeof (Font_t4231826360), -1, sizeof(Font_t4231826360_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1373[2] = 
{
	Font_t4231826360_StaticFields::get_offset_of_textureRebuilt_2(),
	Font_t4231826360::get_offset_of_m_FontTextureRebuildCallback_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1374 = { sizeof (FontTextureRebuildCallback_t1561329457), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1375 = { sizeof (UICharInfo_t2085013098)+ sizeof (RuntimeObject), sizeof(UICharInfo_t2085013098 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1375[2] = 
{
	UICharInfo_t2085013098::get_offset_of_cursorPos_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UICharInfo_t2085013098::get_offset_of_charWidth_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1376 = { sizeof (UILineInfo_t2625592273)+ sizeof (RuntimeObject), sizeof(UILineInfo_t2625592273 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1376[4] = 
{
	UILineInfo_t2625592273::get_offset_of_startCharIdx_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UILineInfo_t2625592273::get_offset_of_height_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UILineInfo_t2625592273::get_offset_of_topY_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UILineInfo_t2625592273::get_offset_of_leading_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1377 = { sizeof (UIVertex_t1406930349)+ sizeof (RuntimeObject), sizeof(UIVertex_t1406930349 ), sizeof(UIVertex_t1406930349_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1377[11] = 
{
	UIVertex_t1406930349::get_offset_of_position_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UIVertex_t1406930349::get_offset_of_normal_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UIVertex_t1406930349::get_offset_of_color_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UIVertex_t1406930349::get_offset_of_uv0_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UIVertex_t1406930349::get_offset_of_uv1_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UIVertex_t1406930349::get_offset_of_uv2_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UIVertex_t1406930349::get_offset_of_uv3_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UIVertex_t1406930349::get_offset_of_tangent_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UIVertex_t1406930349_StaticFields::get_offset_of_s_DefaultColor_8(),
	UIVertex_t1406930349_StaticFields::get_offset_of_s_DefaultTangent_9(),
	UIVertex_t1406930349_StaticFields::get_offset_of_simpleVert_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1378 = { sizeof (RectTransformUtility_t3631876704), -1, sizeof(RectTransformUtility_t3631876704_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1378[1] = 
{
	RectTransformUtility_t3631876704_StaticFields::get_offset_of_s_Corners_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1379 = { sizeof (RenderMode_t2876490825)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1379[4] = 
{
	RenderMode_t2876490825::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1380 = { sizeof (Canvas_t1569243928), -1, sizeof(Canvas_t1569243928_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1380[1] = 
{
	Canvas_t1569243928_StaticFields::get_offset_of_willRenderCanvases_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1381 = { sizeof (WillRenderCanvases_t856939485), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1382 = { sizeof (UISystemProfilerApi_t3930254999), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1383 = { sizeof (SampleType_t2947919268)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1383[3] = 
{
	SampleType_t2947919268::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1384 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1385 = { sizeof (CanvasGroup_t878294472), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1386 = { sizeof (CanvasRenderer_t2861490723), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1387 = { sizeof (Event_t3559766914), sizeof(Event_t3559766914_marshaled_pinvoke), sizeof(Event_t3559766914_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1387[4] = 
{
	Event_t3559766914::get_offset_of_m_Ptr_0(),
	Event_t3559766914_StaticFields::get_offset_of_s_Current_1(),
	Event_t3559766914_StaticFields::get_offset_of_s_MasterEvent_2(),
	Event_t3559766914_StaticFields::get_offset_of_U3CU3Ef__switchU24map0_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1388 = { sizeof (EventType_t2070299817)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1388[33] = 
{
	EventType_t2070299817::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1389 = { sizeof (EventModifiers_t3146810486)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1389[9] = 
{
	EventModifiers_t3146810486::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1390 = { sizeof (GUI_t3744637891), -1, sizeof(GUI_t3744637891_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1390[12] = 
{
	GUI_t3744637891_StaticFields::get_offset_of_s_ScrollStepSize_0(),
	GUI_t3744637891_StaticFields::get_offset_of_s_HotTextField_1(),
	GUI_t3744637891_StaticFields::get_offset_of_s_BoxHash_2(),
	GUI_t3744637891_StaticFields::get_offset_of_s_RepeatButtonHash_3(),
	GUI_t3744637891_StaticFields::get_offset_of_s_ToggleHash_4(),
	GUI_t3744637891_StaticFields::get_offset_of_s_ButtonGridHash_5(),
	GUI_t3744637891_StaticFields::get_offset_of_s_SliderHash_6(),
	GUI_t3744637891_StaticFields::get_offset_of_s_BeginGroupHash_7(),
	GUI_t3744637891_StaticFields::get_offset_of_s_ScrollviewHash_8(),
	GUI_t3744637891_StaticFields::get_offset_of_U3CnextScrollStepTimeU3Ek__BackingField_9(),
	GUI_t3744637891_StaticFields::get_offset_of_s_Skin_10(),
	GUI_t3744637891_StaticFields::get_offset_of_s_ScrollViewStates_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1391 = { sizeof (WindowFunction_t2655288556), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1392 = { sizeof (GUIContent_t2028340156), -1, sizeof(GUIContent_t2028340156_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1392[7] = 
{
	GUIContent_t2028340156::get_offset_of_m_Text_0(),
	GUIContent_t2028340156::get_offset_of_m_Image_1(),
	GUIContent_t2028340156::get_offset_of_m_Tooltip_2(),
	GUIContent_t2028340156_StaticFields::get_offset_of_s_Text_3(),
	GUIContent_t2028340156_StaticFields::get_offset_of_s_Image_4(),
	GUIContent_t2028340156_StaticFields::get_offset_of_s_TextImage_5(),
	GUIContent_t2028340156_StaticFields::get_offset_of_none_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1393 = { sizeof (ScaleMode_t2930800240)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1393[4] = 
{
	ScaleMode_t2930800240::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1394 = { sizeof (GUILayout_t1609930989), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1395 = { sizeof (GUILayoutOption_t2245866998), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1395[2] = 
{
	GUILayoutOption_t2245866998::get_offset_of_type_0(),
	GUILayoutOption_t2245866998::get_offset_of_value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1396 = { sizeof (Type_t785534729)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1396[15] = 
{
	Type_t785534729::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1397 = { sizeof (GUILayoutGroup_t3426542126), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1397[17] = 
{
	GUILayoutGroup_t3426542126::get_offset_of_entries_10(),
	GUILayoutGroup_t3426542126::get_offset_of_isVertical_11(),
	GUILayoutGroup_t3426542126::get_offset_of_resetCoords_12(),
	GUILayoutGroup_t3426542126::get_offset_of_spacing_13(),
	GUILayoutGroup_t3426542126::get_offset_of_sameSize_14(),
	GUILayoutGroup_t3426542126::get_offset_of_isWindow_15(),
	GUILayoutGroup_t3426542126::get_offset_of_windowID_16(),
	GUILayoutGroup_t3426542126::get_offset_of_m_Cursor_17(),
	GUILayoutGroup_t3426542126::get_offset_of_m_StretchableCountX_18(),
	GUILayoutGroup_t3426542126::get_offset_of_m_StretchableCountY_19(),
	GUILayoutGroup_t3426542126::get_offset_of_m_UserSpecifiedWidth_20(),
	GUILayoutGroup_t3426542126::get_offset_of_m_UserSpecifiedHeight_21(),
	GUILayoutGroup_t3426542126::get_offset_of_m_ChildMinWidth_22(),
	GUILayoutGroup_t3426542126::get_offset_of_m_ChildMaxWidth_23(),
	GUILayoutGroup_t3426542126::get_offset_of_m_ChildMinHeight_24(),
	GUILayoutGroup_t3426542126::get_offset_of_m_ChildMaxHeight_25(),
	GUILayoutGroup_t3426542126::get_offset_of_m_Margin_26(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1398 = { sizeof (GUIScrollGroup_t2988847976), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1398[12] = 
{
	GUIScrollGroup_t2988847976::get_offset_of_calcMinWidth_27(),
	GUIScrollGroup_t2988847976::get_offset_of_calcMaxWidth_28(),
	GUIScrollGroup_t2988847976::get_offset_of_calcMinHeight_29(),
	GUIScrollGroup_t2988847976::get_offset_of_calcMaxHeight_30(),
	GUIScrollGroup_t2988847976::get_offset_of_clientWidth_31(),
	GUIScrollGroup_t2988847976::get_offset_of_clientHeight_32(),
	GUIScrollGroup_t2988847976::get_offset_of_allowHorizontalScroll_33(),
	GUIScrollGroup_t2988847976::get_offset_of_allowVerticalScroll_34(),
	GUIScrollGroup_t2988847976::get_offset_of_needsHorizontalScrollbar_35(),
	GUIScrollGroup_t2988847976::get_offset_of_needsVerticalScrollbar_36(),
	GUIScrollGroup_t2988847976::get_offset_of_horizontalScrollbar_37(),
	GUIScrollGroup_t2988847976::get_offset_of_verticalScrollbar_38(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1399 = { sizeof (GUILayoutEntry_t2924348748), -1, sizeof(GUILayoutEntry_t2924348748_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1399[10] = 
{
	GUILayoutEntry_t2924348748::get_offset_of_minWidth_0(),
	GUILayoutEntry_t2924348748::get_offset_of_maxWidth_1(),
	GUILayoutEntry_t2924348748::get_offset_of_minHeight_2(),
	GUILayoutEntry_t2924348748::get_offset_of_maxHeight_3(),
	GUILayoutEntry_t2924348748::get_offset_of_rect_4(),
	GUILayoutEntry_t2924348748::get_offset_of_stretchWidth_5(),
	GUILayoutEntry_t2924348748::get_offset_of_stretchHeight_6(),
	GUILayoutEntry_t2924348748::get_offset_of_m_Style_7(),
	GUILayoutEntry_t2924348748_StaticFields::get_offset_of_kDummyRect_8(),
	GUILayoutEntry_t2924348748_StaticFields::get_offset_of_indent_9(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

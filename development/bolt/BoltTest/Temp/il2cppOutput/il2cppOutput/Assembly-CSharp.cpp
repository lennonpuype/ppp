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

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// Bolt.Entity
struct Entity_tD99F1382B075468B151E2A0879BC429EE0726AF7;
// Bolt.EntityBehaviour`1<ICustomCubeState>
struct EntityBehaviour_1_tD60A27D2AA0274BDD22D8F1909039840DB6B74FD;
// Bolt.EntityBehaviour`1<System.Object>
struct EntityBehaviour_1_tCD7E11ADC1EEF8B4FBAF10EA974423ABB6041FD7;
// Bolt.GlobalEventListener
struct GlobalEventListener_t62135280FDEEA868D26E3A5E46D97293FA6C0596;
// Bolt.IProtocolToken
struct IProtocolToken_t04428ED0869C0F3A745224278E84700C35E7B0AF;
// BoltDoubleList`1<BoltInternal.GlobalEventListenerBase>
struct BoltDoubleList_1_t0351EA50E16A3F348AF8F7530B9F95C7E418FB02;
// BoltEntity
struct BoltEntity_tFF7D05C38F9FBCE293140FBBBCB4AAA52344B54B;
// ICustomCubeState
struct ICustomCubeState_tF87B94E58E2B0D1E0D724B7FAF77BEAEE3320419;
// Menu
struct Menu_t7D066A010AF240D53C2DDA2B05DF31FD0B5F3129;
// NetworkCallbacks
struct NetworkCallbacks_t66FA20DC4C8A5F944885D36EC4D4B95002D25C2D;
// PlayerMovement
struct PlayerMovement_t433CEDF390E132D7701A276CCC30080251C6BC2C;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>>
struct IEnumerator_1_t4F3D12595034C2722B03ED6F14E12E99C3379D0D;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Guid,UdpKit.UdpSession>>
struct IEnumerator_1_t64D78220EB1314A39FE7E5465993F4619C438F46;
// System.Func`3<BoltEntity,UnityEngine.Vector3,UnityEngine.Vector3>
struct Func_3_t94F4CA513037EC28C823D72261E7586985590D9B;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UdpKit.Map`2<System.Guid,System.Object>
struct Map_2_tE6EEB70F8CC1A2D971A982D0FEBE6432BA71AF46;
// UdpKit.Map`2<System.Guid,UdpKit.UdpSession>
struct Map_2_tE294C2C23F5C932C740D45AB0180CEABFD153435;
// UdpKit.UdpSession
struct UdpSession_t777CCFD5CE7E297E0EEEB0E40ED5F32A262BFDF1;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;

IL2CPP_EXTERN_C RuntimeClass* BoltNetwork_t7538D999B862C8CEBA09D321DE325B8D67AF395A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoltPrefabs_t334790A4A600F11E40EDA507B1DE980F5A391548_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICustomCubeState_tF87B94E58E2B0D1E0D724B7FAF77BEAEE3320419_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t64D78220EB1314A39FE7E5465993F4619C438F46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IState_t74008E21A66087ABA646D1EADC5FF75EC83DE9BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral64E4D0D076199500929E028DD91CBC1B48A732ED;
IL2CPP_EXTERN_C String_t* _stringLiteral84073C09D8BA9E6130CFA5C044DA373C81D57850;
IL2CPP_EXTERN_C const RuntimeMethod* EntityBehaviour_1__ctor_mFEA07E450F79A057B71B53A747AC404D6AA6F441_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EntityBehaviour_1_get_state_mBAE0AD649AE65FA3202ED8C0154B74110A43F2C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m60A07815951C065713DA5D2D4EC57EC67473E4BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Map_2_GetEnumerator_m507C93137AC2428C813B872B559FB6B3723E730B_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t Menu_BoltStartDone_mD749FA38ABDE648B03727DA714C48B90B18CF93A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Menu_SessionListUpdated_mE726201D31A569841E363B08CDABDAB157C6A474_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkCallbacks_SceneLoadLocalDone_m988A26C11218DFD9CD5A26F1F8D5091208F901F8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerMovement_Attached_m0B9FBF64CC1A7BB275D15FCE6F06DEC25FB1E6E9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerMovement_SimulateOwner_mE01350D285EEDC52C68B06C3060EFE7856791717_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerMovement__ctor_m8A0EF934ADA5029471AE677A0EB5A99E87442762_MetadataUsageId;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UdpKit.UdpSession
struct  UdpSession_t777CCFD5CE7E297E0EEEB0E40ED5F32A262BFDF1  : public RuntimeObject
{
public:

public:
};


// Bolt.PrefabId
struct  PrefabId_t3BCAF8C511C49A85AA95B3DE3FFC8C81C6165250 
{
public:
	// System.Int32 Bolt.PrefabId::Value
	int32_t ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(PrefabId_t3BCAF8C511C49A85AA95B3DE3FFC8C81C6165250, ___Value_0)); }
	inline int32_t get_Value_0() const { return ___Value_0; }
	inline int32_t* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(int32_t value)
	{
		___Value_0 = value;
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


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
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// Bolt.DoubleBuffer`1<UnityEngine.Quaternion>
struct  DoubleBuffer_1_t58A23175D015541EFB9AFF20CC7C25D12886EC3B 
{
public:
	// T Bolt.DoubleBuffer`1::Previous
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___Previous_0;
	// T Bolt.DoubleBuffer`1::Current
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___Current_1;

public:
	inline static int32_t get_offset_of_Previous_0() { return static_cast<int32_t>(offsetof(DoubleBuffer_1_t58A23175D015541EFB9AFF20CC7C25D12886EC3B, ___Previous_0)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_Previous_0() const { return ___Previous_0; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_Previous_0() { return &___Previous_0; }
	inline void set_Previous_0(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___Previous_0 = value;
	}

	inline static int32_t get_offset_of_Current_1() { return static_cast<int32_t>(offsetof(DoubleBuffer_1_t58A23175D015541EFB9AFF20CC7C25D12886EC3B, ___Current_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_Current_1() const { return ___Current_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_Current_1() { return &___Current_1; }
	inline void set_Current_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___Current_1 = value;
	}
};


// Bolt.DoubleBuffer`1<UnityEngine.Vector3>
struct  DoubleBuffer_1_t60DD22BD0CE9C807214EB5A01604D312511E4937 
{
public:
	// T Bolt.DoubleBuffer`1::Previous
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Previous_0;
	// T Bolt.DoubleBuffer`1::Current
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Current_1;

public:
	inline static int32_t get_offset_of_Previous_0() { return static_cast<int32_t>(offsetof(DoubleBuffer_1_t60DD22BD0CE9C807214EB5A01604D312511E4937, ___Previous_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_Previous_0() const { return ___Previous_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_Previous_0() { return &___Previous_0; }
	inline void set_Previous_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___Previous_0 = value;
	}

	inline static int32_t get_offset_of_Current_1() { return static_cast<int32_t>(offsetof(DoubleBuffer_1_t60DD22BD0CE9C807214EB5A01604D312511E4937, ___Current_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_Current_1() const { return ___Current_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_Current_1() { return &___Current_1; }
	inline void set_Current_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___Current_1 = value;
	}
};


// Bolt.QueryComponentOptions
struct  QueryComponentOptions_tA61ACF42B65DD908DB5B495B06210EA345DCEC3A 
{
public:
	// System.Int32 Bolt.QueryComponentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QueryComponentOptions_tA61ACF42B65DD908DB5B495B06210EA345DCEC3A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Bolt.TransformSpaces
struct  TransformSpaces_t348E71BDA1AA08547366B40F9F7E0E2C541FBD5B 
{
public:
	// System.Int32 Bolt.TransformSpaces::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TransformSpaces_t348E71BDA1AA08547366B40F9F7E0E2C541FBD5B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// BoltPrefabs
struct  BoltPrefabs_t334790A4A600F11E40EDA507B1DE980F5A391548  : public RuntimeObject
{
public:

public:
};

struct BoltPrefabs_t334790A4A600F11E40EDA507B1DE980F5A391548_StaticFields
{
public:
	// Bolt.PrefabId BoltPrefabs::Cube
	PrefabId_t3BCAF8C511C49A85AA95B3DE3FFC8C81C6165250  ___Cube_0;

public:
	inline static int32_t get_offset_of_Cube_0() { return static_cast<int32_t>(offsetof(BoltPrefabs_t334790A4A600F11E40EDA507B1DE980F5A391548_StaticFields, ___Cube_0)); }
	inline PrefabId_t3BCAF8C511C49A85AA95B3DE3FFC8C81C6165250  get_Cube_0() const { return ___Cube_0; }
	inline PrefabId_t3BCAF8C511C49A85AA95B3DE3FFC8C81C6165250 * get_address_of_Cube_0() { return &___Cube_0; }
	inline void set_Cube_0(PrefabId_t3BCAF8C511C49A85AA95B3DE3FFC8C81C6165250  value)
	{
		___Cube_0 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>
struct  KeyValuePair_2_tE4A947A316359604BD867E16B3A0180DB79748A4 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE4A947A316359604BD867E16B3A0180DB79748A4, ___key_0)); }
	inline Guid_t  get_key_0() const { return ___key_0; }
	inline Guid_t * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Guid_t  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE4A947A316359604BD867E16B3A0180DB79748A4, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Guid,UdpKit.UdpSession>
struct  KeyValuePair_2_t8C2F5B0D56B6BE3775F1939BAAC3AA6387BA26AE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	UdpSession_t777CCFD5CE7E297E0EEEB0E40ED5F32A262BFDF1 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t8C2F5B0D56B6BE3775F1939BAAC3AA6387BA26AE, ___key_0)); }
	inline Guid_t  get_key_0() const { return ___key_0; }
	inline Guid_t * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Guid_t  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t8C2F5B0D56B6BE3775F1939BAAC3AA6387BA26AE, ___value_1)); }
	inline UdpSession_t777CCFD5CE7E297E0EEEB0E40ED5F32A262BFDF1 * get_value_1() const { return ___value_1; }
	inline UdpSession_t777CCFD5CE7E297E0EEEB0E40ED5F32A262BFDF1 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(UdpSession_t777CCFD5CE7E297E0EEEB0E40ED5F32A262BFDF1 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// UdpKit.Map`2<System.Guid,UdpKit.UdpSession>
struct  Map_2_tE294C2C23F5C932C740D45AB0180CEABFD153435  : public RuntimeObject
{
public:
	// K UdpKit.Map`2::_key
	Guid_t  ____key_1;
	// V UdpKit.Map`2::_value
	UdpSession_t777CCFD5CE7E297E0EEEB0E40ED5F32A262BFDF1 * ____value_2;
	// System.Int32 UdpKit.Map`2::_count
	int32_t ____count_3;
	// System.Int32 UdpKit.Map`2::_height
	int32_t ____height_4;
	// UdpKit.Map`2<K,V> UdpKit.Map`2::_left
	Map_2_tE294C2C23F5C932C740D45AB0180CEABFD153435 * ____left_5;
	// UdpKit.Map`2<K,V> UdpKit.Map`2::_right
	Map_2_tE294C2C23F5C932C740D45AB0180CEABFD153435 * ____right_6;

public:
	inline static int32_t get_offset_of__key_1() { return static_cast<int32_t>(offsetof(Map_2_tE294C2C23F5C932C740D45AB0180CEABFD153435, ____key_1)); }
	inline Guid_t  get__key_1() const { return ____key_1; }
	inline Guid_t * get_address_of__key_1() { return &____key_1; }
	inline void set__key_1(Guid_t  value)
	{
		____key_1 = value;
	}

	inline static int32_t get_offset_of__value_2() { return static_cast<int32_t>(offsetof(Map_2_tE294C2C23F5C932C740D45AB0180CEABFD153435, ____value_2)); }
	inline UdpSession_t777CCFD5CE7E297E0EEEB0E40ED5F32A262BFDF1 * get__value_2() const { return ____value_2; }
	inline UdpSession_t777CCFD5CE7E297E0EEEB0E40ED5F32A262BFDF1 ** get_address_of__value_2() { return &____value_2; }
	inline void set__value_2(UdpSession_t777CCFD5CE7E297E0EEEB0E40ED5F32A262BFDF1 * value)
	{
		____value_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_2), (void*)value);
	}

	inline static int32_t get_offset_of__count_3() { return static_cast<int32_t>(offsetof(Map_2_tE294C2C23F5C932C740D45AB0180CEABFD153435, ____count_3)); }
	inline int32_t get__count_3() const { return ____count_3; }
	inline int32_t* get_address_of__count_3() { return &____count_3; }
	inline void set__count_3(int32_t value)
	{
		____count_3 = value;
	}

	inline static int32_t get_offset_of__height_4() { return static_cast<int32_t>(offsetof(Map_2_tE294C2C23F5C932C740D45AB0180CEABFD153435, ____height_4)); }
	inline int32_t get__height_4() const { return ____height_4; }
	inline int32_t* get_address_of__height_4() { return &____height_4; }
	inline void set__height_4(int32_t value)
	{
		____height_4 = value;
	}

	inline static int32_t get_offset_of__left_5() { return static_cast<int32_t>(offsetof(Map_2_tE294C2C23F5C932C740D45AB0180CEABFD153435, ____left_5)); }
	inline Map_2_tE294C2C23F5C932C740D45AB0180CEABFD153435 * get__left_5() const { return ____left_5; }
	inline Map_2_tE294C2C23F5C932C740D45AB0180CEABFD153435 ** get_address_of__left_5() { return &____left_5; }
	inline void set__left_5(Map_2_tE294C2C23F5C932C740D45AB0180CEABFD153435 * value)
	{
		____left_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____left_5), (void*)value);
	}

	inline static int32_t get_offset_of__right_6() { return static_cast<int32_t>(offsetof(Map_2_tE294C2C23F5C932C740D45AB0180CEABFD153435, ____right_6)); }
	inline Map_2_tE294C2C23F5C932C740D45AB0180CEABFD153435 * get__right_6() const { return ____right_6; }
	inline Map_2_tE294C2C23F5C932C740D45AB0180CEABFD153435 ** get_address_of__right_6() { return &____right_6; }
	inline void set__right_6(Map_2_tE294C2C23F5C932C740D45AB0180CEABFD153435 * value)
	{
		____right_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____right_6), (void*)value);
	}
};

struct Map_2_tE294C2C23F5C932C740D45AB0180CEABFD153435_StaticFields
{
public:
	// UdpKit.Map`2<K,V> UdpKit.Map`2::_empty
	Map_2_tE294C2C23F5C932C740D45AB0180CEABFD153435 * ____empty_0;

public:
	inline static int32_t get_offset_of__empty_0() { return static_cast<int32_t>(offsetof(Map_2_tE294C2C23F5C932C740D45AB0180CEABFD153435_StaticFields, ____empty_0)); }
	inline Map_2_tE294C2C23F5C932C740D45AB0180CEABFD153435 * get__empty_0() const { return ____empty_0; }
	inline Map_2_tE294C2C23F5C932C740D45AB0180CEABFD153435 ** get_address_of__empty_0() { return &____empty_0; }
	inline void set__empty_0(Map_2_tE294C2C23F5C932C740D45AB0180CEABFD153435 * value)
	{
		____empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____empty_0), (void*)value);
	}
};


// UdpKit.UdpSessionSource
struct  UdpSessionSource_t003EEBCD2FD72AACCD06E4ED563E2A97AC272890 
{
public:
	// System.Int32 UdpKit.UdpSessionSource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UdpSessionSource_t003EEBCD2FD72AACCD06E4ED563E2A97AC272890, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct  KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Bolt.NetworkTransform
struct  NetworkTransform_t8D6EA69357F63086B4880044DE1CA8C8C19F68B0  : public RuntimeObject
{
public:
	// System.Int32 Bolt.NetworkTransform::PropertyIndex
	int32_t ___PropertyIndex_0;
	// UnityEngine.Transform Bolt.NetworkTransform::Render
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___Render_1;
	// UnityEngine.Transform Bolt.NetworkTransform::Simulate
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___Simulate_2;
	// System.Boolean Bolt.NetworkTransform::SkipInterpolation
	bool ___SkipInterpolation_3;
	// System.Func`3<BoltEntity,UnityEngine.Vector3,UnityEngine.Vector3> Bolt.NetworkTransform::Clamper
	Func_3_t94F4CA513037EC28C823D72261E7586985590D9B * ___Clamper_4;
	// Bolt.DoubleBuffer`1<UnityEngine.Vector3> Bolt.NetworkTransform::RenderDoubleBufferPosition
	DoubleBuffer_1_t60DD22BD0CE9C807214EB5A01604D312511E4937  ___RenderDoubleBufferPosition_5;
	// Bolt.DoubleBuffer`1<UnityEngine.Quaternion> Bolt.NetworkTransform::RenderDoubleBufferRotation
	DoubleBuffer_1_t58A23175D015541EFB9AFF20CC7C25D12886EC3B  ___RenderDoubleBufferRotation_6;
	// Bolt.TransformSpaces Bolt.NetworkTransform::space
	int32_t ___space_7;

public:
	inline static int32_t get_offset_of_PropertyIndex_0() { return static_cast<int32_t>(offsetof(NetworkTransform_t8D6EA69357F63086B4880044DE1CA8C8C19F68B0, ___PropertyIndex_0)); }
	inline int32_t get_PropertyIndex_0() const { return ___PropertyIndex_0; }
	inline int32_t* get_address_of_PropertyIndex_0() { return &___PropertyIndex_0; }
	inline void set_PropertyIndex_0(int32_t value)
	{
		___PropertyIndex_0 = value;
	}

	inline static int32_t get_offset_of_Render_1() { return static_cast<int32_t>(offsetof(NetworkTransform_t8D6EA69357F63086B4880044DE1CA8C8C19F68B0, ___Render_1)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_Render_1() const { return ___Render_1; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_Render_1() { return &___Render_1; }
	inline void set_Render_1(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___Render_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Render_1), (void*)value);
	}

	inline static int32_t get_offset_of_Simulate_2() { return static_cast<int32_t>(offsetof(NetworkTransform_t8D6EA69357F63086B4880044DE1CA8C8C19F68B0, ___Simulate_2)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_Simulate_2() const { return ___Simulate_2; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_Simulate_2() { return &___Simulate_2; }
	inline void set_Simulate_2(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___Simulate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Simulate_2), (void*)value);
	}

	inline static int32_t get_offset_of_SkipInterpolation_3() { return static_cast<int32_t>(offsetof(NetworkTransform_t8D6EA69357F63086B4880044DE1CA8C8C19F68B0, ___SkipInterpolation_3)); }
	inline bool get_SkipInterpolation_3() const { return ___SkipInterpolation_3; }
	inline bool* get_address_of_SkipInterpolation_3() { return &___SkipInterpolation_3; }
	inline void set_SkipInterpolation_3(bool value)
	{
		___SkipInterpolation_3 = value;
	}

	inline static int32_t get_offset_of_Clamper_4() { return static_cast<int32_t>(offsetof(NetworkTransform_t8D6EA69357F63086B4880044DE1CA8C8C19F68B0, ___Clamper_4)); }
	inline Func_3_t94F4CA513037EC28C823D72261E7586985590D9B * get_Clamper_4() const { return ___Clamper_4; }
	inline Func_3_t94F4CA513037EC28C823D72261E7586985590D9B ** get_address_of_Clamper_4() { return &___Clamper_4; }
	inline void set_Clamper_4(Func_3_t94F4CA513037EC28C823D72261E7586985590D9B * value)
	{
		___Clamper_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Clamper_4), (void*)value);
	}

	inline static int32_t get_offset_of_RenderDoubleBufferPosition_5() { return static_cast<int32_t>(offsetof(NetworkTransform_t8D6EA69357F63086B4880044DE1CA8C8C19F68B0, ___RenderDoubleBufferPosition_5)); }
	inline DoubleBuffer_1_t60DD22BD0CE9C807214EB5A01604D312511E4937  get_RenderDoubleBufferPosition_5() const { return ___RenderDoubleBufferPosition_5; }
	inline DoubleBuffer_1_t60DD22BD0CE9C807214EB5A01604D312511E4937 * get_address_of_RenderDoubleBufferPosition_5() { return &___RenderDoubleBufferPosition_5; }
	inline void set_RenderDoubleBufferPosition_5(DoubleBuffer_1_t60DD22BD0CE9C807214EB5A01604D312511E4937  value)
	{
		___RenderDoubleBufferPosition_5 = value;
	}

	inline static int32_t get_offset_of_RenderDoubleBufferRotation_6() { return static_cast<int32_t>(offsetof(NetworkTransform_t8D6EA69357F63086B4880044DE1CA8C8C19F68B0, ___RenderDoubleBufferRotation_6)); }
	inline DoubleBuffer_1_t58A23175D015541EFB9AFF20CC7C25D12886EC3B  get_RenderDoubleBufferRotation_6() const { return ___RenderDoubleBufferRotation_6; }
	inline DoubleBuffer_1_t58A23175D015541EFB9AFF20CC7C25D12886EC3B * get_address_of_RenderDoubleBufferRotation_6() { return &___RenderDoubleBufferRotation_6; }
	inline void set_RenderDoubleBufferRotation_6(DoubleBuffer_1_t58A23175D015541EFB9AFF20CC7C25D12886EC3B  value)
	{
		___RenderDoubleBufferRotation_6 = value;
	}

	inline static int32_t get_offset_of_space_7() { return static_cast<int32_t>(offsetof(NetworkTransform_t8D6EA69357F63086B4880044DE1CA8C8C19F68B0, ___space_7)); }
	inline int32_t get_space_7() const { return ___space_7; }
	inline int32_t* get_address_of_space_7() { return &___space_7; }
	inline void set_space_7(int32_t value)
	{
		___space_7 = value;
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Bolt.EntityBehaviour
struct  EntityBehaviour_t3F2D30BA6F2D91D21F9B53517D1244986B352597  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// BoltEntity Bolt.EntityBehaviour::_entity
	BoltEntity_tFF7D05C38F9FBCE293140FBBBCB4AAA52344B54B * ____entity_4;

public:
	inline static int32_t get_offset_of__entity_4() { return static_cast<int32_t>(offsetof(EntityBehaviour_t3F2D30BA6F2D91D21F9B53517D1244986B352597, ____entity_4)); }
	inline BoltEntity_tFF7D05C38F9FBCE293140FBBBCB4AAA52344B54B * get__entity_4() const { return ____entity_4; }
	inline BoltEntity_tFF7D05C38F9FBCE293140FBBBCB4AAA52344B54B ** get_address_of__entity_4() { return &____entity_4; }
	inline void set__entity_4(BoltEntity_tFF7D05C38F9FBCE293140FBBBCB4AAA52344B54B * value)
	{
		____entity_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____entity_4), (void*)value);
	}
};


// BoltEntity
struct  BoltEntity_tFF7D05C38F9FBCE293140FBBBCB4AAA52344B54B  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Bolt.Entity BoltEntity::_entity
	Entity_tD99F1382B075468B151E2A0879BC429EE0726AF7 * ____entity_4;
	// System.String BoltEntity::_sceneGuid
	String_t* ____sceneGuid_5;
	// System.String BoltEntity::_serializerGuid
	String_t* ____serializerGuid_6;
	// System.Int32 BoltEntity::_prefabId
	int32_t ____prefabId_7;
	// System.Int32 BoltEntity::_updateRate
	int32_t ____updateRate_8;
	// System.Int32 BoltEntity::_autoFreezeProxyFrames
	int32_t ____autoFreezeProxyFrames_9;
	// System.Boolean BoltEntity::_clientPredicted
	bool ____clientPredicted_10;
	// System.Boolean BoltEntity::_allowInstantiateOnClient
	bool ____allowInstantiateOnClient_11;
	// System.Boolean BoltEntity::_persistThroughSceneLoads
	bool ____persistThroughSceneLoads_12;
	// System.Boolean BoltEntity::_sceneObjectDestroyOnDetach
	bool ____sceneObjectDestroyOnDetach_13;
	// System.Boolean BoltEntity::_sceneObjectAutoAttach
	bool ____sceneObjectAutoAttach_14;
	// System.Boolean BoltEntity::_alwaysProxy
	bool ____alwaysProxy_15;
	// System.Boolean BoltEntity::_detachOnDisable
	bool ____detachOnDisable_16;
	// System.Boolean BoltEntity::_allowFirstReplicationWhenFrozen
	bool ____allowFirstReplicationWhenFrozen_17;
	// System.Boolean BoltEntity::_autoRemoveChildEntities
	bool ____autoRemoveChildEntities_18;
	// Bolt.QueryComponentOptions BoltEntity::_entityBehaviourQueryOption
	int32_t ____entityBehaviourQueryOption_19;
	// Bolt.QueryComponentOptions BoltEntity::_entityPriorityCalculatorQueryOption
	int32_t ____entityPriorityCalculatorQueryOption_20;
	// Bolt.QueryComponentOptions BoltEntity::_entityReplicationFilterQueryOption
	int32_t ____entityReplicationFilterQueryOption_21;
	// BoltEntity BoltEntity::<IBoltListNode<BoltEntity>.prev>k__BackingField
	BoltEntity_tFF7D05C38F9FBCE293140FBBBCB4AAA52344B54B * ___U3CIBoltListNodeU3CBoltEntityU3E_prevU3Ek__BackingField_22;
	// BoltEntity BoltEntity::<IBoltListNode<BoltEntity>.next>k__BackingField
	BoltEntity_tFF7D05C38F9FBCE293140FBBBCB4AAA52344B54B * ___U3CIBoltListNodeU3CBoltEntityU3E_nextU3Ek__BackingField_23;
	// System.Object BoltEntity::<IBoltListNode<BoltEntity>.list>k__BackingField
	RuntimeObject * ___U3CIBoltListNodeU3CBoltEntityU3E_listU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of__entity_4() { return static_cast<int32_t>(offsetof(BoltEntity_tFF7D05C38F9FBCE293140FBBBCB4AAA52344B54B, ____entity_4)); }
	inline Entity_tD99F1382B075468B151E2A0879BC429EE0726AF7 * get__entity_4() const { return ____entity_4; }
	inline Entity_tD99F1382B075468B151E2A0879BC429EE0726AF7 ** get_address_of__entity_4() { return &____entity_4; }
	inline void set__entity_4(Entity_tD99F1382B075468B151E2A0879BC429EE0726AF7 * value)
	{
		____entity_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____entity_4), (void*)value);
	}

	inline static int32_t get_offset_of__sceneGuid_5() { return static_cast<int32_t>(offsetof(BoltEntity_tFF7D05C38F9FBCE293140FBBBCB4AAA52344B54B, ____sceneGuid_5)); }
	inline String_t* get__sceneGuid_5() const { return ____sceneGuid_5; }
	inline String_t** get_address_of__sceneGuid_5() { return &____sceneGuid_5; }
	inline void set__sceneGuid_5(String_t* value)
	{
		____sceneGuid_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sceneGuid_5), (void*)value);
	}

	inline static int32_t get_offset_of__serializerGuid_6() { return static_cast<int32_t>(offsetof(BoltEntity_tFF7D05C38F9FBCE293140FBBBCB4AAA52344B54B, ____serializerGuid_6)); }
	inline String_t* get__serializerGuid_6() const { return ____serializerGuid_6; }
	inline String_t** get_address_of__serializerGuid_6() { return &____serializerGuid_6; }
	inline void set__serializerGuid_6(String_t* value)
	{
		____serializerGuid_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____serializerGuid_6), (void*)value);
	}

	inline static int32_t get_offset_of__prefabId_7() { return static_cast<int32_t>(offsetof(BoltEntity_tFF7D05C38F9FBCE293140FBBBCB4AAA52344B54B, ____prefabId_7)); }
	inline int32_t get__prefabId_7() const { return ____prefabId_7; }
	inline int32_t* get_address_of__prefabId_7() { return &____prefabId_7; }
	inline void set__prefabId_7(int32_t value)
	{
		____prefabId_7 = value;
	}

	inline static int32_t get_offset_of__updateRate_8() { return static_cast<int32_t>(offsetof(BoltEntity_tFF7D05C38F9FBCE293140FBBBCB4AAA52344B54B, ____updateRate_8)); }
	inline int32_t get__updateRate_8() const { return ____updateRate_8; }
	inline int32_t* get_address_of__updateRate_8() { return &____updateRate_8; }
	inline void set__updateRate_8(int32_t value)
	{
		____updateRate_8 = value;
	}

	inline static int32_t get_offset_of__autoFreezeProxyFrames_9() { return static_cast<int32_t>(offsetof(BoltEntity_tFF7D05C38F9FBCE293140FBBBCB4AAA52344B54B, ____autoFreezeProxyFrames_9)); }
	inline int32_t get__autoFreezeProxyFrames_9() const { return ____autoFreezeProxyFrames_9; }
	inline int32_t* get_address_of__autoFreezeProxyFrames_9() { return &____autoFreezeProxyFrames_9; }
	inline void set__autoFreezeProxyFrames_9(int32_t value)
	{
		____autoFreezeProxyFrames_9 = value;
	}

	inline static int32_t get_offset_of__clientPredicted_10() { return static_cast<int32_t>(offsetof(BoltEntity_tFF7D05C38F9FBCE293140FBBBCB4AAA52344B54B, ____clientPredicted_10)); }
	inline bool get__clientPredicted_10() const { return ____clientPredicted_10; }
	inline bool* get_address_of__clientPredicted_10() { return &____clientPredicted_10; }
	inline void set__clientPredicted_10(bool value)
	{
		____clientPredicted_10 = value;
	}

	inline static int32_t get_offset_of__allowInstantiateOnClient_11() { return static_cast<int32_t>(offsetof(BoltEntity_tFF7D05C38F9FBCE293140FBBBCB4AAA52344B54B, ____allowInstantiateOnClient_11)); }
	inline bool get__allowInstantiateOnClient_11() const { return ____allowInstantiateOnClient_11; }
	inline bool* get_address_of__allowInstantiateOnClient_11() { return &____allowInstantiateOnClient_11; }
	inline void set__allowInstantiateOnClient_11(bool value)
	{
		____allowInstantiateOnClient_11 = value;
	}

	inline static int32_t get_offset_of__persistThroughSceneLoads_12() { return static_cast<int32_t>(offsetof(BoltEntity_tFF7D05C38F9FBCE293140FBBBCB4AAA52344B54B, ____persistThroughSceneLoads_12)); }
	inline bool get__persistThroughSceneLoads_12() const { return ____persistThroughSceneLoads_12; }
	inline bool* get_address_of__persistThroughSceneLoads_12() { return &____persistThroughSceneLoads_12; }
	inline void set__persistThroughSceneLoads_12(bool value)
	{
		____persistThroughSceneLoads_12 = value;
	}

	inline static int32_t get_offset_of__sceneObjectDestroyOnDetach_13() { return static_cast<int32_t>(offsetof(BoltEntity_tFF7D05C38F9FBCE293140FBBBCB4AAA52344B54B, ____sceneObjectDestroyOnDetach_13)); }
	inline bool get__sceneObjectDestroyOnDetach_13() const { return ____sceneObjectDestroyOnDetach_13; }
	inline bool* get_address_of__sceneObjectDestroyOnDetach_13() { return &____sceneObjectDestroyOnDetach_13; }
	inline void set__sceneObjectDestroyOnDetach_13(bool value)
	{
		____sceneObjectDestroyOnDetach_13 = value;
	}

	inline static int32_t get_offset_of__sceneObjectAutoAttach_14() { return static_cast<int32_t>(offsetof(BoltEntity_tFF7D05C38F9FBCE293140FBBBCB4AAA52344B54B, ____sceneObjectAutoAttach_14)); }
	inline bool get__sceneObjectAutoAttach_14() const { return ____sceneObjectAutoAttach_14; }
	inline bool* get_address_of__sceneObjectAutoAttach_14() { return &____sceneObjectAutoAttach_14; }
	inline void set__sceneObjectAutoAttach_14(bool value)
	{
		____sceneObjectAutoAttach_14 = value;
	}

	inline static int32_t get_offset_of__alwaysProxy_15() { return static_cast<int32_t>(offsetof(BoltEntity_tFF7D05C38F9FBCE293140FBBBCB4AAA52344B54B, ____alwaysProxy_15)); }
	inline bool get__alwaysProxy_15() const { return ____alwaysProxy_15; }
	inline bool* get_address_of__alwaysProxy_15() { return &____alwaysProxy_15; }
	inline void set__alwaysProxy_15(bool value)
	{
		____alwaysProxy_15 = value;
	}

	inline static int32_t get_offset_of__detachOnDisable_16() { return static_cast<int32_t>(offsetof(BoltEntity_tFF7D05C38F9FBCE293140FBBBCB4AAA52344B54B, ____detachOnDisable_16)); }
	inline bool get__detachOnDisable_16() const { return ____detachOnDisable_16; }
	inline bool* get_address_of__detachOnDisable_16() { return &____detachOnDisable_16; }
	inline void set__detachOnDisable_16(bool value)
	{
		____detachOnDisable_16 = value;
	}

	inline static int32_t get_offset_of__allowFirstReplicationWhenFrozen_17() { return static_cast<int32_t>(offsetof(BoltEntity_tFF7D05C38F9FBCE293140FBBBCB4AAA52344B54B, ____allowFirstReplicationWhenFrozen_17)); }
	inline bool get__allowFirstReplicationWhenFrozen_17() const { return ____allowFirstReplicationWhenFrozen_17; }
	inline bool* get_address_of__allowFirstReplicationWhenFrozen_17() { return &____allowFirstReplicationWhenFrozen_17; }
	inline void set__allowFirstReplicationWhenFrozen_17(bool value)
	{
		____allowFirstReplicationWhenFrozen_17 = value;
	}

	inline static int32_t get_offset_of__autoRemoveChildEntities_18() { return static_cast<int32_t>(offsetof(BoltEntity_tFF7D05C38F9FBCE293140FBBBCB4AAA52344B54B, ____autoRemoveChildEntities_18)); }
	inline bool get__autoRemoveChildEntities_18() const { return ____autoRemoveChildEntities_18; }
	inline bool* get_address_of__autoRemoveChildEntities_18() { return &____autoRemoveChildEntities_18; }
	inline void set__autoRemoveChildEntities_18(bool value)
	{
		____autoRemoveChildEntities_18 = value;
	}

	inline static int32_t get_offset_of__entityBehaviourQueryOption_19() { return static_cast<int32_t>(offsetof(BoltEntity_tFF7D05C38F9FBCE293140FBBBCB4AAA52344B54B, ____entityBehaviourQueryOption_19)); }
	inline int32_t get__entityBehaviourQueryOption_19() const { return ____entityBehaviourQueryOption_19; }
	inline int32_t* get_address_of__entityBehaviourQueryOption_19() { return &____entityBehaviourQueryOption_19; }
	inline void set__entityBehaviourQueryOption_19(int32_t value)
	{
		____entityBehaviourQueryOption_19 = value;
	}

	inline static int32_t get_offset_of__entityPriorityCalculatorQueryOption_20() { return static_cast<int32_t>(offsetof(BoltEntity_tFF7D05C38F9FBCE293140FBBBCB4AAA52344B54B, ____entityPriorityCalculatorQueryOption_20)); }
	inline int32_t get__entityPriorityCalculatorQueryOption_20() const { return ____entityPriorityCalculatorQueryOption_20; }
	inline int32_t* get_address_of__entityPriorityCalculatorQueryOption_20() { return &____entityPriorityCalculatorQueryOption_20; }
	inline void set__entityPriorityCalculatorQueryOption_20(int32_t value)
	{
		____entityPriorityCalculatorQueryOption_20 = value;
	}

	inline static int32_t get_offset_of__entityReplicationFilterQueryOption_21() { return static_cast<int32_t>(offsetof(BoltEntity_tFF7D05C38F9FBCE293140FBBBCB4AAA52344B54B, ____entityReplicationFilterQueryOption_21)); }
	inline int32_t get__entityReplicationFilterQueryOption_21() const { return ____entityReplicationFilterQueryOption_21; }
	inline int32_t* get_address_of__entityReplicationFilterQueryOption_21() { return &____entityReplicationFilterQueryOption_21; }
	inline void set__entityReplicationFilterQueryOption_21(int32_t value)
	{
		____entityReplicationFilterQueryOption_21 = value;
	}

	inline static int32_t get_offset_of_U3CIBoltListNodeU3CBoltEntityU3E_prevU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(BoltEntity_tFF7D05C38F9FBCE293140FBBBCB4AAA52344B54B, ___U3CIBoltListNodeU3CBoltEntityU3E_prevU3Ek__BackingField_22)); }
	inline BoltEntity_tFF7D05C38F9FBCE293140FBBBCB4AAA52344B54B * get_U3CIBoltListNodeU3CBoltEntityU3E_prevU3Ek__BackingField_22() const { return ___U3CIBoltListNodeU3CBoltEntityU3E_prevU3Ek__BackingField_22; }
	inline BoltEntity_tFF7D05C38F9FBCE293140FBBBCB4AAA52344B54B ** get_address_of_U3CIBoltListNodeU3CBoltEntityU3E_prevU3Ek__BackingField_22() { return &___U3CIBoltListNodeU3CBoltEntityU3E_prevU3Ek__BackingField_22; }
	inline void set_U3CIBoltListNodeU3CBoltEntityU3E_prevU3Ek__BackingField_22(BoltEntity_tFF7D05C38F9FBCE293140FBBBCB4AAA52344B54B * value)
	{
		___U3CIBoltListNodeU3CBoltEntityU3E_prevU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIBoltListNodeU3CBoltEntityU3E_prevU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIBoltListNodeU3CBoltEntityU3E_nextU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(BoltEntity_tFF7D05C38F9FBCE293140FBBBCB4AAA52344B54B, ___U3CIBoltListNodeU3CBoltEntityU3E_nextU3Ek__BackingField_23)); }
	inline BoltEntity_tFF7D05C38F9FBCE293140FBBBCB4AAA52344B54B * get_U3CIBoltListNodeU3CBoltEntityU3E_nextU3Ek__BackingField_23() const { return ___U3CIBoltListNodeU3CBoltEntityU3E_nextU3Ek__BackingField_23; }
	inline BoltEntity_tFF7D05C38F9FBCE293140FBBBCB4AAA52344B54B ** get_address_of_U3CIBoltListNodeU3CBoltEntityU3E_nextU3Ek__BackingField_23() { return &___U3CIBoltListNodeU3CBoltEntityU3E_nextU3Ek__BackingField_23; }
	inline void set_U3CIBoltListNodeU3CBoltEntityU3E_nextU3Ek__BackingField_23(BoltEntity_tFF7D05C38F9FBCE293140FBBBCB4AAA52344B54B * value)
	{
		___U3CIBoltListNodeU3CBoltEntityU3E_nextU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIBoltListNodeU3CBoltEntityU3E_nextU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIBoltListNodeU3CBoltEntityU3E_listU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(BoltEntity_tFF7D05C38F9FBCE293140FBBBCB4AAA52344B54B, ___U3CIBoltListNodeU3CBoltEntityU3E_listU3Ek__BackingField_24)); }
	inline RuntimeObject * get_U3CIBoltListNodeU3CBoltEntityU3E_listU3Ek__BackingField_24() const { return ___U3CIBoltListNodeU3CBoltEntityU3E_listU3Ek__BackingField_24; }
	inline RuntimeObject ** get_address_of_U3CIBoltListNodeU3CBoltEntityU3E_listU3Ek__BackingField_24() { return &___U3CIBoltListNodeU3CBoltEntityU3E_listU3Ek__BackingField_24; }
	inline void set_U3CIBoltListNodeU3CBoltEntityU3E_listU3Ek__BackingField_24(RuntimeObject * value)
	{
		___U3CIBoltListNodeU3CBoltEntityU3E_listU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIBoltListNodeU3CBoltEntityU3E_listU3Ek__BackingField_24), (void*)value);
	}
};


// BoltInternal.GlobalEventListenerBase
struct  GlobalEventListenerBase_t6035B82B06A8E1573CF03DE014C9F1E133B54F37  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// BoltInternal.GlobalEventListenerBase BoltInternal.GlobalEventListenerBase::<IBoltListNode<BoltInternal.GlobalEventListenerBase>.prev>k__BackingField
	GlobalEventListenerBase_t6035B82B06A8E1573CF03DE014C9F1E133B54F37 * ___U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_prevU3Ek__BackingField_5;
	// BoltInternal.GlobalEventListenerBase BoltInternal.GlobalEventListenerBase::<IBoltListNode<BoltInternal.GlobalEventListenerBase>.next>k__BackingField
	GlobalEventListenerBase_t6035B82B06A8E1573CF03DE014C9F1E133B54F37 * ___U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_nextU3Ek__BackingField_6;
	// System.Object BoltInternal.GlobalEventListenerBase::<IBoltListNode<BoltInternal.GlobalEventListenerBase>.list>k__BackingField
	RuntimeObject * ___U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_listU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_prevU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(GlobalEventListenerBase_t6035B82B06A8E1573CF03DE014C9F1E133B54F37, ___U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_prevU3Ek__BackingField_5)); }
	inline GlobalEventListenerBase_t6035B82B06A8E1573CF03DE014C9F1E133B54F37 * get_U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_prevU3Ek__BackingField_5() const { return ___U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_prevU3Ek__BackingField_5; }
	inline GlobalEventListenerBase_t6035B82B06A8E1573CF03DE014C9F1E133B54F37 ** get_address_of_U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_prevU3Ek__BackingField_5() { return &___U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_prevU3Ek__BackingField_5; }
	inline void set_U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_prevU3Ek__BackingField_5(GlobalEventListenerBase_t6035B82B06A8E1573CF03DE014C9F1E133B54F37 * value)
	{
		___U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_prevU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_prevU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_nextU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(GlobalEventListenerBase_t6035B82B06A8E1573CF03DE014C9F1E133B54F37, ___U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_nextU3Ek__BackingField_6)); }
	inline GlobalEventListenerBase_t6035B82B06A8E1573CF03DE014C9F1E133B54F37 * get_U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_nextU3Ek__BackingField_6() const { return ___U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_nextU3Ek__BackingField_6; }
	inline GlobalEventListenerBase_t6035B82B06A8E1573CF03DE014C9F1E133B54F37 ** get_address_of_U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_nextU3Ek__BackingField_6() { return &___U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_nextU3Ek__BackingField_6; }
	inline void set_U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_nextU3Ek__BackingField_6(GlobalEventListenerBase_t6035B82B06A8E1573CF03DE014C9F1E133B54F37 * value)
	{
		___U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_nextU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_nextU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_listU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(GlobalEventListenerBase_t6035B82B06A8E1573CF03DE014C9F1E133B54F37, ___U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_listU3Ek__BackingField_7)); }
	inline RuntimeObject * get_U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_listU3Ek__BackingField_7() const { return ___U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_listU3Ek__BackingField_7; }
	inline RuntimeObject ** get_address_of_U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_listU3Ek__BackingField_7() { return &___U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_listU3Ek__BackingField_7; }
	inline void set_U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_listU3Ek__BackingField_7(RuntimeObject * value)
	{
		___U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_listU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIBoltListNodeU3CBoltInternal_GlobalEventListenerBaseU3E_listU3Ek__BackingField_7), (void*)value);
	}
};

struct GlobalEventListenerBase_t6035B82B06A8E1573CF03DE014C9F1E133B54F37_StaticFields
{
public:
	// BoltDoubleList`1<BoltInternal.GlobalEventListenerBase> BoltInternal.GlobalEventListenerBase::callbacks
	BoltDoubleList_1_t0351EA50E16A3F348AF8F7530B9F95C7E418FB02 * ___callbacks_4;

public:
	inline static int32_t get_offset_of_callbacks_4() { return static_cast<int32_t>(offsetof(GlobalEventListenerBase_t6035B82B06A8E1573CF03DE014C9F1E133B54F37_StaticFields, ___callbacks_4)); }
	inline BoltDoubleList_1_t0351EA50E16A3F348AF8F7530B9F95C7E418FB02 * get_callbacks_4() const { return ___callbacks_4; }
	inline BoltDoubleList_1_t0351EA50E16A3F348AF8F7530B9F95C7E418FB02 ** get_address_of_callbacks_4() { return &___callbacks_4; }
	inline void set_callbacks_4(BoltDoubleList_1_t0351EA50E16A3F348AF8F7530B9F95C7E418FB02 * value)
	{
		___callbacks_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbacks_4), (void*)value);
	}
};


// Bolt.EntityBehaviour`1<ICustomCubeState>
struct  EntityBehaviour_1_tD60A27D2AA0274BDD22D8F1909039840DB6B74FD  : public EntityBehaviour_t3F2D30BA6F2D91D21F9B53517D1244986B352597
{
public:

public:
};


// Bolt.GlobalEventListener
struct  GlobalEventListener_t62135280FDEEA868D26E3A5E46D97293FA6C0596  : public GlobalEventListenerBase_t6035B82B06A8E1573CF03DE014C9F1E133B54F37
{
public:

public:
};


// Menu
struct  Menu_t7D066A010AF240D53C2DDA2B05DF31FD0B5F3129  : public GlobalEventListener_t62135280FDEEA868D26E3A5E46D97293FA6C0596
{
public:

public:
};


// NetworkCallbacks
struct  NetworkCallbacks_t66FA20DC4C8A5F944885D36EC4D4B95002D25C2D  : public GlobalEventListener_t62135280FDEEA868D26E3A5E46D97293FA6C0596
{
public:

public:
};


// PlayerMovement
struct  PlayerMovement_t433CEDF390E132D7701A276CCC30080251C6BC2C  : public EntityBehaviour_1_tD60A27D2AA0274BDD22D8F1909039840DB6B74FD
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<!0,!1>> UdpKit.Map`2<System.Guid,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Map_2_GetEnumerator_mC6C2B1D719FACF2CA33FD1D48B313342C93FAC36_gshared (Map_2_tE6EEB70F8CC1A2D971A982D0FEBE6432BA71AF46 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::get_Value()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8A482B0C3BE029C5AC570059507CD2B5CEBFB96B_gshared_inline (KeyValuePair_2_tE4A947A316359604BD867E16B3A0180DB79748A4 * __this, const RuntimeMethod* method);
// !0 Bolt.EntityBehaviour`1<System.Object>::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * EntityBehaviour_1_get_state_mE75B4595ADF1456CCD6AD0FA51CBDE0A1AB55215_gshared (EntityBehaviour_1_tCD7E11ADC1EEF8B4FBAF10EA974423ABB6041FD7 * __this, const RuntimeMethod* method);
// System.Void Bolt.EntityBehaviour`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntityBehaviour_1__ctor_mF2AC8C3185E0362A78225A66FBB5256D84927284_gshared (EntityBehaviour_1_tCD7E11ADC1EEF8B4FBAF10EA974423ABB6041FD7 * __this, const RuntimeMethod* method);

// System.Void BoltLauncher::StartServer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltLauncher_StartServer_m67A18F0C9C3781A0BAAB442383F8B2FB543F8F39 (int32_t ___port0, const RuntimeMethod* method);
// System.Void BoltLauncher::StartClient(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltLauncher_StartClient_mF41F6390530B556F7122CE51CBB721D75FC73C6A (int32_t ___port0, const RuntimeMethod* method);
// System.Boolean BoltNetwork::get_IsServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoltNetwork_get_IsServer_m38377F90C5C34F9A93E2302713900AFEA532B8EB (const RuntimeMethod* method);
// System.Void BoltNetwork::SetServerInfo(System.String,Bolt.IProtocolToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltNetwork_SetServerInfo_mF31C3EA0566216098C615FBA9F6679CF9B81C5F0 (String_t* ___serverName0, RuntimeObject* ___token1, const RuntimeMethod* method);
// System.Void BoltNetwork::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltNetwork_LoadScene_m7A3F122F4F8F20EFA40950FE47F04A977AC36FCD (String_t* ___scene0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<!0,!1>> UdpKit.Map`2<System.Guid,UdpKit.UdpSession>::GetEnumerator()
inline RuntimeObject* Map_2_GetEnumerator_m507C93137AC2428C813B872B559FB6B3723E730B (Map_2_tE294C2C23F5C932C740D45AB0180CEABFD153435 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Map_2_tE294C2C23F5C932C740D45AB0180CEABFD153435 *, const RuntimeMethod*))Map_2_GetEnumerator_mC6C2B1D719FACF2CA33FD1D48B313342C93FAC36_gshared)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Guid,UdpKit.UdpSession>::get_Value()
inline UdpSession_t777CCFD5CE7E297E0EEEB0E40ED5F32A262BFDF1 * KeyValuePair_2_get_Value_m60A07815951C065713DA5D2D4EC57EC67473E4BD_inline (KeyValuePair_2_t8C2F5B0D56B6BE3775F1939BAAC3AA6387BA26AE * __this, const RuntimeMethod* method)
{
	return ((  UdpSession_t777CCFD5CE7E297E0EEEB0E40ED5F32A262BFDF1 * (*) (KeyValuePair_2_t8C2F5B0D56B6BE3775F1939BAAC3AA6387BA26AE *, const RuntimeMethod*))KeyValuePair_2_get_Value_m8A482B0C3BE029C5AC570059507CD2B5CEBFB96B_gshared_inline)(__this, method);
}
// System.Void BoltNetwork::Connect(UdpKit.UdpSession,Bolt.IProtocolToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoltNetwork_Connect_mD6CD8C7F033C2A88B13E0AF867E98AFB716F1816 (UdpSession_t777CCFD5CE7E297E0EEEB0E40ED5F32A262BFDF1 * ___session0, RuntimeObject* ___token1, const RuntimeMethod* method);
// System.Void Bolt.GlobalEventListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalEventListener__ctor_m33FC34DA27985A3BC3073EBF61E756A460985FC4 (GlobalEventListener_t62135280FDEEA868D26E3A5E46D97293FA6C0596 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780 (int32_t ___min0, int32_t ___max1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// BoltEntity BoltNetwork::Instantiate(Bolt.PrefabId,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoltEntity_tFF7D05C38F9FBCE293140FBBBCB4AAA52344B54B * BoltNetwork_Instantiate_m9B15E67D0CA09ACAD31C8C55F7878773C678453C (PrefabId_t3BCAF8C511C49A85AA95B3DE3FFC8C81C6165250  ___prefabId0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, const RuntimeMethod* method);
// !0 Bolt.EntityBehaviour`1<ICustomCubeState>::get_state()
inline RuntimeObject* EntityBehaviour_1_get_state_mBAE0AD649AE65FA3202ED8C0154B74110A43F2C3 (EntityBehaviour_1_tD60A27D2AA0274BDD22D8F1909039840DB6B74FD * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (EntityBehaviour_1_tD60A27D2AA0274BDD22D8F1909039840DB6B74FD *, const RuntimeMethod*))EntityBehaviour_1_get_state_mE75B4595ADF1456CCD6AD0FA51CBDE0A1AB55215_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784 (int32_t ___key0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// System.Single BoltNetwork::get_FrameDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BoltNetwork_get_FrameDeltaTime_m6225280B14A523224983855FBB19A4A362FEF561 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void Bolt.EntityBehaviour`1<ICustomCubeState>::.ctor()
inline void EntityBehaviour_1__ctor_mFEA07E450F79A057B71B53A747AC404D6AA6F441 (EntityBehaviour_1_tD60A27D2AA0274BDD22D8F1909039840DB6B74FD * __this, const RuntimeMethod* method)
{
	((  void (*) (EntityBehaviour_1_tD60A27D2AA0274BDD22D8F1909039840DB6B74FD *, const RuntimeMethod*))EntityBehaviour_1__ctor_mF2AC8C3185E0362A78225A66FBB5256D84927284_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Menu::StartServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_StartServer_m22053B5E3EB6CFF8743E57B0C4C5FBB7D0708A1B (Menu_t7D066A010AF240D53C2DDA2B05DF31FD0B5F3129 * __this, const RuntimeMethod* method)
{
	{
		BoltLauncher_StartServer_m67A18F0C9C3781A0BAAB442383F8B2FB543F8F39((-1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Menu::StartClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_StartClient_m0C1943EB8204AFC01B391C297CB6C5D034E102F0 (Menu_t7D066A010AF240D53C2DDA2B05DF31FD0B5F3129 * __this, const RuntimeMethod* method)
{
	{
		BoltLauncher_StartClient_mF41F6390530B556F7122CE51CBB721D75FC73C6A((-1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Menu::BoltStartDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_BoltStartDone_mD749FA38ABDE648B03727DA714C48B90B18CF93A (Menu_t7D066A010AF240D53C2DDA2B05DF31FD0B5F3129 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Menu_BoltStartDone_mD749FA38ABDE648B03727DA714C48B90B18CF93A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BoltNetwork_t7538D999B862C8CEBA09D321DE325B8D67AF395A_il2cpp_TypeInfo_var);
		bool L_0 = BoltNetwork_get_IsServer_m38377F90C5C34F9A93E2302713900AFEA532B8EB(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BoltNetwork_t7538D999B862C8CEBA09D321DE325B8D67AF395A_il2cpp_TypeInfo_var);
		BoltNetwork_SetServerInfo_mF31C3EA0566216098C615FBA9F6679CF9B81C5F0(_stringLiteral84073C09D8BA9E6130CFA5C044DA373C81D57850, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		BoltNetwork_LoadScene_m7A3F122F4F8F20EFA40950FE47F04A977AC36FCD(_stringLiteral64E4D0D076199500929E028DD91CBC1B48A732ED, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void Menu::SessionListUpdated(UdpKit.Map`2<System.Guid,UdpKit.UdpSession>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_SessionListUpdated_mE726201D31A569841E363B08CDABDAB157C6A474 (Menu_t7D066A010AF240D53C2DDA2B05DF31FD0B5F3129 * __this, Map_2_tE294C2C23F5C932C740D45AB0180CEABFD153435 * ___sessionList0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Menu_SessionListUpdated_mE726201D31A569841E363B08CDABDAB157C6A474_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_t8C2F5B0D56B6BE3775F1939BAAC3AA6387BA26AE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	UdpSession_t777CCFD5CE7E297E0EEEB0E40ED5F32A262BFDF1 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Map_2_tE294C2C23F5C932C740D45AB0180CEABFD153435 * L_0 = ___sessionList0;
		NullCheck(L_0);
		RuntimeObject* L_1 = Map_2_GetEnumerator_m507C93137AC2428C813B872B559FB6B3723E730B(L_0, /*hidden argument*/Map_2_GetEnumerator_m507C93137AC2428C813B872B559FB6B3723E730B_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0028;
		}

IL_0009:
		{
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			KeyValuePair_2_t8C2F5B0D56B6BE3775F1939BAAC3AA6387BA26AE  L_3 = InterfaceFuncInvoker0< KeyValuePair_2_t8C2F5B0D56B6BE3775F1939BAAC3AA6387BA26AE  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Guid,UdpKit.UdpSession>>::get_Current() */, IEnumerator_1_t64D78220EB1314A39FE7E5465993F4619C438F46_il2cpp_TypeInfo_var, L_2);
			V_1 = L_3;
			UdpSession_t777CCFD5CE7E297E0EEEB0E40ED5F32A262BFDF1 * L_4 = KeyValuePair_2_get_Value_m60A07815951C065713DA5D2D4EC57EC67473E4BD_inline((KeyValuePair_2_t8C2F5B0D56B6BE3775F1939BAAC3AA6387BA26AE *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m60A07815951C065713DA5D2D4EC57EC67473E4BD_RuntimeMethod_var);
			V_2 = L_4;
			UdpSession_t777CCFD5CE7E297E0EEEB0E40ED5F32A262BFDF1 * L_5 = V_2;
			NullCheck(L_5);
			int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(6 /* UdpKit.UdpSessionSource UdpKit.UdpSession::get_Source() */, L_5);
			if ((!(((uint32_t)L_6) == ((uint32_t)1))))
			{
				goto IL_0028;
			}
		}

IL_0021:
		{
			UdpSession_t777CCFD5CE7E297E0EEEB0E40ED5F32A262BFDF1 * L_7 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(BoltNetwork_t7538D999B862C8CEBA09D321DE325B8D67AF395A_il2cpp_TypeInfo_var);
			BoltNetwork_Connect_mD6CD8C7F033C2A88B13E0AF867E98AFB716F1816(L_7, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		}

IL_0028:
		{
			RuntimeObject* L_8 = V_0;
			NullCheck(L_8);
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_0009;
			}
		}

IL_0030:
		{
			IL2CPP_LEAVE(0x3C, FINALLY_0032);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0032;
	}

FINALLY_0032:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_0;
			if (!L_10)
			{
				goto IL_003b;
			}
		}

IL_0035:
		{
			RuntimeObject* L_11 = V_0;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_11);
		}

IL_003b:
		{
			IL2CPP_END_FINALLY(50)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(50)
	{
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003c:
	{
		return;
	}
}
// System.Void Menu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu__ctor_mD372D109F6554E1F9A25291964C852C9F6BFC463 (Menu_t7D066A010AF240D53C2DDA2B05DF31FD0B5F3129 * __this, const RuntimeMethod* method)
{
	{
		GlobalEventListener__ctor_m33FC34DA27985A3BC3073EBF61E756A460985FC4(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NetworkCallbacks::SceneLoadLocalDone(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCallbacks_SceneLoadLocalDone_m988A26C11218DFD9CD5A26F1F8D5091208F901F8 (NetworkCallbacks_t66FA20DC4C8A5F944885D36EC4D4B95002D25C2D * __this, String_t* ___scene0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkCallbacks_SceneLoadLocalDone_m988A26C11218DFD9CD5A26F1F8D5091208F901F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(((int32_t)-8), 8, /*hidden argument*/NULL);
		int32_t L_1 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(((int32_t)-8), 8, /*hidden argument*/NULL);
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), (((float)((float)L_0))), (0.0f), (((float)((float)L_1))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BoltPrefabs_t334790A4A600F11E40EDA507B1DE980F5A391548_il2cpp_TypeInfo_var);
		PrefabId_t3BCAF8C511C49A85AA95B3DE3FFC8C81C6165250  L_2 = ((BoltPrefabs_t334790A4A600F11E40EDA507B1DE980F5A391548_StaticFields*)il2cpp_codegen_static_fields_for(BoltPrefabs_t334790A4A600F11E40EDA507B1DE980F5A391548_il2cpp_TypeInfo_var))->get_Cube_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BoltNetwork_t7538D999B862C8CEBA09D321DE325B8D67AF395A_il2cpp_TypeInfo_var);
		BoltNetwork_Instantiate_m9B15E67D0CA09ACAD31C8C55F7878773C678453C(L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NetworkCallbacks::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCallbacks__ctor_m7A2AE6407E3861F59CD6E98D17108B9533A3F0E7 (NetworkCallbacks_t66FA20DC4C8A5F944885D36EC4D4B95002D25C2D * __this, const RuntimeMethod* method)
{
	{
		GlobalEventListener__ctor_m33FC34DA27985A3BC3073EBF61E756A460985FC4(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerMovement::Attached()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Attached_m0B9FBF64CC1A7BB275D15FCE6F06DEC25FB1E6E9 (PlayerMovement_t433CEDF390E132D7701A276CCC30080251C6BC2C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerMovement_Attached_m0B9FBF64CC1A7BB275D15FCE6F06DEC25FB1E6E9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = EntityBehaviour_1_get_state_mBAE0AD649AE65FA3202ED8C0154B74110A43F2C3(__this, /*hidden argument*/EntityBehaviour_1_get_state_mBAE0AD649AE65FA3202ED8C0154B74110A43F2C3_RuntimeMethod_var);
		RuntimeObject* L_1 = EntityBehaviour_1_get_state_mBAE0AD649AE65FA3202ED8C0154B74110A43F2C3(__this, /*hidden argument*/EntityBehaviour_1_get_state_mBAE0AD649AE65FA3202ED8C0154B74110A43F2C3_RuntimeMethod_var);
		NullCheck(L_1);
		NetworkTransform_t8D6EA69357F63086B4880044DE1CA8C8C19F68B0 * L_2 = InterfaceFuncInvoker0< NetworkTransform_t8D6EA69357F63086B4880044DE1CA8C8C19F68B0 * >::Invoke(0 /* Bolt.NetworkTransform ICustomCubeState::get_CubeTransform() */, ICustomCubeState_tF87B94E58E2B0D1E0D724B7FAF77BEAEE3320419_il2cpp_TypeInfo_var, L_1);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker2< NetworkTransform_t8D6EA69357F63086B4880044DE1CA8C8C19F68B0 *, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * >::Invoke(14 /* System.Void Bolt.IState::SetTransforms(Bolt.NetworkTransform,UnityEngine.Transform) */, IState_t74008E21A66087ABA646D1EADC5FF75EC83DE9BD_il2cpp_TypeInfo_var, L_0, L_2, L_4);
		return;
	}
}
// System.Void PlayerMovement::SimulateOwner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_SimulateOwner_mE01350D285EEDC52C68B06C3060EFE7856791717 (PlayerMovement_t433CEDF390E132D7701A276CCC30080251C6BC2C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerMovement_SimulateOwner_mE01350D285EEDC52C68B06C3060EFE7856791717_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (4.0f);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		V_1 = L_0;
		bool L_1 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)113), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		float* L_2 = (&V_1)->get_address_of_x_2();
		float* L_3 = L_2;
		float L_4 = *((float*)L_3);
		*((float*)L_3) = (float)((float)il2cpp_codegen_subtract((float)L_4, (float)(1.0f)));
	}

IL_0025:
	{
		bool L_5 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)100), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		float* L_6 = (&V_1)->get_address_of_x_2();
		float* L_7 = L_6;
		float L_8 = *((float*)L_7);
		*((float*)L_7) = (float)((float)il2cpp_codegen_add((float)L_8, (float)(1.0f)));
	}

IL_003e:
	{
		bool L_9 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)122), /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		float* L_10 = (&V_1)->get_address_of_z_4();
		float* L_11 = L_10;
		float L_12 = *((float*)L_11);
		*((float*)L_11) = (float)((float)il2cpp_codegen_add((float)L_12, (float)(1.0f)));
	}

IL_0057:
	{
		bool L_13 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)115), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0070;
		}
	}
	{
		float* L_14 = (&V_1)->get_address_of_z_4();
		float* L_15 = L_14;
		float L_16 = *((float*)L_15);
		*((float*)L_15) = (float)((float)il2cpp_codegen_subtract((float)L_16, (float)(1.0f)));
	}

IL_0070:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		bool L_19 = Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E(L_17, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00af;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_21 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_21, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), /*hidden argument*/NULL);
		float L_24 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_23, L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BoltNetwork_t7538D999B862C8CEBA09D321DE325B8D67AF395A_il2cpp_TypeInfo_var);
		float L_26 = BoltNetwork_get_FrameDeltaTime_m6225280B14A523224983855FBB19A4A362FEF561(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_25, L_26, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_22, L_27, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_20, L_28, /*hidden argument*/NULL);
	}

IL_00af:
	{
		return;
	}
}
// System.Void PlayerMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement__ctor_m8A0EF934ADA5029471AE677A0EB5A99E87442762 (PlayerMovement_t433CEDF390E132D7701A276CCC30080251C6BC2C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerMovement__ctor_m8A0EF934ADA5029471AE677A0EB5A99E87442762_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EntityBehaviour_1__ctor_mFEA07E450F79A057B71B53A747AC404D6AA6F441(__this, /*hidden argument*/EntityBehaviour_1__ctor_mFEA07E450F79A057B71B53A747AC404D6AA6F441_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8A482B0C3BE029C5AC570059507CD2B5CEBFB96B_gshared_inline (KeyValuePair_2_tE4A947A316359604BD867E16B3A0180DB79748A4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}

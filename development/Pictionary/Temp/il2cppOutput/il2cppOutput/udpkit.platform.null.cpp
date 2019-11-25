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

// NullPlatform
struct NullPlatform_tF7F957AD13606A2FCDD7759B0BACA77AACB57F29;
// NullSocket
struct NullSocket_t401FD2BF9421E0CB6F88B506F5CD04362833D0E0;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UdpKit.UdpPlatformInterface>
struct List_1_t54AE3F709FF74CDFE59A6817A3FC8E16A433EB03;
// System.String
struct String_t;
// UdpKit.UdpPlatform
struct UdpPlatform_tE927073153BD2E6CBFBA6205458AE83D62B63AC8;
// UdpKit.UdpPlatformInterface[]
struct UdpPlatformInterfaceU5BU5D_t5A7B2427909777D46EA731BAF39057EBD471772D;
// UdpKit.UdpPlatformSocket
struct UdpPlatformSocket_t0142ACC12495A3AC069BC2748311B8431F085EFD;

IL2CPP_EXTERN_C RuntimeClass* List_1_t54AE3F709FF74CDFE59A6817A3FC8E16A433EB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullSocket_t401FD2BF9421E0CB6F88B506F5CD04362833D0E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PrecisionTimer_tF0FBD2746BD5EB7EA570D16056BD1321B312B5C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UdpEndPoint_tB195B9643143125CBF55DFF905CCBD98DD68F371_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mEE1A664E6FBD7BEACA31BE4556C9CDC8E93DB368_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t NullPlatform_CreateSocket_m42B3D1A18D703ABC9FFC8F0957C655BC4411200F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NullPlatform_GetNetworkInterfaces_mE5B2311CCE2AE161107E961960D3B528B3C21A28_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NullPlatform_GetPrecisionTime_mB3C44267CFE0652D394DB755C062F52C7276E2B9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NullSocket_get_EndPoint_m786F0CB71AA56B56E7342386E4B2FF1BF10A6446_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NullSocket_get_Error_m0B4210C47E9884430E10EA9FEBA9564250D1722B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PrecisionTimer_GetCurrentTime_m9A4AE7FA6FA40311BD01AA85F97B916BB721AAC7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PrecisionTimer__cctor_m03C72B7D0A0BB379EE4BAB4AA1B84C4977B0E980_MetadataUsageId;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tAA0E30517F40E1CB12465E34E4264EF6AB4B6002 
{
public:

public:
};


// System.Object


// NullPlatform_PrecisionTimer
struct  PrecisionTimer_tF0FBD2746BD5EB7EA570D16056BD1321B312B5C3  : public RuntimeObject
{
public:

public:
};

struct PrecisionTimer_tF0FBD2746BD5EB7EA570D16056BD1321B312B5C3_StaticFields
{
public:
	// System.Int64 NullPlatform_PrecisionTimer::start
	int64_t ___start_0;
	// System.Double NullPlatform_PrecisionTimer::freq
	double ___freq_1;

public:
	inline static int32_t get_offset_of_start_0() { return static_cast<int32_t>(offsetof(PrecisionTimer_tF0FBD2746BD5EB7EA570D16056BD1321B312B5C3_StaticFields, ___start_0)); }
	inline int64_t get_start_0() const { return ___start_0; }
	inline int64_t* get_address_of_start_0() { return &___start_0; }
	inline void set_start_0(int64_t value)
	{
		___start_0 = value;
	}

	inline static int32_t get_offset_of_freq_1() { return static_cast<int32_t>(offsetof(PrecisionTimer_tF0FBD2746BD5EB7EA570D16056BD1321B312B5C3_StaticFields, ___freq_1)); }
	inline double get_freq_1() const { return ___freq_1; }
	inline double* get_address_of_freq_1() { return &___freq_1; }
	inline void set_freq_1(double value)
	{
		___freq_1 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<UdpKit.UdpPlatformInterface>
struct  List_1_t54AE3F709FF74CDFE59A6817A3FC8E16A433EB03  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UdpPlatformInterfaceU5BU5D_t5A7B2427909777D46EA731BAF39057EBD471772D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t54AE3F709FF74CDFE59A6817A3FC8E16A433EB03, ____items_1)); }
	inline UdpPlatformInterfaceU5BU5D_t5A7B2427909777D46EA731BAF39057EBD471772D* get__items_1() const { return ____items_1; }
	inline UdpPlatformInterfaceU5BU5D_t5A7B2427909777D46EA731BAF39057EBD471772D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UdpPlatformInterfaceU5BU5D_t5A7B2427909777D46EA731BAF39057EBD471772D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t54AE3F709FF74CDFE59A6817A3FC8E16A433EB03, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t54AE3F709FF74CDFE59A6817A3FC8E16A433EB03, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t54AE3F709FF74CDFE59A6817A3FC8E16A433EB03, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t54AE3F709FF74CDFE59A6817A3FC8E16A433EB03_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UdpPlatformInterfaceU5BU5D_t5A7B2427909777D46EA731BAF39057EBD471772D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t54AE3F709FF74CDFE59A6817A3FC8E16A433EB03_StaticFields, ____emptyArray_5)); }
	inline UdpPlatformInterfaceU5BU5D_t5A7B2427909777D46EA731BAF39057EBD471772D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UdpPlatformInterfaceU5BU5D_t5A7B2427909777D46EA731BAF39057EBD471772D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UdpPlatformInterfaceU5BU5D_t5A7B2427909777D46EA731BAF39057EBD471772D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Diagnostics.Stopwatch
struct  Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
	}
};


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

// UdpKit.UdpPlatform
struct  UdpPlatform_tE927073153BD2E6CBFBA6205458AE83D62B63AC8  : public RuntimeObject
{
public:
	// System.Object UdpKit.UdpPlatform::<Token>k__BackingField
	RuntimeObject * ___U3CTokenU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CTokenU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UdpPlatform_tE927073153BD2E6CBFBA6205458AE83D62B63AC8, ___U3CTokenU3Ek__BackingField_0)); }
	inline RuntimeObject * get_U3CTokenU3Ek__BackingField_0() const { return ___U3CTokenU3Ek__BackingField_0; }
	inline RuntimeObject ** get_address_of_U3CTokenU3Ek__BackingField_0() { return &___U3CTokenU3Ek__BackingField_0; }
	inline void set_U3CTokenU3Ek__BackingField_0(RuntimeObject * value)
	{
		___U3CTokenU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTokenU3Ek__BackingField_0), (void*)value);
	}
};


// UdpKit.UdpPlatformSocket
struct  UdpPlatformSocket_t0142ACC12495A3AC069BC2748311B8431F085EFD  : public RuntimeObject
{
public:
	// System.Object UdpKit.UdpPlatformSocket::<Token>k__BackingField
	RuntimeObject * ___U3CTokenU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CTokenU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UdpPlatformSocket_t0142ACC12495A3AC069BC2748311B8431F085EFD, ___U3CTokenU3Ek__BackingField_0)); }
	inline RuntimeObject * get_U3CTokenU3Ek__BackingField_0() const { return ___U3CTokenU3Ek__BackingField_0; }
	inline RuntimeObject ** get_address_of_U3CTokenU3Ek__BackingField_0() { return &___U3CTokenU3Ek__BackingField_0; }
	inline void set_U3CTokenU3Ek__BackingField_0(RuntimeObject * value)
	{
		___U3CTokenU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTokenU3Ek__BackingField_0), (void*)value);
	}
};


// NullPlatform
struct  NullPlatform_tF7F957AD13606A2FCDD7759B0BACA77AACB57F29  : public UdpPlatform_tE927073153BD2E6CBFBA6205458AE83D62B63AC8
{
public:

public:
};


// NullSocket
struct  NullSocket_t401FD2BF9421E0CB6F88B506F5CD04362833D0E0  : public UdpPlatformSocket_t0142ACC12495A3AC069BC2748311B8431F085EFD
{
public:
	// NullPlatform NullSocket::platform
	NullPlatform_tF7F957AD13606A2FCDD7759B0BACA77AACB57F29 * ___platform_1;
	// System.Boolean NullSocket::<Broadcast>k__BackingField
	bool ___U3CBroadcastU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_platform_1() { return static_cast<int32_t>(offsetof(NullSocket_t401FD2BF9421E0CB6F88B506F5CD04362833D0E0, ___platform_1)); }
	inline NullPlatform_tF7F957AD13606A2FCDD7759B0BACA77AACB57F29 * get_platform_1() const { return ___platform_1; }
	inline NullPlatform_tF7F957AD13606A2FCDD7759B0BACA77AACB57F29 ** get_address_of_platform_1() { return &___platform_1; }
	inline void set_platform_1(NullPlatform_tF7F957AD13606A2FCDD7759B0BACA77AACB57F29 * value)
	{
		___platform_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___platform_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBroadcastU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(NullSocket_t401FD2BF9421E0CB6F88B506F5CD04362833D0E0, ___U3CBroadcastU3Ek__BackingField_2)); }
	inline bool get_U3CBroadcastU3Ek__BackingField_2() const { return ___U3CBroadcastU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CBroadcastU3Ek__BackingField_2() { return &___U3CBroadcastU3Ek__BackingField_2; }
	inline void set_U3CBroadcastU3Ek__BackingField_2(bool value)
	{
		___U3CBroadcastU3Ek__BackingField_2 = value;
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


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
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


// UdpKit.UdpIPv4Address
struct  UdpIPv4Address_t8C7ADC320A3849BBCB3B183012807501F3224CEB 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 UdpKit.UdpIPv4Address::Packed
			uint32_t ___Packed_3;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___Packed_3_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UdpKit.UdpIPv4Address::Byte0
			uint8_t ___Byte0_4;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___Byte0_4_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_5_OffsetPadding[1];
			// System.Byte UdpKit.UdpIPv4Address::Byte1
			uint8_t ___Byte1_5;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_5_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_5_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_6_OffsetPadding[2];
			// System.Byte UdpKit.UdpIPv4Address::Byte2
			uint8_t ___Byte2_6;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_6_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_6_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_7_OffsetPadding[3];
			// System.Byte UdpKit.UdpIPv4Address::Byte3
			uint8_t ___Byte3_7;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_7_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_7_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
	};

public:
	inline static int32_t get_offset_of_Packed_3() { return static_cast<int32_t>(offsetof(UdpIPv4Address_t8C7ADC320A3849BBCB3B183012807501F3224CEB, ___Packed_3)); }
	inline uint32_t get_Packed_3() const { return ___Packed_3; }
	inline uint32_t* get_address_of_Packed_3() { return &___Packed_3; }
	inline void set_Packed_3(uint32_t value)
	{
		___Packed_3 = value;
	}

	inline static int32_t get_offset_of_Byte0_4() { return static_cast<int32_t>(offsetof(UdpIPv4Address_t8C7ADC320A3849BBCB3B183012807501F3224CEB, ___Byte0_4)); }
	inline uint8_t get_Byte0_4() const { return ___Byte0_4; }
	inline uint8_t* get_address_of_Byte0_4() { return &___Byte0_4; }
	inline void set_Byte0_4(uint8_t value)
	{
		___Byte0_4 = value;
	}

	inline static int32_t get_offset_of_Byte1_5() { return static_cast<int32_t>(offsetof(UdpIPv4Address_t8C7ADC320A3849BBCB3B183012807501F3224CEB, ___Byte1_5)); }
	inline uint8_t get_Byte1_5() const { return ___Byte1_5; }
	inline uint8_t* get_address_of_Byte1_5() { return &___Byte1_5; }
	inline void set_Byte1_5(uint8_t value)
	{
		___Byte1_5 = value;
	}

	inline static int32_t get_offset_of_Byte2_6() { return static_cast<int32_t>(offsetof(UdpIPv4Address_t8C7ADC320A3849BBCB3B183012807501F3224CEB, ___Byte2_6)); }
	inline uint8_t get_Byte2_6() const { return ___Byte2_6; }
	inline uint8_t* get_address_of_Byte2_6() { return &___Byte2_6; }
	inline void set_Byte2_6(uint8_t value)
	{
		___Byte2_6 = value;
	}

	inline static int32_t get_offset_of_Byte3_7() { return static_cast<int32_t>(offsetof(UdpIPv4Address_t8C7ADC320A3849BBCB3B183012807501F3224CEB, ___Byte3_7)); }
	inline uint8_t get_Byte3_7() const { return ___Byte3_7; }
	inline uint8_t* get_address_of_Byte3_7() { return &___Byte3_7; }
	inline void set_Byte3_7(uint8_t value)
	{
		___Byte3_7 = value;
	}
};

struct UdpIPv4Address_t8C7ADC320A3849BBCB3B183012807501F3224CEB_StaticFields
{
public:
	// UdpKit.UdpIPv4Address UdpKit.UdpIPv4Address::Any
	UdpIPv4Address_t8C7ADC320A3849BBCB3B183012807501F3224CEB  ___Any_0;
	// UdpKit.UdpIPv4Address UdpKit.UdpIPv4Address::Localhost
	UdpIPv4Address_t8C7ADC320A3849BBCB3B183012807501F3224CEB  ___Localhost_1;
	// UdpKit.UdpIPv4Address UdpKit.UdpIPv4Address::Broadcast
	UdpIPv4Address_t8C7ADC320A3849BBCB3B183012807501F3224CEB  ___Broadcast_2;

public:
	inline static int32_t get_offset_of_Any_0() { return static_cast<int32_t>(offsetof(UdpIPv4Address_t8C7ADC320A3849BBCB3B183012807501F3224CEB_StaticFields, ___Any_0)); }
	inline UdpIPv4Address_t8C7ADC320A3849BBCB3B183012807501F3224CEB  get_Any_0() const { return ___Any_0; }
	inline UdpIPv4Address_t8C7ADC320A3849BBCB3B183012807501F3224CEB * get_address_of_Any_0() { return &___Any_0; }
	inline void set_Any_0(UdpIPv4Address_t8C7ADC320A3849BBCB3B183012807501F3224CEB  value)
	{
		___Any_0 = value;
	}

	inline static int32_t get_offset_of_Localhost_1() { return static_cast<int32_t>(offsetof(UdpIPv4Address_t8C7ADC320A3849BBCB3B183012807501F3224CEB_StaticFields, ___Localhost_1)); }
	inline UdpIPv4Address_t8C7ADC320A3849BBCB3B183012807501F3224CEB  get_Localhost_1() const { return ___Localhost_1; }
	inline UdpIPv4Address_t8C7ADC320A3849BBCB3B183012807501F3224CEB * get_address_of_Localhost_1() { return &___Localhost_1; }
	inline void set_Localhost_1(UdpIPv4Address_t8C7ADC320A3849BBCB3B183012807501F3224CEB  value)
	{
		___Localhost_1 = value;
	}

	inline static int32_t get_offset_of_Broadcast_2() { return static_cast<int32_t>(offsetof(UdpIPv4Address_t8C7ADC320A3849BBCB3B183012807501F3224CEB_StaticFields, ___Broadcast_2)); }
	inline UdpIPv4Address_t8C7ADC320A3849BBCB3B183012807501F3224CEB  get_Broadcast_2() const { return ___Broadcast_2; }
	inline UdpIPv4Address_t8C7ADC320A3849BBCB3B183012807501F3224CEB * get_address_of_Broadcast_2() { return &___Broadcast_2; }
	inline void set_Broadcast_2(UdpIPv4Address_t8C7ADC320A3849BBCB3B183012807501F3224CEB  value)
	{
		___Broadcast_2 = value;
	}
};


// UdpKit.UdpIPv6Address
struct  UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UdpKit.UdpIPv6Address::Byte0
			uint8_t ___Byte0_3;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___Byte0_3_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_4_OffsetPadding[1];
			// System.Byte UdpKit.UdpIPv6Address::Byte1
			uint8_t ___Byte1_4;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_4_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_4_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_5_OffsetPadding[2];
			// System.Byte UdpKit.UdpIPv6Address::Byte2
			uint8_t ___Byte2_5;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_5_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_5_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_6_OffsetPadding[3];
			// System.Byte UdpKit.UdpIPv6Address::Byte3
			uint8_t ___Byte3_6;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_6_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_6_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_7_OffsetPadding[4];
			// System.Byte UdpKit.UdpIPv6Address::Byte4
			uint8_t ___Byte4_7;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_7_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_7_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_8_OffsetPadding[5];
			// System.Byte UdpKit.UdpIPv6Address::Byte5
			uint8_t ___Byte5_8;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_8_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_8_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_9_OffsetPadding[6];
			// System.Byte UdpKit.UdpIPv6Address::Byte6
			uint8_t ___Byte6_9;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_9_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_9_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_10_OffsetPadding[7];
			// System.Byte UdpKit.UdpIPv6Address::Byte7
			uint8_t ___Byte7_10;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_10_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_10_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte8_11_OffsetPadding[8];
			// System.Byte UdpKit.UdpIPv6Address::Byte8
			uint8_t ___Byte8_11;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte8_11_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___Byte8_11_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte9_12_OffsetPadding[9];
			// System.Byte UdpKit.UdpIPv6Address::Byte9
			uint8_t ___Byte9_12;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte9_12_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___Byte9_12_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte10_13_OffsetPadding[10];
			// System.Byte UdpKit.UdpIPv6Address::Byte10
			uint8_t ___Byte10_13;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte10_13_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___Byte10_13_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte11_14_OffsetPadding[11];
			// System.Byte UdpKit.UdpIPv6Address::Byte11
			uint8_t ___Byte11_14;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte11_14_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___Byte11_14_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte12_15_OffsetPadding[12];
			// System.Byte UdpKit.UdpIPv6Address::Byte12
			uint8_t ___Byte12_15;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte12_15_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___Byte12_15_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte13_16_OffsetPadding[13];
			// System.Byte UdpKit.UdpIPv6Address::Byte13
			uint8_t ___Byte13_16;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte13_16_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___Byte13_16_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte14_17_OffsetPadding[14];
			// System.Byte UdpKit.UdpIPv6Address::Byte14
			uint8_t ___Byte14_17;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte14_17_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___Byte14_17_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte15_18_OffsetPadding[15];
			// System.Byte UdpKit.UdpIPv6Address::Byte15
			uint8_t ___Byte15_18;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte15_18_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___Byte15_18_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 UdpKit.UdpIPv6Address::Packed0
			uint64_t ___Packed0_19;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___Packed0_19_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Packed1_20_OffsetPadding[8];
			// System.UInt64 UdpKit.UdpIPv6Address::Packed1
			uint64_t ___Packed1_20;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Packed1_20_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___Packed1_20_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
	};

public:
	inline static int32_t get_offset_of_Byte0_3() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256, ___Byte0_3)); }
	inline uint8_t get_Byte0_3() const { return ___Byte0_3; }
	inline uint8_t* get_address_of_Byte0_3() { return &___Byte0_3; }
	inline void set_Byte0_3(uint8_t value)
	{
		___Byte0_3 = value;
	}

	inline static int32_t get_offset_of_Byte1_4() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256, ___Byte1_4)); }
	inline uint8_t get_Byte1_4() const { return ___Byte1_4; }
	inline uint8_t* get_address_of_Byte1_4() { return &___Byte1_4; }
	inline void set_Byte1_4(uint8_t value)
	{
		___Byte1_4 = value;
	}

	inline static int32_t get_offset_of_Byte2_5() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256, ___Byte2_5)); }
	inline uint8_t get_Byte2_5() const { return ___Byte2_5; }
	inline uint8_t* get_address_of_Byte2_5() { return &___Byte2_5; }
	inline void set_Byte2_5(uint8_t value)
	{
		___Byte2_5 = value;
	}

	inline static int32_t get_offset_of_Byte3_6() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256, ___Byte3_6)); }
	inline uint8_t get_Byte3_6() const { return ___Byte3_6; }
	inline uint8_t* get_address_of_Byte3_6() { return &___Byte3_6; }
	inline void set_Byte3_6(uint8_t value)
	{
		___Byte3_6 = value;
	}

	inline static int32_t get_offset_of_Byte4_7() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256, ___Byte4_7)); }
	inline uint8_t get_Byte4_7() const { return ___Byte4_7; }
	inline uint8_t* get_address_of_Byte4_7() { return &___Byte4_7; }
	inline void set_Byte4_7(uint8_t value)
	{
		___Byte4_7 = value;
	}

	inline static int32_t get_offset_of_Byte5_8() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256, ___Byte5_8)); }
	inline uint8_t get_Byte5_8() const { return ___Byte5_8; }
	inline uint8_t* get_address_of_Byte5_8() { return &___Byte5_8; }
	inline void set_Byte5_8(uint8_t value)
	{
		___Byte5_8 = value;
	}

	inline static int32_t get_offset_of_Byte6_9() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256, ___Byte6_9)); }
	inline uint8_t get_Byte6_9() const { return ___Byte6_9; }
	inline uint8_t* get_address_of_Byte6_9() { return &___Byte6_9; }
	inline void set_Byte6_9(uint8_t value)
	{
		___Byte6_9 = value;
	}

	inline static int32_t get_offset_of_Byte7_10() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256, ___Byte7_10)); }
	inline uint8_t get_Byte7_10() const { return ___Byte7_10; }
	inline uint8_t* get_address_of_Byte7_10() { return &___Byte7_10; }
	inline void set_Byte7_10(uint8_t value)
	{
		___Byte7_10 = value;
	}

	inline static int32_t get_offset_of_Byte8_11() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256, ___Byte8_11)); }
	inline uint8_t get_Byte8_11() const { return ___Byte8_11; }
	inline uint8_t* get_address_of_Byte8_11() { return &___Byte8_11; }
	inline void set_Byte8_11(uint8_t value)
	{
		___Byte8_11 = value;
	}

	inline static int32_t get_offset_of_Byte9_12() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256, ___Byte9_12)); }
	inline uint8_t get_Byte9_12() const { return ___Byte9_12; }
	inline uint8_t* get_address_of_Byte9_12() { return &___Byte9_12; }
	inline void set_Byte9_12(uint8_t value)
	{
		___Byte9_12 = value;
	}

	inline static int32_t get_offset_of_Byte10_13() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256, ___Byte10_13)); }
	inline uint8_t get_Byte10_13() const { return ___Byte10_13; }
	inline uint8_t* get_address_of_Byte10_13() { return &___Byte10_13; }
	inline void set_Byte10_13(uint8_t value)
	{
		___Byte10_13 = value;
	}

	inline static int32_t get_offset_of_Byte11_14() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256, ___Byte11_14)); }
	inline uint8_t get_Byte11_14() const { return ___Byte11_14; }
	inline uint8_t* get_address_of_Byte11_14() { return &___Byte11_14; }
	inline void set_Byte11_14(uint8_t value)
	{
		___Byte11_14 = value;
	}

	inline static int32_t get_offset_of_Byte12_15() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256, ___Byte12_15)); }
	inline uint8_t get_Byte12_15() const { return ___Byte12_15; }
	inline uint8_t* get_address_of_Byte12_15() { return &___Byte12_15; }
	inline void set_Byte12_15(uint8_t value)
	{
		___Byte12_15 = value;
	}

	inline static int32_t get_offset_of_Byte13_16() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256, ___Byte13_16)); }
	inline uint8_t get_Byte13_16() const { return ___Byte13_16; }
	inline uint8_t* get_address_of_Byte13_16() { return &___Byte13_16; }
	inline void set_Byte13_16(uint8_t value)
	{
		___Byte13_16 = value;
	}

	inline static int32_t get_offset_of_Byte14_17() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256, ___Byte14_17)); }
	inline uint8_t get_Byte14_17() const { return ___Byte14_17; }
	inline uint8_t* get_address_of_Byte14_17() { return &___Byte14_17; }
	inline void set_Byte14_17(uint8_t value)
	{
		___Byte14_17 = value;
	}

	inline static int32_t get_offset_of_Byte15_18() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256, ___Byte15_18)); }
	inline uint8_t get_Byte15_18() const { return ___Byte15_18; }
	inline uint8_t* get_address_of_Byte15_18() { return &___Byte15_18; }
	inline void set_Byte15_18(uint8_t value)
	{
		___Byte15_18 = value;
	}

	inline static int32_t get_offset_of_Packed0_19() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256, ___Packed0_19)); }
	inline uint64_t get_Packed0_19() const { return ___Packed0_19; }
	inline uint64_t* get_address_of_Packed0_19() { return &___Packed0_19; }
	inline void set_Packed0_19(uint64_t value)
	{
		___Packed0_19 = value;
	}

	inline static int32_t get_offset_of_Packed1_20() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256, ___Packed1_20)); }
	inline uint64_t get_Packed1_20() const { return ___Packed1_20; }
	inline uint64_t* get_address_of_Packed1_20() { return &___Packed1_20; }
	inline void set_Packed1_20(uint64_t value)
	{
		___Packed1_20 = value;
	}
};

struct UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256_StaticFields
{
public:
	// UdpKit.UdpIPv6Address UdpKit.UdpIPv6Address::Any
	UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256  ___Any_0;
	// UdpKit.UdpIPv6Address UdpKit.UdpIPv6Address::Mask
	UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256  ___Mask_1;
	// UdpKit.UdpIPv6Address UdpKit.UdpIPv6Address::Localhost
	UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256  ___Localhost_2;

public:
	inline static int32_t get_offset_of_Any_0() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256_StaticFields, ___Any_0)); }
	inline UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256  get_Any_0() const { return ___Any_0; }
	inline UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256 * get_address_of_Any_0() { return &___Any_0; }
	inline void set_Any_0(UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256  value)
	{
		___Any_0 = value;
	}

	inline static int32_t get_offset_of_Mask_1() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256_StaticFields, ___Mask_1)); }
	inline UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256  get_Mask_1() const { return ___Mask_1; }
	inline UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256 * get_address_of_Mask_1() { return &___Mask_1; }
	inline void set_Mask_1(UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256  value)
	{
		___Mask_1 = value;
	}

	inline static int32_t get_offset_of_Localhost_2() { return static_cast<int32_t>(offsetof(UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256_StaticFields, ___Localhost_2)); }
	inline UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256  get_Localhost_2() const { return ___Localhost_2; }
	inline UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256 * get_address_of_Localhost_2() { return &___Localhost_2; }
	inline void set_Localhost_2(UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256  value)
	{
		___Localhost_2 = value;
	}
};


// UdpKit.UdpSteamID
struct  UdpSteamID_t3FF94FD4563354C6389BF9542712262E9C9A597C 
{
public:
	// System.UInt64 UdpKit.UdpSteamID::Id
	uint64_t ___Id_0;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(UdpSteamID_t3FF94FD4563354C6389BF9542712262E9C9A597C, ___Id_0)); }
	inline uint64_t get_Id_0() const { return ___Id_0; }
	inline uint64_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(uint64_t value)
	{
		___Id_0 = value;
	}
};


// UdpKit.UdpEndPoint
struct  UdpEndPoint_tB195B9643143125CBF55DFF905CCBD98DD68F371 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 UdpKit.UdpEndPoint::Port
			uint16_t ___Port_2;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___Port_2_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			// UdpKit.UdpSteamID UdpKit.UdpEndPoint::SteamId
			UdpSteamID_t3FF94FD4563354C6389BF9542712262E9C9A597C  ___SteamId_3;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			UdpSteamID_t3FF94FD4563354C6389BF9542712262E9C9A597C  ___SteamId_3_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___IPv6_4_OffsetPadding[4];
			// System.Boolean UdpKit.UdpEndPoint::IPv6
			bool ___IPv6_4;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___IPv6_4_OffsetPadding_forAlignmentOnly[4];
			bool ___IPv6_4_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Address_5_OffsetPadding[8];
			// UdpKit.UdpIPv4Address UdpKit.UdpEndPoint::Address
			UdpIPv4Address_t8C7ADC320A3849BBCB3B183012807501F3224CEB  ___Address_5;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Address_5_OffsetPadding_forAlignmentOnly[8];
			UdpIPv4Address_t8C7ADC320A3849BBCB3B183012807501F3224CEB  ___Address_5_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___AddressIPv6_6_OffsetPadding[8];
			// UdpKit.UdpIPv6Address UdpKit.UdpEndPoint::AddressIPv6
			UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256  ___AddressIPv6_6;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___AddressIPv6_6_OffsetPadding_forAlignmentOnly[8];
			UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256  ___AddressIPv6_6_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
	};

public:
	inline static int32_t get_offset_of_Port_2() { return static_cast<int32_t>(offsetof(UdpEndPoint_tB195B9643143125CBF55DFF905CCBD98DD68F371, ___Port_2)); }
	inline uint16_t get_Port_2() const { return ___Port_2; }
	inline uint16_t* get_address_of_Port_2() { return &___Port_2; }
	inline void set_Port_2(uint16_t value)
	{
		___Port_2 = value;
	}

	inline static int32_t get_offset_of_SteamId_3() { return static_cast<int32_t>(offsetof(UdpEndPoint_tB195B9643143125CBF55DFF905CCBD98DD68F371, ___SteamId_3)); }
	inline UdpSteamID_t3FF94FD4563354C6389BF9542712262E9C9A597C  get_SteamId_3() const { return ___SteamId_3; }
	inline UdpSteamID_t3FF94FD4563354C6389BF9542712262E9C9A597C * get_address_of_SteamId_3() { return &___SteamId_3; }
	inline void set_SteamId_3(UdpSteamID_t3FF94FD4563354C6389BF9542712262E9C9A597C  value)
	{
		___SteamId_3 = value;
	}

	inline static int32_t get_offset_of_IPv6_4() { return static_cast<int32_t>(offsetof(UdpEndPoint_tB195B9643143125CBF55DFF905CCBD98DD68F371, ___IPv6_4)); }
	inline bool get_IPv6_4() const { return ___IPv6_4; }
	inline bool* get_address_of_IPv6_4() { return &___IPv6_4; }
	inline void set_IPv6_4(bool value)
	{
		___IPv6_4 = value;
	}

	inline static int32_t get_offset_of_Address_5() { return static_cast<int32_t>(offsetof(UdpEndPoint_tB195B9643143125CBF55DFF905CCBD98DD68F371, ___Address_5)); }
	inline UdpIPv4Address_t8C7ADC320A3849BBCB3B183012807501F3224CEB  get_Address_5() const { return ___Address_5; }
	inline UdpIPv4Address_t8C7ADC320A3849BBCB3B183012807501F3224CEB * get_address_of_Address_5() { return &___Address_5; }
	inline void set_Address_5(UdpIPv4Address_t8C7ADC320A3849BBCB3B183012807501F3224CEB  value)
	{
		___Address_5 = value;
	}

	inline static int32_t get_offset_of_AddressIPv6_6() { return static_cast<int32_t>(offsetof(UdpEndPoint_tB195B9643143125CBF55DFF905CCBD98DD68F371, ___AddressIPv6_6)); }
	inline UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256  get_AddressIPv6_6() const { return ___AddressIPv6_6; }
	inline UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256 * get_address_of_AddressIPv6_6() { return &___AddressIPv6_6; }
	inline void set_AddressIPv6_6(UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256  value)
	{
		___AddressIPv6_6 = value;
	}
};

struct UdpEndPoint_tB195B9643143125CBF55DFF905CCBD98DD68F371_StaticFields
{
public:
	// UdpKit.UdpEndPoint UdpKit.UdpEndPoint::Any
	UdpEndPoint_tB195B9643143125CBF55DFF905CCBD98DD68F371  ___Any_0;
	// UdpKit.UdpEndPoint UdpKit.UdpEndPoint::AnyIPv6
	UdpEndPoint_tB195B9643143125CBF55DFF905CCBD98DD68F371  ___AnyIPv6_1;

public:
	inline static int32_t get_offset_of_Any_0() { return static_cast<int32_t>(offsetof(UdpEndPoint_tB195B9643143125CBF55DFF905CCBD98DD68F371_StaticFields, ___Any_0)); }
	inline UdpEndPoint_tB195B9643143125CBF55DFF905CCBD98DD68F371  get_Any_0() const { return ___Any_0; }
	inline UdpEndPoint_tB195B9643143125CBF55DFF905CCBD98DD68F371 * get_address_of_Any_0() { return &___Any_0; }
	inline void set_Any_0(UdpEndPoint_tB195B9643143125CBF55DFF905CCBD98DD68F371  value)
	{
		___Any_0 = value;
	}

	inline static int32_t get_offset_of_AnyIPv6_1() { return static_cast<int32_t>(offsetof(UdpEndPoint_tB195B9643143125CBF55DFF905CCBD98DD68F371_StaticFields, ___AnyIPv6_1)); }
	inline UdpEndPoint_tB195B9643143125CBF55DFF905CCBD98DD68F371  get_AnyIPv6_1() const { return ___AnyIPv6_1; }
	inline UdpEndPoint_tB195B9643143125CBF55DFF905CCBD98DD68F371 * get_address_of_AnyIPv6_1() { return &___AnyIPv6_1; }
	inline void set_AnyIPv6_1(UdpEndPoint_tB195B9643143125CBF55DFF905CCBD98DD68F371  value)
	{
		___AnyIPv6_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UdpKit.UdpEndPoint
struct UdpEndPoint_tB195B9643143125CBF55DFF905CCBD98DD68F371_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___Port_2;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___Port_2_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			UdpSteamID_t3FF94FD4563354C6389BF9542712262E9C9A597C  ___SteamId_3;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			UdpSteamID_t3FF94FD4563354C6389BF9542712262E9C9A597C  ___SteamId_3_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___IPv6_4_OffsetPadding[4];
			int32_t ___IPv6_4;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___IPv6_4_OffsetPadding_forAlignmentOnly[4];
			int32_t ___IPv6_4_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Address_5_OffsetPadding[8];
			UdpIPv4Address_t8C7ADC320A3849BBCB3B183012807501F3224CEB  ___Address_5;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Address_5_OffsetPadding_forAlignmentOnly[8];
			UdpIPv4Address_t8C7ADC320A3849BBCB3B183012807501F3224CEB  ___Address_5_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___AddressIPv6_6_OffsetPadding[8];
			UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256  ___AddressIPv6_6;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___AddressIPv6_6_OffsetPadding_forAlignmentOnly[8];
			UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256  ___AddressIPv6_6_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
	};
};
// Native definition for COM marshalling of UdpKit.UdpEndPoint
struct UdpEndPoint_tB195B9643143125CBF55DFF905CCBD98DD68F371_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___Port_2;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___Port_2_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			UdpSteamID_t3FF94FD4563354C6389BF9542712262E9C9A597C  ___SteamId_3;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			UdpSteamID_t3FF94FD4563354C6389BF9542712262E9C9A597C  ___SteamId_3_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___IPv6_4_OffsetPadding[4];
			int32_t ___IPv6_4;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___IPv6_4_OffsetPadding_forAlignmentOnly[4];
			int32_t ___IPv6_4_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Address_5_OffsetPadding[8];
			UdpIPv4Address_t8C7ADC320A3849BBCB3B183012807501F3224CEB  ___Address_5;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Address_5_OffsetPadding_forAlignmentOnly[8];
			UdpIPv4Address_t8C7ADC320A3849BBCB3B183012807501F3224CEB  ___Address_5_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___AddressIPv6_6_OffsetPadding[8];
			UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256  ___AddressIPv6_6;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___AddressIPv6_6_OffsetPadding_forAlignmentOnly[8];
			UdpIPv6Address_t7EEBA86E29CE4D9F8B3B3BEF8060AF30828AA256  ___AddressIPv6_6_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
	};
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);

// System.Void UdpKit.UdpPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpPlatform__ctor_mB2AD48024B831CD4D234288ECA64E65A4E4CCA4E (UdpPlatform_tE927073153BD2E6CBFBA6205458AE83D62B63AC8 * __this, const RuntimeMethod* method);
// System.Void NullSocket::.ctor(NullPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullSocket__ctor_mFAAE975CAA791421FBF0E07D3284D3DCD00A2EA3 (NullSocket_t401FD2BF9421E0CB6F88B506F5CD04362833D0E0 * __this, NullPlatform_tF7F957AD13606A2FCDD7759B0BACA77AACB57F29 * ___p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UdpKit.UdpPlatformInterface>::.ctor()
inline void List_1__ctor_mEE1A664E6FBD7BEACA31BE4556C9CDC8E93DB368 (List_1_t54AE3F709FF74CDFE59A6817A3FC8E16A433EB03 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t54AE3F709FF74CDFE59A6817A3FC8E16A433EB03 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.UInt32 NullPlatform/PrecisionTimer::GetCurrentTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t PrecisionTimer_GetCurrentTime_m9A4AE7FA6FA40311BD01AA85F97B916BB721AAC7 (const RuntimeMethod* method);
// System.Int64 System.Diagnostics.Stopwatch::GetTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_GetTimestamp_m7A4B2D144D880343DB783326F36F6996C1D1A1CA (const RuntimeMethod* method);
// System.Void UdpKit.UdpPlatformSocket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpPlatformSocket__ctor_mA14FFCF692A9FF0C50F52984B1288488747C28A3 (UdpPlatformSocket_t0142ACC12495A3AC069BC2748311B8431F085EFD * __this, const RuntimeMethod* method);
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
// System.Void NullPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullPlatform__ctor_m42C2CA8CFF5EAE5D27CB79F28F63FFC33C460A09 (NullPlatform_tF7F957AD13606A2FCDD7759B0BACA77AACB57F29 * __this, const RuntimeMethod* method)
{
	{
		UdpPlatform__ctor_mB2AD48024B831CD4D234288ECA64E65A4E4CCA4E(__this, /*hidden argument*/NULL);
		VirtFuncInvoker0< uint32_t >::Invoke(28 /* System.UInt32 UdpKit.UdpPlatform::GetPrecisionTime() */, __this);
		return;
	}
}
// UdpKit.UdpPlatformSocket NullPlatform::CreateSocket(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpPlatformSocket_t0142ACC12495A3AC069BC2748311B8431F085EFD * NullPlatform_CreateSocket_m42B3D1A18D703ABC9FFC8F0957C655BC4411200F (NullPlatform_tF7F957AD13606A2FCDD7759B0BACA77AACB57F29 * __this, bool ___ipv60, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NullPlatform_CreateSocket_m42B3D1A18D703ABC9FFC8F0957C655BC4411200F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UdpPlatformSocket_t0142ACC12495A3AC069BC2748311B8431F085EFD * V_0 = NULL;
	{
		NullSocket_t401FD2BF9421E0CB6F88B506F5CD04362833D0E0 * L_0 = (NullSocket_t401FD2BF9421E0CB6F88B506F5CD04362833D0E0 *)il2cpp_codegen_object_new(NullSocket_t401FD2BF9421E0CB6F88B506F5CD04362833D0E0_il2cpp_TypeInfo_var);
		NullSocket__ctor_mFAAE975CAA791421FBF0E07D3284D3DCD00A2EA3(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		UdpPlatformSocket_t0142ACC12495A3AC069BC2748311B8431F085EFD * L_1 = V_0;
		return L_1;
	}
}
// UdpKit.UdpSessionSource NullPlatform::GetSessionSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NullPlatform_GetSessionSource_mE411463EC31AC89BCE56CA01160BCB819A43AADB (NullPlatform_tF7F957AD13606A2FCDD7759B0BACA77AACB57F29 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 2;
		goto IL_0005;
	}

IL_0005:
	{
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Collections.Generic.List`1<UdpKit.UdpPlatformInterface> NullPlatform::GetNetworkInterfaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t54AE3F709FF74CDFE59A6817A3FC8E16A433EB03 * NullPlatform_GetNetworkInterfaces_mE5B2311CCE2AE161107E961960D3B528B3C21A28 (NullPlatform_tF7F957AD13606A2FCDD7759B0BACA77AACB57F29 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NullPlatform_GetNetworkInterfaces_mE5B2311CCE2AE161107E961960D3B528B3C21A28_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t54AE3F709FF74CDFE59A6817A3FC8E16A433EB03 * V_0 = NULL;
	{
		List_1_t54AE3F709FF74CDFE59A6817A3FC8E16A433EB03 * L_0 = (List_1_t54AE3F709FF74CDFE59A6817A3FC8E16A433EB03 *)il2cpp_codegen_object_new(List_1_t54AE3F709FF74CDFE59A6817A3FC8E16A433EB03_il2cpp_TypeInfo_var);
		List_1__ctor_mEE1A664E6FBD7BEACA31BE4556C9CDC8E93DB368(L_0, /*hidden argument*/List_1__ctor_mEE1A664E6FBD7BEACA31BE4556C9CDC8E93DB368_RuntimeMethod_var);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		List_1_t54AE3F709FF74CDFE59A6817A3FC8E16A433EB03 * L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 NullPlatform::GetPrecisionTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NullPlatform_GetPrecisionTime_mB3C44267CFE0652D394DB755C062F52C7276E2B9 (NullPlatform_tF7F957AD13606A2FCDD7759B0BACA77AACB57F29 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NullPlatform_GetPrecisionTime_mB3C44267CFE0652D394DB755C062F52C7276E2B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(PrecisionTimer_tF0FBD2746BD5EB7EA570D16056BD1321B312B5C3_il2cpp_TypeInfo_var);
		uint32_t L_0 = PrecisionTimer_GetCurrentTime_m9A4AE7FA6FA40311BD01AA85F97B916BB721AAC7(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean NullPlatform::get_IsNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullPlatform_get_IsNull_mAA9085AEECCD0460238B290E325CCC3DE31CFB5B (NullPlatform_tF7F957AD13606A2FCDD7759B0BACA77AACB57F29 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
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
// System.UInt32 NullPlatform_PrecisionTimer::GetCurrentTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t PrecisionTimer_GetCurrentTime_m9A4AE7FA6FA40311BD01AA85F97B916BB721AAC7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PrecisionTimer_GetCurrentTime_m9A4AE7FA6FA40311BD01AA85F97B916BB721AAC7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	double V_1 = 0.0;
	uint32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_il2cpp_TypeInfo_var);
		int64_t L_0 = Stopwatch_GetTimestamp_m7A4B2D144D880343DB783326F36F6996C1D1A1CA(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PrecisionTimer_tF0FBD2746BD5EB7EA570D16056BD1321B312B5C3_il2cpp_TypeInfo_var);
		int64_t L_1 = ((PrecisionTimer_tF0FBD2746BD5EB7EA570D16056BD1321B312B5C3_StaticFields*)il2cpp_codegen_static_fields_for(PrecisionTimer_tF0FBD2746BD5EB7EA570D16056BD1321B312B5C3_il2cpp_TypeInfo_var))->get_start_0();
		V_0 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_0, (int64_t)L_1));
		int64_t L_2 = V_0;
		double L_3 = ((PrecisionTimer_tF0FBD2746BD5EB7EA570D16056BD1321B312B5C3_StaticFields*)il2cpp_codegen_static_fields_for(PrecisionTimer_tF0FBD2746BD5EB7EA570D16056BD1321B312B5C3_il2cpp_TypeInfo_var))->get_freq_1();
		V_1 = ((double)il2cpp_codegen_multiply((double)(((double)((double)L_2))), (double)L_3));
		double L_4 = V_1;
		V_2 = (((int32_t)((uint32_t)((double)il2cpp_codegen_multiply((double)L_4, (double)(1000.0))))));
		goto IL_0025;
	}

IL_0025:
	{
		uint32_t L_5 = V_2;
		return L_5;
	}
}
// System.Void NullPlatform_PrecisionTimer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrecisionTimer__cctor_m03C72B7D0A0BB379EE4BAB4AA1B84C4977B0E980 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PrecisionTimer__cctor_m03C72B7D0A0BB379EE4BAB4AA1B84C4977B0E980_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_il2cpp_TypeInfo_var);
		int64_t L_0 = Stopwatch_GetTimestamp_m7A4B2D144D880343DB783326F36F6996C1D1A1CA(/*hidden argument*/NULL);
		((PrecisionTimer_tF0FBD2746BD5EB7EA570D16056BD1321B312B5C3_StaticFields*)il2cpp_codegen_static_fields_for(PrecisionTimer_tF0FBD2746BD5EB7EA570D16056BD1321B312B5C3_il2cpp_TypeInfo_var))->set_start_0(L_0);
		int64_t L_1 = ((Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields*)il2cpp_codegen_static_fields_for(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_il2cpp_TypeInfo_var))->get_Frequency_0();
		((PrecisionTimer_tF0FBD2746BD5EB7EA570D16056BD1321B312B5C3_StaticFields*)il2cpp_codegen_static_fields_for(PrecisionTimer_tF0FBD2746BD5EB7EA570D16056BD1321B312B5C3_il2cpp_TypeInfo_var))->set_freq_1((((double)((double)((float)((float)(1.0f)/(float)(((float)((float)L_1)))))))));
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
// System.Void NullSocket::.ctor(NullPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullSocket__ctor_mFAAE975CAA791421FBF0E07D3284D3DCD00A2EA3 (NullSocket_t401FD2BF9421E0CB6F88B506F5CD04362833D0E0 * __this, NullPlatform_tF7F957AD13606A2FCDD7759B0BACA77AACB57F29 * ___p0, const RuntimeMethod* method)
{
	{
		UdpPlatformSocket__ctor_mA14FFCF692A9FF0C50F52984B1288488747C28A3(__this, /*hidden argument*/NULL);
		NullPlatform_tF7F957AD13606A2FCDD7759B0BACA77AACB57F29 * L_0 = ___p0;
		__this->set_platform_1(L_0);
		return;
	}
}
// System.Void NullSocket::Bind(UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullSocket_Bind_m94833EC99FB73B53865F6793C891BFE06E6D6C2D (NullSocket_t401FD2BF9421E0CB6F88B506F5CD04362833D0E0 * __this, UdpEndPoint_tB195B9643143125CBF55DFF905CCBD98DD68F371  ___ep0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean NullSocket::get_Broadcast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullSocket_get_Broadcast_m4EFFD647BB8AA1310E4C25FDF64A2C5B2512F2AA (NullSocket_t401FD2BF9421E0CB6F88B506F5CD04362833D0E0 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CBroadcastU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void NullSocket::set_Broadcast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullSocket_set_Broadcast_mF263BF65CBC60154D592F9519331FA184BD87550 (NullSocket_t401FD2BF9421E0CB6F88B506F5CD04362833D0E0 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CBroadcastU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void NullSocket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullSocket_Close_m4F8837EA4A0E66751DE1CDA4C16868434362BCB3 (NullSocket_t401FD2BF9421E0CB6F88B506F5CD04362833D0E0 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// UdpKit.UdpEndPoint NullSocket::get_EndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpEndPoint_tB195B9643143125CBF55DFF905CCBD98DD68F371  NullSocket_get_EndPoint_m786F0CB71AA56B56E7342386E4B2FF1BF10A6446 (NullSocket_t401FD2BF9421E0CB6F88B506F5CD04362833D0E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NullSocket_get_EndPoint_m786F0CB71AA56B56E7342386E4B2FF1BF10A6446_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UdpEndPoint_tB195B9643143125CBF55DFF905CCBD98DD68F371  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(UdpEndPoint_tB195B9643143125CBF55DFF905CCBD98DD68F371_il2cpp_TypeInfo_var);
		UdpEndPoint_tB195B9643143125CBF55DFF905CCBD98DD68F371  L_0 = ((UdpEndPoint_tB195B9643143125CBF55DFF905CCBD98DD68F371_StaticFields*)il2cpp_codegen_static_fields_for(UdpEndPoint_tB195B9643143125CBF55DFF905CCBD98DD68F371_il2cpp_TypeInfo_var))->get_Any_0();
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		UdpEndPoint_tB195B9643143125CBF55DFF905CCBD98DD68F371  L_1 = V_0;
		return L_1;
	}
}
// System.String NullSocket::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NullSocket_get_Error_m0B4210C47E9884430E10EA9FEBA9564250D1722B (NullSocket_t401FD2BF9421E0CB6F88B506F5CD04362833D0E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NullSocket_get_Error_m0B4210C47E9884430E10EA9FEBA9564250D1722B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0009;
	}

IL_0009:
	{
		String_t* L_0 = V_0;
		return L_0;
	}
}
// System.Boolean NullSocket::get_IsBound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullSocket_get_IsBound_m4F1CAF427F4FD1FA48497AA3F2C86BB5CE4F800C (NullSocket_t401FD2BF9421E0CB6F88B506F5CD04362833D0E0 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// UdpKit.UdpPlatform NullSocket::get_Platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UdpPlatform_tE927073153BD2E6CBFBA6205458AE83D62B63AC8 * NullSocket_get_Platform_mBB01A8B21412B97339AC8E652AB8FF21C3DF9176 (NullSocket_t401FD2BF9421E0CB6F88B506F5CD04362833D0E0 * __this, const RuntimeMethod* method)
{
	UdpPlatform_tE927073153BD2E6CBFBA6205458AE83D62B63AC8 * V_0 = NULL;
	{
		NullPlatform_tF7F957AD13606A2FCDD7759B0BACA77AACB57F29 * L_0 = __this->get_platform_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		UdpPlatform_tE927073153BD2E6CBFBA6205458AE83D62B63AC8 * L_1 = V_0;
		return L_1;
	}
}
// System.Int32 NullSocket::RecvFrom(System.Byte[],System.Int32,UdpKit.UdpEndPoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NullSocket_RecvFrom_mE8B9A040D6ECB086A0B00CD9C8F8A25618AFF90A (NullSocket_t401FD2BF9421E0CB6F88B506F5CD04362833D0E0 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___bufferSize1, UdpEndPoint_tB195B9643143125CBF55DFF905CCBD98DD68F371 * ___remoteEndpoint2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0005;
	}

IL_0005:
	{
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Boolean NullSocket::RecvPoll(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullSocket_RecvPoll_m2FD94999026D5BA4812001AF04D8E975CB287331 (NullSocket_t401FD2BF9421E0CB6F88B506F5CD04362833D0E0 * __this, int32_t ___timeout0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean NullSocket::RecvPoll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullSocket_RecvPoll_mDEE1D9E72BC39744CD1D96130755718AC506EA90 (NullSocket_t401FD2BF9421E0CB6F88B506F5CD04362833D0E0 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Int32 NullSocket::SendTo(System.Byte[],System.Int32,UdpKit.UdpEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NullSocket_SendTo_mCCF7B6C88674A993ABA1E614331B9AD6DA9E2B93 (NullSocket_t401FD2BF9421E0CB6F88B506F5CD04362833D0E0 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___bytesToSend1, UdpEndPoint_tB195B9643143125CBF55DFF905CCBD98DD68F371  ___endpoint2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bytesToSend1;
		V_0 = L_0;
		goto IL_0005;
	}

IL_0005:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

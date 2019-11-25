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

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<UnityEngine.Experimental.XR.FrameReceivedEventArgs>
struct Action_1_t95D7D93D51DF3F6A6C456CD847A0A4150A398BBC;
// System.Action`1<UnityEngine.Experimental.XR.PlaneAddedEventArgs>
struct Action_1_t3863E014281664DEECCEAFF0F363B622DAB862E6;
// System.Action`1<UnityEngine.Experimental.XR.PlaneRemovedEventArgs>
struct Action_1_t9720B7CBE6CC0851562EC5B89948AEF5C229D991;
// System.Action`1<UnityEngine.Experimental.XR.PlaneUpdatedEventArgs>
struct Action_1_tBEAD8CEE1CABAD25A45CE64C8A9D173BEDEC0AF6;
// System.Action`1<UnityEngine.Experimental.XR.ReferencePointUpdatedEventArgs>
struct Action_1_t62CF34AD78617EF5FE6E7FCE5803CBE14C103FBD;
// System.Action`1<UnityEngine.Experimental.XR.SessionTrackingStateChangedEventArgs>
struct Action_1_tFA24ECAFB569947BC1D041AECE3FD63058B301F9;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>>[]
struct EntryU5BU5D_t162493FF8D40D2E77157E7E001EADF172DFA1F73;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>>[]
struct EntryU5BU5D_t5962468EF159B3D967CA1C44F2AD7160A4FAFE1B;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Func`2<UnityEngine.Experimental.XR.XRSessionSubsystem,System.IntPtr>>[]
struct EntryU5BU5D_t6E1CEBCBF749320C485C2245FF7D50F69EFFE492;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>>[]
struct EntryU5BU5D_t469D348125B126C49059510BE71A9E1600D6C20F;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>[]
struct EntryU5BU5D_tD832D6F1154750C3283E0BD6E34FD3A31DA4674E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>>[]
struct EntryU5BU5D_tBB30C0B3FDABC0FCF8C418D957C03F6AA31ACB28;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>>[]
struct EntryU5BU5D_t7E58C66CB559CD7A1502FEF8784F392E08404643;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Func`3<UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>[]
struct EntryU5BU5D_tFE6E29B69C99C42E6162AFABDE03563CF2760623;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.XR.ARExtensions.ICameraConfigApi>[]
struct EntryU5BU5D_t48F0EFB6565F568C4B1DE0585AD9A506A0520399;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.XR.ARExtensions.ICameraImageApi>[]
struct EntryU5BU5D_t8ADFF70B68C844C34239D73E0AB4DE423C0D94E0;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate>[]
struct EntryU5BU5D_t3630C260B9779DE3A20625048A8A8632F144AB4E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetIntrinsicsDelegate>[]
struct EntryU5BU5D_t0BE6DEF17F36C4E61F2CF620D331583653EC34A9;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate>[]
struct EntryU5BU5D_t21FDAFBBE224D6C5560821B9E811A43DBA5D8E44;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>>[]
struct EntryU5BU5D_t2EFE9AE27326FE1624949581FA5461A804441338;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>>[]
struct EntryU5BU5D_t7F3371AF37481F1BC610A9C7E4B01B692D05BC21;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>>
struct KeyCollection_tC4F9FFFD72E11075981DA5E560D635C0DAA7F8CC;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>>
struct KeyCollection_t29B05F528FF6BAA0C798ED2102CADD2FD8C0AFC3;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Func`2<UnityEngine.Experimental.XR.XRSessionSubsystem,System.IntPtr>>
struct KeyCollection_tC1A99E59B0B66C814EA07D19F7BE3D79DD449A5A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>>
struct KeyCollection_t3A8AD5163796157D83D8725A3BA9972174182214;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>
struct KeyCollection_t0BCD41E00BA42040D5CDF577C13B16681D114D1F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>>
struct KeyCollection_t6F09D0786B5A5FD1DFAC7CFD5D81CE0B780FEA2D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>>
struct KeyCollection_t8ECA5DC2C85283F451C1CDEB631838CBDDE538DE;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Func`3<UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>
struct KeyCollection_t3F062DB1CD052AEA55B50F3113006411D84F050B;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.XR.ARExtensions.ICameraConfigApi>
struct KeyCollection_tCAC1FEE01D6452A8E1716EB8FB0EAFF1FC29BD56;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.XR.ARExtensions.ICameraImageApi>
struct KeyCollection_tC64CE5D76EF2BF0EDB7135D1EE2CDADCEC4D8434;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate>
struct KeyCollection_tD54A02F4FF47ED3CCDE0F6E0DC3921C3FB7C3F57;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetIntrinsicsDelegate>
struct KeyCollection_tFD867702B09463FAE0F466A4A03810D321A780F7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate>
struct KeyCollection_tA0148910B1B1E7CDBB9B918CD3078137FDF969CA;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>>
struct KeyCollection_tB9BABC6B56A8EE280DC570268508F0073E962D73;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>>
struct KeyCollection_t5AFE96BB01085F93D64BC0C5E58A22815034FA9C;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>>
struct ValueCollection_tD290457BF3088316AB47D391C751762A8B417EF3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>>
struct ValueCollection_t2E1796BE5C722B7E7C705E287AAEC64674B7EDEB;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Func`2<UnityEngine.Experimental.XR.XRSessionSubsystem,System.IntPtr>>
struct ValueCollection_t21663CF0D78C12C65BA224B7840E058DE64B13BA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>>
struct ValueCollection_t6DC0CE5053BE142B12BBC96D627EDF6FF91602DD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>
struct ValueCollection_t07668DF7A143F8771C3752CBF5F2FBF61325F900;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>>
struct ValueCollection_t0256ACED6273BC4C59CE6D25177D76F2242076DB;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>>
struct ValueCollection_t355C0EE0E07CF666F70A46B14451B6554C01DAA2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Func`3<UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>
struct ValueCollection_tCEE3515B4B13118A6069991BA515B42301AE113D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.XR.ARExtensions.ICameraConfigApi>
struct ValueCollection_t3B69566DAAFC8490A363E2DABF483C20229FE4FF;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.XR.ARExtensions.ICameraImageApi>
struct ValueCollection_t93F2F433ED4A5B2CCB54F8DF996B7FEABE050861;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate>
struct ValueCollection_tD48F2745F2FB191DBA967A00A112D8D50CB48FDD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetIntrinsicsDelegate>
struct ValueCollection_t86602DA7B16CF9E6412E392921D395A5FDE9DD93;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate>
struct ValueCollection_t8B001D4816849C86B076EEABF073A405791418F8;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>>
struct ValueCollection_tC77DDFD684CA0A90EEC04E19E23563EF04D43166;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>>
struct ValueCollection_t332DA323A4C7E2C490D27A3428D555019EA14149;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>>
struct Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03;
// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>>
struct Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896;
// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRSessionSubsystem,System.IntPtr>>
struct Dictionary_2_tFE1C7A285CDDB61F4FD563A8D1EB39AF5A5A2B3E;
// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>>
struct Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18;
// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>
struct Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504;
// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>>
struct Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334;
// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>>
struct Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C;
// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>
struct Dictionary_2_tF85F2837800957A1F17D2C5FD4CA7D5BC9609C8E;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.ICameraConfigApi>
struct Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.ICameraImageApi>
struct Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate>
struct Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetIntrinsicsDelegate>
struct Dictionary_2_tE4065ACCCAB4F818974D5F60A984FEDECA6AFBD9;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate>
struct Dictionary_2_t2E0DF86FACC6F978A4B05B1BDDA0DEEE82FCD0B5;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>>
struct Dictionary_2_t29A0B4802803E068766061600B339B644FF24895;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>>
struct Dictionary_2_t940582C11B83AD84AC1F67AF3F3F5FAE64B82503;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t7EE965B791A606D187CCB69569A433D4CBB36879;
// System.Func`2<System.Object,System.IntPtr>
struct Func_2_tCD6D7E3EA16DD0F2ABEE6DCFB218CC15BF43B5D9;
// System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>
struct Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8;
// System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>
struct Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E;
// System.Func`2<UnityEngine.Experimental.XR.XRSessionSubsystem,System.IntPtr>
struct Func_2_t3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427;
// System.Func`3<System.Object,System.Int32Enum,System.Boolean>
struct Func_3_t38EC29D177240EF2B5F3DECA40F77E2A762B6671;
// System.Func`3<System.Object,UnityEngine.Experimental.XR.TrackableId,System.Int32Enum>
struct Func_3_tB11122E2777CE9921EA175D744BFD56D6BD535F9;
// System.Func`3<System.Object,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>
struct Func_3_t2ED96FCF00355A1F97D4CC70B00A6E3CAAF09DAE;
// System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>
struct Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3;
// System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>
struct Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828;
// System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>
struct Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472;
// System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>
struct Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851;
// System.Func`3<UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>
struct Func_3_t5F7E105DF840E21AC18D244B52CBAC733FF4DAFB;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Experimental.XR.XRCameraSubsystem
struct XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701;
// UnityEngine.Experimental.XR.XRCameraSubsystemDescriptor
struct XRCameraSubsystemDescriptor_t46972B2D1CC489288B72CD0856AB7675B5EEEE6D;
// UnityEngine.Experimental.XR.XRPlaneSubsystem
struct XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B;
// UnityEngine.Experimental.XR.XRPlaneSubsystemDescriptor
struct XRPlaneSubsystemDescriptor_t0F6814B2CAD6778836A3A230A200600556C57D7F;
// UnityEngine.Experimental.XR.XRReferencePointSubsystem
struct XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C;
// UnityEngine.Experimental.XR.XRReferencePointSubsystemDescriptor
struct XRReferencePointSubsystemDescriptor_t0228E77788DA1EAB18104D6AB3DBAF5AF5CFA0D3;
// UnityEngine.Experimental.XR.XRSessionSubsystem
struct XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F;
// UnityEngine.Experimental.XR.XRSessionSubsystemDescriptor
struct XRSessionSubsystemDescriptor_tF69268DD404379B461569E4268BEC52FAFC9F3B9;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_t44607A9BE5154ED0C7924B81776A709724545E6C;
// UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812;
// UnityEngine.IntegratedSubsystem`1<System.Object>
struct IntegratedSubsystem_1_t2DE7C58DE8F60DCFD451AAFB0B75E6B1BF94C134;
// UnityEngine.IntegratedSubsystem`1<UnityEngine.Experimental.XR.XRCameraSubsystemDescriptor>
struct IntegratedSubsystem_1_t7895B27006AD89A2D0A37800E5E72D929802A8FD;
// UnityEngine.IntegratedSubsystem`1<UnityEngine.Experimental.XR.XRPlaneSubsystemDescriptor>
struct IntegratedSubsystem_1_tA0CDA6F41285252BAC7B1C847C06E6A174C2A726;
// UnityEngine.IntegratedSubsystem`1<UnityEngine.Experimental.XR.XRReferencePointSubsystemDescriptor>
struct IntegratedSubsystem_1_t48FB8540AD0BEB39E04B6521F76EADF9ACB5F794;
// UnityEngine.IntegratedSubsystem`1<UnityEngine.Experimental.XR.XRSessionSubsystemDescriptor>
struct IntegratedSubsystem_1_tB3B8A0259908C7FE09F3D2231645B5CA251A2B5C;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54;
// UnityEngine.XR.ARExtensions.DefaultCameraConfigApi
struct DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091;
// UnityEngine.XR.ARExtensions.DefaultCameraImageApi
struct DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB;
// UnityEngine.XR.ARExtensions.ICameraConfigApi
struct ICameraConfigApi_t5694F28C505D2CA91EF77838138F419261B240BA;
// UnityEngine.XR.ARExtensions.ICameraImageApi
struct ICameraImageApi_tBAC003481E172628D623F3F9E7CFB8D2FD84EEE4;
// UnityEngine.XR.ARExtensions.PlaneDetectionFlagsMaskAttribute
struct PlaneDetectionFlagsMaskAttribute_t891FFF72B896019B6EF9B5BC66B66B7482D85E36;
// UnityEngine.XR.ARExtensions.Promise`1<System.Int32Enum>
struct Promise_1_t86CAA07E2F0920F186E17389E61DF22419E422A1;
// UnityEngine.XR.ARExtensions.Promise`1<UnityEngine.XR.ARExtensions.SessionAvailability>
struct Promise_1_t66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF;
// UnityEngine.XR.ARExtensions.Promise`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>
struct Promise_1_tBD5BCA0938AD2478C8AC6953371BD3E24D657C15;
// UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate
struct TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8;
// UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetIntrinsicsDelegate
struct TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389;
// UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate
struct AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF;
// UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<System.Int32Enum>
struct AsyncDelegate_1_t6A92F8D83CC29E18956F23A772F33CDBB4FB0D0A;
// UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>
struct AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659;
// UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>
struct AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color_t119BCA590009762C7223FDD3AF9706653AC84ED2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t29A0B4802803E068766061600B339B644FF24895_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t2E0DF86FACC6F978A4B05B1BDDA0DEEE82FCD0B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t940582C11B83AD84AC1F67AF3F3F5FAE64B82503_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tE4065ACCCAB4F818974D5F60A984FEDECA6AFBD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF85F2837800957A1F17D2C5FD4CA7D5BC9609C8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tFE1C7A285CDDB61F4FD563A8D1EB39AF5A5A2B3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_t5F7E105DF840E21AC18D244B52CBAC733FF4DAFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral21B987F677241B66E28A5D11D61261FDE1890ED3;
IL2CPP_EXTERN_C String_t* _stringLiteral803CB9B37A5D16493B12A6980F00E6EFC5F33114;
IL2CPP_EXTERN_C String_t* _stringLiteral8ACABC1B8A6A5FFEBE5548DF5488F4E557AC0AA4;
IL2CPP_EXTERN_C String_t* _stringLiteralB9BC357DEC96784E9811974A390666B2E82E6A6B;
IL2CPP_EXTERN_C String_t* _stringLiteralC28544CF6E443E95BB4A90955468E5F3F7D37199;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncDelegate_1_Invoke_m106CF5901441272D1BAAA67E469EDCD5A05201EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncDelegate_1_Invoke_mE4C5BF27A0BA0E736BF0B6883E1FCE03CC2D94E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncDelegate_1__ctor_mA0DC00CAC1027C7822EB22B5E9AD00FE41F4BB95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncDelegate_1__ctor_mED44FB99D258C600108FE257AB413537111C093F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m09C4BA484CCC690E8D866C3D49D187F7E829C57D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m0D1D88C8F7FADB0811A56FC188679877BF0E68A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m16D15F3C862098DF2D3E042B47890E96138C6B54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m220ABCA24A5187DE88E208E9E85624AFF9E429FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m2AD0C4A7179CDF70C8D84ED6B581250B869C74FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m2F2C81BE42168DB8D8C8E0097988528AAA2138B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m38BD50020AAAC75533326A970505779889322025_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m6E3C361936B8366A688BE5C136E7FA290F8D33BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m74FEE57A3ED48C22A194D2B0DADFE822140BE275_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9A0762E02CCCCFD8E00375523F1E6ACC3E84211A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9EAE1511A3947B9424311D32A6727C19E776D1BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCB6661D6E4C78D7DC40A5BF8F57A936F82883D7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCEE923EDBB9032A2899F5591894782A7036E3541_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD418F6BAA7C990CEACBE06A97FC00177355A055F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mDE8D441175FF39143149503BCE484A53AB593FC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m0C701E4F356D0C2E031C58314260A570C0700D13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m1754CE8844755239EAE2B00C3E47FF21A52B8BEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m1AE870C391863BB5CC45B25852032E8A3898E32E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m4928FF7E350E2EA84F2877D3C6A5231FA935DE91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m8EEB1F24AC95767F888EE20C70EA6960B9312DEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mA157E660E1AAACB87822FAF5A5860C6E2F07F1D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mADAB602D07985E48AC31A4CF3DBA19B836D41E78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD2174A65AA619EA2AE1A93880E672071866EF992_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mDCCEBD39F3A8292A36004B8E4A45BAE086480A80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mF41CD7B59672D2F7944AD9948C85D87F71F55823_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mF99892D844079B6407206DB17E470B6A05A0AE68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mF9BA061CBECCB241F3B5934FD46B09CBC8D5A0A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mFA768651E6837E984F25C0E2E4BA3D5FDF33E75C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m79647D280D912B4716600CA05F271A40E9BC7B11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mB70921C3E2F09D928DD6CB56EDB76B0740950837_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mE24D6BB638CDBE042618FD7C42A30F92994B031C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3_Invoke_m2050474BE35CAC1B6B87848214E445703F0B0FEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3_Invoke_m49DE3A72CF4ECC2FE9CDA93D7F6B6C931A046AAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3_Invoke_mB755438CB6927A8979F2D00C8706027F548397E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3__ctor_m27FCFCB94AC7593063BF02372B6A9B3BEEFD8779_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3__ctor_m719B904C27077EF12C81ECD411AB739E7B94FA3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3__ctor_m9EFB55F925F47E45BE7C8811F004C9BC82B77149_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3__ctor_mEB02727EA13F9EDEA7054E33EB928C6E625E4F1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3__ctor_mF23AC3FFB9F86CE914EA6FB40CE3A4797273A3EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntegratedSubsystem_1_get_SubsystemDescriptor_m2D51244EC044786C3CE3827FBBFC992E4A40F554_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntegratedSubsystem_1_get_SubsystemDescriptor_m9252E3E25F1B1FA86102F3F097BD2C36869AFD01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntegratedSubsystem_1_get_SubsystemDescriptor_mCA5319329F86C199ADE0C11C103ED6ED1C15B38A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntegratedSubsystem_1_get_SubsystemDescriptor_mD686C3E61643ABD5B11A3DE0437B49F20A0A241B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Promise_1_CreateResolvedPromise_m548F7D4E240E44FFBBB8D3942AF9ABD34C6DEE4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Promise_1_CreateResolvedPromise_m7EC83AB3701AC7742546873D51CF5D0C5E39569C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegistrationHelper_GetValueOrDefault_TisString_t_TisAsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3_mF8B964C5BA09885FFA920703291DFC4A5EE01256_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegistrationHelper_GetValueOrDefault_TisString_t_TisAsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659_mE8149BE813B79A07A9CCF8A262585C980A986BF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegistrationHelper_GetValueOrDefault_TisString_t_TisAttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF_mDEF3757DAFA7A9EFC927096B193885E25FAB2DD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E_m6210B7180E0BB217CCA3E6594211EFF4A07FC608_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_2_t3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427_m88D7F0C1014A6A81B45395BA3A45D70CDA0A4E7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8_mBD11FC1155A5BE7D77FFAADC61FFC0C9FE5B95B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851_m883A19EADF36FF29E928044AC5BE877EA3772C2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828_mE97108E1F9BB2274F733EBCAF91C10CCE7FB86AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_t5F7E105DF840E21AC18D244B52CBAC733FF4DAFB_mE927F2CA4E621CD4993840C5669202159CF1408B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472_m4B3C34CCCC20FD454B9644C5C015CBD469EE21CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3_m97C70CD7BCCD482831332935DADA118B4285FFE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegistrationHelper_GetValueOrDefault_TisString_t_TisICameraConfigApi_t5694F28C505D2CA91EF77838138F419261B240BA_mD6F28B8DC5EB1F9F670AACA1C9521D3473E8D189_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegistrationHelper_GetValueOrDefault_TisString_t_TisICameraImageApi_tBAC003481E172628D623F3F9E7CFB8D2FD84EEE4_m1355429B4894B08DB4C8610770DC753A0CD717DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegistrationHelper_GetValueOrDefault_TisString_t_TisTryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8_m61A7834239CA4AB5A641B628FCB56987C35589D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegistrationHelper_GetValueOrDefault_TisString_t_TisTryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389_mBDCC5B8F3FDC544D361E13600D3A9AE8F7BA2B0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRCameraExtensions_DefaultGetNativePtr_m7FCC798A545F092E8E88C5E29055F3972211B922_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRCameraExtensions_DefaultIsPermissionGranted_mF4F00208F05CF90929466881AA740971C4961092_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRCameraExtensions_DefaultTryGetColorCorrection_mB07296284A1CD1FFD67C27DDFC9F9B0B1FC7B171_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRCameraExtensions_DefaultTryGetIntrinsics_mEA139700852C54138B3A40D1A90D21B3FA1B8096_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRCameraExtensions_DefaultTrySetFocusMode_m396B373A1FEBF7FF74C89E4CBC0082598CA41FD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRCameraExtensions_TryGetColorCorrection_m4A597222BE9D634F970F7FF8AD2653A51C1EDE5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRCameraExtensions_TrySetFocusMode_m1AB7ABC44233BC4E9A75F1DE743A35B5EEC46D53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRPlaneExtensions_DefaultGetNativePtr_m525A8606FE4568D1A90B5278EB8EF59D20013EBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRPlaneExtensions_DefaultGetTrackingState_m109B0DC9AEC93FE64BC1C1364818F4FE8BD7BFBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRPlaneExtensions_DefaultTrySetPlaneDetectionFlags_m923E9988964EF262D478E43D2E13A671BCA8BE17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRPlaneExtensions_GetTrackingState_m13B5E36C047B76ED18FFDE896FCA71A709D972C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRPlaneExtensions_TrySetPlaneDetectionFlags_m6A51BFB0AF774F9DB8FE38AF91A15D00E0574BF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRReferencePointExtensions_AttachReferencePoint_m41702FD5DC29CDAACB3AC157FABDF68BC697D78C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRReferencePointExtensions_DefaultAttachReferencePoint_m2BFDC9B9A85200B115298704ADE25A2CCD99C51A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRReferencePointExtensions_DefaultGetNativePtr_m6C3C666B8715402E89B978F41E2F902C71879B0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSessionExtensions_DefaultGetAvailabilityAsync_mE0BE46A1C4A79123C9D1565734DF84C5228F347F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSessionExtensions_DefaultGetNativePtr_m6B0F6E29E73FDF269A5434C5CCB7A4E69A227C0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSessionExtensions_DefaultInstallAsync_m3BADE4DD676472E851C6088B7DBFB3FD23EA51F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSessionExtensions_GetAvailabilityAsync_mBDD84001B8806A80783567D7CD410405BB78D963_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSessionExtensions_InstallAsync_m837E3721911B365903CB031F4D5DAF4B52132B84_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t AttachReferencePointDelegate_BeginInvoke_m7014463905CA0995A56F1FEC5E4C6E1492AE5176_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraIntrinsics_Equals_m33825CB12EB4F5696AC4CD300A8EBA6E931973FF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraIntrinsics_ToString_m39D54E4360AF0C3D18B1D21E20FDEDC23D312242_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TryGetColorCorrectionDelegate_BeginInvoke_m73D73992BB6E18B8DFB63D6C18D4157A709D98AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TryGetIntrinsicsDelegate_BeginInvoke_mCEF48EB60EEE5441A59A7C41843D8863DC603D8C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRCameraExtensions_ActivateExtensions_m5F7108D3549C87AA30672C2192B6739FE0FEFE79_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRCameraExtensions_DefaultGetNativePtr_m7FCC798A545F092E8E88C5E29055F3972211B922_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRCameraExtensions_RegisterCameraConfigApi_m568201BADAF07EF9263812CF8D2536805EF8A0EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRCameraExtensions_RegisterCameraImageApi_m83BD2D54ECEE79601C9542DC8C183FF4234DC6E1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRCameraExtensions_RegisterGetNativePtrHandler_m67E8B170C5D41F0AF47462B28177FA0B274258E8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRCameraExtensions_RegisterIsPermissionGrantedHandler_mED0452B2B64A07923D45071C3CE63EBD2035B6D5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRCameraExtensions_RegisterTryGetIntrinsicsHandler_mAEB9570EE00D6B928500CD6DB39BE7174C877EB6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRCameraExtensions_RegisterTrySetFocusModeHandler_mCD5A16427CD17181184A29700DA48887AF153440_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRCameraExtensions_SetDefaultDelegates_m9B88AD98143044329A6EB7B6AD86F61F2F8F1C63_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRCameraExtensions_TryGetColorCorrection_m4A597222BE9D634F970F7FF8AD2653A51C1EDE5A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRCameraExtensions_TrySetFocusMode_m1AB7ABC44233BC4E9A75F1DE743A35B5EEC46D53_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRCameraExtensions__cctor_m47EFC68F40A72702D571E5C4DEECD26517D2923D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRPlaneExtensions_ActivateExtensions_m954952222D0E4BF704FCD2418448A54731F866C3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRPlaneExtensions_DefaultGetNativePtr_m525A8606FE4568D1A90B5278EB8EF59D20013EBF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRPlaneExtensions_GetTrackingState_m13B5E36C047B76ED18FFDE896FCA71A709D972C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRPlaneExtensions_RegisterGetNativePtrHandler_mFF73D901D5DBBCB8E6AE8E9A624FCE7E75E4DE43_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRPlaneExtensions_RegisterGetTrackingStateHandler_m2CD375B880EC1FDD19F33675A299B2E8C59BC60D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRPlaneExtensions_RegisterTrySetPlaneDetectionFlagsHandler_mDC0A19589E7969643C0EF5920C16585E545D341F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRPlaneExtensions_SetDefaultDelegates_m2C55C67EFCB955C7FF07F4668CF1019AA74B2DB6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRPlaneExtensions_TrySetPlaneDetectionFlags_m6A51BFB0AF774F9DB8FE38AF91A15D00E0574BF4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRPlaneExtensions__cctor_mD169C15F21790AB0F32A615B6ADBC6CEAD741CDD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRReferencePointExtensions_ActivateExtensions_m4B1F40487B07ACC16BBBB83DAD89C8C0595B0D06_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRReferencePointExtensions_AttachReferencePoint_m41702FD5DC29CDAACB3AC157FABDF68BC697D78C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRReferencePointExtensions_DefaultAttachReferencePoint_m2BFDC9B9A85200B115298704ADE25A2CCD99C51A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRReferencePointExtensions_DefaultGetNativePtr_m6C3C666B8715402E89B978F41E2F902C71879B0E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRReferencePointExtensions_RegisterAttachReferencePointHandler_m9216ECCCA3A6714F54F5F9085272B2684B24A919_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRReferencePointExtensions_RegisterGetNativePtrHandler_m69E29238677EA66C8EB362530B077E661F0244E0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRReferencePointExtensions_SetDefaultDelegates_m02E9AD7315618F183A78ABFEEDCCB0F05D27436C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRReferencePointExtensions__cctor_m9C31DEF09451ECF082F769C895E9490C0C008D0F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSessionExtensions_ActivateExtensions_m691809B860CE64CA0DE345ECC9784D748495DD3B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSessionExtensions_DefaultGetAvailabilityAsync_mE0BE46A1C4A79123C9D1565734DF84C5228F347F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSessionExtensions_DefaultGetNativePtr_m6B0F6E29E73FDF269A5434C5CCB7A4E69A227C0D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSessionExtensions_DefaultInstallAsync_m3BADE4DD676472E851C6088B7DBFB3FD23EA51F8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSessionExtensions_GetAvailabilityAsync_mBDD84001B8806A80783567D7CD410405BB78D963_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSessionExtensions_InstallAsync_m837E3721911B365903CB031F4D5DAF4B52132B84_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSessionExtensions_RegisterGetAvailabilityAsyncHandler_mD8436B9D2786A1B6D358D389C861250181890618_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSessionExtensions_RegisterGetNativePtrHandler_m0F2BA7F0001105F840854F14E36B374EA02178EC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSessionExtensions_SetDefaultDelegates_mBDA2E1F28A46EDBE8B6565D7DD1740DA5EAB82AD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRSessionExtensions__cctor_m23B04D829DB835490B2740FA6E055B59D0758393_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t9235715C8404A6E9A7653F6E7FFDB5E36D9C2D95 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>>
struct  Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t162493FF8D40D2E77157E7E001EADF172DFA1F73* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tC4F9FFFD72E11075981DA5E560D635C0DAA7F8CC * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tD290457BF3088316AB47D391C751762A8B417EF3 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03, ___entries_1)); }
	inline EntryU5BU5D_t162493FF8D40D2E77157E7E001EADF172DFA1F73* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t162493FF8D40D2E77157E7E001EADF172DFA1F73** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t162493FF8D40D2E77157E7E001EADF172DFA1F73* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03, ___keys_7)); }
	inline KeyCollection_tC4F9FFFD72E11075981DA5E560D635C0DAA7F8CC * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC4F9FFFD72E11075981DA5E560D635C0DAA7F8CC ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC4F9FFFD72E11075981DA5E560D635C0DAA7F8CC * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03, ___values_8)); }
	inline ValueCollection_tD290457BF3088316AB47D391C751762A8B417EF3 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tD290457BF3088316AB47D391C751762A8B417EF3 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tD290457BF3088316AB47D391C751762A8B417EF3 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>>
struct  Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t5962468EF159B3D967CA1C44F2AD7160A4FAFE1B* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t29B05F528FF6BAA0C798ED2102CADD2FD8C0AFC3 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t2E1796BE5C722B7E7C705E287AAEC64674B7EDEB * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896, ___entries_1)); }
	inline EntryU5BU5D_t5962468EF159B3D967CA1C44F2AD7160A4FAFE1B* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t5962468EF159B3D967CA1C44F2AD7160A4FAFE1B** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t5962468EF159B3D967CA1C44F2AD7160A4FAFE1B* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896, ___keys_7)); }
	inline KeyCollection_t29B05F528FF6BAA0C798ED2102CADD2FD8C0AFC3 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t29B05F528FF6BAA0C798ED2102CADD2FD8C0AFC3 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t29B05F528FF6BAA0C798ED2102CADD2FD8C0AFC3 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896, ___values_8)); }
	inline ValueCollection_t2E1796BE5C722B7E7C705E287AAEC64674B7EDEB * get_values_8() const { return ___values_8; }
	inline ValueCollection_t2E1796BE5C722B7E7C705E287AAEC64674B7EDEB ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t2E1796BE5C722B7E7C705E287AAEC64674B7EDEB * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRSessionSubsystem,System.IntPtr>>
struct  Dictionary_2_tFE1C7A285CDDB61F4FD563A8D1EB39AF5A5A2B3E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t6E1CEBCBF749320C485C2245FF7D50F69EFFE492* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tC1A99E59B0B66C814EA07D19F7BE3D79DD449A5A * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t21663CF0D78C12C65BA224B7840E058DE64B13BA * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tFE1C7A285CDDB61F4FD563A8D1EB39AF5A5A2B3E, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tFE1C7A285CDDB61F4FD563A8D1EB39AF5A5A2B3E, ___entries_1)); }
	inline EntryU5BU5D_t6E1CEBCBF749320C485C2245FF7D50F69EFFE492* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t6E1CEBCBF749320C485C2245FF7D50F69EFFE492** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t6E1CEBCBF749320C485C2245FF7D50F69EFFE492* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tFE1C7A285CDDB61F4FD563A8D1EB39AF5A5A2B3E, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tFE1C7A285CDDB61F4FD563A8D1EB39AF5A5A2B3E, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tFE1C7A285CDDB61F4FD563A8D1EB39AF5A5A2B3E, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tFE1C7A285CDDB61F4FD563A8D1EB39AF5A5A2B3E, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tFE1C7A285CDDB61F4FD563A8D1EB39AF5A5A2B3E, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tFE1C7A285CDDB61F4FD563A8D1EB39AF5A5A2B3E, ___keys_7)); }
	inline KeyCollection_tC1A99E59B0B66C814EA07D19F7BE3D79DD449A5A * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC1A99E59B0B66C814EA07D19F7BE3D79DD449A5A ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC1A99E59B0B66C814EA07D19F7BE3D79DD449A5A * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tFE1C7A285CDDB61F4FD563A8D1EB39AF5A5A2B3E, ___values_8)); }
	inline ValueCollection_t21663CF0D78C12C65BA224B7840E058DE64B13BA * get_values_8() const { return ___values_8; }
	inline ValueCollection_t21663CF0D78C12C65BA224B7840E058DE64B13BA ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t21663CF0D78C12C65BA224B7840E058DE64B13BA * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tFE1C7A285CDDB61F4FD563A8D1EB39AF5A5A2B3E, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>>
struct  Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t469D348125B126C49059510BE71A9E1600D6C20F* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t3A8AD5163796157D83D8725A3BA9972174182214 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t6DC0CE5053BE142B12BBC96D627EDF6FF91602DD * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18, ___entries_1)); }
	inline EntryU5BU5D_t469D348125B126C49059510BE71A9E1600D6C20F* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t469D348125B126C49059510BE71A9E1600D6C20F** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t469D348125B126C49059510BE71A9E1600D6C20F* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18, ___keys_7)); }
	inline KeyCollection_t3A8AD5163796157D83D8725A3BA9972174182214 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t3A8AD5163796157D83D8725A3BA9972174182214 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t3A8AD5163796157D83D8725A3BA9972174182214 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18, ___values_8)); }
	inline ValueCollection_t6DC0CE5053BE142B12BBC96D627EDF6FF91602DD * get_values_8() const { return ___values_8; }
	inline ValueCollection_t6DC0CE5053BE142B12BBC96D627EDF6FF91602DD ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t6DC0CE5053BE142B12BBC96D627EDF6FF91602DD * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>
struct  Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tD832D6F1154750C3283E0BD6E34FD3A31DA4674E* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0BCD41E00BA42040D5CDF577C13B16681D114D1F * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t07668DF7A143F8771C3752CBF5F2FBF61325F900 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504, ___entries_1)); }
	inline EntryU5BU5D_tD832D6F1154750C3283E0BD6E34FD3A31DA4674E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tD832D6F1154750C3283E0BD6E34FD3A31DA4674E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tD832D6F1154750C3283E0BD6E34FD3A31DA4674E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504, ___keys_7)); }
	inline KeyCollection_t0BCD41E00BA42040D5CDF577C13B16681D114D1F * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0BCD41E00BA42040D5CDF577C13B16681D114D1F ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0BCD41E00BA42040D5CDF577C13B16681D114D1F * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504, ___values_8)); }
	inline ValueCollection_t07668DF7A143F8771C3752CBF5F2FBF61325F900 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t07668DF7A143F8771C3752CBF5F2FBF61325F900 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t07668DF7A143F8771C3752CBF5F2FBF61325F900 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>>
struct  Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tBB30C0B3FDABC0FCF8C418D957C03F6AA31ACB28* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t6F09D0786B5A5FD1DFAC7CFD5D81CE0B780FEA2D * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0256ACED6273BC4C59CE6D25177D76F2242076DB * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334, ___entries_1)); }
	inline EntryU5BU5D_tBB30C0B3FDABC0FCF8C418D957C03F6AA31ACB28* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tBB30C0B3FDABC0FCF8C418D957C03F6AA31ACB28** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tBB30C0B3FDABC0FCF8C418D957C03F6AA31ACB28* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334, ___keys_7)); }
	inline KeyCollection_t6F09D0786B5A5FD1DFAC7CFD5D81CE0B780FEA2D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t6F09D0786B5A5FD1DFAC7CFD5D81CE0B780FEA2D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t6F09D0786B5A5FD1DFAC7CFD5D81CE0B780FEA2D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334, ___values_8)); }
	inline ValueCollection_t0256ACED6273BC4C59CE6D25177D76F2242076DB * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0256ACED6273BC4C59CE6D25177D76F2242076DB ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0256ACED6273BC4C59CE6D25177D76F2242076DB * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>>
struct  Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t7E58C66CB559CD7A1502FEF8784F392E08404643* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t8ECA5DC2C85283F451C1CDEB631838CBDDE538DE * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t355C0EE0E07CF666F70A46B14451B6554C01DAA2 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C, ___entries_1)); }
	inline EntryU5BU5D_t7E58C66CB559CD7A1502FEF8784F392E08404643* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t7E58C66CB559CD7A1502FEF8784F392E08404643** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t7E58C66CB559CD7A1502FEF8784F392E08404643* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C, ___keys_7)); }
	inline KeyCollection_t8ECA5DC2C85283F451C1CDEB631838CBDDE538DE * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t8ECA5DC2C85283F451C1CDEB631838CBDDE538DE ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t8ECA5DC2C85283F451C1CDEB631838CBDDE538DE * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C, ___values_8)); }
	inline ValueCollection_t355C0EE0E07CF666F70A46B14451B6554C01DAA2 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t355C0EE0E07CF666F70A46B14451B6554C01DAA2 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t355C0EE0E07CF666F70A46B14451B6554C01DAA2 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>
struct  Dictionary_2_tF85F2837800957A1F17D2C5FD4CA7D5BC9609C8E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tFE6E29B69C99C42E6162AFABDE03563CF2760623* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t3F062DB1CD052AEA55B50F3113006411D84F050B * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tCEE3515B4B13118A6069991BA515B42301AE113D * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tF85F2837800957A1F17D2C5FD4CA7D5BC9609C8E, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tF85F2837800957A1F17D2C5FD4CA7D5BC9609C8E, ___entries_1)); }
	inline EntryU5BU5D_tFE6E29B69C99C42E6162AFABDE03563CF2760623* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tFE6E29B69C99C42E6162AFABDE03563CF2760623** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tFE6E29B69C99C42E6162AFABDE03563CF2760623* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tF85F2837800957A1F17D2C5FD4CA7D5BC9609C8E, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tF85F2837800957A1F17D2C5FD4CA7D5BC9609C8E, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tF85F2837800957A1F17D2C5FD4CA7D5BC9609C8E, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tF85F2837800957A1F17D2C5FD4CA7D5BC9609C8E, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tF85F2837800957A1F17D2C5FD4CA7D5BC9609C8E, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tF85F2837800957A1F17D2C5FD4CA7D5BC9609C8E, ___keys_7)); }
	inline KeyCollection_t3F062DB1CD052AEA55B50F3113006411D84F050B * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t3F062DB1CD052AEA55B50F3113006411D84F050B ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t3F062DB1CD052AEA55B50F3113006411D84F050B * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tF85F2837800957A1F17D2C5FD4CA7D5BC9609C8E, ___values_8)); }
	inline ValueCollection_tCEE3515B4B13118A6069991BA515B42301AE113D * get_values_8() const { return ___values_8; }
	inline ValueCollection_tCEE3515B4B13118A6069991BA515B42301AE113D ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tCEE3515B4B13118A6069991BA515B42301AE113D * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tF85F2837800957A1F17D2C5FD4CA7D5BC9609C8E, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.ICameraConfigApi>
struct  Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t48F0EFB6565F568C4B1DE0585AD9A506A0520399* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tCAC1FEE01D6452A8E1716EB8FB0EAFF1FC29BD56 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t3B69566DAAFC8490A363E2DABF483C20229FE4FF * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E, ___entries_1)); }
	inline EntryU5BU5D_t48F0EFB6565F568C4B1DE0585AD9A506A0520399* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t48F0EFB6565F568C4B1DE0585AD9A506A0520399** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t48F0EFB6565F568C4B1DE0585AD9A506A0520399* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E, ___keys_7)); }
	inline KeyCollection_tCAC1FEE01D6452A8E1716EB8FB0EAFF1FC29BD56 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tCAC1FEE01D6452A8E1716EB8FB0EAFF1FC29BD56 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tCAC1FEE01D6452A8E1716EB8FB0EAFF1FC29BD56 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E, ___values_8)); }
	inline ValueCollection_t3B69566DAAFC8490A363E2DABF483C20229FE4FF * get_values_8() const { return ___values_8; }
	inline ValueCollection_t3B69566DAAFC8490A363E2DABF483C20229FE4FF ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t3B69566DAAFC8490A363E2DABF483C20229FE4FF * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.ICameraImageApi>
struct  Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t8ADFF70B68C844C34239D73E0AB4DE423C0D94E0* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tC64CE5D76EF2BF0EDB7135D1EE2CDADCEC4D8434 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t93F2F433ED4A5B2CCB54F8DF996B7FEABE050861 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C, ___entries_1)); }
	inline EntryU5BU5D_t8ADFF70B68C844C34239D73E0AB4DE423C0D94E0* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t8ADFF70B68C844C34239D73E0AB4DE423C0D94E0** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t8ADFF70B68C844C34239D73E0AB4DE423C0D94E0* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C, ___keys_7)); }
	inline KeyCollection_tC64CE5D76EF2BF0EDB7135D1EE2CDADCEC4D8434 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC64CE5D76EF2BF0EDB7135D1EE2CDADCEC4D8434 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC64CE5D76EF2BF0EDB7135D1EE2CDADCEC4D8434 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C, ___values_8)); }
	inline ValueCollection_t93F2F433ED4A5B2CCB54F8DF996B7FEABE050861 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t93F2F433ED4A5B2CCB54F8DF996B7FEABE050861 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t93F2F433ED4A5B2CCB54F8DF996B7FEABE050861 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetColorCorrectionDelegate>
struct  Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t3630C260B9779DE3A20625048A8A8632F144AB4E* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tD54A02F4FF47ED3CCDE0F6E0DC3921C3FB7C3F57 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tD48F2745F2FB191DBA967A00A112D8D50CB48FDD * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2, ___entries_1)); }
	inline EntryU5BU5D_t3630C260B9779DE3A20625048A8A8632F144AB4E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t3630C260B9779DE3A20625048A8A8632F144AB4E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t3630C260B9779DE3A20625048A8A8632F144AB4E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2, ___keys_7)); }
	inline KeyCollection_tD54A02F4FF47ED3CCDE0F6E0DC3921C3FB7C3F57 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tD54A02F4FF47ED3CCDE0F6E0DC3921C3FB7C3F57 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tD54A02F4FF47ED3CCDE0F6E0DC3921C3FB7C3F57 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2, ___values_8)); }
	inline ValueCollection_tD48F2745F2FB191DBA967A00A112D8D50CB48FDD * get_values_8() const { return ___values_8; }
	inline ValueCollection_tD48F2745F2FB191DBA967A00A112D8D50CB48FDD ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tD48F2745F2FB191DBA967A00A112D8D50CB48FDD * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetIntrinsicsDelegate>
struct  Dictionary_2_tE4065ACCCAB4F818974D5F60A984FEDECA6AFBD9  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t0BE6DEF17F36C4E61F2CF620D331583653EC34A9* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tFD867702B09463FAE0F466A4A03810D321A780F7 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t86602DA7B16CF9E6412E392921D395A5FDE9DD93 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tE4065ACCCAB4F818974D5F60A984FEDECA6AFBD9, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tE4065ACCCAB4F818974D5F60A984FEDECA6AFBD9, ___entries_1)); }
	inline EntryU5BU5D_t0BE6DEF17F36C4E61F2CF620D331583653EC34A9* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t0BE6DEF17F36C4E61F2CF620D331583653EC34A9** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t0BE6DEF17F36C4E61F2CF620D331583653EC34A9* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tE4065ACCCAB4F818974D5F60A984FEDECA6AFBD9, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tE4065ACCCAB4F818974D5F60A984FEDECA6AFBD9, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tE4065ACCCAB4F818974D5F60A984FEDECA6AFBD9, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tE4065ACCCAB4F818974D5F60A984FEDECA6AFBD9, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tE4065ACCCAB4F818974D5F60A984FEDECA6AFBD9, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tE4065ACCCAB4F818974D5F60A984FEDECA6AFBD9, ___keys_7)); }
	inline KeyCollection_tFD867702B09463FAE0F466A4A03810D321A780F7 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tFD867702B09463FAE0F466A4A03810D321A780F7 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tFD867702B09463FAE0F466A4A03810D321A780F7 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tE4065ACCCAB4F818974D5F60A984FEDECA6AFBD9, ___values_8)); }
	inline ValueCollection_t86602DA7B16CF9E6412E392921D395A5FDE9DD93 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t86602DA7B16CF9E6412E392921D395A5FDE9DD93 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t86602DA7B16CF9E6412E392921D395A5FDE9DD93 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tE4065ACCCAB4F818974D5F60A984FEDECA6AFBD9, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRReferencePointExtensions_AttachReferencePointDelegate>
struct  Dictionary_2_t2E0DF86FACC6F978A4B05B1BDDA0DEEE82FCD0B5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t21FDAFBBE224D6C5560821B9E811A43DBA5D8E44* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tA0148910B1B1E7CDBB9B918CD3078137FDF969CA * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t8B001D4816849C86B076EEABF073A405791418F8 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t2E0DF86FACC6F978A4B05B1BDDA0DEEE82FCD0B5, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t2E0DF86FACC6F978A4B05B1BDDA0DEEE82FCD0B5, ___entries_1)); }
	inline EntryU5BU5D_t21FDAFBBE224D6C5560821B9E811A43DBA5D8E44* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t21FDAFBBE224D6C5560821B9E811A43DBA5D8E44** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t21FDAFBBE224D6C5560821B9E811A43DBA5D8E44* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t2E0DF86FACC6F978A4B05B1BDDA0DEEE82FCD0B5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t2E0DF86FACC6F978A4B05B1BDDA0DEEE82FCD0B5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2E0DF86FACC6F978A4B05B1BDDA0DEEE82FCD0B5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2E0DF86FACC6F978A4B05B1BDDA0DEEE82FCD0B5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2E0DF86FACC6F978A4B05B1BDDA0DEEE82FCD0B5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2E0DF86FACC6F978A4B05B1BDDA0DEEE82FCD0B5, ___keys_7)); }
	inline KeyCollection_tA0148910B1B1E7CDBB9B918CD3078137FDF969CA * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tA0148910B1B1E7CDBB9B918CD3078137FDF969CA ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tA0148910B1B1E7CDBB9B918CD3078137FDF969CA * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2E0DF86FACC6F978A4B05B1BDDA0DEEE82FCD0B5, ___values_8)); }
	inline ValueCollection_t8B001D4816849C86B076EEABF073A405791418F8 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t8B001D4816849C86B076EEABF073A405791418F8 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t8B001D4816849C86B076EEABF073A405791418F8 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2E0DF86FACC6F978A4B05B1BDDA0DEEE82FCD0B5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions_AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>>
struct  Dictionary_2_t29A0B4802803E068766061600B339B644FF24895  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t2EFE9AE27326FE1624949581FA5461A804441338* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tB9BABC6B56A8EE280DC570268508F0073E962D73 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tC77DDFD684CA0A90EEC04E19E23563EF04D43166 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t29A0B4802803E068766061600B339B644FF24895, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t29A0B4802803E068766061600B339B644FF24895, ___entries_1)); }
	inline EntryU5BU5D_t2EFE9AE27326FE1624949581FA5461A804441338* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t2EFE9AE27326FE1624949581FA5461A804441338** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t2EFE9AE27326FE1624949581FA5461A804441338* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t29A0B4802803E068766061600B339B644FF24895, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t29A0B4802803E068766061600B339B644FF24895, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t29A0B4802803E068766061600B339B644FF24895, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t29A0B4802803E068766061600B339B644FF24895, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t29A0B4802803E068766061600B339B644FF24895, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t29A0B4802803E068766061600B339B644FF24895, ___keys_7)); }
	inline KeyCollection_tB9BABC6B56A8EE280DC570268508F0073E962D73 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tB9BABC6B56A8EE280DC570268508F0073E962D73 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tB9BABC6B56A8EE280DC570268508F0073E962D73 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t29A0B4802803E068766061600B339B644FF24895, ___values_8)); }
	inline ValueCollection_tC77DDFD684CA0A90EEC04E19E23563EF04D43166 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tC77DDFD684CA0A90EEC04E19E23563EF04D43166 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tC77DDFD684CA0A90EEC04E19E23563EF04D43166 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t29A0B4802803E068766061600B339B644FF24895, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions_AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>>
struct  Dictionary_2_t940582C11B83AD84AC1F67AF3F3F5FAE64B82503  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t7F3371AF37481F1BC610A9C7E4B01B692D05BC21* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t5AFE96BB01085F93D64BC0C5E58A22815034FA9C * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t332DA323A4C7E2C490D27A3428D555019EA14149 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t940582C11B83AD84AC1F67AF3F3F5FAE64B82503, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t940582C11B83AD84AC1F67AF3F3F5FAE64B82503, ___entries_1)); }
	inline EntryU5BU5D_t7F3371AF37481F1BC610A9C7E4B01B692D05BC21* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t7F3371AF37481F1BC610A9C7E4B01B692D05BC21** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t7F3371AF37481F1BC610A9C7E4B01B692D05BC21* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t940582C11B83AD84AC1F67AF3F3F5FAE64B82503, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t940582C11B83AD84AC1F67AF3F3F5FAE64B82503, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t940582C11B83AD84AC1F67AF3F3F5FAE64B82503, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t940582C11B83AD84AC1F67AF3F3F5FAE64B82503, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t940582C11B83AD84AC1F67AF3F3F5FAE64B82503, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t940582C11B83AD84AC1F67AF3F3F5FAE64B82503, ___keys_7)); }
	inline KeyCollection_t5AFE96BB01085F93D64BC0C5E58A22815034FA9C * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t5AFE96BB01085F93D64BC0C5E58A22815034FA9C ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t5AFE96BB01085F93D64BC0C5E58A22815034FA9C * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t940582C11B83AD84AC1F67AF3F3F5FAE64B82503, ___values_8)); }
	inline ValueCollection_t332DA323A4C7E2C490D27A3428D555019EA14149 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t332DA323A4C7E2C490D27A3428D555019EA14149 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t332DA323A4C7E2C490D27A3428D555019EA14149 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t940582C11B83AD84AC1F67AF3F3F5FAE64B82503, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
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

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARExtensions.DefaultCameraConfigApi
struct  DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARExtensions.DefaultCameraImageApi
struct  DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARExtensions.RegistrationHelper
struct  RegistrationHelper_t0925D2AC89FBDCEB2FA94AEDADCBA81670F5B531  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARExtensions.SessionAvailabilityExtensions
struct  SessionAvailabilityExtensions_tE9EC580D14C93F2A5732599A5A7F0435EC737929  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARExtensions.XRCameraExtensions
struct  XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D  : public RuntimeObject
{
public:

public:
};

struct XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields
{
public:
	// System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean> UnityEngine.XR.ARExtensions.XRCameraExtensions::s_IsPermissionGrantedDelegate
	Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8 * ___s_IsPermissionGrantedDelegate_0;
	// UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetColorCorrectionDelegate UnityEngine.XR.ARExtensions.XRCameraExtensions::s_TryGetColorCorrectionDelegate
	TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * ___s_TryGetColorCorrectionDelegate_1;
	// System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr> UnityEngine.XR.ARExtensions.XRCameraExtensions::s_GetNativePtrDelegate
	Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E * ___s_GetNativePtrDelegate_2;
	// UnityEngine.XR.ARExtensions.ICameraImageApi UnityEngine.XR.ARExtensions.XRCameraExtensions::s_CameraImageApi
	RuntimeObject* ___s_CameraImageApi_3;
	// UnityEngine.XR.ARExtensions.DefaultCameraImageApi UnityEngine.XR.ARExtensions.XRCameraExtensions::s_DefaultCameraImageApi
	DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB * ___s_DefaultCameraImageApi_4;
	// UnityEngine.XR.ARExtensions.ICameraConfigApi UnityEngine.XR.ARExtensions.XRCameraExtensions::s_CameraConfigApi
	RuntimeObject* ___s_CameraConfigApi_5;
	// UnityEngine.XR.ARExtensions.DefaultCameraConfigApi UnityEngine.XR.ARExtensions.XRCameraExtensions::s_DefaultCameraConfigApi
	DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091 * ___s_DefaultCameraConfigApi_6;
	// System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean> UnityEngine.XR.ARExtensions.XRCameraExtensions::s_TrySetFocusModeDelegate
	Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 * ___s_TrySetFocusModeDelegate_7;
	// UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetIntrinsicsDelegate UnityEngine.XR.ARExtensions.XRCameraExtensions::s_TryGetIntrinsicsDelegate
	TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 * ___s_TryGetIntrinsicsDelegate_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>> UnityEngine.XR.ARExtensions.XRCameraExtensions::s_IsPermissionGrantedDelegates
	Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03 * ___s_IsPermissionGrantedDelegates_9;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetColorCorrectionDelegate> UnityEngine.XR.ARExtensions.XRCameraExtensions::s_TryGetColorCorrectionDelegates
	Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2 * ___s_TryGetColorCorrectionDelegates_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>> UnityEngine.XR.ARExtensions.XRCameraExtensions::s_GetNativePtrDelegates
	Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896 * ___s_GetNativePtrDelegates_11;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.ICameraImageApi> UnityEngine.XR.ARExtensions.XRCameraExtensions::s_CameraImageApis
	Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C * ___s_CameraImageApis_12;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.ICameraConfigApi> UnityEngine.XR.ARExtensions.XRCameraExtensions::s_CameraConfigApis
	Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E * ___s_CameraConfigApis_13;
	// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>> UnityEngine.XR.ARExtensions.XRCameraExtensions::s_TrySetFocusModeDelegates
	Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18 * ___s_TrySetFocusModeDelegates_14;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetIntrinsicsDelegate> UnityEngine.XR.ARExtensions.XRCameraExtensions::s_TryGetIntrinsicsDelegates
	Dictionary_2_tE4065ACCCAB4F818974D5F60A984FEDECA6AFBD9 * ___s_TryGetIntrinsicsDelegates_15;

public:
	inline static int32_t get_offset_of_s_IsPermissionGrantedDelegate_0() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_IsPermissionGrantedDelegate_0)); }
	inline Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8 * get_s_IsPermissionGrantedDelegate_0() const { return ___s_IsPermissionGrantedDelegate_0; }
	inline Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8 ** get_address_of_s_IsPermissionGrantedDelegate_0() { return &___s_IsPermissionGrantedDelegate_0; }
	inline void set_s_IsPermissionGrantedDelegate_0(Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8 * value)
	{
		___s_IsPermissionGrantedDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsPermissionGrantedDelegate_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_TryGetColorCorrectionDelegate_1() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_TryGetColorCorrectionDelegate_1)); }
	inline TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * get_s_TryGetColorCorrectionDelegate_1() const { return ___s_TryGetColorCorrectionDelegate_1; }
	inline TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 ** get_address_of_s_TryGetColorCorrectionDelegate_1() { return &___s_TryGetColorCorrectionDelegate_1; }
	inline void set_s_TryGetColorCorrectionDelegate_1(TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * value)
	{
		___s_TryGetColorCorrectionDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TryGetColorCorrectionDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_GetNativePtrDelegate_2() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_GetNativePtrDelegate_2)); }
	inline Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E * get_s_GetNativePtrDelegate_2() const { return ___s_GetNativePtrDelegate_2; }
	inline Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E ** get_address_of_s_GetNativePtrDelegate_2() { return &___s_GetNativePtrDelegate_2; }
	inline void set_s_GetNativePtrDelegate_2(Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E * value)
	{
		___s_GetNativePtrDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_GetNativePtrDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_CameraImageApi_3() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_CameraImageApi_3)); }
	inline RuntimeObject* get_s_CameraImageApi_3() const { return ___s_CameraImageApi_3; }
	inline RuntimeObject** get_address_of_s_CameraImageApi_3() { return &___s_CameraImageApi_3; }
	inline void set_s_CameraImageApi_3(RuntimeObject* value)
	{
		___s_CameraImageApi_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CameraImageApi_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultCameraImageApi_4() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_DefaultCameraImageApi_4)); }
	inline DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB * get_s_DefaultCameraImageApi_4() const { return ___s_DefaultCameraImageApi_4; }
	inline DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB ** get_address_of_s_DefaultCameraImageApi_4() { return &___s_DefaultCameraImageApi_4; }
	inline void set_s_DefaultCameraImageApi_4(DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB * value)
	{
		___s_DefaultCameraImageApi_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultCameraImageApi_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_CameraConfigApi_5() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_CameraConfigApi_5)); }
	inline RuntimeObject* get_s_CameraConfigApi_5() const { return ___s_CameraConfigApi_5; }
	inline RuntimeObject** get_address_of_s_CameraConfigApi_5() { return &___s_CameraConfigApi_5; }
	inline void set_s_CameraConfigApi_5(RuntimeObject* value)
	{
		___s_CameraConfigApi_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CameraConfigApi_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultCameraConfigApi_6() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_DefaultCameraConfigApi_6)); }
	inline DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091 * get_s_DefaultCameraConfigApi_6() const { return ___s_DefaultCameraConfigApi_6; }
	inline DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091 ** get_address_of_s_DefaultCameraConfigApi_6() { return &___s_DefaultCameraConfigApi_6; }
	inline void set_s_DefaultCameraConfigApi_6(DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091 * value)
	{
		___s_DefaultCameraConfigApi_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultCameraConfigApi_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_TrySetFocusModeDelegate_7() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_TrySetFocusModeDelegate_7)); }
	inline Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 * get_s_TrySetFocusModeDelegate_7() const { return ___s_TrySetFocusModeDelegate_7; }
	inline Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 ** get_address_of_s_TrySetFocusModeDelegate_7() { return &___s_TrySetFocusModeDelegate_7; }
	inline void set_s_TrySetFocusModeDelegate_7(Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 * value)
	{
		___s_TrySetFocusModeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrySetFocusModeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_TryGetIntrinsicsDelegate_8() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_TryGetIntrinsicsDelegate_8)); }
	inline TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 * get_s_TryGetIntrinsicsDelegate_8() const { return ___s_TryGetIntrinsicsDelegate_8; }
	inline TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 ** get_address_of_s_TryGetIntrinsicsDelegate_8() { return &___s_TryGetIntrinsicsDelegate_8; }
	inline void set_s_TryGetIntrinsicsDelegate_8(TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 * value)
	{
		___s_TryGetIntrinsicsDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TryGetIntrinsicsDelegate_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsPermissionGrantedDelegates_9() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_IsPermissionGrantedDelegates_9)); }
	inline Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03 * get_s_IsPermissionGrantedDelegates_9() const { return ___s_IsPermissionGrantedDelegates_9; }
	inline Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03 ** get_address_of_s_IsPermissionGrantedDelegates_9() { return &___s_IsPermissionGrantedDelegates_9; }
	inline void set_s_IsPermissionGrantedDelegates_9(Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03 * value)
	{
		___s_IsPermissionGrantedDelegates_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsPermissionGrantedDelegates_9), (void*)value);
	}

	inline static int32_t get_offset_of_s_TryGetColorCorrectionDelegates_10() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_TryGetColorCorrectionDelegates_10)); }
	inline Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2 * get_s_TryGetColorCorrectionDelegates_10() const { return ___s_TryGetColorCorrectionDelegates_10; }
	inline Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2 ** get_address_of_s_TryGetColorCorrectionDelegates_10() { return &___s_TryGetColorCorrectionDelegates_10; }
	inline void set_s_TryGetColorCorrectionDelegates_10(Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2 * value)
	{
		___s_TryGetColorCorrectionDelegates_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TryGetColorCorrectionDelegates_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_GetNativePtrDelegates_11() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_GetNativePtrDelegates_11)); }
	inline Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896 * get_s_GetNativePtrDelegates_11() const { return ___s_GetNativePtrDelegates_11; }
	inline Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896 ** get_address_of_s_GetNativePtrDelegates_11() { return &___s_GetNativePtrDelegates_11; }
	inline void set_s_GetNativePtrDelegates_11(Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896 * value)
	{
		___s_GetNativePtrDelegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_GetNativePtrDelegates_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_CameraImageApis_12() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_CameraImageApis_12)); }
	inline Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C * get_s_CameraImageApis_12() const { return ___s_CameraImageApis_12; }
	inline Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C ** get_address_of_s_CameraImageApis_12() { return &___s_CameraImageApis_12; }
	inline void set_s_CameraImageApis_12(Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C * value)
	{
		___s_CameraImageApis_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CameraImageApis_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_CameraConfigApis_13() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_CameraConfigApis_13)); }
	inline Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E * get_s_CameraConfigApis_13() const { return ___s_CameraConfigApis_13; }
	inline Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E ** get_address_of_s_CameraConfigApis_13() { return &___s_CameraConfigApis_13; }
	inline void set_s_CameraConfigApis_13(Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E * value)
	{
		___s_CameraConfigApis_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CameraConfigApis_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_TrySetFocusModeDelegates_14() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_TrySetFocusModeDelegates_14)); }
	inline Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18 * get_s_TrySetFocusModeDelegates_14() const { return ___s_TrySetFocusModeDelegates_14; }
	inline Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18 ** get_address_of_s_TrySetFocusModeDelegates_14() { return &___s_TrySetFocusModeDelegates_14; }
	inline void set_s_TrySetFocusModeDelegates_14(Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18 * value)
	{
		___s_TrySetFocusModeDelegates_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrySetFocusModeDelegates_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_TryGetIntrinsicsDelegates_15() { return static_cast<int32_t>(offsetof(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields, ___s_TryGetIntrinsicsDelegates_15)); }
	inline Dictionary_2_tE4065ACCCAB4F818974D5F60A984FEDECA6AFBD9 * get_s_TryGetIntrinsicsDelegates_15() const { return ___s_TryGetIntrinsicsDelegates_15; }
	inline Dictionary_2_tE4065ACCCAB4F818974D5F60A984FEDECA6AFBD9 ** get_address_of_s_TryGetIntrinsicsDelegates_15() { return &___s_TryGetIntrinsicsDelegates_15; }
	inline void set_s_TryGetIntrinsicsDelegates_15(Dictionary_2_tE4065ACCCAB4F818974D5F60A984FEDECA6AFBD9 * value)
	{
		___s_TryGetIntrinsicsDelegates_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TryGetIntrinsicsDelegates_15), (void*)value);
	}
};


// UnityEngine.XR.ARExtensions.XRPlaneExtensions
struct  XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE  : public RuntimeObject
{
public:

public:
};

struct XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields
{
public:
	// System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr> UnityEngine.XR.ARExtensions.XRPlaneExtensions::s_GetNativePtrDelegate
	Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828 * ___s_GetNativePtrDelegate_0;
	// System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState> UnityEngine.XR.ARExtensions.XRPlaneExtensions::s_GetTrackingStateDelegate
	Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 * ___s_GetTrackingStateDelegate_1;
	// System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean> UnityEngine.XR.ARExtensions.XRPlaneExtensions::s_TrySetPlaneDetectionFlagsDelegate
	Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 * ___s_TrySetPlaneDetectionFlagsDelegate_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>> UnityEngine.XR.ARExtensions.XRPlaneExtensions::s_GetNativePtrDelegates
	Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504 * ___s_GetNativePtrDelegates_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>> UnityEngine.XR.ARExtensions.XRPlaneExtensions::s_GetTrackingStateDelegates
	Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334 * ___s_GetTrackingStateDelegates_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>> UnityEngine.XR.ARExtensions.XRPlaneExtensions::s_TrySetPlaneDetectionFlagsDelegates
	Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C * ___s_TrySetPlaneDetectionFlagsDelegates_5;

public:
	inline static int32_t get_offset_of_s_GetNativePtrDelegate_0() { return static_cast<int32_t>(offsetof(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields, ___s_GetNativePtrDelegate_0)); }
	inline Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828 * get_s_GetNativePtrDelegate_0() const { return ___s_GetNativePtrDelegate_0; }
	inline Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828 ** get_address_of_s_GetNativePtrDelegate_0() { return &___s_GetNativePtrDelegate_0; }
	inline void set_s_GetNativePtrDelegate_0(Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828 * value)
	{
		___s_GetNativePtrDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_GetNativePtrDelegate_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_GetTrackingStateDelegate_1() { return static_cast<int32_t>(offsetof(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields, ___s_GetTrackingStateDelegate_1)); }
	inline Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 * get_s_GetTrackingStateDelegate_1() const { return ___s_GetTrackingStateDelegate_1; }
	inline Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 ** get_address_of_s_GetTrackingStateDelegate_1() { return &___s_GetTrackingStateDelegate_1; }
	inline void set_s_GetTrackingStateDelegate_1(Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 * value)
	{
		___s_GetTrackingStateDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_GetTrackingStateDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_TrySetPlaneDetectionFlagsDelegate_2() { return static_cast<int32_t>(offsetof(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields, ___s_TrySetPlaneDetectionFlagsDelegate_2)); }
	inline Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 * get_s_TrySetPlaneDetectionFlagsDelegate_2() const { return ___s_TrySetPlaneDetectionFlagsDelegate_2; }
	inline Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 ** get_address_of_s_TrySetPlaneDetectionFlagsDelegate_2() { return &___s_TrySetPlaneDetectionFlagsDelegate_2; }
	inline void set_s_TrySetPlaneDetectionFlagsDelegate_2(Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 * value)
	{
		___s_TrySetPlaneDetectionFlagsDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrySetPlaneDetectionFlagsDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_GetNativePtrDelegates_3() { return static_cast<int32_t>(offsetof(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields, ___s_GetNativePtrDelegates_3)); }
	inline Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504 * get_s_GetNativePtrDelegates_3() const { return ___s_GetNativePtrDelegates_3; }
	inline Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504 ** get_address_of_s_GetNativePtrDelegates_3() { return &___s_GetNativePtrDelegates_3; }
	inline void set_s_GetNativePtrDelegates_3(Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504 * value)
	{
		___s_GetNativePtrDelegates_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_GetNativePtrDelegates_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_GetTrackingStateDelegates_4() { return static_cast<int32_t>(offsetof(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields, ___s_GetTrackingStateDelegates_4)); }
	inline Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334 * get_s_GetTrackingStateDelegates_4() const { return ___s_GetTrackingStateDelegates_4; }
	inline Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334 ** get_address_of_s_GetTrackingStateDelegates_4() { return &___s_GetTrackingStateDelegates_4; }
	inline void set_s_GetTrackingStateDelegates_4(Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334 * value)
	{
		___s_GetTrackingStateDelegates_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_GetTrackingStateDelegates_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_TrySetPlaneDetectionFlagsDelegates_5() { return static_cast<int32_t>(offsetof(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields, ___s_TrySetPlaneDetectionFlagsDelegates_5)); }
	inline Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C * get_s_TrySetPlaneDetectionFlagsDelegates_5() const { return ___s_TrySetPlaneDetectionFlagsDelegates_5; }
	inline Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C ** get_address_of_s_TrySetPlaneDetectionFlagsDelegates_5() { return &___s_TrySetPlaneDetectionFlagsDelegates_5; }
	inline void set_s_TrySetPlaneDetectionFlagsDelegates_5(Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C * value)
	{
		___s_TrySetPlaneDetectionFlagsDelegates_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrySetPlaneDetectionFlagsDelegates_5), (void*)value);
	}
};


// UnityEngine.XR.ARExtensions.XRReferencePointExtensions
struct  XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D  : public RuntimeObject
{
public:

public:
};

struct XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_StaticFields
{
public:
	// UnityEngine.XR.ARExtensions.XRReferencePointExtensions_AttachReferencePointDelegate UnityEngine.XR.ARExtensions.XRReferencePointExtensions::s_AttachReferencePointDelegate
	AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * ___s_AttachReferencePointDelegate_0;
	// System.Func`3<UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr> UnityEngine.XR.ARExtensions.XRReferencePointExtensions::s_GetNativePtrDelegate
	Func_3_t5F7E105DF840E21AC18D244B52CBAC733FF4DAFB * ___s_GetNativePtrDelegate_1;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRReferencePointExtensions_AttachReferencePointDelegate> UnityEngine.XR.ARExtensions.XRReferencePointExtensions::s_AttachReferencePointDelegates
	Dictionary_2_t2E0DF86FACC6F978A4B05B1BDDA0DEEE82FCD0B5 * ___s_AttachReferencePointDelegates_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>> UnityEngine.XR.ARExtensions.XRReferencePointExtensions::s_GetNativePtrDelegates
	Dictionary_2_tF85F2837800957A1F17D2C5FD4CA7D5BC9609C8E * ___s_GetNativePtrDelegates_3;

public:
	inline static int32_t get_offset_of_s_AttachReferencePointDelegate_0() { return static_cast<int32_t>(offsetof(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_StaticFields, ___s_AttachReferencePointDelegate_0)); }
	inline AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * get_s_AttachReferencePointDelegate_0() const { return ___s_AttachReferencePointDelegate_0; }
	inline AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF ** get_address_of_s_AttachReferencePointDelegate_0() { return &___s_AttachReferencePointDelegate_0; }
	inline void set_s_AttachReferencePointDelegate_0(AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * value)
	{
		___s_AttachReferencePointDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_AttachReferencePointDelegate_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_GetNativePtrDelegate_1() { return static_cast<int32_t>(offsetof(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_StaticFields, ___s_GetNativePtrDelegate_1)); }
	inline Func_3_t5F7E105DF840E21AC18D244B52CBAC733FF4DAFB * get_s_GetNativePtrDelegate_1() const { return ___s_GetNativePtrDelegate_1; }
	inline Func_3_t5F7E105DF840E21AC18D244B52CBAC733FF4DAFB ** get_address_of_s_GetNativePtrDelegate_1() { return &___s_GetNativePtrDelegate_1; }
	inline void set_s_GetNativePtrDelegate_1(Func_3_t5F7E105DF840E21AC18D244B52CBAC733FF4DAFB * value)
	{
		___s_GetNativePtrDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_GetNativePtrDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_AttachReferencePointDelegates_2() { return static_cast<int32_t>(offsetof(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_StaticFields, ___s_AttachReferencePointDelegates_2)); }
	inline Dictionary_2_t2E0DF86FACC6F978A4B05B1BDDA0DEEE82FCD0B5 * get_s_AttachReferencePointDelegates_2() const { return ___s_AttachReferencePointDelegates_2; }
	inline Dictionary_2_t2E0DF86FACC6F978A4B05B1BDDA0DEEE82FCD0B5 ** get_address_of_s_AttachReferencePointDelegates_2() { return &___s_AttachReferencePointDelegates_2; }
	inline void set_s_AttachReferencePointDelegates_2(Dictionary_2_t2E0DF86FACC6F978A4B05B1BDDA0DEEE82FCD0B5 * value)
	{
		___s_AttachReferencePointDelegates_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_AttachReferencePointDelegates_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_GetNativePtrDelegates_3() { return static_cast<int32_t>(offsetof(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_StaticFields, ___s_GetNativePtrDelegates_3)); }
	inline Dictionary_2_tF85F2837800957A1F17D2C5FD4CA7D5BC9609C8E * get_s_GetNativePtrDelegates_3() const { return ___s_GetNativePtrDelegates_3; }
	inline Dictionary_2_tF85F2837800957A1F17D2C5FD4CA7D5BC9609C8E ** get_address_of_s_GetNativePtrDelegates_3() { return &___s_GetNativePtrDelegates_3; }
	inline void set_s_GetNativePtrDelegates_3(Dictionary_2_tF85F2837800957A1F17D2C5FD4CA7D5BC9609C8E * value)
	{
		___s_GetNativePtrDelegates_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_GetNativePtrDelegates_3), (void*)value);
	}
};


// UnityEngine.XR.ARExtensions.XRSessionExtensions
struct  XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49  : public RuntimeObject
{
public:

public:
};

struct XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields
{
public:
	// UnityEngine.XR.ARExtensions.XRSessionExtensions_AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus> UnityEngine.XR.ARExtensions.XRSessionExtensions::s_InstallAsyncDelegate
	AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3 * ___s_InstallAsyncDelegate_0;
	// UnityEngine.XR.ARExtensions.XRSessionExtensions_AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability> UnityEngine.XR.ARExtensions.XRSessionExtensions::s_GetAvailabilityAsyncDelegate
	AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 * ___s_GetAvailabilityAsyncDelegate_1;
	// System.Func`2<UnityEngine.Experimental.XR.XRSessionSubsystem,System.IntPtr> UnityEngine.XR.ARExtensions.XRSessionExtensions::s_GetNativePtrDelegate
	Func_2_t3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427 * ___s_GetNativePtrDelegate_2;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions_AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>> UnityEngine.XR.ARExtensions.XRSessionExtensions::s_InstallAsyncDelegates
	Dictionary_2_t940582C11B83AD84AC1F67AF3F3F5FAE64B82503 * ___s_InstallAsyncDelegates_3;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions_AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>> UnityEngine.XR.ARExtensions.XRSessionExtensions::s_GetAvailabilityAsyncDelegates
	Dictionary_2_t29A0B4802803E068766061600B339B644FF24895 * ___s_GetAvailabilityAsyncDelegates_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRSessionSubsystem,System.IntPtr>> UnityEngine.XR.ARExtensions.XRSessionExtensions::s_GetNativePtrDelegates
	Dictionary_2_tFE1C7A285CDDB61F4FD563A8D1EB39AF5A5A2B3E * ___s_GetNativePtrDelegates_5;

public:
	inline static int32_t get_offset_of_s_InstallAsyncDelegate_0() { return static_cast<int32_t>(offsetof(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields, ___s_InstallAsyncDelegate_0)); }
	inline AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3 * get_s_InstallAsyncDelegate_0() const { return ___s_InstallAsyncDelegate_0; }
	inline AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3 ** get_address_of_s_InstallAsyncDelegate_0() { return &___s_InstallAsyncDelegate_0; }
	inline void set_s_InstallAsyncDelegate_0(AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3 * value)
	{
		___s_InstallAsyncDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InstallAsyncDelegate_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_GetAvailabilityAsyncDelegate_1() { return static_cast<int32_t>(offsetof(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields, ___s_GetAvailabilityAsyncDelegate_1)); }
	inline AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 * get_s_GetAvailabilityAsyncDelegate_1() const { return ___s_GetAvailabilityAsyncDelegate_1; }
	inline AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 ** get_address_of_s_GetAvailabilityAsyncDelegate_1() { return &___s_GetAvailabilityAsyncDelegate_1; }
	inline void set_s_GetAvailabilityAsyncDelegate_1(AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 * value)
	{
		___s_GetAvailabilityAsyncDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_GetAvailabilityAsyncDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_GetNativePtrDelegate_2() { return static_cast<int32_t>(offsetof(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields, ___s_GetNativePtrDelegate_2)); }
	inline Func_2_t3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427 * get_s_GetNativePtrDelegate_2() const { return ___s_GetNativePtrDelegate_2; }
	inline Func_2_t3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427 ** get_address_of_s_GetNativePtrDelegate_2() { return &___s_GetNativePtrDelegate_2; }
	inline void set_s_GetNativePtrDelegate_2(Func_2_t3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427 * value)
	{
		___s_GetNativePtrDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_GetNativePtrDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_InstallAsyncDelegates_3() { return static_cast<int32_t>(offsetof(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields, ___s_InstallAsyncDelegates_3)); }
	inline Dictionary_2_t940582C11B83AD84AC1F67AF3F3F5FAE64B82503 * get_s_InstallAsyncDelegates_3() const { return ___s_InstallAsyncDelegates_3; }
	inline Dictionary_2_t940582C11B83AD84AC1F67AF3F3F5FAE64B82503 ** get_address_of_s_InstallAsyncDelegates_3() { return &___s_InstallAsyncDelegates_3; }
	inline void set_s_InstallAsyncDelegates_3(Dictionary_2_t940582C11B83AD84AC1F67AF3F3F5FAE64B82503 * value)
	{
		___s_InstallAsyncDelegates_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InstallAsyncDelegates_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_GetAvailabilityAsyncDelegates_4() { return static_cast<int32_t>(offsetof(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields, ___s_GetAvailabilityAsyncDelegates_4)); }
	inline Dictionary_2_t29A0B4802803E068766061600B339B644FF24895 * get_s_GetAvailabilityAsyncDelegates_4() const { return ___s_GetAvailabilityAsyncDelegates_4; }
	inline Dictionary_2_t29A0B4802803E068766061600B339B644FF24895 ** get_address_of_s_GetAvailabilityAsyncDelegates_4() { return &___s_GetAvailabilityAsyncDelegates_4; }
	inline void set_s_GetAvailabilityAsyncDelegates_4(Dictionary_2_t29A0B4802803E068766061600B339B644FF24895 * value)
	{
		___s_GetAvailabilityAsyncDelegates_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_GetAvailabilityAsyncDelegates_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_GetNativePtrDelegates_5() { return static_cast<int32_t>(offsetof(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields, ___s_GetNativePtrDelegates_5)); }
	inline Dictionary_2_tFE1C7A285CDDB61F4FD563A8D1EB39AF5A5A2B3E * get_s_GetNativePtrDelegates_5() const { return ___s_GetNativePtrDelegates_5; }
	inline Dictionary_2_tFE1C7A285CDDB61F4FD563A8D1EB39AF5A5A2B3E ** get_address_of_s_GetNativePtrDelegates_5() { return &___s_GetNativePtrDelegates_5; }
	inline void set_s_GetNativePtrDelegates_5(Dictionary_2_tFE1C7A285CDDB61F4FD563A8D1EB39AF5A5A2B3E * value)
	{
		___s_GetNativePtrDelegates_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_GetNativePtrDelegates_5), (void*)value);
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


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Experimental.XR.TrackableId
struct  TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B 
{
public:
	// System.UInt64 UnityEngine.Experimental.XR.TrackableId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.Experimental.XR.TrackableId::m_SubId2
	uint64_t ___m_SubId2_2;

public:
	inline static int32_t get_offset_of_m_SubId1_1() { return static_cast<int32_t>(offsetof(TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B, ___m_SubId1_1)); }
	inline uint64_t get_m_SubId1_1() const { return ___m_SubId1_1; }
	inline uint64_t* get_address_of_m_SubId1_1() { return &___m_SubId1_1; }
	inline void set_m_SubId1_1(uint64_t value)
	{
		___m_SubId1_1 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_2() { return static_cast<int32_t>(offsetof(TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B, ___m_SubId2_2)); }
	inline uint64_t get_m_SubId2_2() const { return ___m_SubId2_2; }
	inline uint64_t* get_address_of_m_SubId2_2() { return &___m_SubId2_2; }
	inline void set_m_SubId2_2(uint64_t value)
	{
		___m_SubId2_2 = value;
	}
};

struct TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B_StaticFields
{
public:
	// UnityEngine.Experimental.XR.TrackableId UnityEngine.Experimental.XR.TrackableId::s_InvalidId
	TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___s_InvalidId_0;

public:
	inline static int32_t get_offset_of_s_InvalidId_0() { return static_cast<int32_t>(offsetof(TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B_StaticFields, ___s_InvalidId_0)); }
	inline TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  get_s_InvalidId_0() const { return ___s_InvalidId_0; }
	inline TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B * get_address_of_s_InvalidId_0() { return &___s_InvalidId_0; }
	inline void set_s_InvalidId_0(TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  value)
	{
		___s_InvalidId_0 = value;
	}
};


// UnityEngine.PropertyAttribute
struct  PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

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


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector2Int
struct  Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_One_3)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Up_4)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Down_5)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Left_6)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Right_7)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Right_7 = value;
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


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*INT*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*INT*/* ___native_trace_ips_15;
};

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.XR.TrackingState
struct  TrackingState_tC867717ED982A6E61C703B6A0CCF908E9642C854 
{
public:
	// System.Int32 UnityEngine.Experimental.XR.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tC867717ED982A6E61C703B6A0CCF908E9642C854, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.IntegratedSubsystem
struct  IntegratedSubsystem_t3DA4A857E71E63A49B52353DBD88FA880196117E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t3DA4A857E71E63A49B52353DBD88FA880196117E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_subsystemDescriptor_1() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t3DA4A857E71E63A49B52353DBD88FA880196117E, ___m_subsystemDescriptor_1)); }
	inline RuntimeObject* get_m_subsystemDescriptor_1() const { return ___m_subsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_1() { return &___m_subsystemDescriptor_1; }
	inline void set_m_subsystemDescriptor_1(RuntimeObject* value)
	{
		___m_subsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subsystemDescriptor_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t3DA4A857E71E63A49B52353DBD88FA880196117E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t3DA4A857E71E63A49B52353DBD88FA880196117E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};

// UnityEngine.IntegratedSubsystemDescriptor
struct  IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystemDescriptor::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Pose
struct  Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___rotation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields, ___k_Identity_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.XR.ARExtensions.CameraFocusMode
struct  CameraFocusMode_t198966DE20F938A7890CE5EBFB00CCA53EAF4ED4 
{
public:
	// System.Int32 UnityEngine.XR.ARExtensions.CameraFocusMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraFocusMode_t198966DE20F938A7890CE5EBFB00CCA53EAF4ED4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARExtensions.CameraIntrinsics
struct  CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 
{
public:
	// UnityEngine.Vector2 UnityEngine.XR.ARExtensions.CameraIntrinsics::m_FocalLength
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_FocalLength_0;
	// UnityEngine.Vector2 UnityEngine.XR.ARExtensions.CameraIntrinsics::m_PrincipalPoint
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_PrincipalPoint_1;
	// UnityEngine.Vector2Int UnityEngine.XR.ARExtensions.CameraIntrinsics::m_Resolution
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___m_Resolution_2;

public:
	inline static int32_t get_offset_of_m_FocalLength_0() { return static_cast<int32_t>(offsetof(CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447, ___m_FocalLength_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_FocalLength_0() const { return ___m_FocalLength_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_FocalLength_0() { return &___m_FocalLength_0; }
	inline void set_m_FocalLength_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_FocalLength_0 = value;
	}

	inline static int32_t get_offset_of_m_PrincipalPoint_1() { return static_cast<int32_t>(offsetof(CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447, ___m_PrincipalPoint_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_PrincipalPoint_1() const { return ___m_PrincipalPoint_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_PrincipalPoint_1() { return &___m_PrincipalPoint_1; }
	inline void set_m_PrincipalPoint_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_PrincipalPoint_1 = value;
	}

	inline static int32_t get_offset_of_m_Resolution_2() { return static_cast<int32_t>(offsetof(CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447, ___m_Resolution_2)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_m_Resolution_2() const { return ___m_Resolution_2; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_m_Resolution_2() { return &___m_Resolution_2; }
	inline void set_m_Resolution_2(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___m_Resolution_2 = value;
	}
};


// UnityEngine.XR.ARExtensions.PlaneDetectionFlags
struct  PlaneDetectionFlags_t973AF579C70632C3A6345A61C688B125C5864215 
{
public:
	// System.Int32 UnityEngine.XR.ARExtensions.PlaneDetectionFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneDetectionFlags_t973AF579C70632C3A6345A61C688B125C5864215, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARExtensions.PlaneDetectionFlagsMaskAttribute
struct  PlaneDetectionFlagsMaskAttribute_t891FFF72B896019B6EF9B5BC66B66B7482D85E36  : public PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54
{
public:

public:
};


// UnityEngine.XR.ARExtensions.SessionAvailability
struct  SessionAvailability_t66AE38CEACBF09105F9564006DE37A94C9DB370F 
{
public:
	// System.Int32 UnityEngine.XR.ARExtensions.SessionAvailability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SessionAvailability_t66AE38CEACBF09105F9564006DE37A94C9DB370F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARExtensions.SessionInstallationStatus
struct  SessionInstallationStatus_tB8FC754E8CCA38CA2F32E61B354743D33DA3939B 
{
public:
	// System.Int32 UnityEngine.XR.ARExtensions.SessionInstallationStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SessionInstallationStatus_tB8FC754E8CCA38CA2F32E61B354743D33DA3939B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// UnityEngine.IntegratedSubsystemDescriptor`1<UnityEngine.Experimental.XR.XRCameraSubsystem>
struct  IntegratedSubsystemDescriptor_1_tE9F16178C14797992304DE9EE0396280DB8E77E1  : public IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_tC67E18878A7A77F8FDCD3286C4EDD50CD96FEF73_marshaled_pinvoke_define
#define IntegratedSubsystemDescriptor_1_tC67E18878A7A77F8FDCD3286C4EDD50CD96FEF73_marshaled_pinvoke_define
struct IntegratedSubsystemDescriptor_1_tC67E18878A7A77F8FDCD3286C4EDD50CD96FEF73_marshaled_pinvoke : public IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812_marshaled_pinvoke
{
};
#endif
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_tC67E18878A7A77F8FDCD3286C4EDD50CD96FEF73_marshaled_com_define
#define IntegratedSubsystemDescriptor_1_tC67E18878A7A77F8FDCD3286C4EDD50CD96FEF73_marshaled_com_define
struct IntegratedSubsystemDescriptor_1_tC67E18878A7A77F8FDCD3286C4EDD50CD96FEF73_marshaled_com : public IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812_marshaled_com
{
};
#endif

// UnityEngine.IntegratedSubsystemDescriptor`1<UnityEngine.Experimental.XR.XRPlaneSubsystem>
struct  IntegratedSubsystemDescriptor_1_t85BEA6ABFA714969AD7D295981D3A5F8BD82A383  : public IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_tC67E18878A7A77F8FDCD3286C4EDD50CD96FEF73_marshaled_pinvoke_define
#define IntegratedSubsystemDescriptor_1_tC67E18878A7A77F8FDCD3286C4EDD50CD96FEF73_marshaled_pinvoke_define
struct IntegratedSubsystemDescriptor_1_tC67E18878A7A77F8FDCD3286C4EDD50CD96FEF73_marshaled_pinvoke : public IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812_marshaled_pinvoke
{
};
#endif
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_tC67E18878A7A77F8FDCD3286C4EDD50CD96FEF73_marshaled_com_define
#define IntegratedSubsystemDescriptor_1_tC67E18878A7A77F8FDCD3286C4EDD50CD96FEF73_marshaled_com_define
struct IntegratedSubsystemDescriptor_1_tC67E18878A7A77F8FDCD3286C4EDD50CD96FEF73_marshaled_com : public IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812_marshaled_com
{
};
#endif

// UnityEngine.IntegratedSubsystemDescriptor`1<UnityEngine.Experimental.XR.XRReferencePointSubsystem>
struct  IntegratedSubsystemDescriptor_1_t299607E05679F7C2B9CEC0C28C89336EF798776D  : public IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_tC67E18878A7A77F8FDCD3286C4EDD50CD96FEF73_marshaled_pinvoke_define
#define IntegratedSubsystemDescriptor_1_tC67E18878A7A77F8FDCD3286C4EDD50CD96FEF73_marshaled_pinvoke_define
struct IntegratedSubsystemDescriptor_1_tC67E18878A7A77F8FDCD3286C4EDD50CD96FEF73_marshaled_pinvoke : public IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812_marshaled_pinvoke
{
};
#endif
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_tC67E18878A7A77F8FDCD3286C4EDD50CD96FEF73_marshaled_com_define
#define IntegratedSubsystemDescriptor_1_tC67E18878A7A77F8FDCD3286C4EDD50CD96FEF73_marshaled_com_define
struct IntegratedSubsystemDescriptor_1_tC67E18878A7A77F8FDCD3286C4EDD50CD96FEF73_marshaled_com : public IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812_marshaled_com
{
};
#endif

// UnityEngine.IntegratedSubsystemDescriptor`1<UnityEngine.Experimental.XR.XRSessionSubsystem>
struct  IntegratedSubsystemDescriptor_1_t0C91735E460ED713B69E3B2CFB36F9FF3EF82E25  : public IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_tC67E18878A7A77F8FDCD3286C4EDD50CD96FEF73_marshaled_pinvoke_define
#define IntegratedSubsystemDescriptor_1_tC67E18878A7A77F8FDCD3286C4EDD50CD96FEF73_marshaled_pinvoke_define
struct IntegratedSubsystemDescriptor_1_tC67E18878A7A77F8FDCD3286C4EDD50CD96FEF73_marshaled_pinvoke : public IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812_marshaled_pinvoke
{
};
#endif
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_tC67E18878A7A77F8FDCD3286C4EDD50CD96FEF73_marshaled_com_define
#define IntegratedSubsystemDescriptor_1_tC67E18878A7A77F8FDCD3286C4EDD50CD96FEF73_marshaled_com_define
struct IntegratedSubsystemDescriptor_1_tC67E18878A7A77F8FDCD3286C4EDD50CD96FEF73_marshaled_com : public IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812_marshaled_com
{
};
#endif

// UnityEngine.IntegratedSubsystem`1<UnityEngine.Experimental.XR.XRCameraSubsystemDescriptor>
struct  IntegratedSubsystem_1_t7895B27006AD89A2D0A37800E5E72D929802A8FD  : public IntegratedSubsystem_t3DA4A857E71E63A49B52353DBD88FA880196117E
{
public:

public:
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.Experimental.XR.XRPlaneSubsystemDescriptor>
struct  IntegratedSubsystem_1_tA0CDA6F41285252BAC7B1C847C06E6A174C2A726  : public IntegratedSubsystem_t3DA4A857E71E63A49B52353DBD88FA880196117E
{
public:

public:
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.Experimental.XR.XRReferencePointSubsystemDescriptor>
struct  IntegratedSubsystem_1_t48FB8540AD0BEB39E04B6521F76EADF9ACB5F794  : public IntegratedSubsystem_t3DA4A857E71E63A49B52353DBD88FA880196117E
{
public:

public:
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.Experimental.XR.XRSessionSubsystemDescriptor>
struct  IntegratedSubsystem_1_tB3B8A0259908C7FE09F3D2231645B5CA251A2B5C  : public IntegratedSubsystem_t3DA4A857E71E63A49B52353DBD88FA880196117E
{
public:

public:
};


// UnityEngine.XR.ARExtensions.Promise`1<UnityEngine.XR.ARExtensions.SessionAvailability>
struct  Promise_1_t66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// T UnityEngine.XR.ARExtensions.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARExtensions.Promise`1::m_Complete
	bool ___m_Complete_1;

public:
	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Promise_1_t66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF, ___U3CresultU3Ek__BackingField_0)); }
	inline int32_t get_U3CresultU3Ek__BackingField_0() const { return ___U3CresultU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CresultU3Ek__BackingField_0() { return &___U3CresultU3Ek__BackingField_0; }
	inline void set_U3CresultU3Ek__BackingField_0(int32_t value)
	{
		___U3CresultU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Complete_1() { return static_cast<int32_t>(offsetof(Promise_1_t66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF, ___m_Complete_1)); }
	inline bool get_m_Complete_1() const { return ___m_Complete_1; }
	inline bool* get_address_of_m_Complete_1() { return &___m_Complete_1; }
	inline void set_m_Complete_1(bool value)
	{
		___m_Complete_1 = value;
	}
};


// UnityEngine.XR.ARExtensions.Promise`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>
struct  Promise_1_tBD5BCA0938AD2478C8AC6953371BD3E24D657C15  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// T UnityEngine.XR.ARExtensions.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARExtensions.Promise`1::m_Complete
	bool ___m_Complete_1;

public:
	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Promise_1_tBD5BCA0938AD2478C8AC6953371BD3E24D657C15, ___U3CresultU3Ek__BackingField_0)); }
	inline int32_t get_U3CresultU3Ek__BackingField_0() const { return ___U3CresultU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CresultU3Ek__BackingField_0() { return &___U3CresultU3Ek__BackingField_0; }
	inline void set_U3CresultU3Ek__BackingField_0(int32_t value)
	{
		___U3CresultU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Complete_1() { return static_cast<int32_t>(offsetof(Promise_1_tBD5BCA0938AD2478C8AC6953371BD3E24D657C15, ___m_Complete_1)); }
	inline bool get_m_Complete_1() const { return ___m_Complete_1; }
	inline bool* get_address_of_m_Complete_1() { return &___m_Complete_1; }
	inline void set_m_Complete_1(bool value)
	{
		___m_Complete_1 = value;
	}
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>
struct  Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>
struct  Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Experimental.XR.XRSessionSubsystem,System.IntPtr>
struct  Func_2_t3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>
struct  Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>
struct  Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>
struct  Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>
struct  Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>
struct  Func_3_t5F7E105DF840E21AC18D244B52CBAC733FF4DAFB  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Experimental.XR.XRCameraSubsystem
struct  XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701  : public IntegratedSubsystem_1_t7895B27006AD89A2D0A37800E5E72D929802A8FD
{
public:
	// System.Action`1<UnityEngine.Experimental.XR.FrameReceivedEventArgs> UnityEngine.Experimental.XR.XRCameraSubsystem::FrameReceived
	Action_1_t95D7D93D51DF3F6A6C456CD847A0A4150A398BBC * ___FrameReceived_2;

public:
	inline static int32_t get_offset_of_FrameReceived_2() { return static_cast<int32_t>(offsetof(XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701, ___FrameReceived_2)); }
	inline Action_1_t95D7D93D51DF3F6A6C456CD847A0A4150A398BBC * get_FrameReceived_2() const { return ___FrameReceived_2; }
	inline Action_1_t95D7D93D51DF3F6A6C456CD847A0A4150A398BBC ** get_address_of_FrameReceived_2() { return &___FrameReceived_2; }
	inline void set_FrameReceived_2(Action_1_t95D7D93D51DF3F6A6C456CD847A0A4150A398BBC * value)
	{
		___FrameReceived_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FrameReceived_2), (void*)value);
	}
};


// UnityEngine.Experimental.XR.XRCameraSubsystemDescriptor
struct  XRCameraSubsystemDescriptor_t46972B2D1CC489288B72CD0856AB7675B5EEEE6D  : public IntegratedSubsystemDescriptor_1_tE9F16178C14797992304DE9EE0396280DB8E77E1
{
public:

public:
};


// UnityEngine.Experimental.XR.XRPlaneSubsystem
struct  XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B  : public IntegratedSubsystem_1_tA0CDA6F41285252BAC7B1C847C06E6A174C2A726
{
public:
	// System.Action`1<UnityEngine.Experimental.XR.PlaneAddedEventArgs> UnityEngine.Experimental.XR.XRPlaneSubsystem::PlaneAdded
	Action_1_t3863E014281664DEECCEAFF0F363B622DAB862E6 * ___PlaneAdded_2;
	// System.Action`1<UnityEngine.Experimental.XR.PlaneUpdatedEventArgs> UnityEngine.Experimental.XR.XRPlaneSubsystem::PlaneUpdated
	Action_1_tBEAD8CEE1CABAD25A45CE64C8A9D173BEDEC0AF6 * ___PlaneUpdated_3;
	// System.Action`1<UnityEngine.Experimental.XR.PlaneRemovedEventArgs> UnityEngine.Experimental.XR.XRPlaneSubsystem::PlaneRemoved
	Action_1_t9720B7CBE6CC0851562EC5B89948AEF5C229D991 * ___PlaneRemoved_4;

public:
	inline static int32_t get_offset_of_PlaneAdded_2() { return static_cast<int32_t>(offsetof(XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B, ___PlaneAdded_2)); }
	inline Action_1_t3863E014281664DEECCEAFF0F363B622DAB862E6 * get_PlaneAdded_2() const { return ___PlaneAdded_2; }
	inline Action_1_t3863E014281664DEECCEAFF0F363B622DAB862E6 ** get_address_of_PlaneAdded_2() { return &___PlaneAdded_2; }
	inline void set_PlaneAdded_2(Action_1_t3863E014281664DEECCEAFF0F363B622DAB862E6 * value)
	{
		___PlaneAdded_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlaneAdded_2), (void*)value);
	}

	inline static int32_t get_offset_of_PlaneUpdated_3() { return static_cast<int32_t>(offsetof(XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B, ___PlaneUpdated_3)); }
	inline Action_1_tBEAD8CEE1CABAD25A45CE64C8A9D173BEDEC0AF6 * get_PlaneUpdated_3() const { return ___PlaneUpdated_3; }
	inline Action_1_tBEAD8CEE1CABAD25A45CE64C8A9D173BEDEC0AF6 ** get_address_of_PlaneUpdated_3() { return &___PlaneUpdated_3; }
	inline void set_PlaneUpdated_3(Action_1_tBEAD8CEE1CABAD25A45CE64C8A9D173BEDEC0AF6 * value)
	{
		___PlaneUpdated_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlaneUpdated_3), (void*)value);
	}

	inline static int32_t get_offset_of_PlaneRemoved_4() { return static_cast<int32_t>(offsetof(XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B, ___PlaneRemoved_4)); }
	inline Action_1_t9720B7CBE6CC0851562EC5B89948AEF5C229D991 * get_PlaneRemoved_4() const { return ___PlaneRemoved_4; }
	inline Action_1_t9720B7CBE6CC0851562EC5B89948AEF5C229D991 ** get_address_of_PlaneRemoved_4() { return &___PlaneRemoved_4; }
	inline void set_PlaneRemoved_4(Action_1_t9720B7CBE6CC0851562EC5B89948AEF5C229D991 * value)
	{
		___PlaneRemoved_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlaneRemoved_4), (void*)value);
	}
};


// UnityEngine.Experimental.XR.XRPlaneSubsystemDescriptor
struct  XRPlaneSubsystemDescriptor_t0F6814B2CAD6778836A3A230A200600556C57D7F  : public IntegratedSubsystemDescriptor_1_t85BEA6ABFA714969AD7D295981D3A5F8BD82A383
{
public:

public:
};


// UnityEngine.Experimental.XR.XRReferencePointSubsystem
struct  XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C  : public IntegratedSubsystem_1_t48FB8540AD0BEB39E04B6521F76EADF9ACB5F794
{
public:
	// System.Action`1<UnityEngine.Experimental.XR.ReferencePointUpdatedEventArgs> UnityEngine.Experimental.XR.XRReferencePointSubsystem::ReferencePointUpdated
	Action_1_t62CF34AD78617EF5FE6E7FCE5803CBE14C103FBD * ___ReferencePointUpdated_2;

public:
	inline static int32_t get_offset_of_ReferencePointUpdated_2() { return static_cast<int32_t>(offsetof(XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C, ___ReferencePointUpdated_2)); }
	inline Action_1_t62CF34AD78617EF5FE6E7FCE5803CBE14C103FBD * get_ReferencePointUpdated_2() const { return ___ReferencePointUpdated_2; }
	inline Action_1_t62CF34AD78617EF5FE6E7FCE5803CBE14C103FBD ** get_address_of_ReferencePointUpdated_2() { return &___ReferencePointUpdated_2; }
	inline void set_ReferencePointUpdated_2(Action_1_t62CF34AD78617EF5FE6E7FCE5803CBE14C103FBD * value)
	{
		___ReferencePointUpdated_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReferencePointUpdated_2), (void*)value);
	}
};


// UnityEngine.Experimental.XR.XRReferencePointSubsystemDescriptor
struct  XRReferencePointSubsystemDescriptor_t0228E77788DA1EAB18104D6AB3DBAF5AF5CFA0D3  : public IntegratedSubsystemDescriptor_1_t299607E05679F7C2B9CEC0C28C89336EF798776D
{
public:

public:
};


// UnityEngine.Experimental.XR.XRSessionSubsystem
struct  XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F  : public IntegratedSubsystem_1_tB3B8A0259908C7FE09F3D2231645B5CA251A2B5C
{
public:
	// System.Action`1<UnityEngine.Experimental.XR.SessionTrackingStateChangedEventArgs> UnityEngine.Experimental.XR.XRSessionSubsystem::TrackingStateChanged
	Action_1_tFA24ECAFB569947BC1D041AECE3FD63058B301F9 * ___TrackingStateChanged_2;

public:
	inline static int32_t get_offset_of_TrackingStateChanged_2() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F, ___TrackingStateChanged_2)); }
	inline Action_1_tFA24ECAFB569947BC1D041AECE3FD63058B301F9 * get_TrackingStateChanged_2() const { return ___TrackingStateChanged_2; }
	inline Action_1_tFA24ECAFB569947BC1D041AECE3FD63058B301F9 ** get_address_of_TrackingStateChanged_2() { return &___TrackingStateChanged_2; }
	inline void set_TrackingStateChanged_2(Action_1_tFA24ECAFB569947BC1D041AECE3FD63058B301F9 * value)
	{
		___TrackingStateChanged_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrackingStateChanged_2), (void*)value);
	}
};


// UnityEngine.Experimental.XR.XRSessionSubsystemDescriptor
struct  XRSessionSubsystemDescriptor_tF69268DD404379B461569E4268BEC52FAFC9F3B9  : public IntegratedSubsystemDescriptor_1_t0C91735E460ED713B69E3B2CFB36F9FF3EF82E25
{
public:

public:
};


// UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetColorCorrectionDelegate
struct  TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetIntrinsicsDelegate
struct  TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.ARExtensions.XRReferencePointExtensions_AttachReferencePointDelegate
struct  AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.ARExtensions.XRSessionExtensions_AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>
struct  AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.ARExtensions.XRSessionExtensions_AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>
struct  AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !2 System.Func`3<System.Object,System.Int32Enum,System.Boolean>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Func_3_Invoke_m7299FB22FA16D95EA643F867696DC426D85D0D1F_gshared (Func_3_t38EC29D177240EF2B5F3DECA40F77E2A762B6671 * __this, RuntimeObject * ___arg10, int32_t ___arg21, const RuntimeMethod* method);
// !0 UnityEngine.IntegratedSubsystem`1<System.Object>::get_SubsystemDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * IntegratedSubsystem_1_get_SubsystemDescriptor_m86F16F38EF5081A573F31E718A487469CBB3B012_gshared (IntegratedSubsystem_1_t2DE7C58DE8F60DCFD451AAFB0B75E6B1BF94C134 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m5153AE6EE06BA488EF3D92A0DCF7E4EF530961B5_gshared (Func_2_t7EE965B791A606D187CCB69569A433D4CBB36879 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// TValue UnityEngine.XR.ARExtensions.RegistrationHelper::GetValueOrDefault<System.Object,System.Object>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * RegistrationHelper_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mC0ACB890D8B249516DCD2A750E54AFBAEB9609D5_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * ___dictionary0, RuntimeObject * ___key1, RuntimeObject * ___defaultValue2, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.IntPtr>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m64D91D0F4CEE0497B1377BAB3C64409E5CDCA78F_gshared (Func_2_tCD6D7E3EA16DD0F2ABEE6DCFB218CC15BF43B5D9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`3<System.Object,System.Int32Enum,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_mA9FB1F42AF9C9A7194C88CBBA1CB1AB3A5D098FA_gshared (Func_3_t38EC29D177240EF2B5F3DECA40F77E2A762B6671 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// !2 System.Func`3<System.Object,UnityEngine.Experimental.XR.TrackableId,System.Int32Enum>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_m56CE242158733ED78293917AD88F2F7137EFC7F5_gshared (Func_3_tB11122E2777CE9921EA175D744BFD56D6BD535F9 * __this, RuntimeObject * ___arg10, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___arg21, const RuntimeMethod* method);
// System.Void System.Func`3<System.Object,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_mB31B94AEAFCD2CCC2F044FB60ED385D61859DC79_gshared (Func_3_t2ED96FCF00355A1F97D4CC70B00A6E3CAAF09DAE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Func`3<System.Object,UnityEngine.Experimental.XR.TrackableId,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_m7C29B75E27025AC6E14AB16448A6199CAAA9F525_gshared (Func_3_tB11122E2777CE9921EA175D744BFD56D6BD535F9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// UnityEngine.XR.ARExtensions.Promise`1<T> UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<System.Int32Enum>::Invoke(UnityEngine.Experimental.XR.XRSessionSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_t86CAA07E2F0920F186E17389E61DF22419E422A1 * AsyncDelegate_1_Invoke_m1A3781AC66C6952D17435E2CD5D3BA3BF935BF2C_gshared (AsyncDelegate_1_t6A92F8D83CC29E18956F23A772F33CDBB4FB0D0A * __this, XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * ___sessionSubsystem0, const RuntimeMethod* method);
// UnityEngine.XR.ARExtensions.Promise`1<T> UnityEngine.XR.ARExtensions.Promise`1<System.Int32Enum>::CreateResolvedPromise(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_t86CAA07E2F0920F186E17389E61DF22419E422A1 * Promise_1_CreateResolvedPromise_m033B95320CE69249E1F513DDE891F06C6FE561FE_gshared (int32_t ___result0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncDelegate_1__ctor_mF5C7A44A78E479C7D8999030E5765E2A4422A38D_gshared (AsyncDelegate_1_t6A92F8D83CC29E18956F23A772F33CDBB4FB0D0A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);

// UnityEngine.Vector2 UnityEngine.XR.ARExtensions.CameraIntrinsics::get_focalLength()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  CameraIntrinsics_get_focalLength_m6C9227C139EB42BF6B22278880AB1596ADED7991_inline (CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.XR.ARExtensions.CameraIntrinsics::get_principalPoint()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  CameraIntrinsics_get_principalPoint_mC9CFA3636F2AA3942A0F72607CF52499971C955A_inline (CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2Int UnityEngine.XR.ARExtensions.CameraIntrinsics::get_resolution()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  CameraIntrinsics_get_resolution_mCCCC68A5429FE331004D65A013FD5425477B4836_inline (CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARExtensions.CameraIntrinsics::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CameraIntrinsics_ToString_m39D54E4360AF0C3D18B1D21E20FDEDC23D312242 (CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2_GetHashCode_m028AB6B14EBC6D668CFA45BF6EDEF17E2C44EA54 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2Int_GetHashCode_m73E874F4E94DF3D2603035E2E892873B139A7A9E (Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARExtensions.CameraIntrinsics::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraIntrinsics_GetHashCode_mFBD6C0173D4053A8E6B48789A6F337E4A746117E (CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARExtensions.CameraIntrinsics::Equals(UnityEngine.XR.ARExtensions.CameraIntrinsics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraIntrinsics_Equals_m5F912B120B99A0F7572C816B389DD2FC29B3FABD (CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * __this, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARExtensions.CameraIntrinsics::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraIntrinsics_Equals_m33825CB12EB4F5696AC4CD300A8EBA6E931973FF (CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::Equals(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2_Equals_mD6BF1A738E3CAF57BB46E604B030C072728F4EEB (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2Int::Equals(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m65420C995F326F5C340E4825EA5E16BDE68F5A9C (Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * __this, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___other0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_m7F5C473F39D5601486C1127DA0D52F2DC293FC35 (PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m8EEB1F24AC95767F888EE20C70EA6960B9312DEA (Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03 * __this, String_t* ___key0, Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03 *, String_t*, Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8 *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m0C701E4F356D0C2E031C58314260A570C0700D13 (Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896 * __this, String_t* ___key0, Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896 *, String_t*, Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.ICameraImageApi>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mF41CD7B59672D2F7944AD9948C85D87F71F55823 (Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C * __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C *, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.ICameraConfigApi>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m1754CE8844755239EAE2B00C3E47FF21A52B8BEF (Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E * __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E *, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mDCCEBD39F3A8292A36004B8E4A45BAE086480A80 (Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18 * __this, String_t* ___key0, Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18 *, String_t*, Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetIntrinsicsDelegate>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mA157E660E1AAACB87822FAF5A5860C6E2F07F1D2 (Dictionary_2_tE4065ACCCAB4F818974D5F60A984FEDECA6AFBD9 * __this, String_t* ___key0, TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE4065ACCCAB4F818974D5F60A984FEDECA6AFBD9 *, String_t*, TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate::Invoke(UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TryGetColorCorrectionDelegate_Invoke_mD6C0366FB0745ED1F21875DBA300B7162EAB6DC3 (TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * __this, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___cameraSubsystems0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * ___color1, const RuntimeMethod* method);
// !2 System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>::Invoke(!0,!1)
inline bool Func_3_Invoke_mB755438CB6927A8979F2D00C8706027F548397E5 (Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 * __this, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___arg10, int32_t ___arg21, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 *, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, int32_t, const RuntimeMethod*))Func_3_Invoke_m7299FB22FA16D95EA643F867696DC426D85D0D1F_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions::SetDefaultDelegates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraExtensions_SetDefaultDelegates_m9B88AD98143044329A6EB7B6AD86F61F2F8F1C63 (const RuntimeMethod* method);
// !0 UnityEngine.IntegratedSubsystem`1<UnityEngine.Experimental.XR.XRCameraSubsystemDescriptor>::get_SubsystemDescriptor()
inline XRCameraSubsystemDescriptor_t46972B2D1CC489288B72CD0856AB7675B5EEEE6D * IntegratedSubsystem_1_get_SubsystemDescriptor_mCA5319329F86C199ADE0C11C103ED6ED1C15B38A (IntegratedSubsystem_1_t7895B27006AD89A2D0A37800E5E72D929802A8FD * __this, const RuntimeMethod* method)
{
	return ((  XRCameraSubsystemDescriptor_t46972B2D1CC489288B72CD0856AB7675B5EEEE6D * (*) (IntegratedSubsystem_1_t7895B27006AD89A2D0A37800E5E72D929802A8FD *, const RuntimeMethod*))IntegratedSubsystem_1_get_SubsystemDescriptor_m86F16F38EF5081A573F31E718A487469CBB3B012_gshared)(__this, method);
}
// System.String UnityEngine.IntegratedSubsystemDescriptor::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IntegratedSubsystemDescriptor_get_id_mD53ED8BDEC2B3748FA8B9FC77951D97CC710A5A6 (IntegratedSubsystemDescriptor_tCC675C388E8A720B9467FCE039B00E7BE7693812 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mE24D6BB638CDBE042618FD7C42A30F92994B031C (Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m5153AE6EE06BA488EF3D92A0DCF7E4EF530961B5_gshared)(__this, ___object0, ___method1, method);
}
// TValue UnityEngine.XR.ARExtensions.RegistrationHelper::GetValueOrDefault<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,TValue)
inline Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8 * RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8_mBD11FC1155A5BE7D77FFAADC61FFC0C9FE5B95B8 (Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03 * ___dictionary0, String_t* ___key1, Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8 * ___defaultValue2, const RuntimeMethod* method)
{
	return ((  Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8 * (*) (Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03 *, String_t*, Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8 *, const RuntimeMethod*))RegistrationHelper_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mC0ACB890D8B249516DCD2A750E54AFBAEB9609D5_gshared)(___dictionary0, ___key1, ___defaultValue2, method);
}
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TryGetColorCorrectionDelegate__ctor_m835B880C69E2407680EAC8F3C20AC53185065E33 (TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// TValue UnityEngine.XR.ARExtensions.RegistrationHelper::GetValueOrDefault<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,TValue)
inline TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * RegistrationHelper_GetValueOrDefault_TisString_t_TisTryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8_m61A7834239CA4AB5A641B628FCB56987C35589D1 (Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2 * ___dictionary0, String_t* ___key1, TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * ___defaultValue2, const RuntimeMethod* method)
{
	return ((  TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * (*) (Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2 *, String_t*, TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 *, const RuntimeMethod*))RegistrationHelper_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mC0ACB890D8B249516DCD2A750E54AFBAEB9609D5_gshared)(___dictionary0, ___key1, ___defaultValue2, method);
}
// System.Void System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mB70921C3E2F09D928DD6CB56EDB76B0740950837 (Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m64D91D0F4CEE0497B1377BAB3C64409E5CDCA78F_gshared)(__this, ___object0, ___method1, method);
}
// TValue UnityEngine.XR.ARExtensions.RegistrationHelper::GetValueOrDefault<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,TValue)
inline Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E * RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E_m6210B7180E0BB217CCA3E6594211EFF4A07FC608 (Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896 * ___dictionary0, String_t* ___key1, Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E * ___defaultValue2, const RuntimeMethod* method)
{
	return ((  Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E * (*) (Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896 *, String_t*, Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E *, const RuntimeMethod*))RegistrationHelper_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mC0ACB890D8B249516DCD2A750E54AFBAEB9609D5_gshared)(___dictionary0, ___key1, ___defaultValue2, method);
}
// TValue UnityEngine.XR.ARExtensions.RegistrationHelper::GetValueOrDefault<System.String,UnityEngine.XR.ARExtensions.ICameraImageApi>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,TValue)
inline RuntimeObject* RegistrationHelper_GetValueOrDefault_TisString_t_TisICameraImageApi_tBAC003481E172628D623F3F9E7CFB8D2FD84EEE4_m1355429B4894B08DB4C8610770DC753A0CD717DE (Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C * ___dictionary0, String_t* ___key1, RuntimeObject* ___defaultValue2, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C *, String_t*, RuntimeObject*, const RuntimeMethod*))RegistrationHelper_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mC0ACB890D8B249516DCD2A750E54AFBAEB9609D5_gshared)(___dictionary0, ___key1, ___defaultValue2, method);
}
// TValue UnityEngine.XR.ARExtensions.RegistrationHelper::GetValueOrDefault<System.String,UnityEngine.XR.ARExtensions.ICameraConfigApi>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,TValue)
inline RuntimeObject* RegistrationHelper_GetValueOrDefault_TisString_t_TisICameraConfigApi_t5694F28C505D2CA91EF77838138F419261B240BA_mD6F28B8DC5EB1F9F670AACA1C9521D3473E8D189 (Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E * ___dictionary0, String_t* ___key1, RuntimeObject* ___defaultValue2, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E *, String_t*, RuntimeObject*, const RuntimeMethod*))RegistrationHelper_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mC0ACB890D8B249516DCD2A750E54AFBAEB9609D5_gshared)(___dictionary0, ___key1, ___defaultValue2, method);
}
// System.Void System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m9EFB55F925F47E45BE7C8811F004C9BC82B77149 (Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_mA9FB1F42AF9C9A7194C88CBBA1CB1AB3A5D098FA_gshared)(__this, ___object0, ___method1, method);
}
// TValue UnityEngine.XR.ARExtensions.RegistrationHelper::GetValueOrDefault<System.String,System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,TValue)
inline Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 * RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3_m97C70CD7BCCD482831332935DADA118B4285FFE4 (Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18 * ___dictionary0, String_t* ___key1, Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 * ___defaultValue2, const RuntimeMethod* method)
{
	return ((  Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 * (*) (Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18 *, String_t*, Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 *, const RuntimeMethod*))RegistrationHelper_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mC0ACB890D8B249516DCD2A750E54AFBAEB9609D5_gshared)(___dictionary0, ___key1, ___defaultValue2, method);
}
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetIntrinsicsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TryGetIntrinsicsDelegate__ctor_mD8B74D11E32B1BCE8EAEFA7575C7664BB3AEF9AE (TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// TValue UnityEngine.XR.ARExtensions.RegistrationHelper::GetValueOrDefault<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetIntrinsicsDelegate>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,TValue)
inline TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 * RegistrationHelper_GetValueOrDefault_TisString_t_TisTryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389_mBDCC5B8F3FDC544D361E13600D3A9AE8F7BA2B0F (Dictionary_2_tE4065ACCCAB4F818974D5F60A984FEDECA6AFBD9 * ___dictionary0, String_t* ___key1, TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 * ___defaultValue2, const RuntimeMethod* method)
{
	return ((  TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 * (*) (Dictionary_2_tE4065ACCCAB4F818974D5F60A984FEDECA6AFBD9 *, String_t*, TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 *, const RuntimeMethod*))RegistrationHelper_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mC0ACB890D8B249516DCD2A750E54AFBAEB9609D5_gshared)(___dictionary0, ___key1, ___defaultValue2, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>>::.ctor()
inline void Dictionary_2__ctor_mDE8D441175FF39143149503BCE484A53AB593FC0 (Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetColorCorrectionDelegate>::.ctor()
inline void Dictionary_2__ctor_m220ABCA24A5187DE88E208E9E85624AFF9E429FB (Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>>::.ctor()
inline void Dictionary_2__ctor_m9EAE1511A3947B9424311D32A6727C19E776D1BB (Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.ICameraImageApi>::.ctor()
inline void Dictionary_2__ctor_m2F2C81BE42168DB8D8C8E0097988528AAA2138B8 (Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.ICameraConfigApi>::.ctor()
inline void Dictionary_2__ctor_m0D1D88C8F7FADB0811A56FC188679877BF0E68A7 (Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>>::.ctor()
inline void Dictionary_2__ctor_mD418F6BAA7C990CEACBE06A97FC00177355A055F (Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions/TryGetIntrinsicsDelegate>::.ctor()
inline void Dictionary_2__ctor_m38BD50020AAAC75533326A970505779889322025 (Dictionary_2_tE4065ACCCAB4F818974D5F60A984FEDECA6AFBD9 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE4065ACCCAB4F818974D5F60A984FEDECA6AFBD9 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARExtensions.DefaultCameraImageApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultCameraImageApi__ctor_m391671B14DB15876DF5F47A03DFF5235B529D5BF (DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARExtensions.DefaultCameraConfigApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultCameraConfigApi__ctor_m59C8FA485ECEE299E8A62F60B7ACF7DA3C8ED834 (DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mADAB602D07985E48AC31A4CF3DBA19B836D41E78 (Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334 * __this, String_t* ___key0, Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334 *, String_t*, Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m1AE870C391863BB5CC45B25852032E8A3898E32E (Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504 * __this, String_t* ___key0, Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504 *, String_t*, Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828 *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mF9BA061CBECCB241F3B5934FD46B09CBC8D5A0A2 (Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C * __this, String_t* ___key0, Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C *, String_t*, Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// !2 System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>::Invoke(!0,!1)
inline int32_t Func_3_Invoke_m2050474BE35CAC1B6B87848214E445703F0B0FEA (Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 * __this, XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * ___arg10, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___arg21, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 *, XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B *, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , const RuntimeMethod*))Func_3_Invoke_m56CE242158733ED78293917AD88F2F7137EFC7F5_gshared)(__this, ___arg10, ___arg21, method);
}
// !2 System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>::Invoke(!0,!1)
inline bool Func_3_Invoke_m49DE3A72CF4ECC2FE9CDA93D7F6B6C931A046AAB (Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 * __this, XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * ___arg10, int32_t ___arg21, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 *, XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B *, int32_t, const RuntimeMethod*))Func_3_Invoke_m7299FB22FA16D95EA643F867696DC426D85D0D1F_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void UnityEngine.XR.ARExtensions.XRPlaneExtensions::SetDefaultDelegates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneExtensions_SetDefaultDelegates_m2C55C67EFCB955C7FF07F4668CF1019AA74B2DB6 (const RuntimeMethod* method);
// !0 UnityEngine.IntegratedSubsystem`1<UnityEngine.Experimental.XR.XRPlaneSubsystemDescriptor>::get_SubsystemDescriptor()
inline XRPlaneSubsystemDescriptor_t0F6814B2CAD6778836A3A230A200600556C57D7F * IntegratedSubsystem_1_get_SubsystemDescriptor_m9252E3E25F1B1FA86102F3F097BD2C36869AFD01 (IntegratedSubsystem_1_tA0CDA6F41285252BAC7B1C847C06E6A174C2A726 * __this, const RuntimeMethod* method)
{
	return ((  XRPlaneSubsystemDescriptor_t0F6814B2CAD6778836A3A230A200600556C57D7F * (*) (IntegratedSubsystem_1_tA0CDA6F41285252BAC7B1C847C06E6A174C2A726 *, const RuntimeMethod*))IntegratedSubsystem_1_get_SubsystemDescriptor_m86F16F38EF5081A573F31E718A487469CBB3B012_gshared)(__this, method);
}
// System.Void System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m719B904C27077EF12C81ECD411AB739E7B94FA3E (Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_mB31B94AEAFCD2CCC2F044FB60ED385D61859DC79_gshared)(__this, ___object0, ___method1, method);
}
// TValue UnityEngine.XR.ARExtensions.RegistrationHelper::GetValueOrDefault<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,TValue)
inline Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828 * RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828_mE97108E1F9BB2274F733EBCAF91C10CCE7FB86AE (Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504 * ___dictionary0, String_t* ___key1, Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828 * ___defaultValue2, const RuntimeMethod* method)
{
	return ((  Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828 * (*) (Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504 *, String_t*, Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828 *, const RuntimeMethod*))RegistrationHelper_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mC0ACB890D8B249516DCD2A750E54AFBAEB9609D5_gshared)(___dictionary0, ___key1, ___defaultValue2, method);
}
// System.Void System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m27FCFCB94AC7593063BF02372B6A9B3BEEFD8779 (Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_m7C29B75E27025AC6E14AB16448A6199CAAA9F525_gshared)(__this, ___object0, ___method1, method);
}
// TValue UnityEngine.XR.ARExtensions.RegistrationHelper::GetValueOrDefault<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,TValue)
inline Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 * RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472_m4B3C34CCCC20FD454B9644C5C015CBD469EE21CF (Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334 * ___dictionary0, String_t* ___key1, Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 * ___defaultValue2, const RuntimeMethod* method)
{
	return ((  Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 * (*) (Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334 *, String_t*, Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 *, const RuntimeMethod*))RegistrationHelper_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mC0ACB890D8B249516DCD2A750E54AFBAEB9609D5_gshared)(___dictionary0, ___key1, ___defaultValue2, method);
}
// System.Void System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_mF23AC3FFB9F86CE914EA6FB40CE3A4797273A3EB (Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_mA9FB1F42AF9C9A7194C88CBBA1CB1AB3A5D098FA_gshared)(__this, ___object0, ___method1, method);
}
// TValue UnityEngine.XR.ARExtensions.RegistrationHelper::GetValueOrDefault<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,TValue)
inline Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 * RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851_m883A19EADF36FF29E928044AC5BE877EA3772C2A (Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C * ___dictionary0, String_t* ___key1, Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 * ___defaultValue2, const RuntimeMethod* method)
{
	return ((  Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 * (*) (Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C *, String_t*, Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 *, const RuntimeMethod*))RegistrationHelper_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mC0ACB890D8B249516DCD2A750E54AFBAEB9609D5_gshared)(___dictionary0, ___key1, ___defaultValue2, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>::.ctor()
inline void Dictionary_2__ctor_mCB6661D6E4C78D7DC40A5BF8F57A936F82883D7B (Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>>::.ctor()
inline void Dictionary_2__ctor_m16D15F3C862098DF2D3E042B47890E96138C6B54 (Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>>::.ctor()
inline void Dictionary_2__ctor_m09C4BA484CCC690E8D866C3D49D187F7E829C57D (Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mD2174A65AA619EA2AE1A93880E672071866EF992 (Dictionary_2_t2E0DF86FACC6F978A4B05B1BDDA0DEEE82FCD0B5 * __this, String_t* ___key0, AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2E0DF86FACC6F978A4B05B1BDDA0DEEE82FCD0B5 *, String_t*, AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m4928FF7E350E2EA84F2877D3C6A5231FA935DE91 (Dictionary_2_tF85F2837800957A1F17D2C5FD4CA7D5BC9609C8E * __this, String_t* ___key0, Func_3_t5F7E105DF840E21AC18D244B52CBAC733FF4DAFB * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF85F2837800957A1F17D2C5FD4CA7D5BC9609C8E *, String_t*, Func_3_t5F7E105DF840E21AC18D244B52CBAC733FF4DAFB *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Experimental.XR.TrackableId UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate::Invoke(UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  AttachReferencePointDelegate_Invoke_mA3421081DBADE594B7EE7581F8286322BEA5E563 (AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * __this, XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C * ___referencePointSubsystem0, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___trackableId1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose2, const RuntimeMethod* method);
// UnityEngine.Experimental.XR.TrackableId UnityEngine.Experimental.XR.TrackableId::get_InvalidId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  TrackableId_get_InvalidId_m6A78BF219717CF4ACDF1D18C4E83CD187E8F9F27 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARExtensions.XRReferencePointExtensions::SetDefaultDelegates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRReferencePointExtensions_SetDefaultDelegates_m02E9AD7315618F183A78ABFEEDCCB0F05D27436C (const RuntimeMethod* method);
// !0 UnityEngine.IntegratedSubsystem`1<UnityEngine.Experimental.XR.XRReferencePointSubsystemDescriptor>::get_SubsystemDescriptor()
inline XRReferencePointSubsystemDescriptor_t0228E77788DA1EAB18104D6AB3DBAF5AF5CFA0D3 * IntegratedSubsystem_1_get_SubsystemDescriptor_m2D51244EC044786C3CE3827FBBFC992E4A40F554 (IntegratedSubsystem_1_t48FB8540AD0BEB39E04B6521F76EADF9ACB5F794 * __this, const RuntimeMethod* method)
{
	return ((  XRReferencePointSubsystemDescriptor_t0228E77788DA1EAB18104D6AB3DBAF5AF5CFA0D3 * (*) (IntegratedSubsystem_1_t48FB8540AD0BEB39E04B6521F76EADF9ACB5F794 *, const RuntimeMethod*))IntegratedSubsystem_1_get_SubsystemDescriptor_m86F16F38EF5081A573F31E718A487469CBB3B012_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttachReferencePointDelegate__ctor_m78B8311C8F1F2170BE5D029F058A51BB34237B3C (AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// TValue UnityEngine.XR.ARExtensions.RegistrationHelper::GetValueOrDefault<System.String,UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,TValue)
inline AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * RegistrationHelper_GetValueOrDefault_TisString_t_TisAttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF_mDEF3757DAFA7A9EFC927096B193885E25FAB2DD9 (Dictionary_2_t2E0DF86FACC6F978A4B05B1BDDA0DEEE82FCD0B5 * ___dictionary0, String_t* ___key1, AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * ___defaultValue2, const RuntimeMethod* method)
{
	return ((  AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * (*) (Dictionary_2_t2E0DF86FACC6F978A4B05B1BDDA0DEEE82FCD0B5 *, String_t*, AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF *, const RuntimeMethod*))RegistrationHelper_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mC0ACB890D8B249516DCD2A750E54AFBAEB9609D5_gshared)(___dictionary0, ___key1, ___defaultValue2, method);
}
// System.Void System.Func`3<UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_mEB02727EA13F9EDEA7054E33EB928C6E625E4F1B (Func_3_t5F7E105DF840E21AC18D244B52CBAC733FF4DAFB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t5F7E105DF840E21AC18D244B52CBAC733FF4DAFB *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_mB31B94AEAFCD2CCC2F044FB60ED385D61859DC79_gshared)(__this, ___object0, ___method1, method);
}
// TValue UnityEngine.XR.ARExtensions.RegistrationHelper::GetValueOrDefault<System.String,System.Func`3<UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,TValue)
inline Func_3_t5F7E105DF840E21AC18D244B52CBAC733FF4DAFB * RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_t5F7E105DF840E21AC18D244B52CBAC733FF4DAFB_mE927F2CA4E621CD4993840C5669202159CF1408B (Dictionary_2_tF85F2837800957A1F17D2C5FD4CA7D5BC9609C8E * ___dictionary0, String_t* ___key1, Func_3_t5F7E105DF840E21AC18D244B52CBAC733FF4DAFB * ___defaultValue2, const RuntimeMethod* method)
{
	return ((  Func_3_t5F7E105DF840E21AC18D244B52CBAC733FF4DAFB * (*) (Dictionary_2_tF85F2837800957A1F17D2C5FD4CA7D5BC9609C8E *, String_t*, Func_3_t5F7E105DF840E21AC18D244B52CBAC733FF4DAFB *, const RuntimeMethod*))RegistrationHelper_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mC0ACB890D8B249516DCD2A750E54AFBAEB9609D5_gshared)(___dictionary0, ___key1, ___defaultValue2, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRReferencePointExtensions/AttachReferencePointDelegate>::.ctor()
inline void Dictionary_2__ctor_m74FEE57A3ED48C22A194D2B0DADFE822140BE275 (Dictionary_2_t2E0DF86FACC6F978A4B05B1BDDA0DEEE82FCD0B5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2E0DF86FACC6F978A4B05B1BDDA0DEEE82FCD0B5 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`3<UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>>::.ctor()
inline void Dictionary_2__ctor_m6E3C361936B8366A688BE5C136E7FA290F8D33BD (Dictionary_2_tF85F2837800957A1F17D2C5FD4CA7D5BC9609C8E * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF85F2837800957A1F17D2C5FD4CA7D5BC9609C8E *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRSessionSubsystem,System.IntPtr>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mFA768651E6837E984F25C0E2E4BA3D5FDF33E75C (Dictionary_2_tFE1C7A285CDDB61F4FD563A8D1EB39AF5A5A2B3E * __this, String_t* ___key0, Func_2_t3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFE1C7A285CDDB61F4FD563A8D1EB39AF5A5A2B3E *, String_t*, Func_2_t3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427 *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mF99892D844079B6407206DB17E470B6A05A0AE68 (Dictionary_2_t29A0B4802803E068766061600B339B644FF24895 * __this, String_t* ___key0, AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t29A0B4802803E068766061600B339B644FF24895 *, String_t*, AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.XR.ARExtensions.Promise`1<T> UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>::Invoke(UnityEngine.Experimental.XR.XRSessionSubsystem)
inline Promise_1_t66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF * AsyncDelegate_1_Invoke_m106CF5901441272D1BAAA67E469EDCD5A05201EB (AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 * __this, XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * ___sessionSubsystem0, const RuntimeMethod* method)
{
	return ((  Promise_1_t66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF * (*) (AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 *, XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F *, const RuntimeMethod*))AsyncDelegate_1_Invoke_m1A3781AC66C6952D17435E2CD5D3BA3BF935BF2C_gshared)(__this, ___sessionSubsystem0, method);
}
// UnityEngine.XR.ARExtensions.Promise`1<T> UnityEngine.XR.ARExtensions.Promise`1<UnityEngine.XR.ARExtensions.SessionAvailability>::CreateResolvedPromise(T)
inline Promise_1_t66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF * Promise_1_CreateResolvedPromise_m548F7D4E240E44FFBBB8D3942AF9ABD34C6DEE4A (int32_t ___result0, const RuntimeMethod* method)
{
	return ((  Promise_1_t66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF * (*) (int32_t, const RuntimeMethod*))Promise_1_CreateResolvedPromise_m033B95320CE69249E1F513DDE891F06C6FE561FE_gshared)(___result0, method);
}
// UnityEngine.XR.ARExtensions.Promise`1<T> UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>::Invoke(UnityEngine.Experimental.XR.XRSessionSubsystem)
inline Promise_1_tBD5BCA0938AD2478C8AC6953371BD3E24D657C15 * AsyncDelegate_1_Invoke_mE4C5BF27A0BA0E736BF0B6883E1FCE03CC2D94E4 (AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3 * __this, XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * ___sessionSubsystem0, const RuntimeMethod* method)
{
	return ((  Promise_1_tBD5BCA0938AD2478C8AC6953371BD3E24D657C15 * (*) (AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3 *, XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F *, const RuntimeMethod*))AsyncDelegate_1_Invoke_m1A3781AC66C6952D17435E2CD5D3BA3BF935BF2C_gshared)(__this, ___sessionSubsystem0, method);
}
// UnityEngine.XR.ARExtensions.Promise`1<T> UnityEngine.XR.ARExtensions.Promise`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>::CreateResolvedPromise(T)
inline Promise_1_tBD5BCA0938AD2478C8AC6953371BD3E24D657C15 * Promise_1_CreateResolvedPromise_m7EC83AB3701AC7742546873D51CF5D0C5E39569C (int32_t ___result0, const RuntimeMethod* method)
{
	return ((  Promise_1_tBD5BCA0938AD2478C8AC6953371BD3E24D657C15 * (*) (int32_t, const RuntimeMethod*))Promise_1_CreateResolvedPromise_m033B95320CE69249E1F513DDE891F06C6FE561FE_gshared)(___result0, method);
}
// System.Void UnityEngine.XR.ARExtensions.XRSessionExtensions::SetDefaultDelegates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionExtensions_SetDefaultDelegates_mBDA2E1F28A46EDBE8B6565D7DD1740DA5EAB82AD (const RuntimeMethod* method);
// !0 UnityEngine.IntegratedSubsystem`1<UnityEngine.Experimental.XR.XRSessionSubsystemDescriptor>::get_SubsystemDescriptor()
inline XRSessionSubsystemDescriptor_tF69268DD404379B461569E4268BEC52FAFC9F3B9 * IntegratedSubsystem_1_get_SubsystemDescriptor_mD686C3E61643ABD5B11A3DE0437B49F20A0A241B (IntegratedSubsystem_1_tB3B8A0259908C7FE09F3D2231645B5CA251A2B5C * __this, const RuntimeMethod* method)
{
	return ((  XRSessionSubsystemDescriptor_tF69268DD404379B461569E4268BEC52FAFC9F3B9 * (*) (IntegratedSubsystem_1_tB3B8A0259908C7FE09F3D2231645B5CA251A2B5C *, const RuntimeMethod*))IntegratedSubsystem_1_get_SubsystemDescriptor_m86F16F38EF5081A573F31E718A487469CBB3B012_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>::.ctor(System.Object,System.IntPtr)
inline void AsyncDelegate_1__ctor_mED44FB99D258C600108FE257AB413537111C093F (AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))AsyncDelegate_1__ctor_mF5C7A44A78E479C7D8999030E5765E2A4422A38D_gshared)(__this, ___object0, ___method1, method);
}
// TValue UnityEngine.XR.ARExtensions.RegistrationHelper::GetValueOrDefault<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,TValue)
inline AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3 * RegistrationHelper_GetValueOrDefault_TisString_t_TisAsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3_mF8B964C5BA09885FFA920703291DFC4A5EE01256 (Dictionary_2_t940582C11B83AD84AC1F67AF3F3F5FAE64B82503 * ___dictionary0, String_t* ___key1, AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3 * ___defaultValue2, const RuntimeMethod* method)
{
	return ((  AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3 * (*) (Dictionary_2_t940582C11B83AD84AC1F67AF3F3F5FAE64B82503 *, String_t*, AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3 *, const RuntimeMethod*))RegistrationHelper_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mC0ACB890D8B249516DCD2A750E54AFBAEB9609D5_gshared)(___dictionary0, ___key1, ___defaultValue2, method);
}
// System.Void UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>::.ctor(System.Object,System.IntPtr)
inline void AsyncDelegate_1__ctor_mA0DC00CAC1027C7822EB22B5E9AD00FE41F4BB95 (AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 *, RuntimeObject *, intptr_t, const RuntimeMethod*))AsyncDelegate_1__ctor_mF5C7A44A78E479C7D8999030E5765E2A4422A38D_gshared)(__this, ___object0, ___method1, method);
}
// TValue UnityEngine.XR.ARExtensions.RegistrationHelper::GetValueOrDefault<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,TValue)
inline AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 * RegistrationHelper_GetValueOrDefault_TisString_t_TisAsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659_mE8149BE813B79A07A9CCF8A262585C980A986BF4 (Dictionary_2_t29A0B4802803E068766061600B339B644FF24895 * ___dictionary0, String_t* ___key1, AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 * ___defaultValue2, const RuntimeMethod* method)
{
	return ((  AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 * (*) (Dictionary_2_t29A0B4802803E068766061600B339B644FF24895 *, String_t*, AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 *, const RuntimeMethod*))RegistrationHelper_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mC0ACB890D8B249516DCD2A750E54AFBAEB9609D5_gshared)(___dictionary0, ___key1, ___defaultValue2, method);
}
// System.Void System.Func`2<UnityEngine.Experimental.XR.XRSessionSubsystem,System.IntPtr>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m79647D280D912B4716600CA05F271A40E9BC7B11 (Func_2_t3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m64D91D0F4CEE0497B1377BAB3C64409E5CDCA78F_gshared)(__this, ___object0, ___method1, method);
}
// TValue UnityEngine.XR.ARExtensions.RegistrationHelper::GetValueOrDefault<System.String,System.Func`2<UnityEngine.Experimental.XR.XRSessionSubsystem,System.IntPtr>>(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,TValue)
inline Func_2_t3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427 * RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_2_t3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427_m88D7F0C1014A6A81B45395BA3A45D70CDA0A4E7C (Dictionary_2_tFE1C7A285CDDB61F4FD563A8D1EB39AF5A5A2B3E * ___dictionary0, String_t* ___key1, Func_2_t3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427 * ___defaultValue2, const RuntimeMethod* method)
{
	return ((  Func_2_t3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427 * (*) (Dictionary_2_tFE1C7A285CDDB61F4FD563A8D1EB39AF5A5A2B3E *, String_t*, Func_2_t3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427 *, const RuntimeMethod*))RegistrationHelper_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_mC0ACB890D8B249516DCD2A750E54AFBAEB9609D5_gshared)(___dictionary0, ___key1, ___defaultValue2, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus>>::.ctor()
inline void Dictionary_2__ctor_mCEE923EDBB9032A2899F5591894782A7036E3541 (Dictionary_2_t940582C11B83AD84AC1F67AF3F3F5FAE64B82503 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t940582C11B83AD84AC1F67AF3F3F5FAE64B82503 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions/AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>>::.ctor()
inline void Dictionary_2__ctor_m9A0762E02CCCCFD8E00375523F1E6ACC3E84211A (Dictionary_2_t29A0B4802803E068766061600B339B644FF24895 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t29A0B4802803E068766061600B339B644FF24895 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Func`2<UnityEngine.Experimental.XR.XRSessionSubsystem,System.IntPtr>>::.ctor()
inline void Dictionary_2__ctor_m2AD0C4A7179CDF70C8D84ED6B581250B869C74FF (Dictionary_2_tFE1C7A285CDDB61F4FD563A8D1EB39AF5A5A2B3E * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFE1C7A285CDDB61F4FD563A8D1EB39AF5A5A2B3E *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector2 UnityEngine.XR.ARExtensions.CameraIntrinsics::get_focalLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  CameraIntrinsics_get_focalLength_m6C9227C139EB42BF6B22278880AB1596ADED7991 (CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * __this, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_m_FocalLength_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  CameraIntrinsics_get_focalLength_m6C9227C139EB42BF6B22278880AB1596ADED7991_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * _thisAdjusted = reinterpret_cast<CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *>(__this + 1);
	return CameraIntrinsics_get_focalLength_m6C9227C139EB42BF6B22278880AB1596ADED7991_inline(_thisAdjusted, method);
}
// UnityEngine.Vector2 UnityEngine.XR.ARExtensions.CameraIntrinsics::get_principalPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  CameraIntrinsics_get_principalPoint_mC9CFA3636F2AA3942A0F72607CF52499971C955A (CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * __this, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_m_PrincipalPoint_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  CameraIntrinsics_get_principalPoint_mC9CFA3636F2AA3942A0F72607CF52499971C955A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * _thisAdjusted = reinterpret_cast<CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *>(__this + 1);
	return CameraIntrinsics_get_principalPoint_mC9CFA3636F2AA3942A0F72607CF52499971C955A_inline(_thisAdjusted, method);
}
// UnityEngine.Vector2Int UnityEngine.XR.ARExtensions.CameraIntrinsics::get_resolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  CameraIntrinsics_get_resolution_mCCCC68A5429FE331004D65A013FD5425477B4836 (CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * __this, const RuntimeMethod* method)
{
	{
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_0 = __this->get_m_Resolution_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  CameraIntrinsics_get_resolution_mCCCC68A5429FE331004D65A013FD5425477B4836_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * _thisAdjusted = reinterpret_cast<CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *>(__this + 1);
	return CameraIntrinsics_get_resolution_mCCCC68A5429FE331004D65A013FD5425477B4836_inline(_thisAdjusted, method);
}
// System.String UnityEngine.XR.ARExtensions.CameraIntrinsics::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CameraIntrinsics_ToString_m39D54E4360AF0C3D18B1D21E20FDEDC23D312242 (CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraIntrinsics_ToString_m39D54E4360AF0C3D18B1D21E20FDEDC23D312242_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = CameraIntrinsics_get_focalLength_m6C9227C139EB42BF6B22278880AB1596ADED7991_inline((CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *)__this, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = L_0;
		RuntimeObject * L_2 = Box(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var, &L_1);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = CameraIntrinsics_get_principalPoint_mC9CFA3636F2AA3942A0F72607CF52499971C955A_inline((CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *)__this, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = L_3;
		RuntimeObject * L_5 = Box(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var, &L_4);
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_6 = CameraIntrinsics_get_resolution_mCCCC68A5429FE331004D65A013FD5425477B4836_inline((CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *)__this, /*hidden argument*/NULL);
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_7 = L_6;
		RuntimeObject * L_8 = Box(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9 = String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99(_stringLiteral8ACABC1B8A6A5FFEBE5548DF5488F4E557AC0AA4, L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C  String_t* CameraIntrinsics_ToString_m39D54E4360AF0C3D18B1D21E20FDEDC23D312242_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * _thisAdjusted = reinterpret_cast<CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *>(__this + 1);
	return CameraIntrinsics_ToString_m39D54E4360AF0C3D18B1D21E20FDEDC23D312242(_thisAdjusted, method);
}
// System.Int32 UnityEngine.XR.ARExtensions.CameraIntrinsics::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraIntrinsics_GetHashCode_mFBD6C0173D4053A8E6B48789A6F337E4A746117E (CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * __this, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_0 = __this->get_address_of_m_FocalLength_0();
		int32_t L_1 = Vector2_GetHashCode_m028AB6B14EBC6D668CFA45BF6EDEF17E2C44EA54((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_0, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_2 = __this->get_address_of_m_PrincipalPoint_1();
		int32_t L_3 = Vector2_GetHashCode_m028AB6B14EBC6D668CFA45BF6EDEF17E2C44EA54((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_2, /*hidden argument*/NULL);
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * L_4 = __this->get_address_of_m_Resolution_2();
		int32_t L_5 = Vector2Int_GetHashCode_m73E874F4E94DF3D2603035E2E892873B139A7A9E((Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 *)L_4, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739))), (int32_t)L_5));
	}
}
IL2CPP_EXTERN_C  int32_t CameraIntrinsics_GetHashCode_mFBD6C0173D4053A8E6B48789A6F337E4A746117E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * _thisAdjusted = reinterpret_cast<CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *>(__this + 1);
	return CameraIntrinsics_GetHashCode_mFBD6C0173D4053A8E6B48789A6F337E4A746117E(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARExtensions.CameraIntrinsics::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraIntrinsics_Equals_m33825CB12EB4F5696AC4CD300A8EBA6E931973FF (CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraIntrinsics_Equals_m33825CB12EB4F5696AC4CD300A8EBA6E931973FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = CameraIntrinsics_Equals_m5F912B120B99A0F7572C816B389DD2FC29B3FABD((CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *)__this, ((*(CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *)((CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *)UnBox(L_1, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool CameraIntrinsics_Equals_m33825CB12EB4F5696AC4CD300A8EBA6E931973FF_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * _thisAdjusted = reinterpret_cast<CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *>(__this + 1);
	return CameraIntrinsics_Equals_m33825CB12EB4F5696AC4CD300A8EBA6E931973FF(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.ARExtensions.CameraIntrinsics::Equals(UnityEngine.XR.ARExtensions.CameraIntrinsics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraIntrinsics_Equals_m5F912B120B99A0F7572C816B389DD2FC29B3FABD (CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * __this, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447  ___other0, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_0 = __this->get_address_of_m_FocalLength_0();
		CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447  L_1 = ___other0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = L_1.get_m_FocalLength_0();
		bool L_3 = Vector2_Equals_mD6BF1A738E3CAF57BB46E604B030C072728F4EEB((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_4 = __this->get_address_of_m_PrincipalPoint_1();
		CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447  L_5 = ___other0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = L_5.get_m_PrincipalPoint_1();
		bool L_7 = Vector2_Equals_mD6BF1A738E3CAF57BB46E604B030C072728F4EEB((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * L_8 = __this->get_address_of_m_Resolution_2();
		CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447  L_9 = ___other0;
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_10 = L_9.get_m_Resolution_2();
		bool L_11 = Vector2Int_Equals_m65420C995F326F5C340E4825EA5E16BDE68F5A9C((Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 *)L_8, L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool CameraIntrinsics_Equals_m5F912B120B99A0F7572C816B389DD2FC29B3FABD_AdjustorThunk (RuntimeObject * __this, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447  ___other0, const RuntimeMethod* method)
{
	CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * _thisAdjusted = reinterpret_cast<CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *>(__this + 1);
	return CameraIntrinsics_Equals_m5F912B120B99A0F7572C816B389DD2FC29B3FABD(_thisAdjusted, ___other0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARExtensions.DefaultCameraConfigApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultCameraConfigApi__ctor_m59C8FA485ECEE299E8A62F60B7ACF7DA3C8ED834 (DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARExtensions.DefaultCameraImageApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultCameraImageApi__ctor_m391671B14DB15876DF5F47A03DFF5235B529D5BF (DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARExtensions.PlaneDetectionFlagsMaskAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaneDetectionFlagsMaskAttribute__ctor_m7C05D88B71F94DD80941F16B854E0BA2C2B83047 (PlaneDetectionFlagsMaskAttribute_t891FFF72B896019B6EF9B5BC66B66B7482D85E36 * __this, const RuntimeMethod* method)
{
	{
		PropertyAttribute__ctor_m7F5C473F39D5601486C1127DA0D52F2DC293FC35(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Boolean UnityEngine.XR.ARExtensions.SessionAvailabilityExtensions::IsSupported(UnityEngine.XR.ARExtensions.SessionAvailability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SessionAvailabilityExtensions_IsSupported_mE89A70FFBDDD94825575A8C38586350DDFC3066E (int32_t ___availability0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___availability0;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)2))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean UnityEngine.XR.ARExtensions.SessionAvailabilityExtensions::IsInstalled(UnityEngine.XR.ARExtensions.SessionAvailability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SessionAvailabilityExtensions_IsInstalled_m7AF26BB29A08880B44B92C2C45C0B754456E44CA (int32_t ___availability0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___availability0;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)4))) <= ((uint32_t)0)))? 1 : 0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions::RegisterIsPermissionGrantedHandler(System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraExtensions_RegisterIsPermissionGrantedHandler_mED0452B2B64A07923D45071C3CE63EBD2035B6D5 (String_t* ___subsystemId0, Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8 * ___handler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRCameraExtensions_RegisterIsPermissionGrantedHandler_mED0452B2B64A07923D45071C3CE63EBD2035B6D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var);
		Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03 * L_0 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_IsPermissionGrantedDelegates_9();
		String_t* L_1 = ___subsystemId0;
		Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8 * L_2 = ___handler1;
		NullCheck(L_0);
		Dictionary_2_set_Item_m8EEB1F24AC95767F888EE20C70EA6960B9312DEA(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_m8EEB1F24AC95767F888EE20C70EA6960B9312DEA_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions::RegisterGetNativePtrHandler(System.String,System.Func`2<UnityEngine.Experimental.XR.XRCameraSubsystem,System.IntPtr>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraExtensions_RegisterGetNativePtrHandler_m67E8B170C5D41F0AF47462B28177FA0B274258E8 (String_t* ___subsystemId0, Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E * ___handler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRCameraExtensions_RegisterGetNativePtrHandler_m67E8B170C5D41F0AF47462B28177FA0B274258E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var);
		Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896 * L_0 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_GetNativePtrDelegates_11();
		String_t* L_1 = ___subsystemId0;
		Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E * L_2 = ___handler1;
		NullCheck(L_0);
		Dictionary_2_set_Item_m0C701E4F356D0C2E031C58314260A570C0700D13(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_m0C701E4F356D0C2E031C58314260A570C0700D13_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions::RegisterCameraImageApi(System.String,UnityEngine.XR.ARExtensions.ICameraImageApi)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraExtensions_RegisterCameraImageApi_m83BD2D54ECEE79601C9542DC8C183FF4234DC6E1 (String_t* ___subsystemId0, RuntimeObject* ___api1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRCameraExtensions_RegisterCameraImageApi_m83BD2D54ECEE79601C9542DC8C183FF4234DC6E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var);
		Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C * L_0 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_CameraImageApis_12();
		String_t* L_1 = ___subsystemId0;
		RuntimeObject* L_2 = ___api1;
		NullCheck(L_0);
		Dictionary_2_set_Item_mF41CD7B59672D2F7944AD9948C85D87F71F55823(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_mF41CD7B59672D2F7944AD9948C85D87F71F55823_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions::RegisterCameraConfigApi(System.String,UnityEngine.XR.ARExtensions.ICameraConfigApi)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraExtensions_RegisterCameraConfigApi_m568201BADAF07EF9263812CF8D2536805EF8A0EA (String_t* ___subsystemId0, RuntimeObject* ___api1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRCameraExtensions_RegisterCameraConfigApi_m568201BADAF07EF9263812CF8D2536805EF8A0EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var);
		Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E * L_0 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_CameraConfigApis_13();
		String_t* L_1 = ___subsystemId0;
		RuntimeObject* L_2 = ___api1;
		NullCheck(L_0);
		Dictionary_2_set_Item_m1754CE8844755239EAE2B00C3E47FF21A52B8BEF(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_m1754CE8844755239EAE2B00C3E47FF21A52B8BEF_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions::RegisterTrySetFocusModeHandler(System.String,System.Func`3<UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraExtensions_RegisterTrySetFocusModeHandler_mCD5A16427CD17181184A29700DA48887AF153440 (String_t* ___subsystemId0, Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 * ___handler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRCameraExtensions_RegisterTrySetFocusModeHandler_mCD5A16427CD17181184A29700DA48887AF153440_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var);
		Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18 * L_0 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_TrySetFocusModeDelegates_14();
		String_t* L_1 = ___subsystemId0;
		Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 * L_2 = ___handler1;
		NullCheck(L_0);
		Dictionary_2_set_Item_mDCCEBD39F3A8292A36004B8E4A45BAE086480A80(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_mDCCEBD39F3A8292A36004B8E4A45BAE086480A80_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions::RegisterTryGetIntrinsicsHandler(System.String,UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetIntrinsicsDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraExtensions_RegisterTryGetIntrinsicsHandler_mAEB9570EE00D6B928500CD6DB39BE7174C877EB6 (String_t* ___subsystemId0, TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 * ___handler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRCameraExtensions_RegisterTryGetIntrinsicsHandler_mAEB9570EE00D6B928500CD6DB39BE7174C877EB6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var);
		Dictionary_2_tE4065ACCCAB4F818974D5F60A984FEDECA6AFBD9 * L_0 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_TryGetIntrinsicsDelegates_15();
		String_t* L_1 = ___subsystemId0;
		TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 * L_2 = ___handler1;
		NullCheck(L_0);
		Dictionary_2_set_Item_mA157E660E1AAACB87822FAF5A5860C6E2F07F1D2(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_mA157E660E1AAACB87822FAF5A5860C6E2F07F1D2_RuntimeMethod_var);
		return;
	}
}
// System.Boolean UnityEngine.XR.ARExtensions.XRCameraExtensions::TryGetColorCorrection(UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRCameraExtensions_TryGetColorCorrection_m4A597222BE9D634F970F7FF8AD2653A51C1EDE5A (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___cameraSubsystem0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * ___color1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRCameraExtensions_TryGetColorCorrection_m4A597222BE9D634F970F7FF8AD2653A51C1EDE5A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * L_0 = ___cameraSubsystem0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralC28544CF6E443E95BB4A90955468E5F3F7D37199, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XRCameraExtensions_TryGetColorCorrection_m4A597222BE9D634F970F7FF8AD2653A51C1EDE5A_RuntimeMethod_var);
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var);
		TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * L_2 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_TryGetColorCorrectionDelegate_1();
		XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * L_3 = ___cameraSubsystem0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * L_4 = ___color1;
		NullCheck(L_2);
		bool L_5 = TryGetColorCorrectionDelegate_Invoke_mD6C0366FB0745ED1F21875DBA300B7162EAB6DC3(L_2, L_3, (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *)L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean UnityEngine.XR.ARExtensions.XRCameraExtensions::TrySetFocusMode(UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRCameraExtensions_TrySetFocusMode_m1AB7ABC44233BC4E9A75F1DE743A35B5EEC46D53 (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___cameraSubsystem0, int32_t ___mode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRCameraExtensions_TrySetFocusMode_m1AB7ABC44233BC4E9A75F1DE743A35B5EEC46D53_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * L_0 = ___cameraSubsystem0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralC28544CF6E443E95BB4A90955468E5F3F7D37199, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XRCameraExtensions_TrySetFocusMode_m1AB7ABC44233BC4E9A75F1DE743A35B5EEC46D53_RuntimeMethod_var);
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var);
		Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 * L_2 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_TrySetFocusModeDelegate_7();
		XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * L_3 = ___cameraSubsystem0;
		int32_t L_4 = ___mode1;
		NullCheck(L_2);
		bool L_5 = Func_3_Invoke_mB755438CB6927A8979F2D00C8706027F548397E5(L_2, L_3, L_4, /*hidden argument*/Func_3_Invoke_mB755438CB6927A8979F2D00C8706027F548397E5_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions::ActivateExtensions(UnityEngine.Experimental.XR.XRCameraSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraExtensions_ActivateExtensions_m5F7108D3549C87AA30672C2192B6739FE0FEFE79 (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___cameraSubsystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRCameraExtensions_ActivateExtensions_m5F7108D3549C87AA30672C2192B6739FE0FEFE79_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * L_0 = ___cameraSubsystem0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var);
		XRCameraExtensions_SetDefaultDelegates_m9B88AD98143044329A6EB7B6AD86F61F2F8F1C63(/*hidden argument*/NULL);
		return;
	}

IL_0009:
	{
		XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * L_1 = ___cameraSubsystem0;
		NullCheck(L_1);
		XRCameraSubsystemDescriptor_t46972B2D1CC489288B72CD0856AB7675B5EEEE6D * L_2 = IntegratedSubsystem_1_get_SubsystemDescriptor_mCA5319329F86C199ADE0C11C103ED6ED1C15B38A(L_1, /*hidden argument*/IntegratedSubsystem_1_get_SubsystemDescriptor_mCA5319329F86C199ADE0C11C103ED6ED1C15B38A_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_3 = IntegratedSubsystemDescriptor_get_id_mD53ED8BDEC2B3748FA8B9FC77951D97CC710A5A6(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var);
		Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03 * L_4 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_IsPermissionGrantedDelegates_9();
		String_t* L_5 = V_0;
		Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8 * L_6 = (Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8 *)il2cpp_codegen_object_new(Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8_il2cpp_TypeInfo_var);
		Func_2__ctor_mE24D6BB638CDBE042618FD7C42A30F92994B031C(L_6, NULL, (intptr_t)((intptr_t)XRCameraExtensions_DefaultIsPermissionGranted_mF4F00208F05CF90929466881AA740971C4961092_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mE24D6BB638CDBE042618FD7C42A30F92994B031C_RuntimeMethod_var);
		Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8 * L_7 = RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8_mBD11FC1155A5BE7D77FFAADC61FFC0C9FE5B95B8(L_4, L_5, L_6, /*hidden argument*/RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8_mBD11FC1155A5BE7D77FFAADC61FFC0C9FE5B95B8_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_IsPermissionGrantedDelegate_0(L_7);
		Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2 * L_8 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_TryGetColorCorrectionDelegates_10();
		String_t* L_9 = V_0;
		TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * L_10 = (TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 *)il2cpp_codegen_object_new(TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8_il2cpp_TypeInfo_var);
		TryGetColorCorrectionDelegate__ctor_m835B880C69E2407680EAC8F3C20AC53185065E33(L_10, NULL, (intptr_t)((intptr_t)XRCameraExtensions_DefaultTryGetColorCorrection_mB07296284A1CD1FFD67C27DDFC9F9B0B1FC7B171_RuntimeMethod_var), /*hidden argument*/NULL);
		TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * L_11 = RegistrationHelper_GetValueOrDefault_TisString_t_TisTryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8_m61A7834239CA4AB5A641B628FCB56987C35589D1(L_8, L_9, L_10, /*hidden argument*/RegistrationHelper_GetValueOrDefault_TisString_t_TisTryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8_m61A7834239CA4AB5A641B628FCB56987C35589D1_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_TryGetColorCorrectionDelegate_1(L_11);
		Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896 * L_12 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_GetNativePtrDelegates_11();
		String_t* L_13 = V_0;
		Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E * L_14 = (Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E *)il2cpp_codegen_object_new(Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E_il2cpp_TypeInfo_var);
		Func_2__ctor_mB70921C3E2F09D928DD6CB56EDB76B0740950837(L_14, NULL, (intptr_t)((intptr_t)XRCameraExtensions_DefaultGetNativePtr_m7FCC798A545F092E8E88C5E29055F3972211B922_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mB70921C3E2F09D928DD6CB56EDB76B0740950837_RuntimeMethod_var);
		Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E * L_15 = RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E_m6210B7180E0BB217CCA3E6594211EFF4A07FC608(L_12, L_13, L_14, /*hidden argument*/RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E_m6210B7180E0BB217CCA3E6594211EFF4A07FC608_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_GetNativePtrDelegate_2(L_15);
		Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C * L_16 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_CameraImageApis_12();
		String_t* L_17 = V_0;
		DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB * L_18 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_DefaultCameraImageApi_4();
		RuntimeObject* L_19 = RegistrationHelper_GetValueOrDefault_TisString_t_TisICameraImageApi_tBAC003481E172628D623F3F9E7CFB8D2FD84EEE4_m1355429B4894B08DB4C8610770DC753A0CD717DE(L_16, L_17, L_18, /*hidden argument*/RegistrationHelper_GetValueOrDefault_TisString_t_TisICameraImageApi_tBAC003481E172628D623F3F9E7CFB8D2FD84EEE4_m1355429B4894B08DB4C8610770DC753A0CD717DE_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_CameraImageApi_3(L_19);
		Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E * L_20 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_CameraConfigApis_13();
		String_t* L_21 = V_0;
		DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091 * L_22 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_DefaultCameraConfigApi_6();
		RuntimeObject* L_23 = RegistrationHelper_GetValueOrDefault_TisString_t_TisICameraConfigApi_t5694F28C505D2CA91EF77838138F419261B240BA_mD6F28B8DC5EB1F9F670AACA1C9521D3473E8D189(L_20, L_21, L_22, /*hidden argument*/RegistrationHelper_GetValueOrDefault_TisString_t_TisICameraConfigApi_t5694F28C505D2CA91EF77838138F419261B240BA_mD6F28B8DC5EB1F9F670AACA1C9521D3473E8D189_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_CameraConfigApi_5(L_23);
		Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18 * L_24 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_TrySetFocusModeDelegates_14();
		String_t* L_25 = V_0;
		Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 * L_26 = (Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 *)il2cpp_codegen_object_new(Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3_il2cpp_TypeInfo_var);
		Func_3__ctor_m9EFB55F925F47E45BE7C8811F004C9BC82B77149(L_26, NULL, (intptr_t)((intptr_t)XRCameraExtensions_DefaultTrySetFocusMode_m396B373A1FEBF7FF74C89E4CBC0082598CA41FD8_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m9EFB55F925F47E45BE7C8811F004C9BC82B77149_RuntimeMethod_var);
		Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 * L_27 = RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3_m97C70CD7BCCD482831332935DADA118B4285FFE4(L_24, L_25, L_26, /*hidden argument*/RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3_m97C70CD7BCCD482831332935DADA118B4285FFE4_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_TrySetFocusModeDelegate_7(L_27);
		Dictionary_2_tE4065ACCCAB4F818974D5F60A984FEDECA6AFBD9 * L_28 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_TryGetIntrinsicsDelegates_15();
		String_t* L_29 = V_0;
		TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 * L_30 = (TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 *)il2cpp_codegen_object_new(TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389_il2cpp_TypeInfo_var);
		TryGetIntrinsicsDelegate__ctor_mD8B74D11E32B1BCE8EAEFA7575C7664BB3AEF9AE(L_30, NULL, (intptr_t)((intptr_t)XRCameraExtensions_DefaultTryGetIntrinsics_mEA139700852C54138B3A40D1A90D21B3FA1B8096_RuntimeMethod_var), /*hidden argument*/NULL);
		TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 * L_31 = RegistrationHelper_GetValueOrDefault_TisString_t_TisTryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389_mBDCC5B8F3FDC544D361E13600D3A9AE8F7BA2B0F(L_28, L_29, L_30, /*hidden argument*/RegistrationHelper_GetValueOrDefault_TisString_t_TisTryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389_mBDCC5B8F3FDC544D361E13600D3A9AE8F7BA2B0F_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_TryGetIntrinsicsDelegate_8(L_31);
		return;
	}
}
// System.Boolean UnityEngine.XR.ARExtensions.XRCameraExtensions::DefaultIsPermissionGranted(UnityEngine.Experimental.XR.XRCameraSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRCameraExtensions_DefaultIsPermissionGranted_mF4F00208F05CF90929466881AA740971C4961092 (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___cameraSubsystem0, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean UnityEngine.XR.ARExtensions.XRCameraExtensions::DefaultTryGetColorCorrection(UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRCameraExtensions_DefaultTryGetColorCorrection_mB07296284A1CD1FFD67C27DDFC9F9B0B1FC7B171 (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___cameraSubsystem0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * ___color1, const RuntimeMethod* method)
{
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * L_0 = ___color1;
		il2cpp_codegen_initobj(L_0, sizeof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 ));
		return (bool)0;
	}
}
// System.IntPtr UnityEngine.XR.ARExtensions.XRCameraExtensions::DefaultGetNativePtr(UnityEngine.Experimental.XR.XRCameraSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t XRCameraExtensions_DefaultGetNativePtr_m7FCC798A545F092E8E88C5E29055F3972211B922 (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___cameraSubsystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRCameraExtensions_DefaultGetNativePtr_m7FCC798A545F092E8E88C5E29055F3972211B922_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return (intptr_t)(0);
	}
}
// System.Boolean UnityEngine.XR.ARExtensions.XRCameraExtensions::DefaultTrySetFocusMode(UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraFocusMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRCameraExtensions_DefaultTrySetFocusMode_m396B373A1FEBF7FF74C89E4CBC0082598CA41FD8 (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___cameraSubsystem0, int32_t ___mode1, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.ARExtensions.XRCameraExtensions::DefaultTryGetIntrinsics(UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraIntrinsics&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRCameraExtensions_DefaultTryGetIntrinsics_mEA139700852C54138B3A40D1A90D21B3FA1B8096 (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___cameraSubsystem0, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * ___cameraIntrinsics1, const RuntimeMethod* method)
{
	{
		CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * L_0 = ___cameraIntrinsics1;
		il2cpp_codegen_initobj(L_0, sizeof(CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 ));
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions::SetDefaultDelegates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraExtensions_SetDefaultDelegates_m9B88AD98143044329A6EB7B6AD86F61F2F8F1C63 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRCameraExtensions_SetDefaultDelegates_m9B88AD98143044329A6EB7B6AD86F61F2F8F1C63_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8 * L_0 = (Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8 *)il2cpp_codegen_object_new(Func_2_tC50BE8185BE20E5E701AF212F8FDF8D6FF528AD8_il2cpp_TypeInfo_var);
		Func_2__ctor_mE24D6BB638CDBE042618FD7C42A30F92994B031C(L_0, NULL, (intptr_t)((intptr_t)XRCameraExtensions_DefaultIsPermissionGranted_mF4F00208F05CF90929466881AA740971C4961092_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mE24D6BB638CDBE042618FD7C42A30F92994B031C_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_IsPermissionGrantedDelegate_0(L_0);
		TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * L_1 = (TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 *)il2cpp_codegen_object_new(TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8_il2cpp_TypeInfo_var);
		TryGetColorCorrectionDelegate__ctor_m835B880C69E2407680EAC8F3C20AC53185065E33(L_1, NULL, (intptr_t)((intptr_t)XRCameraExtensions_DefaultTryGetColorCorrection_mB07296284A1CD1FFD67C27DDFC9F9B0B1FC7B171_RuntimeMethod_var), /*hidden argument*/NULL);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_TryGetColorCorrectionDelegate_1(L_1);
		Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E * L_2 = (Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E *)il2cpp_codegen_object_new(Func_2_t0076092BB5420B9DA3DDB3BD1AD3722674B1108E_il2cpp_TypeInfo_var);
		Func_2__ctor_mB70921C3E2F09D928DD6CB56EDB76B0740950837(L_2, NULL, (intptr_t)((intptr_t)XRCameraExtensions_DefaultGetNativePtr_m7FCC798A545F092E8E88C5E29055F3972211B922_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mB70921C3E2F09D928DD6CB56EDB76B0740950837_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_GetNativePtrDelegate_2(L_2);
		DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB * L_3 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_DefaultCameraImageApi_4();
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_CameraImageApi_3(L_3);
		DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091 * L_4 = ((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->get_s_DefaultCameraConfigApi_6();
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_CameraConfigApi_5(L_4);
		Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 * L_5 = (Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3 *)il2cpp_codegen_object_new(Func_3_tCFF6BEF2B6ADFBFEB77E1F40A2FDCB0DD667D8D3_il2cpp_TypeInfo_var);
		Func_3__ctor_m9EFB55F925F47E45BE7C8811F004C9BC82B77149(L_5, NULL, (intptr_t)((intptr_t)XRCameraExtensions_DefaultTrySetFocusMode_m396B373A1FEBF7FF74C89E4CBC0082598CA41FD8_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m9EFB55F925F47E45BE7C8811F004C9BC82B77149_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_TrySetFocusModeDelegate_7(L_5);
		TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 * L_6 = (TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 *)il2cpp_codegen_object_new(TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389_il2cpp_TypeInfo_var);
		TryGetIntrinsicsDelegate__ctor_mD8B74D11E32B1BCE8EAEFA7575C7664BB3AEF9AE(L_6, NULL, (intptr_t)((intptr_t)XRCameraExtensions_DefaultTryGetIntrinsics_mEA139700852C54138B3A40D1A90D21B3FA1B8096_RuntimeMethod_var), /*hidden argument*/NULL);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_TryGetIntrinsicsDelegate_8(L_6);
		return;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraExtensions__cctor_m47EFC68F40A72702D571E5C4DEECD26517D2923D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRCameraExtensions__cctor_m47EFC68F40A72702D571E5C4DEECD26517D2923D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03 * L_0 = (Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03 *)il2cpp_codegen_object_new(Dictionary_2_t7BB4BE5364ABCCE1D1AA8B802894E15BA9113A03_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mDE8D441175FF39143149503BCE484A53AB593FC0(L_0, /*hidden argument*/Dictionary_2__ctor_mDE8D441175FF39143149503BCE484A53AB593FC0_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_IsPermissionGrantedDelegates_9(L_0);
		Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2 * L_1 = (Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2 *)il2cpp_codegen_object_new(Dictionary_2_tF439D34B1269900CAC7833FE23EBA7D56B257ED2_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m220ABCA24A5187DE88E208E9E85624AFF9E429FB(L_1, /*hidden argument*/Dictionary_2__ctor_m220ABCA24A5187DE88E208E9E85624AFF9E429FB_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_TryGetColorCorrectionDelegates_10(L_1);
		Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896 * L_2 = (Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896 *)il2cpp_codegen_object_new(Dictionary_2_t628B7F998338783478D8FE4E3511699397B65896_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9EAE1511A3947B9424311D32A6727C19E776D1BB(L_2, /*hidden argument*/Dictionary_2__ctor_m9EAE1511A3947B9424311D32A6727C19E776D1BB_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_GetNativePtrDelegates_11(L_2);
		Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C * L_3 = (Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C *)il2cpp_codegen_object_new(Dictionary_2_t06FDA41355DD07A6B7FDD89F7DC87B3E95AB227C_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2F2C81BE42168DB8D8C8E0097988528AAA2138B8(L_3, /*hidden argument*/Dictionary_2__ctor_m2F2C81BE42168DB8D8C8E0097988528AAA2138B8_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_CameraImageApis_12(L_3);
		Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E * L_4 = (Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E *)il2cpp_codegen_object_new(Dictionary_2_tBE54B47BA0A9DFAB16E0E7C696DDB8AD599D858E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m0D1D88C8F7FADB0811A56FC188679877BF0E68A7(L_4, /*hidden argument*/Dictionary_2__ctor_m0D1D88C8F7FADB0811A56FC188679877BF0E68A7_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_CameraConfigApis_13(L_4);
		Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18 * L_5 = (Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18 *)il2cpp_codegen_object_new(Dictionary_2_t9ECC2BD2DC56B1F04DD002305804941D4FB0EB18_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD418F6BAA7C990CEACBE06A97FC00177355A055F(L_5, /*hidden argument*/Dictionary_2__ctor_mD418F6BAA7C990CEACBE06A97FC00177355A055F_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_TrySetFocusModeDelegates_14(L_5);
		Dictionary_2_tE4065ACCCAB4F818974D5F60A984FEDECA6AFBD9 * L_6 = (Dictionary_2_tE4065ACCCAB4F818974D5F60A984FEDECA6AFBD9 *)il2cpp_codegen_object_new(Dictionary_2_tE4065ACCCAB4F818974D5F60A984FEDECA6AFBD9_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m38BD50020AAAC75533326A970505779889322025(L_6, /*hidden argument*/Dictionary_2__ctor_m38BD50020AAAC75533326A970505779889322025_RuntimeMethod_var);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_TryGetIntrinsicsDelegates_15(L_6);
		DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB * L_7 = (DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB *)il2cpp_codegen_object_new(DefaultCameraImageApi_t32807EEA82DF3B067158E1DCEA117A577B5E3BCB_il2cpp_TypeInfo_var);
		DefaultCameraImageApi__ctor_m391671B14DB15876DF5F47A03DFF5235B529D5BF(L_7, /*hidden argument*/NULL);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_DefaultCameraImageApi_4(L_7);
		DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091 * L_8 = (DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091 *)il2cpp_codegen_object_new(DefaultCameraConfigApi_t125599F6D1891BEF834E1B20C71C503AB27F4091_il2cpp_TypeInfo_var);
		DefaultCameraConfigApi__ctor_m59C8FA485ECEE299E8A62F60B7ACF7DA3C8ED834(L_8, /*hidden argument*/NULL);
		((XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_StaticFields*)il2cpp_codegen_static_fields_for(XRCameraExtensions_t9F3CD7B3BF04287369EE72FE0B6521D7A00C286D_il2cpp_TypeInfo_var))->set_s_DefaultCameraConfigApi_6(L_8);
		XRCameraExtensions_SetDefaultDelegates_m9B88AD98143044329A6EB7B6AD86F61F2F8F1C63(/*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetColorCorrectionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TryGetColorCorrectionDelegate__ctor_m835B880C69E2407680EAC8F3C20AC53185065E33 (TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetColorCorrectionDelegate::Invoke(UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TryGetColorCorrectionDelegate_Invoke_mD6C0366FB0745ED1F21875DBA300B7162EAB6DC3 (TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * __this, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___cameraSubsystems0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * ___color1, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef bool (*FunctionPointerType) (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___cameraSubsystems0, ___color1, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___cameraSubsystems0, ___color1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(targetMethod, ___cameraSubsystems0, ___color1);
					else
						result = GenericVirtFuncInvoker1< bool, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(targetMethod, ___cameraSubsystems0, ___color1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___cameraSubsystems0, ___color1);
					else
						result = VirtFuncInvoker1< bool, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___cameraSubsystems0, ___color1);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___cameraSubsystems0, ___color1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef bool (*FunctionPointerType) (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___cameraSubsystems0, ___color1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< bool, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(targetMethod, targetThis, ___cameraSubsystems0, ___color1);
					else
						result = GenericVirtFuncInvoker2< bool, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(targetMethod, targetThis, ___cameraSubsystems0, ___color1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< bool, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___cameraSubsystems0, ___color1);
					else
						result = VirtFuncInvoker2< bool, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___cameraSubsystems0, ___color1);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___cameraSubsystems0, ___color1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetColorCorrectionDelegate::BeginInvoke(UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.Color&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TryGetColorCorrectionDelegate_BeginInvoke_m73D73992BB6E18B8DFB63D6C18D4157A709D98AA (TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * __this, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___cameraSubsystems0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * ___color1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TryGetColorCorrectionDelegate_BeginInvoke_m73D73992BB6E18B8DFB63D6C18D4157A709D98AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___cameraSubsystems0;
	__d_args[1] = Box(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2_il2cpp_TypeInfo_var, &*___color1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Boolean UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetColorCorrectionDelegate::EndInvoke(UnityEngine.Color&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TryGetColorCorrectionDelegate_EndInvoke_mB92BFC3B9D3C4E8738EBC1AC590BB930F6482882 (TryGetColorCorrectionDelegate_t30B930C66D1DCEC1490F1A6624404BA665652BD8 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * ___color0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___color0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetIntrinsicsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TryGetIntrinsicsDelegate__ctor_mD8B74D11E32B1BCE8EAEFA7575C7664BB3AEF9AE (TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetIntrinsicsDelegate::Invoke(UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraIntrinsics&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TryGetIntrinsicsDelegate_Invoke_m5434568776EDED1931BE4083BBCCE0EE1217E154 (TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 * __this, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___cameraSubsystems0, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * ___cameraIntrinsics1, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef bool (*FunctionPointerType) (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___cameraSubsystems0, ___cameraIntrinsics1, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___cameraSubsystems0, ___cameraIntrinsics1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * >::Invoke(targetMethod, ___cameraSubsystems0, ___cameraIntrinsics1);
					else
						result = GenericVirtFuncInvoker1< bool, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * >::Invoke(targetMethod, ___cameraSubsystems0, ___cameraIntrinsics1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___cameraSubsystems0, ___cameraIntrinsics1);
					else
						result = VirtFuncInvoker1< bool, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___cameraSubsystems0, ___cameraIntrinsics1);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___cameraSubsystems0, ___cameraIntrinsics1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef bool (*FunctionPointerType) (XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___cameraSubsystems0, ___cameraIntrinsics1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< bool, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * >::Invoke(targetMethod, targetThis, ___cameraSubsystems0, ___cameraIntrinsics1);
					else
						result = GenericVirtFuncInvoker2< bool, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * >::Invoke(targetMethod, targetThis, ___cameraSubsystems0, ___cameraIntrinsics1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< bool, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___cameraSubsystems0, ___cameraIntrinsics1);
					else
						result = VirtFuncInvoker2< bool, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___cameraSubsystems0, ___cameraIntrinsics1);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 *, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___cameraSubsystems0, ___cameraIntrinsics1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetIntrinsicsDelegate::BeginInvoke(UnityEngine.Experimental.XR.XRCameraSubsystem,UnityEngine.XR.ARExtensions.CameraIntrinsics&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TryGetIntrinsicsDelegate_BeginInvoke_mCEF48EB60EEE5441A59A7C41843D8863DC603D8C (TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 * __this, XRCameraSubsystem_t9271DB5D8FEDD3431246FCB6D9257A940246E701 * ___cameraSubsystems0, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * ___cameraIntrinsics1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TryGetIntrinsicsDelegate_BeginInvoke_mCEF48EB60EEE5441A59A7C41843D8863DC603D8C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___cameraSubsystems0;
	__d_args[1] = Box(CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447_il2cpp_TypeInfo_var, &*___cameraIntrinsics1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Boolean UnityEngine.XR.ARExtensions.XRCameraExtensions_TryGetIntrinsicsDelegate::EndInvoke(UnityEngine.XR.ARExtensions.CameraIntrinsics&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TryGetIntrinsicsDelegate_EndInvoke_mD1A0DA05B21C9A6CF8C0179AB4ABEE33CA7300EE (TryGetIntrinsicsDelegate_tE7DAB3B4CE86B2550CAD4CF9AB4C44F99A3DE389 * __this, CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * ___cameraIntrinsics0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___cameraIntrinsics0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARExtensions.XRPlaneExtensions::RegisterGetTrackingStateHandler(System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Experimental.XR.TrackingState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneExtensions_RegisterGetTrackingStateHandler_m2CD375B880EC1FDD19F33675A299B2E8C59BC60D (String_t* ___subsystemId0, Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 * ___handler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPlaneExtensions_RegisterGetTrackingStateHandler_m2CD375B880EC1FDD19F33675A299B2E8C59BC60D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var);
		Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334 * L_0 = ((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->get_s_GetTrackingStateDelegates_4();
		String_t* L_1 = ___subsystemId0;
		Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 * L_2 = ___handler1;
		NullCheck(L_0);
		Dictionary_2_set_Item_mADAB602D07985E48AC31A4CF3DBA19B836D41E78(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_mADAB602D07985E48AC31A4CF3DBA19B836D41E78_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRPlaneExtensions::RegisterGetNativePtrHandler(System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneExtensions_RegisterGetNativePtrHandler_mFF73D901D5DBBCB8E6AE8E9A624FCE7E75E4DE43 (String_t* ___subsystemId0, Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828 * ___handler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPlaneExtensions_RegisterGetNativePtrHandler_mFF73D901D5DBBCB8E6AE8E9A624FCE7E75E4DE43_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var);
		Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504 * L_0 = ((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->get_s_GetNativePtrDelegates_3();
		String_t* L_1 = ___subsystemId0;
		Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828 * L_2 = ___handler1;
		NullCheck(L_0);
		Dictionary_2_set_Item_m1AE870C391863BB5CC45B25852032E8A3898E32E(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_m1AE870C391863BB5CC45B25852032E8A3898E32E_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRPlaneExtensions::RegisterTrySetPlaneDetectionFlagsHandler(System.String,System.Func`3<UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneExtensions_RegisterTrySetPlaneDetectionFlagsHandler_mDC0A19589E7969643C0EF5920C16585E545D341F (String_t* ___subsystemId0, Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 * ___handler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPlaneExtensions_RegisterTrySetPlaneDetectionFlagsHandler_mDC0A19589E7969643C0EF5920C16585E545D341F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var);
		Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C * L_0 = ((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->get_s_TrySetPlaneDetectionFlagsDelegates_5();
		String_t* L_1 = ___subsystemId0;
		Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 * L_2 = ___handler1;
		NullCheck(L_0);
		Dictionary_2_set_Item_mF9BA061CBECCB241F3B5934FD46B09CBC8D5A0A2(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_mF9BA061CBECCB241F3B5934FD46B09CBC8D5A0A2_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.Experimental.XR.TrackingState UnityEngine.XR.ARExtensions.XRPlaneExtensions::GetTrackingState(UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRPlaneExtensions_GetTrackingState_m13B5E36C047B76ED18FFDE896FCA71A709D972C8 (XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * ___planeSubsystem0, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___planeId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPlaneExtensions_GetTrackingState_m13B5E36C047B76ED18FFDE896FCA71A709D972C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * L_0 = ___planeSubsystem0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralB9BC357DEC96784E9811974A390666B2E82E6A6B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XRPlaneExtensions_GetTrackingState_m13B5E36C047B76ED18FFDE896FCA71A709D972C8_RuntimeMethod_var);
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var);
		Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 * L_2 = ((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->get_s_GetTrackingStateDelegate_1();
		XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * L_3 = ___planeSubsystem0;
		TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  L_4 = ___planeId1;
		NullCheck(L_2);
		int32_t L_5 = Func_3_Invoke_m2050474BE35CAC1B6B87848214E445703F0B0FEA(L_2, L_3, L_4, /*hidden argument*/Func_3_Invoke_m2050474BE35CAC1B6B87848214E445703F0B0FEA_RuntimeMethod_var);
		return L_5;
	}
}
// UnityEngine.Experimental.XR.TrackingState UnityEngine.XR.ARExtensions.XRPlaneExtensions::DefaultGetTrackingState(UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRPlaneExtensions_DefaultGetTrackingState_m109B0DC9AEC93FE64BC1C1364818F4FE8BD7BFBC (XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * ___planeSubsystem0, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___planeId1, const RuntimeMethod* method)
{
	{
		return (int32_t)(0);
	}
}
// System.Boolean UnityEngine.XR.ARExtensions.XRPlaneExtensions::TrySetPlaneDetectionFlags(UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPlaneExtensions_TrySetPlaneDetectionFlags_m6A51BFB0AF774F9DB8FE38AF91A15D00E0574BF4 (XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * ___planeSubsystem0, int32_t ___flags1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPlaneExtensions_TrySetPlaneDetectionFlags_m6A51BFB0AF774F9DB8FE38AF91A15D00E0574BF4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * L_0 = ___planeSubsystem0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralB9BC357DEC96784E9811974A390666B2E82E6A6B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XRPlaneExtensions_TrySetPlaneDetectionFlags_m6A51BFB0AF774F9DB8FE38AF91A15D00E0574BF4_RuntimeMethod_var);
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var);
		Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 * L_2 = ((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->get_s_TrySetPlaneDetectionFlagsDelegate_2();
		XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * L_3 = ___planeSubsystem0;
		int32_t L_4 = ___flags1;
		NullCheck(L_2);
		bool L_5 = Func_3_Invoke_m49DE3A72CF4ECC2FE9CDA93D7F6B6C931A046AAB(L_2, L_3, L_4, /*hidden argument*/Func_3_Invoke_m49DE3A72CF4ECC2FE9CDA93D7F6B6C931A046AAB_RuntimeMethod_var);
		return L_5;
	}
}
// System.Boolean UnityEngine.XR.ARExtensions.XRPlaneExtensions::DefaultTrySetPlaneDetectionFlags(UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.XR.ARExtensions.PlaneDetectionFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPlaneExtensions_DefaultTrySetPlaneDetectionFlags_m923E9988964EF262D478E43D2E13A671BCA8BE17 (XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * ___planeSubsystem0, int32_t ___flags1, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.IntPtr UnityEngine.XR.ARExtensions.XRPlaneExtensions::DefaultGetNativePtr(UnityEngine.Experimental.XR.XRPlaneSubsystem,UnityEngine.Experimental.XR.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t XRPlaneExtensions_DefaultGetNativePtr_m525A8606FE4568D1A90B5278EB8EF59D20013EBF (XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * ___referencePointSubsystem0, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___trackableId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPlaneExtensions_DefaultGetNativePtr_m525A8606FE4568D1A90B5278EB8EF59D20013EBF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return (intptr_t)(0);
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRPlaneExtensions::ActivateExtensions(UnityEngine.Experimental.XR.XRPlaneSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneExtensions_ActivateExtensions_m954952222D0E4BF704FCD2418448A54731F866C3 (XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * ___planeSubsystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPlaneExtensions_ActivateExtensions_m954952222D0E4BF704FCD2418448A54731F866C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * L_0 = ___planeSubsystem0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var);
		XRPlaneExtensions_SetDefaultDelegates_m2C55C67EFCB955C7FF07F4668CF1019AA74B2DB6(/*hidden argument*/NULL);
		return;
	}

IL_0009:
	{
		XRPlaneSubsystem_t3ABC3FDCBC5AC6F1CAA30E08A89EFD7F9D49D72B * L_1 = ___planeSubsystem0;
		NullCheck(L_1);
		XRPlaneSubsystemDescriptor_t0F6814B2CAD6778836A3A230A200600556C57D7F * L_2 = IntegratedSubsystem_1_get_SubsystemDescriptor_m9252E3E25F1B1FA86102F3F097BD2C36869AFD01(L_1, /*hidden argument*/IntegratedSubsystem_1_get_SubsystemDescriptor_m9252E3E25F1B1FA86102F3F097BD2C36869AFD01_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_3 = IntegratedSubsystemDescriptor_get_id_mD53ED8BDEC2B3748FA8B9FC77951D97CC710A5A6(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var);
		Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504 * L_4 = ((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->get_s_GetNativePtrDelegates_3();
		String_t* L_5 = V_0;
		Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828 * L_6 = (Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828 *)il2cpp_codegen_object_new(Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828_il2cpp_TypeInfo_var);
		Func_3__ctor_m719B904C27077EF12C81ECD411AB739E7B94FA3E(L_6, NULL, (intptr_t)((intptr_t)XRPlaneExtensions_DefaultGetNativePtr_m525A8606FE4568D1A90B5278EB8EF59D20013EBF_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m719B904C27077EF12C81ECD411AB739E7B94FA3E_RuntimeMethod_var);
		Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828 * L_7 = RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828_mE97108E1F9BB2274F733EBCAF91C10CCE7FB86AE(L_4, L_5, L_6, /*hidden argument*/RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828_mE97108E1F9BB2274F733EBCAF91C10CCE7FB86AE_RuntimeMethod_var);
		((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->set_s_GetNativePtrDelegate_0(L_7);
		Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334 * L_8 = ((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->get_s_GetTrackingStateDelegates_4();
		String_t* L_9 = V_0;
		Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 * L_10 = (Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 *)il2cpp_codegen_object_new(Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472_il2cpp_TypeInfo_var);
		Func_3__ctor_m27FCFCB94AC7593063BF02372B6A9B3BEEFD8779(L_10, NULL, (intptr_t)((intptr_t)XRPlaneExtensions_DefaultGetTrackingState_m109B0DC9AEC93FE64BC1C1364818F4FE8BD7BFBC_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m27FCFCB94AC7593063BF02372B6A9B3BEEFD8779_RuntimeMethod_var);
		Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 * L_11 = RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472_m4B3C34CCCC20FD454B9644C5C015CBD469EE21CF(L_8, L_9, L_10, /*hidden argument*/RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472_m4B3C34CCCC20FD454B9644C5C015CBD469EE21CF_RuntimeMethod_var);
		((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->set_s_GetTrackingStateDelegate_1(L_11);
		Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C * L_12 = ((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->get_s_TrySetPlaneDetectionFlagsDelegates_5();
		String_t* L_13 = V_0;
		Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 * L_14 = (Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 *)il2cpp_codegen_object_new(Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851_il2cpp_TypeInfo_var);
		Func_3__ctor_mF23AC3FFB9F86CE914EA6FB40CE3A4797273A3EB(L_14, NULL, (intptr_t)((intptr_t)XRPlaneExtensions_DefaultTrySetPlaneDetectionFlags_m923E9988964EF262D478E43D2E13A671BCA8BE17_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_mF23AC3FFB9F86CE914EA6FB40CE3A4797273A3EB_RuntimeMethod_var);
		Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 * L_15 = RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851_m883A19EADF36FF29E928044AC5BE877EA3772C2A(L_12, L_13, L_14, /*hidden argument*/RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851_m883A19EADF36FF29E928044AC5BE877EA3772C2A_RuntimeMethod_var);
		((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->set_s_TrySetPlaneDetectionFlagsDelegate_2(L_15);
		return;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRPlaneExtensions::SetDefaultDelegates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneExtensions_SetDefaultDelegates_m2C55C67EFCB955C7FF07F4668CF1019AA74B2DB6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPlaneExtensions_SetDefaultDelegates_m2C55C67EFCB955C7FF07F4668CF1019AA74B2DB6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828 * L_0 = (Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828 *)il2cpp_codegen_object_new(Func_3_t51D9C7E9448F6A950FC17B94AF0F74697536A828_il2cpp_TypeInfo_var);
		Func_3__ctor_m719B904C27077EF12C81ECD411AB739E7B94FA3E(L_0, NULL, (intptr_t)((intptr_t)XRPlaneExtensions_DefaultGetNativePtr_m525A8606FE4568D1A90B5278EB8EF59D20013EBF_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m719B904C27077EF12C81ECD411AB739E7B94FA3E_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var);
		((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->set_s_GetNativePtrDelegate_0(L_0);
		Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 * L_1 = (Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472 *)il2cpp_codegen_object_new(Func_3_t7E93774D49B95861743D5D0E1341B8BFC0BA0472_il2cpp_TypeInfo_var);
		Func_3__ctor_m27FCFCB94AC7593063BF02372B6A9B3BEEFD8779(L_1, NULL, (intptr_t)((intptr_t)XRPlaneExtensions_DefaultGetTrackingState_m109B0DC9AEC93FE64BC1C1364818F4FE8BD7BFBC_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m27FCFCB94AC7593063BF02372B6A9B3BEEFD8779_RuntimeMethod_var);
		((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->set_s_GetTrackingStateDelegate_1(L_1);
		Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 * L_2 = (Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851 *)il2cpp_codegen_object_new(Func_3_t2FFF1FA0EBE2020CCBAAE08872E1C55FEAC24851_il2cpp_TypeInfo_var);
		Func_3__ctor_mF23AC3FFB9F86CE914EA6FB40CE3A4797273A3EB(L_2, NULL, (intptr_t)((intptr_t)XRPlaneExtensions_DefaultTrySetPlaneDetectionFlags_m923E9988964EF262D478E43D2E13A671BCA8BE17_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_mF23AC3FFB9F86CE914EA6FB40CE3A4797273A3EB_RuntimeMethod_var);
		((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->set_s_TrySetPlaneDetectionFlagsDelegate_2(L_2);
		return;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRPlaneExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneExtensions__cctor_mD169C15F21790AB0F32A615B6ADBC6CEAD741CDD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRPlaneExtensions__cctor_mD169C15F21790AB0F32A615B6ADBC6CEAD741CDD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504 * L_0 = (Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504 *)il2cpp_codegen_object_new(Dictionary_2_t7A7FED9FAE6025E351DEAAFD7ADB0467D4F2C504_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCB6661D6E4C78D7DC40A5BF8F57A936F82883D7B(L_0, /*hidden argument*/Dictionary_2__ctor_mCB6661D6E4C78D7DC40A5BF8F57A936F82883D7B_RuntimeMethod_var);
		((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->set_s_GetNativePtrDelegates_3(L_0);
		Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334 * L_1 = (Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334 *)il2cpp_codegen_object_new(Dictionary_2_t804A3639685AFF9FD705F34C776CDC54B63F1334_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m16D15F3C862098DF2D3E042B47890E96138C6B54(L_1, /*hidden argument*/Dictionary_2__ctor_m16D15F3C862098DF2D3E042B47890E96138C6B54_RuntimeMethod_var);
		((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->set_s_GetTrackingStateDelegates_4(L_1);
		Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C * L_2 = (Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C *)il2cpp_codegen_object_new(Dictionary_2_tCFB882E33421D4B876A0F1DD904DD1CCADC7708C_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m09C4BA484CCC690E8D866C3D49D187F7E829C57D(L_2, /*hidden argument*/Dictionary_2__ctor_m09C4BA484CCC690E8D866C3D49D187F7E829C57D_RuntimeMethod_var);
		((XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_StaticFields*)il2cpp_codegen_static_fields_for(XRPlaneExtensions_tE5907A4D3FC04AB6A65D1F86404095C31362D4BE_il2cpp_TypeInfo_var))->set_s_TrySetPlaneDetectionFlagsDelegates_5(L_2);
		XRPlaneExtensions_SetDefaultDelegates_m2C55C67EFCB955C7FF07F4668CF1019AA74B2DB6(/*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARExtensions.XRReferencePointExtensions::RegisterAttachReferencePointHandler(System.String,UnityEngine.XR.ARExtensions.XRReferencePointExtensions_AttachReferencePointDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRReferencePointExtensions_RegisterAttachReferencePointHandler_m9216ECCCA3A6714F54F5F9085272B2684B24A919 (String_t* ___subsystemId0, AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * ___handler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferencePointExtensions_RegisterAttachReferencePointHandler_m9216ECCCA3A6714F54F5F9085272B2684B24A919_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var);
		Dictionary_2_t2E0DF86FACC6F978A4B05B1BDDA0DEEE82FCD0B5 * L_0 = ((XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_StaticFields*)il2cpp_codegen_static_fields_for(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var))->get_s_AttachReferencePointDelegates_2();
		String_t* L_1 = ___subsystemId0;
		AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * L_2 = ___handler1;
		NullCheck(L_0);
		Dictionary_2_set_Item_mD2174A65AA619EA2AE1A93880E672071866EF992(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_mD2174A65AA619EA2AE1A93880E672071866EF992_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRReferencePointExtensions::RegisterGetNativePtrHandler(System.String,System.Func`3<UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,System.IntPtr>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRReferencePointExtensions_RegisterGetNativePtrHandler_m69E29238677EA66C8EB362530B077E661F0244E0 (String_t* ___subsystemId0, Func_3_t5F7E105DF840E21AC18D244B52CBAC733FF4DAFB * ___handler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferencePointExtensions_RegisterGetNativePtrHandler_m69E29238677EA66C8EB362530B077E661F0244E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var);
		Dictionary_2_tF85F2837800957A1F17D2C5FD4CA7D5BC9609C8E * L_0 = ((XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_StaticFields*)il2cpp_codegen_static_fields_for(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var))->get_s_GetNativePtrDelegates_3();
		String_t* L_1 = ___subsystemId0;
		Func_3_t5F7E105DF840E21AC18D244B52CBAC733FF4DAFB * L_2 = ___handler1;
		NullCheck(L_0);
		Dictionary_2_set_Item_m4928FF7E350E2EA84F2877D3C6A5231FA935DE91(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_m4928FF7E350E2EA84F2877D3C6A5231FA935DE91_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.Experimental.XR.TrackableId UnityEngine.XR.ARExtensions.XRReferencePointExtensions::AttachReferencePoint(UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  XRReferencePointExtensions_AttachReferencePoint_m41702FD5DC29CDAACB3AC157FABDF68BC697D78C (XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C * ___referencePointSubsystem0, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___trackableId1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferencePointExtensions_AttachReferencePoint_m41702FD5DC29CDAACB3AC157FABDF68BC697D78C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C * L_0 = ___referencePointSubsystem0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral21B987F677241B66E28A5D11D61261FDE1890ED3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XRReferencePointExtensions_AttachReferencePoint_m41702FD5DC29CDAACB3AC157FABDF68BC697D78C_RuntimeMethod_var);
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var);
		AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * L_2 = ((XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_StaticFields*)il2cpp_codegen_static_fields_for(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var))->get_s_AttachReferencePointDelegate_0();
		XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C * L_3 = ___referencePointSubsystem0;
		TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  L_4 = ___trackableId1;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_5 = ___pose2;
		NullCheck(L_2);
		TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  L_6 = AttachReferencePointDelegate_Invoke_mA3421081DBADE594B7EE7581F8286322BEA5E563(L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Experimental.XR.TrackableId UnityEngine.XR.ARExtensions.XRReferencePointExtensions::DefaultAttachReferencePoint(UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  XRReferencePointExtensions_DefaultAttachReferencePoint_m2BFDC9B9A85200B115298704ADE25A2CCD99C51A (XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C * ___referencePointSubsystem0, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___trackableId1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferencePointExtensions_DefaultAttachReferencePoint_m2BFDC9B9A85200B115298704ADE25A2CCD99C51A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B_il2cpp_TypeInfo_var);
		TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  L_0 = TrackableId_get_InvalidId_m6A78BF219717CF4ACDF1D18C4E83CD187E8F9F27(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.IntPtr UnityEngine.XR.ARExtensions.XRReferencePointExtensions::DefaultGetNativePtr(UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t XRReferencePointExtensions_DefaultGetNativePtr_m6C3C666B8715402E89B978F41E2F902C71879B0E (XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C * ___referencePointSubsystem0, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___trackableId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferencePointExtensions_DefaultGetNativePtr_m6C3C666B8715402E89B978F41E2F902C71879B0E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return (intptr_t)(0);
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRReferencePointExtensions::ActivateExtensions(UnityEngine.Experimental.XR.XRReferencePointSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRReferencePointExtensions_ActivateExtensions_m4B1F40487B07ACC16BBBB83DAD89C8C0595B0D06 (XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C * ___referencePointSubsystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferencePointExtensions_ActivateExtensions_m4B1F40487B07ACC16BBBB83DAD89C8C0595B0D06_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C * L_0 = ___referencePointSubsystem0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var);
		XRReferencePointExtensions_SetDefaultDelegates_m02E9AD7315618F183A78ABFEEDCCB0F05D27436C(/*hidden argument*/NULL);
		return;
	}

IL_0009:
	{
		XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C * L_1 = ___referencePointSubsystem0;
		NullCheck(L_1);
		XRReferencePointSubsystemDescriptor_t0228E77788DA1EAB18104D6AB3DBAF5AF5CFA0D3 * L_2 = IntegratedSubsystem_1_get_SubsystemDescriptor_m2D51244EC044786C3CE3827FBBFC992E4A40F554(L_1, /*hidden argument*/IntegratedSubsystem_1_get_SubsystemDescriptor_m2D51244EC044786C3CE3827FBBFC992E4A40F554_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_3 = IntegratedSubsystemDescriptor_get_id_mD53ED8BDEC2B3748FA8B9FC77951D97CC710A5A6(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var);
		Dictionary_2_t2E0DF86FACC6F978A4B05B1BDDA0DEEE82FCD0B5 * L_4 = ((XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_StaticFields*)il2cpp_codegen_static_fields_for(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var))->get_s_AttachReferencePointDelegates_2();
		String_t* L_5 = V_0;
		AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * L_6 = (AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF *)il2cpp_codegen_object_new(AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF_il2cpp_TypeInfo_var);
		AttachReferencePointDelegate__ctor_m78B8311C8F1F2170BE5D029F058A51BB34237B3C(L_6, NULL, (intptr_t)((intptr_t)XRReferencePointExtensions_DefaultAttachReferencePoint_m2BFDC9B9A85200B115298704ADE25A2CCD99C51A_RuntimeMethod_var), /*hidden argument*/NULL);
		AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * L_7 = RegistrationHelper_GetValueOrDefault_TisString_t_TisAttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF_mDEF3757DAFA7A9EFC927096B193885E25FAB2DD9(L_4, L_5, L_6, /*hidden argument*/RegistrationHelper_GetValueOrDefault_TisString_t_TisAttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF_mDEF3757DAFA7A9EFC927096B193885E25FAB2DD9_RuntimeMethod_var);
		((XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_StaticFields*)il2cpp_codegen_static_fields_for(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var))->set_s_AttachReferencePointDelegate_0(L_7);
		Dictionary_2_tF85F2837800957A1F17D2C5FD4CA7D5BC9609C8E * L_8 = ((XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_StaticFields*)il2cpp_codegen_static_fields_for(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var))->get_s_GetNativePtrDelegates_3();
		String_t* L_9 = V_0;
		Func_3_t5F7E105DF840E21AC18D244B52CBAC733FF4DAFB * L_10 = (Func_3_t5F7E105DF840E21AC18D244B52CBAC733FF4DAFB *)il2cpp_codegen_object_new(Func_3_t5F7E105DF840E21AC18D244B52CBAC733FF4DAFB_il2cpp_TypeInfo_var);
		Func_3__ctor_mEB02727EA13F9EDEA7054E33EB928C6E625E4F1B(L_10, NULL, (intptr_t)((intptr_t)XRReferencePointExtensions_DefaultGetNativePtr_m6C3C666B8715402E89B978F41E2F902C71879B0E_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_mEB02727EA13F9EDEA7054E33EB928C6E625E4F1B_RuntimeMethod_var);
		Func_3_t5F7E105DF840E21AC18D244B52CBAC733FF4DAFB * L_11 = RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_t5F7E105DF840E21AC18D244B52CBAC733FF4DAFB_mE927F2CA4E621CD4993840C5669202159CF1408B(L_8, L_9, L_10, /*hidden argument*/RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_3_t5F7E105DF840E21AC18D244B52CBAC733FF4DAFB_mE927F2CA4E621CD4993840C5669202159CF1408B_RuntimeMethod_var);
		((XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_StaticFields*)il2cpp_codegen_static_fields_for(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var))->set_s_GetNativePtrDelegate_1(L_11);
		return;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRReferencePointExtensions::SetDefaultDelegates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRReferencePointExtensions_SetDefaultDelegates_m02E9AD7315618F183A78ABFEEDCCB0F05D27436C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferencePointExtensions_SetDefaultDelegates_m02E9AD7315618F183A78ABFEEDCCB0F05D27436C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * L_0 = (AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF *)il2cpp_codegen_object_new(AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF_il2cpp_TypeInfo_var);
		AttachReferencePointDelegate__ctor_m78B8311C8F1F2170BE5D029F058A51BB34237B3C(L_0, NULL, (intptr_t)((intptr_t)XRReferencePointExtensions_DefaultAttachReferencePoint_m2BFDC9B9A85200B115298704ADE25A2CCD99C51A_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var);
		((XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_StaticFields*)il2cpp_codegen_static_fields_for(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var))->set_s_AttachReferencePointDelegate_0(L_0);
		Func_3_t5F7E105DF840E21AC18D244B52CBAC733FF4DAFB * L_1 = (Func_3_t5F7E105DF840E21AC18D244B52CBAC733FF4DAFB *)il2cpp_codegen_object_new(Func_3_t5F7E105DF840E21AC18D244B52CBAC733FF4DAFB_il2cpp_TypeInfo_var);
		Func_3__ctor_mEB02727EA13F9EDEA7054E33EB928C6E625E4F1B(L_1, NULL, (intptr_t)((intptr_t)XRReferencePointExtensions_DefaultGetNativePtr_m6C3C666B8715402E89B978F41E2F902C71879B0E_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_mEB02727EA13F9EDEA7054E33EB928C6E625E4F1B_RuntimeMethod_var);
		((XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_StaticFields*)il2cpp_codegen_static_fields_for(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var))->set_s_GetNativePtrDelegate_1(L_1);
		return;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRReferencePointExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRReferencePointExtensions__cctor_m9C31DEF09451ECF082F769C895E9490C0C008D0F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferencePointExtensions__cctor_m9C31DEF09451ECF082F769C895E9490C0C008D0F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2E0DF86FACC6F978A4B05B1BDDA0DEEE82FCD0B5 * L_0 = (Dictionary_2_t2E0DF86FACC6F978A4B05B1BDDA0DEEE82FCD0B5 *)il2cpp_codegen_object_new(Dictionary_2_t2E0DF86FACC6F978A4B05B1BDDA0DEEE82FCD0B5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m74FEE57A3ED48C22A194D2B0DADFE822140BE275(L_0, /*hidden argument*/Dictionary_2__ctor_m74FEE57A3ED48C22A194D2B0DADFE822140BE275_RuntimeMethod_var);
		((XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_StaticFields*)il2cpp_codegen_static_fields_for(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var))->set_s_AttachReferencePointDelegates_2(L_0);
		Dictionary_2_tF85F2837800957A1F17D2C5FD4CA7D5BC9609C8E * L_1 = (Dictionary_2_tF85F2837800957A1F17D2C5FD4CA7D5BC9609C8E *)il2cpp_codegen_object_new(Dictionary_2_tF85F2837800957A1F17D2C5FD4CA7D5BC9609C8E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m6E3C361936B8366A688BE5C136E7FA290F8D33BD(L_1, /*hidden argument*/Dictionary_2__ctor_m6E3C361936B8366A688BE5C136E7FA290F8D33BD_RuntimeMethod_var);
		((XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_StaticFields*)il2cpp_codegen_static_fields_for(XRReferencePointExtensions_tDB4598C0A44D28208D387FF166DD81A02D92D74D_il2cpp_TypeInfo_var))->set_s_GetNativePtrDelegates_3(L_1);
		XRReferencePointExtensions_SetDefaultDelegates_m02E9AD7315618F183A78ABFEEDCCB0F05D27436C(/*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARExtensions.XRReferencePointExtensions_AttachReferencePointDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttachReferencePointDelegate__ctor_m78B8311C8F1F2170BE5D029F058A51BB34237B3C (AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// UnityEngine.Experimental.XR.TrackableId UnityEngine.XR.ARExtensions.XRReferencePointExtensions_AttachReferencePointDelegate::Invoke(UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  AttachReferencePointDelegate_Invoke_mA3421081DBADE594B7EE7581F8286322BEA5E563 (AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * __this, XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C * ___referencePointSubsystem0, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___trackableId1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose2, const RuntimeMethod* method)
{
	TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  (*FunctionPointerType) (XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C *, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___referencePointSubsystem0, ___trackableId1, ___pose2, targetMethod);
			}
			else
			{
				// closed
				typedef TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  (*FunctionPointerType) (void*, XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C *, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___referencePointSubsystem0, ___trackableId1, ___pose2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  >::Invoke(targetMethod, ___referencePointSubsystem0, ___trackableId1, ___pose2);
					else
						result = GenericVirtFuncInvoker2< TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  >::Invoke(targetMethod, ___referencePointSubsystem0, ___trackableId1, ___pose2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___referencePointSubsystem0, ___trackableId1, ___pose2);
					else
						result = VirtFuncInvoker2< TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___referencePointSubsystem0, ___trackableId1, ___pose2);
				}
			}
			else
			{
				typedef TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  (*FunctionPointerType) (XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C *, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___referencePointSubsystem0, ___trackableId1, ___pose2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  (*FunctionPointerType) (XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C *, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 , const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___referencePointSubsystem0, ___trackableId1, ___pose2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C *, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  >::Invoke(targetMethod, targetThis, ___referencePointSubsystem0, ___trackableId1, ___pose2);
					else
						result = GenericVirtFuncInvoker3< TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C *, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  >::Invoke(targetMethod, targetThis, ___referencePointSubsystem0, ___trackableId1, ___pose2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C *, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___referencePointSubsystem0, ___trackableId1, ___pose2);
					else
						result = VirtFuncInvoker3< TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C *, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___referencePointSubsystem0, ___trackableId1, ___pose2);
				}
			}
			else
			{
				typedef TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  (*FunctionPointerType) (void*, XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C *, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___referencePointSubsystem0, ___trackableId1, ___pose2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.XR.ARExtensions.XRReferencePointExtensions_AttachReferencePointDelegate::BeginInvoke(UnityEngine.Experimental.XR.XRReferencePointSubsystem,UnityEngine.Experimental.XR.TrackableId,UnityEngine.Pose,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AttachReferencePointDelegate_BeginInvoke_m7014463905CA0995A56F1FEC5E4C6E1492AE5176 (AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * __this, XRReferencePointSubsystem_t9D4A49A2B6580143EF25399812034F001A18D00C * ___referencePointSubsystem0, TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  ___trackableId1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AttachReferencePointDelegate_BeginInvoke_m7014463905CA0995A56F1FEC5E4C6E1492AE5176_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___referencePointSubsystem0;
	__d_args[1] = Box(TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B_il2cpp_TypeInfo_var, &___trackableId1);
	__d_args[2] = Box(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_il2cpp_TypeInfo_var, &___pose2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// UnityEngine.Experimental.XR.TrackableId UnityEngine.XR.ARExtensions.XRReferencePointExtensions_AttachReferencePointDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B  AttachReferencePointDelegate_EndInvoke_mD1C09D2CA40100FFB2030310C6531967F089A88C (AttachReferencePointDelegate_t8E14528144FB8B3DE6B44FCD01B3B4C2090236DF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(TrackableId_tA539F57E82A04D410FE11E10ACC830CF7CD71F7B *)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARExtensions.XRSessionExtensions::RegisterGetNativePtrHandler(System.String,System.Func`2<UnityEngine.Experimental.XR.XRSessionSubsystem,System.IntPtr>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionExtensions_RegisterGetNativePtrHandler_m0F2BA7F0001105F840854F14E36B374EA02178EC (String_t* ___subsystemId0, Func_2_t3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427 * ___handler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionExtensions_RegisterGetNativePtrHandler_m0F2BA7F0001105F840854F14E36B374EA02178EC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var);
		Dictionary_2_tFE1C7A285CDDB61F4FD563A8D1EB39AF5A5A2B3E * L_0 = ((XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields*)il2cpp_codegen_static_fields_for(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var))->get_s_GetNativePtrDelegates_5();
		String_t* L_1 = ___subsystemId0;
		Func_2_t3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427 * L_2 = ___handler1;
		NullCheck(L_0);
		Dictionary_2_set_Item_mFA768651E6837E984F25C0E2E4BA3D5FDF33E75C(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_mFA768651E6837E984F25C0E2E4BA3D5FDF33E75C_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRSessionExtensions::RegisterGetAvailabilityAsyncHandler(System.String,UnityEngine.XR.ARExtensions.XRSessionExtensions_AsyncDelegate`1<UnityEngine.XR.ARExtensions.SessionAvailability>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionExtensions_RegisterGetAvailabilityAsyncHandler_mD8436B9D2786A1B6D358D389C861250181890618 (String_t* ___subsystemId0, AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 * ___handler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionExtensions_RegisterGetAvailabilityAsyncHandler_mD8436B9D2786A1B6D358D389C861250181890618_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var);
		Dictionary_2_t29A0B4802803E068766061600B339B644FF24895 * L_0 = ((XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields*)il2cpp_codegen_static_fields_for(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var))->get_s_GetAvailabilityAsyncDelegates_4();
		String_t* L_1 = ___subsystemId0;
		AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 * L_2 = ___handler1;
		NullCheck(L_0);
		Dictionary_2_set_Item_mF99892D844079B6407206DB17E470B6A05A0AE68(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_mF99892D844079B6407206DB17E470B6A05A0AE68_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.XR.ARExtensions.Promise`1<UnityEngine.XR.ARExtensions.SessionAvailability> UnityEngine.XR.ARExtensions.XRSessionExtensions::GetAvailabilityAsync(UnityEngine.Experimental.XR.XRSessionSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_t66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF * XRSessionExtensions_GetAvailabilityAsync_mBDD84001B8806A80783567D7CD410405BB78D963 (XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * ___sessionSubsystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionExtensions_GetAvailabilityAsync_mBDD84001B8806A80783567D7CD410405BB78D963_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * L_0 = ___sessionSubsystem0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral803CB9B37A5D16493B12A6980F00E6EFC5F33114, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XRSessionExtensions_GetAvailabilityAsync_mBDD84001B8806A80783567D7CD410405BB78D963_RuntimeMethod_var);
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var);
		AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 * L_2 = ((XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields*)il2cpp_codegen_static_fields_for(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var))->get_s_GetAvailabilityAsyncDelegate_1();
		XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * L_3 = ___sessionSubsystem0;
		NullCheck(L_2);
		Promise_1_t66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF * L_4 = AsyncDelegate_1_Invoke_m106CF5901441272D1BAAA67E469EDCD5A05201EB(L_2, L_3, /*hidden argument*/AsyncDelegate_1_Invoke_m106CF5901441272D1BAAA67E469EDCD5A05201EB_RuntimeMethod_var);
		return L_4;
	}
}
// UnityEngine.XR.ARExtensions.Promise`1<UnityEngine.XR.ARExtensions.SessionAvailability> UnityEngine.XR.ARExtensions.XRSessionExtensions::DefaultGetAvailabilityAsync(UnityEngine.Experimental.XR.XRSessionSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_t66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF * XRSessionExtensions_DefaultGetAvailabilityAsync_mE0BE46A1C4A79123C9D1565734DF84C5228F347F (XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * ___sessionSubsystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionExtensions_DefaultGetAvailabilityAsync_mE0BE46A1C4A79123C9D1565734DF84C5228F347F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Promise_1_t66AAC88C18AA5F4926430CAAC2B4AE8CC700E5FF * L_0 = Promise_1_CreateResolvedPromise_m548F7D4E240E44FFBBB8D3942AF9ABD34C6DEE4A(6, /*hidden argument*/Promise_1_CreateResolvedPromise_m548F7D4E240E44FFBBB8D3942AF9ABD34C6DEE4A_RuntimeMethod_var);
		return L_0;
	}
}
// UnityEngine.XR.ARExtensions.Promise`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus> UnityEngine.XR.ARExtensions.XRSessionExtensions::InstallAsync(UnityEngine.Experimental.XR.XRSessionSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_tBD5BCA0938AD2478C8AC6953371BD3E24D657C15 * XRSessionExtensions_InstallAsync_m837E3721911B365903CB031F4D5DAF4B52132B84 (XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * ___sessionSubsystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionExtensions_InstallAsync_m837E3721911B365903CB031F4D5DAF4B52132B84_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * L_0 = ___sessionSubsystem0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral803CB9B37A5D16493B12A6980F00E6EFC5F33114, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XRSessionExtensions_InstallAsync_m837E3721911B365903CB031F4D5DAF4B52132B84_RuntimeMethod_var);
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var);
		AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3 * L_2 = ((XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields*)il2cpp_codegen_static_fields_for(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var))->get_s_InstallAsyncDelegate_0();
		XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * L_3 = ___sessionSubsystem0;
		NullCheck(L_2);
		Promise_1_tBD5BCA0938AD2478C8AC6953371BD3E24D657C15 * L_4 = AsyncDelegate_1_Invoke_mE4C5BF27A0BA0E736BF0B6883E1FCE03CC2D94E4(L_2, L_3, /*hidden argument*/AsyncDelegate_1_Invoke_mE4C5BF27A0BA0E736BF0B6883E1FCE03CC2D94E4_RuntimeMethod_var);
		return L_4;
	}
}
// UnityEngine.XR.ARExtensions.Promise`1<UnityEngine.XR.ARExtensions.SessionInstallationStatus> UnityEngine.XR.ARExtensions.XRSessionExtensions::DefaultInstallAsync(UnityEngine.Experimental.XR.XRSessionSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_tBD5BCA0938AD2478C8AC6953371BD3E24D657C15 * XRSessionExtensions_DefaultInstallAsync_m3BADE4DD676472E851C6088B7DBFB3FD23EA51F8 (XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * ___sessionSubsystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionExtensions_DefaultInstallAsync_m3BADE4DD676472E851C6088B7DBFB3FD23EA51F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Promise_1_tBD5BCA0938AD2478C8AC6953371BD3E24D657C15 * L_0 = Promise_1_CreateResolvedPromise_m7EC83AB3701AC7742546873D51CF5D0C5E39569C(4, /*hidden argument*/Promise_1_CreateResolvedPromise_m7EC83AB3701AC7742546873D51CF5D0C5E39569C_RuntimeMethod_var);
		return L_0;
	}
}
// System.IntPtr UnityEngine.XR.ARExtensions.XRSessionExtensions::DefaultGetNativePtr(UnityEngine.Experimental.XR.XRSessionSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t XRSessionExtensions_DefaultGetNativePtr_m6B0F6E29E73FDF269A5434C5CCB7A4E69A227C0D (XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * ___sessionSubsystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionExtensions_DefaultGetNativePtr_m6B0F6E29E73FDF269A5434C5CCB7A4E69A227C0D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return (intptr_t)(0);
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRSessionExtensions::ActivateExtensions(UnityEngine.Experimental.XR.XRSessionSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionExtensions_ActivateExtensions_m691809B860CE64CA0DE345ECC9784D748495DD3B (XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * ___sessionSubsystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionExtensions_ActivateExtensions_m691809B860CE64CA0DE345ECC9784D748495DD3B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * L_0 = ___sessionSubsystem0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var);
		XRSessionExtensions_SetDefaultDelegates_mBDA2E1F28A46EDBE8B6565D7DD1740DA5EAB82AD(/*hidden argument*/NULL);
		return;
	}

IL_0009:
	{
		XRSessionSubsystem_t75B8ED54B2BF4876D83B93780A7E13D6A9F32B8F * L_1 = ___sessionSubsystem0;
		NullCheck(L_1);
		XRSessionSubsystemDescriptor_tF69268DD404379B461569E4268BEC52FAFC9F3B9 * L_2 = IntegratedSubsystem_1_get_SubsystemDescriptor_mD686C3E61643ABD5B11A3DE0437B49F20A0A241B(L_1, /*hidden argument*/IntegratedSubsystem_1_get_SubsystemDescriptor_mD686C3E61643ABD5B11A3DE0437B49F20A0A241B_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_3 = IntegratedSubsystemDescriptor_get_id_mD53ED8BDEC2B3748FA8B9FC77951D97CC710A5A6(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var);
		Dictionary_2_t940582C11B83AD84AC1F67AF3F3F5FAE64B82503 * L_4 = ((XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields*)il2cpp_codegen_static_fields_for(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var))->get_s_InstallAsyncDelegates_3();
		String_t* L_5 = V_0;
		AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3 * L_6 = (AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3 *)il2cpp_codegen_object_new(AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3_il2cpp_TypeInfo_var);
		AsyncDelegate_1__ctor_mED44FB99D258C600108FE257AB413537111C093F(L_6, NULL, (intptr_t)((intptr_t)XRSessionExtensions_DefaultInstallAsync_m3BADE4DD676472E851C6088B7DBFB3FD23EA51F8_RuntimeMethod_var), /*hidden argument*/AsyncDelegate_1__ctor_mED44FB99D258C600108FE257AB413537111C093F_RuntimeMethod_var);
		AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3 * L_7 = RegistrationHelper_GetValueOrDefault_TisString_t_TisAsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3_mF8B964C5BA09885FFA920703291DFC4A5EE01256(L_4, L_5, L_6, /*hidden argument*/RegistrationHelper_GetValueOrDefault_TisString_t_TisAsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3_mF8B964C5BA09885FFA920703291DFC4A5EE01256_RuntimeMethod_var);
		((XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields*)il2cpp_codegen_static_fields_for(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var))->set_s_InstallAsyncDelegate_0(L_7);
		Dictionary_2_t29A0B4802803E068766061600B339B644FF24895 * L_8 = ((XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields*)il2cpp_codegen_static_fields_for(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var))->get_s_GetAvailabilityAsyncDelegates_4();
		String_t* L_9 = V_0;
		AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 * L_10 = (AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 *)il2cpp_codegen_object_new(AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659_il2cpp_TypeInfo_var);
		AsyncDelegate_1__ctor_mA0DC00CAC1027C7822EB22B5E9AD00FE41F4BB95(L_10, NULL, (intptr_t)((intptr_t)XRSessionExtensions_DefaultGetAvailabilityAsync_mE0BE46A1C4A79123C9D1565734DF84C5228F347F_RuntimeMethod_var), /*hidden argument*/AsyncDelegate_1__ctor_mA0DC00CAC1027C7822EB22B5E9AD00FE41F4BB95_RuntimeMethod_var);
		AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 * L_11 = RegistrationHelper_GetValueOrDefault_TisString_t_TisAsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659_mE8149BE813B79A07A9CCF8A262585C980A986BF4(L_8, L_9, L_10, /*hidden argument*/RegistrationHelper_GetValueOrDefault_TisString_t_TisAsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659_mE8149BE813B79A07A9CCF8A262585C980A986BF4_RuntimeMethod_var);
		((XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields*)il2cpp_codegen_static_fields_for(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var))->set_s_GetAvailabilityAsyncDelegate_1(L_11);
		Dictionary_2_tFE1C7A285CDDB61F4FD563A8D1EB39AF5A5A2B3E * L_12 = ((XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields*)il2cpp_codegen_static_fields_for(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var))->get_s_GetNativePtrDelegates_5();
		String_t* L_13 = V_0;
		Func_2_t3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427 * L_14 = (Func_2_t3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427 *)il2cpp_codegen_object_new(Func_2_t3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427_il2cpp_TypeInfo_var);
		Func_2__ctor_m79647D280D912B4716600CA05F271A40E9BC7B11(L_14, NULL, (intptr_t)((intptr_t)XRSessionExtensions_DefaultGetNativePtr_m6B0F6E29E73FDF269A5434C5CCB7A4E69A227C0D_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m79647D280D912B4716600CA05F271A40E9BC7B11_RuntimeMethod_var);
		Func_2_t3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427 * L_15 = RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_2_t3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427_m88D7F0C1014A6A81B45395BA3A45D70CDA0A4E7C(L_12, L_13, L_14, /*hidden argument*/RegistrationHelper_GetValueOrDefault_TisString_t_TisFunc_2_t3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427_m88D7F0C1014A6A81B45395BA3A45D70CDA0A4E7C_RuntimeMethod_var);
		((XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields*)il2cpp_codegen_static_fields_for(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var))->set_s_GetNativePtrDelegate_2(L_15);
		return;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRSessionExtensions::SetDefaultDelegates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionExtensions_SetDefaultDelegates_mBDA2E1F28A46EDBE8B6565D7DD1740DA5EAB82AD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionExtensions_SetDefaultDelegates_mBDA2E1F28A46EDBE8B6565D7DD1740DA5EAB82AD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3 * L_0 = (AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3 *)il2cpp_codegen_object_new(AsyncDelegate_1_t249767B2886936DE438787AE5D7C959A26DE03C3_il2cpp_TypeInfo_var);
		AsyncDelegate_1__ctor_mED44FB99D258C600108FE257AB413537111C093F(L_0, NULL, (intptr_t)((intptr_t)XRSessionExtensions_DefaultInstallAsync_m3BADE4DD676472E851C6088B7DBFB3FD23EA51F8_RuntimeMethod_var), /*hidden argument*/AsyncDelegate_1__ctor_mED44FB99D258C600108FE257AB413537111C093F_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var);
		((XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields*)il2cpp_codegen_static_fields_for(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var))->set_s_InstallAsyncDelegate_0(L_0);
		AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 * L_1 = (AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659 *)il2cpp_codegen_object_new(AsyncDelegate_1_tC1209225BB9B8AF0FB9384EA8D49347BB4BCC659_il2cpp_TypeInfo_var);
		AsyncDelegate_1__ctor_mA0DC00CAC1027C7822EB22B5E9AD00FE41F4BB95(L_1, NULL, (intptr_t)((intptr_t)XRSessionExtensions_DefaultGetAvailabilityAsync_mE0BE46A1C4A79123C9D1565734DF84C5228F347F_RuntimeMethod_var), /*hidden argument*/AsyncDelegate_1__ctor_mA0DC00CAC1027C7822EB22B5E9AD00FE41F4BB95_RuntimeMethod_var);
		((XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields*)il2cpp_codegen_static_fields_for(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var))->set_s_GetAvailabilityAsyncDelegate_1(L_1);
		Func_2_t3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427 * L_2 = (Func_2_t3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427 *)il2cpp_codegen_object_new(Func_2_t3DEE21E2AA4A143CC3337C1F6EFBE0F9795D6427_il2cpp_TypeInfo_var);
		Func_2__ctor_m79647D280D912B4716600CA05F271A40E9BC7B11(L_2, NULL, (intptr_t)((intptr_t)XRSessionExtensions_DefaultGetNativePtr_m6B0F6E29E73FDF269A5434C5CCB7A4E69A227C0D_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m79647D280D912B4716600CA05F271A40E9BC7B11_RuntimeMethod_var);
		((XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields*)il2cpp_codegen_static_fields_for(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var))->set_s_GetNativePtrDelegate_2(L_2);
		return;
	}
}
// System.Void UnityEngine.XR.ARExtensions.XRSessionExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionExtensions__cctor_m23B04D829DB835490B2740FA6E055B59D0758393 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionExtensions__cctor_m23B04D829DB835490B2740FA6E055B59D0758393_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t940582C11B83AD84AC1F67AF3F3F5FAE64B82503 * L_0 = (Dictionary_2_t940582C11B83AD84AC1F67AF3F3F5FAE64B82503 *)il2cpp_codegen_object_new(Dictionary_2_t940582C11B83AD84AC1F67AF3F3F5FAE64B82503_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCEE923EDBB9032A2899F5591894782A7036E3541(L_0, /*hidden argument*/Dictionary_2__ctor_mCEE923EDBB9032A2899F5591894782A7036E3541_RuntimeMethod_var);
		((XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields*)il2cpp_codegen_static_fields_for(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var))->set_s_InstallAsyncDelegates_3(L_0);
		Dictionary_2_t29A0B4802803E068766061600B339B644FF24895 * L_1 = (Dictionary_2_t29A0B4802803E068766061600B339B644FF24895 *)il2cpp_codegen_object_new(Dictionary_2_t29A0B4802803E068766061600B339B644FF24895_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9A0762E02CCCCFD8E00375523F1E6ACC3E84211A(L_1, /*hidden argument*/Dictionary_2__ctor_m9A0762E02CCCCFD8E00375523F1E6ACC3E84211A_RuntimeMethod_var);
		((XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields*)il2cpp_codegen_static_fields_for(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var))->set_s_GetAvailabilityAsyncDelegates_4(L_1);
		Dictionary_2_tFE1C7A285CDDB61F4FD563A8D1EB39AF5A5A2B3E * L_2 = (Dictionary_2_tFE1C7A285CDDB61F4FD563A8D1EB39AF5A5A2B3E *)il2cpp_codegen_object_new(Dictionary_2_tFE1C7A285CDDB61F4FD563A8D1EB39AF5A5A2B3E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2AD0C4A7179CDF70C8D84ED6B581250B869C74FF(L_2, /*hidden argument*/Dictionary_2__ctor_m2AD0C4A7179CDF70C8D84ED6B581250B869C74FF_RuntimeMethod_var);
		((XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_StaticFields*)il2cpp_codegen_static_fields_for(XRSessionExtensions_t90CFFFAE273DEBF123D02B08B529F491CFA1DF49_il2cpp_TypeInfo_var))->set_s_GetNativePtrDelegates_5(L_2);
		XRSessionExtensions_SetDefaultDelegates_mBDA2E1F28A46EDBE8B6565D7DD1740DA5EAB82AD(/*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  CameraIntrinsics_get_focalLength_m6C9227C139EB42BF6B22278880AB1596ADED7991_inline (CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * __this, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_m_FocalLength_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  CameraIntrinsics_get_principalPoint_mC9CFA3636F2AA3942A0F72607CF52499971C955A_inline (CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * __this, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_m_PrincipalPoint_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  CameraIntrinsics_get_resolution_mCCCC68A5429FE331004D65A013FD5425477B4836_inline (CameraIntrinsics_tF5C8338837CCA8C112418715D15B806AD05B8447 * __this, const RuntimeMethod* method)
{
	{
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_0 = __this->get_m_Resolution_2();
		return L_0;
	}
}

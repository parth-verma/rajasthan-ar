﻿#include "il2cpp-config.h"

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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// AboutScreen
struct AboutScreen_t2183797299;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// System.String
struct String_t;
// argClass
struct argClass_t2323061523;
// AsyncSceneLoader
struct AsyncSceneLoader_t621267272;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// AsyncSceneLoader/<LoadNextSceneAfter>c__Iterator0
struct U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// AugmentedScript
struct AugmentedScript_t957426287;
// AugmentedScript/<GetCoordinates>c__Iterator0
struct U3CGetCoordinatesU3Ec__Iterator0_t3175107318;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Transform
struct Transform_t3600365921;
// System.Func`1<System.Boolean>
struct Func_1_t3822001908;
// UnityEngine.WaitWhile
struct WaitWhile_t2469172888;
// UnityEngine.LocationService
struct LocationService_t2839639379;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// CameraSettings
struct CameraSettings_t3152619780;
// Vuforia.VuforiaARController
struct VuforiaARController_t1876945237;
// System.Action
struct Action_t1264377477;
// System.Action`1<System.Boolean>
struct Action_1_t269755560;
// Vuforia.CameraDevice
struct CameraDevice_t960297568;
// CameraSettings/<RestoreOriginalFocusMode>c__Iterator0
struct U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229;
// Vuforia.ITrackerManager
struct ITrackerManager_t607206903;
// DefaultInitializationErrorHandler
struct DefaultInitializationErrorHandler_t3109936861;
// Vuforia.VuforiaRuntime
struct VuforiaRuntime_t1949122020;
// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct Action_1_t3593217305;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t3146511083;
// UnityEngine.GUIStyle
struct GUIStyle_t3956901511;
// Vuforia.VuforiaConfiguration
struct VuforiaConfiguration_t1763229349;
// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration
struct GenericVuforiaConfiguration_t3697830469;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415;
// UnityEngine.Font
struct Font_t1956802104;
// UnityEngine.RectOffset
struct RectOffset_t1369453676;
// DefaultTrackableEventHandler
struct DefaultTrackableEventHandler_t1588957063;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1113559212;
// UnityEngine.Object
struct Object_t631007953;
// Vuforia.ITrackableEventHandler
struct ITrackableEventHandler_t1495975588;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t3210418286;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t4234922487;
// UnityEngine.Canvas[]
struct CanvasU5BU5D_t682926938;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.Collider
struct Collider_t1773347010;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// distance
struct distance_t593844463;
// UnityEngine.Camera
struct Camera_t4157153871;
// FrameRateSettings
struct FrameRateSettings_t3598747490;
// Vuforia.VuforiaRenderer
struct VuforiaRenderer_t3433045970;
// InitErrorHandler
struct InitErrorHandler_t2159361531;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// LoadingScreen
struct LoadingScreen_t2154736699;
// UnityEngine.UI.RawImage
struct RawImage_t3182918964;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843;
// UnityEngine.UI.RawImage[]
struct RawImageU5BU5D_t1576731517;
// LocalizationHelper
struct LocalizationHelper_t3735850664;
// UnityEngine.UI.Dropdown
struct Dropdown_t2274391225;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_t447389798;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t3270282352;
// MenuAnimator
struct MenuAnimator_t2112910832;
// MenuOptions
struct MenuOptions_t1951716431;
// TrackableSettings
struct TrackableSettings_t2862243993;
// UnityEngine.UI.Toggle
struct Toggle_t2735377061;
// menuStart
struct menuStart_t2290326516;
// nyiscript
struct nyiscript_t2578089225;
// onload
struct onload_t2599798848;
// UnityEngine.UI.Text
struct Text_t1901882714;
// StreamVideo
struct StreamVideo_t2698492640;
// StreamVideo/<playVideo>c__Iterator0
struct U3CplayVideoU3Ec__Iterator0_t2444540216;
// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t1683042537;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.Video.VideoClip
struct VideoClip_t1281919028;
// UnityEngine.Texture
struct Texture_t3661962703;
// TapHandler
struct TapHandler_t334234343;
// test
struct test_t650638785;
// test1
struct test1_t3743330310;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// Vuforia.StateManager
struct StateManager_t1982749557;
// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour>
struct IEnumerable_1_t93412101;
// Vuforia.ImageTargetBehaviour
struct ImageTargetBehaviour_t2200418350;
// Vuforia.ImageTarget
struct ImageTarget_t3707016494;
// Vuforia.MultiTargetBehaviour
struct MultiTargetBehaviour_t2061511750;
// Vuforia.MultiTarget
struct MultiTarget_t2016089265;
// Vuforia.CylinderTargetBehaviour
struct CylinderTargetBehaviour_t822809409;
// Vuforia.CylinderTarget
struct CylinderTarget_t4265049602;
// Vuforia.ObjectTargetBehaviour
struct ObjectTargetBehaviour_t728125005;
// Vuforia.ObjectTarget
struct ObjectTarget_t3212252422;
// Vuforia.VuMarkBehaviour
struct VuMarkBehaviour_t1178230459;
// Vuforia.VuMarkTemplate
struct VuMarkTemplate_t3623118391;
// Vuforia.ObjectTracker
struct ObjectTracker_t4177997237;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet>
struct IEnumerable_1_t2265887763;
// System.Collections.Generic.List`1<Vuforia.DataSet>
struct List_1_t463142320;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// Vuforia.DataSet
struct DataSet_t3286034874;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// Vuforia.VuforiaBehaviour
struct VuforiaBehaviour_t2151848540;
// Vuforia.DataSet[]
struct DataSetU5BU5D_t4052198943;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.TrackableBehaviour>
struct Dictionary_2_t2272543;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>
struct List_1_t2585633954;
// Vuforia.WordManager
struct WordManager_t3100853168;
// Vuforia.VuMarkManager
struct VuMarkManager_t2982459596;
// Vuforia.DeviceTrackingManager
struct DeviceTrackingManager_t3849131975;
// Vuforia.IExtendedTrackingManager
struct IExtendedTrackingManager_t821947488;
// Vuforia.IlluminationManager
struct IlluminationManager_t3960931838;
// UnityEngine.Sprite
struct Sprite_t280657092;
// UnityEngine.UI.Dropdown/OptionData[]
struct OptionDataU5BU5D_t3600483281;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// Vuforia.ImageTargetBuilder
struct ImageTargetBuilder_t2430893908;
// Vuforia.TargetFinder
struct TargetFinder_t2439332195;
// System.Void
struct Void_t1185182177;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_t1617499438;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>
struct Dictionary_2_t1340713322;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t1677636661;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t1059417452;
// UnityEngine.UI.Selectable
struct Selectable_t3250028441;
// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>
struct List_1_t905170877;
// Vuforia.ICameraConfiguration
struct ICameraConfiguration_t283990539;
// Vuforia.DigitalEyewearARController
struct DigitalEyewearARController_t1054226036;
// Vuforia.VideoBackgroundManager
struct VideoBackgroundManager_t2198727358;
// UnityEngine.Material
struct Material_t340375123;
// System.Collections.Generic.List`1<System.Type>
struct List_1_t3956019502;
// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>
struct Dictionary_2_t3630620928;
// System.Collections.Generic.List`1<Vuforia.Image/PIXEL_FORMAT>
struct List_1_t386988881;
// Vuforia.IWebCam
struct IWebCam_t3734514901;
// System.Action`1<UnityEngine.Font>
struct Action_1_t2129269699;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t2467502454;
// Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration
struct DigitalEyewearConfiguration_t546560202;
// Vuforia.VuforiaConfiguration/DatabaseLoadConfiguration
struct DatabaseLoadConfiguration_t449697234;
// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration
struct VideoBackgroundConfiguration_t3392414655;
// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration
struct DeviceTrackerConfiguration_t721467671;
// Vuforia.VuforiaConfiguration/SmartTerrainConfiguration
struct SmartTerrainConfiguration_t1514074484;
// Vuforia.VuforiaConfiguration/WebCamConfiguration
struct WebCamConfiguration_t1101614731;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1258266594;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t3309123499;
// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_t3436254912;
// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_t3211687919;
// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_t445758600;
// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_t3848515759;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t3064908834;
// Vuforia.Trackable
struct Trackable_t2451999991;
// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>
struct List_1_t2968050330;
// System.String[]
struct StringU5BU5D_t1281789340;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t427135887;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t2532145056;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1260619206;
// Vuforia.VuMarkTarget
struct VuMarkTarget_t1129573803;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t123837990;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t1873685584;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t1438173104;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t4040729994;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t2924027637;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t3520241082;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonBehaviour>
struct Dictionary_2_t325039782;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;

extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3525588294;
extern String_t* _stringLiteral4188196043;
extern const uint32_t AboutScreen_OnStartAR_m2896384759_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern const uint32_t AboutScreen_Update_m1006106731_MetadataUsageId;
extern RuntimeClass* argClass_t2323061523_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3454842811;
extern const uint32_t argClass__cctor_m2948626504_MetadataUsageId;
extern RuntimeClass* U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170_il2cpp_TypeInfo_var;
extern const uint32_t AsyncSceneLoader_LoadNextSceneAfter_m1751933459_MetadataUsageId;
extern RuntimeClass* WaitForSeconds_t1699091251_il2cpp_TypeInfo_var;
extern const uint32_t U3CLoadNextSceneAfterU3Ec__Iterator0_MoveNext_m3855908786_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const uint32_t U3CLoadNextSceneAfterU3Ec__Iterator0_Reset_m3376656304_MetadataUsageId;
extern RuntimeClass* U3CGetCoordinatesU3Ec__Iterator0_t3175107318_il2cpp_TypeInfo_var;
extern const uint32_t AugmentedScript_GetCoordinates_m1379753793_MetadataUsageId;
extern RuntimeClass* Func_1_t3822001908_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitWhile_t2469172888_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const RuntimeMethod* AugmentedScript_U3CStartU3Em__0_m1604391588_RuntimeMethod_var;
extern const RuntimeMethod* Func_1__ctor_m1399073142_RuntimeMethod_var;
extern String_t* _stringLiteral1608432475;
extern const uint32_t AugmentedScript_Start_m1964626684_MetadataUsageId;
extern const uint32_t AugmentedScript_Update_m2782863521_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t594665363_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1923429753;
extern String_t* _stringLiteral150090019;
extern String_t* _stringLiteral114264161;
extern String_t* _stringLiteral3452614528;
extern const uint32_t U3CGetCoordinatesU3Ec__Iterator0_MoveNext_m3017265402_MetadataUsageId;
extern const uint32_t U3CGetCoordinatesU3Ec__Iterator0_Reset_m1151486407_MetadataUsageId;
extern RuntimeClass* VuforiaARController_t1876945237_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_t1264377477_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t269755560_il2cpp_TypeInfo_var;
extern const RuntimeMethod* CameraSettings_OnVuforiaStarted_m924645186_RuntimeMethod_var;
extern const RuntimeMethod* CameraSettings_OnPaused_m1743728020_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m2079027267_RuntimeMethod_var;
extern const uint32_t CameraSettings_Start_m1913056950_MetadataUsageId;
extern RuntimeClass* CameraDevice_t960297568_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral328110920;
extern String_t* _stringLiteral3558393413;
extern const uint32_t CameraSettings_SwitchFlashTorch_m1540789541_MetadataUsageId;
extern String_t* _stringLiteral1601691866;
extern String_t* _stringLiteral1647848890;
extern String_t* _stringLiteral3666098040;
extern const uint32_t CameraSettings_SwitchAutofocus_m1104105893_MetadataUsageId;
extern const uint32_t CameraSettings_TriggerAutofocusEvent_m898525935_MetadataUsageId;
extern const uint32_t CameraSettings_OnPaused_m1743728020_MetadataUsageId;
extern RuntimeClass* U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229_il2cpp_TypeInfo_var;
extern const uint32_t CameraSettings_RestoreOriginalFocusMode_m3433876528_MetadataUsageId;
extern RuntimeClass* CameraDirection_t637748435_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ITrackerManager_GetTracker_TisObjectTracker_t4177997237_m1548597255_RuntimeMethod_var;
extern String_t* _stringLiteral4178167562;
extern String_t* _stringLiteral3976947749;
extern String_t* _stringLiteral1322537578;
extern const uint32_t CameraSettings_RestartCamera_m1627822698_MetadataUsageId;
extern const uint32_t U3CRestoreOriginalFocusModeU3Ec__Iterator0_MoveNext_m3953872261_MetadataUsageId;
extern const uint32_t U3CRestoreOriginalFocusModeU3Ec__Iterator0_Reset_m884766291_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler__ctor_m2145257936_MetadataUsageId;
extern RuntimeClass* VuforiaRuntime_t1949122020_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t3593217305_il2cpp_TypeInfo_var;
extern const RuntimeMethod* DefaultInitializationErrorHandler_OnVuforiaInitializationError_m512807497_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m2713332384_RuntimeMethod_var;
extern const uint32_t DefaultInitializationErrorHandler_Awake_m1713298888_MetadataUsageId;
extern RuntimeClass* WindowFunction_t3146511083_il2cpp_TypeInfo_var;
extern RuntimeClass* GUI_t1624858472_il2cpp_TypeInfo_var;
extern const RuntimeMethod* DefaultInitializationErrorHandler_DrawWindowContent_m2208378571_RuntimeMethod_var;
extern const uint32_t DefaultInitializationErrorHandler_OnGUI_m2338842741_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler_OnDestroy_m3668093536_MetadataUsageId;
extern String_t* _stringLiteral2016908147;
extern String_t* _stringLiteral3483484711;
extern const uint32_t DefaultInitializationErrorHandler_DrawWindowContent_m2208378571_MetadataUsageId;
extern RuntimeClass* InitError_t3420749710_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3279329212;
extern String_t* _stringLiteral3325583105;
extern String_t* _stringLiteral1253325676;
extern String_t* _stringLiteral2959890895;
extern String_t* _stringLiteral2293327149;
extern String_t* _stringLiteral2746077084;
extern String_t* _stringLiteral2746058527;
extern String_t* _stringLiteral491174246;
extern String_t* _stringLiteral3183081100;
extern String_t* _stringLiteral868600955;
extern String_t* _stringLiteral3122929577;
extern String_t* _stringLiteral3567432369;
extern String_t* _stringLiteral229317972;
extern String_t* _stringLiteral3452614641;
extern String_t* _stringLiteral2072581803;
extern String_t* _stringLiteral2642543365;
extern String_t* _stringLiteral3752705136;
extern String_t* _stringLiteral3453007782;
extern const uint32_t DefaultInitializationErrorHandler_SetErrorCode_m599033302_MetadataUsageId;
extern RuntimeClass* VuforiaConfiguration_t1763229349_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1431967569;
extern String_t* _stringLiteral3797279721;
extern String_t* _stringLiteral1108443480;
extern String_t* _stringLiteral2072975055;
extern String_t* _stringLiteral1498400317;
extern const uint32_t DefaultInitializationErrorHandler_getKeyInfo_m1864640064_MetadataUsageId;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* GUIStyle_t3956901511_il2cpp_TypeInfo_var;
extern RuntimeClass* RectOffset_t1369453676_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Resources_GetBuiltinResource_TisFont_t1956802104_m2738776830_RuntimeMethod_var;
extern String_t* _stringLiteral2974894664;
extern const uint32_t DefaultInitializationErrorHandler_SetupGUIStyles_m3863535424_MetadataUsageId;
extern RuntimeClass* Texture2D_t3840446185_il2cpp_TypeInfo_var;
extern const uint32_t DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408_RuntimeMethod_var;
extern const uint32_t DefaultTrackableEventHandler_Start_m796446126_MetadataUsageId;
extern String_t* _stringLiteral3820270571;
extern String_t* _stringLiteral3073488411;
extern String_t* _stringLiteral3483481617;
extern const uint32_t DefaultTrackableEventHandler_OnTrackableStateChanged_m77027111_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007_RuntimeMethod_var;
extern const uint32_t DefaultTrackableEventHandler_OnTrackingFound_m4202593607_MetadataUsageId;
extern const uint32_t DefaultTrackableEventHandler_OnTrackingLost_m424172778_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisCamera_t4157153871_m1557787507_RuntimeMethod_var;
extern const uint32_t distance_Update_m1823152382_MetadataUsageId;
extern const RuntimeMethod* FrameRateSettings_OnVuforiaStarted_m2069567078_RuntimeMethod_var;
extern const uint32_t FrameRateSettings_Start_m580618101_MetadataUsageId;
extern RuntimeClass* VuforiaRenderer_t3433045970_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3233180876;
extern String_t* _stringLiteral4120677989;
extern const uint32_t FrameRateSettings_OnVuforiaStarted_m2069567078_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponentsInParent_TisCanvas_t3310196443_m1039379662_RuntimeMethod_var;
extern const RuntimeMethod* InitErrorHandler_OnInitError_m2884619828_RuntimeMethod_var;
extern const uint32_t InitErrorHandler_Awake_m3752167262_MetadataUsageId;
extern String_t* _stringLiteral3258121531;
extern String_t* _stringLiteral3820000162;
extern String_t* _stringLiteral2293294349;
extern String_t* _stringLiteral2177475950;
extern String_t* _stringLiteral3262298861;
extern String_t* _stringLiteral3078096941;
extern String_t* _stringLiteral3034338515;
extern const uint32_t InitErrorHandler_ShowErrorMessage_m1141628225_MetadataUsageId;
extern const uint32_t LoadingScreen_Update_m69320718_MetadataUsageId;
extern const RuntimeMethod* Object_FindObjectsOfType_TisRawImage_t3182918964_m2400832436_RuntimeMethod_var;
extern String_t* _stringLiteral1395798546;
extern const uint32_t LoadingScreen_FindSpinnerImage_m2988402308_MetadataUsageId;
extern RuntimeClass* List_1_t447389798_il2cpp_TypeInfo_var;
extern RuntimeClass* OptionData_t3270282352_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1438953653_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3700962105_RuntimeMethod_var;
extern const uint32_t LocalizationHelper_Start_m1071918576_MetadataUsageId;
extern const uint32_t MenuAnimator__ctor_m2002699033_MetadataUsageId;
extern const RuntimeMethod* Object_FindObjectOfType_TisMenuOptions_t1951716431_m1050906446_RuntimeMethod_var;
extern const uint32_t MenuAnimator_Start_m1688760679_MetadataUsageId;
extern const uint32_t MenuAnimator_Update_m3695532741_MetadataUsageId;
extern const uint32_t MenuAnimator_Show_m982174260_MetadataUsageId;
extern const RuntimeMethod* Object_FindObjectOfType_TisCameraSettings_t3152619780_m4203198741_RuntimeMethod_var;
extern const RuntimeMethod* Object_FindObjectOfType_TisTrackableSettings_t2862243993_m1852430619_RuntimeMethod_var;
extern const RuntimeMethod* Object_FindObjectOfType_TisMenuAnimator_t2112910832_m1830680649_RuntimeMethod_var;
extern const RuntimeMethod* MenuOptions_OnPaused_m1134986695_RuntimeMethod_var;
extern const uint32_t MenuOptions_Start_m2289807458_MetadataUsageId;
extern String_t* _stringLiteral3521912105;
extern const uint32_t MenuOptions_ShowAboutPage_m3278612116_MetadataUsageId;
extern const RuntimeMethod* MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125_RuntimeMethod_var;
extern String_t* _stringLiteral683363693;
extern const uint32_t MenuOptions_ToggleAutofocus_m677591208_MetadataUsageId;
extern String_t* _stringLiteral351316669;
extern const uint32_t MenuOptions_ToggleTorch_m1503051540_MetadataUsageId;
extern const uint32_t MenuOptions_SelectCamera_m2158115138_MetadataUsageId;
extern String_t* _stringLiteral1531511922;
extern const uint32_t MenuOptions_ToggleExtendedTracking_m3362773293_MetadataUsageId;
extern const uint32_t MenuOptions_ActivateDataset_m942511626_MetadataUsageId;
extern String_t* _stringLiteral3549741419;
extern String_t* _stringLiteral3872780051;
extern String_t* _stringLiteral3544302583;
extern String_t* _stringLiteral451598385;
extern const uint32_t MenuOptions_UpdateUI_m2695051465_MetadataUsageId;
extern const uint32_t MenuOptions_CloseMenu_m2198615225_MetadataUsageId;
extern const uint32_t MenuOptions_OnPaused_m1134986695_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisDropdown_t2274391225_m2992396495_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m489380024_RuntimeMethod_var;
extern String_t* _stringLiteral376326826;
extern String_t* _stringLiteral1550356210;
extern String_t* _stringLiteral199156895;
extern const uint32_t menuStart_changemenuscene_m900804662_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var;
extern const uint32_t onload_Start_m1367470650_MetadataUsageId;
extern RuntimeClass* U3CplayVideoU3Ec__Iterator0_t2444540216_il2cpp_TypeInfo_var;
extern const uint32_t StreamVideo_playVideo_m1477276020_MetadataUsageId;
extern const RuntimeMethod* GameObject_AddComponent_TisVideoPlayer_t1683042537_m955221201_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisAudioSource_t3935305588_m2869327390_RuntimeMethod_var;
extern String_t* _stringLiteral564937146;
extern String_t* _stringLiteral2981664703;
extern String_t* _stringLiteral1136803800;
extern String_t* _stringLiteral2144324982;
extern String_t* _stringLiteral3290706377;
extern const uint32_t U3CplayVideoU3Ec__Iterator0_MoveNext_m823089223_MetadataUsageId;
extern const uint32_t U3CplayVideoU3Ec__Iterator0_Reset_m382291787_MetadataUsageId;
extern const uint32_t TapHandler_Start_m554074027_MetadataUsageId;
extern const uint32_t TapHandler_Update_m2328515667_MetadataUsageId;
extern const uint32_t TapHandler_HandleTap_m1322678531_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponentInChildren_TisCameraSettings_t3152619780_m2209036194_RuntimeMethod_var;
extern const uint32_t TapHandler_OnSingleTapConfirmed_m3372274260_MetadataUsageId;
extern const uint32_t TapHandler_OnDoubleTap_m2928608177_MetadataUsageId;
extern const uint32_t test_Update_m788463022_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisAudioSource_t3935305588_m1977431131_RuntimeMethod_var;
extern String_t* _stringLiteral3500168455;
extern const uint32_t test1_Start_m1569955952_MetadataUsageId;
extern RuntimeClass* ITrackerManager_t607206903_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t93412101_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t1546129680_il2cpp_TypeInfo_var;
extern RuntimeClass* ImageTargetBehaviour_t2200418350_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectTarget_t3212252422_il2cpp_TypeInfo_var;
extern RuntimeClass* MultiTargetBehaviour_t2061511750_il2cpp_TypeInfo_var;
extern RuntimeClass* CylinderTargetBehaviour_t822809409_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectTargetBehaviour_t728125005_il2cpp_TypeInfo_var;
extern RuntimeClass* VuMarkBehaviour_t1178230459_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2304731189;
extern const uint32_t TrackableSettings_SwitchExtendedTracking_m1275921245_MetadataUsageId;
extern const RuntimeMethod* Enumerable_ToList_TisDataSet_t3286034874_m1984750843_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3978133574_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ElementAt_TisDataSet_t3286034874_m1304043092_RuntimeMethod_var;
extern String_t* _stringLiteral3452614529;
extern String_t* _stringLiteral3932363835;
extern const uint32_t TrackableSettings_GetActiveDatasetName_m1771968640_MetadataUsageId;
extern RuntimeClass* IEnumerable_1_t2265887763_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t3718605342_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_GetEnumerator_m6144716_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1064371760_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1234730920_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m1247034833_RuntimeMethod_var;
extern const uint32_t TrackableSettings_ActivateDataSet_m4118878993_MetadataUsageId;
struct GUIStyle_t3956901511_marshaled_pinvoke;
struct GUIStyle_t3956901511_marshaled_com;
struct GUIStyleState_t1397964415_marshaled_pinvoke;
struct GUIStyleState_t1397964415_marshaled_com;
struct RectOffset_t1369453676_marshaled_com;

struct ObjectU5BU5D_t2843939325;
struct RendererU5BU5D_t3210418286;
struct ColliderU5BU5D_t4234922487;
struct CanvasU5BU5D_t682926938;
struct RawImageU5BU5D_t1576731517;
struct StringU5BU5D_t1281789340;
struct CharU5BU5D_t3528271667;


#ifndef U3CMODULEU3E_T692745547_H
#define U3CMODULEU3E_T692745547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745547 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745547_H
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
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef U3CGETCOORDINATESU3EC__ITERATOR0_T3175107318_H
#define U3CGETCOORDINATESU3EC__ITERATOR0_T3175107318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AugmentedScript/<GetCoordinates>c__Iterator0
struct  U3CGetCoordinatesU3Ec__Iterator0_t3175107318  : public RuntimeObject
{
public:
	// System.Int32 AugmentedScript/<GetCoordinates>c__Iterator0::<maxWait>__1
	int32_t ___U3CmaxWaitU3E__1_0;
	// AugmentedScript AugmentedScript/<GetCoordinates>c__Iterator0::$this
	AugmentedScript_t957426287 * ___U24this_1;
	// System.Object AugmentedScript/<GetCoordinates>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean AugmentedScript/<GetCoordinates>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 AugmentedScript/<GetCoordinates>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_U3CmaxWaitU3E__1_0() { return static_cast<int32_t>(offsetof(U3CGetCoordinatesU3Ec__Iterator0_t3175107318, ___U3CmaxWaitU3E__1_0)); }
	inline int32_t get_U3CmaxWaitU3E__1_0() const { return ___U3CmaxWaitU3E__1_0; }
	inline int32_t* get_address_of_U3CmaxWaitU3E__1_0() { return &___U3CmaxWaitU3E__1_0; }
	inline void set_U3CmaxWaitU3E__1_0(int32_t value)
	{
		___U3CmaxWaitU3E__1_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CGetCoordinatesU3Ec__Iterator0_t3175107318, ___U24this_1)); }
	inline AugmentedScript_t957426287 * get_U24this_1() const { return ___U24this_1; }
	inline AugmentedScript_t957426287 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(AugmentedScript_t957426287 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CGetCoordinatesU3Ec__Iterator0_t3175107318, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CGetCoordinatesU3Ec__Iterator0_t3175107318, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CGetCoordinatesU3Ec__Iterator0_t3175107318, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETCOORDINATESU3EC__ITERATOR0_T3175107318_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef ARCONTROLLER_T116632334_H
#define ARCONTROLLER_T116632334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ARController
struct  ARController_t116632334  : public RuntimeObject
{
public:
	// Vuforia.VuforiaBehaviour Vuforia.ARController::mVuforiaBehaviour
	VuforiaBehaviour_t2151848540 * ___mVuforiaBehaviour_0;

public:
	inline static int32_t get_offset_of_mVuforiaBehaviour_0() { return static_cast<int32_t>(offsetof(ARController_t116632334, ___mVuforiaBehaviour_0)); }
	inline VuforiaBehaviour_t2151848540 * get_mVuforiaBehaviour_0() const { return ___mVuforiaBehaviour_0; }
	inline VuforiaBehaviour_t2151848540 ** get_address_of_mVuforiaBehaviour_0() { return &___mVuforiaBehaviour_0; }
	inline void set_mVuforiaBehaviour_0(VuforiaBehaviour_t2151848540 * value)
	{
		___mVuforiaBehaviour_0 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaBehaviour_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARCONTROLLER_T116632334_H
#ifndef U3CRESTOREORIGINALFOCUSMODEU3EC__ITERATOR0_T2912012229_H
#define U3CRESTOREORIGINALFOCUSMODEU3EC__ITERATOR0_T2912012229_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraSettings/<RestoreOriginalFocusMode>c__Iterator0
struct  U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229  : public RuntimeObject
{
public:
	// CameraSettings CameraSettings/<RestoreOriginalFocusMode>c__Iterator0::$this
	CameraSettings_t3152619780 * ___U24this_0;
	// System.Object CameraSettings/<RestoreOriginalFocusMode>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean CameraSettings/<RestoreOriginalFocusMode>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 CameraSettings/<RestoreOriginalFocusMode>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229, ___U24this_0)); }
	inline CameraSettings_t3152619780 * get_U24this_0() const { return ___U24this_0; }
	inline CameraSettings_t3152619780 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(CameraSettings_t3152619780 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CRESTOREORIGINALFOCUSMODEU3EC__ITERATOR0_T2912012229_H
#ifndef TRACKER_T2709586299_H
#define TRACKER_T2709586299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Tracker
struct  Tracker_t2709586299  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.Tracker::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CIsActiveU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Tracker_t2709586299, ___U3CIsActiveU3Ek__BackingField_0)); }
	inline bool get_U3CIsActiveU3Ek__BackingField_0() const { return ___U3CIsActiveU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsActiveU3Ek__BackingField_0() { return &___U3CIsActiveU3Ek__BackingField_0; }
	inline void set_U3CIsActiveU3Ek__BackingField_0(bool value)
	{
		___U3CIsActiveU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKER_T2709586299_H
#ifndef LIST_1_T463142320_H
#define LIST_1_T463142320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Vuforia.DataSet>
struct  List_1_t463142320  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DataSetU5BU5D_t4052198943* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t463142320, ____items_1)); }
	inline DataSetU5BU5D_t4052198943* get__items_1() const { return ____items_1; }
	inline DataSetU5BU5D_t4052198943** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DataSetU5BU5D_t4052198943* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t463142320, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t463142320, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t463142320_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	DataSetU5BU5D_t4052198943* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t463142320_StaticFields, ___EmptyArray_4)); }
	inline DataSetU5BU5D_t4052198943* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline DataSetU5BU5D_t4052198943** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(DataSetU5BU5D_t4052198943* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T463142320_H
#ifndef STATEMANAGER_T1982749557_H
#define STATEMANAGER_T1982749557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.StateManager
struct  StateManager_t1982749557  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.TrackableBehaviour> Vuforia.StateManager::mTrackableBehaviours
	Dictionary_2_t2272543 * ___mTrackableBehaviours_0;
	// System.Collections.Generic.List`1<System.Int32> Vuforia.StateManager::mAutomaticallyCreatedBehaviours
	List_1_t128053199 * ___mAutomaticallyCreatedBehaviours_1;
	// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour> Vuforia.StateManager::mBehavioursMarkedForDeletion
	List_1_t2585633954 * ___mBehavioursMarkedForDeletion_2;
	// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour> Vuforia.StateManager::mActiveTrackableBehaviours
	List_1_t2585633954 * ___mActiveTrackableBehaviours_3;
	// Vuforia.WordManager Vuforia.StateManager::mWordManager
	WordManager_t3100853168 * ___mWordManager_4;
	// Vuforia.VuMarkManager Vuforia.StateManager::mVuMarkManager
	VuMarkManager_t2982459596 * ___mVuMarkManager_5;
	// Vuforia.DeviceTrackingManager Vuforia.StateManager::mDeviceTrackingManager
	DeviceTrackingManager_t3849131975 * ___mDeviceTrackingManager_6;
	// UnityEngine.GameObject Vuforia.StateManager::mCameraPositioningHelper
	GameObject_t1113636619 * ___mCameraPositioningHelper_7;
	// Vuforia.IExtendedTrackingManager Vuforia.StateManager::mExtendedTrackingManager
	RuntimeObject* ___mExtendedTrackingManager_8;
	// Vuforia.IlluminationManager Vuforia.StateManager::mIlluminationManager
	IlluminationManager_t3960931838 * ___mIlluminationManager_9;

public:
	inline static int32_t get_offset_of_mTrackableBehaviours_0() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mTrackableBehaviours_0)); }
	inline Dictionary_2_t2272543 * get_mTrackableBehaviours_0() const { return ___mTrackableBehaviours_0; }
	inline Dictionary_2_t2272543 ** get_address_of_mTrackableBehaviours_0() { return &___mTrackableBehaviours_0; }
	inline void set_mTrackableBehaviours_0(Dictionary_2_t2272543 * value)
	{
		___mTrackableBehaviours_0 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableBehaviours_0), value);
	}

	inline static int32_t get_offset_of_mAutomaticallyCreatedBehaviours_1() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mAutomaticallyCreatedBehaviours_1)); }
	inline List_1_t128053199 * get_mAutomaticallyCreatedBehaviours_1() const { return ___mAutomaticallyCreatedBehaviours_1; }
	inline List_1_t128053199 ** get_address_of_mAutomaticallyCreatedBehaviours_1() { return &___mAutomaticallyCreatedBehaviours_1; }
	inline void set_mAutomaticallyCreatedBehaviours_1(List_1_t128053199 * value)
	{
		___mAutomaticallyCreatedBehaviours_1 = value;
		Il2CppCodeGenWriteBarrier((&___mAutomaticallyCreatedBehaviours_1), value);
	}

	inline static int32_t get_offset_of_mBehavioursMarkedForDeletion_2() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mBehavioursMarkedForDeletion_2)); }
	inline List_1_t2585633954 * get_mBehavioursMarkedForDeletion_2() const { return ___mBehavioursMarkedForDeletion_2; }
	inline List_1_t2585633954 ** get_address_of_mBehavioursMarkedForDeletion_2() { return &___mBehavioursMarkedForDeletion_2; }
	inline void set_mBehavioursMarkedForDeletion_2(List_1_t2585633954 * value)
	{
		___mBehavioursMarkedForDeletion_2 = value;
		Il2CppCodeGenWriteBarrier((&___mBehavioursMarkedForDeletion_2), value);
	}

	inline static int32_t get_offset_of_mActiveTrackableBehaviours_3() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mActiveTrackableBehaviours_3)); }
	inline List_1_t2585633954 * get_mActiveTrackableBehaviours_3() const { return ___mActiveTrackableBehaviours_3; }
	inline List_1_t2585633954 ** get_address_of_mActiveTrackableBehaviours_3() { return &___mActiveTrackableBehaviours_3; }
	inline void set_mActiveTrackableBehaviours_3(List_1_t2585633954 * value)
	{
		___mActiveTrackableBehaviours_3 = value;
		Il2CppCodeGenWriteBarrier((&___mActiveTrackableBehaviours_3), value);
	}

	inline static int32_t get_offset_of_mWordManager_4() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mWordManager_4)); }
	inline WordManager_t3100853168 * get_mWordManager_4() const { return ___mWordManager_4; }
	inline WordManager_t3100853168 ** get_address_of_mWordManager_4() { return &___mWordManager_4; }
	inline void set_mWordManager_4(WordManager_t3100853168 * value)
	{
		___mWordManager_4 = value;
		Il2CppCodeGenWriteBarrier((&___mWordManager_4), value);
	}

	inline static int32_t get_offset_of_mVuMarkManager_5() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mVuMarkManager_5)); }
	inline VuMarkManager_t2982459596 * get_mVuMarkManager_5() const { return ___mVuMarkManager_5; }
	inline VuMarkManager_t2982459596 ** get_address_of_mVuMarkManager_5() { return &___mVuMarkManager_5; }
	inline void set_mVuMarkManager_5(VuMarkManager_t2982459596 * value)
	{
		___mVuMarkManager_5 = value;
		Il2CppCodeGenWriteBarrier((&___mVuMarkManager_5), value);
	}

	inline static int32_t get_offset_of_mDeviceTrackingManager_6() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mDeviceTrackingManager_6)); }
	inline DeviceTrackingManager_t3849131975 * get_mDeviceTrackingManager_6() const { return ___mDeviceTrackingManager_6; }
	inline DeviceTrackingManager_t3849131975 ** get_address_of_mDeviceTrackingManager_6() { return &___mDeviceTrackingManager_6; }
	inline void set_mDeviceTrackingManager_6(DeviceTrackingManager_t3849131975 * value)
	{
		___mDeviceTrackingManager_6 = value;
		Il2CppCodeGenWriteBarrier((&___mDeviceTrackingManager_6), value);
	}

	inline static int32_t get_offset_of_mCameraPositioningHelper_7() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mCameraPositioningHelper_7)); }
	inline GameObject_t1113636619 * get_mCameraPositioningHelper_7() const { return ___mCameraPositioningHelper_7; }
	inline GameObject_t1113636619 ** get_address_of_mCameraPositioningHelper_7() { return &___mCameraPositioningHelper_7; }
	inline void set_mCameraPositioningHelper_7(GameObject_t1113636619 * value)
	{
		___mCameraPositioningHelper_7 = value;
		Il2CppCodeGenWriteBarrier((&___mCameraPositioningHelper_7), value);
	}

	inline static int32_t get_offset_of_mExtendedTrackingManager_8() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mExtendedTrackingManager_8)); }
	inline RuntimeObject* get_mExtendedTrackingManager_8() const { return ___mExtendedTrackingManager_8; }
	inline RuntimeObject** get_address_of_mExtendedTrackingManager_8() { return &___mExtendedTrackingManager_8; }
	inline void set_mExtendedTrackingManager_8(RuntimeObject* value)
	{
		___mExtendedTrackingManager_8 = value;
		Il2CppCodeGenWriteBarrier((&___mExtendedTrackingManager_8), value);
	}

	inline static int32_t get_offset_of_mIlluminationManager_9() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mIlluminationManager_9)); }
	inline IlluminationManager_t3960931838 * get_mIlluminationManager_9() const { return ___mIlluminationManager_9; }
	inline IlluminationManager_t3960931838 ** get_address_of_mIlluminationManager_9() { return &___mIlluminationManager_9; }
	inline void set_mIlluminationManager_9(IlluminationManager_t3960931838 * value)
	{
		___mIlluminationManager_9 = value;
		Il2CppCodeGenWriteBarrier((&___mIlluminationManager_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATEMANAGER_T1982749557_H
#ifndef OPTIONDATA_T3270282352_H
#define OPTIONDATA_T3270282352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Dropdown/OptionData
struct  OptionData_t3270282352  : public RuntimeObject
{
public:
	// System.String UnityEngine.UI.Dropdown/OptionData::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Sprite UnityEngine.UI.Dropdown/OptionData::m_Image
	Sprite_t280657092 * ___m_Image_1;

public:
	inline static int32_t get_offset_of_m_Text_0() { return static_cast<int32_t>(offsetof(OptionData_t3270282352, ___m_Text_0)); }
	inline String_t* get_m_Text_0() const { return ___m_Text_0; }
	inline String_t** get_address_of_m_Text_0() { return &___m_Text_0; }
	inline void set_m_Text_0(String_t* value)
	{
		___m_Text_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_0), value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(OptionData_t3270282352, ___m_Image_1)); }
	inline Sprite_t280657092 * get_m_Image_1() const { return ___m_Image_1; }
	inline Sprite_t280657092 ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Sprite_t280657092 * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPTIONDATA_T3270282352_H
#ifndef LIST_1_T447389798_H
#define LIST_1_T447389798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct  List_1_t447389798  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	OptionDataU5BU5D_t3600483281* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t447389798, ____items_1)); }
	inline OptionDataU5BU5D_t3600483281* get__items_1() const { return ____items_1; }
	inline OptionDataU5BU5D_t3600483281** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(OptionDataU5BU5D_t3600483281* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t447389798, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t447389798, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t447389798_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	OptionDataU5BU5D_t3600483281* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t447389798_StaticFields, ___EmptyArray_4)); }
	inline OptionDataU5BU5D_t3600483281* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline OptionDataU5BU5D_t3600483281** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(OptionDataU5BU5D_t3600483281* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T447389798_H
#ifndef LOCATIONSERVICE_T2839639379_H
#define LOCATIONSERVICE_T2839639379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LocationService
struct  LocationService_t2839639379  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCATIONSERVICE_T2839639379_H
#ifndef U3CPLAYVIDEOU3EC__ITERATOR0_T2444540216_H
#define U3CPLAYVIDEOU3EC__ITERATOR0_T2444540216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StreamVideo/<playVideo>c__Iterator0
struct  U3CplayVideoU3Ec__Iterator0_t2444540216  : public RuntimeObject
{
public:
	// StreamVideo StreamVideo/<playVideo>c__Iterator0::$this
	StreamVideo_t2698492640 * ___U24this_0;
	// System.Object StreamVideo/<playVideo>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean StreamVideo/<playVideo>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 StreamVideo/<playVideo>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CplayVideoU3Ec__Iterator0_t2444540216, ___U24this_0)); }
	inline StreamVideo_t2698492640 * get_U24this_0() const { return ___U24this_0; }
	inline StreamVideo_t2698492640 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(StreamVideo_t2698492640 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CplayVideoU3Ec__Iterator0_t2444540216, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CplayVideoU3Ec__Iterator0_t2444540216, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CplayVideoU3Ec__Iterator0_t2444540216, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPLAYVIDEOU3EC__ITERATOR0_T2444540216_H
#ifndef CUSTOMYIELDINSTRUCTION_T1895667560_H
#define CUSTOMYIELDINSTRUCTION_T1895667560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t1895667560  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMYIELDINSTRUCTION_T1895667560_H
#ifndef U3CLOADNEXTSCENEAFTERU3EC__ITERATOR0_T994227170_H
#define U3CLOADNEXTSCENEAFTERU3EC__ITERATOR0_T994227170_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AsyncSceneLoader/<LoadNextSceneAfter>c__Iterator0
struct  U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170  : public RuntimeObject
{
public:
	// System.Single AsyncSceneLoader/<LoadNextSceneAfter>c__Iterator0::seconds
	float ___seconds_0;
	// System.Object AsyncSceneLoader/<LoadNextSceneAfter>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean AsyncSceneLoader/<LoadNextSceneAfter>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 AsyncSceneLoader/<LoadNextSceneAfter>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_seconds_0() { return static_cast<int32_t>(offsetof(U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170, ___seconds_0)); }
	inline float get_seconds_0() const { return ___seconds_0; }
	inline float* get_address_of_seconds_0() { return &___seconds_0; }
	inline void set_seconds_0(float value)
	{
		___seconds_0 = value;
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLOADNEXTSCENEAFTERU3EC__ITERATOR0_T994227170_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef ARGCLASS_T2323061523_H
#define ARGCLASS_T2323061523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// argClass
struct  argClass_t2323061523  : public RuntimeObject
{
public:

public:
};

struct argClass_t2323061523_StaticFields
{
public:
	// System.String argClass::language
	String_t* ___language_0;

public:
	inline static int32_t get_offset_of_language_0() { return static_cast<int32_t>(offsetof(argClass_t2323061523_StaticFields, ___language_0)); }
	inline String_t* get_language_0() const { return ___language_0; }
	inline String_t** get_address_of_language_0() { return &___language_0; }
	inline void set_language_0(String_t* value)
	{
		___language_0 = value;
		Il2CppCodeGenWriteBarrier((&___language_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGCLASS_T2323061523_H
#ifndef UINT16_T2177724958_H
#define UINT16_T2177724958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2177724958 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt16_t2177724958, ___m_value_2)); }
	inline uint16_t get_m_value_2() const { return ___m_value_2; }
	inline uint16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T2177724958_H
#ifndef VIDEOMODEDATA_T2066817255_H
#define VIDEOMODEDATA_T2066817255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/VideoModeData
#pragma pack(push, tp, 1)
struct  VideoModeData_t2066817255 
{
public:
	// System.Int32 Vuforia.CameraDevice/VideoModeData::width
	int32_t ___width_0;
	// System.Int32 Vuforia.CameraDevice/VideoModeData::height
	int32_t ___height_1;
	// System.Single Vuforia.CameraDevice/VideoModeData::frameRate
	float ___frameRate_2;
	// System.Int32 Vuforia.CameraDevice/VideoModeData::unused
	int32_t ___unused_3;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(VideoModeData_t2066817255, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(VideoModeData_t2066817255, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_frameRate_2() { return static_cast<int32_t>(offsetof(VideoModeData_t2066817255, ___frameRate_2)); }
	inline float get_frameRate_2() const { return ___frameRate_2; }
	inline float* get_address_of_frameRate_2() { return &___frameRate_2; }
	inline void set_frameRate_2(float value)
	{
		___frameRate_2 = value;
	}

	inline static int32_t get_offset_of_unused_3() { return static_cast<int32_t>(offsetof(VideoModeData_t2066817255, ___unused_3)); }
	inline int32_t get_unused_3() const { return ___unused_3; }
	inline int32_t* get_address_of_unused_3() { return &___unused_3; }
	inline void set_unused_3(int32_t value)
	{
		___unused_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOMODEDATA_T2066817255_H
#ifndef ENUMERATOR_T2352386197_H
#define ENUMERATOR_T2352386197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Vuforia.DataSet>
struct  Enumerator_t2352386197 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t463142320 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	DataSet_t3286034874 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2352386197, ___l_0)); }
	inline List_1_t463142320 * get_l_0() const { return ___l_0; }
	inline List_1_t463142320 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t463142320 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2352386197, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2352386197, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2352386197, ___current_3)); }
	inline DataSet_t3286034874 * get_current_3() const { return ___current_3; }
	inline DataSet_t3286034874 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(DataSet_t3286034874 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2352386197_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
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
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
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
#endif // RECT_T2360479859_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef OBJECTTRACKER_T4177997237_H
#define OBJECTTRACKER_T4177997237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ObjectTracker
struct  ObjectTracker_t4177997237  : public Tracker_t2709586299
{
public:
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.ObjectTracker::mActiveDataSets
	List_1_t463142320 * ___mActiveDataSets_1;
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.ObjectTracker::mDataSets
	List_1_t463142320 * ___mDataSets_2;
	// Vuforia.ImageTargetBuilder Vuforia.ObjectTracker::mImageTargetBuilder
	ImageTargetBuilder_t2430893908 * ___mImageTargetBuilder_3;
	// Vuforia.TargetFinder Vuforia.ObjectTracker::mTargetFinder
	TargetFinder_t2439332195 * ___mTargetFinder_4;

public:
	inline static int32_t get_offset_of_mActiveDataSets_1() { return static_cast<int32_t>(offsetof(ObjectTracker_t4177997237, ___mActiveDataSets_1)); }
	inline List_1_t463142320 * get_mActiveDataSets_1() const { return ___mActiveDataSets_1; }
	inline List_1_t463142320 ** get_address_of_mActiveDataSets_1() { return &___mActiveDataSets_1; }
	inline void set_mActiveDataSets_1(List_1_t463142320 * value)
	{
		___mActiveDataSets_1 = value;
		Il2CppCodeGenWriteBarrier((&___mActiveDataSets_1), value);
	}

	inline static int32_t get_offset_of_mDataSets_2() { return static_cast<int32_t>(offsetof(ObjectTracker_t4177997237, ___mDataSets_2)); }
	inline List_1_t463142320 * get_mDataSets_2() const { return ___mDataSets_2; }
	inline List_1_t463142320 ** get_address_of_mDataSets_2() { return &___mDataSets_2; }
	inline void set_mDataSets_2(List_1_t463142320 * value)
	{
		___mDataSets_2 = value;
		Il2CppCodeGenWriteBarrier((&___mDataSets_2), value);
	}

	inline static int32_t get_offset_of_mImageTargetBuilder_3() { return static_cast<int32_t>(offsetof(ObjectTracker_t4177997237, ___mImageTargetBuilder_3)); }
	inline ImageTargetBuilder_t2430893908 * get_mImageTargetBuilder_3() const { return ___mImageTargetBuilder_3; }
	inline ImageTargetBuilder_t2430893908 ** get_address_of_mImageTargetBuilder_3() { return &___mImageTargetBuilder_3; }
	inline void set_mImageTargetBuilder_3(ImageTargetBuilder_t2430893908 * value)
	{
		___mImageTargetBuilder_3 = value;
		Il2CppCodeGenWriteBarrier((&___mImageTargetBuilder_3), value);
	}

	inline static int32_t get_offset_of_mTargetFinder_4() { return static_cast<int32_t>(offsetof(ObjectTracker_t4177997237, ___mTargetFinder_4)); }
	inline TargetFinder_t2439332195 * get_mTargetFinder_4() const { return ___mTargetFinder_4; }
	inline TargetFinder_t2439332195 ** get_address_of_mTargetFinder_4() { return &___mTargetFinder_4; }
	inline void set_mTargetFinder_4(TargetFinder_t2439332195 * value)
	{
		___mTargetFinder_4 = value;
		Il2CppCodeGenWriteBarrier((&___mTargetFinder_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTTRACKER_T4177997237_H
#ifndef LOCATIONINFO_T1192161013_H
#define LOCATIONINFO_T1192161013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LocationInfo
struct  LocationInfo_t1192161013 
{
public:
	// System.Double UnityEngine.LocationInfo::m_Timestamp
	double ___m_Timestamp_0;
	// System.Single UnityEngine.LocationInfo::m_Latitude
	float ___m_Latitude_1;
	// System.Single UnityEngine.LocationInfo::m_Longitude
	float ___m_Longitude_2;
	// System.Single UnityEngine.LocationInfo::m_Altitude
	float ___m_Altitude_3;
	// System.Single UnityEngine.LocationInfo::m_HorizontalAccuracy
	float ___m_HorizontalAccuracy_4;
	// System.Single UnityEngine.LocationInfo::m_VerticalAccuracy
	float ___m_VerticalAccuracy_5;

public:
	inline static int32_t get_offset_of_m_Timestamp_0() { return static_cast<int32_t>(offsetof(LocationInfo_t1192161013, ___m_Timestamp_0)); }
	inline double get_m_Timestamp_0() const { return ___m_Timestamp_0; }
	inline double* get_address_of_m_Timestamp_0() { return &___m_Timestamp_0; }
	inline void set_m_Timestamp_0(double value)
	{
		___m_Timestamp_0 = value;
	}

	inline static int32_t get_offset_of_m_Latitude_1() { return static_cast<int32_t>(offsetof(LocationInfo_t1192161013, ___m_Latitude_1)); }
	inline float get_m_Latitude_1() const { return ___m_Latitude_1; }
	inline float* get_address_of_m_Latitude_1() { return &___m_Latitude_1; }
	inline void set_m_Latitude_1(float value)
	{
		___m_Latitude_1 = value;
	}

	inline static int32_t get_offset_of_m_Longitude_2() { return static_cast<int32_t>(offsetof(LocationInfo_t1192161013, ___m_Longitude_2)); }
	inline float get_m_Longitude_2() const { return ___m_Longitude_2; }
	inline float* get_address_of_m_Longitude_2() { return &___m_Longitude_2; }
	inline void set_m_Longitude_2(float value)
	{
		___m_Longitude_2 = value;
	}

	inline static int32_t get_offset_of_m_Altitude_3() { return static_cast<int32_t>(offsetof(LocationInfo_t1192161013, ___m_Altitude_3)); }
	inline float get_m_Altitude_3() const { return ___m_Altitude_3; }
	inline float* get_address_of_m_Altitude_3() { return &___m_Altitude_3; }
	inline void set_m_Altitude_3(float value)
	{
		___m_Altitude_3 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalAccuracy_4() { return static_cast<int32_t>(offsetof(LocationInfo_t1192161013, ___m_HorizontalAccuracy_4)); }
	inline float get_m_HorizontalAccuracy_4() const { return ___m_HorizontalAccuracy_4; }
	inline float* get_address_of_m_HorizontalAccuracy_4() { return &___m_HorizontalAccuracy_4; }
	inline void set_m_HorizontalAccuracy_4(float value)
	{
		___m_HorizontalAccuracy_4 = value;
	}

	inline static int32_t get_offset_of_m_VerticalAccuracy_5() { return static_cast<int32_t>(offsetof(LocationInfo_t1192161013, ___m_VerticalAccuracy_5)); }
	inline float get_m_VerticalAccuracy_5() const { return ___m_VerticalAccuracy_5; }
	inline float* get_address_of_m_VerticalAccuracy_5() { return &___m_VerticalAccuracy_5; }
	inline void set_m_VerticalAccuracy_5(float value)
	{
		___m_VerticalAccuracy_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCATIONINFO_T1192161013_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
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
#endif // INT32_T2950945753_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef SCENE_T2348375561_H
#define SCENE_T2348375561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.Scene
struct  Scene_t2348375561 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t2348375561, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_T2348375561_H
#ifndef VEC2I_T3527036565_H
#define VEC2I_T3527036565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/Vec2I
#pragma pack(push, tp, 1)
struct  Vec2I_t3527036565 
{
public:
	// System.Int32 Vuforia.VuforiaRenderer/Vec2I::x
	int32_t ___x_0;
	// System.Int32 Vuforia.VuforiaRenderer/Vec2I::y
	int32_t ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vec2I_t3527036565, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vec2I_t3527036565, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VEC2I_T3527036565_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
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
#endif // BOOLEAN_T97287965_H
#ifndef SPRITESTATE_T1362986479_H
#define SPRITESTATE_T1362986479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t1362986479 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t280657092 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t280657092 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_HighlightedSprite_0)); }
	inline Sprite_t280657092 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t280657092 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t280657092 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_PressedSprite_1)); }
	inline Sprite_t280657092 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t280657092 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t280657092 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_DisabledSprite_2)); }
	inline Sprite_t280657092 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t280657092 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t280657092 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_pinvoke
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_com
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T1362986479_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef WAITFORSECONDS_T1699091251_H
#define WAITFORSECONDS_T1699091251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1699091251  : public YieldInstruction_t403091072
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1699091251, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T1699091251_H
#ifndef WAITWHILE_T2469172888_H
#define WAITWHILE_T2469172888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitWhile
struct  WaitWhile_t2469172888  : public CustomYieldInstruction_t1895667560
{
public:
	// System.Func`1<System.Boolean> UnityEngine.WaitWhile::m_Predicate
	Func_1_t3822001908 * ___m_Predicate_0;

public:
	inline static int32_t get_offset_of_m_Predicate_0() { return static_cast<int32_t>(offsetof(WaitWhile_t2469172888, ___m_Predicate_0)); }
	inline Func_1_t3822001908 * get_m_Predicate_0() const { return ___m_Predicate_0; }
	inline Func_1_t3822001908 ** get_address_of_m_Predicate_0() { return &___m_Predicate_0; }
	inline void set_m_Predicate_0(Func_1_t3822001908 * value)
	{
		___m_Predicate_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Predicate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITWHILE_T2469172888_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
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
#endif // COLOR_T2555686324_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef FPSHINT_T2906034572_H
#define FPSHINT_T2906034572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/FpsHint
struct  FpsHint_t2906034572 
{
public:
	// System.Int32 Vuforia.VuforiaRenderer/FpsHint::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FpsHint_t2906034572, ___value___1)); }
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
#endif // FPSHINT_T2906034572_H
#ifndef ASYNCOPERATION_T1445031843_H
#define ASYNCOPERATION_T1445031843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t1445031843  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_t1617499438 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_completeCallback_1)); }
	inline Action_1_t1617499438 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_t1617499438 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_t1617499438 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_completeCallback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
#endif // ASYNCOPERATION_T1445031843_H
#ifndef VIDEOSOURCE_T4095631662_H
#define VIDEOSOURCE_T4095631662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoSource
struct  VideoSource_t4095631662 
{
public:
	// System.Int32 UnityEngine.Video.VideoSource::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VideoSource_t4095631662, ___value___1)); }
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
#endif // VIDEOSOURCE_T4095631662_H
#ifndef MODE_T1066900953_H
#define MODE_T1066900953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t1066900953 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t1066900953, ___value___1)); }
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
#endif // MODE_T1066900953_H
#ifndef VIDEOAUDIOOUTPUTMODE_T1271585647_H
#define VIDEOAUDIOOUTPUTMODE_T1271585647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoAudioOutputMode
struct  VideoAudioOutputMode_t1271585647 
{
public:
	// System.Int32 UnityEngine.Video.VideoAudioOutputMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VideoAudioOutputMode_t1271585647, ___value___1)); }
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
#endif // VIDEOAUDIOOUTPUTMODE_T1271585647_H
#ifndef THREADPRIORITY_T1774350854_H
#define THREADPRIORITY_T1774350854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ThreadPriority
struct  ThreadPriority_t1774350854 
{
public:
	// System.Int32 UnityEngine.ThreadPriority::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ThreadPriority_t1774350854, ___value___1)); }
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
#endif // THREADPRIORITY_T1774350854_H
#ifndef SELECTIONSTATE_T2656606514_H
#define SELECTIONSTATE_T2656606514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/SelectionState
struct  SelectionState_t2656606514 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectionState_t2656606514, ___value___1)); }
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
#endif // SELECTIONSTATE_T2656606514_H
#ifndef COLORBLOCK_T2139031574_H
#define COLORBLOCK_T2139031574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t2139031574 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t2555686324  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t2555686324  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t2555686324  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t2555686324  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_NormalColor_0)); }
	inline Color_t2555686324  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t2555686324 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t2555686324  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_HighlightedColor_1)); }
	inline Color_t2555686324  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t2555686324 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t2555686324  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_PressedColor_2)); }
	inline Color_t2555686324  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t2555686324 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t2555686324  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_DisabledColor_3)); }
	inline Color_t2555686324  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t2555686324 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t2555686324  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T2139031574_H
#ifndef TRANSITION_T1769908631_H
#define TRANSITION_T1769908631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/Transition
struct  Transition_t1769908631 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Transition_t1769908631, ___value___1)); }
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
#endif // TRANSITION_T1769908631_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef STORAGETYPE_T857810839_H
#define STORAGETYPE_T857810839_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaUnity/StorageType
struct  StorageType_t857810839 
{
public:
	// System.Int32 Vuforia.VuforiaUnity/StorageType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StorageType_t857810839, ___value___1)); }
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
#endif // STORAGETYPE_T857810839_H
#ifndef INSTANCEIDTYPE_T420283664_H
#define INSTANCEIDTYPE_T420283664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.InstanceIdType
struct  InstanceIdType_t420283664 
{
public:
	// System.Int32 Vuforia.InstanceIdType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InstanceIdType_t420283664, ___value___1)); }
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
#endif // INSTANCEIDTYPE_T420283664_H
#ifndef CAMERADEVICEMODE_T2478715656_H
#define CAMERADEVICEMODE_T2478715656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraDeviceMode
struct  CameraDeviceMode_t2478715656 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraDeviceMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraDeviceMode_t2478715656, ___value___1)); }
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
#endif // CAMERADEVICEMODE_T2478715656_H
#ifndef VIDEOBACKGROUNDREFLECTION_T736962841_H
#define VIDEOBACKGROUNDREFLECTION_T736962841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/VideoBackgroundReflection
struct  VideoBackgroundReflection_t736962841 
{
public:
	// System.Int32 Vuforia.VuforiaRenderer/VideoBackgroundReflection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VideoBackgroundReflection_t736962841, ___value___1)); }
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
#endif // VIDEOBACKGROUNDREFLECTION_T736962841_H
#ifndef WORLDCENTERMODE_T3672819471_H
#define WORLDCENTERMODE_T3672819471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaARController/WorldCenterMode
struct  WorldCenterMode_t3672819471 
{
public:
	// System.Int32 Vuforia.VuforiaARController/WorldCenterMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WorldCenterMode_t3672819471, ___value___1)); }
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
#endif // WORLDCENTERMODE_T3672819471_H
#ifndef VIDEOBGCFGDATA_T994527297_H
#define VIDEOBGCFGDATA_T994527297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/VideoBGCfgData
#pragma pack(push, tp, 1)
struct  VideoBGCfgData_t994527297 
{
public:
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.VuforiaRenderer/VideoBGCfgData::position
	Vec2I_t3527036565  ___position_0;
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.VuforiaRenderer/VideoBGCfgData::size
	Vec2I_t3527036565  ___size_1;
	// System.Int32 Vuforia.VuforiaRenderer/VideoBGCfgData::enabled
	int32_t ___enabled_2;
	// System.Int32 Vuforia.VuforiaRenderer/VideoBGCfgData::reflectionInteger
	int32_t ___reflectionInteger_3;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(VideoBGCfgData_t994527297, ___position_0)); }
	inline Vec2I_t3527036565  get_position_0() const { return ___position_0; }
	inline Vec2I_t3527036565 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vec2I_t3527036565  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(VideoBGCfgData_t994527297, ___size_1)); }
	inline Vec2I_t3527036565  get_size_1() const { return ___size_1; }
	inline Vec2I_t3527036565 * get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(Vec2I_t3527036565  value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_enabled_2() { return static_cast<int32_t>(offsetof(VideoBGCfgData_t994527297, ___enabled_2)); }
	inline int32_t get_enabled_2() const { return ___enabled_2; }
	inline int32_t* get_address_of_enabled_2() { return &___enabled_2; }
	inline void set_enabled_2(int32_t value)
	{
		___enabled_2 = value;
	}

	inline static int32_t get_offset_of_reflectionInteger_3() { return static_cast<int32_t>(offsetof(VideoBGCfgData_t994527297, ___reflectionInteger_3)); }
	inline int32_t get_reflectionInteger_3() const { return ___reflectionInteger_3; }
	inline int32_t* get_address_of_reflectionInteger_3() { return &___reflectionInteger_3; }
	inline void set_reflectionInteger_3(int32_t value)
	{
		___reflectionInteger_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOBGCFGDATA_T994527297_H
#ifndef TOGGLETRANSITION_T3587297765_H
#define TOGGLETRANSITION_T3587297765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Toggle/ToggleTransition
struct  ToggleTransition_t3587297765 
{
public:
	// System.Int32 UnityEngine.UI.Toggle/ToggleTransition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ToggleTransition_t3587297765, ___value___1)); }
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
#endif // TOGGLETRANSITION_T3587297765_H
#ifndef IMAGETARGETTYPE_T2834081427_H
#define IMAGETARGETTYPE_T2834081427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ImageTargetType
struct  ImageTargetType_t2834081427 
{
public:
	// System.Int32 Vuforia.ImageTargetType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ImageTargetType_t2834081427, ___value___1)); }
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
#endif // IMAGETARGETTYPE_T2834081427_H
#ifndef TEXTUREFORMAT_T2701165832_H
#define TEXTUREFORMAT_T2701165832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t2701165832 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureFormat_t2701165832, ___value___1)); }
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
#endif // TEXTUREFORMAT_T2701165832_H
#ifndef TEXTANCHOR_T2035777396_H
#define TEXTANCHOR_T2035777396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAnchor
struct  TextAnchor_t2035777396 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextAnchor_t2035777396, ___value___1)); }
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
#endif // TEXTANCHOR_T2035777396_H
#ifndef FOCUSMODE_T3379290461_H
#define FOCUSMODE_T3379290461_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/FocusMode
struct  FocusMode_t3379290461 
{
public:
	// System.Int32 Vuforia.CameraDevice/FocusMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FocusMode_t3379290461, ___value___1)); }
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
#endif // FOCUSMODE_T3379290461_H
#ifndef STATUS_T1100905814_H
#define STATUS_T1100905814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour/Status
struct  Status_t1100905814 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour/Status::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Status_t1100905814, ___value___1)); }
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
#endif // STATUS_T1100905814_H
#ifndef CAMERADIRECTION_T637748435_H
#define CAMERADIRECTION_T637748435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraDirection
struct  CameraDirection_t637748435 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraDirection_t637748435, ___value___1)); }
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
#endif // CAMERADIRECTION_T637748435_H
#ifndef INITERROR_T3420749710_H
#define INITERROR_T3420749710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaUnity/InitError
struct  InitError_t3420749710 
{
public:
	// System.Int32 Vuforia.VuforiaUnity/InitError::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InitError_t3420749710, ___value___1)); }
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
#endif // INITERROR_T3420749710_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef RECTOFFSET_T1369453676_H
#define RECTOFFSET_T1369453676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectOffset
struct  RectOffset_t1369453676  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_t1369453676, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_t1369453676, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t1369453676_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t1369453676_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
#endif // RECTOFFSET_T1369453676_H
#ifndef LOCATIONSERVICESTATUS_T1778527219_H
#define LOCATIONSERVICESTATUS_T1778527219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LocationServiceStatus
struct  LocationServiceStatus_t1778527219 
{
public:
	// System.Int32 UnityEngine.LocationServiceStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LocationServiceStatus_t1778527219, ___value___1)); }
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
#endif // LOCATIONSERVICESTATUS_T1778527219_H
#ifndef KEYCODE_T2599294277_H
#define KEYCODE_T2599294277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t2599294277 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t2599294277, ___value___1)); }
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
#endif // KEYCODE_T2599294277_H
#ifndef GUISTYLESTATE_T1397964415_H
#define GUISTYLESTATE_T1397964415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyleState
struct  GUIStyleState_t1397964415  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t3956901511 * ___m_SourceStyle_1;
	// UnityEngine.Texture2D UnityEngine.GUIStyleState::m_Background
	Texture2D_t3840446185 * ___m_Background_2;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyleState_t1397964415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(GUIStyleState_t1397964415, ___m_SourceStyle_1)); }
	inline GUIStyle_t3956901511 * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline GUIStyle_t3956901511 ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(GUIStyle_t3956901511 * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}

	inline static int32_t get_offset_of_m_Background_2() { return static_cast<int32_t>(offsetof(GUIStyleState_t1397964415, ___m_Background_2)); }
	inline Texture2D_t3840446185 * get_m_Background_2() const { return ___m_Background_2; }
	inline Texture2D_t3840446185 ** get_address_of_m_Background_2() { return &___m_Background_2; }
	inline void set_m_Background_2(Texture2D_t3840446185 * value)
	{
		___m_Background_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Background_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t3956901511_marshaled_pinvoke* ___m_SourceStyle_1;
	Texture2D_t3840446185 * ___m_Background_2;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t3956901511_marshaled_com* ___m_SourceStyle_1;
	Texture2D_t3840446185 * ___m_Background_2;
};
#endif // GUISTYLESTATE_T1397964415_H
#ifndef DATASET_T3286034874_H
#define DATASET_T3286034874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DataSet
struct  DataSet_t3286034874  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.DataSet::mDataSetPtr
	intptr_t ___mDataSetPtr_0;
	// System.String Vuforia.DataSet::mPath
	String_t* ___mPath_1;
	// Vuforia.VuforiaUnity/StorageType Vuforia.DataSet::mStorageType
	int32_t ___mStorageType_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable> Vuforia.DataSet::mTrackablesDict
	Dictionary_2_t1340713322 * ___mTrackablesDict_3;

public:
	inline static int32_t get_offset_of_mDataSetPtr_0() { return static_cast<int32_t>(offsetof(DataSet_t3286034874, ___mDataSetPtr_0)); }
	inline intptr_t get_mDataSetPtr_0() const { return ___mDataSetPtr_0; }
	inline intptr_t* get_address_of_mDataSetPtr_0() { return &___mDataSetPtr_0; }
	inline void set_mDataSetPtr_0(intptr_t value)
	{
		___mDataSetPtr_0 = value;
	}

	inline static int32_t get_offset_of_mPath_1() { return static_cast<int32_t>(offsetof(DataSet_t3286034874, ___mPath_1)); }
	inline String_t* get_mPath_1() const { return ___mPath_1; }
	inline String_t** get_address_of_mPath_1() { return &___mPath_1; }
	inline void set_mPath_1(String_t* value)
	{
		___mPath_1 = value;
		Il2CppCodeGenWriteBarrier((&___mPath_1), value);
	}

	inline static int32_t get_offset_of_mStorageType_2() { return static_cast<int32_t>(offsetof(DataSet_t3286034874, ___mStorageType_2)); }
	inline int32_t get_mStorageType_2() const { return ___mStorageType_2; }
	inline int32_t* get_address_of_mStorageType_2() { return &___mStorageType_2; }
	inline void set_mStorageType_2(int32_t value)
	{
		___mStorageType_2 = value;
	}

	inline static int32_t get_offset_of_mTrackablesDict_3() { return static_cast<int32_t>(offsetof(DataSet_t3286034874, ___mTrackablesDict_3)); }
	inline Dictionary_2_t1340713322 * get_mTrackablesDict_3() const { return ___mTrackablesDict_3; }
	inline Dictionary_2_t1340713322 ** get_address_of_mTrackablesDict_3() { return &___mTrackablesDict_3; }
	inline void set_mTrackablesDict_3(Dictionary_2_t1340713322 * value)
	{
		___mTrackablesDict_3 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackablesDict_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASET_T3286034874_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef AUDIOCLIP_T3680889665_H
#define AUDIOCLIP_T3680889665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t3680889665  : public Object_t631007953
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t1677636661 * ___m_PCMReaderCallback_2;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t1059417452 * ___m_PCMSetPositionCallback_3;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_2() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMReaderCallback_2)); }
	inline PCMReaderCallback_t1677636661 * get_m_PCMReaderCallback_2() const { return ___m_PCMReaderCallback_2; }
	inline PCMReaderCallback_t1677636661 ** get_address_of_m_PCMReaderCallback_2() { return &___m_PCMReaderCallback_2; }
	inline void set_m_PCMReaderCallback_2(PCMReaderCallback_t1677636661 * value)
	{
		___m_PCMReaderCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_2), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_3() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMSetPositionCallback_3)); }
	inline PCMSetPositionCallback_t1059417452 * get_m_PCMSetPositionCallback_3() const { return ___m_PCMSetPositionCallback_3; }
	inline PCMSetPositionCallback_t1059417452 ** get_address_of_m_PCMSetPositionCallback_3() { return &___m_PCMSetPositionCallback_3; }
	inline void set_m_PCMSetPositionCallback_3(PCMSetPositionCallback_t1059417452 * value)
	{
		___m_PCMSetPositionCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T3680889665_H
#ifndef VIDEOCLIP_T1281919028_H
#define VIDEOCLIP_T1281919028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoClip
struct  VideoClip_t1281919028  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOCLIP_T1281919028_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef GENERICVUFORIACONFIGURATION_T3697830469_H
#define GENERICVUFORIACONFIGURATION_T3697830469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration
struct  GenericVuforiaConfiguration_t3697830469  : public RuntimeObject
{
public:
	// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::vuforiaLicenseKey
	String_t* ___vuforiaLicenseKey_1;
	// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::ufoLicenseKey
	String_t* ___ufoLicenseKey_2;
	// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::delayedInitialization
	bool ___delayedInitialization_3;
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::cameraDeviceModeSetting
	int32_t ___cameraDeviceModeSetting_4;
	// System.Int32 Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::maxSimultaneousImageTargets
	int32_t ___maxSimultaneousImageTargets_5;
	// System.Int32 Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::maxSimultaneousObjectTargets
	int32_t ___maxSimultaneousObjectTargets_6;
	// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::useDelayedLoadingObjectTargets
	bool ___useDelayedLoadingObjectTargets_7;
	// Vuforia.CameraDevice/CameraDirection Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::cameraDirection
	int32_t ___cameraDirection_8;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::mirrorVideoBackground
	int32_t ___mirrorVideoBackground_9;

public:
	inline static int32_t get_offset_of_vuforiaLicenseKey_1() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___vuforiaLicenseKey_1)); }
	inline String_t* get_vuforiaLicenseKey_1() const { return ___vuforiaLicenseKey_1; }
	inline String_t** get_address_of_vuforiaLicenseKey_1() { return &___vuforiaLicenseKey_1; }
	inline void set_vuforiaLicenseKey_1(String_t* value)
	{
		___vuforiaLicenseKey_1 = value;
		Il2CppCodeGenWriteBarrier((&___vuforiaLicenseKey_1), value);
	}

	inline static int32_t get_offset_of_ufoLicenseKey_2() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___ufoLicenseKey_2)); }
	inline String_t* get_ufoLicenseKey_2() const { return ___ufoLicenseKey_2; }
	inline String_t** get_address_of_ufoLicenseKey_2() { return &___ufoLicenseKey_2; }
	inline void set_ufoLicenseKey_2(String_t* value)
	{
		___ufoLicenseKey_2 = value;
		Il2CppCodeGenWriteBarrier((&___ufoLicenseKey_2), value);
	}

	inline static int32_t get_offset_of_delayedInitialization_3() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___delayedInitialization_3)); }
	inline bool get_delayedInitialization_3() const { return ___delayedInitialization_3; }
	inline bool* get_address_of_delayedInitialization_3() { return &___delayedInitialization_3; }
	inline void set_delayedInitialization_3(bool value)
	{
		___delayedInitialization_3 = value;
	}

	inline static int32_t get_offset_of_cameraDeviceModeSetting_4() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___cameraDeviceModeSetting_4)); }
	inline int32_t get_cameraDeviceModeSetting_4() const { return ___cameraDeviceModeSetting_4; }
	inline int32_t* get_address_of_cameraDeviceModeSetting_4() { return &___cameraDeviceModeSetting_4; }
	inline void set_cameraDeviceModeSetting_4(int32_t value)
	{
		___cameraDeviceModeSetting_4 = value;
	}

	inline static int32_t get_offset_of_maxSimultaneousImageTargets_5() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___maxSimultaneousImageTargets_5)); }
	inline int32_t get_maxSimultaneousImageTargets_5() const { return ___maxSimultaneousImageTargets_5; }
	inline int32_t* get_address_of_maxSimultaneousImageTargets_5() { return &___maxSimultaneousImageTargets_5; }
	inline void set_maxSimultaneousImageTargets_5(int32_t value)
	{
		___maxSimultaneousImageTargets_5 = value;
	}

	inline static int32_t get_offset_of_maxSimultaneousObjectTargets_6() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___maxSimultaneousObjectTargets_6)); }
	inline int32_t get_maxSimultaneousObjectTargets_6() const { return ___maxSimultaneousObjectTargets_6; }
	inline int32_t* get_address_of_maxSimultaneousObjectTargets_6() { return &___maxSimultaneousObjectTargets_6; }
	inline void set_maxSimultaneousObjectTargets_6(int32_t value)
	{
		___maxSimultaneousObjectTargets_6 = value;
	}

	inline static int32_t get_offset_of_useDelayedLoadingObjectTargets_7() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___useDelayedLoadingObjectTargets_7)); }
	inline bool get_useDelayedLoadingObjectTargets_7() const { return ___useDelayedLoadingObjectTargets_7; }
	inline bool* get_address_of_useDelayedLoadingObjectTargets_7() { return &___useDelayedLoadingObjectTargets_7; }
	inline void set_useDelayedLoadingObjectTargets_7(bool value)
	{
		___useDelayedLoadingObjectTargets_7 = value;
	}

	inline static int32_t get_offset_of_cameraDirection_8() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___cameraDirection_8)); }
	inline int32_t get_cameraDirection_8() const { return ___cameraDirection_8; }
	inline int32_t* get_address_of_cameraDirection_8() { return &___cameraDirection_8; }
	inline void set_cameraDirection_8(int32_t value)
	{
		___cameraDirection_8 = value;
	}

	inline static int32_t get_offset_of_mirrorVideoBackground_9() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___mirrorVideoBackground_9)); }
	inline int32_t get_mirrorVideoBackground_9() const { return ___mirrorVideoBackground_9; }
	inline int32_t* get_address_of_mirrorVideoBackground_9() { return &___mirrorVideoBackground_9; }
	inline void set_mirrorVideoBackground_9(int32_t value)
	{
		___mirrorVideoBackground_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICVUFORIACONFIGURATION_T3697830469_H
#ifndef NAVIGATION_T3049316579_H
#define NAVIGATION_T3049316579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t3049316579 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3250028441 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnUp_1)); }
	inline Selectable_t3250028441 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3250028441 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnDown_2)); }
	inline Selectable_t3250028441 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3250028441 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnLeft_3)); }
	inline Selectable_t3250028441 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3250028441 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnRight_4)); }
	inline Selectable_t3250028441 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3250028441 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T3049316579_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef VUFORIAARCONTROLLER_T1876945237_H
#define VUFORIAARCONTROLLER_T1876945237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaARController
struct  VuforiaARController_t1876945237  : public ARController_t116632334
{
public:
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaARController::CameraDeviceModeSetting
	int32_t ___CameraDeviceModeSetting_1;
	// System.Int32 Vuforia.VuforiaARController::MaxSimultaneousImageTargets
	int32_t ___MaxSimultaneousImageTargets_2;
	// System.Int32 Vuforia.VuforiaARController::MaxSimultaneousObjectTargets
	int32_t ___MaxSimultaneousObjectTargets_3;
	// System.Boolean Vuforia.VuforiaARController::UseDelayedLoadingObjectTargets
	bool ___UseDelayedLoadingObjectTargets_4;
	// Vuforia.CameraDevice/CameraDirection Vuforia.VuforiaARController::CameraDirection
	int32_t ___CameraDirection_5;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaARController::MirrorVideoBackground
	int32_t ___MirrorVideoBackground_6;
	// Vuforia.VuforiaARController/WorldCenterMode Vuforia.VuforiaARController::mWorldCenterMode
	int32_t ___mWorldCenterMode_7;
	// Vuforia.TrackableBehaviour Vuforia.VuforiaARController::mWorldCenter
	TrackableBehaviour_t1113559212 * ___mWorldCenter_8;
	// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler> Vuforia.VuforiaARController::mVideoBgEventHandlers
	List_1_t905170877 * ___mVideoBgEventHandlers_9;
	// System.Action Vuforia.VuforiaARController::mOnVuforiaInitialized
	Action_t1264377477 * ___mOnVuforiaInitialized_10;
	// System.Action Vuforia.VuforiaARController::mOnVuforiaStarted
	Action_t1264377477 * ___mOnVuforiaStarted_11;
	// System.Action Vuforia.VuforiaARController::mOnVuforiaDeinitialized
	Action_t1264377477 * ___mOnVuforiaDeinitialized_12;
	// System.Action Vuforia.VuforiaARController::mOnTrackablesUpdated
	Action_t1264377477 * ___mOnTrackablesUpdated_13;
	// System.Action Vuforia.VuforiaARController::mRenderOnUpdate
	Action_t1264377477 * ___mRenderOnUpdate_14;
	// System.Action`1<System.Boolean> Vuforia.VuforiaARController::mOnPause
	Action_1_t269755560 * ___mOnPause_15;
	// System.Boolean Vuforia.VuforiaARController::mPaused
	bool ___mPaused_16;
	// System.Action Vuforia.VuforiaARController::mOnBackgroundTextureChanged
	Action_t1264377477 * ___mOnBackgroundTextureChanged_17;
	// System.Boolean Vuforia.VuforiaARController::mStartHasBeenInvoked
	bool ___mStartHasBeenInvoked_18;
	// System.Boolean Vuforia.VuforiaARController::mHasStarted
	bool ___mHasStarted_19;
	// Vuforia.ICameraConfiguration Vuforia.VuforiaARController::mCameraConfiguration
	RuntimeObject* ___mCameraConfiguration_20;
	// Vuforia.DigitalEyewearARController Vuforia.VuforiaARController::mEyewearBehaviour
	DigitalEyewearARController_t1054226036 * ___mEyewearBehaviour_21;
	// Vuforia.VideoBackgroundManager Vuforia.VuforiaARController::mVideoBackgroundMgr
	VideoBackgroundManager_t2198727358 * ___mVideoBackgroundMgr_22;
	// System.Boolean Vuforia.VuforiaARController::mCheckStopCamera
	bool ___mCheckStopCamera_23;
	// UnityEngine.Material Vuforia.VuforiaARController::mClearMaterial
	Material_t340375123 * ___mClearMaterial_24;
	// System.Boolean Vuforia.VuforiaARController::mMetalRendering
	bool ___mMetalRendering_25;
	// System.Boolean Vuforia.VuforiaARController::mHasStartedOnce
	bool ___mHasStartedOnce_26;
	// System.Boolean Vuforia.VuforiaARController::mWasEnabledBeforePause
	bool ___mWasEnabledBeforePause_27;
	// System.Boolean Vuforia.VuforiaARController::mObjectTrackerWasActiveBeforePause
	bool ___mObjectTrackerWasActiveBeforePause_28;
	// System.Boolean Vuforia.VuforiaARController::mObjectTrackerWasActiveBeforeDisabling
	bool ___mObjectTrackerWasActiveBeforeDisabling_29;
	// System.Int32 Vuforia.VuforiaARController::mLastUpdatedFrame
	int32_t ___mLastUpdatedFrame_30;
	// System.Collections.Generic.List`1<System.Type> Vuforia.VuforiaARController::mTrackersRequestedToDeinit
	List_1_t3956019502 * ___mTrackersRequestedToDeinit_31;

public:
	inline static int32_t get_offset_of_CameraDeviceModeSetting_1() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___CameraDeviceModeSetting_1)); }
	inline int32_t get_CameraDeviceModeSetting_1() const { return ___CameraDeviceModeSetting_1; }
	inline int32_t* get_address_of_CameraDeviceModeSetting_1() { return &___CameraDeviceModeSetting_1; }
	inline void set_CameraDeviceModeSetting_1(int32_t value)
	{
		___CameraDeviceModeSetting_1 = value;
	}

	inline static int32_t get_offset_of_MaxSimultaneousImageTargets_2() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___MaxSimultaneousImageTargets_2)); }
	inline int32_t get_MaxSimultaneousImageTargets_2() const { return ___MaxSimultaneousImageTargets_2; }
	inline int32_t* get_address_of_MaxSimultaneousImageTargets_2() { return &___MaxSimultaneousImageTargets_2; }
	inline void set_MaxSimultaneousImageTargets_2(int32_t value)
	{
		___MaxSimultaneousImageTargets_2 = value;
	}

	inline static int32_t get_offset_of_MaxSimultaneousObjectTargets_3() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___MaxSimultaneousObjectTargets_3)); }
	inline int32_t get_MaxSimultaneousObjectTargets_3() const { return ___MaxSimultaneousObjectTargets_3; }
	inline int32_t* get_address_of_MaxSimultaneousObjectTargets_3() { return &___MaxSimultaneousObjectTargets_3; }
	inline void set_MaxSimultaneousObjectTargets_3(int32_t value)
	{
		___MaxSimultaneousObjectTargets_3 = value;
	}

	inline static int32_t get_offset_of_UseDelayedLoadingObjectTargets_4() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___UseDelayedLoadingObjectTargets_4)); }
	inline bool get_UseDelayedLoadingObjectTargets_4() const { return ___UseDelayedLoadingObjectTargets_4; }
	inline bool* get_address_of_UseDelayedLoadingObjectTargets_4() { return &___UseDelayedLoadingObjectTargets_4; }
	inline void set_UseDelayedLoadingObjectTargets_4(bool value)
	{
		___UseDelayedLoadingObjectTargets_4 = value;
	}

	inline static int32_t get_offset_of_CameraDirection_5() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___CameraDirection_5)); }
	inline int32_t get_CameraDirection_5() const { return ___CameraDirection_5; }
	inline int32_t* get_address_of_CameraDirection_5() { return &___CameraDirection_5; }
	inline void set_CameraDirection_5(int32_t value)
	{
		___CameraDirection_5 = value;
	}

	inline static int32_t get_offset_of_MirrorVideoBackground_6() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___MirrorVideoBackground_6)); }
	inline int32_t get_MirrorVideoBackground_6() const { return ___MirrorVideoBackground_6; }
	inline int32_t* get_address_of_MirrorVideoBackground_6() { return &___MirrorVideoBackground_6; }
	inline void set_MirrorVideoBackground_6(int32_t value)
	{
		___MirrorVideoBackground_6 = value;
	}

	inline static int32_t get_offset_of_mWorldCenterMode_7() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mWorldCenterMode_7)); }
	inline int32_t get_mWorldCenterMode_7() const { return ___mWorldCenterMode_7; }
	inline int32_t* get_address_of_mWorldCenterMode_7() { return &___mWorldCenterMode_7; }
	inline void set_mWorldCenterMode_7(int32_t value)
	{
		___mWorldCenterMode_7 = value;
	}

	inline static int32_t get_offset_of_mWorldCenter_8() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mWorldCenter_8)); }
	inline TrackableBehaviour_t1113559212 * get_mWorldCenter_8() const { return ___mWorldCenter_8; }
	inline TrackableBehaviour_t1113559212 ** get_address_of_mWorldCenter_8() { return &___mWorldCenter_8; }
	inline void set_mWorldCenter_8(TrackableBehaviour_t1113559212 * value)
	{
		___mWorldCenter_8 = value;
		Il2CppCodeGenWriteBarrier((&___mWorldCenter_8), value);
	}

	inline static int32_t get_offset_of_mVideoBgEventHandlers_9() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mVideoBgEventHandlers_9)); }
	inline List_1_t905170877 * get_mVideoBgEventHandlers_9() const { return ___mVideoBgEventHandlers_9; }
	inline List_1_t905170877 ** get_address_of_mVideoBgEventHandlers_9() { return &___mVideoBgEventHandlers_9; }
	inline void set_mVideoBgEventHandlers_9(List_1_t905170877 * value)
	{
		___mVideoBgEventHandlers_9 = value;
		Il2CppCodeGenWriteBarrier((&___mVideoBgEventHandlers_9), value);
	}

	inline static int32_t get_offset_of_mOnVuforiaInitialized_10() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnVuforiaInitialized_10)); }
	inline Action_t1264377477 * get_mOnVuforiaInitialized_10() const { return ___mOnVuforiaInitialized_10; }
	inline Action_t1264377477 ** get_address_of_mOnVuforiaInitialized_10() { return &___mOnVuforiaInitialized_10; }
	inline void set_mOnVuforiaInitialized_10(Action_t1264377477 * value)
	{
		___mOnVuforiaInitialized_10 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaInitialized_10), value);
	}

	inline static int32_t get_offset_of_mOnVuforiaStarted_11() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnVuforiaStarted_11)); }
	inline Action_t1264377477 * get_mOnVuforiaStarted_11() const { return ___mOnVuforiaStarted_11; }
	inline Action_t1264377477 ** get_address_of_mOnVuforiaStarted_11() { return &___mOnVuforiaStarted_11; }
	inline void set_mOnVuforiaStarted_11(Action_t1264377477 * value)
	{
		___mOnVuforiaStarted_11 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaStarted_11), value);
	}

	inline static int32_t get_offset_of_mOnVuforiaDeinitialized_12() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnVuforiaDeinitialized_12)); }
	inline Action_t1264377477 * get_mOnVuforiaDeinitialized_12() const { return ___mOnVuforiaDeinitialized_12; }
	inline Action_t1264377477 ** get_address_of_mOnVuforiaDeinitialized_12() { return &___mOnVuforiaDeinitialized_12; }
	inline void set_mOnVuforiaDeinitialized_12(Action_t1264377477 * value)
	{
		___mOnVuforiaDeinitialized_12 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaDeinitialized_12), value);
	}

	inline static int32_t get_offset_of_mOnTrackablesUpdated_13() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnTrackablesUpdated_13)); }
	inline Action_t1264377477 * get_mOnTrackablesUpdated_13() const { return ___mOnTrackablesUpdated_13; }
	inline Action_t1264377477 ** get_address_of_mOnTrackablesUpdated_13() { return &___mOnTrackablesUpdated_13; }
	inline void set_mOnTrackablesUpdated_13(Action_t1264377477 * value)
	{
		___mOnTrackablesUpdated_13 = value;
		Il2CppCodeGenWriteBarrier((&___mOnTrackablesUpdated_13), value);
	}

	inline static int32_t get_offset_of_mRenderOnUpdate_14() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mRenderOnUpdate_14)); }
	inline Action_t1264377477 * get_mRenderOnUpdate_14() const { return ___mRenderOnUpdate_14; }
	inline Action_t1264377477 ** get_address_of_mRenderOnUpdate_14() { return &___mRenderOnUpdate_14; }
	inline void set_mRenderOnUpdate_14(Action_t1264377477 * value)
	{
		___mRenderOnUpdate_14 = value;
		Il2CppCodeGenWriteBarrier((&___mRenderOnUpdate_14), value);
	}

	inline static int32_t get_offset_of_mOnPause_15() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnPause_15)); }
	inline Action_1_t269755560 * get_mOnPause_15() const { return ___mOnPause_15; }
	inline Action_1_t269755560 ** get_address_of_mOnPause_15() { return &___mOnPause_15; }
	inline void set_mOnPause_15(Action_1_t269755560 * value)
	{
		___mOnPause_15 = value;
		Il2CppCodeGenWriteBarrier((&___mOnPause_15), value);
	}

	inline static int32_t get_offset_of_mPaused_16() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mPaused_16)); }
	inline bool get_mPaused_16() const { return ___mPaused_16; }
	inline bool* get_address_of_mPaused_16() { return &___mPaused_16; }
	inline void set_mPaused_16(bool value)
	{
		___mPaused_16 = value;
	}

	inline static int32_t get_offset_of_mOnBackgroundTextureChanged_17() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnBackgroundTextureChanged_17)); }
	inline Action_t1264377477 * get_mOnBackgroundTextureChanged_17() const { return ___mOnBackgroundTextureChanged_17; }
	inline Action_t1264377477 ** get_address_of_mOnBackgroundTextureChanged_17() { return &___mOnBackgroundTextureChanged_17; }
	inline void set_mOnBackgroundTextureChanged_17(Action_t1264377477 * value)
	{
		___mOnBackgroundTextureChanged_17 = value;
		Il2CppCodeGenWriteBarrier((&___mOnBackgroundTextureChanged_17), value);
	}

	inline static int32_t get_offset_of_mStartHasBeenInvoked_18() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mStartHasBeenInvoked_18)); }
	inline bool get_mStartHasBeenInvoked_18() const { return ___mStartHasBeenInvoked_18; }
	inline bool* get_address_of_mStartHasBeenInvoked_18() { return &___mStartHasBeenInvoked_18; }
	inline void set_mStartHasBeenInvoked_18(bool value)
	{
		___mStartHasBeenInvoked_18 = value;
	}

	inline static int32_t get_offset_of_mHasStarted_19() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mHasStarted_19)); }
	inline bool get_mHasStarted_19() const { return ___mHasStarted_19; }
	inline bool* get_address_of_mHasStarted_19() { return &___mHasStarted_19; }
	inline void set_mHasStarted_19(bool value)
	{
		___mHasStarted_19 = value;
	}

	inline static int32_t get_offset_of_mCameraConfiguration_20() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mCameraConfiguration_20)); }
	inline RuntimeObject* get_mCameraConfiguration_20() const { return ___mCameraConfiguration_20; }
	inline RuntimeObject** get_address_of_mCameraConfiguration_20() { return &___mCameraConfiguration_20; }
	inline void set_mCameraConfiguration_20(RuntimeObject* value)
	{
		___mCameraConfiguration_20 = value;
		Il2CppCodeGenWriteBarrier((&___mCameraConfiguration_20), value);
	}

	inline static int32_t get_offset_of_mEyewearBehaviour_21() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mEyewearBehaviour_21)); }
	inline DigitalEyewearARController_t1054226036 * get_mEyewearBehaviour_21() const { return ___mEyewearBehaviour_21; }
	inline DigitalEyewearARController_t1054226036 ** get_address_of_mEyewearBehaviour_21() { return &___mEyewearBehaviour_21; }
	inline void set_mEyewearBehaviour_21(DigitalEyewearARController_t1054226036 * value)
	{
		___mEyewearBehaviour_21 = value;
		Il2CppCodeGenWriteBarrier((&___mEyewearBehaviour_21), value);
	}

	inline static int32_t get_offset_of_mVideoBackgroundMgr_22() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mVideoBackgroundMgr_22)); }
	inline VideoBackgroundManager_t2198727358 * get_mVideoBackgroundMgr_22() const { return ___mVideoBackgroundMgr_22; }
	inline VideoBackgroundManager_t2198727358 ** get_address_of_mVideoBackgroundMgr_22() { return &___mVideoBackgroundMgr_22; }
	inline void set_mVideoBackgroundMgr_22(VideoBackgroundManager_t2198727358 * value)
	{
		___mVideoBackgroundMgr_22 = value;
		Il2CppCodeGenWriteBarrier((&___mVideoBackgroundMgr_22), value);
	}

	inline static int32_t get_offset_of_mCheckStopCamera_23() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mCheckStopCamera_23)); }
	inline bool get_mCheckStopCamera_23() const { return ___mCheckStopCamera_23; }
	inline bool* get_address_of_mCheckStopCamera_23() { return &___mCheckStopCamera_23; }
	inline void set_mCheckStopCamera_23(bool value)
	{
		___mCheckStopCamera_23 = value;
	}

	inline static int32_t get_offset_of_mClearMaterial_24() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mClearMaterial_24)); }
	inline Material_t340375123 * get_mClearMaterial_24() const { return ___mClearMaterial_24; }
	inline Material_t340375123 ** get_address_of_mClearMaterial_24() { return &___mClearMaterial_24; }
	inline void set_mClearMaterial_24(Material_t340375123 * value)
	{
		___mClearMaterial_24 = value;
		Il2CppCodeGenWriteBarrier((&___mClearMaterial_24), value);
	}

	inline static int32_t get_offset_of_mMetalRendering_25() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mMetalRendering_25)); }
	inline bool get_mMetalRendering_25() const { return ___mMetalRendering_25; }
	inline bool* get_address_of_mMetalRendering_25() { return &___mMetalRendering_25; }
	inline void set_mMetalRendering_25(bool value)
	{
		___mMetalRendering_25 = value;
	}

	inline static int32_t get_offset_of_mHasStartedOnce_26() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mHasStartedOnce_26)); }
	inline bool get_mHasStartedOnce_26() const { return ___mHasStartedOnce_26; }
	inline bool* get_address_of_mHasStartedOnce_26() { return &___mHasStartedOnce_26; }
	inline void set_mHasStartedOnce_26(bool value)
	{
		___mHasStartedOnce_26 = value;
	}

	inline static int32_t get_offset_of_mWasEnabledBeforePause_27() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mWasEnabledBeforePause_27)); }
	inline bool get_mWasEnabledBeforePause_27() const { return ___mWasEnabledBeforePause_27; }
	inline bool* get_address_of_mWasEnabledBeforePause_27() { return &___mWasEnabledBeforePause_27; }
	inline void set_mWasEnabledBeforePause_27(bool value)
	{
		___mWasEnabledBeforePause_27 = value;
	}

	inline static int32_t get_offset_of_mObjectTrackerWasActiveBeforePause_28() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mObjectTrackerWasActiveBeforePause_28)); }
	inline bool get_mObjectTrackerWasActiveBeforePause_28() const { return ___mObjectTrackerWasActiveBeforePause_28; }
	inline bool* get_address_of_mObjectTrackerWasActiveBeforePause_28() { return &___mObjectTrackerWasActiveBeforePause_28; }
	inline void set_mObjectTrackerWasActiveBeforePause_28(bool value)
	{
		___mObjectTrackerWasActiveBeforePause_28 = value;
	}

	inline static int32_t get_offset_of_mObjectTrackerWasActiveBeforeDisabling_29() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mObjectTrackerWasActiveBeforeDisabling_29)); }
	inline bool get_mObjectTrackerWasActiveBeforeDisabling_29() const { return ___mObjectTrackerWasActiveBeforeDisabling_29; }
	inline bool* get_address_of_mObjectTrackerWasActiveBeforeDisabling_29() { return &___mObjectTrackerWasActiveBeforeDisabling_29; }
	inline void set_mObjectTrackerWasActiveBeforeDisabling_29(bool value)
	{
		___mObjectTrackerWasActiveBeforeDisabling_29 = value;
	}

	inline static int32_t get_offset_of_mLastUpdatedFrame_30() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mLastUpdatedFrame_30)); }
	inline int32_t get_mLastUpdatedFrame_30() const { return ___mLastUpdatedFrame_30; }
	inline int32_t* get_address_of_mLastUpdatedFrame_30() { return &___mLastUpdatedFrame_30; }
	inline void set_mLastUpdatedFrame_30(int32_t value)
	{
		___mLastUpdatedFrame_30 = value;
	}

	inline static int32_t get_offset_of_mTrackersRequestedToDeinit_31() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mTrackersRequestedToDeinit_31)); }
	inline List_1_t3956019502 * get_mTrackersRequestedToDeinit_31() const { return ___mTrackersRequestedToDeinit_31; }
	inline List_1_t3956019502 ** get_address_of_mTrackersRequestedToDeinit_31() { return &___mTrackersRequestedToDeinit_31; }
	inline void set_mTrackersRequestedToDeinit_31(List_1_t3956019502 * value)
	{
		___mTrackersRequestedToDeinit_31 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackersRequestedToDeinit_31), value);
	}
};

struct VuforiaARController_t1876945237_StaticFields
{
public:
	// Vuforia.VuforiaARController Vuforia.VuforiaARController::mInstance
	VuforiaARController_t1876945237 * ___mInstance_32;
	// System.Object Vuforia.VuforiaARController::mPadlock
	RuntimeObject * ___mPadlock_33;

public:
	inline static int32_t get_offset_of_mInstance_32() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237_StaticFields, ___mInstance_32)); }
	inline VuforiaARController_t1876945237 * get_mInstance_32() const { return ___mInstance_32; }
	inline VuforiaARController_t1876945237 ** get_address_of_mInstance_32() { return &___mInstance_32; }
	inline void set_mInstance_32(VuforiaARController_t1876945237 * value)
	{
		___mInstance_32 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_32), value);
	}

	inline static int32_t get_offset_of_mPadlock_33() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237_StaticFields, ___mPadlock_33)); }
	inline RuntimeObject * get_mPadlock_33() const { return ___mPadlock_33; }
	inline RuntimeObject ** get_address_of_mPadlock_33() { return &___mPadlock_33; }
	inline void set_mPadlock_33(RuntimeObject * value)
	{
		___mPadlock_33 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_33), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIAARCONTROLLER_T1876945237_H
#ifndef CAMERADEVICE_T960297568_H
#define CAMERADEVICE_T960297568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice
struct  CameraDevice_t960297568  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image> Vuforia.CameraDevice::mCameraImages
	Dictionary_2_t3630620928 * ___mCameraImages_1;
	// System.Collections.Generic.List`1<Vuforia.Image/PIXEL_FORMAT> Vuforia.CameraDevice::mForcedCameraFormats
	List_1_t386988881 * ___mForcedCameraFormats_2;
	// System.Boolean Vuforia.CameraDevice::mCameraReady
	bool ___mCameraReady_4;
	// System.Boolean Vuforia.CameraDevice::mIsDirty
	bool ___mIsDirty_5;
	// Vuforia.CameraDevice/CameraDirection Vuforia.CameraDevice::mActualCameraDirection
	int32_t ___mActualCameraDirection_6;
	// Vuforia.CameraDevice/CameraDirection Vuforia.CameraDevice::mSelectedCameraDirection
	int32_t ___mSelectedCameraDirection_7;
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.CameraDevice::mCameraDeviceMode
	int32_t ___mCameraDeviceMode_8;
	// Vuforia.CameraDevice/VideoModeData Vuforia.CameraDevice::mVideoModeData
	VideoModeData_t2066817255  ___mVideoModeData_9;
	// System.Boolean Vuforia.CameraDevice::mVideoModeDataNeedsUpdate
	bool ___mVideoModeDataNeedsUpdate_10;
	// System.Boolean Vuforia.CameraDevice::mHasCameraDeviceModeBeenSet
	bool ___mHasCameraDeviceModeBeenSet_11;
	// System.Boolean Vuforia.CameraDevice::mCameraActive
	bool ___mCameraActive_12;
	// System.Boolean Vuforia.CameraDevice::mIsCameraMocked
	bool ___mIsCameraMocked_13;

public:
	inline static int32_t get_offset_of_mCameraImages_1() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mCameraImages_1)); }
	inline Dictionary_2_t3630620928 * get_mCameraImages_1() const { return ___mCameraImages_1; }
	inline Dictionary_2_t3630620928 ** get_address_of_mCameraImages_1() { return &___mCameraImages_1; }
	inline void set_mCameraImages_1(Dictionary_2_t3630620928 * value)
	{
		___mCameraImages_1 = value;
		Il2CppCodeGenWriteBarrier((&___mCameraImages_1), value);
	}

	inline static int32_t get_offset_of_mForcedCameraFormats_2() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mForcedCameraFormats_2)); }
	inline List_1_t386988881 * get_mForcedCameraFormats_2() const { return ___mForcedCameraFormats_2; }
	inline List_1_t386988881 ** get_address_of_mForcedCameraFormats_2() { return &___mForcedCameraFormats_2; }
	inline void set_mForcedCameraFormats_2(List_1_t386988881 * value)
	{
		___mForcedCameraFormats_2 = value;
		Il2CppCodeGenWriteBarrier((&___mForcedCameraFormats_2), value);
	}

	inline static int32_t get_offset_of_mCameraReady_4() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mCameraReady_4)); }
	inline bool get_mCameraReady_4() const { return ___mCameraReady_4; }
	inline bool* get_address_of_mCameraReady_4() { return &___mCameraReady_4; }
	inline void set_mCameraReady_4(bool value)
	{
		___mCameraReady_4 = value;
	}

	inline static int32_t get_offset_of_mIsDirty_5() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mIsDirty_5)); }
	inline bool get_mIsDirty_5() const { return ___mIsDirty_5; }
	inline bool* get_address_of_mIsDirty_5() { return &___mIsDirty_5; }
	inline void set_mIsDirty_5(bool value)
	{
		___mIsDirty_5 = value;
	}

	inline static int32_t get_offset_of_mActualCameraDirection_6() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mActualCameraDirection_6)); }
	inline int32_t get_mActualCameraDirection_6() const { return ___mActualCameraDirection_6; }
	inline int32_t* get_address_of_mActualCameraDirection_6() { return &___mActualCameraDirection_6; }
	inline void set_mActualCameraDirection_6(int32_t value)
	{
		___mActualCameraDirection_6 = value;
	}

	inline static int32_t get_offset_of_mSelectedCameraDirection_7() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mSelectedCameraDirection_7)); }
	inline int32_t get_mSelectedCameraDirection_7() const { return ___mSelectedCameraDirection_7; }
	inline int32_t* get_address_of_mSelectedCameraDirection_7() { return &___mSelectedCameraDirection_7; }
	inline void set_mSelectedCameraDirection_7(int32_t value)
	{
		___mSelectedCameraDirection_7 = value;
	}

	inline static int32_t get_offset_of_mCameraDeviceMode_8() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mCameraDeviceMode_8)); }
	inline int32_t get_mCameraDeviceMode_8() const { return ___mCameraDeviceMode_8; }
	inline int32_t* get_address_of_mCameraDeviceMode_8() { return &___mCameraDeviceMode_8; }
	inline void set_mCameraDeviceMode_8(int32_t value)
	{
		___mCameraDeviceMode_8 = value;
	}

	inline static int32_t get_offset_of_mVideoModeData_9() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mVideoModeData_9)); }
	inline VideoModeData_t2066817255  get_mVideoModeData_9() const { return ___mVideoModeData_9; }
	inline VideoModeData_t2066817255 * get_address_of_mVideoModeData_9() { return &___mVideoModeData_9; }
	inline void set_mVideoModeData_9(VideoModeData_t2066817255  value)
	{
		___mVideoModeData_9 = value;
	}

	inline static int32_t get_offset_of_mVideoModeDataNeedsUpdate_10() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mVideoModeDataNeedsUpdate_10)); }
	inline bool get_mVideoModeDataNeedsUpdate_10() const { return ___mVideoModeDataNeedsUpdate_10; }
	inline bool* get_address_of_mVideoModeDataNeedsUpdate_10() { return &___mVideoModeDataNeedsUpdate_10; }
	inline void set_mVideoModeDataNeedsUpdate_10(bool value)
	{
		___mVideoModeDataNeedsUpdate_10 = value;
	}

	inline static int32_t get_offset_of_mHasCameraDeviceModeBeenSet_11() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mHasCameraDeviceModeBeenSet_11)); }
	inline bool get_mHasCameraDeviceModeBeenSet_11() const { return ___mHasCameraDeviceModeBeenSet_11; }
	inline bool* get_address_of_mHasCameraDeviceModeBeenSet_11() { return &___mHasCameraDeviceModeBeenSet_11; }
	inline void set_mHasCameraDeviceModeBeenSet_11(bool value)
	{
		___mHasCameraDeviceModeBeenSet_11 = value;
	}

	inline static int32_t get_offset_of_mCameraActive_12() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mCameraActive_12)); }
	inline bool get_mCameraActive_12() const { return ___mCameraActive_12; }
	inline bool* get_address_of_mCameraActive_12() { return &___mCameraActive_12; }
	inline void set_mCameraActive_12(bool value)
	{
		___mCameraActive_12 = value;
	}

	inline static int32_t get_offset_of_mIsCameraMocked_13() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mIsCameraMocked_13)); }
	inline bool get_mIsCameraMocked_13() const { return ___mIsCameraMocked_13; }
	inline bool* get_address_of_mIsCameraMocked_13() { return &___mIsCameraMocked_13; }
	inline void set_mIsCameraMocked_13(bool value)
	{
		___mIsCameraMocked_13 = value;
	}
};

struct CameraDevice_t960297568_StaticFields
{
public:
	// Vuforia.CameraDevice Vuforia.CameraDevice::mInstance
	CameraDevice_t960297568 * ___mInstance_0;
	// Vuforia.IWebCam Vuforia.CameraDevice::mWebCam
	RuntimeObject* ___mWebCam_3;

public:
	inline static int32_t get_offset_of_mInstance_0() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568_StaticFields, ___mInstance_0)); }
	inline CameraDevice_t960297568 * get_mInstance_0() const { return ___mInstance_0; }
	inline CameraDevice_t960297568 ** get_address_of_mInstance_0() { return &___mInstance_0; }
	inline void set_mInstance_0(CameraDevice_t960297568 * value)
	{
		___mInstance_0 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_0), value);
	}

	inline static int32_t get_offset_of_mWebCam_3() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568_StaticFields, ___mWebCam_3)); }
	inline RuntimeObject* get_mWebCam_3() const { return ___mWebCam_3; }
	inline RuntimeObject** get_address_of_mWebCam_3() { return &___mWebCam_3; }
	inline void set_mWebCam_3(RuntimeObject* value)
	{
		___mWebCam_3 = value;
		Il2CppCodeGenWriteBarrier((&___mWebCam_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERADEVICE_T960297568_H
#ifndef FONT_T1956802104_H
#define FONT_T1956802104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Font
struct  Font_t1956802104  : public Object_t631007953
{
public:
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t2467502454 * ___m_FontTextureRebuildCallback_3;

public:
	inline static int32_t get_offset_of_m_FontTextureRebuildCallback_3() { return static_cast<int32_t>(offsetof(Font_t1956802104, ___m_FontTextureRebuildCallback_3)); }
	inline FontTextureRebuildCallback_t2467502454 * get_m_FontTextureRebuildCallback_3() const { return ___m_FontTextureRebuildCallback_3; }
	inline FontTextureRebuildCallback_t2467502454 ** get_address_of_m_FontTextureRebuildCallback_3() { return &___m_FontTextureRebuildCallback_3; }
	inline void set_m_FontTextureRebuildCallback_3(FontTextureRebuildCallback_t2467502454 * value)
	{
		___m_FontTextureRebuildCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontTextureRebuildCallback_3), value);
	}
};

struct Font_t1956802104_StaticFields
{
public:
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_t2129269699 * ___textureRebuilt_2;

public:
	inline static int32_t get_offset_of_textureRebuilt_2() { return static_cast<int32_t>(offsetof(Font_t1956802104_StaticFields, ___textureRebuilt_2)); }
	inline Action_1_t2129269699 * get_textureRebuilt_2() const { return ___textureRebuilt_2; }
	inline Action_1_t2129269699 ** get_address_of_textureRebuilt_2() { return &___textureRebuilt_2; }
	inline void set_textureRebuilt_2(Action_1_t2129269699 * value)
	{
		___textureRebuilt_2 = value;
		Il2CppCodeGenWriteBarrier((&___textureRebuilt_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONT_T1956802104_H
#ifndef VUFORIARUNTIME_T1949122020_H
#define VUFORIARUNTIME_T1949122020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRuntime
struct  VuforiaRuntime_t1949122020  : public RuntimeObject
{
public:
	// System.Action`1<Vuforia.VuforiaUnity/InitError> Vuforia.VuforiaRuntime::mOnVuforiaInitError
	Action_1_t3593217305 * ___mOnVuforiaInitError_1;
	// System.Boolean Vuforia.VuforiaRuntime::mFailedToInitialize
	bool ___mFailedToInitialize_2;
	// Vuforia.VuforiaUnity/InitError Vuforia.VuforiaRuntime::mInitError
	int32_t ___mInitError_3;
	// System.Boolean Vuforia.VuforiaRuntime::mHasInitialized
	bool ___mHasInitialized_4;

public:
	inline static int32_t get_offset_of_mOnVuforiaInitError_1() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mOnVuforiaInitError_1)); }
	inline Action_1_t3593217305 * get_mOnVuforiaInitError_1() const { return ___mOnVuforiaInitError_1; }
	inline Action_1_t3593217305 ** get_address_of_mOnVuforiaInitError_1() { return &___mOnVuforiaInitError_1; }
	inline void set_mOnVuforiaInitError_1(Action_1_t3593217305 * value)
	{
		___mOnVuforiaInitError_1 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaInitError_1), value);
	}

	inline static int32_t get_offset_of_mFailedToInitialize_2() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mFailedToInitialize_2)); }
	inline bool get_mFailedToInitialize_2() const { return ___mFailedToInitialize_2; }
	inline bool* get_address_of_mFailedToInitialize_2() { return &___mFailedToInitialize_2; }
	inline void set_mFailedToInitialize_2(bool value)
	{
		___mFailedToInitialize_2 = value;
	}

	inline static int32_t get_offset_of_mInitError_3() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mInitError_3)); }
	inline int32_t get_mInitError_3() const { return ___mInitError_3; }
	inline int32_t* get_address_of_mInitError_3() { return &___mInitError_3; }
	inline void set_mInitError_3(int32_t value)
	{
		___mInitError_3 = value;
	}

	inline static int32_t get_offset_of_mHasInitialized_4() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mHasInitialized_4)); }
	inline bool get_mHasInitialized_4() const { return ___mHasInitialized_4; }
	inline bool* get_address_of_mHasInitialized_4() { return &___mHasInitialized_4; }
	inline void set_mHasInitialized_4(bool value)
	{
		___mHasInitialized_4 = value;
	}
};

struct VuforiaRuntime_t1949122020_StaticFields
{
public:
	// Vuforia.VuforiaRuntime Vuforia.VuforiaRuntime::mInstance
	VuforiaRuntime_t1949122020 * ___mInstance_5;
	// System.Object Vuforia.VuforiaRuntime::mPadlock
	RuntimeObject * ___mPadlock_6;

public:
	inline static int32_t get_offset_of_mInstance_5() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020_StaticFields, ___mInstance_5)); }
	inline VuforiaRuntime_t1949122020 * get_mInstance_5() const { return ___mInstance_5; }
	inline VuforiaRuntime_t1949122020 ** get_address_of_mInstance_5() { return &___mInstance_5; }
	inline void set_mInstance_5(VuforiaRuntime_t1949122020 * value)
	{
		___mInstance_5 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_5), value);
	}

	inline static int32_t get_offset_of_mPadlock_6() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020_StaticFields, ___mPadlock_6)); }
	inline RuntimeObject * get_mPadlock_6() const { return ___mPadlock_6; }
	inline RuntimeObject ** get_address_of_mPadlock_6() { return &___mPadlock_6; }
	inline void set_mPadlock_6(RuntimeObject * value)
	{
		___mPadlock_6 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIARUNTIME_T1949122020_H
#ifndef GUISTYLE_T3956901511_H
#define GUISTYLE_T3956901511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyle
struct  GUIStyle_t3956901511  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t1397964415 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t1397964415 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t1397964415 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t1397964415 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t1397964415 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t1397964415 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t1397964415 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t1397964415 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t1369453676 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t1369453676 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t1369453676 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t1369453676 * ___m_Overflow_12;
	// UnityEngine.Font UnityEngine.GUIStyle::m_FontInternal
	Font_t1956802104 * ___m_FontInternal_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Normal_1)); }
	inline GUIStyleState_t1397964415 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_t1397964415 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Normal_1), value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Hover_2)); }
	inline GUIStyleState_t1397964415 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_t1397964415 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Hover_2), value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Active_3)); }
	inline GUIStyleState_t1397964415 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_t1397964415 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Active_3), value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Focused_4)); }
	inline GUIStyleState_t1397964415 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_t1397964415 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Focused_4), value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnNormal_5)); }
	inline GUIStyleState_t1397964415 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_t1397964415 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnNormal_5), value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnHover_6)); }
	inline GUIStyleState_t1397964415 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_t1397964415 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnHover_6), value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnActive_7)); }
	inline GUIStyleState_t1397964415 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_t1397964415 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnActive_7), value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnFocused_8)); }
	inline GUIStyleState_t1397964415 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_t1397964415 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnFocused_8), value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Border_9)); }
	inline RectOffset_t1369453676 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_t1369453676 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_t1369453676 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Border_9), value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Padding_10)); }
	inline RectOffset_t1369453676 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_t1369453676 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_t1369453676 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Padding_10), value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Margin_11)); }
	inline RectOffset_t1369453676 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_t1369453676 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_t1369453676 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Margin_11), value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Overflow_12)); }
	inline RectOffset_t1369453676 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_t1369453676 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_t1369453676 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_Overflow_12), value);
	}

	inline static int32_t get_offset_of_m_FontInternal_13() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_FontInternal_13)); }
	inline Font_t1956802104 * get_m_FontInternal_13() const { return ___m_FontInternal_13; }
	inline Font_t1956802104 ** get_address_of_m_FontInternal_13() { return &___m_FontInternal_13; }
	inline void set_m_FontInternal_13(Font_t1956802104 * value)
	{
		___m_FontInternal_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontInternal_13), value);
	}
};

struct GUIStyle_t3956901511_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t3956901511 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511_StaticFields, ___s_None_15)); }
	inline GUIStyle_t3956901511 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t3956901511 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t3956901511 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_None_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t3956901511_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Border_9;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Overflow_12;
	Font_t1956802104 * ___m_FontInternal_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t3956901511_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t1397964415_marshaled_com* ___m_Normal_1;
	GUIStyleState_t1397964415_marshaled_com* ___m_Hover_2;
	GUIStyleState_t1397964415_marshaled_com* ___m_Active_3;
	GUIStyleState_t1397964415_marshaled_com* ___m_Focused_4;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnFocused_8;
	RectOffset_t1369453676_marshaled_com* ___m_Border_9;
	RectOffset_t1369453676_marshaled_com* ___m_Padding_10;
	RectOffset_t1369453676_marshaled_com* ___m_Margin_11;
	RectOffset_t1369453676_marshaled_com* ___m_Overflow_12;
	Font_t1956802104 * ___m_FontInternal_13;
};
#endif // GUISTYLE_T3956901511_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef VUFORIARENDERER_T3433045970_H
#define VUFORIARENDERER_T3433045970_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer
struct  VuforiaRenderer_t3433045970  : public RuntimeObject
{
public:
	// Vuforia.VuforiaRenderer/VideoBGCfgData Vuforia.VuforiaRenderer::mVideoBGConfig
	VideoBGCfgData_t994527297  ___mVideoBGConfig_1;
	// System.Boolean Vuforia.VuforiaRenderer::mVideoBGConfigSet
	bool ___mVideoBGConfigSet_2;
	// UnityEngine.Texture Vuforia.VuforiaRenderer::mVideoBackgroundTexture
	Texture_t3661962703 * ___mVideoBackgroundTexture_3;
	// System.Boolean Vuforia.VuforiaRenderer::mBackgroundTextureHasChanged
	bool ___mBackgroundTextureHasChanged_4;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaRenderer::mLastSetReflection
	int32_t ___mLastSetReflection_5;
	// System.IntPtr Vuforia.VuforiaRenderer::mNativeRenderingCallback
	intptr_t ___mNativeRenderingCallback_6;

public:
	inline static int32_t get_offset_of_mVideoBGConfig_1() { return static_cast<int32_t>(offsetof(VuforiaRenderer_t3433045970, ___mVideoBGConfig_1)); }
	inline VideoBGCfgData_t994527297  get_mVideoBGConfig_1() const { return ___mVideoBGConfig_1; }
	inline VideoBGCfgData_t994527297 * get_address_of_mVideoBGConfig_1() { return &___mVideoBGConfig_1; }
	inline void set_mVideoBGConfig_1(VideoBGCfgData_t994527297  value)
	{
		___mVideoBGConfig_1 = value;
	}

	inline static int32_t get_offset_of_mVideoBGConfigSet_2() { return static_cast<int32_t>(offsetof(VuforiaRenderer_t3433045970, ___mVideoBGConfigSet_2)); }
	inline bool get_mVideoBGConfigSet_2() const { return ___mVideoBGConfigSet_2; }
	inline bool* get_address_of_mVideoBGConfigSet_2() { return &___mVideoBGConfigSet_2; }
	inline void set_mVideoBGConfigSet_2(bool value)
	{
		___mVideoBGConfigSet_2 = value;
	}

	inline static int32_t get_offset_of_mVideoBackgroundTexture_3() { return static_cast<int32_t>(offsetof(VuforiaRenderer_t3433045970, ___mVideoBackgroundTexture_3)); }
	inline Texture_t3661962703 * get_mVideoBackgroundTexture_3() const { return ___mVideoBackgroundTexture_3; }
	inline Texture_t3661962703 ** get_address_of_mVideoBackgroundTexture_3() { return &___mVideoBackgroundTexture_3; }
	inline void set_mVideoBackgroundTexture_3(Texture_t3661962703 * value)
	{
		___mVideoBackgroundTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___mVideoBackgroundTexture_3), value);
	}

	inline static int32_t get_offset_of_mBackgroundTextureHasChanged_4() { return static_cast<int32_t>(offsetof(VuforiaRenderer_t3433045970, ___mBackgroundTextureHasChanged_4)); }
	inline bool get_mBackgroundTextureHasChanged_4() const { return ___mBackgroundTextureHasChanged_4; }
	inline bool* get_address_of_mBackgroundTextureHasChanged_4() { return &___mBackgroundTextureHasChanged_4; }
	inline void set_mBackgroundTextureHasChanged_4(bool value)
	{
		___mBackgroundTextureHasChanged_4 = value;
	}

	inline static int32_t get_offset_of_mLastSetReflection_5() { return static_cast<int32_t>(offsetof(VuforiaRenderer_t3433045970, ___mLastSetReflection_5)); }
	inline int32_t get_mLastSetReflection_5() const { return ___mLastSetReflection_5; }
	inline int32_t* get_address_of_mLastSetReflection_5() { return &___mLastSetReflection_5; }
	inline void set_mLastSetReflection_5(int32_t value)
	{
		___mLastSetReflection_5 = value;
	}

	inline static int32_t get_offset_of_mNativeRenderingCallback_6() { return static_cast<int32_t>(offsetof(VuforiaRenderer_t3433045970, ___mNativeRenderingCallback_6)); }
	inline intptr_t get_mNativeRenderingCallback_6() const { return ___mNativeRenderingCallback_6; }
	inline intptr_t* get_address_of_mNativeRenderingCallback_6() { return &___mNativeRenderingCallback_6; }
	inline void set_mNativeRenderingCallback_6(intptr_t value)
	{
		___mNativeRenderingCallback_6 = value;
	}
};

struct VuforiaRenderer_t3433045970_StaticFields
{
public:
	// Vuforia.VuforiaRenderer Vuforia.VuforiaRenderer::sInstance
	VuforiaRenderer_t3433045970 * ___sInstance_0;

public:
	inline static int32_t get_offset_of_sInstance_0() { return static_cast<int32_t>(offsetof(VuforiaRenderer_t3433045970_StaticFields, ___sInstance_0)); }
	inline VuforiaRenderer_t3433045970 * get_sInstance_0() const { return ___sInstance_0; }
	inline VuforiaRenderer_t3433045970 ** get_address_of_sInstance_0() { return &___sInstance_0; }
	inline void set_sInstance_0(VuforiaRenderer_t3433045970 * value)
	{
		___sInstance_0 = value;
		Il2CppCodeGenWriteBarrier((&___sInstance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIARENDERER_T3433045970_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
#ifndef VUFORIACONFIGURATION_T1763229349_H
#define VUFORIACONFIGURATION_T1763229349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaConfiguration
struct  VuforiaConfiguration_t1763229349  : public ScriptableObject_t2528358522
{
public:
	// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration Vuforia.VuforiaConfiguration::vuforia
	GenericVuforiaConfiguration_t3697830469 * ___vuforia_4;
	// Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration Vuforia.VuforiaConfiguration::digitalEyewear
	DigitalEyewearConfiguration_t546560202 * ___digitalEyewear_5;
	// Vuforia.VuforiaConfiguration/DatabaseLoadConfiguration Vuforia.VuforiaConfiguration::databaseLoad
	DatabaseLoadConfiguration_t449697234 * ___databaseLoad_6;
	// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration Vuforia.VuforiaConfiguration::videoBackground
	VideoBackgroundConfiguration_t3392414655 * ___videoBackground_7;
	// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration Vuforia.VuforiaConfiguration::deviceTracker
	DeviceTrackerConfiguration_t721467671 * ___deviceTracker_8;
	// Vuforia.VuforiaConfiguration/SmartTerrainConfiguration Vuforia.VuforiaConfiguration::smartTerrain
	SmartTerrainConfiguration_t1514074484 * ___smartTerrain_9;
	// Vuforia.VuforiaConfiguration/WebCamConfiguration Vuforia.VuforiaConfiguration::webcam
	WebCamConfiguration_t1101614731 * ___webcam_10;

public:
	inline static int32_t get_offset_of_vuforia_4() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___vuforia_4)); }
	inline GenericVuforiaConfiguration_t3697830469 * get_vuforia_4() const { return ___vuforia_4; }
	inline GenericVuforiaConfiguration_t3697830469 ** get_address_of_vuforia_4() { return &___vuforia_4; }
	inline void set_vuforia_4(GenericVuforiaConfiguration_t3697830469 * value)
	{
		___vuforia_4 = value;
		Il2CppCodeGenWriteBarrier((&___vuforia_4), value);
	}

	inline static int32_t get_offset_of_digitalEyewear_5() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___digitalEyewear_5)); }
	inline DigitalEyewearConfiguration_t546560202 * get_digitalEyewear_5() const { return ___digitalEyewear_5; }
	inline DigitalEyewearConfiguration_t546560202 ** get_address_of_digitalEyewear_5() { return &___digitalEyewear_5; }
	inline void set_digitalEyewear_5(DigitalEyewearConfiguration_t546560202 * value)
	{
		___digitalEyewear_5 = value;
		Il2CppCodeGenWriteBarrier((&___digitalEyewear_5), value);
	}

	inline static int32_t get_offset_of_databaseLoad_6() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___databaseLoad_6)); }
	inline DatabaseLoadConfiguration_t449697234 * get_databaseLoad_6() const { return ___databaseLoad_6; }
	inline DatabaseLoadConfiguration_t449697234 ** get_address_of_databaseLoad_6() { return &___databaseLoad_6; }
	inline void set_databaseLoad_6(DatabaseLoadConfiguration_t449697234 * value)
	{
		___databaseLoad_6 = value;
		Il2CppCodeGenWriteBarrier((&___databaseLoad_6), value);
	}

	inline static int32_t get_offset_of_videoBackground_7() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___videoBackground_7)); }
	inline VideoBackgroundConfiguration_t3392414655 * get_videoBackground_7() const { return ___videoBackground_7; }
	inline VideoBackgroundConfiguration_t3392414655 ** get_address_of_videoBackground_7() { return &___videoBackground_7; }
	inline void set_videoBackground_7(VideoBackgroundConfiguration_t3392414655 * value)
	{
		___videoBackground_7 = value;
		Il2CppCodeGenWriteBarrier((&___videoBackground_7), value);
	}

	inline static int32_t get_offset_of_deviceTracker_8() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___deviceTracker_8)); }
	inline DeviceTrackerConfiguration_t721467671 * get_deviceTracker_8() const { return ___deviceTracker_8; }
	inline DeviceTrackerConfiguration_t721467671 ** get_address_of_deviceTracker_8() { return &___deviceTracker_8; }
	inline void set_deviceTracker_8(DeviceTrackerConfiguration_t721467671 * value)
	{
		___deviceTracker_8 = value;
		Il2CppCodeGenWriteBarrier((&___deviceTracker_8), value);
	}

	inline static int32_t get_offset_of_smartTerrain_9() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___smartTerrain_9)); }
	inline SmartTerrainConfiguration_t1514074484 * get_smartTerrain_9() const { return ___smartTerrain_9; }
	inline SmartTerrainConfiguration_t1514074484 ** get_address_of_smartTerrain_9() { return &___smartTerrain_9; }
	inline void set_smartTerrain_9(SmartTerrainConfiguration_t1514074484 * value)
	{
		___smartTerrain_9 = value;
		Il2CppCodeGenWriteBarrier((&___smartTerrain_9), value);
	}

	inline static int32_t get_offset_of_webcam_10() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___webcam_10)); }
	inline WebCamConfiguration_t1101614731 * get_webcam_10() const { return ___webcam_10; }
	inline WebCamConfiguration_t1101614731 ** get_address_of_webcam_10() { return &___webcam_10; }
	inline void set_webcam_10(WebCamConfiguration_t1101614731 * value)
	{
		___webcam_10 = value;
		Il2CppCodeGenWriteBarrier((&___webcam_10), value);
	}
};

struct VuforiaConfiguration_t1763229349_StaticFields
{
public:
	// Vuforia.VuforiaConfiguration Vuforia.VuforiaConfiguration::mInstance
	VuforiaConfiguration_t1763229349 * ___mInstance_2;
	// System.Object Vuforia.VuforiaConfiguration::mPadlock
	RuntimeObject * ___mPadlock_3;

public:
	inline static int32_t get_offset_of_mInstance_2() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349_StaticFields, ___mInstance_2)); }
	inline VuforiaConfiguration_t1763229349 * get_mInstance_2() const { return ___mInstance_2; }
	inline VuforiaConfiguration_t1763229349 ** get_address_of_mInstance_2() { return &___mInstance_2; }
	inline void set_mInstance_2(VuforiaConfiguration_t1763229349 * value)
	{
		___mInstance_2 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_2), value);
	}

	inline static int32_t get_offset_of_mPadlock_3() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349_StaticFields, ___mPadlock_3)); }
	inline RuntimeObject * get_mPadlock_3() const { return ___mPadlock_3; }
	inline RuntimeObject ** get_address_of_mPadlock_3() { return &___mPadlock_3; }
	inline void set_mPadlock_3(RuntimeObject * value)
	{
		___mPadlock_3 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIACONFIGURATION_T1763229349_H
#ifndef WINDOWFUNCTION_T3146511083_H
#define WINDOWFUNCTION_T3146511083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUI/WindowFunction
struct  WindowFunction_t3146511083  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWFUNCTION_T3146511083_H
#ifndef ACTION_1_T3593217305_H
#define ACTION_1_T3593217305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct  Action_1_t3593217305  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3593217305_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef ACTION_1_T269755560_H
#define ACTION_1_T269755560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.Boolean>
struct  Action_1_t269755560  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T269755560_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef FUNC_1_T3822001908_H
#define FUNC_1_T3822001908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<System.Boolean>
struct  Func_1_t3822001908  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T3822001908_H
#ifndef COLLIDER_T1773347010_H
#define COLLIDER_T1773347010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t1773347010  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T1773347010_H
#ifndef ACTION_T1264377477_H
#define ACTION_T1264377477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t1264377477  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T1264377477_H
#ifndef RECTTRANSFORM_T3704657025_H
#define RECTTRANSFORM_T3704657025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t3704657025  : public Transform_t3600365921
{
public:

public:
};

struct RectTransform_t3704657025_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1258266594 * ___reapplyDrivenProperties_2;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_2() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025_StaticFields, ___reapplyDrivenProperties_2)); }
	inline ReapplyDrivenProperties_t1258266594 * get_reapplyDrivenProperties_2() const { return ___reapplyDrivenProperties_2; }
	inline ReapplyDrivenProperties_t1258266594 ** get_address_of_reapplyDrivenProperties_2() { return &___reapplyDrivenProperties_2; }
	inline void set_reapplyDrivenProperties_2(ReapplyDrivenProperties_t1258266594 * value)
	{
		___reapplyDrivenProperties_2 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T3704657025_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t190067161 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t190067161 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t190067161 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t190067161 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t190067161 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t190067161 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef CANVAS_T3310196443_H
#define CANVAS_T3310196443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Canvas
struct  Canvas_t3310196443  : public Behaviour_t1437897464
{
public:

public:
};

struct Canvas_t3310196443_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t3309123499 * ___willRenderCanvases_2;

public:
	inline static int32_t get_offset_of_willRenderCanvases_2() { return static_cast<int32_t>(offsetof(Canvas_t3310196443_StaticFields, ___willRenderCanvases_2)); }
	inline WillRenderCanvases_t3309123499 * get_willRenderCanvases_2() const { return ___willRenderCanvases_2; }
	inline WillRenderCanvases_t3309123499 ** get_address_of_willRenderCanvases_2() { return &___willRenderCanvases_2; }
	inline void set_willRenderCanvases_2(WillRenderCanvases_t3309123499 * value)
	{
		___willRenderCanvases_2 = value;
		Il2CppCodeGenWriteBarrier((&___willRenderCanvases_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVAS_T3310196443_H
#ifndef VIDEOPLAYER_T1683042537_H
#define VIDEOPLAYER_T1683042537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoPlayer
struct  VideoPlayer_t1683042537  : public Behaviour_t1437897464
{
public:
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::prepareCompleted
	EventHandler_t3436254912 * ___prepareCompleted_2;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::loopPointReached
	EventHandler_t3436254912 * ___loopPointReached_3;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::started
	EventHandler_t3436254912 * ___started_4;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::frameDropped
	EventHandler_t3436254912 * ___frameDropped_5;
	// UnityEngine.Video.VideoPlayer/ErrorEventHandler UnityEngine.Video.VideoPlayer::errorReceived
	ErrorEventHandler_t3211687919 * ___errorReceived_6;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::seekCompleted
	EventHandler_t3436254912 * ___seekCompleted_7;
	// UnityEngine.Video.VideoPlayer/TimeEventHandler UnityEngine.Video.VideoPlayer::clockResyncOccurred
	TimeEventHandler_t445758600 * ___clockResyncOccurred_8;
	// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler UnityEngine.Video.VideoPlayer::frameReady
	FrameReadyEventHandler_t3848515759 * ___frameReady_9;

public:
	inline static int32_t get_offset_of_prepareCompleted_2() { return static_cast<int32_t>(offsetof(VideoPlayer_t1683042537, ___prepareCompleted_2)); }
	inline EventHandler_t3436254912 * get_prepareCompleted_2() const { return ___prepareCompleted_2; }
	inline EventHandler_t3436254912 ** get_address_of_prepareCompleted_2() { return &___prepareCompleted_2; }
	inline void set_prepareCompleted_2(EventHandler_t3436254912 * value)
	{
		___prepareCompleted_2 = value;
		Il2CppCodeGenWriteBarrier((&___prepareCompleted_2), value);
	}

	inline static int32_t get_offset_of_loopPointReached_3() { return static_cast<int32_t>(offsetof(VideoPlayer_t1683042537, ___loopPointReached_3)); }
	inline EventHandler_t3436254912 * get_loopPointReached_3() const { return ___loopPointReached_3; }
	inline EventHandler_t3436254912 ** get_address_of_loopPointReached_3() { return &___loopPointReached_3; }
	inline void set_loopPointReached_3(EventHandler_t3436254912 * value)
	{
		___loopPointReached_3 = value;
		Il2CppCodeGenWriteBarrier((&___loopPointReached_3), value);
	}

	inline static int32_t get_offset_of_started_4() { return static_cast<int32_t>(offsetof(VideoPlayer_t1683042537, ___started_4)); }
	inline EventHandler_t3436254912 * get_started_4() const { return ___started_4; }
	inline EventHandler_t3436254912 ** get_address_of_started_4() { return &___started_4; }
	inline void set_started_4(EventHandler_t3436254912 * value)
	{
		___started_4 = value;
		Il2CppCodeGenWriteBarrier((&___started_4), value);
	}

	inline static int32_t get_offset_of_frameDropped_5() { return static_cast<int32_t>(offsetof(VideoPlayer_t1683042537, ___frameDropped_5)); }
	inline EventHandler_t3436254912 * get_frameDropped_5() const { return ___frameDropped_5; }
	inline EventHandler_t3436254912 ** get_address_of_frameDropped_5() { return &___frameDropped_5; }
	inline void set_frameDropped_5(EventHandler_t3436254912 * value)
	{
		___frameDropped_5 = value;
		Il2CppCodeGenWriteBarrier((&___frameDropped_5), value);
	}

	inline static int32_t get_offset_of_errorReceived_6() { return static_cast<int32_t>(offsetof(VideoPlayer_t1683042537, ___errorReceived_6)); }
	inline ErrorEventHandler_t3211687919 * get_errorReceived_6() const { return ___errorReceived_6; }
	inline ErrorEventHandler_t3211687919 ** get_address_of_errorReceived_6() { return &___errorReceived_6; }
	inline void set_errorReceived_6(ErrorEventHandler_t3211687919 * value)
	{
		___errorReceived_6 = value;
		Il2CppCodeGenWriteBarrier((&___errorReceived_6), value);
	}

	inline static int32_t get_offset_of_seekCompleted_7() { return static_cast<int32_t>(offsetof(VideoPlayer_t1683042537, ___seekCompleted_7)); }
	inline EventHandler_t3436254912 * get_seekCompleted_7() const { return ___seekCompleted_7; }
	inline EventHandler_t3436254912 ** get_address_of_seekCompleted_7() { return &___seekCompleted_7; }
	inline void set_seekCompleted_7(EventHandler_t3436254912 * value)
	{
		___seekCompleted_7 = value;
		Il2CppCodeGenWriteBarrier((&___seekCompleted_7), value);
	}

	inline static int32_t get_offset_of_clockResyncOccurred_8() { return static_cast<int32_t>(offsetof(VideoPlayer_t1683042537, ___clockResyncOccurred_8)); }
	inline TimeEventHandler_t445758600 * get_clockResyncOccurred_8() const { return ___clockResyncOccurred_8; }
	inline TimeEventHandler_t445758600 ** get_address_of_clockResyncOccurred_8() { return &___clockResyncOccurred_8; }
	inline void set_clockResyncOccurred_8(TimeEventHandler_t445758600 * value)
	{
		___clockResyncOccurred_8 = value;
		Il2CppCodeGenWriteBarrier((&___clockResyncOccurred_8), value);
	}

	inline static int32_t get_offset_of_frameReady_9() { return static_cast<int32_t>(offsetof(VideoPlayer_t1683042537, ___frameReady_9)); }
	inline FrameReadyEventHandler_t3848515759 * get_frameReady_9() const { return ___frameReady_9; }
	inline FrameReadyEventHandler_t3848515759 ** get_address_of_frameReady_9() { return &___frameReady_9; }
	inline void set_frameReady_9(FrameReadyEventHandler_t3848515759 * value)
	{
		___frameReady_9 = value;
		Il2CppCodeGenWriteBarrier((&___frameReady_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOPLAYER_T1683042537_H
#ifndef AUDIOSOURCE_T3935305588_H
#define AUDIOSOURCE_T3935305588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t3935305588  : public Behaviour_t1437897464
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t3064908834 * ___spatializerExtension_2;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t3064908834 * ___ambisonicExtension_3;

public:
	inline static int32_t get_offset_of_spatializerExtension_2() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___spatializerExtension_2)); }
	inline AudioSourceExtension_t3064908834 * get_spatializerExtension_2() const { return ___spatializerExtension_2; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_spatializerExtension_2() { return &___spatializerExtension_2; }
	inline void set_spatializerExtension_2(AudioSourceExtension_t3064908834 * value)
	{
		___spatializerExtension_2 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_2), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_3() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___ambisonicExtension_3)); }
	inline AudioSourceExtension_t3064908834 * get_ambisonicExtension_3() const { return ___ambisonicExtension_3; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_ambisonicExtension_3() { return &___ambisonicExtension_3; }
	inline void set_ambisonicExtension_3(AudioSourceExtension_t3064908834 * value)
	{
		___ambisonicExtension_3 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T3935305588_H
#ifndef ONLOAD_T2599798848_H
#define ONLOAD_T2599798848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// onload
struct  onload_t2599798848  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONLOAD_T2599798848_H
#ifndef TAPHANDLER_T334234343_H
#define TAPHANDLER_T334234343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TapHandler
struct  TapHandler_t334234343  : public MonoBehaviour_t3962482529
{
public:
	// System.Single TapHandler::mTimeSinceLastTap
	float ___mTimeSinceLastTap_3;
	// MenuAnimator TapHandler::mMenuAnim
	MenuAnimator_t2112910832 * ___mMenuAnim_4;
	// System.Int32 TapHandler::mTapCount
	int32_t ___mTapCount_5;

public:
	inline static int32_t get_offset_of_mTimeSinceLastTap_3() { return static_cast<int32_t>(offsetof(TapHandler_t334234343, ___mTimeSinceLastTap_3)); }
	inline float get_mTimeSinceLastTap_3() const { return ___mTimeSinceLastTap_3; }
	inline float* get_address_of_mTimeSinceLastTap_3() { return &___mTimeSinceLastTap_3; }
	inline void set_mTimeSinceLastTap_3(float value)
	{
		___mTimeSinceLastTap_3 = value;
	}

	inline static int32_t get_offset_of_mMenuAnim_4() { return static_cast<int32_t>(offsetof(TapHandler_t334234343, ___mMenuAnim_4)); }
	inline MenuAnimator_t2112910832 * get_mMenuAnim_4() const { return ___mMenuAnim_4; }
	inline MenuAnimator_t2112910832 ** get_address_of_mMenuAnim_4() { return &___mMenuAnim_4; }
	inline void set_mMenuAnim_4(MenuAnimator_t2112910832 * value)
	{
		___mMenuAnim_4 = value;
		Il2CppCodeGenWriteBarrier((&___mMenuAnim_4), value);
	}

	inline static int32_t get_offset_of_mTapCount_5() { return static_cast<int32_t>(offsetof(TapHandler_t334234343, ___mTapCount_5)); }
	inline int32_t get_mTapCount_5() const { return ___mTapCount_5; }
	inline int32_t* get_address_of_mTapCount_5() { return &___mTapCount_5; }
	inline void set_mTapCount_5(int32_t value)
	{
		___mTapCount_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TAPHANDLER_T334234343_H
#ifndef INITERRORHANDLER_T2159361531_H
#define INITERRORHANDLER_T2159361531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InitErrorHandler
struct  InitErrorHandler_t2159361531  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text InitErrorHandler::errorText
	Text_t1901882714 * ___errorText_2;
	// UnityEngine.Canvas InitErrorHandler::errorCanvas
	Canvas_t3310196443 * ___errorCanvas_3;
	// System.String InitErrorHandler::key
	String_t* ___key_4;

public:
	inline static int32_t get_offset_of_errorText_2() { return static_cast<int32_t>(offsetof(InitErrorHandler_t2159361531, ___errorText_2)); }
	inline Text_t1901882714 * get_errorText_2() const { return ___errorText_2; }
	inline Text_t1901882714 ** get_address_of_errorText_2() { return &___errorText_2; }
	inline void set_errorText_2(Text_t1901882714 * value)
	{
		___errorText_2 = value;
		Il2CppCodeGenWriteBarrier((&___errorText_2), value);
	}

	inline static int32_t get_offset_of_errorCanvas_3() { return static_cast<int32_t>(offsetof(InitErrorHandler_t2159361531, ___errorCanvas_3)); }
	inline Canvas_t3310196443 * get_errorCanvas_3() const { return ___errorCanvas_3; }
	inline Canvas_t3310196443 ** get_address_of_errorCanvas_3() { return &___errorCanvas_3; }
	inline void set_errorCanvas_3(Canvas_t3310196443 * value)
	{
		___errorCanvas_3 = value;
		Il2CppCodeGenWriteBarrier((&___errorCanvas_3), value);
	}

	inline static int32_t get_offset_of_key_4() { return static_cast<int32_t>(offsetof(InitErrorHandler_t2159361531, ___key_4)); }
	inline String_t* get_key_4() const { return ___key_4; }
	inline String_t** get_address_of_key_4() { return &___key_4; }
	inline void set_key_4(String_t* value)
	{
		___key_4 = value;
		Il2CppCodeGenWriteBarrier((&___key_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INITERRORHANDLER_T2159361531_H
#ifndef TRACKABLESETTINGS_T2862243993_H
#define TRACKABLESETTINGS_T2862243993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TrackableSettings
struct  TrackableSettings_t2862243993  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean TrackableSettings::mExtTrackingEnabled
	bool ___mExtTrackingEnabled_2;

public:
	inline static int32_t get_offset_of_mExtTrackingEnabled_2() { return static_cast<int32_t>(offsetof(TrackableSettings_t2862243993, ___mExtTrackingEnabled_2)); }
	inline bool get_mExtTrackingEnabled_2() const { return ___mExtTrackingEnabled_2; }
	inline bool* get_address_of_mExtTrackingEnabled_2() { return &___mExtTrackingEnabled_2; }
	inline void set_mExtTrackingEnabled_2(bool value)
	{
		___mExtTrackingEnabled_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLESETTINGS_T2862243993_H
#ifndef ABOUTSCREEN_T2183797299_H
#define ABOUTSCREEN_T2183797299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AboutScreen
struct  AboutScreen_t2183797299  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABOUTSCREEN_T2183797299_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef CAMERASETTINGS_T3152619780_H
#define CAMERASETTINGS_T3152619780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraSettings
struct  CameraSettings_t3152619780  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean CameraSettings::mVuforiaStarted
	bool ___mVuforiaStarted_2;
	// System.Boolean CameraSettings::mAutofocusEnabled
	bool ___mAutofocusEnabled_3;
	// System.Boolean CameraSettings::mFlashTorchEnabled
	bool ___mFlashTorchEnabled_4;
	// Vuforia.CameraDevice/CameraDirection CameraSettings::mActiveDirection
	int32_t ___mActiveDirection_5;

public:
	inline static int32_t get_offset_of_mVuforiaStarted_2() { return static_cast<int32_t>(offsetof(CameraSettings_t3152619780, ___mVuforiaStarted_2)); }
	inline bool get_mVuforiaStarted_2() const { return ___mVuforiaStarted_2; }
	inline bool* get_address_of_mVuforiaStarted_2() { return &___mVuforiaStarted_2; }
	inline void set_mVuforiaStarted_2(bool value)
	{
		___mVuforiaStarted_2 = value;
	}

	inline static int32_t get_offset_of_mAutofocusEnabled_3() { return static_cast<int32_t>(offsetof(CameraSettings_t3152619780, ___mAutofocusEnabled_3)); }
	inline bool get_mAutofocusEnabled_3() const { return ___mAutofocusEnabled_3; }
	inline bool* get_address_of_mAutofocusEnabled_3() { return &___mAutofocusEnabled_3; }
	inline void set_mAutofocusEnabled_3(bool value)
	{
		___mAutofocusEnabled_3 = value;
	}

	inline static int32_t get_offset_of_mFlashTorchEnabled_4() { return static_cast<int32_t>(offsetof(CameraSettings_t3152619780, ___mFlashTorchEnabled_4)); }
	inline bool get_mFlashTorchEnabled_4() const { return ___mFlashTorchEnabled_4; }
	inline bool* get_address_of_mFlashTorchEnabled_4() { return &___mFlashTorchEnabled_4; }
	inline void set_mFlashTorchEnabled_4(bool value)
	{
		___mFlashTorchEnabled_4 = value;
	}

	inline static int32_t get_offset_of_mActiveDirection_5() { return static_cast<int32_t>(offsetof(CameraSettings_t3152619780, ___mActiveDirection_5)); }
	inline int32_t get_mActiveDirection_5() const { return ___mActiveDirection_5; }
	inline int32_t* get_address_of_mActiveDirection_5() { return &___mActiveDirection_5; }
	inline void set_mActiveDirection_5(int32_t value)
	{
		___mActiveDirection_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERASETTINGS_T3152619780_H
#ifndef ASYNCSCENELOADER_T621267272_H
#define ASYNCSCENELOADER_T621267272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AsyncSceneLoader
struct  AsyncSceneLoader_t621267272  : public MonoBehaviour_t3962482529
{
public:
	// System.Single AsyncSceneLoader::loadingDelay
	float ___loadingDelay_2;

public:
	inline static int32_t get_offset_of_loadingDelay_2() { return static_cast<int32_t>(offsetof(AsyncSceneLoader_t621267272, ___loadingDelay_2)); }
	inline float get_loadingDelay_2() const { return ___loadingDelay_2; }
	inline float* get_address_of_loadingDelay_2() { return &___loadingDelay_2; }
	inline void set_loadingDelay_2(float value)
	{
		___loadingDelay_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCSCENELOADER_T621267272_H
#ifndef DISTANCE_T593844463_H
#define DISTANCE_T593844463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// distance
struct  distance_t593844463  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text distance::distanceText
	Text_t1901882714 * ___distanceText_2;

public:
	inline static int32_t get_offset_of_distanceText_2() { return static_cast<int32_t>(offsetof(distance_t593844463, ___distanceText_2)); }
	inline Text_t1901882714 * get_distanceText_2() const { return ___distanceText_2; }
	inline Text_t1901882714 ** get_address_of_distanceText_2() { return &___distanceText_2; }
	inline void set_distanceText_2(Text_t1901882714 * value)
	{
		___distanceText_2 = value;
		Il2CppCodeGenWriteBarrier((&___distanceText_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISTANCE_T593844463_H
#ifndef NYISCRIPT_T2578089225_H
#define NYISCRIPT_T2578089225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// nyiscript
struct  nyiscript_t2578089225  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NYISCRIPT_T2578089225_H
#ifndef AUGMENTEDSCRIPT_T957426287_H
#define AUGMENTEDSCRIPT_T957426287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AugmentedScript
struct  AugmentedScript_t957426287  : public MonoBehaviour_t3962482529
{
public:
	// System.Double AugmentedScript::lat
	double ___lat_2;
	// System.Double AugmentedScript::log
	double ___log_3;
	// System.Single AugmentedScript::startx
	float ___startx_4;
	// System.Single AugmentedScript::starty
	float ___starty_5;
	// System.Double AugmentedScript::curx
	double ___curx_6;
	// System.Double AugmentedScript::cury
	double ___cury_7;
	// System.Single AugmentedScript::originalLatitude
	float ___originalLatitude_8;
	// System.Single AugmentedScript::originalLongitude
	float ___originalLongitude_9;
	// System.Double AugmentedScript::currentLongitude
	double ___currentLongitude_10;
	// System.Double AugmentedScript::currentLatitude
	double ___currentLatitude_11;
	// System.Double AugmentedScript::distance
	double ___distance_12;
	// System.Boolean AugmentedScript::setOriginalValues
	bool ___setOriginalValues_13;
	// UnityEngine.Vector3 AugmentedScript::targetPosition
	Vector3_t3722313464  ___targetPosition_14;
	// UnityEngine.Vector3 AugmentedScript::originalPosition
	Vector3_t3722313464  ___originalPosition_15;
	// System.Single AugmentedScript::speed
	float ___speed_16;

public:
	inline static int32_t get_offset_of_lat_2() { return static_cast<int32_t>(offsetof(AugmentedScript_t957426287, ___lat_2)); }
	inline double get_lat_2() const { return ___lat_2; }
	inline double* get_address_of_lat_2() { return &___lat_2; }
	inline void set_lat_2(double value)
	{
		___lat_2 = value;
	}

	inline static int32_t get_offset_of_log_3() { return static_cast<int32_t>(offsetof(AugmentedScript_t957426287, ___log_3)); }
	inline double get_log_3() const { return ___log_3; }
	inline double* get_address_of_log_3() { return &___log_3; }
	inline void set_log_3(double value)
	{
		___log_3 = value;
	}

	inline static int32_t get_offset_of_startx_4() { return static_cast<int32_t>(offsetof(AugmentedScript_t957426287, ___startx_4)); }
	inline float get_startx_4() const { return ___startx_4; }
	inline float* get_address_of_startx_4() { return &___startx_4; }
	inline void set_startx_4(float value)
	{
		___startx_4 = value;
	}

	inline static int32_t get_offset_of_starty_5() { return static_cast<int32_t>(offsetof(AugmentedScript_t957426287, ___starty_5)); }
	inline float get_starty_5() const { return ___starty_5; }
	inline float* get_address_of_starty_5() { return &___starty_5; }
	inline void set_starty_5(float value)
	{
		___starty_5 = value;
	}

	inline static int32_t get_offset_of_curx_6() { return static_cast<int32_t>(offsetof(AugmentedScript_t957426287, ___curx_6)); }
	inline double get_curx_6() const { return ___curx_6; }
	inline double* get_address_of_curx_6() { return &___curx_6; }
	inline void set_curx_6(double value)
	{
		___curx_6 = value;
	}

	inline static int32_t get_offset_of_cury_7() { return static_cast<int32_t>(offsetof(AugmentedScript_t957426287, ___cury_7)); }
	inline double get_cury_7() const { return ___cury_7; }
	inline double* get_address_of_cury_7() { return &___cury_7; }
	inline void set_cury_7(double value)
	{
		___cury_7 = value;
	}

	inline static int32_t get_offset_of_originalLatitude_8() { return static_cast<int32_t>(offsetof(AugmentedScript_t957426287, ___originalLatitude_8)); }
	inline float get_originalLatitude_8() const { return ___originalLatitude_8; }
	inline float* get_address_of_originalLatitude_8() { return &___originalLatitude_8; }
	inline void set_originalLatitude_8(float value)
	{
		___originalLatitude_8 = value;
	}

	inline static int32_t get_offset_of_originalLongitude_9() { return static_cast<int32_t>(offsetof(AugmentedScript_t957426287, ___originalLongitude_9)); }
	inline float get_originalLongitude_9() const { return ___originalLongitude_9; }
	inline float* get_address_of_originalLongitude_9() { return &___originalLongitude_9; }
	inline void set_originalLongitude_9(float value)
	{
		___originalLongitude_9 = value;
	}

	inline static int32_t get_offset_of_currentLongitude_10() { return static_cast<int32_t>(offsetof(AugmentedScript_t957426287, ___currentLongitude_10)); }
	inline double get_currentLongitude_10() const { return ___currentLongitude_10; }
	inline double* get_address_of_currentLongitude_10() { return &___currentLongitude_10; }
	inline void set_currentLongitude_10(double value)
	{
		___currentLongitude_10 = value;
	}

	inline static int32_t get_offset_of_currentLatitude_11() { return static_cast<int32_t>(offsetof(AugmentedScript_t957426287, ___currentLatitude_11)); }
	inline double get_currentLatitude_11() const { return ___currentLatitude_11; }
	inline double* get_address_of_currentLatitude_11() { return &___currentLatitude_11; }
	inline void set_currentLatitude_11(double value)
	{
		___currentLatitude_11 = value;
	}

	inline static int32_t get_offset_of_distance_12() { return static_cast<int32_t>(offsetof(AugmentedScript_t957426287, ___distance_12)); }
	inline double get_distance_12() const { return ___distance_12; }
	inline double* get_address_of_distance_12() { return &___distance_12; }
	inline void set_distance_12(double value)
	{
		___distance_12 = value;
	}

	inline static int32_t get_offset_of_setOriginalValues_13() { return static_cast<int32_t>(offsetof(AugmentedScript_t957426287, ___setOriginalValues_13)); }
	inline bool get_setOriginalValues_13() const { return ___setOriginalValues_13; }
	inline bool* get_address_of_setOriginalValues_13() { return &___setOriginalValues_13; }
	inline void set_setOriginalValues_13(bool value)
	{
		___setOriginalValues_13 = value;
	}

	inline static int32_t get_offset_of_targetPosition_14() { return static_cast<int32_t>(offsetof(AugmentedScript_t957426287, ___targetPosition_14)); }
	inline Vector3_t3722313464  get_targetPosition_14() const { return ___targetPosition_14; }
	inline Vector3_t3722313464 * get_address_of_targetPosition_14() { return &___targetPosition_14; }
	inline void set_targetPosition_14(Vector3_t3722313464  value)
	{
		___targetPosition_14 = value;
	}

	inline static int32_t get_offset_of_originalPosition_15() { return static_cast<int32_t>(offsetof(AugmentedScript_t957426287, ___originalPosition_15)); }
	inline Vector3_t3722313464  get_originalPosition_15() const { return ___originalPosition_15; }
	inline Vector3_t3722313464 * get_address_of_originalPosition_15() { return &___originalPosition_15; }
	inline void set_originalPosition_15(Vector3_t3722313464  value)
	{
		___originalPosition_15 = value;
	}

	inline static int32_t get_offset_of_speed_16() { return static_cast<int32_t>(offsetof(AugmentedScript_t957426287, ___speed_16)); }
	inline float get_speed_16() const { return ___speed_16; }
	inline float* get_address_of_speed_16() { return &___speed_16; }
	inline void set_speed_16(float value)
	{
		___speed_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUGMENTEDSCRIPT_T957426287_H
#ifndef STREAMVIDEO_T2698492640_H
#define STREAMVIDEO_T2698492640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StreamVideo
struct  StreamVideo_t2698492640  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.RawImage StreamVideo::image
	RawImage_t3182918964 * ___image_2;
	// UnityEngine.Video.VideoClip StreamVideo::videoToPlay
	VideoClip_t1281919028 * ___videoToPlay_3;
	// UnityEngine.Video.VideoPlayer StreamVideo::videoPlayer
	VideoPlayer_t1683042537 * ___videoPlayer_4;
	// UnityEngine.Video.VideoSource StreamVideo::videoSource
	int32_t ___videoSource_5;
	// UnityEngine.AudioSource StreamVideo::audioSource
	AudioSource_t3935305588 * ___audioSource_6;

public:
	inline static int32_t get_offset_of_image_2() { return static_cast<int32_t>(offsetof(StreamVideo_t2698492640, ___image_2)); }
	inline RawImage_t3182918964 * get_image_2() const { return ___image_2; }
	inline RawImage_t3182918964 ** get_address_of_image_2() { return &___image_2; }
	inline void set_image_2(RawImage_t3182918964 * value)
	{
		___image_2 = value;
		Il2CppCodeGenWriteBarrier((&___image_2), value);
	}

	inline static int32_t get_offset_of_videoToPlay_3() { return static_cast<int32_t>(offsetof(StreamVideo_t2698492640, ___videoToPlay_3)); }
	inline VideoClip_t1281919028 * get_videoToPlay_3() const { return ___videoToPlay_3; }
	inline VideoClip_t1281919028 ** get_address_of_videoToPlay_3() { return &___videoToPlay_3; }
	inline void set_videoToPlay_3(VideoClip_t1281919028 * value)
	{
		___videoToPlay_3 = value;
		Il2CppCodeGenWriteBarrier((&___videoToPlay_3), value);
	}

	inline static int32_t get_offset_of_videoPlayer_4() { return static_cast<int32_t>(offsetof(StreamVideo_t2698492640, ___videoPlayer_4)); }
	inline VideoPlayer_t1683042537 * get_videoPlayer_4() const { return ___videoPlayer_4; }
	inline VideoPlayer_t1683042537 ** get_address_of_videoPlayer_4() { return &___videoPlayer_4; }
	inline void set_videoPlayer_4(VideoPlayer_t1683042537 * value)
	{
		___videoPlayer_4 = value;
		Il2CppCodeGenWriteBarrier((&___videoPlayer_4), value);
	}

	inline static int32_t get_offset_of_videoSource_5() { return static_cast<int32_t>(offsetof(StreamVideo_t2698492640, ___videoSource_5)); }
	inline int32_t get_videoSource_5() const { return ___videoSource_5; }
	inline int32_t* get_address_of_videoSource_5() { return &___videoSource_5; }
	inline void set_videoSource_5(int32_t value)
	{
		___videoSource_5 = value;
	}

	inline static int32_t get_offset_of_audioSource_6() { return static_cast<int32_t>(offsetof(StreamVideo_t2698492640, ___audioSource_6)); }
	inline AudioSource_t3935305588 * get_audioSource_6() const { return ___audioSource_6; }
	inline AudioSource_t3935305588 ** get_address_of_audioSource_6() { return &___audioSource_6; }
	inline void set_audioSource_6(AudioSource_t3935305588 * value)
	{
		___audioSource_6 = value;
		Il2CppCodeGenWriteBarrier((&___audioSource_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMVIDEO_T2698492640_H
#ifndef FRAMERATESETTINGS_T3598747490_H
#define FRAMERATESETTINGS_T3598747490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FrameRateSettings
struct  FrameRateSettings_t3598747490  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRAMERATESETTINGS_T3598747490_H
#ifndef TEST_T650638785_H
#define TEST_T650638785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// test
struct  test_t650638785  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEST_T650638785_H
#ifndef TRACKABLEBEHAVIOUR_T1113559212_H
#define TRACKABLEBEHAVIOUR_T1113559212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour
struct  TrackableBehaviour_t1113559212  : public MonoBehaviour_t3962482529
{
public:
	// System.Double Vuforia.TrackableBehaviour::<TimeStamp>k__BackingField
	double ___U3CTimeStampU3Ek__BackingField_2;
	// System.String Vuforia.TrackableBehaviour::mTrackableName
	String_t* ___mTrackableName_3;
	// System.Boolean Vuforia.TrackableBehaviour::mPreserveChildSize
	bool ___mPreserveChildSize_4;
	// System.Boolean Vuforia.TrackableBehaviour::mInitializedInEditor
	bool ___mInitializedInEditor_5;
	// UnityEngine.Vector3 Vuforia.TrackableBehaviour::mPreviousScale
	Vector3_t3722313464  ___mPreviousScale_6;
	// Vuforia.TrackableBehaviour/Status Vuforia.TrackableBehaviour::mStatus
	int32_t ___mStatus_7;
	// Vuforia.Trackable Vuforia.TrackableBehaviour::mTrackable
	RuntimeObject* ___mTrackable_8;
	// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler> Vuforia.TrackableBehaviour::mTrackableEventHandlers
	List_1_t2968050330 * ___mTrackableEventHandlers_9;

public:
	inline static int32_t get_offset_of_U3CTimeStampU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___U3CTimeStampU3Ek__BackingField_2)); }
	inline double get_U3CTimeStampU3Ek__BackingField_2() const { return ___U3CTimeStampU3Ek__BackingField_2; }
	inline double* get_address_of_U3CTimeStampU3Ek__BackingField_2() { return &___U3CTimeStampU3Ek__BackingField_2; }
	inline void set_U3CTimeStampU3Ek__BackingField_2(double value)
	{
		___U3CTimeStampU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_mTrackableName_3() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackableName_3)); }
	inline String_t* get_mTrackableName_3() const { return ___mTrackableName_3; }
	inline String_t** get_address_of_mTrackableName_3() { return &___mTrackableName_3; }
	inline void set_mTrackableName_3(String_t* value)
	{
		___mTrackableName_3 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableName_3), value);
	}

	inline static int32_t get_offset_of_mPreserveChildSize_4() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mPreserveChildSize_4)); }
	inline bool get_mPreserveChildSize_4() const { return ___mPreserveChildSize_4; }
	inline bool* get_address_of_mPreserveChildSize_4() { return &___mPreserveChildSize_4; }
	inline void set_mPreserveChildSize_4(bool value)
	{
		___mPreserveChildSize_4 = value;
	}

	inline static int32_t get_offset_of_mInitializedInEditor_5() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mInitializedInEditor_5)); }
	inline bool get_mInitializedInEditor_5() const { return ___mInitializedInEditor_5; }
	inline bool* get_address_of_mInitializedInEditor_5() { return &___mInitializedInEditor_5; }
	inline void set_mInitializedInEditor_5(bool value)
	{
		___mInitializedInEditor_5 = value;
	}

	inline static int32_t get_offset_of_mPreviousScale_6() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mPreviousScale_6)); }
	inline Vector3_t3722313464  get_mPreviousScale_6() const { return ___mPreviousScale_6; }
	inline Vector3_t3722313464 * get_address_of_mPreviousScale_6() { return &___mPreviousScale_6; }
	inline void set_mPreviousScale_6(Vector3_t3722313464  value)
	{
		___mPreviousScale_6 = value;
	}

	inline static int32_t get_offset_of_mStatus_7() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mStatus_7)); }
	inline int32_t get_mStatus_7() const { return ___mStatus_7; }
	inline int32_t* get_address_of_mStatus_7() { return &___mStatus_7; }
	inline void set_mStatus_7(int32_t value)
	{
		___mStatus_7 = value;
	}

	inline static int32_t get_offset_of_mTrackable_8() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackable_8)); }
	inline RuntimeObject* get_mTrackable_8() const { return ___mTrackable_8; }
	inline RuntimeObject** get_address_of_mTrackable_8() { return &___mTrackable_8; }
	inline void set_mTrackable_8(RuntimeObject* value)
	{
		___mTrackable_8 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackable_8), value);
	}

	inline static int32_t get_offset_of_mTrackableEventHandlers_9() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackableEventHandlers_9)); }
	inline List_1_t2968050330 * get_mTrackableEventHandlers_9() const { return ___mTrackableEventHandlers_9; }
	inline List_1_t2968050330 ** get_address_of_mTrackableEventHandlers_9() { return &___mTrackableEventHandlers_9; }
	inline void set_mTrackableEventHandlers_9(List_1_t2968050330 * value)
	{
		___mTrackableEventHandlers_9 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableEventHandlers_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEBEHAVIOUR_T1113559212_H
#ifndef MENUOPTIONS_T1951716431_H
#define MENUOPTIONS_T1951716431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuOptions
struct  MenuOptions_t1951716431  : public MonoBehaviour_t3962482529
{
public:
	// CameraSettings MenuOptions::mCamSettings
	CameraSettings_t3152619780 * ___mCamSettings_2;
	// TrackableSettings MenuOptions::mTrackableSettings
	TrackableSettings_t2862243993 * ___mTrackableSettings_3;
	// MenuAnimator MenuOptions::mMenuAnim
	MenuAnimator_t2112910832 * ___mMenuAnim_4;

public:
	inline static int32_t get_offset_of_mCamSettings_2() { return static_cast<int32_t>(offsetof(MenuOptions_t1951716431, ___mCamSettings_2)); }
	inline CameraSettings_t3152619780 * get_mCamSettings_2() const { return ___mCamSettings_2; }
	inline CameraSettings_t3152619780 ** get_address_of_mCamSettings_2() { return &___mCamSettings_2; }
	inline void set_mCamSettings_2(CameraSettings_t3152619780 * value)
	{
		___mCamSettings_2 = value;
		Il2CppCodeGenWriteBarrier((&___mCamSettings_2), value);
	}

	inline static int32_t get_offset_of_mTrackableSettings_3() { return static_cast<int32_t>(offsetof(MenuOptions_t1951716431, ___mTrackableSettings_3)); }
	inline TrackableSettings_t2862243993 * get_mTrackableSettings_3() const { return ___mTrackableSettings_3; }
	inline TrackableSettings_t2862243993 ** get_address_of_mTrackableSettings_3() { return &___mTrackableSettings_3; }
	inline void set_mTrackableSettings_3(TrackableSettings_t2862243993 * value)
	{
		___mTrackableSettings_3 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableSettings_3), value);
	}

	inline static int32_t get_offset_of_mMenuAnim_4() { return static_cast<int32_t>(offsetof(MenuOptions_t1951716431, ___mMenuAnim_4)); }
	inline MenuAnimator_t2112910832 * get_mMenuAnim_4() const { return ___mMenuAnim_4; }
	inline MenuAnimator_t2112910832 ** get_address_of_mMenuAnim_4() { return &___mMenuAnim_4; }
	inline void set_mMenuAnim_4(MenuAnimator_t2112910832 * value)
	{
		___mMenuAnim_4 = value;
		Il2CppCodeGenWriteBarrier((&___mMenuAnim_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENUOPTIONS_T1951716431_H
#ifndef TEST1_T3743330310_H
#define TEST1_T3743330310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// test1
struct  test1_t3743330310  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.AudioClip test1::m_AudioClipen
	AudioClip_t3680889665 * ___m_AudioClipen_2;
	// UnityEngine.AudioClip test1::m_AudioCliphi
	AudioClip_t3680889665 * ___m_AudioCliphi_3;
	// UnityEngine.AudioSource test1::m_MyAudioSource
	AudioSource_t3935305588 * ___m_MyAudioSource_4;

public:
	inline static int32_t get_offset_of_m_AudioClipen_2() { return static_cast<int32_t>(offsetof(test1_t3743330310, ___m_AudioClipen_2)); }
	inline AudioClip_t3680889665 * get_m_AudioClipen_2() const { return ___m_AudioClipen_2; }
	inline AudioClip_t3680889665 ** get_address_of_m_AudioClipen_2() { return &___m_AudioClipen_2; }
	inline void set_m_AudioClipen_2(AudioClip_t3680889665 * value)
	{
		___m_AudioClipen_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_AudioClipen_2), value);
	}

	inline static int32_t get_offset_of_m_AudioCliphi_3() { return static_cast<int32_t>(offsetof(test1_t3743330310, ___m_AudioCliphi_3)); }
	inline AudioClip_t3680889665 * get_m_AudioCliphi_3() const { return ___m_AudioCliphi_3; }
	inline AudioClip_t3680889665 ** get_address_of_m_AudioCliphi_3() { return &___m_AudioCliphi_3; }
	inline void set_m_AudioCliphi_3(AudioClip_t3680889665 * value)
	{
		___m_AudioCliphi_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_AudioCliphi_3), value);
	}

	inline static int32_t get_offset_of_m_MyAudioSource_4() { return static_cast<int32_t>(offsetof(test1_t3743330310, ___m_MyAudioSource_4)); }
	inline AudioSource_t3935305588 * get_m_MyAudioSource_4() const { return ___m_MyAudioSource_4; }
	inline AudioSource_t3935305588 ** get_address_of_m_MyAudioSource_4() { return &___m_MyAudioSource_4; }
	inline void set_m_MyAudioSource_4(AudioSource_t3935305588 * value)
	{
		___m_MyAudioSource_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_MyAudioSource_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEST1_T3743330310_H
#ifndef MENUANIMATOR_T2112910832_H
#define MENUANIMATOR_T2112910832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuAnimator
struct  MenuAnimator_t2112910832  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Vector3 MenuAnimator::mVisiblePos
	Vector3_t3722313464  ___mVisiblePos_2;
	// UnityEngine.Vector3 MenuAnimator::mInvisiblePos
	Vector3_t3722313464  ___mInvisiblePos_3;
	// System.Single MenuAnimator::mVisibility
	float ___mVisibility_4;
	// System.Boolean MenuAnimator::mVisible
	bool ___mVisible_5;
	// UnityEngine.Canvas MenuAnimator::mCanvas
	Canvas_t3310196443 * ___mCanvas_6;
	// MenuOptions MenuAnimator::mMenuOptions
	MenuOptions_t1951716431 * ___mMenuOptions_7;
	// System.Single MenuAnimator::SlidingTime
	float ___SlidingTime_8;

public:
	inline static int32_t get_offset_of_mVisiblePos_2() { return static_cast<int32_t>(offsetof(MenuAnimator_t2112910832, ___mVisiblePos_2)); }
	inline Vector3_t3722313464  get_mVisiblePos_2() const { return ___mVisiblePos_2; }
	inline Vector3_t3722313464 * get_address_of_mVisiblePos_2() { return &___mVisiblePos_2; }
	inline void set_mVisiblePos_2(Vector3_t3722313464  value)
	{
		___mVisiblePos_2 = value;
	}

	inline static int32_t get_offset_of_mInvisiblePos_3() { return static_cast<int32_t>(offsetof(MenuAnimator_t2112910832, ___mInvisiblePos_3)); }
	inline Vector3_t3722313464  get_mInvisiblePos_3() const { return ___mInvisiblePos_3; }
	inline Vector3_t3722313464 * get_address_of_mInvisiblePos_3() { return &___mInvisiblePos_3; }
	inline void set_mInvisiblePos_3(Vector3_t3722313464  value)
	{
		___mInvisiblePos_3 = value;
	}

	inline static int32_t get_offset_of_mVisibility_4() { return static_cast<int32_t>(offsetof(MenuAnimator_t2112910832, ___mVisibility_4)); }
	inline float get_mVisibility_4() const { return ___mVisibility_4; }
	inline float* get_address_of_mVisibility_4() { return &___mVisibility_4; }
	inline void set_mVisibility_4(float value)
	{
		___mVisibility_4 = value;
	}

	inline static int32_t get_offset_of_mVisible_5() { return static_cast<int32_t>(offsetof(MenuAnimator_t2112910832, ___mVisible_5)); }
	inline bool get_mVisible_5() const { return ___mVisible_5; }
	inline bool* get_address_of_mVisible_5() { return &___mVisible_5; }
	inline void set_mVisible_5(bool value)
	{
		___mVisible_5 = value;
	}

	inline static int32_t get_offset_of_mCanvas_6() { return static_cast<int32_t>(offsetof(MenuAnimator_t2112910832, ___mCanvas_6)); }
	inline Canvas_t3310196443 * get_mCanvas_6() const { return ___mCanvas_6; }
	inline Canvas_t3310196443 ** get_address_of_mCanvas_6() { return &___mCanvas_6; }
	inline void set_mCanvas_6(Canvas_t3310196443 * value)
	{
		___mCanvas_6 = value;
		Il2CppCodeGenWriteBarrier((&___mCanvas_6), value);
	}

	inline static int32_t get_offset_of_mMenuOptions_7() { return static_cast<int32_t>(offsetof(MenuAnimator_t2112910832, ___mMenuOptions_7)); }
	inline MenuOptions_t1951716431 * get_mMenuOptions_7() const { return ___mMenuOptions_7; }
	inline MenuOptions_t1951716431 ** get_address_of_mMenuOptions_7() { return &___mMenuOptions_7; }
	inline void set_mMenuOptions_7(MenuOptions_t1951716431 * value)
	{
		___mMenuOptions_7 = value;
		Il2CppCodeGenWriteBarrier((&___mMenuOptions_7), value);
	}

	inline static int32_t get_offset_of_SlidingTime_8() { return static_cast<int32_t>(offsetof(MenuAnimator_t2112910832, ___SlidingTime_8)); }
	inline float get_SlidingTime_8() const { return ___SlidingTime_8; }
	inline float* get_address_of_SlidingTime_8() { return &___SlidingTime_8; }
	inline void set_SlidingTime_8(float value)
	{
		___SlidingTime_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENUANIMATOR_T2112910832_H
#ifndef LOCALIZATIONHELPER_T3735850664_H
#define LOCALIZATIONHELPER_T3735850664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LocalizationHelper
struct  LocalizationHelper_t3735850664  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Dropdown LocalizationHelper::dropDown
	Dropdown_t2274391225 * ___dropDown_2;
	// System.String[] LocalizationHelper::flags
	StringU5BU5D_t1281789340* ___flags_3;

public:
	inline static int32_t get_offset_of_dropDown_2() { return static_cast<int32_t>(offsetof(LocalizationHelper_t3735850664, ___dropDown_2)); }
	inline Dropdown_t2274391225 * get_dropDown_2() const { return ___dropDown_2; }
	inline Dropdown_t2274391225 ** get_address_of_dropDown_2() { return &___dropDown_2; }
	inline void set_dropDown_2(Dropdown_t2274391225 * value)
	{
		___dropDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___dropDown_2), value);
	}

	inline static int32_t get_offset_of_flags_3() { return static_cast<int32_t>(offsetof(LocalizationHelper_t3735850664, ___flags_3)); }
	inline StringU5BU5D_t1281789340* get_flags_3() const { return ___flags_3; }
	inline StringU5BU5D_t1281789340** get_address_of_flags_3() { return &___flags_3; }
	inline void set_flags_3(StringU5BU5D_t1281789340* value)
	{
		___flags_3 = value;
		Il2CppCodeGenWriteBarrier((&___flags_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALIZATIONHELPER_T3735850664_H
#ifndef DEFAULTINITIALIZATIONERRORHANDLER_T3109936861_H
#define DEFAULTINITIALIZATIONERRORHANDLER_T3109936861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultInitializationErrorHandler
struct  DefaultInitializationErrorHandler_t3109936861  : public MonoBehaviour_t3962482529
{
public:
	// System.String DefaultInitializationErrorHandler::mErrorText
	String_t* ___mErrorText_2;
	// System.Boolean DefaultInitializationErrorHandler::mErrorOccurred
	bool ___mErrorOccurred_3;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::bodyStyle
	GUIStyle_t3956901511 * ___bodyStyle_5;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::headerStyle
	GUIStyle_t3956901511 * ___headerStyle_6;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::footerStyle
	GUIStyle_t3956901511 * ___footerStyle_7;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::bodyTexture
	Texture2D_t3840446185 * ___bodyTexture_8;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::headerTexture
	Texture2D_t3840446185 * ___headerTexture_9;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::footerTexture
	Texture2D_t3840446185 * ___footerTexture_10;

public:
	inline static int32_t get_offset_of_mErrorText_2() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___mErrorText_2)); }
	inline String_t* get_mErrorText_2() const { return ___mErrorText_2; }
	inline String_t** get_address_of_mErrorText_2() { return &___mErrorText_2; }
	inline void set_mErrorText_2(String_t* value)
	{
		___mErrorText_2 = value;
		Il2CppCodeGenWriteBarrier((&___mErrorText_2), value);
	}

	inline static int32_t get_offset_of_mErrorOccurred_3() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___mErrorOccurred_3)); }
	inline bool get_mErrorOccurred_3() const { return ___mErrorOccurred_3; }
	inline bool* get_address_of_mErrorOccurred_3() { return &___mErrorOccurred_3; }
	inline void set_mErrorOccurred_3(bool value)
	{
		___mErrorOccurred_3 = value;
	}

	inline static int32_t get_offset_of_bodyStyle_5() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___bodyStyle_5)); }
	inline GUIStyle_t3956901511 * get_bodyStyle_5() const { return ___bodyStyle_5; }
	inline GUIStyle_t3956901511 ** get_address_of_bodyStyle_5() { return &___bodyStyle_5; }
	inline void set_bodyStyle_5(GUIStyle_t3956901511 * value)
	{
		___bodyStyle_5 = value;
		Il2CppCodeGenWriteBarrier((&___bodyStyle_5), value);
	}

	inline static int32_t get_offset_of_headerStyle_6() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___headerStyle_6)); }
	inline GUIStyle_t3956901511 * get_headerStyle_6() const { return ___headerStyle_6; }
	inline GUIStyle_t3956901511 ** get_address_of_headerStyle_6() { return &___headerStyle_6; }
	inline void set_headerStyle_6(GUIStyle_t3956901511 * value)
	{
		___headerStyle_6 = value;
		Il2CppCodeGenWriteBarrier((&___headerStyle_6), value);
	}

	inline static int32_t get_offset_of_footerStyle_7() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___footerStyle_7)); }
	inline GUIStyle_t3956901511 * get_footerStyle_7() const { return ___footerStyle_7; }
	inline GUIStyle_t3956901511 ** get_address_of_footerStyle_7() { return &___footerStyle_7; }
	inline void set_footerStyle_7(GUIStyle_t3956901511 * value)
	{
		___footerStyle_7 = value;
		Il2CppCodeGenWriteBarrier((&___footerStyle_7), value);
	}

	inline static int32_t get_offset_of_bodyTexture_8() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___bodyTexture_8)); }
	inline Texture2D_t3840446185 * get_bodyTexture_8() const { return ___bodyTexture_8; }
	inline Texture2D_t3840446185 ** get_address_of_bodyTexture_8() { return &___bodyTexture_8; }
	inline void set_bodyTexture_8(Texture2D_t3840446185 * value)
	{
		___bodyTexture_8 = value;
		Il2CppCodeGenWriteBarrier((&___bodyTexture_8), value);
	}

	inline static int32_t get_offset_of_headerTexture_9() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___headerTexture_9)); }
	inline Texture2D_t3840446185 * get_headerTexture_9() const { return ___headerTexture_9; }
	inline Texture2D_t3840446185 ** get_address_of_headerTexture_9() { return &___headerTexture_9; }
	inline void set_headerTexture_9(Texture2D_t3840446185 * value)
	{
		___headerTexture_9 = value;
		Il2CppCodeGenWriteBarrier((&___headerTexture_9), value);
	}

	inline static int32_t get_offset_of_footerTexture_10() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___footerTexture_10)); }
	inline Texture2D_t3840446185 * get_footerTexture_10() const { return ___footerTexture_10; }
	inline Texture2D_t3840446185 ** get_address_of_footerTexture_10() { return &___footerTexture_10; }
	inline void set_footerTexture_10(Texture2D_t3840446185 * value)
	{
		___footerTexture_10 = value;
		Il2CppCodeGenWriteBarrier((&___footerTexture_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTINITIALIZATIONERRORHANDLER_T3109936861_H
#ifndef DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#define DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultTrackableEventHandler
struct  DefaultTrackableEventHandler_t1588957063  : public MonoBehaviour_t3962482529
{
public:
	// Vuforia.TrackableBehaviour DefaultTrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t1113559212 * ___mTrackableBehaviour_2;

public:
	inline static int32_t get_offset_of_mTrackableBehaviour_2() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1588957063, ___mTrackableBehaviour_2)); }
	inline TrackableBehaviour_t1113559212 * get_mTrackableBehaviour_2() const { return ___mTrackableBehaviour_2; }
	inline TrackableBehaviour_t1113559212 ** get_address_of_mTrackableBehaviour_2() { return &___mTrackableBehaviour_2; }
	inline void set_mTrackableBehaviour_2(TrackableBehaviour_t1113559212 * value)
	{
		___mTrackableBehaviour_2 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableBehaviour_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#ifndef LOADINGSCREEN_T2154736699_H
#define LOADINGSCREEN_T2154736699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadingScreen
struct  LoadingScreen_t2154736699  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean LoadingScreen::mChangeLevel
	bool ___mChangeLevel_2;
	// UnityEngine.UI.RawImage LoadingScreen::mUISpinner
	RawImage_t3182918964 * ___mUISpinner_3;

public:
	inline static int32_t get_offset_of_mChangeLevel_2() { return static_cast<int32_t>(offsetof(LoadingScreen_t2154736699, ___mChangeLevel_2)); }
	inline bool get_mChangeLevel_2() const { return ___mChangeLevel_2; }
	inline bool* get_address_of_mChangeLevel_2() { return &___mChangeLevel_2; }
	inline void set_mChangeLevel_2(bool value)
	{
		___mChangeLevel_2 = value;
	}

	inline static int32_t get_offset_of_mUISpinner_3() { return static_cast<int32_t>(offsetof(LoadingScreen_t2154736699, ___mUISpinner_3)); }
	inline RawImage_t3182918964 * get_mUISpinner_3() const { return ___mUISpinner_3; }
	inline RawImage_t3182918964 ** get_address_of_mUISpinner_3() { return &___mUISpinner_3; }
	inline void set_mUISpinner_3(RawImage_t3182918964 * value)
	{
		___mUISpinner_3 = value;
		Il2CppCodeGenWriteBarrier((&___mUISpinner_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADINGSCREEN_T2154736699_H
#ifndef MENUSTART_T2290326516_H
#define MENUSTART_T2290326516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// menuStart
struct  menuStart_t2290326516  : public LocalizationHelper_t3735850664
{
public:
	// UnityEngine.GameObject menuStart::dropdown
	GameObject_t1113636619 * ___dropdown_4;

public:
	inline static int32_t get_offset_of_dropdown_4() { return static_cast<int32_t>(offsetof(menuStart_t2290326516, ___dropdown_4)); }
	inline GameObject_t1113636619 * get_dropdown_4() const { return ___dropdown_4; }
	inline GameObject_t1113636619 ** get_address_of_dropdown_4() { return &___dropdown_4; }
	inline void set_dropdown_4(GameObject_t1113636619 * value)
	{
		___dropdown_4 = value;
		Il2CppCodeGenWriteBarrier((&___dropdown_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENUSTART_T2290326516_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t2598313366 * ___m_CanvasRender_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_4)); }
	inline Material_t340375123 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t340375123 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t340375123 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_5)); }
	inline Color_t2555686324  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t2555686324 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t2555686324  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_7)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRender_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRender_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRender_8() const { return ___m_CanvasRender_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRender_8() { return &___m_CanvasRender_8; }
	inline void set_m_CanvasRender_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRender_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_9)); }
	inline Canvas_t3310196443 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3310196443 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t340375123 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t340375123 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t3648964284 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t3648964284 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef DATASETTRACKABLEBEHAVIOUR_T3430730379_H
#define DATASETTRACKABLEBEHAVIOUR_T3430730379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DataSetTrackableBehaviour
struct  DataSetTrackableBehaviour_t3430730379  : public TrackableBehaviour_t1113559212
{
public:
	// System.String Vuforia.DataSetTrackableBehaviour::mDataSetPath
	String_t* ___mDataSetPath_10;
	// System.Boolean Vuforia.DataSetTrackableBehaviour::mExtendedTracking
	bool ___mExtendedTracking_11;

public:
	inline static int32_t get_offset_of_mDataSetPath_10() { return static_cast<int32_t>(offsetof(DataSetTrackableBehaviour_t3430730379, ___mDataSetPath_10)); }
	inline String_t* get_mDataSetPath_10() const { return ___mDataSetPath_10; }
	inline String_t** get_address_of_mDataSetPath_10() { return &___mDataSetPath_10; }
	inline void set_mDataSetPath_10(String_t* value)
	{
		___mDataSetPath_10 = value;
		Il2CppCodeGenWriteBarrier((&___mDataSetPath_10), value);
	}

	inline static int32_t get_offset_of_mExtendedTracking_11() { return static_cast<int32_t>(offsetof(DataSetTrackableBehaviour_t3430730379, ___mExtendedTracking_11)); }
	inline bool get_mExtendedTracking_11() const { return ___mExtendedTracking_11; }
	inline bool* get_address_of_mExtendedTracking_11() { return &___mExtendedTracking_11; }
	inline void set_mExtendedTracking_11(bool value)
	{
		___mExtendedTracking_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASETTRACKABLEBEHAVIOUR_T3430730379_H
#ifndef SELECTABLE_T3250028441_H
#define SELECTABLE_T3250028441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_t3250028441  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t3049316579  ___m_Navigation_3;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_4;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t2139031574  ___m_Colors_5;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t1362986479  ___m_SpriteState_6;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t2532145056 * ___m_AnimationTriggers_7;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_8;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t1660335611 * ___m_TargetGraphic_9;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_10;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_11;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_12;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_13;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_14;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t1260619206 * ___m_CanvasGroupCache_15;

public:
	inline static int32_t get_offset_of_m_Navigation_3() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Navigation_3)); }
	inline Navigation_t3049316579  get_m_Navigation_3() const { return ___m_Navigation_3; }
	inline Navigation_t3049316579 * get_address_of_m_Navigation_3() { return &___m_Navigation_3; }
	inline void set_m_Navigation_3(Navigation_t3049316579  value)
	{
		___m_Navigation_3 = value;
	}

	inline static int32_t get_offset_of_m_Transition_4() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Transition_4)); }
	inline int32_t get_m_Transition_4() const { return ___m_Transition_4; }
	inline int32_t* get_address_of_m_Transition_4() { return &___m_Transition_4; }
	inline void set_m_Transition_4(int32_t value)
	{
		___m_Transition_4 = value;
	}

	inline static int32_t get_offset_of_m_Colors_5() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Colors_5)); }
	inline ColorBlock_t2139031574  get_m_Colors_5() const { return ___m_Colors_5; }
	inline ColorBlock_t2139031574 * get_address_of_m_Colors_5() { return &___m_Colors_5; }
	inline void set_m_Colors_5(ColorBlock_t2139031574  value)
	{
		___m_Colors_5 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_6() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_SpriteState_6)); }
	inline SpriteState_t1362986479  get_m_SpriteState_6() const { return ___m_SpriteState_6; }
	inline SpriteState_t1362986479 * get_address_of_m_SpriteState_6() { return &___m_SpriteState_6; }
	inline void set_m_SpriteState_6(SpriteState_t1362986479  value)
	{
		___m_SpriteState_6 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_7() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_AnimationTriggers_7)); }
	inline AnimationTriggers_t2532145056 * get_m_AnimationTriggers_7() const { return ___m_AnimationTriggers_7; }
	inline AnimationTriggers_t2532145056 ** get_address_of_m_AnimationTriggers_7() { return &___m_AnimationTriggers_7; }
	inline void set_m_AnimationTriggers_7(AnimationTriggers_t2532145056 * value)
	{
		___m_AnimationTriggers_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_7), value);
	}

	inline static int32_t get_offset_of_m_Interactable_8() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Interactable_8)); }
	inline bool get_m_Interactable_8() const { return ___m_Interactable_8; }
	inline bool* get_address_of_m_Interactable_8() { return &___m_Interactable_8; }
	inline void set_m_Interactable_8(bool value)
	{
		___m_Interactable_8 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_9() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_TargetGraphic_9)); }
	inline Graphic_t1660335611 * get_m_TargetGraphic_9() const { return ___m_TargetGraphic_9; }
	inline Graphic_t1660335611 ** get_address_of_m_TargetGraphic_9() { return &___m_TargetGraphic_9; }
	inline void set_m_TargetGraphic_9(Graphic_t1660335611 * value)
	{
		___m_TargetGraphic_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_9), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_10() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_GroupsAllowInteraction_10)); }
	inline bool get_m_GroupsAllowInteraction_10() const { return ___m_GroupsAllowInteraction_10; }
	inline bool* get_address_of_m_GroupsAllowInteraction_10() { return &___m_GroupsAllowInteraction_10; }
	inline void set_m_GroupsAllowInteraction_10(bool value)
	{
		___m_GroupsAllowInteraction_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_11() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CurrentSelectionState_11)); }
	inline int32_t get_m_CurrentSelectionState_11() const { return ___m_CurrentSelectionState_11; }
	inline int32_t* get_address_of_m_CurrentSelectionState_11() { return &___m_CurrentSelectionState_11; }
	inline void set_m_CurrentSelectionState_11(int32_t value)
	{
		___m_CurrentSelectionState_11 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerInsideU3Ek__BackingField_12)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_12() const { return ___U3CisPointerInsideU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_12() { return &___U3CisPointerInsideU3Ek__BackingField_12; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_12(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerDownU3Ek__BackingField_13)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_13() const { return ___U3CisPointerDownU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_13() { return &___U3CisPointerDownU3Ek__BackingField_13; }
	inline void set_U3CisPointerDownU3Ek__BackingField_13(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3ChasSelectionU3Ek__BackingField_14)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_14() const { return ___U3ChasSelectionU3Ek__BackingField_14; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_14() { return &___U3ChasSelectionU3Ek__BackingField_14; }
	inline void set_U3ChasSelectionU3Ek__BackingField_14(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_15() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CanvasGroupCache_15)); }
	inline List_1_t1260619206 * get_m_CanvasGroupCache_15() const { return ___m_CanvasGroupCache_15; }
	inline List_1_t1260619206 ** get_address_of_m_CanvasGroupCache_15() { return &___m_CanvasGroupCache_15; }
	inline void set_m_CanvasGroupCache_15(List_1_t1260619206 * value)
	{
		___m_CanvasGroupCache_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_15), value);
	}
};

struct Selectable_t3250028441_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t427135887 * ___s_List_2;

public:
	inline static int32_t get_offset_of_s_List_2() { return static_cast<int32_t>(offsetof(Selectable_t3250028441_StaticFields, ___s_List_2)); }
	inline List_1_t427135887 * get_s_List_2() const { return ___s_List_2; }
	inline List_1_t427135887 ** get_address_of_s_List_2() { return &___s_List_2; }
	inline void set_s_List_2(List_1_t427135887 * value)
	{
		___s_List_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_T3250028441_H
#ifndef MULTITARGETBEHAVIOUR_T2061511750_H
#define MULTITARGETBEHAVIOUR_T2061511750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.MultiTargetBehaviour
struct  MultiTargetBehaviour_t2061511750  : public DataSetTrackableBehaviour_t3430730379
{
public:
	// Vuforia.MultiTarget Vuforia.MultiTargetBehaviour::mMultiTarget
	RuntimeObject* ___mMultiTarget_12;

public:
	inline static int32_t get_offset_of_mMultiTarget_12() { return static_cast<int32_t>(offsetof(MultiTargetBehaviour_t2061511750, ___mMultiTarget_12)); }
	inline RuntimeObject* get_mMultiTarget_12() const { return ___mMultiTarget_12; }
	inline RuntimeObject** get_address_of_mMultiTarget_12() { return &___mMultiTarget_12; }
	inline void set_mMultiTarget_12(RuntimeObject* value)
	{
		___mMultiTarget_12 = value;
		Il2CppCodeGenWriteBarrier((&___mMultiTarget_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTITARGETBEHAVIOUR_T2061511750_H
#ifndef VUMARKBEHAVIOUR_T1178230459_H
#define VUMARKBEHAVIOUR_T1178230459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuMarkBehaviour
struct  VuMarkBehaviour_t1178230459  : public DataSetTrackableBehaviour_t3430730379
{
public:
	// System.Single Vuforia.VuMarkBehaviour::mAspectRatio
	float ___mAspectRatio_12;
	// System.Single Vuforia.VuMarkBehaviour::mWidth
	float ___mWidth_13;
	// System.Single Vuforia.VuMarkBehaviour::mHeight
	float ___mHeight_14;
	// System.String Vuforia.VuMarkBehaviour::mPreviewImage
	String_t* ___mPreviewImage_15;
	// Vuforia.InstanceIdType Vuforia.VuMarkBehaviour::mIdType
	int32_t ___mIdType_16;
	// System.Int32 Vuforia.VuMarkBehaviour::mIdLength
	int32_t ___mIdLength_17;
	// UnityEngine.Rect Vuforia.VuMarkBehaviour::mBoundingBox
	Rect_t2360479859  ___mBoundingBox_18;
	// UnityEngine.Vector2 Vuforia.VuMarkBehaviour::mOrigin
	Vector2_t2156229523  ___mOrigin_19;
	// System.Boolean Vuforia.VuMarkBehaviour::mTrackingFromRuntimeAppearance
	bool ___mTrackingFromRuntimeAppearance_20;
	// Vuforia.VuMarkTemplate Vuforia.VuMarkBehaviour::mVuMarkTemplate
	RuntimeObject* ___mVuMarkTemplate_21;
	// Vuforia.VuMarkTarget Vuforia.VuMarkBehaviour::mVuMarkTarget
	RuntimeObject* ___mVuMarkTarget_22;
	// System.Int32 Vuforia.VuMarkBehaviour::mVuMarkResultId
	int32_t ___mVuMarkResultId_23;
	// System.Action Vuforia.VuMarkBehaviour::mOnTargetAssigned
	Action_t1264377477 * ___mOnTargetAssigned_24;
	// System.Action Vuforia.VuMarkBehaviour::mOnTargetLost
	Action_t1264377477 * ___mOnTargetLost_25;
	// System.Single Vuforia.VuMarkBehaviour::mLastTransformScale
	float ___mLastTransformScale_26;
	// UnityEngine.Vector2 Vuforia.VuMarkBehaviour::mLastSize
	Vector2_t2156229523  ___mLastSize_27;

public:
	inline static int32_t get_offset_of_mAspectRatio_12() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mAspectRatio_12)); }
	inline float get_mAspectRatio_12() const { return ___mAspectRatio_12; }
	inline float* get_address_of_mAspectRatio_12() { return &___mAspectRatio_12; }
	inline void set_mAspectRatio_12(float value)
	{
		___mAspectRatio_12 = value;
	}

	inline static int32_t get_offset_of_mWidth_13() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mWidth_13)); }
	inline float get_mWidth_13() const { return ___mWidth_13; }
	inline float* get_address_of_mWidth_13() { return &___mWidth_13; }
	inline void set_mWidth_13(float value)
	{
		___mWidth_13 = value;
	}

	inline static int32_t get_offset_of_mHeight_14() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mHeight_14)); }
	inline float get_mHeight_14() const { return ___mHeight_14; }
	inline float* get_address_of_mHeight_14() { return &___mHeight_14; }
	inline void set_mHeight_14(float value)
	{
		___mHeight_14 = value;
	}

	inline static int32_t get_offset_of_mPreviewImage_15() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mPreviewImage_15)); }
	inline String_t* get_mPreviewImage_15() const { return ___mPreviewImage_15; }
	inline String_t** get_address_of_mPreviewImage_15() { return &___mPreviewImage_15; }
	inline void set_mPreviewImage_15(String_t* value)
	{
		___mPreviewImage_15 = value;
		Il2CppCodeGenWriteBarrier((&___mPreviewImage_15), value);
	}

	inline static int32_t get_offset_of_mIdType_16() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mIdType_16)); }
	inline int32_t get_mIdType_16() const { return ___mIdType_16; }
	inline int32_t* get_address_of_mIdType_16() { return &___mIdType_16; }
	inline void set_mIdType_16(int32_t value)
	{
		___mIdType_16 = value;
	}

	inline static int32_t get_offset_of_mIdLength_17() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mIdLength_17)); }
	inline int32_t get_mIdLength_17() const { return ___mIdLength_17; }
	inline int32_t* get_address_of_mIdLength_17() { return &___mIdLength_17; }
	inline void set_mIdLength_17(int32_t value)
	{
		___mIdLength_17 = value;
	}

	inline static int32_t get_offset_of_mBoundingBox_18() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mBoundingBox_18)); }
	inline Rect_t2360479859  get_mBoundingBox_18() const { return ___mBoundingBox_18; }
	inline Rect_t2360479859 * get_address_of_mBoundingBox_18() { return &___mBoundingBox_18; }
	inline void set_mBoundingBox_18(Rect_t2360479859  value)
	{
		___mBoundingBox_18 = value;
	}

	inline static int32_t get_offset_of_mOrigin_19() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mOrigin_19)); }
	inline Vector2_t2156229523  get_mOrigin_19() const { return ___mOrigin_19; }
	inline Vector2_t2156229523 * get_address_of_mOrigin_19() { return &___mOrigin_19; }
	inline void set_mOrigin_19(Vector2_t2156229523  value)
	{
		___mOrigin_19 = value;
	}

	inline static int32_t get_offset_of_mTrackingFromRuntimeAppearance_20() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mTrackingFromRuntimeAppearance_20)); }
	inline bool get_mTrackingFromRuntimeAppearance_20() const { return ___mTrackingFromRuntimeAppearance_20; }
	inline bool* get_address_of_mTrackingFromRuntimeAppearance_20() { return &___mTrackingFromRuntimeAppearance_20; }
	inline void set_mTrackingFromRuntimeAppearance_20(bool value)
	{
		___mTrackingFromRuntimeAppearance_20 = value;
	}

	inline static int32_t get_offset_of_mVuMarkTemplate_21() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mVuMarkTemplate_21)); }
	inline RuntimeObject* get_mVuMarkTemplate_21() const { return ___mVuMarkTemplate_21; }
	inline RuntimeObject** get_address_of_mVuMarkTemplate_21() { return &___mVuMarkTemplate_21; }
	inline void set_mVuMarkTemplate_21(RuntimeObject* value)
	{
		___mVuMarkTemplate_21 = value;
		Il2CppCodeGenWriteBarrier((&___mVuMarkTemplate_21), value);
	}

	inline static int32_t get_offset_of_mVuMarkTarget_22() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mVuMarkTarget_22)); }
	inline RuntimeObject* get_mVuMarkTarget_22() const { return ___mVuMarkTarget_22; }
	inline RuntimeObject** get_address_of_mVuMarkTarget_22() { return &___mVuMarkTarget_22; }
	inline void set_mVuMarkTarget_22(RuntimeObject* value)
	{
		___mVuMarkTarget_22 = value;
		Il2CppCodeGenWriteBarrier((&___mVuMarkTarget_22), value);
	}

	inline static int32_t get_offset_of_mVuMarkResultId_23() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mVuMarkResultId_23)); }
	inline int32_t get_mVuMarkResultId_23() const { return ___mVuMarkResultId_23; }
	inline int32_t* get_address_of_mVuMarkResultId_23() { return &___mVuMarkResultId_23; }
	inline void set_mVuMarkResultId_23(int32_t value)
	{
		___mVuMarkResultId_23 = value;
	}

	inline static int32_t get_offset_of_mOnTargetAssigned_24() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mOnTargetAssigned_24)); }
	inline Action_t1264377477 * get_mOnTargetAssigned_24() const { return ___mOnTargetAssigned_24; }
	inline Action_t1264377477 ** get_address_of_mOnTargetAssigned_24() { return &___mOnTargetAssigned_24; }
	inline void set_mOnTargetAssigned_24(Action_t1264377477 * value)
	{
		___mOnTargetAssigned_24 = value;
		Il2CppCodeGenWriteBarrier((&___mOnTargetAssigned_24), value);
	}

	inline static int32_t get_offset_of_mOnTargetLost_25() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mOnTargetLost_25)); }
	inline Action_t1264377477 * get_mOnTargetLost_25() const { return ___mOnTargetLost_25; }
	inline Action_t1264377477 ** get_address_of_mOnTargetLost_25() { return &___mOnTargetLost_25; }
	inline void set_mOnTargetLost_25(Action_t1264377477 * value)
	{
		___mOnTargetLost_25 = value;
		Il2CppCodeGenWriteBarrier((&___mOnTargetLost_25), value);
	}

	inline static int32_t get_offset_of_mLastTransformScale_26() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mLastTransformScale_26)); }
	inline float get_mLastTransformScale_26() const { return ___mLastTransformScale_26; }
	inline float* get_address_of_mLastTransformScale_26() { return &___mLastTransformScale_26; }
	inline void set_mLastTransformScale_26(float value)
	{
		___mLastTransformScale_26 = value;
	}

	inline static int32_t get_offset_of_mLastSize_27() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mLastSize_27)); }
	inline Vector2_t2156229523  get_mLastSize_27() const { return ___mLastSize_27; }
	inline Vector2_t2156229523 * get_address_of_mLastSize_27() { return &___mLastSize_27; }
	inline void set_mLastSize_27(Vector2_t2156229523  value)
	{
		___mLastSize_27 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUMARKBEHAVIOUR_T1178230459_H
#ifndef OBJECTTARGETBEHAVIOUR_T728125005_H
#define OBJECTTARGETBEHAVIOUR_T728125005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ObjectTargetBehaviour
struct  ObjectTargetBehaviour_t728125005  : public DataSetTrackableBehaviour_t3430730379
{
public:
	// Vuforia.ObjectTarget Vuforia.ObjectTargetBehaviour::mObjectTarget
	RuntimeObject* ___mObjectTarget_12;
	// System.Single Vuforia.ObjectTargetBehaviour::mAspectRatioXY
	float ___mAspectRatioXY_13;
	// System.Single Vuforia.ObjectTargetBehaviour::mAspectRatioXZ
	float ___mAspectRatioXZ_14;
	// System.Boolean Vuforia.ObjectTargetBehaviour::mShowBoundingBox
	bool ___mShowBoundingBox_15;
	// UnityEngine.Vector3 Vuforia.ObjectTargetBehaviour::mBBoxMin
	Vector3_t3722313464  ___mBBoxMin_16;
	// UnityEngine.Vector3 Vuforia.ObjectTargetBehaviour::mBBoxMax
	Vector3_t3722313464  ___mBBoxMax_17;
	// UnityEngine.Texture2D Vuforia.ObjectTargetBehaviour::mPreviewImage
	Texture2D_t3840446185 * ___mPreviewImage_18;
	// System.Single Vuforia.ObjectTargetBehaviour::mLength
	float ___mLength_19;
	// System.Single Vuforia.ObjectTargetBehaviour::mWidth
	float ___mWidth_20;
	// System.Single Vuforia.ObjectTargetBehaviour::mHeight
	float ___mHeight_21;
	// System.Single Vuforia.ObjectTargetBehaviour::mLastTransformScale
	float ___mLastTransformScale_22;
	// UnityEngine.Vector3 Vuforia.ObjectTargetBehaviour::mLastSize
	Vector3_t3722313464  ___mLastSize_23;

public:
	inline static int32_t get_offset_of_mObjectTarget_12() { return static_cast<int32_t>(offsetof(ObjectTargetBehaviour_t728125005, ___mObjectTarget_12)); }
	inline RuntimeObject* get_mObjectTarget_12() const { return ___mObjectTarget_12; }
	inline RuntimeObject** get_address_of_mObjectTarget_12() { return &___mObjectTarget_12; }
	inline void set_mObjectTarget_12(RuntimeObject* value)
	{
		___mObjectTarget_12 = value;
		Il2CppCodeGenWriteBarrier((&___mObjectTarget_12), value);
	}

	inline static int32_t get_offset_of_mAspectRatioXY_13() { return static_cast<int32_t>(offsetof(ObjectTargetBehaviour_t728125005, ___mAspectRatioXY_13)); }
	inline float get_mAspectRatioXY_13() const { return ___mAspectRatioXY_13; }
	inline float* get_address_of_mAspectRatioXY_13() { return &___mAspectRatioXY_13; }
	inline void set_mAspectRatioXY_13(float value)
	{
		___mAspectRatioXY_13 = value;
	}

	inline static int32_t get_offset_of_mAspectRatioXZ_14() { return static_cast<int32_t>(offsetof(ObjectTargetBehaviour_t728125005, ___mAspectRatioXZ_14)); }
	inline float get_mAspectRatioXZ_14() const { return ___mAspectRatioXZ_14; }
	inline float* get_address_of_mAspectRatioXZ_14() { return &___mAspectRatioXZ_14; }
	inline void set_mAspectRatioXZ_14(float value)
	{
		___mAspectRatioXZ_14 = value;
	}

	inline static int32_t get_offset_of_mShowBoundingBox_15() { return static_cast<int32_t>(offsetof(ObjectTargetBehaviour_t728125005, ___mShowBoundingBox_15)); }
	inline bool get_mShowBoundingBox_15() const { return ___mShowBoundingBox_15; }
	inline bool* get_address_of_mShowBoundingBox_15() { return &___mShowBoundingBox_15; }
	inline void set_mShowBoundingBox_15(bool value)
	{
		___mShowBoundingBox_15 = value;
	}

	inline static int32_t get_offset_of_mBBoxMin_16() { return static_cast<int32_t>(offsetof(ObjectTargetBehaviour_t728125005, ___mBBoxMin_16)); }
	inline Vector3_t3722313464  get_mBBoxMin_16() const { return ___mBBoxMin_16; }
	inline Vector3_t3722313464 * get_address_of_mBBoxMin_16() { return &___mBBoxMin_16; }
	inline void set_mBBoxMin_16(Vector3_t3722313464  value)
	{
		___mBBoxMin_16 = value;
	}

	inline static int32_t get_offset_of_mBBoxMax_17() { return static_cast<int32_t>(offsetof(ObjectTargetBehaviour_t728125005, ___mBBoxMax_17)); }
	inline Vector3_t3722313464  get_mBBoxMax_17() const { return ___mBBoxMax_17; }
	inline Vector3_t3722313464 * get_address_of_mBBoxMax_17() { return &___mBBoxMax_17; }
	inline void set_mBBoxMax_17(Vector3_t3722313464  value)
	{
		___mBBoxMax_17 = value;
	}

	inline static int32_t get_offset_of_mPreviewImage_18() { return static_cast<int32_t>(offsetof(ObjectTargetBehaviour_t728125005, ___mPreviewImage_18)); }
	inline Texture2D_t3840446185 * get_mPreviewImage_18() const { return ___mPreviewImage_18; }
	inline Texture2D_t3840446185 ** get_address_of_mPreviewImage_18() { return &___mPreviewImage_18; }
	inline void set_mPreviewImage_18(Texture2D_t3840446185 * value)
	{
		___mPreviewImage_18 = value;
		Il2CppCodeGenWriteBarrier((&___mPreviewImage_18), value);
	}

	inline static int32_t get_offset_of_mLength_19() { return static_cast<int32_t>(offsetof(ObjectTargetBehaviour_t728125005, ___mLength_19)); }
	inline float get_mLength_19() const { return ___mLength_19; }
	inline float* get_address_of_mLength_19() { return &___mLength_19; }
	inline void set_mLength_19(float value)
	{
		___mLength_19 = value;
	}

	inline static int32_t get_offset_of_mWidth_20() { return static_cast<int32_t>(offsetof(ObjectTargetBehaviour_t728125005, ___mWidth_20)); }
	inline float get_mWidth_20() const { return ___mWidth_20; }
	inline float* get_address_of_mWidth_20() { return &___mWidth_20; }
	inline void set_mWidth_20(float value)
	{
		___mWidth_20 = value;
	}

	inline static int32_t get_offset_of_mHeight_21() { return static_cast<int32_t>(offsetof(ObjectTargetBehaviour_t728125005, ___mHeight_21)); }
	inline float get_mHeight_21() const { return ___mHeight_21; }
	inline float* get_address_of_mHeight_21() { return &___mHeight_21; }
	inline void set_mHeight_21(float value)
	{
		___mHeight_21 = value;
	}

	inline static int32_t get_offset_of_mLastTransformScale_22() { return static_cast<int32_t>(offsetof(ObjectTargetBehaviour_t728125005, ___mLastTransformScale_22)); }
	inline float get_mLastTransformScale_22() const { return ___mLastTransformScale_22; }
	inline float* get_address_of_mLastTransformScale_22() { return &___mLastTransformScale_22; }
	inline void set_mLastTransformScale_22(float value)
	{
		___mLastTransformScale_22 = value;
	}

	inline static int32_t get_offset_of_mLastSize_23() { return static_cast<int32_t>(offsetof(ObjectTargetBehaviour_t728125005, ___mLastSize_23)); }
	inline Vector3_t3722313464  get_mLastSize_23() const { return ___mLastSize_23; }
	inline Vector3_t3722313464 * get_address_of_mLastSize_23() { return &___mLastSize_23; }
	inline void set_mLastSize_23(Vector3_t3722313464  value)
	{
		___mLastSize_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTTARGETBEHAVIOUR_T728125005_H
#ifndef TOGGLE_T2735377061_H
#define TOGGLE_T2735377061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Toggle
struct  Toggle_t2735377061  : public Selectable_t3250028441
{
public:
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_16;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_t1660335611 * ___graphic_17;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_t123837990 * ___m_Group_18;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t1873685584 * ___onValueChanged_19;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_20;

public:
	inline static int32_t get_offset_of_toggleTransition_16() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___toggleTransition_16)); }
	inline int32_t get_toggleTransition_16() const { return ___toggleTransition_16; }
	inline int32_t* get_address_of_toggleTransition_16() { return &___toggleTransition_16; }
	inline void set_toggleTransition_16(int32_t value)
	{
		___toggleTransition_16 = value;
	}

	inline static int32_t get_offset_of_graphic_17() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___graphic_17)); }
	inline Graphic_t1660335611 * get_graphic_17() const { return ___graphic_17; }
	inline Graphic_t1660335611 ** get_address_of_graphic_17() { return &___graphic_17; }
	inline void set_graphic_17(Graphic_t1660335611 * value)
	{
		___graphic_17 = value;
		Il2CppCodeGenWriteBarrier((&___graphic_17), value);
	}

	inline static int32_t get_offset_of_m_Group_18() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___m_Group_18)); }
	inline ToggleGroup_t123837990 * get_m_Group_18() const { return ___m_Group_18; }
	inline ToggleGroup_t123837990 ** get_address_of_m_Group_18() { return &___m_Group_18; }
	inline void set_m_Group_18(ToggleGroup_t123837990 * value)
	{
		___m_Group_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_Group_18), value);
	}

	inline static int32_t get_offset_of_onValueChanged_19() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___onValueChanged_19)); }
	inline ToggleEvent_t1873685584 * get_onValueChanged_19() const { return ___onValueChanged_19; }
	inline ToggleEvent_t1873685584 ** get_address_of_onValueChanged_19() { return &___onValueChanged_19; }
	inline void set_onValueChanged_19(ToggleEvent_t1873685584 * value)
	{
		___onValueChanged_19 = value;
		Il2CppCodeGenWriteBarrier((&___onValueChanged_19), value);
	}

	inline static int32_t get_offset_of_m_IsOn_20() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___m_IsOn_20)); }
	inline bool get_m_IsOn_20() const { return ___m_IsOn_20; }
	inline bool* get_address_of_m_IsOn_20() { return &___m_IsOn_20; }
	inline void set_m_IsOn_20(bool value)
	{
		___m_IsOn_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOGGLE_T2735377061_H
#ifndef DROPDOWN_T2274391225_H
#define DROPDOWN_T2274391225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Dropdown
struct  Dropdown_t2274391225  : public Selectable_t3250028441
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t3704657025 * ___m_Template_16;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_t1901882714 * ___m_CaptionText_17;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_t2670269651 * ___m_CaptionImage_18;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_t1901882714 * ___m_ItemText_19;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_t2670269651 * ___m_ItemImage_20;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_21;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t1438173104 * ___m_Options_22;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_t4040729994 * ___m_OnValueChanged_23;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_t1113636619 * ___m_Dropdown_24;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_t1113636619 * ___m_Blocker_25;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t2924027637 * ___m_Items_26;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t3520241082 * ___m_AlphaTweenRunner_27;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_28;

public:
	inline static int32_t get_offset_of_m_Template_16() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_Template_16)); }
	inline RectTransform_t3704657025 * get_m_Template_16() const { return ___m_Template_16; }
	inline RectTransform_t3704657025 ** get_address_of_m_Template_16() { return &___m_Template_16; }
	inline void set_m_Template_16(RectTransform_t3704657025 * value)
	{
		___m_Template_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_Template_16), value);
	}

	inline static int32_t get_offset_of_m_CaptionText_17() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_CaptionText_17)); }
	inline Text_t1901882714 * get_m_CaptionText_17() const { return ___m_CaptionText_17; }
	inline Text_t1901882714 ** get_address_of_m_CaptionText_17() { return &___m_CaptionText_17; }
	inline void set_m_CaptionText_17(Text_t1901882714 * value)
	{
		___m_CaptionText_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_CaptionText_17), value);
	}

	inline static int32_t get_offset_of_m_CaptionImage_18() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_CaptionImage_18)); }
	inline Image_t2670269651 * get_m_CaptionImage_18() const { return ___m_CaptionImage_18; }
	inline Image_t2670269651 ** get_address_of_m_CaptionImage_18() { return &___m_CaptionImage_18; }
	inline void set_m_CaptionImage_18(Image_t2670269651 * value)
	{
		___m_CaptionImage_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_CaptionImage_18), value);
	}

	inline static int32_t get_offset_of_m_ItemText_19() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_ItemText_19)); }
	inline Text_t1901882714 * get_m_ItemText_19() const { return ___m_ItemText_19; }
	inline Text_t1901882714 ** get_address_of_m_ItemText_19() { return &___m_ItemText_19; }
	inline void set_m_ItemText_19(Text_t1901882714 * value)
	{
		___m_ItemText_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemText_19), value);
	}

	inline static int32_t get_offset_of_m_ItemImage_20() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_ItemImage_20)); }
	inline Image_t2670269651 * get_m_ItemImage_20() const { return ___m_ItemImage_20; }
	inline Image_t2670269651 ** get_address_of_m_ItemImage_20() { return &___m_ItemImage_20; }
	inline void set_m_ItemImage_20(Image_t2670269651 * value)
	{
		___m_ItemImage_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemImage_20), value);
	}

	inline static int32_t get_offset_of_m_Value_21() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_Value_21)); }
	inline int32_t get_m_Value_21() const { return ___m_Value_21; }
	inline int32_t* get_address_of_m_Value_21() { return &___m_Value_21; }
	inline void set_m_Value_21(int32_t value)
	{
		___m_Value_21 = value;
	}

	inline static int32_t get_offset_of_m_Options_22() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_Options_22)); }
	inline OptionDataList_t1438173104 * get_m_Options_22() const { return ___m_Options_22; }
	inline OptionDataList_t1438173104 ** get_address_of_m_Options_22() { return &___m_Options_22; }
	inline void set_m_Options_22(OptionDataList_t1438173104 * value)
	{
		___m_Options_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_Options_22), value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_23() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_OnValueChanged_23)); }
	inline DropdownEvent_t4040729994 * get_m_OnValueChanged_23() const { return ___m_OnValueChanged_23; }
	inline DropdownEvent_t4040729994 ** get_address_of_m_OnValueChanged_23() { return &___m_OnValueChanged_23; }
	inline void set_m_OnValueChanged_23(DropdownEvent_t4040729994 * value)
	{
		___m_OnValueChanged_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValueChanged_23), value);
	}

	inline static int32_t get_offset_of_m_Dropdown_24() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_Dropdown_24)); }
	inline GameObject_t1113636619 * get_m_Dropdown_24() const { return ___m_Dropdown_24; }
	inline GameObject_t1113636619 ** get_address_of_m_Dropdown_24() { return &___m_Dropdown_24; }
	inline void set_m_Dropdown_24(GameObject_t1113636619 * value)
	{
		___m_Dropdown_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_Dropdown_24), value);
	}

	inline static int32_t get_offset_of_m_Blocker_25() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_Blocker_25)); }
	inline GameObject_t1113636619 * get_m_Blocker_25() const { return ___m_Blocker_25; }
	inline GameObject_t1113636619 ** get_address_of_m_Blocker_25() { return &___m_Blocker_25; }
	inline void set_m_Blocker_25(GameObject_t1113636619 * value)
	{
		___m_Blocker_25 = value;
		Il2CppCodeGenWriteBarrier((&___m_Blocker_25), value);
	}

	inline static int32_t get_offset_of_m_Items_26() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_Items_26)); }
	inline List_1_t2924027637 * get_m_Items_26() const { return ___m_Items_26; }
	inline List_1_t2924027637 ** get_address_of_m_Items_26() { return &___m_Items_26; }
	inline void set_m_Items_26(List_1_t2924027637 * value)
	{
		___m_Items_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_Items_26), value);
	}

	inline static int32_t get_offset_of_m_AlphaTweenRunner_27() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___m_AlphaTweenRunner_27)); }
	inline TweenRunner_1_t3520241082 * get_m_AlphaTweenRunner_27() const { return ___m_AlphaTweenRunner_27; }
	inline TweenRunner_1_t3520241082 ** get_address_of_m_AlphaTweenRunner_27() { return &___m_AlphaTweenRunner_27; }
	inline void set_m_AlphaTweenRunner_27(TweenRunner_1_t3520241082 * value)
	{
		___m_AlphaTweenRunner_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_AlphaTweenRunner_27), value);
	}

	inline static int32_t get_offset_of_validTemplate_28() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225, ___validTemplate_28)); }
	inline bool get_validTemplate_28() const { return ___validTemplate_28; }
	inline bool* get_address_of_validTemplate_28() { return &___validTemplate_28; }
	inline void set_validTemplate_28(bool value)
	{
		___validTemplate_28 = value;
	}
};

struct Dropdown_t2274391225_StaticFields
{
public:
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t3270282352 * ___s_NoOptionData_29;

public:
	inline static int32_t get_offset_of_s_NoOptionData_29() { return static_cast<int32_t>(offsetof(Dropdown_t2274391225_StaticFields, ___s_NoOptionData_29)); }
	inline OptionData_t3270282352 * get_s_NoOptionData_29() const { return ___s_NoOptionData_29; }
	inline OptionData_t3270282352 ** get_address_of_s_NoOptionData_29() { return &___s_NoOptionData_29; }
	inline void set_s_NoOptionData_29(OptionData_t3270282352 * value)
	{
		___s_NoOptionData_29 = value;
		Il2CppCodeGenWriteBarrier((&___s_NoOptionData_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DROPDOWN_T2274391225_H
#ifndef CYLINDERTARGETBEHAVIOUR_T822809409_H
#define CYLINDERTARGETBEHAVIOUR_T822809409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CylinderTargetBehaviour
struct  CylinderTargetBehaviour_t822809409  : public DataSetTrackableBehaviour_t3430730379
{
public:
	// Vuforia.CylinderTarget Vuforia.CylinderTargetBehaviour::mCylinderTarget
	RuntimeObject* ___mCylinderTarget_12;
	// System.Single Vuforia.CylinderTargetBehaviour::mTopDiameterRatio
	float ___mTopDiameterRatio_13;
	// System.Single Vuforia.CylinderTargetBehaviour::mBottomDiameterRatio
	float ___mBottomDiameterRatio_14;
	// System.Single Vuforia.CylinderTargetBehaviour::mSideLength
	float ___mSideLength_15;
	// System.Single Vuforia.CylinderTargetBehaviour::mTopDiameter
	float ___mTopDiameter_16;
	// System.Single Vuforia.CylinderTargetBehaviour::mBottomDiameter
	float ___mBottomDiameter_17;
	// System.Int32 Vuforia.CylinderTargetBehaviour::mFrameIndex
	int32_t ___mFrameIndex_18;
	// System.Int32 Vuforia.CylinderTargetBehaviour::mUpdateFrameIndex
	int32_t ___mUpdateFrameIndex_19;
	// System.Single Vuforia.CylinderTargetBehaviour::mFutureScale
	float ___mFutureScale_20;
	// System.Single Vuforia.CylinderTargetBehaviour::mLastTransformScale
	float ___mLastTransformScale_21;

public:
	inline static int32_t get_offset_of_mCylinderTarget_12() { return static_cast<int32_t>(offsetof(CylinderTargetBehaviour_t822809409, ___mCylinderTarget_12)); }
	inline RuntimeObject* get_mCylinderTarget_12() const { return ___mCylinderTarget_12; }
	inline RuntimeObject** get_address_of_mCylinderTarget_12() { return &___mCylinderTarget_12; }
	inline void set_mCylinderTarget_12(RuntimeObject* value)
	{
		___mCylinderTarget_12 = value;
		Il2CppCodeGenWriteBarrier((&___mCylinderTarget_12), value);
	}

	inline static int32_t get_offset_of_mTopDiameterRatio_13() { return static_cast<int32_t>(offsetof(CylinderTargetBehaviour_t822809409, ___mTopDiameterRatio_13)); }
	inline float get_mTopDiameterRatio_13() const { return ___mTopDiameterRatio_13; }
	inline float* get_address_of_mTopDiameterRatio_13() { return &___mTopDiameterRatio_13; }
	inline void set_mTopDiameterRatio_13(float value)
	{
		___mTopDiameterRatio_13 = value;
	}

	inline static int32_t get_offset_of_mBottomDiameterRatio_14() { return static_cast<int32_t>(offsetof(CylinderTargetBehaviour_t822809409, ___mBottomDiameterRatio_14)); }
	inline float get_mBottomDiameterRatio_14() const { return ___mBottomDiameterRatio_14; }
	inline float* get_address_of_mBottomDiameterRatio_14() { return &___mBottomDiameterRatio_14; }
	inline void set_mBottomDiameterRatio_14(float value)
	{
		___mBottomDiameterRatio_14 = value;
	}

	inline static int32_t get_offset_of_mSideLength_15() { return static_cast<int32_t>(offsetof(CylinderTargetBehaviour_t822809409, ___mSideLength_15)); }
	inline float get_mSideLength_15() const { return ___mSideLength_15; }
	inline float* get_address_of_mSideLength_15() { return &___mSideLength_15; }
	inline void set_mSideLength_15(float value)
	{
		___mSideLength_15 = value;
	}

	inline static int32_t get_offset_of_mTopDiameter_16() { return static_cast<int32_t>(offsetof(CylinderTargetBehaviour_t822809409, ___mTopDiameter_16)); }
	inline float get_mTopDiameter_16() const { return ___mTopDiameter_16; }
	inline float* get_address_of_mTopDiameter_16() { return &___mTopDiameter_16; }
	inline void set_mTopDiameter_16(float value)
	{
		___mTopDiameter_16 = value;
	}

	inline static int32_t get_offset_of_mBottomDiameter_17() { return static_cast<int32_t>(offsetof(CylinderTargetBehaviour_t822809409, ___mBottomDiameter_17)); }
	inline float get_mBottomDiameter_17() const { return ___mBottomDiameter_17; }
	inline float* get_address_of_mBottomDiameter_17() { return &___mBottomDiameter_17; }
	inline void set_mBottomDiameter_17(float value)
	{
		___mBottomDiameter_17 = value;
	}

	inline static int32_t get_offset_of_mFrameIndex_18() { return static_cast<int32_t>(offsetof(CylinderTargetBehaviour_t822809409, ___mFrameIndex_18)); }
	inline int32_t get_mFrameIndex_18() const { return ___mFrameIndex_18; }
	inline int32_t* get_address_of_mFrameIndex_18() { return &___mFrameIndex_18; }
	inline void set_mFrameIndex_18(int32_t value)
	{
		___mFrameIndex_18 = value;
	}

	inline static int32_t get_offset_of_mUpdateFrameIndex_19() { return static_cast<int32_t>(offsetof(CylinderTargetBehaviour_t822809409, ___mUpdateFrameIndex_19)); }
	inline int32_t get_mUpdateFrameIndex_19() const { return ___mUpdateFrameIndex_19; }
	inline int32_t* get_address_of_mUpdateFrameIndex_19() { return &___mUpdateFrameIndex_19; }
	inline void set_mUpdateFrameIndex_19(int32_t value)
	{
		___mUpdateFrameIndex_19 = value;
	}

	inline static int32_t get_offset_of_mFutureScale_20() { return static_cast<int32_t>(offsetof(CylinderTargetBehaviour_t822809409, ___mFutureScale_20)); }
	inline float get_mFutureScale_20() const { return ___mFutureScale_20; }
	inline float* get_address_of_mFutureScale_20() { return &___mFutureScale_20; }
	inline void set_mFutureScale_20(float value)
	{
		___mFutureScale_20 = value;
	}

	inline static int32_t get_offset_of_mLastTransformScale_21() { return static_cast<int32_t>(offsetof(CylinderTargetBehaviour_t822809409, ___mLastTransformScale_21)); }
	inline float get_mLastTransformScale_21() const { return ___mLastTransformScale_21; }
	inline float* get_address_of_mLastTransformScale_21() { return &___mLastTransformScale_21; }
	inline void set_mLastTransformScale_21(float value)
	{
		___mLastTransformScale_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CYLINDERTARGETBEHAVIOUR_T822809409_H
#ifndef IMAGETARGETBEHAVIOUR_T2200418350_H
#define IMAGETARGETBEHAVIOUR_T2200418350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ImageTargetBehaviour
struct  ImageTargetBehaviour_t2200418350  : public DataSetTrackableBehaviour_t3430730379
{
public:
	// System.Single Vuforia.ImageTargetBehaviour::mAspectRatio
	float ___mAspectRatio_12;
	// Vuforia.ImageTargetType Vuforia.ImageTargetBehaviour::mImageTargetType
	int32_t ___mImageTargetType_13;
	// System.Single Vuforia.ImageTargetBehaviour::mWidth
	float ___mWidth_14;
	// System.Single Vuforia.ImageTargetBehaviour::mHeight
	float ___mHeight_15;
	// Vuforia.ImageTarget Vuforia.ImageTargetBehaviour::mImageTarget
	RuntimeObject* ___mImageTarget_16;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonBehaviour> Vuforia.ImageTargetBehaviour::mVirtualButtonBehaviours
	Dictionary_2_t325039782 * ___mVirtualButtonBehaviours_17;
	// System.Single Vuforia.ImageTargetBehaviour::mLastTransformScale
	float ___mLastTransformScale_18;
	// UnityEngine.Vector2 Vuforia.ImageTargetBehaviour::mLastSize
	Vector2_t2156229523  ___mLastSize_19;

public:
	inline static int32_t get_offset_of_mAspectRatio_12() { return static_cast<int32_t>(offsetof(ImageTargetBehaviour_t2200418350, ___mAspectRatio_12)); }
	inline float get_mAspectRatio_12() const { return ___mAspectRatio_12; }
	inline float* get_address_of_mAspectRatio_12() { return &___mAspectRatio_12; }
	inline void set_mAspectRatio_12(float value)
	{
		___mAspectRatio_12 = value;
	}

	inline static int32_t get_offset_of_mImageTargetType_13() { return static_cast<int32_t>(offsetof(ImageTargetBehaviour_t2200418350, ___mImageTargetType_13)); }
	inline int32_t get_mImageTargetType_13() const { return ___mImageTargetType_13; }
	inline int32_t* get_address_of_mImageTargetType_13() { return &___mImageTargetType_13; }
	inline void set_mImageTargetType_13(int32_t value)
	{
		___mImageTargetType_13 = value;
	}

	inline static int32_t get_offset_of_mWidth_14() { return static_cast<int32_t>(offsetof(ImageTargetBehaviour_t2200418350, ___mWidth_14)); }
	inline float get_mWidth_14() const { return ___mWidth_14; }
	inline float* get_address_of_mWidth_14() { return &___mWidth_14; }
	inline void set_mWidth_14(float value)
	{
		___mWidth_14 = value;
	}

	inline static int32_t get_offset_of_mHeight_15() { return static_cast<int32_t>(offsetof(ImageTargetBehaviour_t2200418350, ___mHeight_15)); }
	inline float get_mHeight_15() const { return ___mHeight_15; }
	inline float* get_address_of_mHeight_15() { return &___mHeight_15; }
	inline void set_mHeight_15(float value)
	{
		___mHeight_15 = value;
	}

	inline static int32_t get_offset_of_mImageTarget_16() { return static_cast<int32_t>(offsetof(ImageTargetBehaviour_t2200418350, ___mImageTarget_16)); }
	inline RuntimeObject* get_mImageTarget_16() const { return ___mImageTarget_16; }
	inline RuntimeObject** get_address_of_mImageTarget_16() { return &___mImageTarget_16; }
	inline void set_mImageTarget_16(RuntimeObject* value)
	{
		___mImageTarget_16 = value;
		Il2CppCodeGenWriteBarrier((&___mImageTarget_16), value);
	}

	inline static int32_t get_offset_of_mVirtualButtonBehaviours_17() { return static_cast<int32_t>(offsetof(ImageTargetBehaviour_t2200418350, ___mVirtualButtonBehaviours_17)); }
	inline Dictionary_2_t325039782 * get_mVirtualButtonBehaviours_17() const { return ___mVirtualButtonBehaviours_17; }
	inline Dictionary_2_t325039782 ** get_address_of_mVirtualButtonBehaviours_17() { return &___mVirtualButtonBehaviours_17; }
	inline void set_mVirtualButtonBehaviours_17(Dictionary_2_t325039782 * value)
	{
		___mVirtualButtonBehaviours_17 = value;
		Il2CppCodeGenWriteBarrier((&___mVirtualButtonBehaviours_17), value);
	}

	inline static int32_t get_offset_of_mLastTransformScale_18() { return static_cast<int32_t>(offsetof(ImageTargetBehaviour_t2200418350, ___mLastTransformScale_18)); }
	inline float get_mLastTransformScale_18() const { return ___mLastTransformScale_18; }
	inline float* get_address_of_mLastTransformScale_18() { return &___mLastTransformScale_18; }
	inline void set_mLastTransformScale_18(float value)
	{
		___mLastTransformScale_18 = value;
	}

	inline static int32_t get_offset_of_mLastSize_19() { return static_cast<int32_t>(offsetof(ImageTargetBehaviour_t2200418350, ___mLastSize_19)); }
	inline Vector2_t2156229523  get_mLastSize_19() const { return ___mLastSize_19; }
	inline Vector2_t2156229523 * get_address_of_mLastSize_19() { return &___mLastSize_19; }
	inline void set_mLastSize_19(Vector2_t2156229523  value)
	{
		___mLastSize_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGETARGETBEHAVIOUR_T2200418350_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_19;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_20;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_23;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_25;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_26;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_27;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_19() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_19)); }
	inline bool get_m_ShouldRecalculateStencil_19() const { return ___m_ShouldRecalculateStencil_19; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_19() { return &___m_ShouldRecalculateStencil_19; }
	inline void set_m_ShouldRecalculateStencil_19(bool value)
	{
		___m_ShouldRecalculateStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_20() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_20)); }
	inline Material_t340375123 * get_m_MaskMaterial_20() const { return ___m_MaskMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_20() { return &___m_MaskMaterial_20; }
	inline void set_m_MaskMaterial_20(Material_t340375123 * value)
	{
		___m_MaskMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_21)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_21() const { return ___m_ParentMask_21; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_21() { return &___m_ParentMask_21; }
	inline void set_m_ParentMask_21(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_21), value);
	}

	inline static int32_t get_offset_of_m_Maskable_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_22)); }
	inline bool get_m_Maskable_22() const { return ___m_Maskable_22; }
	inline bool* get_address_of_m_Maskable_22() { return &___m_Maskable_22; }
	inline void set_m_Maskable_22(bool value)
	{
		___m_Maskable_22 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_23)); }
	inline bool get_m_IncludeForMasking_23() const { return ___m_IncludeForMasking_23; }
	inline bool* get_address_of_m_IncludeForMasking_23() { return &___m_IncludeForMasking_23; }
	inline void set_m_IncludeForMasking_23(bool value)
	{
		___m_IncludeForMasking_23 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_24)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_24() const { return ___m_OnCullStateChanged_24; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_24() { return &___m_OnCullStateChanged_24; }
	inline void set_m_OnCullStateChanged_24(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_24), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_25)); }
	inline bool get_m_ShouldRecalculate_25() const { return ___m_ShouldRecalculate_25; }
	inline bool* get_address_of_m_ShouldRecalculate_25() { return &___m_ShouldRecalculate_25; }
	inline void set_m_ShouldRecalculate_25(bool value)
	{
		___m_ShouldRecalculate_25 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_26)); }
	inline int32_t get_m_StencilValue_26() const { return ___m_StencilValue_26; }
	inline int32_t* get_address_of_m_StencilValue_26() { return &___m_StencilValue_26; }
	inline void set_m_StencilValue_26(int32_t value)
	{
		___m_StencilValue_26 = value;
	}

	inline static int32_t get_offset_of_m_Corners_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_27)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_27() const { return ___m_Corners_27; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_27() { return &___m_Corners_27; }
	inline void set_m_Corners_27(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef RAWIMAGE_T3182918964_H
#define RAWIMAGE_T3182918964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.RawImage
struct  RawImage_t3182918964  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t3661962703 * ___m_Texture_28;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_t2360479859  ___m_UVRect_29;

public:
	inline static int32_t get_offset_of_m_Texture_28() { return static_cast<int32_t>(offsetof(RawImage_t3182918964, ___m_Texture_28)); }
	inline Texture_t3661962703 * get_m_Texture_28() const { return ___m_Texture_28; }
	inline Texture_t3661962703 ** get_address_of_m_Texture_28() { return &___m_Texture_28; }
	inline void set_m_Texture_28(Texture_t3661962703 * value)
	{
		___m_Texture_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_Texture_28), value);
	}

	inline static int32_t get_offset_of_m_UVRect_29() { return static_cast<int32_t>(offsetof(RawImage_t3182918964, ___m_UVRect_29)); }
	inline Rect_t2360479859  get_m_UVRect_29() const { return ___m_UVRect_29; }
	inline Rect_t2360479859 * get_address_of_m_UVRect_29() { return &___m_UVRect_29; }
	inline void set_m_UVRect_29(Rect_t2360479859  value)
	{
		___m_UVRect_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAWIMAGE_T3182918964_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_28;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_29;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_30;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_31;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_33;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_34;

public:
	inline static int32_t get_offset_of_m_FontData_28() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_28)); }
	inline FontData_t746620069 * get_m_FontData_28() const { return ___m_FontData_28; }
	inline FontData_t746620069 ** get_address_of_m_FontData_28() { return &___m_FontData_28; }
	inline void set_m_FontData_28(FontData_t746620069 * value)
	{
		___m_FontData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_28), value);
	}

	inline static int32_t get_offset_of_m_Text_29() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_29)); }
	inline String_t* get_m_Text_29() const { return ___m_Text_29; }
	inline String_t** get_address_of_m_Text_29() { return &___m_Text_29; }
	inline void set_m_Text_29(String_t* value)
	{
		___m_Text_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_29), value);
	}

	inline static int32_t get_offset_of_m_TextCache_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_30)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_30() const { return ___m_TextCache_30; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_30() { return &___m_TextCache_30; }
	inline void set_m_TextCache_30(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_30), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_31)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_31() const { return ___m_TextCacheForLayout_31; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_31() { return &___m_TextCacheForLayout_31; }
	inline void set_m_TextCacheForLayout_31(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_31), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_33)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_33() const { return ___m_DisableFontTextureRebuiltCallback_33; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_33() { return &___m_DisableFontTextureRebuiltCallback_33; }
	inline void set_m_DisableFontTextureRebuiltCallback_33(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_33 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_34() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_34)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_34() const { return ___m_TempVerts_34; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_34() { return &___m_TempVerts_34; }
	inline void set_m_TempVerts_34(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_34), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_32;

public:
	inline static int32_t get_offset_of_s_DefaultText_32() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_32)); }
	inline Material_t340375123 * get_s_DefaultText_32() const { return ___s_DefaultText_32; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_32() { return &___s_DefaultText_32; }
	inline void set_s_DefaultText_32(Material_t340375123 * value)
	{
		___s_DefaultText_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_t3210418286  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Renderer_t2627027031 * m_Items[1];

public:
	inline Renderer_t2627027031 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t2627027031 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t2627027031 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Renderer_t2627027031 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t2627027031 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t2627027031 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t4234922487  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider_t1773347010 * m_Items[1];

public:
	inline Collider_t1773347010 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1773347010 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1773347010 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Collider_t1773347010 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1773347010 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1773347010 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Canvas[]
struct CanvasU5BU5D_t682926938  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Canvas_t3310196443 * m_Items[1];

public:
	inline Canvas_t3310196443 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Canvas_t3310196443 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Canvas_t3310196443 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Canvas_t3310196443 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Canvas_t3310196443 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Canvas_t3310196443 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.UI.RawImage[]
struct RawImageU5BU5D_t1576731517  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RawImage_t3182918964 * m_Items[1];

public:
	inline RawImage_t3182918964 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RawImage_t3182918964 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RawImage_t3182918964 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RawImage_t3182918964 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RawImage_t3182918964 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RawImage_t3182918964 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_1__ctor_m1399073142_gshared (Func_1_t3822001908 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m2079027267_gshared (Action_1_t269755560 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Action`1<Vuforia.VuforiaUnity/InitError>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m2713332384_gshared (Action_1_t3593217305 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::GetBuiltinResource<System.Object>(System.String)
extern "C"  RuntimeObject * Resources_GetBuiltinResource_TisRuntimeObject_m3352626831_gshared (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
extern "C"  ObjectU5BU5D_t2843939325* Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared (Component_t1923634451 * __this, bool p0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInParent<System.Object>(System.Boolean)
extern "C"  ObjectU5BU5D_t2843939325* Component_GetComponentsInParent_TisRuntimeObject_m492379918_gshared (Component_t1923634451 * __this, bool p0, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
extern "C"  ObjectU5BU5D_t2843939325* Object_FindObjectsOfType_TisRuntimeObject_m2776316817_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
extern "C"  RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m1542987838_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// T MenuOptions::FindUISelectableWithText<System.Object>(System.String)
extern "C"  RuntimeObject * MenuOptions_FindUISelectableWithText_TisRuntimeObject_m1777269550_gshared (MenuOptions_t1951716431 * __this, String_t* ___text0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C"  RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  List_1_t257213610 * Enumerable_ToList_TisRuntimeObject_m1551499789_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::ElementAt<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
extern "C"  RuntimeObject * Enumerable_ElementAt_TisRuntimeObject_m2579126540_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, int32_t p1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m1758133949 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
extern "C"  bool Input_GetKeyUp_m2808015270 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void AboutScreen::OnStartAR()
extern "C"  void AboutScreen_OnStartAR_m2896384759 (AboutScreen_t2183797299 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator AsyncSceneLoader::LoadNextSceneAfter(System.Single)
extern "C"  RuntimeObject* AsyncSceneLoader_LoadNextSceneAfter_m1751933459 (AsyncSceneLoader_t621267272 * __this, float ___seconds0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C"  Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void AsyncSceneLoader/<LoadNextSceneAfter>c__Iterator0::.ctor()
extern "C"  void U3CLoadNextSceneAfterU3Ec__Iterator0__ctor_m1226795792 (U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C"  void WaitForSeconds__ctor_m2199082655 (WaitForSeconds_t1699091251 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
extern "C"  Scene_t2348375561  SceneManager_GetActiveScene_m1825203488 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
extern "C"  int32_t Scene_get_buildIndex_m270272723 (Scene_t2348375561 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
extern "C"  void SceneManager_LoadScene_m3463216446 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor()
extern "C"  void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void AugmentedScript/<GetCoordinates>c__Iterator0::.ctor()
extern "C"  void U3CGetCoordinatesU3Ec__Iterator0__ctor_m1208291656 (U3CGetCoordinatesU3Ec__Iterator0_t3175107318 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
extern "C"  Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m2618285814 (MonoBehaviour_t3962482529 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
#define Func_1__ctor_m1399073142(__this, p0, p1, method) ((  void (*) (Func_1_t3822001908 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m1399073142_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.WaitWhile::.ctor(System.Func`1<System.Boolean>)
extern "C"  void WaitWhile__ctor_m1548128016 (WaitWhile_t2469172888 * __this, Func_1_t3822001908 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_Lerp_m407887542 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LocationService UnityEngine.Input::get_location()
extern "C"  LocationService_t2839639379 * Input_get_location_m1744795999 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.LocationService::get_isEnabledByUser()
extern "C"  bool LocationService_get_isEnabledByUser_m3325769302 (LocationService_t2839639379 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LocationService::Start(System.Single,System.Single)
extern "C"  void LocationService_Start_m970336927 (LocationService_t2839639379 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LocationServiceStatus UnityEngine.LocationService::get_status()
extern "C"  int32_t LocationService_get_status_m1450164038 (LocationService_t2839639379 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
extern "C"  void MonoBehaviour_print_m330341231 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LocationInfo UnityEngine.LocationService::get_lastData()
extern "C"  LocationInfo_t1192161013  LocationService_get_lastData_m1985729390 (LocationService_t2839639379 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.LocationInfo::get_latitude()
extern "C"  float LocationInfo_get_latitude_m341869276 (LocationInfo_t1192161013 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.LocationInfo::get_longitude()
extern "C"  float LocationInfo_get_longitude_m1454980142 (LocationInfo_t1192161013 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.LocationInfo::get_altitude()
extern "C"  float LocationInfo_get_altitude_m2556363964 (LocationInfo_t1192161013 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.LocationInfo::get_horizontalAccuracy()
extern "C"  float LocationInfo_get_horizontalAccuracy_m1238049393 (LocationInfo_t1192161013 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.LocationInfo::get_timestamp()
extern "C"  double LocationInfo_get_timestamp_m3431861872 (LocationInfo_t1192161013 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
extern "C"  String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void AugmentedScript::Calc(System.Single,System.Single,System.Double,System.Double)
extern "C"  void AugmentedScript_Calc_m3282814742 (AugmentedScript_t957426287 * __this, float ___lat10, float ___lon11, double ___lat22, double ___lon23, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LocationService::Stop()
extern "C"  void LocationService_Stop_m2430709999 (LocationService_t2839639379 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaARController Vuforia.VuforiaARController::get_Instance()
extern "C"  VuforiaARController_t1876945237 * VuforiaARController_get_Instance_m1100644214 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
extern "C"  void Action__ctor_m2994342681 (Action_t1264377477 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaARController::RegisterVuforiaStartedCallback(System.Action)
extern "C"  void VuforiaARController_RegisterVuforiaStartedCallback_m3258152770 (VuforiaARController_t1876945237 * __this, Action_t1264377477 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
#define Action_1__ctor_m2079027267(__this, p0, p1, method) ((  void (*) (Action_1_t269755560 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m2079027267_gshared)(__this, p0, p1, method)
// System.Void Vuforia.VuforiaARController::RegisterOnPauseCallback(System.Action`1<System.Boolean>)
extern "C"  void VuforiaARController_RegisterOnPauseCallback_m1833237148 (VuforiaARController_t1876945237 * __this, Action_1_t269755560 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice Vuforia.CameraDevice::get_Instance()
extern "C"  CameraDevice_t960297568 * CameraDevice_get_Instance_m2002290155 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDevice::SetFlashTorchMode(System.Boolean)
extern "C"  bool CameraDevice_SetFlashTorchMode_m1499936922 (CameraDevice_t960297568 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDevice::SetFocusMode(Vuforia.CameraDevice/FocusMode)
extern "C"  bool CameraDevice_SetFocusMode_m2424803588 (CameraDevice_t960297568 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator CameraSettings::RestoreOriginalFocusMode()
extern "C"  RuntimeObject* CameraSettings_RestoreOriginalFocusMode_m3433876528 (CameraSettings_t3152619780 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean CameraSettings::RestartCamera(Vuforia.CameraDevice/CameraDirection)
extern "C"  bool CameraSettings_RestartCamera_m1627822698 (CameraSettings_t3152619780 * __this, int32_t ___direction0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CameraSettings::SwitchAutofocus(System.Boolean)
extern "C"  void CameraSettings_SwitchAutofocus_m1104105893 (CameraSettings_t3152619780 * __this, bool ___ON0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CameraSettings/<RestoreOriginalFocusMode>c__Iterator0::.ctor()
extern "C"  void U3CRestoreOriginalFocusModeU3Ec__Iterator0__ctor_m1994535627 (U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.ITrackerManager Vuforia.TrackerManager::get_Instance()
extern "C"  RuntimeObject* TrackerManager_get_Instance_m777262631 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDevice::Stop()
extern "C"  bool CameraDevice_Stop_m1782631459 (CameraDevice_t960297568 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDevice::Deinit()
extern "C"  bool CameraDevice_Deinit_m726427492 (CameraDevice_t960297568 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDevice::Init(Vuforia.CameraDevice/CameraDirection)
extern "C"  bool CameraDevice_Init_m2722714107 (CameraDevice_t960297568 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDevice::Start()
extern "C"  bool CameraDevice_Start_m2947498176 (CameraDevice_t960297568 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DefaultInitializationErrorHandler::SetErrorCode(Vuforia.VuforiaUnity/InitError)
extern "C"  void DefaultInitializationErrorHandler_SetErrorCode_m599033302 (DefaultInitializationErrorHandler_t3109936861 * __this, int32_t ___errorCode0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DefaultInitializationErrorHandler::SetErrorOccurred(System.Boolean)
extern "C"  void DefaultInitializationErrorHandler_SetErrorOccurred_m1940230672 (DefaultInitializationErrorHandler_t3109936861 * __this, bool ___errorOccurred0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRuntime Vuforia.VuforiaRuntime::get_Instance()
extern "C"  VuforiaRuntime_t1949122020 * VuforiaRuntime_get_Instance_m1058251676 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<Vuforia.VuforiaUnity/InitError>::.ctor(System.Object,System.IntPtr)
#define Action_1__ctor_m2713332384(__this, p0, p1, method) ((  void (*) (Action_1_t3593217305 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m2713332384_gshared)(__this, p0, p1, method)
// System.Void Vuforia.VuforiaRuntime::RegisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
extern "C"  void VuforiaRuntime_RegisterVuforiaInitErrorCallback_m2728879505 (VuforiaRuntime_t1949122020 * __this, Action_1_t3593217305 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void DefaultInitializationErrorHandler::SetupGUIStyles()
extern "C"  void DefaultInitializationErrorHandler_SetupGUIStyles_m3863535424 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_width()
extern "C"  int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_height()
extern "C"  int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Rect__ctor_m2614021312 (Rect_t2360479859 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI/WindowFunction::.ctor(System.Object,System.IntPtr)
extern "C"  void WindowFunction__ctor_m2544237635 (WindowFunction_t3146511083 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
extern "C"  Rect_t2360479859  GUI_Window_m1088326791 (RuntimeObject * __this /* static, unused */, int32_t p0, Rect_t2360479859  p1, WindowFunction_t3146511083 * p2, String_t* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntime::UnregisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
extern "C"  void VuforiaRuntime_UnregisterVuforiaInitErrorCallback_m1304340042 (VuforiaRuntime_t1949122020 * __this, Action_1_t3593217305 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C"  void GUI_Label_m2420537077 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, String_t* p1, GUIStyle_t3956901511 * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C"  bool GUI_Button_m2223708732 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, String_t* p1, GUIStyle_t3956901511 * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::Quit()
extern "C"  void Application_Quit_m470877999 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String DefaultInitializationErrorHandler::getKeyInfo()
extern "C"  String_t* DefaultInitializationErrorHandler_getKeyInfo_m1864640064 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_productName()
extern "C"  String_t* Application_get_productName_m2401755738 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Replace(System.String,System.String)
extern "C"  String_t* String_Replace_m1273907647 (String_t* __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m2163913788 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C"  void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaConfiguration Vuforia.VuforiaConfiguration::get_Instance()
extern "C"  VuforiaConfiguration_t1763229349 * VuforiaConfiguration_get_Instance_m3335903280 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration Vuforia.VuforiaConfiguration::get_Vuforia()
extern "C"  GenericVuforiaConfiguration_t3697830469 * VuforiaConfiguration_get_Vuforia_m1588208597 (VuforiaConfiguration_t1763229349 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::get_LicenseKey()
extern "C"  String_t* GenericVuforiaConfiguration_get_LicenseKey_m2270076687 (GenericVuforiaConfiguration_t3697830469 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C"  String_t* String_Substring_m1610150815 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Screen::get_dpi()
extern "C"  float Screen_get_dpi_m495672463 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C"  Color_t2555686324  Color_get_white_m332174077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D DefaultInitializationErrorHandler::CreateSinglePixelTexture(UnityEngine.Color)
extern "C"  Texture2D_t3840446185 * DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749 (DefaultInitializationErrorHandler_t3109936861 * __this, Color_t2555686324  ___color0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
extern "C"  float Mathf_InverseLerp_m4155825980 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Color__ctor_m286683560 (Color_t2555686324 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.ctor()
extern "C"  void GUIStyle__ctor_m4038363858 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
extern "C"  GUIStyleState_t1397964415 * GUIStyle_get_normal_m729441812 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::set_background(UnityEngine.Texture2D)
extern "C"  void GUIStyleState_set_background_m369476077 (GUIStyleState_t1397964415 * __this, Texture2D_t3840446185 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Resources::GetBuiltinResource<UnityEngine.Font>(System.String)
#define Resources_GetBuiltinResource_TisFont_t1956802104_m2738776830(__this /* static, unused */, p0, method) ((  Font_t1956802104 * (*) (RuntimeObject * /* static, unused */, String_t*, const RuntimeMethod*))Resources_GetBuiltinResource_TisRuntimeObject_m3352626831_gshared)(__this /* static, unused */, p0, method)
// System.Void UnityEngine.GUIStyle::set_font(UnityEngine.Font)
extern "C"  void GUIStyle_set_font_m2490449107 (GUIStyle_t3956901511 * __this, Font_t1956802104 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
extern "C"  void GUIStyle_set_fontSize_m1566850023 (GUIStyle_t3956901511 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_black()
extern "C"  Color_t2555686324  Color_get_black_m719512684 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
extern "C"  void GUIStyleState_set_textColor_m1105876047 (GUIStyleState_t1397964415 * __this, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_wordWrap(System.Boolean)
extern "C"  void GUIStyle_set_wordWrap_m1419501823 (GUIStyle_t3956901511 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
extern "C"  void GUIStyle_set_alignment_m3944619660 (GUIStyle_t3956901511 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectOffset::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void RectOffset__ctor_m732140021 (RectOffset_t1369453676 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_padding(UnityEngine.RectOffset)
extern "C"  void GUIStyle_set_padding_m3302456044 (GUIStyle_t3956901511 * __this, RectOffset_t1369453676 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
extern "C"  void GUIStyle__ctor_m2912682974 (GUIStyle_t3956901511 * __this, GUIStyle_t3956901511 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C"  void Texture2D__ctor_m2862217990 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, int32_t p2, bool p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
extern "C"  void Texture2D_SetPixel_m2984741184 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, Color_t2555686324  p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Apply()
extern "C"  void Texture2D_Apply_m2271746283 (Texture2D_t3840446185 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<Vuforia.TrackableBehaviour>()
#define Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408(__this, method) ((  TrackableBehaviour_t1113559212 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::RegisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
extern "C"  void TrackableBehaviour_RegisterTrackableEventHandler_m2462783619 (TrackableBehaviour_t1113559212 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TrackableBehaviour::get_TrackableName()
extern "C"  String_t* TrackableBehaviour_get_TrackableName_m3644057705 (TrackableBehaviour_t1113559212 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>(System.Boolean)
#define Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911(__this, p0, method) ((  RendererU5BU5D_t3210418286* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared)(__this, p0, method)
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Collider>(System.Boolean)
#define Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426(__this, p0, method) ((  ColliderU5BU5D_t4234922487* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared)(__this, p0, method)
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Canvas>(System.Boolean)
#define Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007(__this, p0, method) ((  CanvasU5BU5D_t682926938* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared)(__this, p0, method)
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C"  void Renderer_set_enabled_m1727253150 (Renderer_t2627027031 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern "C"  void Collider_set_enabled_m1517463283 (Collider_t1773347010 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C"  void Behaviour_set_enabled_m20417929 (Behaviour_t1437897464 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t4157153871_m1557787507(__this, method) ((  Camera_t4157153871 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C"  Vector3_t3722313464  Transform_get_forward_m747522392 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Vector3_Dot_m606404487 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Single::ToString()
extern "C"  String_t* Single_ToString_m3947131094 (float* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer Vuforia.VuforiaRenderer::get_Instance()
extern "C"  VuforiaRenderer_t3433045970 * VuforiaRenderer_get_Instance_m1013623488 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaRenderer::GetRecommendedFps(Vuforia.VuforiaRenderer/FpsHint)
extern "C"  int32_t VuforiaRenderer_GetRecommendedFps_m561576480 (VuforiaRenderer_t3433045970 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Application::get_targetFrameRate()
extern "C"  int32_t Application_get_targetFrameRate_m1077623221 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C"  String_t* String_Concat_m1715369213 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
extern "C"  void Application_set_targetFrameRate_m3682352535 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0[] UnityEngine.Component::GetComponentsInParent<UnityEngine.Canvas>(System.Boolean)
#define Component_GetComponentsInParent_TisCanvas_t3310196443_m1039379662(__this, p0, method) ((  CanvasU5BU5D_t682926938* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))Component_GetComponentsInParent_TisRuntimeObject_m492379918_gshared)(__this, p0, method)
// System.Void InitErrorHandler::ShowErrorMessage(Vuforia.VuforiaUnity/InitError)
extern "C"  void InitErrorHandler_ShowErrorMessage_m1141628225 (InitErrorHandler_t2159361531 * __this, int32_t ___errorCode0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C"  Transform_t3600365921 * Transform_get_parent_m835071599 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C"  Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.RawImage LoadingScreen::FindSpinnerImage()
extern "C"  RawImage_t3182918964 * LoadingScreen_FindSpinnerImage_m2988402308 (LoadingScreen_t2154736699 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::set_backgroundLoadingPriority(UnityEngine.ThreadPriority)
extern "C"  void Application_set_backgroundLoadingPriority_m1116453950 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
extern "C"  RectTransform_t3704657025 * Graphic_get_rectTransform_m1167152468 (Graphic_t1660335611 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C"  Vector3_t3722313464  Vector3_get_forward_m3100859705 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
extern "C"  void Transform_Rotate_m1749346957 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LoadingScreen::LoadNextSceneAsync()
extern "C"  void LoadingScreen_LoadNextSceneAsync_m3801488710 (LoadingScreen_t2154736699 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.Int32)
extern "C"  AsyncOperation_t1445031843 * SceneManager_LoadSceneAsync_m3240398665 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0[] UnityEngine.Object::FindObjectsOfType<UnityEngine.UI.RawImage>()
#define Object_FindObjectsOfType_TisRawImage_t3182918964_m2400832436(__this /* static, unused */, method) ((  RawImageU5BU5D_t1576731517* (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m2776316817_gshared)(__this /* static, unused */, method)
// System.String UnityEngine.Object::get_name()
extern "C"  String_t* Object_get_name_m4211327027 (Object_t631007953 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Contains(System.String)
extern "C"  bool String_Contains_m1147431944 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Dropdown::ClearOptions()
extern "C"  void Dropdown_ClearOptions_m4085591601 (Dropdown_t2274391225 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::.ctor()
#define List_1__ctor_m1438953653(__this, method) ((  void (*) (List_1_t447389798 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void UnityEngine.UI.Dropdown/OptionData::.ctor(System.String)
extern "C"  void OptionData__ctor_m2696491456 (OptionData_t3270282352 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::Add(!0)
#define List_1_Add_m3700962105(__this, p0, method) ((  void (*) (List_1_t447389798 *, OptionData_t3270282352 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void UnityEngine.UI.Dropdown::AddOptions(System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>)
extern "C"  void Dropdown_AddOptions_m3733885929 (Dropdown_t2274391225 * __this, List_1_t447389798 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern "C"  Vector3_t3722313464  Vector3_get_right_m1913784872 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_UnaryNegation_m1951478815 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::FindObjectOfType<MenuOptions>()
#define Object_FindObjectOfType_TisMenuOptions_t1951716431_m1050906446(__this /* static, unused */, method) ((  MenuOptions_t1951716431 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m1542987838_gshared)(__this /* static, unused */, method)
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern "C"  bool Behaviour_get_enabled_m753527255 (Behaviour_t1437897464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
extern "C"  float Mathf_Clamp01_m56433566 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Slerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_Slerp_m802114822 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuOptions::UpdateUI()
extern "C"  void MenuOptions_UpdateUI_m2695051465 (MenuOptions_t1951716431 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::FindObjectOfType<CameraSettings>()
#define Object_FindObjectOfType_TisCameraSettings_t3152619780_m4203198741(__this /* static, unused */, method) ((  CameraSettings_t3152619780 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m1542987838_gshared)(__this /* static, unused */, method)
// !!0 UnityEngine.Object::FindObjectOfType<TrackableSettings>()
#define Object_FindObjectOfType_TisTrackableSettings_t2862243993_m1852430619(__this /* static, unused */, method) ((  TrackableSettings_t2862243993 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m1542987838_gshared)(__this /* static, unused */, method)
// !!0 UnityEngine.Object::FindObjectOfType<MenuAnimator>()
#define Object_FindObjectOfType_TisMenuAnimator_t2112910832_m1830680649(__this /* static, unused */, method) ((  MenuAnimator_t2112910832 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m1542987838_gshared)(__this /* static, unused */, method)
// T MenuOptions::FindUISelectableWithText<UnityEngine.UI.Toggle>(System.String)
#define MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125(__this, ___text0, method) ((  Toggle_t2735377061 * (*) (MenuOptions_t1951716431 *, String_t*, const RuntimeMethod*))MenuOptions_FindUISelectableWithText_TisRuntimeObject_m1777269550_gshared)(__this, ___text0, method)
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
extern "C"  bool Toggle_get_isOn_m1428293607 (Toggle_t2735377061 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CameraSettings::SwitchFlashTorch(System.Boolean)
extern "C"  void CameraSettings_SwitchFlashTorch_m1540789541 (CameraSettings_t3152619780 * __this, bool ___ON0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean CameraSettings::IsFlashTorchEnabled()
extern "C"  bool CameraSettings_IsFlashTorchEnabled_m3875252701 (CameraSettings_t3152619780 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
extern "C"  void Toggle_set_isOn_m3548357404 (Toggle_t2735377061 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CameraSettings::SelectCamera(Vuforia.CameraDevice/CameraDirection)
extern "C"  void CameraSettings_SelectCamera_m387205834 (CameraSettings_t3152619780 * __this, int32_t ___camDir0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuOptions::ToggleTorch()
extern "C"  void MenuOptions_ToggleTorch_m1503051540 (MenuOptions_t1951716431 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TrackableSettings::ActivateDataSet(System.String)
extern "C"  void TrackableSettings_ActivateDataSet_m4118878993 (TrackableSettings_t2862243993 * __this, String_t* ___datasetName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean TrackableSettings::IsExtendedTrackingEnabled()
extern "C"  bool TrackableSettings_IsExtendedTrackingEnabled_m1319587722 (TrackableSettings_t2862243993 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean CameraSettings::IsAutofocusEnabled()
extern "C"  bool CameraSettings_IsAutofocusEnabled_m386305083 (CameraSettings_t3152619780 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean CameraSettings::IsFrontCameraActive()
extern "C"  bool CameraSettings_IsFrontCameraActive_m282456036 (CameraSettings_t3152619780 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
extern "C"  bool GameObject_get_activeInHierarchy_m2006396688 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String TrackableSettings::GetActiveDatasetName()
extern "C"  String_t* TrackableSettings_GetActiveDatasetName_m1771968640 (TrackableSettings_t2862243993 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuAnimator::Hide()
extern "C"  void MenuAnimator_Hide_m1323916210 (MenuAnimator_t2112910832 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LocalizationHelper::.ctor()
extern "C"  void LocalizationHelper__ctor_m1418160484 (LocalizationHelper_t3735850664 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
extern "C"  GameObject_t1113636619 * GameObject_FindGameObjectWithTag_m2129039296 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Dropdown>()
#define GameObject_GetComponent_TisDropdown_t2274391225_m2992396495(__this, method) ((  Dropdown_t2274391225 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData> UnityEngine.UI.Dropdown::get_options()
extern "C"  List_1_t447389798 * Dropdown_get_options_m2762539965 (Dropdown_t2274391225 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Dropdown::get_value()
extern "C"  int32_t Dropdown_get_value_m1555353112 (Dropdown_t2274391225 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::get_Item(System.Int32)
#define List_1_get_Item_m489380024(__this, p0, method) ((  OptionData_t3270282352 * (*) (List_1_t447389798 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.String UnityEngine.UI.Dropdown/OptionData::get_text()
extern "C"  String_t* OptionData_get_text_m2997376818 (OptionData_t3270282352 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::LoadLevel(System.String)
extern "C"  void Application_LoadLevel_m2650087286 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
#define Component_GetComponent_TisText_t1901882714_m4196288697(__this, method) ((  Text_t1901882714 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void UnityEngine.Application::set_runInBackground(System.Boolean)
extern "C"  void Application_set_runInBackground_m2169704730 (RuntimeObject * __this /* static, unused */, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator StreamVideo::playVideo()
extern "C"  RuntimeObject* StreamVideo_playVideo_m1477276020 (StreamVideo_t2698492640 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StreamVideo/<playVideo>c__Iterator0::.ctor()
extern "C"  void U3CplayVideoU3Ec__Iterator0__ctor_m3103521919 (U3CplayVideoU3Ec__Iterator0_t2444540216 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Video.VideoPlayer>()
#define GameObject_AddComponent_TisVideoPlayer_t1683042537_m955221201(__this, method) ((  VideoPlayer_t1683042537 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared)(__this, method)
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
#define GameObject_AddComponent_TisAudioSource_t3935305588_m2869327390(__this, method) ((  AudioSource_t3935305588 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared)(__this, method)
// System.Void UnityEngine.Video.VideoPlayer::set_playOnAwake(System.Boolean)
extern "C"  void VideoPlayer_set_playOnAwake_m1398368016 (VideoPlayer_t1683042537 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean)
extern "C"  void AudioSource_set_playOnAwake_m1824967994 (AudioSource_t3935305588 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Pause()
extern "C"  void AudioSource_Pause_m1501822765 (AudioSource_t3935305588 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Video.VideoPlayer::set_source(UnityEngine.Video.VideoSource)
extern "C"  void VideoPlayer_set_source_m766641694 (VideoPlayer_t1683042537 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Video.VideoPlayer::set_audioOutputMode(UnityEngine.Video.VideoAudioOutputMode)
extern "C"  void VideoPlayer_set_audioOutputMode_m1054936430 (VideoPlayer_t1683042537 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Video.VideoPlayer::EnableAudioTrack(System.UInt16,System.Boolean)
extern "C"  void VideoPlayer_EnableAudioTrack_m3940352556 (VideoPlayer_t1683042537 * __this, uint16_t p0, bool p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Video.VideoPlayer::SetTargetAudioSource(System.UInt16,UnityEngine.AudioSource)
extern "C"  void VideoPlayer_SetTargetAudioSource_m4040805661 (VideoPlayer_t1683042537 * __this, uint16_t p0, AudioSource_t3935305588 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Video.VideoPlayer::set_clip(UnityEngine.Video.VideoClip)
extern "C"  void VideoPlayer_set_clip_m1858687940 (VideoPlayer_t1683042537 * __this, VideoClip_t1281919028 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Video.VideoPlayer::Prepare()
extern "C"  void VideoPlayer_Prepare_m3397962125 (VideoPlayer_t1683042537 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Video.VideoPlayer::get_isPrepared()
extern "C"  bool VideoPlayer_get_isPrepared_m1964369291 (VideoPlayer_t1683042537 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Video.VideoPlayer::get_texture()
extern "C"  Texture_t3661962703 * VideoPlayer_get_texture_m3244594803 (VideoPlayer_t1683042537 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
extern "C"  void RawImage_set_texture_m415027901 (RawImage_t3182918964 * __this, Texture_t3661962703 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Video.VideoPlayer::Play()
extern "C"  void VideoPlayer_Play_m1850501814 (VideoPlayer_t1683042537 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play()
extern "C"  void AudioSource_Play_m48294159 (AudioSource_t3935305588 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.Video.VideoPlayer::get_time()
extern "C"  double VideoPlayer_get_time_m623957222 (VideoPlayer_t1683042537 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
extern "C"  int32_t Mathf_FloorToInt_m1870542928 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C"  void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Video.VideoPlayer::get_isPlaying()
extern "C"  bool VideoPlayer_get_isPlaying_m2729754655 (VideoPlayer_t1683042537 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean MenuAnimator::IsVisible()
extern "C"  bool MenuAnimator_IsVisible_m928022866 (MenuAnimator_t2112910832 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TapHandler::HandleTap()
extern "C"  void TapHandler_HandleTap_m1322678531 (TapHandler_t334234343 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
extern "C"  bool Input_GetMouseButtonUp_m2924350851 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponentInChildren<CameraSettings>()
#define Component_GetComponentInChildren_TisCameraSettings_t3152619780_m2209036194(__this, method) ((  CameraSettings_t3152619780 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared)(__this, method)
// System.Void CameraSettings::TriggerAutofocusEvent()
extern "C"  void CameraSettings_TriggerAutofocusEvent_m898525935 (CameraSettings_t3152619780 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuAnimator::Show()
extern "C"  void MenuAnimator_Show_m982174260 (MenuAnimator_t2112910832 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t3935305588_m1977431131(__this, method) ((  AudioSource_t3935305588 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C"  void AudioSource_set_clip_m31653938 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Stop()
extern "C"  void AudioSource_Stop_m2682712816 (AudioSource_t3935305588 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour> Vuforia.StateManager::GetTrackableBehaviours()
extern "C"  RuntimeObject* StateManager_GetTrackableBehaviours_m3331997292 (StateManager_t1982749557 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTarget Vuforia.ImageTargetBehaviour::get_ImageTarget()
extern "C"  RuntimeObject* ImageTargetBehaviour_get_ImageTarget_m2707173779 (ImageTargetBehaviour_t2200418350 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.MultiTarget Vuforia.MultiTargetBehaviour::get_MultiTarget()
extern "C"  RuntimeObject* MultiTargetBehaviour_get_MultiTarget_m1306973800 (MultiTargetBehaviour_t2061511750 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.CylinderTarget Vuforia.CylinderTargetBehaviour::get_CylinderTarget()
extern "C"  RuntimeObject* CylinderTargetBehaviour_get_CylinderTarget_m2779698828 (CylinderTargetBehaviour_t822809409 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.ObjectTarget Vuforia.ObjectTargetBehaviour::get_ObjectTarget()
extern "C"  RuntimeObject* ObjectTargetBehaviour_get_ObjectTarget_m1153386099 (ObjectTargetBehaviour_t728125005 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuMarkTemplate Vuforia.VuMarkBehaviour::get_VuMarkTemplate()
extern "C"  RuntimeObject* VuMarkBehaviour_get_VuMarkTemplate_m3771121130 (VuMarkBehaviour_t1178230459 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet> Vuforia.ObjectTracker::GetActiveDataSets()
extern "C"  RuntimeObject* ObjectTracker_GetActiveDataSets_m254019146 (ObjectTracker_t4177997237 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<Vuforia.DataSet>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToList_TisDataSet_t3286034874_m1984750843(__this /* static, unused */, p0, method) ((  List_1_t463142320 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m1551499789_gshared)(__this /* static, unused */, p0, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.DataSet>::get_Count()
#define List_1_get_Count_m3978133574(__this, method) ((  int32_t (*) (List_1_t463142320 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// !!0 System.Linq.Enumerable::ElementAt<Vuforia.DataSet>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
#define Enumerable_ElementAt_TisDataSet_t3286034874_m1304043092(__this /* static, unused */, p0, p1, method) ((  DataSet_t3286034874 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_ElementAt_TisRuntimeObject_m2579126540_gshared)(__this /* static, unused */, p0, p1, method)
// System.String Vuforia.DataSet::get_Path()
extern "C"  String_t* DataSet_get_Path_m176743276 (DataSet_t3286034874 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.String)
extern "C"  int32_t String_LastIndexOf_m2676535141 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32)
extern "C"  String_t* String_Substring_m2848979100 (String_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.String::ToCharArray()
extern "C"  CharU5BU5D_t3528271667* String_ToCharArray_m1492846834 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::TrimEnd(System.Char[])
extern "C"  String_t* String_TrimEnd_m3824727301 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet> Vuforia.ObjectTracker::GetDataSets()
extern "C"  RuntimeObject* ObjectTracker_GetDataSets_m1245718448 (ObjectTracker_t4177997237 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Vuforia.DataSet>::GetEnumerator()
#define List_1_GetEnumerator_m6144716(__this, method) ((  Enumerator_t2352386197  (*) (List_1_t463142320 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<Vuforia.DataSet>::get_Current()
#define Enumerator_get_Current_m1064371760(__this, method) ((  DataSet_t3286034874 * (*) (Enumerator_t2352386197 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean Vuforia.ObjectTracker::DeactivateDataSet(Vuforia.DataSet)
extern "C"  bool ObjectTracker_DeactivateDataSet_m2094146088 (ObjectTracker_t4177997237 * __this, DataSet_t3286034874 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Vuforia.DataSet>::MoveNext()
#define Enumerator_MoveNext_m1234730920(__this, method) ((  bool (*) (Enumerator_t2352386197 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<Vuforia.DataSet>::Dispose()
#define Enumerator_Dispose_m1247034833(__this, method) ((  void (*) (Enumerator_t2352386197 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Boolean Vuforia.ObjectTracker::ActivateDataSet(Vuforia.DataSet)
extern "C"  bool ObjectTracker_ActivateDataSet_m3009523340 (ObjectTracker_t4177997237 * __this, DataSet_t3286034874 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Void AboutScreen::.ctor()
extern "C"  void AboutScreen__ctor_m346556219 (AboutScreen_t2183797299 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AboutScreen::OnStartAR()
extern "C"  void AboutScreen_OnStartAR_m2896384759 (AboutScreen_t2183797299 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AboutScreen_OnStartAR_m2896384759_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3525588294, /*hidden argument*/NULL);
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral4188196043, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AboutScreen::Update()
extern "C"  void AboutScreen_Update_m1006106731 (AboutScreen_t2183797299 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AboutScreen_Update_m1006106731_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKeyUp_m2808015270(NULL /*static, unused*/, ((int32_t)13), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		AboutScreen_OnStartAR_m2896384759(__this, /*hidden argument*/NULL);
		goto IL_003d;
	}

IL_0017:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyUp_m2808015270(NULL /*static, unused*/, ((int32_t)330), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		AboutScreen_OnStartAR_m2896384759(__this, /*hidden argument*/NULL);
		goto IL_003d;
	}

IL_0031:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyUp_m2808015270(NULL /*static, unused*/, ((int32_t)27), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003d;
		}
	}

IL_003d:
	{
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
// System.Void argClass::.ctor()
extern "C"  void argClass__ctor_m2491578073 (argClass_t2323061523 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void argClass::.cctor()
extern "C"  void argClass__cctor_m2948626504 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (argClass__cctor_m2948626504_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((argClass_t2323061523_StaticFields*)il2cpp_codegen_static_fields_for(argClass_t2323061523_il2cpp_TypeInfo_var))->set_language_0(_stringLiteral3454842811);
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
// System.Void AsyncSceneLoader::.ctor()
extern "C"  void AsyncSceneLoader__ctor_m4061046102 (AsyncSceneLoader_t621267272 * __this, const RuntimeMethod* method)
{
	{
		__this->set_loadingDelay_2((5.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AsyncSceneLoader::Start()
extern "C"  void AsyncSceneLoader_Start_m3052968032 (AsyncSceneLoader_t621267272 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_loadingDelay_2();
		RuntimeObject* L_1 = AsyncSceneLoader_LoadNextSceneAfter_m1751933459(__this, L_0, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator AsyncSceneLoader::LoadNextSceneAfter(System.Single)
extern "C"  RuntimeObject* AsyncSceneLoader_LoadNextSceneAfter_m1751933459 (AsyncSceneLoader_t621267272 * __this, float ___seconds0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AsyncSceneLoader_LoadNextSceneAfter_m1751933459_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170 * V_0 = NULL;
	{
		U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170 * L_0 = (U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170 *)il2cpp_codegen_object_new(U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170_il2cpp_TypeInfo_var);
		U3CLoadNextSceneAfterU3Ec__Iterator0__ctor_m1226795792(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170 * L_1 = V_0;
		float L_2 = ___seconds0;
		NullCheck(L_1);
		L_1->set_seconds_0(L_2);
		U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170 * L_3 = V_0;
		return L_3;
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
// System.Void AsyncSceneLoader/<LoadNextSceneAfter>c__Iterator0::.ctor()
extern "C"  void U3CLoadNextSceneAfterU3Ec__Iterator0__ctor_m1226795792 (U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean AsyncSceneLoader/<LoadNextSceneAfter>c__Iterator0::MoveNext()
extern "C"  bool U3CLoadNextSceneAfterU3Ec__Iterator0_MoveNext_m3855908786 (U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadNextSceneAfterU3Ec__Iterator0_MoveNext_m3855908786_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Scene_t2348375561  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0046;
			}
		}
	}
	{
		goto IL_0061;
	}

IL_0021:
	{
		float L_2 = __this->get_seconds_0();
		WaitForSeconds_t1699091251 * L_3 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_3, L_2, /*hidden argument*/NULL);
		__this->set_U24current_1(L_3);
		bool L_4 = __this->get_U24disposing_2();
		if (L_4)
		{
			goto IL_0041;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0041:
	{
		goto IL_0063;
	}

IL_0046:
	{
		Scene_t2348375561  L_5 = SceneManager_GetActiveScene_m1825203488(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = Scene_get_buildIndex_m270272723((&V_1), /*hidden argument*/NULL);
		SceneManager_LoadScene_m3463216446(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)), /*hidden argument*/NULL);
		__this->set_U24PC_3((-1));
	}

IL_0061:
	{
		return (bool)0;
	}

IL_0063:
	{
		return (bool)1;
	}
}
// System.Object AsyncSceneLoader/<LoadNextSceneAfter>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CLoadNextSceneAfterU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1590379521 (U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object AsyncSceneLoader/<LoadNextSceneAfter>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CLoadNextSceneAfterU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1516849507 (U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void AsyncSceneLoader/<LoadNextSceneAfter>c__Iterator0::Dispose()
extern "C"  void U3CLoadNextSceneAfterU3Ec__Iterator0_Dispose_m2915084317 (U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void AsyncSceneLoader/<LoadNextSceneAfter>c__Iterator0::Reset()
extern "C"  void U3CLoadNextSceneAfterU3Ec__Iterator0_Reset_m3376656304 (U3CLoadNextSceneAfterU3Ec__Iterator0_t994227170 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadNextSceneAfterU3Ec__Iterator0_Reset_m3376656304_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void AugmentedScript::.ctor()
extern "C"  void AugmentedScript__ctor_m1105169394 (AugmentedScript_t957426287 * __this, const RuntimeMethod* method)
{
	{
		__this->set_setOriginalValues_13((bool)1);
		__this->set_speed_16((0.5f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator AugmentedScript::GetCoordinates()
extern "C"  RuntimeObject* AugmentedScript_GetCoordinates_m1379753793 (AugmentedScript_t957426287 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AugmentedScript_GetCoordinates_m1379753793_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetCoordinatesU3Ec__Iterator0_t3175107318 * V_0 = NULL;
	{
		U3CGetCoordinatesU3Ec__Iterator0_t3175107318 * L_0 = (U3CGetCoordinatesU3Ec__Iterator0_t3175107318 *)il2cpp_codegen_object_new(U3CGetCoordinatesU3Ec__Iterator0_t3175107318_il2cpp_TypeInfo_var);
		U3CGetCoordinatesU3Ec__Iterator0__ctor_m1208291656(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetCoordinatesU3Ec__Iterator0_t3175107318 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_1(__this);
		U3CGetCoordinatesU3Ec__Iterator0_t3175107318 * L_2 = V_0;
		return L_2;
	}
}
// System.Void AugmentedScript::Calc(System.Single,System.Single,System.Double,System.Double)
extern "C"  void AugmentedScript_Calc_m3282814742 (AugmentedScript_t957426287 * __this, float ___lat10, float ___lon11, double ___lat22, double ___lon23, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Vector3_t3722313464  V_8;
	memset(&V_8, 0, sizeof(V_8));
	{
		V_0 = (6378.137f);
		double L_0 = ___lat22;
		float L_1 = ___lat10;
		V_1 = ((double)il2cpp_codegen_subtract((double)((double)((double)((double)il2cpp_codegen_multiply((double)L_0, (double)(3.1415926535897931)))/(double)(180.0))), (double)((double)((double)((double)il2cpp_codegen_multiply((double)(((double)((double)L_1))), (double)(3.1415926535897931)))/(double)(180.0)))));
		double L_2 = ___lon23;
		float L_3 = ___lon11;
		V_2 = ((double)il2cpp_codegen_subtract((double)((double)((double)((double)il2cpp_codegen_multiply((double)L_2, (double)(3.1415926535897931)))/(double)(180.0))), (double)((double)((double)((double)il2cpp_codegen_multiply((double)(((double)((double)L_3))), (double)(3.1415926535897931)))/(double)(180.0)))));
		double L_4 = V_1;
		double L_5 = sin(((double)((double)L_4/(double)(2.0))));
		double L_6 = V_1;
		double L_7 = sin(((double)((double)L_6/(double)(2.0))));
		V_3 = ((double)il2cpp_codegen_multiply((double)L_5, (double)L_7));
		double L_8 = V_3;
		double L_9 = sqrt(L_8);
		double L_10 = V_3;
		double L_11 = sqrt(((double)il2cpp_codegen_subtract((double)(1.0), (double)L_10)));
		double L_12 = atan2(L_9, L_11);
		V_4 = ((double)il2cpp_codegen_multiply((double)(2.0), (double)L_12));
		float L_13 = V_0;
		double L_14 = V_4;
		__this->set_distance_12(((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)(((double)((double)L_13))), (double)L_14)), (double)(1000.0))));
		double L_15 = __this->get_distance_12();
		V_5 = (((float)((float)L_15)));
		double L_16 = V_2;
		double L_17 = sin(((double)((double)L_16/(double)(2.0))));
		double L_18 = V_2;
		double L_19 = sin(((double)((double)L_18/(double)(2.0))));
		V_3 = ((double)il2cpp_codegen_multiply((double)L_17, (double)L_19));
		double L_20 = V_3;
		double L_21 = sqrt(L_20);
		double L_22 = V_3;
		double L_23 = sqrt(((double)il2cpp_codegen_subtract((double)(1.0), (double)L_22)));
		double L_24 = atan2(L_21, L_23);
		V_4 = ((double)il2cpp_codegen_multiply((double)(2.0), (double)L_24));
		float L_25 = V_0;
		double L_26 = V_4;
		__this->set_distance_12(((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)(((double)((double)L_25))), (double)L_26)), (double)(1000.0))));
		double L_27 = __this->get_distance_12();
		V_6 = (((float)((float)L_27)));
		double L_28 = __this->get_distance_12();
		V_7 = (((float)((float)L_28)));
		double L_29 = ___lat22;
		float L_30 = V_0;
		__this->set_curx_6(((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)((double)((double)L_29/(double)(180.0))), (double)(3.1415926535897931))), (double)(((double)((double)L_30))))), (double)(1000.0))));
		double L_31 = ___lon23;
		float L_32 = V_0;
		__this->set_cury_7(((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)((double)((double)L_31/(double)(180.0))), (double)(3.1415926535897931))), (double)(((double)((double)L_32))))), (double)(1000.0))));
		float L_33 = V_5;
		Transform_t3600365921 * L_34 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector3_t3722313464  L_35 = Transform_get_position_m36019626(L_34, /*hidden argument*/NULL);
		V_8 = L_35;
		float L_36 = (&V_8)->get_y_2();
		float L_37 = V_6;
		Vector3_t3722313464  L_38;
		memset(&L_38, 0, sizeof(L_38));
		Vector3__ctor_m3353183577((&L_38), L_33, L_36, L_37, /*hidden argument*/NULL);
		__this->set_targetPosition_14(L_38);
		return;
	}
}
// System.Void AugmentedScript::Start()
extern "C"  void AugmentedScript_Start_m1964626684 (AugmentedScript_t957426287 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AugmentedScript_Start_m1964626684_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		MonoBehaviour_StartCoroutine_m2618285814(__this, _stringLiteral1608432475, /*hidden argument*/NULL);
		V_0 = (6378.137f);
		double L_0 = __this->get_lat_2();
		float L_1 = V_0;
		__this->set_startx_4(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)((float)(((float)((float)L_0)))/(float)(180.0f))), (float)(3.14159274f))), (float)L_1)), (float)(1000.0f))));
		double L_2 = __this->get_log_3();
		float L_3 = V_0;
		__this->set_starty_5(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)((float)(((float)((float)L_2)))/(float)(180.0f))), (float)(3.14159274f))), (float)L_3)), (float)(1000.0f))));
		intptr_t L_4 = (intptr_t)AugmentedScript_U3CStartU3Em__0_m1604391588_RuntimeMethod_var;
		Func_1_t3822001908 * L_5 = (Func_1_t3822001908 *)il2cpp_codegen_object_new(Func_1_t3822001908_il2cpp_TypeInfo_var);
		Func_1__ctor_m1399073142(L_5, __this, L_4, /*hidden argument*/Func_1__ctor_m1399073142_RuntimeMethod_var);
		WaitWhile_t2469172888 * L_6 = (WaitWhile_t2469172888 *)il2cpp_codegen_object_new(WaitWhile_t2469172888_il2cpp_TypeInfo_var);
		WaitWhile__ctor_m1548128016(L_6, L_5, /*hidden argument*/NULL);
		Transform_t3600365921 * L_7 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_8 = __this->get_startx_4();
		Transform_t3600365921 * L_9 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t3722313464  L_10 = Transform_get_position_m36019626(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		float L_11 = (&V_1)->get_y_2();
		float L_12 = __this->get_starty_5();
		Vector3_t3722313464  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector3__ctor_m3353183577((&L_13), (((float)((float)L_8))), L_11, (((float)((float)L_12))), /*hidden argument*/NULL);
		double L_14 = __this->get_curx_6();
		double L_15 = __this->get_cury_7();
		Vector3_t3722313464  L_16;
		memset(&L_16, 0, sizeof(L_16));
		Vector3__ctor_m3353183577((&L_16), (((float)((float)L_14))), (0.0f), (((float)((float)L_15))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_17 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_13, L_16, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_position_m3387557959(L_7, L_17, /*hidden argument*/NULL);
		Transform_t3600365921 * L_18 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t3722313464  L_19 = Transform_get_position_m36019626(L_18, /*hidden argument*/NULL);
		__this->set_originalPosition_15(L_19);
		return;
	}
}
// System.Void AugmentedScript::Update()
extern "C"  void AugmentedScript_Update_m2782863521 (AugmentedScript_t957426287 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AugmentedScript_Update_m2782863521_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = __this->get_originalPosition_15();
		Vector3_t3722313464  L_2 = __this->get_targetPosition_14();
		float L_3 = __this->get_speed_16();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Vector3_Lerp_m407887542(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_m3387557959(L_0, L_4, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = __this->get_targetPosition_14();
		__this->set_originalPosition_15(L_5);
		return;
	}
}
// System.Boolean AugmentedScript::<Start>m__0()
extern "C"  bool AugmentedScript_U3CStartU3Em__0_m1604391588 (AugmentedScript_t957426287 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		double L_0 = __this->get_currentLatitude_11();
		if ((!(((double)L_0) == ((double)(0.0)))))
		{
			goto IL_0027;
		}
	}
	{
		double L_1 = __this->get_currentLongitude_10();
		G_B3_0 = ((((double)L_1) == ((double)(0.0)))? 1 : 0);
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		return (bool)G_B3_0;
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
// System.Void AugmentedScript/<GetCoordinates>c__Iterator0::.ctor()
extern "C"  void U3CGetCoordinatesU3Ec__Iterator0__ctor_m1208291656 (U3CGetCoordinatesU3Ec__Iterator0_t3175107318 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean AugmentedScript/<GetCoordinates>c__Iterator0::MoveNext()
extern "C"  bool U3CGetCoordinatesU3Ec__Iterator0_MoveNext_m3017265402 (U3CGetCoordinatesU3Ec__Iterator0_t3175107318 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetCoordinatesU3Ec__Iterator0_MoveNext_m3017265402_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	LocationInfo_t1192161013  V_1;
	memset(&V_1, 0, sizeof(V_1));
	LocationInfo_t1192161013  V_2;
	memset(&V_2, 0, sizeof(V_2));
	LocationInfo_t1192161013  V_3;
	memset(&V_3, 0, sizeof(V_3));
	LocationInfo_t1192161013  V_4;
	memset(&V_4, 0, sizeof(V_4));
	LocationInfo_t1192161013  V_5;
	memset(&V_5, 0, sizeof(V_5));
	LocationInfo_t1192161013  V_6;
	memset(&V_6, 0, sizeof(V_6));
	LocationInfo_t1192161013  V_7;
	memset(&V_7, 0, sizeof(V_7));
	LocationInfo_t1192161013  V_8;
	memset(&V_8, 0, sizeof(V_8));
	LocationInfo_t1192161013  V_9;
	memset(&V_9, 0, sizeof(V_9));
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_007a;
			}
		}
	}
	{
		goto IL_027f;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		LocationService_t2839639379 * L_2 = Input_get_location_m1744795999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = LocationService_get_isEnabledByUser_m3325769302(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0035;
		}
	}
	{
		goto IL_027f;
	}

IL_0035:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		LocationService_t2839639379 * L_4 = Input_get_location_m1744795999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		LocationService_Start_m970336927(L_4, (1.0f), (0.1f), /*hidden argument*/NULL);
		__this->set_U3CmaxWaitU3E__1_0(((int32_t)20));
		goto IL_0088;
	}

IL_0056:
	{
		WaitForSeconds_t1699091251 * L_5 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_5, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_2(L_5);
		bool L_6 = __this->get_U24disposing_3();
		if (L_6)
		{
			goto IL_0075;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_0075:
	{
		goto IL_0281;
	}

IL_007a:
	{
		int32_t L_7 = __this->get_U3CmaxWaitU3E__1_0();
		__this->set_U3CmaxWaitU3E__1_0(((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)));
	}

IL_0088:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		LocationService_t2839639379 * L_8 = Input_get_location_m1744795999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9 = LocationService_get_status_m1450164038(L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_10 = __this->get_U3CmaxWaitU3E__1_0();
		if ((((int32_t)L_10) > ((int32_t)0)))
		{
			goto IL_0056;
		}
	}

IL_00a4:
	{
		int32_t L_11 = __this->get_U3CmaxWaitU3E__1_0();
		if ((((int32_t)L_11) >= ((int32_t)1)))
		{
			goto IL_00bf;
		}
	}
	{
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral1923429753, /*hidden argument*/NULL);
		goto IL_027f;
	}

IL_00bf:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		LocationService_t2839639379 * L_12 = Input_get_location_m1744795999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_12);
		int32_t L_13 = LocationService_get_status_m1450164038(L_12, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)3))))
		{
			goto IL_00de;
		}
	}
	{
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral150090019, /*hidden argument*/NULL);
		goto IL_027f;
	}

IL_00de:
	{
		ObjectU5BU5D_t2843939325* L_14 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10)));
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral114264161);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral114264161);
		ObjectU5BU5D_t2843939325* L_15 = L_14;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		LocationService_t2839639379 * L_16 = Input_get_location_m1744795999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_16);
		LocationInfo_t1192161013  L_17 = LocationService_get_lastData_m1985729390(L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		float L_18 = LocationInfo_get_latitude_m341869276((&V_1), /*hidden argument*/NULL);
		float L_19 = L_18;
		RuntimeObject * L_20 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_20);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_20);
		ObjectU5BU5D_t2843939325* L_21 = L_15;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral3452614528);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3452614528);
		ObjectU5BU5D_t2843939325* L_22 = L_21;
		LocationService_t2839639379 * L_23 = Input_get_location_m1744795999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_23);
		LocationInfo_t1192161013  L_24 = LocationService_get_lastData_m1985729390(L_23, /*hidden argument*/NULL);
		V_2 = L_24;
		float L_25 = LocationInfo_get_longitude_m1454980142((&V_2), /*hidden argument*/NULL);
		float L_26 = L_25;
		RuntimeObject * L_27 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_27);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_27);
		ObjectU5BU5D_t2843939325* L_28 = L_22;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteral3452614528);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral3452614528);
		ObjectU5BU5D_t2843939325* L_29 = L_28;
		LocationService_t2839639379 * L_30 = Input_get_location_m1744795999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_30);
		LocationInfo_t1192161013  L_31 = LocationService_get_lastData_m1985729390(L_30, /*hidden argument*/NULL);
		V_3 = L_31;
		float L_32 = LocationInfo_get_altitude_m2556363964((&V_3), /*hidden argument*/NULL);
		float L_33 = L_32;
		RuntimeObject * L_34 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_34);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_34);
		ObjectU5BU5D_t2843939325* L_35 = L_29;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, _stringLiteral3452614528);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral3452614528);
		ObjectU5BU5D_t2843939325* L_36 = L_35;
		LocationService_t2839639379 * L_37 = Input_get_location_m1744795999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_37);
		LocationInfo_t1192161013  L_38 = LocationService_get_lastData_m1985729390(L_37, /*hidden argument*/NULL);
		V_4 = L_38;
		float L_39 = LocationInfo_get_horizontalAccuracy_m1238049393((&V_4), /*hidden argument*/NULL);
		float L_40 = L_39;
		RuntimeObject * L_41 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_40);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_41);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_41);
		ObjectU5BU5D_t2843939325* L_42 = L_36;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, _stringLiteral3452614528);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)_stringLiteral3452614528);
		ObjectU5BU5D_t2843939325* L_43 = L_42;
		LocationService_t2839639379 * L_44 = Input_get_location_m1744795999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_44);
		LocationInfo_t1192161013  L_45 = LocationService_get_lastData_m1985729390(L_44, /*hidden argument*/NULL);
		V_5 = L_45;
		double L_46 = LocationInfo_get_timestamp_m3431861872((&V_5), /*hidden argument*/NULL);
		double L_47 = L_46;
		RuntimeObject * L_48 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_47);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_48);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)L_48);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_49 = String_Concat_m2971454694(NULL /*static, unused*/, L_43, /*hidden argument*/NULL);
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, L_49, /*hidden argument*/NULL);
		AugmentedScript_t957426287 * L_50 = __this->get_U24this_1();
		NullCheck(L_50);
		bool L_51 = L_50->get_setOriginalValues_13();
		if (!L_51)
		{
			goto IL_01f4;
		}
	}
	{
		AugmentedScript_t957426287 * L_52 = __this->get_U24this_1();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		LocationService_t2839639379 * L_53 = Input_get_location_m1744795999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_53);
		LocationInfo_t1192161013  L_54 = LocationService_get_lastData_m1985729390(L_53, /*hidden argument*/NULL);
		V_6 = L_54;
		float L_55 = LocationInfo_get_latitude_m341869276((&V_6), /*hidden argument*/NULL);
		NullCheck(L_52);
		L_52->set_originalLatitude_8(L_55);
		AugmentedScript_t957426287 * L_56 = __this->get_U24this_1();
		LocationService_t2839639379 * L_57 = Input_get_location_m1744795999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_57);
		LocationInfo_t1192161013  L_58 = LocationService_get_lastData_m1985729390(L_57, /*hidden argument*/NULL);
		V_7 = L_58;
		float L_59 = LocationInfo_get_longitude_m1454980142((&V_7), /*hidden argument*/NULL);
		NullCheck(L_56);
		L_56->set_originalLongitude_9(L_59);
		AugmentedScript_t957426287 * L_60 = __this->get_U24this_1();
		NullCheck(L_60);
		L_60->set_setOriginalValues_13((bool)0);
	}

IL_01f4:
	{
		AugmentedScript_t957426287 * L_61 = __this->get_U24this_1();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		LocationService_t2839639379 * L_62 = Input_get_location_m1744795999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_62);
		LocationInfo_t1192161013  L_63 = LocationService_get_lastData_m1985729390(L_62, /*hidden argument*/NULL);
		V_8 = L_63;
		float L_64 = LocationInfo_get_latitude_m341869276((&V_8), /*hidden argument*/NULL);
		NullCheck(L_61);
		L_61->set_currentLatitude_11((((double)((double)L_64))));
		AugmentedScript_t957426287 * L_65 = __this->get_U24this_1();
		LocationService_t2839639379 * L_66 = Input_get_location_m1744795999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_66);
		LocationInfo_t1192161013  L_67 = LocationService_get_lastData_m1985729390(L_66, /*hidden argument*/NULL);
		V_9 = L_67;
		float L_68 = LocationInfo_get_longitude_m1454980142((&V_9), /*hidden argument*/NULL);
		NullCheck(L_65);
		L_65->set_currentLongitude_10((((double)((double)L_68))));
		AugmentedScript_t957426287 * L_69 = __this->get_U24this_1();
		AugmentedScript_t957426287 * L_70 = __this->get_U24this_1();
		NullCheck(L_70);
		float L_71 = L_70->get_originalLatitude_8();
		AugmentedScript_t957426287 * L_72 = __this->get_U24this_1();
		NullCheck(L_72);
		float L_73 = L_72->get_originalLongitude_9();
		AugmentedScript_t957426287 * L_74 = __this->get_U24this_1();
		NullCheck(L_74);
		double L_75 = L_74->get_currentLatitude_11();
		AugmentedScript_t957426287 * L_76 = __this->get_U24this_1();
		NullCheck(L_76);
		double L_77 = L_76->get_currentLongitude_10();
		NullCheck(L_69);
		AugmentedScript_Calc_m3282814742(L_69, L_71, L_73, L_75, L_77, /*hidden argument*/NULL);
		LocationService_t2839639379 * L_78 = Input_get_location_m1744795999(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_78);
		LocationService_Stop_m2430709999(L_78, /*hidden argument*/NULL);
		goto IL_0021;
	}
	// Dead block : IL_0278: ldarg.0

IL_027f:
	{
		return (bool)0;
	}

IL_0281:
	{
		return (bool)1;
	}
}
// System.Object AugmentedScript/<GetCoordinates>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CGetCoordinatesU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m156510544 (U3CGetCoordinatesU3Ec__Iterator0_t3175107318 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object AugmentedScript/<GetCoordinates>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CGetCoordinatesU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3193273673 (U3CGetCoordinatesU3Ec__Iterator0_t3175107318 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void AugmentedScript/<GetCoordinates>c__Iterator0::Dispose()
extern "C"  void U3CGetCoordinatesU3Ec__Iterator0_Dispose_m2384040839 (U3CGetCoordinatesU3Ec__Iterator0_t3175107318 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void AugmentedScript/<GetCoordinates>c__Iterator0::Reset()
extern "C"  void U3CGetCoordinatesU3Ec__Iterator0_Reset_m1151486407 (U3CGetCoordinatesU3Ec__Iterator0_t3175107318 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetCoordinatesU3Ec__Iterator0_Reset_m1151486407_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void CameraSettings::.ctor()
extern "C"  void CameraSettings__ctor_m3533038972 (CameraSettings_t3152619780 * __this, const RuntimeMethod* method)
{
	{
		__this->set_mAutofocusEnabled_3((bool)1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraSettings::Start()
extern "C"  void CameraSettings_Start_m1913056950 (CameraSettings_t3152619780 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraSettings_Start_m1913056950_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VuforiaARController_t1876945237 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaARController_t1876945237_il2cpp_TypeInfo_var);
		VuforiaARController_t1876945237 * L_0 = VuforiaARController_get_Instance_m1100644214(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		VuforiaARController_t1876945237 * L_1 = V_0;
		intptr_t L_2 = (intptr_t)CameraSettings_OnVuforiaStarted_m924645186_RuntimeMethod_var;
		Action_t1264377477 * L_3 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		VuforiaARController_RegisterVuforiaStartedCallback_m3258152770(L_1, L_3, /*hidden argument*/NULL);
		VuforiaARController_t1876945237 * L_4 = V_0;
		intptr_t L_5 = (intptr_t)CameraSettings_OnPaused_m1743728020_RuntimeMethod_var;
		Action_1_t269755560 * L_6 = (Action_1_t269755560 *)il2cpp_codegen_object_new(Action_1_t269755560_il2cpp_TypeInfo_var);
		Action_1__ctor_m2079027267(L_6, __this, L_5, /*hidden argument*/Action_1__ctor_m2079027267_RuntimeMethod_var);
		NullCheck(L_4);
		VuforiaARController_RegisterOnPauseCallback_m1833237148(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean CameraSettings::IsFlashTorchEnabled()
extern "C"  bool CameraSettings_IsFlashTorchEnabled_m3875252701 (CameraSettings_t3152619780 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_mFlashTorchEnabled_4();
		return L_0;
	}
}
// System.Void CameraSettings::SwitchFlashTorch(System.Boolean)
extern "C"  void CameraSettings_SwitchFlashTorch_m1540789541 (CameraSettings_t3152619780 * __this, bool ___ON0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraSettings_SwitchFlashTorch_m1540789541_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_0 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_1 = ___ON0;
		NullCheck(L_0);
		bool L_2 = CameraDevice_SetFlashTorchMode_m1499936922(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		bool L_3 = ___ON0;
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral328110920, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		bool L_7 = ___ON0;
		__this->set_mFlashTorchEnabled_4(L_7);
		goto IL_004d;
	}

IL_0031:
	{
		bool L_8 = ___ON0;
		bool L_9 = L_8;
		RuntimeObject * L_10 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3558393413, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		__this->set_mFlashTorchEnabled_4((bool)0);
	}

IL_004d:
	{
		return;
	}
}
// System.Boolean CameraSettings::IsAutofocusEnabled()
extern "C"  bool CameraSettings_IsAutofocusEnabled_m386305083 (CameraSettings_t3152619780 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_mAutofocusEnabled_3();
		return L_0;
	}
}
// System.Void CameraSettings::SwitchAutofocus(System.Boolean)
extern "C"  void CameraSettings_SwitchAutofocus_m1104105893 (CameraSettings_t3152619780 * __this, bool ___ON0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraSettings_SwitchAutofocus_m1104105893_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___ON0;
		if (!L_0)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_1 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = CameraDevice_SetFocusMode_m2424803588(L_1, 2, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1601691866, /*hidden argument*/NULL);
		__this->set_mAutofocusEnabled_3((bool)1);
		goto IL_0049;
	}

IL_002c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1647848890, /*hidden argument*/NULL);
		__this->set_mAutofocusEnabled_3((bool)0);
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_3 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		CameraDevice_SetFocusMode_m2424803588(L_3, 0, /*hidden argument*/NULL);
	}

IL_0049:
	{
		goto IL_006b;
	}

IL_004e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3666098040, /*hidden argument*/NULL);
		__this->set_mAutofocusEnabled_3((bool)0);
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_4 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		CameraDevice_SetFocusMode_m2424803588(L_4, 0, /*hidden argument*/NULL);
	}

IL_006b:
	{
		return;
	}
}
// System.Void CameraSettings::TriggerAutofocusEvent()
extern "C"  void CameraSettings_TriggerAutofocusEvent_m898525935 (CameraSettings_t3152619780 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraSettings_TriggerAutofocusEvent_m898525935_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_0 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		CameraDevice_SetFocusMode_m2424803588(L_0, 1, /*hidden argument*/NULL);
		RuntimeObject* L_1 = CameraSettings_RestoreOriginalFocusMode_m3433876528(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraSettings::SelectCamera(Vuforia.CameraDevice/CameraDirection)
extern "C"  void CameraSettings_SelectCamera_m387205834 (CameraSettings_t3152619780 * __this, int32_t ___camDir0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___camDir0;
		bool L_1 = CameraSettings_RestartCamera_m1627822698(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___camDir0;
		__this->set_mActiveDirection_5(L_2);
		__this->set_mFlashTorchEnabled_4((bool)0);
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean CameraSettings::IsFrontCameraActive()
extern "C"  bool CameraSettings_IsFrontCameraActive_m282456036 (CameraSettings_t3152619780 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_mActiveDirection_5();
		return (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// System.Void CameraSettings::OnVuforiaStarted()
extern "C"  void CameraSettings_OnVuforiaStarted_m924645186 (CameraSettings_t3152619780 * __this, const RuntimeMethod* method)
{
	{
		__this->set_mVuforiaStarted_2((bool)1);
		CameraSettings_SwitchAutofocus_m1104105893(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraSettings::OnPaused(System.Boolean)
extern "C"  void CameraSettings_OnPaused_m1743728020 (CameraSettings_t3152619780 * __this, bool ___paused0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraSettings_OnPaused_m1743728020_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ___paused0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0043;
		}
	}
	{
		bool L_2 = __this->get_mVuforiaStarted_2();
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		bool L_3 = __this->get_mAutofocusEnabled_3();
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_4 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		CameraDevice_SetFocusMode_m2424803588(L_4, 2, /*hidden argument*/NULL);
		goto IL_003e;
	}

IL_0032:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_5 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		CameraDevice_SetFocusMode_m2424803588(L_5, 0, /*hidden argument*/NULL);
	}

IL_003e:
	{
		goto IL_004a;
	}

IL_0043:
	{
		__this->set_mFlashTorchEnabled_4((bool)0);
	}

IL_004a:
	{
		return;
	}
}
// System.Collections.IEnumerator CameraSettings::RestoreOriginalFocusMode()
extern "C"  RuntimeObject* CameraSettings_RestoreOriginalFocusMode_m3433876528 (CameraSettings_t3152619780 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraSettings_RestoreOriginalFocusMode_m3433876528_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229 * V_0 = NULL;
	{
		U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229 * L_0 = (U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229 *)il2cpp_codegen_object_new(U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229_il2cpp_TypeInfo_var);
		U3CRestoreOriginalFocusModeU3Ec__Iterator0__ctor_m1994535627(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_0(__this);
		U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229 * L_2 = V_0;
		return L_2;
	}
}
// System.Boolean CameraSettings::RestartCamera(Vuforia.CameraDevice/CameraDirection)
extern "C"  bool CameraSettings_RestartCamera_m1627822698 (CameraSettings_t3152619780 * __this, int32_t ___direction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraSettings_RestartCamera_m1627822698_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectTracker_t4177997237 * V_0 = NULL;
	{
		RuntimeObject* L_0 = TrackerManager_get_Instance_m777262631(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectTracker_t4177997237 * L_1 = GenericInterfaceFuncInvoker0< ObjectTracker_t4177997237 * >::Invoke(ITrackerManager_GetTracker_TisObjectTracker_t4177997237_m1548597255_RuntimeMethod_var, L_0);
		V_0 = L_1;
		ObjectTracker_t4177997237 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		ObjectTracker_t4177997237 * L_3 = V_0;
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(5 /* System.Void Vuforia.Tracker::Stop() */, L_3);
	}

IL_0017:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_4 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		CameraDevice_Stop_m1782631459(L_4, /*hidden argument*/NULL);
		CameraDevice_t960297568 * L_5 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		CameraDevice_Deinit_m726427492(L_5, /*hidden argument*/NULL);
		CameraDevice_t960297568 * L_6 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_7 = ___direction0;
		NullCheck(L_6);
		bool L_8 = CameraDevice_Init_m2722714107(L_6, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_005b;
		}
	}
	{
		RuntimeObject * L_9 = Box(CameraDirection_t637748435_il2cpp_TypeInfo_var, (&___direction0));
		NullCheck(L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		___direction0 = *(int32_t*)UnBox(L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral4178167562, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_005b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_12 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_12);
		bool L_13 = CameraDevice_Start_m2947498176(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0088;
		}
	}
	{
		RuntimeObject * L_14 = Box(CameraDirection_t637748435_il2cpp_TypeInfo_var, (&___direction0));
		NullCheck(L_14);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		___direction0 = *(int32_t*)UnBox(L_14);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3976947749, L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0088:
	{
		ObjectTracker_t4177997237 * L_17 = V_0;
		if (!L_17)
		{
			goto IL_00a5;
		}
	}
	{
		ObjectTracker_t4177997237 * L_18 = V_0;
		NullCheck(L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean Vuforia.Tracker::Start() */, L_18);
		if (L_19)
		{
			goto IL_00a5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1322537578, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_00a5:
	{
		return (bool)1;
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
// System.Void CameraSettings/<RestoreOriginalFocusMode>c__Iterator0::.ctor()
extern "C"  void U3CRestoreOriginalFocusModeU3Ec__Iterator0__ctor_m1994535627 (U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean CameraSettings/<RestoreOriginalFocusMode>c__Iterator0::MoveNext()
extern "C"  bool U3CRestoreOriginalFocusModeU3Ec__Iterator0_MoveNext_m3953872261 (U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRestoreOriginalFocusModeU3Ec__Iterator0_MoveNext_m3953872261_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0045;
			}
		}
	}
	{
		goto IL_0079;
	}

IL_0021:
	{
		WaitForSeconds_t1699091251 * L_2 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_2, (1.5f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_2);
		bool L_3 = __this->get_U24disposing_2();
		if (L_3)
		{
			goto IL_0040;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0040:
	{
		goto IL_007b;
	}

IL_0045:
	{
		CameraSettings_t3152619780 * L_4 = __this->get_U24this_0();
		NullCheck(L_4);
		bool L_5 = L_4->get_mAutofocusEnabled_3();
		if (!L_5)
		{
			goto IL_0066;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_6 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		CameraDevice_SetFocusMode_m2424803588(L_6, 2, /*hidden argument*/NULL);
		goto IL_0072;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CameraDevice_t960297568_il2cpp_TypeInfo_var);
		CameraDevice_t960297568 * L_7 = CameraDevice_get_Instance_m2002290155(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		CameraDevice_SetFocusMode_m2424803588(L_7, 0, /*hidden argument*/NULL);
	}

IL_0072:
	{
		__this->set_U24PC_3((-1));
	}

IL_0079:
	{
		return (bool)0;
	}

IL_007b:
	{
		return (bool)1;
	}
}
// System.Object CameraSettings/<RestoreOriginalFocusMode>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CRestoreOriginalFocusModeU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1094649693 (U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object CameraSettings/<RestoreOriginalFocusMode>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CRestoreOriginalFocusModeU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1550947433 (U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void CameraSettings/<RestoreOriginalFocusMode>c__Iterator0::Dispose()
extern "C"  void U3CRestoreOriginalFocusModeU3Ec__Iterator0_Dispose_m2241939766 (U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void CameraSettings/<RestoreOriginalFocusMode>c__Iterator0::Reset()
extern "C"  void U3CRestoreOriginalFocusModeU3Ec__Iterator0_Reset_m884766291 (U3CRestoreOriginalFocusModeU3Ec__Iterator0_t2912012229 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRestoreOriginalFocusModeU3Ec__Iterator0_Reset_m884766291_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void DefaultInitializationErrorHandler::.ctor()
extern "C"  void DefaultInitializationErrorHandler__ctor_m2145257936 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler__ctor_m2145257936_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_mErrorText_2(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::OnVuforiaInitializationError(Vuforia.VuforiaUnity/InitError)
extern "C"  void DefaultInitializationErrorHandler_OnVuforiaInitializationError_m512807497 (DefaultInitializationErrorHandler_t3109936861 * __this, int32_t ___initError0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___initError0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = ___initError0;
		DefaultInitializationErrorHandler_SetErrorCode_m599033302(__this, L_1, /*hidden argument*/NULL);
		DefaultInitializationErrorHandler_SetErrorOccurred_m1940230672(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::Awake()
extern "C"  void DefaultInitializationErrorHandler_Awake_m1713298888 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_Awake_m1713298888_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntime_t1949122020_il2cpp_TypeInfo_var);
		VuforiaRuntime_t1949122020 * L_0 = VuforiaRuntime_get_Instance_m1058251676(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_1 = (intptr_t)DefaultInitializationErrorHandler_OnVuforiaInitializationError_m512807497_RuntimeMethod_var;
		Action_1_t3593217305 * L_2 = (Action_1_t3593217305 *)il2cpp_codegen_object_new(Action_1_t3593217305_il2cpp_TypeInfo_var);
		Action_1__ctor_m2713332384(L_2, __this, L_1, /*hidden argument*/Action_1__ctor_m2713332384_RuntimeMethod_var);
		NullCheck(L_0);
		VuforiaRuntime_RegisterVuforiaInitErrorCallback_m2728879505(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::Start()
extern "C"  void DefaultInitializationErrorHandler_Start_m2498604264 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	{
		DefaultInitializationErrorHandler_SetupGUIStyles_m3863535424(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::OnGUI()
extern "C"  void DefaultInitializationErrorHandler_OnGUI_m2338842741 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_OnGUI_m2338842741_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_mErrorOccurred_3();
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_1 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t2360479859  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Rect__ctor_m2614021312((&L_3), (0.0f), (0.0f), (((float)((float)L_1))), (((float)((float)L_2))), /*hidden argument*/NULL);
		intptr_t L_4 = (intptr_t)DefaultInitializationErrorHandler_DrawWindowContent_m2208378571_RuntimeMethod_var;
		WindowFunction_t3146511083 * L_5 = (WindowFunction_t3146511083 *)il2cpp_codegen_object_new(WindowFunction_t3146511083_il2cpp_TypeInfo_var);
		WindowFunction__ctor_m2544237635(L_5, __this, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUI_Window_m1088326791(NULL /*static, unused*/, 0, L_3, L_5, L_6, /*hidden argument*/NULL);
	}

IL_003e:
	{
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::OnDestroy()
extern "C"  void DefaultInitializationErrorHandler_OnDestroy_m3668093536 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_OnDestroy_m3668093536_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntime_t1949122020_il2cpp_TypeInfo_var);
		VuforiaRuntime_t1949122020 * L_0 = VuforiaRuntime_get_Instance_m1058251676(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_1 = (intptr_t)DefaultInitializationErrorHandler_OnVuforiaInitializationError_m512807497_RuntimeMethod_var;
		Action_1_t3593217305 * L_2 = (Action_1_t3593217305 *)il2cpp_codegen_object_new(Action_1_t3593217305_il2cpp_TypeInfo_var);
		Action_1__ctor_m2713332384(L_2, __this, L_1, /*hidden argument*/Action_1__ctor_m2713332384_RuntimeMethod_var);
		NullCheck(L_0);
		VuforiaRuntime_UnregisterVuforiaInitErrorCallback_m1304340042(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::DrawWindowContent(System.Int32)
extern "C"  void DefaultInitializationErrorHandler_DrawWindowContent_m2208378571 (DefaultInitializationErrorHandler_t3109936861 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_DrawWindowContent_m2208378571_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Rect_t2360479859  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Rect_t2360479859  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		int32_t L_0 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect__ctor_m2614021312((&V_0), (0.0f), (0.0f), (((float)((float)L_0))), (((float)((float)((int32_t)((int32_t)L_1/(int32_t)8))))), /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_4 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect__ctor_m2614021312((&V_1), (0.0f), (((float)((float)((int32_t)((int32_t)L_2/(int32_t)8))))), (((float)((float)L_3))), (((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_4/(int32_t)8)), (int32_t)6))))), /*hidden argument*/NULL);
		int32_t L_5 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_6 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_7 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_8 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect__ctor_m2614021312((&V_2), (0.0f), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)((int32_t)L_6/(int32_t)8))))))), (((float)((float)L_7))), (((float)((float)((int32_t)((int32_t)L_8/(int32_t)8))))), /*hidden argument*/NULL);
		Rect_t2360479859  L_9 = V_0;
		GUIStyle_t3956901511 * L_10 = __this->get_headerStyle_6();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUI_Label_m2420537077(NULL /*static, unused*/, L_9, _stringLiteral2016908147, L_10, /*hidden argument*/NULL);
		Rect_t2360479859  L_11 = V_1;
		String_t* L_12 = __this->get_mErrorText_2();
		GUIStyle_t3956901511 * L_13 = __this->get_bodyStyle_5();
		GUI_Label_m2420537077(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/NULL);
		Rect_t2360479859  L_14 = V_2;
		GUIStyle_t3956901511 * L_15 = __this->get_footerStyle_7();
		bool L_16 = GUI_Button_m2223708732(NULL /*static, unused*/, L_14, _stringLiteral3483484711, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00a9;
		}
	}
	{
		Application_Quit_m470877999(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_00a9:
	{
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::SetErrorCode(Vuforia.VuforiaUnity/InitError)
extern "C"  void DefaultInitializationErrorHandler_SetErrorCode_m599033302 (DefaultInitializationErrorHandler_t3109936861 * __this, int32_t ___errorCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_SetErrorCode_m599033302_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0 = ___errorCode0;
		switch (((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)10))))
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_00ac;
			}
			case 2:
			{
				goto IL_0091;
			}
			case 3:
			{
				goto IL_0071;
			}
			case 4:
			{
				goto IL_0081;
			}
			case 5:
			{
				goto IL_0056;
			}
			case 6:
			{
				goto IL_0046;
			}
			case 7:
			{
				goto IL_00cc;
			}
			case 8:
			{
				goto IL_00eb;
			}
			case 9:
			{
				goto IL_00fb;
			}
		}
	}
	{
		goto IL_010b;
	}

IL_0036:
	{
		__this->set_mErrorText_2(_stringLiteral3279329212);
		goto IL_010b;
	}

IL_0046:
	{
		__this->set_mErrorText_2(_stringLiteral3325583105);
		goto IL_010b;
	}

IL_0056:
	{
		String_t* L_1 = DefaultInitializationErrorHandler_getKeyInfo_m1864640064(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1253325676, L_1, /*hidden argument*/NULL);
		__this->set_mErrorText_2(L_2);
		goto IL_010b;
	}

IL_0071:
	{
		__this->set_mErrorText_2(_stringLiteral2959890895);
		goto IL_010b;
	}

IL_0081:
	{
		__this->set_mErrorText_2(_stringLiteral2293327149);
		goto IL_010b;
	}

IL_0091:
	{
		String_t* L_3 = DefaultInitializationErrorHandler_getKeyInfo_m1864640064(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2746077084, L_3, /*hidden argument*/NULL);
		__this->set_mErrorText_2(L_4);
		goto IL_010b;
	}

IL_00ac:
	{
		String_t* L_5 = DefaultInitializationErrorHandler_getKeyInfo_m1864640064(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral2746058527, L_5, _stringLiteral491174246, /*hidden argument*/NULL);
		__this->set_mErrorText_2(L_6);
		goto IL_010b;
	}

IL_00cc:
	{
		String_t* L_7 = Application_get_productName_m2401755738(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3183081100, L_7, _stringLiteral868600955, /*hidden argument*/NULL);
		__this->set_mErrorText_2(L_8);
		goto IL_010b;
	}

IL_00eb:
	{
		__this->set_mErrorText_2(_stringLiteral3122929577);
		goto IL_010b;
	}

IL_00fb:
	{
		__this->set_mErrorText_2(_stringLiteral3567432369);
		goto IL_010b;
	}

IL_010b:
	{
		RuntimeObject * L_9 = Box(InitError_t3420749710_il2cpp_TypeInfo_var, (&___errorCode0));
		NullCheck(L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		___errorCode0 = *(int32_t*)UnBox(L_9);
		NullCheck(L_10);
		String_t* L_11 = String_Replace_m1273907647(L_10, _stringLiteral3452614641, _stringLiteral3452614528, /*hidden argument*/NULL);
		String_t* L_12 = __this->get_mErrorText_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral229317972, L_11, _stringLiteral2072581803, L_12, /*hidden argument*/NULL);
		__this->set_mErrorText_2(L_13);
		String_t* L_14 = __this->get_mErrorText_2();
		String_t* L_15 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_14);
		String_t* L_16 = String_Replace_m1273907647(L_14, _stringLiteral229317972, L_15, /*hidden argument*/NULL);
		String_t* L_17 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_16);
		String_t* L_18 = String_Replace_m1273907647(L_16, _stringLiteral2642543365, L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		ObjectU5BU5D_t2843939325* L_19 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral3752705136);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3752705136);
		ObjectU5BU5D_t2843939325* L_20 = L_19;
		int32_t L_21 = ___errorCode0;
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(InitError_t3420749710_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_23);
		ObjectU5BU5D_t2843939325* L_24 = L_20;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral3453007782);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3453007782);
		ObjectU5BU5D_t2843939325* L_25 = L_24;
		String_t* L_26 = V_0;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_26);
		String_t* L_27 = String_Concat_m2971454694(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::SetErrorOccurred(System.Boolean)
extern "C"  void DefaultInitializationErrorHandler_SetErrorOccurred_m1940230672 (DefaultInitializationErrorHandler_t3109936861 * __this, bool ___errorOccurred0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___errorOccurred0;
		__this->set_mErrorOccurred_3(L_0);
		return;
	}
}
// System.String DefaultInitializationErrorHandler::getKeyInfo()
extern "C"  String_t* DefaultInitializationErrorHandler_getKeyInfo_m1864640064 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_getKeyInfo_m1864640064_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaConfiguration_t1763229349_il2cpp_TypeInfo_var);
		VuforiaConfiguration_t1763229349 * L_0 = VuforiaConfiguration_get_Instance_m3335903280(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GenericVuforiaConfiguration_t3697830469 * L_1 = VuforiaConfiguration_get_Vuforia_m1588208597(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GenericVuforiaConfiguration_get_LicenseKey_m2270076687(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m3847582255(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)10))))
		{
			goto IL_0079;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_5 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)7));
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral1431967569);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1431967569);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		String_t* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m3847582255(L_7, /*hidden argument*/NULL);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_10);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		ObjectU5BU5D_t2843939325* L_11 = L_6;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral3797279721);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3797279721);
		ObjectU5BU5D_t2843939325* L_12 = L_11;
		String_t* L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14 = String_Substring_m1610150815(L_13, 0, 5, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_14);
		ObjectU5BU5D_t2843939325* L_15 = L_12;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral1108443480);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral1108443480);
		ObjectU5BU5D_t2843939325* L_16 = L_15;
		String_t* L_17 = V_0;
		String_t* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_m3847582255(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		String_t* L_20 = String_Substring_m1610150815(L_17, ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)5)), 5, /*hidden argument*/NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_20);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_20);
		ObjectU5BU5D_t2843939325* L_21 = L_16;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral2072975055);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral2072975055);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m2971454694(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		V_1 = L_22;
		goto IL_00af;
	}

IL_0079:
	{
		ObjectU5BU5D_t2843939325* L_23 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral1431967569);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1431967569);
		ObjectU5BU5D_t2843939325* L_24 = L_23;
		String_t* L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = String_get_Length_m3847582255(L_25, /*hidden argument*/NULL);
		int32_t L_27 = L_26;
		RuntimeObject * L_28 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_28);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_28);
		ObjectU5BU5D_t2843939325* L_29 = L_24;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral1498400317);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral1498400317);
		ObjectU5BU5D_t2843939325* L_30 = L_29;
		String_t* L_31 = V_0;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_31);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_31);
		ObjectU5BU5D_t2843939325* L_32 = L_30;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteral2072975055);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral2072975055);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_33 = String_Concat_m2971454694(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		V_1 = L_33;
	}

IL_00af:
	{
		String_t* L_34 = V_1;
		return L_34;
	}
}
// System.Void DefaultInitializationErrorHandler::SetupGUIStyles()
extern "C"  void DefaultInitializationErrorHandler_SetupGUIStyles_m3863535424 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_SetupGUIStyles_m3863535424_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001e;
	}

IL_0019:
	{
		int32_t L_3 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_001e:
	{
		V_0 = G_B3_0;
		int32_t L_4 = V_0;
		float L_5 = Screen_get_dpi_m495672463(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((float)((float)(((float)((float)L_4)))/(float)L_5));
		float L_6 = V_1;
		if ((!(((float)L_6) > ((float)(4.0f)))))
		{
			goto IL_0039;
		}
	}
	{
		G_B6_0 = 2;
		goto IL_003a;
	}

IL_0039:
	{
		G_B6_0 = 1;
	}

IL_003a:
	{
		V_2 = G_B6_0;
		Color_t2555686324  L_7 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_8 = DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749(__this, L_7, /*hidden argument*/NULL);
		__this->set_bodyTexture_8(L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_9 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (220.0f), /*hidden argument*/NULL);
		float L_10 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (220.0f), /*hidden argument*/NULL);
		float L_11 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (220.0f), /*hidden argument*/NULL);
		Color_t2555686324  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Color__ctor_m286683560((&L_12), L_9, L_10, L_11, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_13 = DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749(__this, L_12, /*hidden argument*/NULL);
		__this->set_headerTexture_9(L_13);
		float L_14 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (35.0f), /*hidden argument*/NULL);
		float L_15 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (178.0f), /*hidden argument*/NULL);
		float L_16 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (0.0f), /*hidden argument*/NULL);
		Color_t2555686324  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Color__ctor_m286683560((&L_17), L_14, L_15, L_16, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_18 = DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749(__this, L_17, /*hidden argument*/NULL);
		__this->set_footerTexture_10(L_18);
		GUIStyle_t3956901511 * L_19 = (GUIStyle_t3956901511 *)il2cpp_codegen_object_new(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4038363858(L_19, /*hidden argument*/NULL);
		__this->set_bodyStyle_5(L_19);
		GUIStyle_t3956901511 * L_20 = __this->get_bodyStyle_5();
		NullCheck(L_20);
		GUIStyleState_t1397964415 * L_21 = GUIStyle_get_normal_m729441812(L_20, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_22 = __this->get_bodyTexture_8();
		NullCheck(L_21);
		GUIStyleState_set_background_m369476077(L_21, L_22, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_23 = __this->get_bodyStyle_5();
		Font_t1956802104 * L_24 = Resources_GetBuiltinResource_TisFont_t1956802104_m2738776830(NULL /*static, unused*/, _stringLiteral2974894664, /*hidden argument*/Resources_GetBuiltinResource_TisFont_t1956802104_m2738776830_RuntimeMethod_var);
		NullCheck(L_23);
		GUIStyle_set_font_m2490449107(L_23, L_24, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_25 = __this->get_bodyStyle_5();
		int32_t L_26 = V_2;
		float L_27 = Screen_get_dpi_m495672463(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_25);
		GUIStyle_set_fontSize_m1566850023(L_25, (((int32_t)((int32_t)((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)18), (int32_t)L_26))))), (float)L_27))/(float)(160.0f)))))), /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_28 = __this->get_bodyStyle_5();
		NullCheck(L_28);
		GUIStyleState_t1397964415 * L_29 = GUIStyle_get_normal_m729441812(L_28, /*hidden argument*/NULL);
		Color_t2555686324  L_30 = Color_get_black_m719512684(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_29);
		GUIStyleState_set_textColor_m1105876047(L_29, L_30, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_31 = __this->get_bodyStyle_5();
		NullCheck(L_31);
		GUIStyle_set_wordWrap_m1419501823(L_31, (bool)1, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_32 = __this->get_bodyStyle_5();
		NullCheck(L_32);
		GUIStyle_set_alignment_m3944619660(L_32, 4, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_33 = __this->get_bodyStyle_5();
		RectOffset_t1369453676 * L_34 = (RectOffset_t1369453676 *)il2cpp_codegen_object_new(RectOffset_t1369453676_il2cpp_TypeInfo_var);
		RectOffset__ctor_m732140021(L_34, ((int32_t)40), ((int32_t)40), 0, 0, /*hidden argument*/NULL);
		NullCheck(L_33);
		GUIStyle_set_padding_m3302456044(L_33, L_34, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_35 = __this->get_bodyStyle_5();
		GUIStyle_t3956901511 * L_36 = (GUIStyle_t3956901511 *)il2cpp_codegen_object_new(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2912682974(L_36, L_35, /*hidden argument*/NULL);
		__this->set_headerStyle_6(L_36);
		GUIStyle_t3956901511 * L_37 = __this->get_headerStyle_6();
		NullCheck(L_37);
		GUIStyleState_t1397964415 * L_38 = GUIStyle_get_normal_m729441812(L_37, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_39 = __this->get_headerTexture_9();
		NullCheck(L_38);
		GUIStyleState_set_background_m369476077(L_38, L_39, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_40 = __this->get_headerStyle_6();
		int32_t L_41 = V_2;
		float L_42 = Screen_get_dpi_m495672463(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_40);
		GUIStyle_set_fontSize_m1566850023(L_40, (((int32_t)((int32_t)((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)24), (int32_t)L_41))))), (float)L_42))/(float)(160.0f)))))), /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_43 = __this->get_bodyStyle_5();
		GUIStyle_t3956901511 * L_44 = (GUIStyle_t3956901511 *)il2cpp_codegen_object_new(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2912682974(L_44, L_43, /*hidden argument*/NULL);
		__this->set_footerStyle_7(L_44);
		GUIStyle_t3956901511 * L_45 = __this->get_footerStyle_7();
		NullCheck(L_45);
		GUIStyleState_t1397964415 * L_46 = GUIStyle_get_normal_m729441812(L_45, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_47 = __this->get_footerTexture_10();
		NullCheck(L_46);
		GUIStyleState_set_background_m369476077(L_46, L_47, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_48 = __this->get_footerStyle_7();
		NullCheck(L_48);
		GUIStyleState_t1397964415 * L_49 = GUIStyle_get_normal_m729441812(L_48, /*hidden argument*/NULL);
		Color_t2555686324  L_50 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_49);
		GUIStyleState_set_textColor_m1105876047(L_49, L_50, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_51 = __this->get_footerStyle_7();
		int32_t L_52 = V_2;
		float L_53 = Screen_get_dpi_m495672463(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_51);
		GUIStyle_set_fontSize_m1566850023(L_51, (((int32_t)((int32_t)((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)28), (int32_t)L_52))))), (float)L_53))/(float)(160.0f)))))), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Texture2D DefaultInitializationErrorHandler::CreateSinglePixelTexture(UnityEngine.Color)
extern "C"  Texture2D_t3840446185 * DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749 (DefaultInitializationErrorHandler_t3109936861 * __this, Color_t2555686324  ___color0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_CreateSinglePixelTexture_m424000749_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t3840446185 * V_0 = NULL;
	{
		Texture2D_t3840446185 * L_0 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m2862217990(L_0, 1, 1, 5, (bool)0, /*hidden argument*/NULL);
		V_0 = L_0;
		Texture2D_t3840446185 * L_1 = V_0;
		Color_t2555686324  L_2 = ___color0;
		NullCheck(L_1);
		Texture2D_SetPixel_m2984741184(L_1, 0, 0, L_2, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_3 = V_0;
		NullCheck(L_3);
		Texture2D_Apply_m2271746283(L_3, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_4 = V_0;
		return L_4;
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
// System.Void DefaultTrackableEventHandler::.ctor()
extern "C"  void DefaultTrackableEventHandler__ctor_m2856359002 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultTrackableEventHandler::Start()
extern "C"  void DefaultTrackableEventHandler_Start_m796446126 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_Start_m796446126_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackableBehaviour_t1113559212 * L_0 = Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408(__this, /*hidden argument*/Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408_RuntimeMethod_var);
		__this->set_mTrackableBehaviour_2(L_0);
		TrackableBehaviour_t1113559212 * L_1 = __this->get_mTrackableBehaviour_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		TrackableBehaviour_t1113559212 * L_3 = __this->get_mTrackableBehaviour_2();
		NullCheck(L_3);
		TrackableBehaviour_RegisterTrackableEventHandler_m2462783619(L_3, __this, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Void DefaultTrackableEventHandler::OnTrackableStateChanged(Vuforia.TrackableBehaviour/Status,Vuforia.TrackableBehaviour/Status)
extern "C"  void DefaultTrackableEventHandler_OnTrackableStateChanged_m77027111 (DefaultTrackableEventHandler_t1588957063 * __this, int32_t ___previousStatus0, int32_t ___newStatus1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_OnTrackableStateChanged_m77027111_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___newStatus1;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = ___newStatus1;
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = ___newStatus1;
		if ((!(((uint32_t)L_2) == ((uint32_t)4))))
		{
			goto IL_003f;
		}
	}

IL_0015:
	{
		TrackableBehaviour_t1113559212 * L_3 = __this->get_mTrackableBehaviour_2();
		NullCheck(L_3);
		String_t* L_4 = TrackableBehaviour_get_TrackableName_m3644057705(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3820270571, L_4, _stringLiteral3073488411, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(6 /* System.Void DefaultTrackableEventHandler::OnTrackingFound() */, __this);
		goto IL_007d;
	}

IL_003f:
	{
		int32_t L_6 = ___previousStatus0;
		if ((!(((uint32_t)L_6) == ((uint32_t)3))))
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_7 = ___newStatus1;
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_0077;
		}
	}
	{
		TrackableBehaviour_t1113559212 * L_8 = __this->get_mTrackableBehaviour_2();
		NullCheck(L_8);
		String_t* L_9 = TrackableBehaviour_get_TrackableName_m3644057705(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3820270571, L_9, _stringLiteral3483481617, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(7 /* System.Void DefaultTrackableEventHandler::OnTrackingLost() */, __this);
		goto IL_007d;
	}

IL_0077:
	{
		VirtActionInvoker0::Invoke(7 /* System.Void DefaultTrackableEventHandler::OnTrackingLost() */, __this);
	}

IL_007d:
	{
		return;
	}
}
// System.Void DefaultTrackableEventHandler::OnTrackingFound()
extern "C"  void DefaultTrackableEventHandler_OnTrackingFound_m4202593607 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_OnTrackingFound_m4202593607_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t3210418286* V_0 = NULL;
	ColliderU5BU5D_t4234922487* V_1 = NULL;
	CanvasU5BU5D_t682926938* V_2 = NULL;
	Renderer_t2627027031 * V_3 = NULL;
	RendererU5BU5D_t3210418286* V_4 = NULL;
	int32_t V_5 = 0;
	Collider_t1773347010 * V_6 = NULL;
	ColliderU5BU5D_t4234922487* V_7 = NULL;
	int32_t V_8 = 0;
	Canvas_t3310196443 * V_9 = NULL;
	CanvasU5BU5D_t682926938* V_10 = NULL;
	int32_t V_11 = 0;
	{
		RendererU5BU5D_t3210418286* L_0 = Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911_RuntimeMethod_var);
		V_0 = L_0;
		ColliderU5BU5D_t4234922487* L_1 = Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426_RuntimeMethod_var);
		V_1 = L_1;
		CanvasU5BU5D_t682926938* L_2 = Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007_RuntimeMethod_var);
		V_2 = L_2;
		RendererU5BU5D_t3210418286* L_3 = V_0;
		V_4 = L_3;
		V_5 = 0;
		goto IL_0036;
	}

IL_0023:
	{
		RendererU5BU5D_t3210418286* L_4 = V_4;
		int32_t L_5 = V_5;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Renderer_t2627027031 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		Renderer_t2627027031 * L_8 = V_3;
		NullCheck(L_8);
		Renderer_set_enabled_m1727253150(L_8, (bool)1, /*hidden argument*/NULL);
		int32_t L_9 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0036:
	{
		int32_t L_10 = V_5;
		RendererU5BU5D_t3210418286* L_11 = V_4;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_0023;
		}
	}
	{
		ColliderU5BU5D_t4234922487* L_12 = V_1;
		V_7 = L_12;
		V_8 = 0;
		goto IL_0061;
	}

IL_004c:
	{
		ColliderU5BU5D_t4234922487* L_13 = V_7;
		int32_t L_14 = V_8;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Collider_t1773347010 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		Collider_t1773347010 * L_17 = V_6;
		NullCheck(L_17);
		Collider_set_enabled_m1517463283(L_17, (bool)1, /*hidden argument*/NULL);
		int32_t L_18 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0061:
	{
		int32_t L_19 = V_8;
		ColliderU5BU5D_t4234922487* L_20 = V_7;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))))))
		{
			goto IL_004c;
		}
	}
	{
		CanvasU5BU5D_t682926938* L_21 = V_2;
		V_10 = L_21;
		V_11 = 0;
		goto IL_008c;
	}

IL_0077:
	{
		CanvasU5BU5D_t682926938* L_22 = V_10;
		int32_t L_23 = V_11;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Canvas_t3310196443 * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_9 = L_25;
		Canvas_t3310196443 * L_26 = V_9;
		NullCheck(L_26);
		Behaviour_set_enabled_m20417929(L_26, (bool)1, /*hidden argument*/NULL);
		int32_t L_27 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_008c:
	{
		int32_t L_28 = V_11;
		CanvasU5BU5D_t682926938* L_29 = V_10;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length)))))))
		{
			goto IL_0077;
		}
	}
	{
		return;
	}
}
// System.Void DefaultTrackableEventHandler::OnTrackingLost()
extern "C"  void DefaultTrackableEventHandler_OnTrackingLost_m424172778 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_OnTrackingLost_m424172778_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t3210418286* V_0 = NULL;
	ColliderU5BU5D_t4234922487* V_1 = NULL;
	CanvasU5BU5D_t682926938* V_2 = NULL;
	Renderer_t2627027031 * V_3 = NULL;
	RendererU5BU5D_t3210418286* V_4 = NULL;
	int32_t V_5 = 0;
	Collider_t1773347010 * V_6 = NULL;
	ColliderU5BU5D_t4234922487* V_7 = NULL;
	int32_t V_8 = 0;
	Canvas_t3310196443 * V_9 = NULL;
	CanvasU5BU5D_t682926938* V_10 = NULL;
	int32_t V_11 = 0;
	{
		RendererU5BU5D_t3210418286* L_0 = Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911_RuntimeMethod_var);
		V_0 = L_0;
		ColliderU5BU5D_t4234922487* L_1 = Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426_RuntimeMethod_var);
		V_1 = L_1;
		CanvasU5BU5D_t682926938* L_2 = Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007_RuntimeMethod_var);
		V_2 = L_2;
		RendererU5BU5D_t3210418286* L_3 = V_0;
		V_4 = L_3;
		V_5 = 0;
		goto IL_0036;
	}

IL_0023:
	{
		RendererU5BU5D_t3210418286* L_4 = V_4;
		int32_t L_5 = V_5;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Renderer_t2627027031 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		Renderer_t2627027031 * L_8 = V_3;
		NullCheck(L_8);
		Renderer_set_enabled_m1727253150(L_8, (bool)0, /*hidden argument*/NULL);
		int32_t L_9 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0036:
	{
		int32_t L_10 = V_5;
		RendererU5BU5D_t3210418286* L_11 = V_4;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_0023;
		}
	}
	{
		ColliderU5BU5D_t4234922487* L_12 = V_1;
		V_7 = L_12;
		V_8 = 0;
		goto IL_0061;
	}

IL_004c:
	{
		ColliderU5BU5D_t4234922487* L_13 = V_7;
		int32_t L_14 = V_8;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Collider_t1773347010 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		Collider_t1773347010 * L_17 = V_6;
		NullCheck(L_17);
		Collider_set_enabled_m1517463283(L_17, (bool)0, /*hidden argument*/NULL);
		int32_t L_18 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0061:
	{
		int32_t L_19 = V_8;
		ColliderU5BU5D_t4234922487* L_20 = V_7;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))))))
		{
			goto IL_004c;
		}
	}
	{
		CanvasU5BU5D_t682926938* L_21 = V_2;
		V_10 = L_21;
		V_11 = 0;
		goto IL_008c;
	}

IL_0077:
	{
		CanvasU5BU5D_t682926938* L_22 = V_10;
		int32_t L_23 = V_11;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Canvas_t3310196443 * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_9 = L_25;
		Canvas_t3310196443 * L_26 = V_9;
		NullCheck(L_26);
		Behaviour_set_enabled_m20417929(L_26, (bool)0, /*hidden argument*/NULL);
		int32_t L_27 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_008c:
	{
		int32_t L_28 = V_11;
		CanvasU5BU5D_t682926938* L_29 = V_10;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length)))))))
		{
			goto IL_0077;
		}
	}
	{
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
// System.Void distance::.ctor()
extern "C"  void distance__ctor_m1818453246 (distance_t593844463 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void distance::Start()
extern "C"  void distance_Start_m1672099336 (distance_t593844463 * __this, const RuntimeMethod* method)
{
	{
		Text_t1901882714 * L_0 = __this->get_distanceText_2();
		NullCheck(L_0);
		Behaviour_set_enabled_m20417929(L_0, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void distance::Update()
extern "C"  void distance_Update_m1823152382 (distance_t593844463 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (distance_Update_m1823152382_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		Camera_t4157153871 * L_2 = Component_GetComponent_TisCamera_t4157153871_m1557787507(__this, /*hidden argument*/Component_GetComponent_TisCamera_t4157153871_m1557787507_RuntimeMethod_var);
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_5 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Vector3_t3722313464  L_6 = V_0;
		Camera_t4157153871 * L_7 = Component_GetComponent_TisCamera_t4157153871_m1557787507(__this, /*hidden argument*/Component_GetComponent_TisCamera_t4157153871_m1557787507_RuntimeMethod_var);
		NullCheck(L_7);
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t3722313464  L_9 = Transform_get_forward_m747522392(L_8, /*hidden argument*/NULL);
		float L_10 = Vector3_Dot_m606404487(NULL /*static, unused*/, L_6, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		Text_t1901882714 * L_11 = __this->get_distanceText_2();
		String_t* L_12 = Single_ToString_m3947131094((&V_1), /*hidden argument*/NULL);
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_12);
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
// System.Void FrameRateSettings::.ctor()
extern "C"  void FrameRateSettings__ctor_m863056381 (FrameRateSettings_t3598747490 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FrameRateSettings::Start()
extern "C"  void FrameRateSettings_Start_m580618101 (FrameRateSettings_t3598747490 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FrameRateSettings_Start_m580618101_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaARController_t1876945237_il2cpp_TypeInfo_var);
		VuforiaARController_t1876945237 * L_0 = VuforiaARController_get_Instance_m1100644214(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_1 = (intptr_t)FrameRateSettings_OnVuforiaStarted_m2069567078_RuntimeMethod_var;
		Action_t1264377477 * L_2 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VuforiaARController_RegisterVuforiaStartedCallback_m3258152770(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FrameRateSettings::OnVuforiaStarted()
extern "C"  void FrameRateSettings_OnVuforiaStarted_m2069567078 (FrameRateSettings_t3598747490 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FrameRateSettings_OnVuforiaStarted_m2069567078_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRenderer_t3433045970_il2cpp_TypeInfo_var);
		VuforiaRenderer_t3433045970 * L_0 = VuforiaRenderer_get_Instance_m1013623488(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VuforiaRenderer_GetRecommendedFps_m561576480(L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = Application_get_targetFrameRate_m1077623221(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral3233180876, L_6, _stringLiteral4120677989, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		int32_t L_8 = V_0;
		Application_set_targetFrameRate_m3682352535(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
	}

IL_0037:
	{
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
// System.Void InitErrorHandler::.ctor()
extern "C"  void InitErrorHandler__ctor_m3192923495 (InitErrorHandler_t2159361531 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InitErrorHandler::Awake()
extern "C"  void InitErrorHandler_Awake_m3752167262 (InitErrorHandler_t2159361531 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InitErrorHandler_Awake_m3752167262_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t1901882714 * L_0 = __this->get_errorText_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		Text_t1901882714 * L_2 = __this->get_errorText_2();
		NullCheck(L_2);
		CanvasU5BU5D_t682926938* L_3 = Component_GetComponentsInParent_TisCanvas_t3310196443_m1039379662(L_2, (bool)1, /*hidden argument*/Component_GetComponentsInParent_TisCanvas_t3310196443_m1039379662_RuntimeMethod_var);
		NullCheck(L_3);
		int32_t L_4 = 0;
		Canvas_t3310196443 * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		__this->set_errorCanvas_3(L_5);
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntime_t1949122020_il2cpp_TypeInfo_var);
		VuforiaRuntime_t1949122020 * L_6 = VuforiaRuntime_get_Instance_m1058251676(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_7 = (intptr_t)InitErrorHandler_OnInitError_m2884619828_RuntimeMethod_var;
		Action_1_t3593217305 * L_8 = (Action_1_t3593217305 *)il2cpp_codegen_object_new(Action_1_t3593217305_il2cpp_TypeInfo_var);
		Action_1__ctor_m2713332384(L_8, __this, L_7, /*hidden argument*/Action_1__ctor_m2713332384_RuntimeMethod_var);
		NullCheck(L_6);
		VuforiaRuntime_RegisterVuforiaInitErrorCallback_m2728879505(L_6, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void InitErrorHandler::OnInitError(Vuforia.VuforiaUnity/InitError)
extern "C"  void InitErrorHandler_OnInitError_m2884619828 (InitErrorHandler_t2159361531 * __this, int32_t ___error0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___error0;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___error0;
		InitErrorHandler_ShowErrorMessage_m1141628225(__this, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	{
		return;
	}
}
// System.Void InitErrorHandler::ShowErrorMessage(Vuforia.VuforiaUnity/InitError)
extern "C"  void InitErrorHandler_ShowErrorMessage_m1141628225 (InitErrorHandler_t2159361531 * __this, int32_t ___errorCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InitErrorHandler_ShowErrorMessage_m1141628225_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___errorCode0;
		switch (((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)10))))
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_01f1;
			}
			case 2:
			{
				goto IL_016e;
			}
			case 3:
			{
				goto IL_0144;
			}
			case 4:
			{
				goto IL_0159;
			}
			case 5:
			{
				goto IL_0060;
			}
			case 6:
			{
				goto IL_004b;
			}
			case 7:
			{
				goto IL_0274;
			}
			case 8:
			{
				goto IL_0289;
			}
			case 9:
			{
				goto IL_029e;
			}
		}
	}
	{
		goto IL_02b3;
	}

IL_0036:
	{
		Text_t1901882714 * L_1 = __this->get_errorText_2();
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteral3279329212);
		goto IL_02b3;
	}

IL_004b:
	{
		Text_t1901882714 * L_2 = __this->get_errorText_2();
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteral3258121531);
		goto IL_02b3;
	}

IL_0060:
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaConfiguration_t1763229349_il2cpp_TypeInfo_var);
		VuforiaConfiguration_t1763229349 * L_3 = VuforiaConfiguration_get_Instance_m3335903280(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		GenericVuforiaConfiguration_t3697830469 * L_4 = VuforiaConfiguration_get_Vuforia_m1588208597(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5 = GenericVuforiaConfiguration_get_LicenseKey_m2270076687(L_4, /*hidden argument*/NULL);
		__this->set_key_4(L_5);
		String_t* L_6 = __this->get_key_4();
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m3847582255(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)10))))
		{
			goto IL_00f5;
		}
	}
	{
		Text_t1901882714 * L_8 = __this->get_errorText_2();
		ObjectU5BU5D_t2843939325* L_9 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)7));
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral3820000162);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3820000162);
		ObjectU5BU5D_t2843939325* L_10 = L_9;
		String_t* L_11 = __this->get_key_4();
		NullCheck(L_11);
		int32_t L_12 = String_get_Length_m3847582255(L_11, /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_14);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_14);
		ObjectU5BU5D_t2843939325* L_15 = L_10;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral3797279721);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3797279721);
		ObjectU5BU5D_t2843939325* L_16 = L_15;
		String_t* L_17 = __this->get_key_4();
		NullCheck(L_17);
		String_t* L_18 = String_Substring_m1610150815(L_17, 0, 5, /*hidden argument*/NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_18);
		ObjectU5BU5D_t2843939325* L_19 = L_16;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral1108443480);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral1108443480);
		ObjectU5BU5D_t2843939325* L_20 = L_19;
		String_t* L_21 = __this->get_key_4();
		NullCheck(L_21);
		String_t* L_22 = String_Substring_m1610150815(L_21, 5, 5, /*hidden argument*/NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_22);
		ObjectU5BU5D_t2843939325* L_23 = L_20;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral2072975055);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral2072975055);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_24 = String_Concat_m2971454694(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_24);
		goto IL_013f;
	}

IL_00f5:
	{
		Text_t1901882714 * L_25 = __this->get_errorText_2();
		ObjectU5BU5D_t2843939325* L_26 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral3820000162);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3820000162);
		ObjectU5BU5D_t2843939325* L_27 = L_26;
		String_t* L_28 = __this->get_key_4();
		NullCheck(L_28);
		int32_t L_29 = String_get_Length_m3847582255(L_28, /*hidden argument*/NULL);
		int32_t L_30 = L_29;
		RuntimeObject * L_31 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_31);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_31);
		ObjectU5BU5D_t2843939325* L_32 = L_27;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteral1498400317);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral1498400317);
		ObjectU5BU5D_t2843939325* L_33 = L_32;
		String_t* L_34 = __this->get_key_4();
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_34);
		ObjectU5BU5D_t2843939325* L_35 = L_33;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, _stringLiteral2072975055);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral2072975055);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_36 = String_Concat_m2971454694(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		NullCheck(L_25);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_25, L_36);
	}

IL_013f:
	{
		goto IL_02b3;
	}

IL_0144:
	{
		Text_t1901882714 * L_37 = __this->get_errorText_2();
		NullCheck(L_37);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_37, _stringLiteral2959890895);
		goto IL_02b3;
	}

IL_0159:
	{
		Text_t1901882714 * L_38 = __this->get_errorText_2();
		NullCheck(L_38);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_38, _stringLiteral2293294349);
		goto IL_02b3;
	}

IL_016e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaConfiguration_t1763229349_il2cpp_TypeInfo_var);
		VuforiaConfiguration_t1763229349 * L_39 = VuforiaConfiguration_get_Instance_m3335903280(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_39);
		GenericVuforiaConfiguration_t3697830469 * L_40 = VuforiaConfiguration_get_Vuforia_m1588208597(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		String_t* L_41 = GenericVuforiaConfiguration_get_LicenseKey_m2270076687(L_40, /*hidden argument*/NULL);
		__this->set_key_4(L_41);
		Text_t1901882714 * L_42 = __this->get_errorText_2();
		ObjectU5BU5D_t2843939325* L_43 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)7));
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, _stringLiteral2177475950);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral2177475950);
		ObjectU5BU5D_t2843939325* L_44 = L_43;
		String_t* L_45 = __this->get_key_4();
		NullCheck(L_45);
		int32_t L_46 = String_get_Length_m3847582255(L_45, /*hidden argument*/NULL);
		int32_t L_47 = L_46;
		RuntimeObject * L_48 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_47);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_48);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_48);
		ObjectU5BU5D_t2843939325* L_49 = L_44;
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, _stringLiteral3797279721);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3797279721);
		ObjectU5BU5D_t2843939325* L_50 = L_49;
		String_t* L_51 = __this->get_key_4();
		NullCheck(L_51);
		String_t* L_52 = String_Substring_m1610150815(L_51, 0, 5, /*hidden argument*/NULL);
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_52);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_52);
		ObjectU5BU5D_t2843939325* L_53 = L_50;
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, _stringLiteral1108443480);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral1108443480);
		ObjectU5BU5D_t2843939325* L_54 = L_53;
		String_t* L_55 = __this->get_key_4();
		NullCheck(L_55);
		String_t* L_56 = String_Substring_m1610150815(L_55, 5, 5, /*hidden argument*/NULL);
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_56);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_56);
		ObjectU5BU5D_t2843939325* L_57 = L_54;
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, _stringLiteral2072975055);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral2072975055);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_58 = String_Concat_m2971454694(NULL /*static, unused*/, L_57, /*hidden argument*/NULL);
		NullCheck(L_42);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_42, L_58);
		goto IL_02b3;
	}

IL_01f1:
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaConfiguration_t1763229349_il2cpp_TypeInfo_var);
		VuforiaConfiguration_t1763229349 * L_59 = VuforiaConfiguration_get_Instance_m3335903280(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_59);
		GenericVuforiaConfiguration_t3697830469 * L_60 = VuforiaConfiguration_get_Vuforia_m1588208597(L_59, /*hidden argument*/NULL);
		NullCheck(L_60);
		String_t* L_61 = GenericVuforiaConfiguration_get_LicenseKey_m2270076687(L_60, /*hidden argument*/NULL);
		__this->set_key_4(L_61);
		Text_t1901882714 * L_62 = __this->get_errorText_2();
		ObjectU5BU5D_t2843939325* L_63 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)7));
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, _stringLiteral3262298861);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3262298861);
		ObjectU5BU5D_t2843939325* L_64 = L_63;
		String_t* L_65 = __this->get_key_4();
		NullCheck(L_65);
		int32_t L_66 = String_get_Length_m3847582255(L_65, /*hidden argument*/NULL);
		int32_t L_67 = L_66;
		RuntimeObject * L_68 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_67);
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, L_68);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_68);
		ObjectU5BU5D_t2843939325* L_69 = L_64;
		NullCheck(L_69);
		ArrayElementTypeCheck (L_69, _stringLiteral3797279721);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3797279721);
		ObjectU5BU5D_t2843939325* L_70 = L_69;
		String_t* L_71 = __this->get_key_4();
		NullCheck(L_71);
		String_t* L_72 = String_Substring_m1610150815(L_71, 0, 5, /*hidden argument*/NULL);
		NullCheck(L_70);
		ArrayElementTypeCheck (L_70, L_72);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_72);
		ObjectU5BU5D_t2843939325* L_73 = L_70;
		NullCheck(L_73);
		ArrayElementTypeCheck (L_73, _stringLiteral1108443480);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral1108443480);
		ObjectU5BU5D_t2843939325* L_74 = L_73;
		String_t* L_75 = __this->get_key_4();
		NullCheck(L_75);
		String_t* L_76 = String_Substring_m1610150815(L_75, 5, 5, /*hidden argument*/NULL);
		NullCheck(L_74);
		ArrayElementTypeCheck (L_74, L_76);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_76);
		ObjectU5BU5D_t2843939325* L_77 = L_74;
		NullCheck(L_77);
		ArrayElementTypeCheck (L_77, _stringLiteral3078096941);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral3078096941);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_78 = String_Concat_m2971454694(NULL /*static, unused*/, L_77, /*hidden argument*/NULL);
		NullCheck(L_62);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_62, L_78);
		goto IL_02b3;
	}

IL_0274:
	{
		Text_t1901882714 * L_79 = __this->get_errorText_2();
		NullCheck(L_79);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_79, _stringLiteral3034338515);
		goto IL_02b3;
	}

IL_0289:
	{
		Text_t1901882714 * L_80 = __this->get_errorText_2();
		NullCheck(L_80);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_80, _stringLiteral3122929577);
		goto IL_02b3;
	}

IL_029e:
	{
		Text_t1901882714 * L_81 = __this->get_errorText_2();
		NullCheck(L_81);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_81, _stringLiteral3567432369);
		goto IL_02b3;
	}

IL_02b3:
	{
		int32_t L_82 = ___errorCode0;
		int32_t L_83 = L_82;
		RuntimeObject * L_84 = Box(InitError_t3420749710_il2cpp_TypeInfo_var, &L_83);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_84, /*hidden argument*/NULL);
		Text_t1901882714 * L_85 = __this->get_errorText_2();
		NullCheck(L_85);
		String_t* L_86 = VirtFuncInvoker0< String_t* >::Invoke(71 /* System.String UnityEngine.UI.Text::get_text() */, L_85);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_86, /*hidden argument*/NULL);
		Canvas_t3310196443 * L_87 = __this->get_errorCanvas_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_88 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_87, /*hidden argument*/NULL);
		if (!L_88)
		{
			goto IL_0315;
		}
	}
	{
		Canvas_t3310196443 * L_89 = __this->get_errorCanvas_3();
		NullCheck(L_89);
		Transform_t3600365921 * L_90 = Component_get_transform_m3162698980(L_89, /*hidden argument*/NULL);
		NullCheck(L_90);
		Transform_t3600365921 * L_91 = Transform_get_parent_m835071599(L_90, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_92 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_91);
		Transform_set_position_m3387557959(L_91, L_92, /*hidden argument*/NULL);
		Canvas_t3310196443 * L_93 = __this->get_errorCanvas_3();
		NullCheck(L_93);
		GameObject_t1113636619 * L_94 = Component_get_gameObject_m442555142(L_93, /*hidden argument*/NULL);
		NullCheck(L_94);
		GameObject_SetActive_m796801857(L_94, (bool)1, /*hidden argument*/NULL);
		Canvas_t3310196443 * L_95 = __this->get_errorCanvas_3();
		NullCheck(L_95);
		Behaviour_set_enabled_m20417929(L_95, (bool)1, /*hidden argument*/NULL);
	}

IL_0315:
	{
		return;
	}
}
// System.Void InitErrorHandler::OnErrorDialogClose()
extern "C"  void InitErrorHandler_OnErrorDialogClose_m1431281891 (InitErrorHandler_t2159361531 * __this, const RuntimeMethod* method)
{
	{
		Application_Quit_m470877999(NULL /*static, unused*/, /*hidden argument*/NULL);
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
// System.Void LoadingScreen::.ctor()
extern "C"  void LoadingScreen__ctor_m3828008876 (LoadingScreen_t2154736699 * __this, const RuntimeMethod* method)
{
	{
		__this->set_mChangeLevel_2((bool)1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LoadingScreen::Start()
extern "C"  void LoadingScreen_Start_m3016827352 (LoadingScreen_t2154736699 * __this, const RuntimeMethod* method)
{
	{
		RawImage_t3182918964 * L_0 = LoadingScreen_FindSpinnerImage_m2988402308(__this, /*hidden argument*/NULL);
		__this->set_mUISpinner_3(L_0);
		Application_set_backgroundLoadingPriority_m1116453950(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		__this->set_mChangeLevel_2((bool)1);
		return;
	}
}
// System.Void LoadingScreen::Update()
extern "C"  void LoadingScreen_Update_m69320718 (LoadingScreen_t2154736699 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LoadingScreen_Update_m69320718_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RawImage_t3182918964 * L_0 = __this->get_mUISpinner_3();
		NullCheck(L_0);
		RectTransform_t3704657025 * L_1 = Graphic_get_rectTransform_m1167152468(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_Rotate_m1749346957(L_1, L_2, ((float)il2cpp_codegen_multiply((float)(90.0f), (float)L_3)), /*hidden argument*/NULL);
		bool L_4 = __this->get_mChangeLevel_2();
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		LoadingScreen_LoadNextSceneAsync_m3801488710(__this, /*hidden argument*/NULL);
		__this->set_mChangeLevel_2((bool)0);
	}

IL_0038:
	{
		return;
	}
}
// System.Void LoadingScreen::LoadNextSceneAsync()
extern "C"  void LoadingScreen_LoadNextSceneAsync_m3801488710 (LoadingScreen_t2154736699 * __this, const RuntimeMethod* method)
{
	Scene_t2348375561  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Scene_t2348375561  L_0 = SceneManager_GetActiveScene_m1825203488(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Scene_get_buildIndex_m270272723((&V_0), /*hidden argument*/NULL);
		SceneManager_LoadSceneAsync_m3240398665(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.UI.RawImage LoadingScreen::FindSpinnerImage()
extern "C"  RawImage_t3182918964 * LoadingScreen_FindSpinnerImage_m2988402308 (LoadingScreen_t2154736699 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LoadingScreen_FindSpinnerImage_m2988402308_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RawImageU5BU5D_t1576731517* V_0 = NULL;
	RawImage_t3182918964 * V_1 = NULL;
	RawImageU5BU5D_t1576731517* V_2 = NULL;
	int32_t V_3 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		RawImageU5BU5D_t1576731517* L_0 = Object_FindObjectsOfType_TisRawImage_t3182918964_m2400832436(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectsOfType_TisRawImage_t3182918964_m2400832436_RuntimeMethod_var);
		V_0 = L_0;
		RawImageU5BU5D_t1576731517* L_1 = V_0;
		V_2 = L_1;
		V_3 = 0;
		goto IL_002e;
	}

IL_000f:
	{
		RawImageU5BU5D_t1576731517* L_2 = V_2;
		int32_t L_3 = V_3;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		RawImage_t3182918964 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		RawImage_t3182918964 * L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7 = Object_get_name_m4211327027(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		bool L_8 = String_Contains_m1147431944(L_7, _stringLiteral1395798546, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_002a;
		}
	}
	{
		RawImage_t3182918964 * L_9 = V_1;
		return L_9;
	}

IL_002a:
	{
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_11 = V_3;
		RawImageU5BU5D_t1576731517* L_12 = V_2;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_000f;
		}
	}
	{
		return (RawImage_t3182918964 *)NULL;
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
// System.Void LocalizationHelper::.ctor()
extern "C"  void LocalizationHelper__ctor_m1418160484 (LocalizationHelper_t3735850664 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LocalizationHelper::Start()
extern "C"  void LocalizationHelper_Start_m1071918576 (LocalizationHelper_t3735850664 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LocalizationHelper_Start_m1071918576_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t447389798 * V_0 = NULL;
	String_t* V_1 = NULL;
	StringU5BU5D_t1281789340* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	OptionData_t3270282352 * V_5 = NULL;
	{
		Dropdown_t2274391225 * L_0 = __this->get_dropDown_2();
		NullCheck(L_0);
		Dropdown_ClearOptions_m4085591601(L_0, /*hidden argument*/NULL);
		List_1_t447389798 * L_1 = (List_1_t447389798 *)il2cpp_codegen_object_new(List_1_t447389798_il2cpp_TypeInfo_var);
		List_1__ctor_m1438953653(L_1, /*hidden argument*/List_1__ctor_m1438953653_RuntimeMethod_var);
		V_0 = L_1;
		StringU5BU5D_t1281789340* L_2 = __this->get_flags_3();
		V_2 = L_2;
		V_3 = 0;
		goto IL_003b;
	}

IL_001f:
	{
		StringU5BU5D_t1281789340* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = L_6;
		String_t* L_7 = V_1;
		V_4 = L_7;
		String_t* L_8 = V_4;
		OptionData_t3270282352 * L_9 = (OptionData_t3270282352 *)il2cpp_codegen_object_new(OptionData_t3270282352_il2cpp_TypeInfo_var);
		OptionData__ctor_m2696491456(L_9, L_8, /*hidden argument*/NULL);
		V_5 = L_9;
		List_1_t447389798 * L_10 = V_0;
		OptionData_t3270282352 * L_11 = V_5;
		NullCheck(L_10);
		List_1_Add_m3700962105(L_10, L_11, /*hidden argument*/List_1_Add_m3700962105_RuntimeMethod_var);
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_003b:
	{
		int32_t L_13 = V_3;
		StringU5BU5D_t1281789340* L_14 = V_2;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))))
		{
			goto IL_001f;
		}
	}
	{
		Dropdown_t2274391225 * L_15 = __this->get_dropDown_2();
		List_1_t447389798 * L_16 = V_0;
		NullCheck(L_15);
		Dropdown_AddOptions_m3733885929(L_15, L_16, /*hidden argument*/NULL);
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
// System.Void MenuAnimator::.ctor()
extern "C"  void MenuAnimator__ctor_m2002699033 (MenuAnimator_t2112910832 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuAnimator__ctor_m2002699033_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_mVisiblePos_2(L_0);
		Vector3_t3722313464  L_1 = Vector3_get_right_m1913784872(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = Vector3_op_UnaryNegation_m1951478815(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_2, (2000.0f), /*hidden argument*/NULL);
		__this->set_mInvisiblePos_3(L_3);
		__this->set_SlidingTime_8((0.3f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuAnimator::Start()
extern "C"  void MenuAnimator_Start_m1688760679 (MenuAnimator_t2112910832 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuAnimator_Start_m1688760679_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_right_m1913784872(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Vector3_op_UnaryNegation_m1951478815(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_1, (((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_2))))), /*hidden argument*/NULL);
		__this->set_mInvisiblePos_3(L_3);
		__this->set_mVisibility_4((0.0f));
		__this->set_mVisible_5((bool)0);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = __this->get_mInvisiblePos_3();
		NullCheck(L_4);
		Transform_set_position_m3387557959(L_4, L_5, /*hidden argument*/NULL);
		CanvasU5BU5D_t682926938* L_6 = Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCanvas_t3310196443_m1457345007_RuntimeMethod_var);
		NullCheck(L_6);
		int32_t L_7 = 0;
		Canvas_t3310196443 * L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		__this->set_mCanvas_6(L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		MenuOptions_t1951716431 * L_9 = Object_FindObjectOfType_TisMenuOptions_t1951716431_m1050906446(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisMenuOptions_t1951716431_m1050906446_RuntimeMethod_var);
		__this->set_mMenuOptions_7(L_9);
		return;
	}
}
// System.Void MenuAnimator::Update()
extern "C"  void MenuAnimator_Update_m3695532741 (MenuAnimator_t2112910832 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuAnimator_Update_m3695532741_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_right_m1913784872(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Vector3_op_UnaryNegation_m1951478815(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_1, (((float)((float)L_2))), /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_3, (2.0f), /*hidden argument*/NULL);
		__this->set_mInvisiblePos_3(L_4);
		bool L_5 = __this->get_mVisible_5();
		if (!L_5)
		{
			goto IL_00be;
		}
	}
	{
		Canvas_t3310196443 * L_6 = __this->get_mCanvas_6();
		NullCheck(L_6);
		GameObject_t1113636619 * L_7 = Component_get_gameObject_m442555142(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_m796801857(L_7, (bool)1, /*hidden argument*/NULL);
		Canvas_t3310196443 * L_8 = __this->get_mCanvas_6();
		NullCheck(L_8);
		bool L_9 = Behaviour_get_enabled_m753527255(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_005d;
		}
	}
	{
		Canvas_t3310196443 * L_10 = __this->get_mCanvas_6();
		NullCheck(L_10);
		Behaviour_set_enabled_m20417929(L_10, (bool)1, /*hidden argument*/NULL);
	}

IL_005d:
	{
		float L_11 = __this->get_mVisibility_4();
		if ((!(((float)L_11) < ((float)(1.0f)))))
		{
			goto IL_00b9;
		}
	}
	{
		float L_12 = __this->get_mVisibility_4();
		float L_13 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_14 = __this->get_SlidingTime_8();
		__this->set_mVisibility_4(((float)il2cpp_codegen_add((float)L_12, (float)((float)((float)L_13/(float)L_14)))));
		float L_15 = __this->get_mVisibility_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_16 = Mathf_Clamp01_m56433566(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		__this->set_mVisibility_4(L_16);
		Transform_t3600365921 * L_17 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_18 = __this->get_mInvisiblePos_3();
		Vector3_t3722313464  L_19 = __this->get_mVisiblePos_2();
		float L_20 = __this->get_mVisibility_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_21 = Vector3_Slerp_m802114822(NULL /*static, unused*/, L_18, L_19, L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_position_m3387557959(L_17, L_21, /*hidden argument*/NULL);
	}

IL_00b9:
	{
		goto IL_016d;
	}

IL_00be:
	{
		float L_22 = __this->get_mVisibility_4();
		if ((!(((float)L_22) > ((float)(0.0f)))))
		{
			goto IL_015c;
		}
	}
	{
		float L_23 = __this->get_mVisibility_4();
		float L_24 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_25 = __this->get_SlidingTime_8();
		__this->set_mVisibility_4(((float)il2cpp_codegen_subtract((float)L_23, (float)((float)((float)L_24/(float)L_25)))));
		float L_26 = __this->get_mVisibility_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_27 = Mathf_Clamp01_m56433566(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		__this->set_mVisibility_4(L_27);
		Transform_t3600365921 * L_28 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_29 = __this->get_mInvisiblePos_3();
		Vector3_t3722313464  L_30 = __this->get_mVisiblePos_2();
		float L_31 = __this->get_mVisibility_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_32 = Vector3_Slerp_m802114822(NULL /*static, unused*/, L_29, L_30, L_31, /*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_set_position_m3387557959(L_28, L_32, /*hidden argument*/NULL);
		Canvas_t3310196443 * L_33 = __this->get_mCanvas_6();
		NullCheck(L_33);
		GameObject_t1113636619 * L_34 = Component_get_gameObject_m442555142(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		GameObject_SetActive_m796801857(L_34, (bool)0, /*hidden argument*/NULL);
		float L_35 = __this->get_mVisibility_4();
		if ((!(((float)L_35) < ((float)(0.01f)))))
		{
			goto IL_0157;
		}
	}
	{
		Canvas_t3310196443 * L_36 = __this->get_mCanvas_6();
		NullCheck(L_36);
		bool L_37 = Behaviour_get_enabled_m753527255(L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0157;
		}
	}
	{
		Canvas_t3310196443 * L_38 = __this->get_mCanvas_6();
		NullCheck(L_38);
		Behaviour_set_enabled_m20417929(L_38, (bool)0, /*hidden argument*/NULL);
	}

IL_0157:
	{
		goto IL_016d;
	}

IL_015c:
	{
		Transform_t3600365921 * L_39 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_40 = __this->get_mInvisiblePos_3();
		NullCheck(L_39);
		Transform_set_position_m3387557959(L_39, L_40, /*hidden argument*/NULL);
	}

IL_016d:
	{
		return;
	}
}
// System.Void MenuAnimator::Show()
extern "C"  void MenuAnimator_Show_m982174260 (MenuAnimator_t2112910832 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuAnimator_Show_m982174260_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_mVisible_5((bool)1);
		MenuOptions_t1951716431 * L_0 = __this->get_mMenuOptions_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		MenuOptions_t1951716431 * L_2 = __this->get_mMenuOptions_7();
		NullCheck(L_2);
		MenuOptions_UpdateUI_m2695051465(L_2, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void MenuAnimator::Hide()
extern "C"  void MenuAnimator_Hide_m1323916210 (MenuAnimator_t2112910832 * __this, const RuntimeMethod* method)
{
	{
		__this->set_mVisible_5((bool)0);
		return;
	}
}
// System.Boolean MenuAnimator::IsVisible()
extern "C"  bool MenuAnimator_IsVisible_m928022866 (MenuAnimator_t2112910832 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_mVisibility_4();
		return (bool)((((float)L_0) > ((float)(0.05f)))? 1 : 0);
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
// System.Void MenuOptions::.ctor()
extern "C"  void MenuOptions__ctor_m1083420456 (MenuOptions_t1951716431 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuOptions::Start()
extern "C"  void MenuOptions_Start_m2289807458 (MenuOptions_t1951716431 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuOptions_Start_m2289807458_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VuforiaARController_t1876945237 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		CameraSettings_t3152619780 * L_0 = Object_FindObjectOfType_TisCameraSettings_t3152619780_m4203198741(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisCameraSettings_t3152619780_m4203198741_RuntimeMethod_var);
		__this->set_mCamSettings_2(L_0);
		TrackableSettings_t2862243993 * L_1 = Object_FindObjectOfType_TisTrackableSettings_t2862243993_m1852430619(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisTrackableSettings_t2862243993_m1852430619_RuntimeMethod_var);
		__this->set_mTrackableSettings_3(L_1);
		MenuAnimator_t2112910832 * L_2 = Object_FindObjectOfType_TisMenuAnimator_t2112910832_m1830680649(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisMenuAnimator_t2112910832_m1830680649_RuntimeMethod_var);
		__this->set_mMenuAnim_4(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaARController_t1876945237_il2cpp_TypeInfo_var);
		VuforiaARController_t1876945237 * L_3 = VuforiaARController_get_Instance_m1100644214(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_3;
		VuforiaARController_t1876945237 * L_4 = V_0;
		intptr_t L_5 = (intptr_t)MenuOptions_OnPaused_m1134986695_RuntimeMethod_var;
		Action_1_t269755560 * L_6 = (Action_1_t269755560 *)il2cpp_codegen_object_new(Action_1_t269755560_il2cpp_TypeInfo_var);
		Action_1__ctor_m2079027267(L_6, __this, L_5, /*hidden argument*/Action_1__ctor_m2079027267_RuntimeMethod_var);
		NullCheck(L_4);
		VuforiaARController_RegisterOnPauseCallback_m1833237148(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuOptions::ShowAboutPage()
extern "C"  void MenuOptions_ShowAboutPage_m3278612116 (MenuOptions_t1951716431 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuOptions_ShowAboutPage_m3278612116_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral3521912105, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuOptions::ToggleAutofocus()
extern "C"  void MenuOptions_ToggleAutofocus_m677591208 (MenuOptions_t1951716431 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuOptions_ToggleAutofocus_m677591208_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Toggle_t2735377061 * V_0 = NULL;
	{
		Toggle_t2735377061 * L_0 = MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125(__this, _stringLiteral683363693, /*hidden argument*/MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125_RuntimeMethod_var);
		V_0 = L_0;
		Toggle_t2735377061 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		CameraSettings_t3152619780 * L_3 = __this->get_mCamSettings_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		CameraSettings_t3152619780 * L_5 = __this->get_mCamSettings_2();
		Toggle_t2735377061 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = Toggle_get_isOn_m1428293607(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		CameraSettings_SwitchAutofocus_m1104105893(L_5, L_7, /*hidden argument*/NULL);
	}

IL_0038:
	{
		return;
	}
}
// System.Void MenuOptions::ToggleTorch()
extern "C"  void MenuOptions_ToggleTorch_m1503051540 (MenuOptions_t1951716431 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuOptions_ToggleTorch_m1503051540_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Toggle_t2735377061 * V_0 = NULL;
	{
		Toggle_t2735377061 * L_0 = MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125(__this, _stringLiteral351316669, /*hidden argument*/MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125_RuntimeMethod_var);
		V_0 = L_0;
		Toggle_t2735377061 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0049;
		}
	}
	{
		CameraSettings_t3152619780 * L_3 = __this->get_mCamSettings_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0049;
		}
	}
	{
		CameraSettings_t3152619780 * L_5 = __this->get_mCamSettings_2();
		Toggle_t2735377061 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = Toggle_get_isOn_m1428293607(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		CameraSettings_SwitchFlashTorch_m1540789541(L_5, L_7, /*hidden argument*/NULL);
		Toggle_t2735377061 * L_8 = V_0;
		CameraSettings_t3152619780 * L_9 = __this->get_mCamSettings_2();
		NullCheck(L_9);
		bool L_10 = CameraSettings_IsFlashTorchEnabled_m3875252701(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Toggle_set_isOn_m3548357404(L_8, L_10, /*hidden argument*/NULL);
	}

IL_0049:
	{
		return;
	}
}
// System.Void MenuOptions::SelectCamera(System.Boolean)
extern "C"  void MenuOptions_SelectCamera_m2158115138 (MenuOptions_t1951716431 * __this, bool ___front0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuOptions_SelectCamera_m2158115138_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Toggle_t2735377061 * V_0 = NULL;
	CameraSettings_t3152619780 * G_B3_0 = NULL;
	CameraSettings_t3152619780 * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	CameraSettings_t3152619780 * G_B4_1 = NULL;
	{
		CameraSettings_t3152619780 * L_0 = __this->get_mCamSettings_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0056;
		}
	}
	{
		CameraSettings_t3152619780 * L_2 = __this->get_mCamSettings_2();
		bool L_3 = ___front0;
		G_B2_0 = L_2;
		if (!L_3)
		{
			G_B3_0 = L_2;
			goto IL_0022;
		}
	}
	{
		G_B4_0 = 2;
		G_B4_1 = G_B2_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_0023:
	{
		NullCheck(G_B4_1);
		CameraSettings_SelectCamera_m387205834(G_B4_1, G_B4_0, /*hidden argument*/NULL);
		Toggle_t2735377061 * L_4 = MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125(__this, _stringLiteral351316669, /*hidden argument*/MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125_RuntimeMethod_var);
		V_0 = L_4;
		bool L_5 = ___front0;
		if (!L_5)
		{
			goto IL_0056;
		}
	}
	{
		Toggle_t2735377061 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		Toggle_t2735377061 * L_8 = V_0;
		NullCheck(L_8);
		bool L_9 = Toggle_get_isOn_m1428293607(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0056;
		}
	}
	{
		MenuOptions_ToggleTorch_m1503051540(__this, /*hidden argument*/NULL);
	}

IL_0056:
	{
		return;
	}
}
// System.Void MenuOptions::ToggleExtendedTracking()
extern "C"  void MenuOptions_ToggleExtendedTracking_m3362773293 (MenuOptions_t1951716431 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuOptions_ToggleExtendedTracking_m3362773293_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Toggle_t2735377061 * V_0 = NULL;
	{
		Toggle_t2735377061 * L_0 = MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125(__this, _stringLiteral1531511922, /*hidden argument*/MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125_RuntimeMethod_var);
		V_0 = L_0;
		Toggle_t2735377061 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		TrackableSettings_t2862243993 * L_3 = __this->get_mTrackableSettings_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		TrackableSettings_t2862243993 * L_5 = __this->get_mTrackableSettings_3();
		Toggle_t2735377061 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = Toggle_get_isOn_m1428293607(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< bool >::Invoke(4 /* System.Void TrackableSettings::SwitchExtendedTracking(System.Boolean) */, L_5, L_7);
	}

IL_0038:
	{
		return;
	}
}
// System.Void MenuOptions::ActivateDataset(System.String)
extern "C"  void MenuOptions_ActivateDataset_m942511626 (MenuOptions_t1951716431 * __this, String_t* ___datasetName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuOptions_ActivateDataset_m942511626_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackableSettings_t2862243993 * L_0 = __this->get_mTrackableSettings_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		TrackableSettings_t2862243993 * L_2 = __this->get_mTrackableSettings_3();
		String_t* L_3 = ___datasetName0;
		NullCheck(L_2);
		TrackableSettings_ActivateDataSet_m4118878993(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void MenuOptions::UpdateUI()
extern "C"  void MenuOptions_UpdateUI_m2695051465 (MenuOptions_t1951716431 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuOptions_UpdateUI_m2695051465_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Toggle_t2735377061 * V_0 = NULL;
	Toggle_t2735377061 * V_1 = NULL;
	Toggle_t2735377061 * V_2 = NULL;
	Toggle_t2735377061 * V_3 = NULL;
	Toggle_t2735377061 * V_4 = NULL;
	Toggle_t2735377061 * V_5 = NULL;
	Toggle_t2735377061 * V_6 = NULL;
	{
		Toggle_t2735377061 * L_0 = MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125(__this, _stringLiteral1531511922, /*hidden argument*/MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125_RuntimeMethod_var);
		V_0 = L_0;
		Toggle_t2735377061 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		TrackableSettings_t2862243993 * L_3 = __this->get_mTrackableSettings_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		Toggle_t2735377061 * L_5 = V_0;
		TrackableSettings_t2862243993 * L_6 = __this->get_mTrackableSettings_3();
		NullCheck(L_6);
		bool L_7 = TrackableSettings_IsExtendedTrackingEnabled_m1319587722(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Toggle_set_isOn_m3548357404(L_5, L_7, /*hidden argument*/NULL);
	}

IL_0038:
	{
		Toggle_t2735377061 * L_8 = MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125(__this, _stringLiteral351316669, /*hidden argument*/MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125_RuntimeMethod_var);
		V_1 = L_8;
		Toggle_t2735377061 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0070;
		}
	}
	{
		CameraSettings_t3152619780 * L_11 = __this->get_mCamSettings_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		Toggle_t2735377061 * L_13 = V_1;
		CameraSettings_t3152619780 * L_14 = __this->get_mCamSettings_2();
		NullCheck(L_14);
		bool L_15 = CameraSettings_IsFlashTorchEnabled_m3875252701(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		Toggle_set_isOn_m3548357404(L_13, L_15, /*hidden argument*/NULL);
	}

IL_0070:
	{
		Toggle_t2735377061 * L_16 = MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125(__this, _stringLiteral683363693, /*hidden argument*/MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125_RuntimeMethod_var);
		V_2 = L_16;
		Toggle_t2735377061 * L_17 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00a8;
		}
	}
	{
		CameraSettings_t3152619780 * L_19 = __this->get_mCamSettings_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_20 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00a8;
		}
	}
	{
		Toggle_t2735377061 * L_21 = V_2;
		CameraSettings_t3152619780 * L_22 = __this->get_mCamSettings_2();
		NullCheck(L_22);
		bool L_23 = CameraSettings_IsAutofocusEnabled_m386305083(L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		Toggle_set_isOn_m3548357404(L_21, L_23, /*hidden argument*/NULL);
	}

IL_00a8:
	{
		Toggle_t2735377061 * L_24 = MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125(__this, _stringLiteral3549741419, /*hidden argument*/MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125_RuntimeMethod_var);
		V_3 = L_24;
		Toggle_t2735377061 * L_25 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_26 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00e0;
		}
	}
	{
		CameraSettings_t3152619780 * L_27 = __this->get_mCamSettings_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_28 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00e0;
		}
	}
	{
		Toggle_t2735377061 * L_29 = V_3;
		CameraSettings_t3152619780 * L_30 = __this->get_mCamSettings_2();
		NullCheck(L_30);
		bool L_31 = CameraSettings_IsFrontCameraActive_m282456036(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		Toggle_set_isOn_m3548357404(L_29, L_31, /*hidden argument*/NULL);
	}

IL_00e0:
	{
		Toggle_t2735377061 * L_32 = MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125(__this, _stringLiteral3872780051, /*hidden argument*/MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125_RuntimeMethod_var);
		V_4 = L_32;
		Toggle_t2735377061 * L_33 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_34 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_011e;
		}
	}
	{
		CameraSettings_t3152619780 * L_35 = __this->get_mCamSettings_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_36 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_011e;
		}
	}
	{
		Toggle_t2735377061 * L_37 = V_4;
		CameraSettings_t3152619780 * L_38 = __this->get_mCamSettings_2();
		NullCheck(L_38);
		bool L_39 = CameraSettings_IsFrontCameraActive_m282456036(L_38, /*hidden argument*/NULL);
		NullCheck(L_37);
		Toggle_set_isOn_m3548357404(L_37, (bool)((((int32_t)L_39) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_011e:
	{
		Toggle_t2735377061 * L_40 = MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125(__this, _stringLiteral3544302583, /*hidden argument*/MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125_RuntimeMethod_var);
		V_5 = L_40;
		Toggle_t2735377061 * L_41 = MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125(__this, _stringLiteral451598385, /*hidden argument*/MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125_RuntimeMethod_var);
		V_6 = L_41;
		TrackableSettings_t2862243993 * L_42 = __this->get_mTrackableSettings_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_43 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_42, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_01ca;
		}
	}
	{
		Toggle_t2735377061 * L_44 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_45 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_0181;
		}
	}
	{
		Toggle_t2735377061 * L_46 = V_5;
		NullCheck(L_46);
		GameObject_t1113636619 * L_47 = Component_get_gameObject_m442555142(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		bool L_48 = GameObject_get_activeInHierarchy_m2006396688(L_47, /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_0181;
		}
	}
	{
		Toggle_t2735377061 * L_49 = V_5;
		TrackableSettings_t2862243993 * L_50 = __this->get_mTrackableSettings_3();
		NullCheck(L_50);
		String_t* L_51 = TrackableSettings_GetActiveDatasetName_m1771968640(L_50, /*hidden argument*/NULL);
		NullCheck(L_51);
		bool L_52 = String_Contains_m1147431944(L_51, _stringLiteral3544302583, /*hidden argument*/NULL);
		NullCheck(L_49);
		Toggle_set_isOn_m3548357404(L_49, L_52, /*hidden argument*/NULL);
	}

IL_0181:
	{
		Toggle_t2735377061 * L_53 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_54 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_01ca;
		}
	}
	{
		TrackableSettings_t2862243993 * L_55 = __this->get_mTrackableSettings_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_56 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_55, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_01ca;
		}
	}
	{
		Toggle_t2735377061 * L_57 = V_6;
		NullCheck(L_57);
		GameObject_t1113636619 * L_58 = Component_get_gameObject_m442555142(L_57, /*hidden argument*/NULL);
		NullCheck(L_58);
		bool L_59 = GameObject_get_activeInHierarchy_m2006396688(L_58, /*hidden argument*/NULL);
		if (!L_59)
		{
			goto IL_01ca;
		}
	}
	{
		Toggle_t2735377061 * L_60 = V_6;
		TrackableSettings_t2862243993 * L_61 = __this->get_mTrackableSettings_3();
		NullCheck(L_61);
		String_t* L_62 = TrackableSettings_GetActiveDatasetName_m1771968640(L_61, /*hidden argument*/NULL);
		NullCheck(L_62);
		bool L_63 = String_Contains_m1147431944(L_62, _stringLiteral451598385, /*hidden argument*/NULL);
		NullCheck(L_60);
		Toggle_set_isOn_m3548357404(L_60, L_63, /*hidden argument*/NULL);
	}

IL_01ca:
	{
		return;
	}
}
// System.Void MenuOptions::CloseMenu()
extern "C"  void MenuOptions_CloseMenu_m2198615225 (MenuOptions_t1951716431 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuOptions_CloseMenu_m2198615225_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MenuAnimator_t2112910832 * L_0 = __this->get_mMenuAnim_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		MenuAnimator_t2112910832 * L_2 = __this->get_mMenuAnim_4();
		NullCheck(L_2);
		MenuAnimator_Hide_m1323916210(L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void MenuOptions::OnPaused(System.Boolean)
extern "C"  void MenuOptions_OnPaused_m1134986695 (MenuOptions_t1951716431 * __this, bool ___paused0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuOptions_OnPaused_m1134986695_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Toggle_t2735377061 * V_1 = NULL;
	{
		bool L_0 = ___paused0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		Toggle_t2735377061 * L_2 = MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125(__this, _stringLiteral351316669, /*hidden argument*/MenuOptions_FindUISelectableWithText_TisToggle_t2735377061_m4067184125_RuntimeMethod_var);
		V_1 = L_2;
		Toggle_t2735377061 * L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		Toggle_t2735377061 * L_5 = V_1;
		CameraSettings_t3152619780 * L_6 = __this->get_mCamSettings_2();
		NullCheck(L_6);
		bool L_7 = CameraSettings_IsFlashTorchEnabled_m3875252701(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Toggle_set_isOn_m3548357404(L_5, L_7, /*hidden argument*/NULL);
	}

IL_0034:
	{
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
// System.Void menuStart::.ctor()
extern "C"  void menuStart__ctor_m1393014372 (menuStart_t2290326516 * __this, const RuntimeMethod* method)
{
	{
		LocalizationHelper__ctor_m1418160484(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void menuStart::changemenuscene()
extern "C"  void menuStart_changemenuscene_m900804662 (menuStart_t2290326516 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (menuStart_changemenuscene_m900804662_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = GameObject_FindGameObjectWithTag_m2129039296(NULL /*static, unused*/, _stringLiteral376326826, /*hidden argument*/NULL);
		__this->set_dropdown_4(L_0);
		GameObject_t1113636619 * L_1 = __this->get_dropdown_4();
		NullCheck(L_1);
		Dropdown_t2274391225 * L_2 = GameObject_GetComponent_TisDropdown_t2274391225_m2992396495(L_1, /*hidden argument*/GameObject_GetComponent_TisDropdown_t2274391225_m2992396495_RuntimeMethod_var);
		NullCheck(L_2);
		List_1_t447389798 * L_3 = Dropdown_get_options_m2762539965(L_2, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_4 = __this->get_dropdown_4();
		NullCheck(L_4);
		Dropdown_t2274391225 * L_5 = GameObject_GetComponent_TisDropdown_t2274391225_m2992396495(L_4, /*hidden argument*/GameObject_GetComponent_TisDropdown_t2274391225_m2992396495_RuntimeMethod_var);
		NullCheck(L_5);
		int32_t L_6 = Dropdown_get_value_m1555353112(L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		OptionData_t3270282352 * L_7 = List_1_get_Item_m489380024(L_3, L_6, /*hidden argument*/List_1_get_Item_m489380024_RuntimeMethod_var);
		NullCheck(L_7);
		String_t* L_8 = OptionData_get_text_m2997376818(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(argClass_t2323061523_il2cpp_TypeInfo_var);
		((argClass_t2323061523_StaticFields*)il2cpp_codegen_static_fields_for(argClass_t2323061523_il2cpp_TypeInfo_var))->set_language_0(L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1550356210, /*hidden argument*/NULL);
		Application_LoadLevel_m2650087286(NULL /*static, unused*/, _stringLiteral199156895, /*hidden argument*/NULL);
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
// System.Void nyiscript::.ctor()
extern "C"  void nyiscript__ctor_m3020806459 (nyiscript_t2578089225 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void nyiscript::Start()
extern "C"  void nyiscript_Start_m228865069 (nyiscript_t2578089225 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void nyiscript::Update()
extern "C"  void nyiscript_Update_m1471271317 (nyiscript_t2578089225 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void onload::.ctor()
extern "C"  void onload__ctor_m916510472 (onload_t2599798848 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void onload::Start()
extern "C"  void onload_Start_m1367470650 (onload_t2599798848 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (onload_Start_m1367470650_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t1901882714 * L_0 = Component_GetComponent_TisText_t1901882714_m4196288697(__this, /*hidden argument*/Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(argClass_t2323061523_il2cpp_TypeInfo_var);
		String_t* L_1 = ((argClass_t2323061523_StaticFields*)il2cpp_codegen_static_fields_for(argClass_t2323061523_il2cpp_TypeInfo_var))->get_language_0();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void onload::Update()
extern "C"  void onload_Update_m116250530 (onload_t2599798848 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void StreamVideo::.ctor()
extern "C"  void StreamVideo__ctor_m821398251 (StreamVideo_t2698492640 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StreamVideo::Start()
extern "C"  void StreamVideo_Start_m1597082019 (StreamVideo_t2698492640 * __this, const RuntimeMethod* method)
{
	{
		Application_set_runInBackground_m2169704730(NULL /*static, unused*/, (bool)1, /*hidden argument*/NULL);
		RuntimeObject* L_0 = StreamVideo_playVideo_m1477276020(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator StreamVideo::playVideo()
extern "C"  RuntimeObject* StreamVideo_playVideo_m1477276020 (StreamVideo_t2698492640 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamVideo_playVideo_m1477276020_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CplayVideoU3Ec__Iterator0_t2444540216 * V_0 = NULL;
	{
		U3CplayVideoU3Ec__Iterator0_t2444540216 * L_0 = (U3CplayVideoU3Ec__Iterator0_t2444540216 *)il2cpp_codegen_object_new(U3CplayVideoU3Ec__Iterator0_t2444540216_il2cpp_TypeInfo_var);
		U3CplayVideoU3Ec__Iterator0__ctor_m3103521919(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CplayVideoU3Ec__Iterator0_t2444540216 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_0(__this);
		U3CplayVideoU3Ec__Iterator0_t2444540216 * L_2 = V_0;
		return L_2;
	}
}
// System.Void StreamVideo::Update()
extern "C"  void StreamVideo_Update_m163762655 (StreamVideo_t2698492640 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void StreamVideo/<playVideo>c__Iterator0::.ctor()
extern "C"  void U3CplayVideoU3Ec__Iterator0__ctor_m3103521919 (U3CplayVideoU3Ec__Iterator0_t2444540216 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean StreamVideo/<playVideo>c__Iterator0::MoveNext()
extern "C"  bool U3CplayVideoU3Ec__Iterator0_MoveNext_m823089223 (U3CplayVideoU3Ec__Iterator0_t2444540216 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CplayVideoU3Ec__Iterator0_MoveNext_m823089223_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_0128;
			}
			case 2:
			{
				goto IL_01db;
			}
		}
	}
	{
		goto IL_020b;
	}

IL_0025:
	{
		StreamVideo_t2698492640 * L_2 = __this->get_U24this_0();
		StreamVideo_t2698492640 * L_3 = __this->get_U24this_0();
		NullCheck(L_3);
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		VideoPlayer_t1683042537 * L_5 = GameObject_AddComponent_TisVideoPlayer_t1683042537_m955221201(L_4, /*hidden argument*/GameObject_AddComponent_TisVideoPlayer_t1683042537_m955221201_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->set_videoPlayer_4(L_5);
		StreamVideo_t2698492640 * L_6 = __this->get_U24this_0();
		StreamVideo_t2698492640 * L_7 = __this->get_U24this_0();
		NullCheck(L_7);
		GameObject_t1113636619 * L_8 = Component_get_gameObject_m442555142(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		AudioSource_t3935305588 * L_9 = GameObject_AddComponent_TisAudioSource_t3935305588_m2869327390(L_8, /*hidden argument*/GameObject_AddComponent_TisAudioSource_t3935305588_m2869327390_RuntimeMethod_var);
		NullCheck(L_6);
		L_6->set_audioSource_6(L_9);
		StreamVideo_t2698492640 * L_10 = __this->get_U24this_0();
		NullCheck(L_10);
		VideoPlayer_t1683042537 * L_11 = L_10->get_videoPlayer_4();
		NullCheck(L_11);
		VideoPlayer_set_playOnAwake_m1398368016(L_11, (bool)0, /*hidden argument*/NULL);
		StreamVideo_t2698492640 * L_12 = __this->get_U24this_0();
		NullCheck(L_12);
		AudioSource_t3935305588 * L_13 = L_12->get_audioSource_6();
		NullCheck(L_13);
		AudioSource_set_playOnAwake_m1824967994(L_13, (bool)0, /*hidden argument*/NULL);
		StreamVideo_t2698492640 * L_14 = __this->get_U24this_0();
		NullCheck(L_14);
		AudioSource_t3935305588 * L_15 = L_14->get_audioSource_6();
		NullCheck(L_15);
		AudioSource_Pause_m1501822765(L_15, /*hidden argument*/NULL);
		StreamVideo_t2698492640 * L_16 = __this->get_U24this_0();
		NullCheck(L_16);
		VideoPlayer_t1683042537 * L_17 = L_16->get_videoPlayer_4();
		NullCheck(L_17);
		VideoPlayer_set_source_m766641694(L_17, 0, /*hidden argument*/NULL);
		StreamVideo_t2698492640 * L_18 = __this->get_U24this_0();
		NullCheck(L_18);
		VideoPlayer_t1683042537 * L_19 = L_18->get_videoPlayer_4();
		NullCheck(L_19);
		VideoPlayer_set_audioOutputMode_m1054936430(L_19, 1, /*hidden argument*/NULL);
		StreamVideo_t2698492640 * L_20 = __this->get_U24this_0();
		NullCheck(L_20);
		VideoPlayer_t1683042537 * L_21 = L_20->get_videoPlayer_4();
		NullCheck(L_21);
		VideoPlayer_EnableAudioTrack_m3940352556(L_21, (uint16_t)0, (bool)1, /*hidden argument*/NULL);
		StreamVideo_t2698492640 * L_22 = __this->get_U24this_0();
		NullCheck(L_22);
		VideoPlayer_t1683042537 * L_23 = L_22->get_videoPlayer_4();
		StreamVideo_t2698492640 * L_24 = __this->get_U24this_0();
		NullCheck(L_24);
		AudioSource_t3935305588 * L_25 = L_24->get_audioSource_6();
		NullCheck(L_23);
		VideoPlayer_SetTargetAudioSource_m4040805661(L_23, (uint16_t)0, L_25, /*hidden argument*/NULL);
		StreamVideo_t2698492640 * L_26 = __this->get_U24this_0();
		NullCheck(L_26);
		VideoPlayer_t1683042537 * L_27 = L_26->get_videoPlayer_4();
		StreamVideo_t2698492640 * L_28 = __this->get_U24this_0();
		NullCheck(L_28);
		VideoClip_t1281919028 * L_29 = L_28->get_videoToPlay_3();
		NullCheck(L_27);
		VideoPlayer_set_clip_m1858687940(L_27, L_29, /*hidden argument*/NULL);
		StreamVideo_t2698492640 * L_30 = __this->get_U24this_0();
		NullCheck(L_30);
		VideoPlayer_t1683042537 * L_31 = L_30->get_videoPlayer_4();
		NullCheck(L_31);
		VideoPlayer_Prepare_m3397962125(L_31, /*hidden argument*/NULL);
		goto IL_0128;
	}

IL_010d:
	{
		__this->set_U24current_1(NULL);
		bool L_32 = __this->get_U24disposing_2();
		if (L_32)
		{
			goto IL_0123;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0123:
	{
		goto IL_020d;
	}

IL_0128:
	{
		StreamVideo_t2698492640 * L_33 = __this->get_U24this_0();
		NullCheck(L_33);
		VideoPlayer_t1683042537 * L_34 = L_33->get_videoPlayer_4();
		NullCheck(L_34);
		bool L_35 = VideoPlayer_get_isPrepared_m1964369291(L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_010d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral564937146, /*hidden argument*/NULL);
		StreamVideo_t2698492640 * L_36 = __this->get_U24this_0();
		NullCheck(L_36);
		RawImage_t3182918964 * L_37 = L_36->get_image_2();
		StreamVideo_t2698492640 * L_38 = __this->get_U24this_0();
		NullCheck(L_38);
		VideoPlayer_t1683042537 * L_39 = L_38->get_videoPlayer_4();
		NullCheck(L_39);
		Texture_t3661962703 * L_40 = VideoPlayer_get_texture_m3244594803(L_39, /*hidden argument*/NULL);
		NullCheck(L_37);
		RawImage_set_texture_m415027901(L_37, L_40, /*hidden argument*/NULL);
		StreamVideo_t2698492640 * L_41 = __this->get_U24this_0();
		NullCheck(L_41);
		VideoPlayer_t1683042537 * L_42 = L_41->get_videoPlayer_4();
		NullCheck(L_42);
		VideoPlayer_Play_m1850501814(L_42, /*hidden argument*/NULL);
		StreamVideo_t2698492640 * L_43 = __this->get_U24this_0();
		NullCheck(L_43);
		AudioSource_t3935305588 * L_44 = L_43->get_audioSource_6();
		NullCheck(L_44);
		AudioSource_Play_m48294159(L_44, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2981664703, /*hidden argument*/NULL);
		goto IL_01db;
	}

IL_0196:
	{
		StreamVideo_t2698492640 * L_45 = __this->get_U24this_0();
		NullCheck(L_45);
		VideoPlayer_t1683042537 * L_46 = L_45->get_videoPlayer_4();
		NullCheck(L_46);
		double L_47 = VideoPlayer_get_time_m623957222(L_46, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_48 = Mathf_FloorToInt_m1870542928(NULL /*static, unused*/, (((float)((float)L_47))), /*hidden argument*/NULL);
		int32_t L_49 = L_48;
		RuntimeObject * L_50 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_49);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_51 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral1136803800, L_50, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_51, /*hidden argument*/NULL);
		__this->set_U24current_1(NULL);
		bool L_52 = __this->get_U24disposing_2();
		if (L_52)
		{
			goto IL_01d6;
		}
	}
	{
		__this->set_U24PC_3(2);
	}

IL_01d6:
	{
		goto IL_020d;
	}

IL_01db:
	{
		StreamVideo_t2698492640 * L_53 = __this->get_U24this_0();
		NullCheck(L_53);
		VideoPlayer_t1683042537 * L_54 = L_53->get_videoPlayer_4();
		NullCheck(L_54);
		bool L_55 = VideoPlayer_get_isPlaying_m2729754655(L_54, /*hidden argument*/NULL);
		if (L_55)
		{
			goto IL_0196;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2144324982, /*hidden argument*/NULL);
		Application_LoadLevel_m2650087286(NULL /*static, unused*/, _stringLiteral3290706377, /*hidden argument*/NULL);
		__this->set_U24PC_3((-1));
	}

IL_020b:
	{
		return (bool)0;
	}

IL_020d:
	{
		return (bool)1;
	}
}
// System.Object StreamVideo/<playVideo>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CplayVideoU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m4203481790 (U3CplayVideoU3Ec__Iterator0_t2444540216 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object StreamVideo/<playVideo>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CplayVideoU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1427556474 (U3CplayVideoU3Ec__Iterator0_t2444540216 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void StreamVideo/<playVideo>c__Iterator0::Dispose()
extern "C"  void U3CplayVideoU3Ec__Iterator0_Dispose_m1449132831 (U3CplayVideoU3Ec__Iterator0_t2444540216 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void StreamVideo/<playVideo>c__Iterator0::Reset()
extern "C"  void U3CplayVideoU3Ec__Iterator0_Reset_m382291787 (U3CplayVideoU3Ec__Iterator0_t2444540216 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CplayVideoU3Ec__Iterator0_Reset_m382291787_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void TapHandler::.ctor()
extern "C"  void TapHandler__ctor_m1076312137 (TapHandler_t334234343 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TapHandler::Start()
extern "C"  void TapHandler_Start_m554074027 (TapHandler_t334234343 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapHandler_Start_m554074027_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_mTapCount_5(0);
		__this->set_mTimeSinceLastTap_3((0.0f));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		MenuAnimator_t2112910832 * L_0 = Object_FindObjectOfType_TisMenuAnimator_t2112910832_m1830680649(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisMenuAnimator_t2112910832_m1830680649_RuntimeMethod_var);
		__this->set_mMenuAnim_4(L_0);
		return;
	}
}
// System.Void TapHandler::Update()
extern "C"  void TapHandler_Update_m2328515667 (TapHandler_t334234343 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapHandler_Update_m2328515667_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MenuAnimator_t2112910832 * L_0 = __this->get_mMenuAnim_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		MenuAnimator_t2112910832 * L_2 = __this->get_mMenuAnim_4();
		NullCheck(L_2);
		bool L_3 = MenuAnimator_IsVisible_m928022866(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		__this->set_mTapCount_5(0);
		__this->set_mTimeSinceLastTap_3((0.0f));
		goto IL_003d;
	}

IL_0037:
	{
		TapHandler_HandleTap_m1322678531(__this, /*hidden argument*/NULL);
	}

IL_003d:
	{
		return;
	}
}
// System.Void TapHandler::HandleTap()
extern "C"  void TapHandler_HandleTap_m1322678531 (TapHandler_t334234343 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapHandler_HandleTap_m1322678531_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_mTapCount_5();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_004b;
		}
	}
	{
		float L_1 = __this->get_mTimeSinceLastTap_3();
		float L_2 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_mTimeSinceLastTap_3(((float)il2cpp_codegen_add((float)L_1, (float)L_2)));
		float L_3 = __this->get_mTimeSinceLastTap_3();
		if ((!(((float)L_3) > ((float)(0.5f)))))
		{
			goto IL_0046;
		}
	}
	{
		VirtActionInvoker0::Invoke(5 /* System.Void TapHandler::OnSingleTapConfirmed() */, __this);
		__this->set_mTapCount_5(0);
		__this->set_mTimeSinceLastTap_3((0.0f));
	}

IL_0046:
	{
		goto IL_006f;
	}

IL_004b:
	{
		int32_t L_4 = __this->get_mTapCount_5();
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_006f;
		}
	}
	{
		VirtActionInvoker0::Invoke(6 /* System.Void TapHandler::OnDoubleTap() */, __this);
		__this->set_mTimeSinceLastTap_3((0.0f));
		__this->set_mTapCount_5(0);
	}

IL_006f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_5 = Input_GetMouseButtonUp_m2924350851(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_6 = __this->get_mTapCount_5();
		__this->set_mTapCount_5(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
		int32_t L_7 = __this->get_mTapCount_5();
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_009a;
		}
	}
	{
		VirtActionInvoker0::Invoke(4 /* System.Void TapHandler::OnSingleTap() */, __this);
	}

IL_009a:
	{
		return;
	}
}
// System.Void TapHandler::OnSingleTap()
extern "C"  void TapHandler_OnSingleTap_m3625150319 (TapHandler_t334234343 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void TapHandler::OnSingleTapConfirmed()
extern "C"  void TapHandler_OnSingleTapConfirmed_m3372274260 (TapHandler_t334234343 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapHandler_OnSingleTapConfirmed_m3372274260_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CameraSettings_t3152619780 * V_0 = NULL;
	{
		CameraSettings_t3152619780 * L_0 = Component_GetComponentInChildren_TisCameraSettings_t3152619780_m2209036194(__this, /*hidden argument*/Component_GetComponentInChildren_TisCameraSettings_t3152619780_m2209036194_RuntimeMethod_var);
		V_0 = L_0;
		CameraSettings_t3152619780 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		CameraSettings_t3152619780 * L_3 = V_0;
		NullCheck(L_3);
		CameraSettings_TriggerAutofocusEvent_m898525935(L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void TapHandler::OnDoubleTap()
extern "C"  void TapHandler_OnDoubleTap_m2928608177 (TapHandler_t334234343 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapHandler_OnDoubleTap_m2928608177_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MenuAnimator_t2112910832 * L_0 = __this->get_mMenuAnim_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		MenuAnimator_t2112910832 * L_2 = __this->get_mMenuAnim_4();
		NullCheck(L_2);
		bool L_3 = MenuAnimator_IsVisible_m928022866(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		MenuAnimator_t2112910832 * L_4 = __this->get_mMenuAnim_4();
		NullCheck(L_4);
		MenuAnimator_Show_m982174260(L_4, /*hidden argument*/NULL);
	}

IL_002b:
	{
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
// System.Void test::.ctor()
extern "C"  void test__ctor_m1851289862 (test_t650638785 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void test::Start()
extern "C"  void test_Start_m2123481336 (test_t650638785 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void test::Update()
extern "C"  void test_Update_m788463022 (test_t650638785 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (test_Update_m788463022_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = Behaviour_get_enabled_m753527255(__this, /*hidden argument*/NULL);
		bool L_1 = L_0;
		RuntimeObject * L_2 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
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
// System.Void test1::.ctor()
extern "C"  void test1__ctor_m4027769968 (test1_t3743330310 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void test1::Start()
extern "C"  void test1_Start_m1569955952 (test1_t3743330310 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (test1_Start_m1569955952_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioSource_t3935305588 * L_0 = Component_GetComponent_TisAudioSource_t3935305588_m1977431131(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t3935305588_m1977431131_RuntimeMethod_var);
		__this->set_m_MyAudioSource_4(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(argClass_t2323061523_il2cpp_TypeInfo_var);
		String_t* L_1 = ((argClass_t2323061523_StaticFields*)il2cpp_codegen_static_fields_for(argClass_t2323061523_il2cpp_TypeInfo_var))->get_language_0();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, _stringLiteral3500168455, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		AudioSource_t3935305588 * L_3 = __this->get_m_MyAudioSource_4();
		AudioClip_t3680889665 * L_4 = __this->get_m_AudioClipen_2();
		NullCheck(L_3);
		AudioSource_set_clip_m31653938(L_3, L_4, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_5 = __this->get_m_MyAudioSource_4();
		NullCheck(L_5);
		AudioSource_Stop_m2682712816(L_5, /*hidden argument*/NULL);
		goto IL_005d;
	}

IL_0041:
	{
		AudioSource_t3935305588 * L_6 = __this->get_m_MyAudioSource_4();
		AudioClip_t3680889665 * L_7 = __this->get_m_AudioCliphi_3();
		NullCheck(L_6);
		AudioSource_set_clip_m31653938(L_6, L_7, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_8 = __this->get_m_MyAudioSource_4();
		NullCheck(L_8);
		AudioSource_Stop_m2682712816(L_8, /*hidden argument*/NULL);
	}

IL_005d:
	{
		return;
	}
}
// System.Void test1::Update()
extern "C"  void test1_Update_m1564490628 (test1_t3743330310 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void TrackableSettings::.ctor()
extern "C"  void TrackableSettings__ctor_m1376286375 (TrackableSettings_t2862243993 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TrackableSettings::IsExtendedTrackingEnabled()
extern "C"  bool TrackableSettings_IsExtendedTrackingEnabled_m1319587722 (TrackableSettings_t2862243993 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_mExtTrackingEnabled_2();
		return L_0;
	}
}
// System.Void TrackableSettings::SwitchExtendedTracking(System.Boolean)
extern "C"  void TrackableSettings_SwitchExtendedTracking_m1275921245 (TrackableSettings_t2862243993 * __this, bool ___extTrackingEnabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableSettings_SwitchExtendedTracking_m1275921245_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StateManager_t1982749557 * V_0 = NULL;
	bool V_1 = false;
	TrackableBehaviour_t1113559212 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	ImageTargetBehaviour_t2200418350 * V_4 = NULL;
	MultiTargetBehaviour_t2061511750 * V_5 = NULL;
	CylinderTargetBehaviour_t822809409 * V_6 = NULL;
	ObjectTargetBehaviour_t728125005 * V_7 = NULL;
	VuMarkBehaviour_t1178230459 * V_8 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	TrackableSettings_t2862243993 * G_B43_0 = NULL;
	TrackableSettings_t2862243993 * G_B42_0 = NULL;
	int32_t G_B44_0 = 0;
	TrackableSettings_t2862243993 * G_B44_1 = NULL;
	{
		RuntimeObject* L_0 = TrackerManager_get_Instance_m777262631(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		StateManager_t1982749557 * L_1 = InterfaceFuncInvoker0< StateManager_t1982749557 * >::Invoke(3 /* Vuforia.StateManager Vuforia.ITrackerManager::GetStateManager() */, ITrackerManager_t607206903_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		V_1 = (bool)1;
		StateManager_t1982749557 * L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3 = StateManager_GetTrackableBehaviours_m3331997292(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour>::GetEnumerator() */, IEnumerable_1_t93412101_il2cpp_TypeInfo_var, L_3);
		V_3 = L_4;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01dd;
		}

IL_001e:
		{
			RuntimeObject* L_5 = V_3;
			NullCheck(L_5);
			TrackableBehaviour_t1113559212 * L_6 = InterfaceFuncInvoker0< TrackableBehaviour_t1113559212 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Vuforia.TrackableBehaviour>::get_Current() */, IEnumerator_1_t1546129680_il2cpp_TypeInfo_var, L_5);
			V_2 = L_6;
			TrackableBehaviour_t1113559212 * L_7 = V_2;
			if (!((ImageTargetBehaviour_t2200418350 *)IsInstClass((RuntimeObject*)L_7, ImageTargetBehaviour_t2200418350_il2cpp_TypeInfo_var)))
			{
				goto IL_007e;
			}
		}

IL_0030:
		{
			TrackableBehaviour_t1113559212 * L_8 = V_2;
			V_4 = ((ImageTargetBehaviour_t2200418350 *)IsInstClass((RuntimeObject*)L_8, ImageTargetBehaviour_t2200418350_il2cpp_TypeInfo_var));
			bool L_9 = ___extTrackingEnabled0;
			if (!L_9)
			{
				goto IL_006c;
			}
		}

IL_003e:
		{
			ImageTargetBehaviour_t2200418350 * L_10 = V_4;
			NullCheck(L_10);
			RuntimeObject* L_11 = ImageTargetBehaviour_get_ImageTarget_m2707173779(L_10, /*hidden argument*/NULL);
			NullCheck(L_11);
			bool L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Vuforia.ObjectTarget::StartExtendedTracking() */, ObjectTarget_t3212252422_il2cpp_TypeInfo_var, L_11);
			if (L_12)
			{
				goto IL_0067;
			}
		}

IL_004f:
		{
			V_1 = (bool)0;
			ImageTargetBehaviour_t2200418350 * L_13 = V_4;
			NullCheck(L_13);
			String_t* L_14 = TrackableBehaviour_get_TrackableName_m3644057705(L_13, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_15 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2304731189, L_14, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogError_m2850623458(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		}

IL_0067:
		{
			goto IL_0079;
		}

IL_006c:
		{
			ImageTargetBehaviour_t2200418350 * L_16 = V_4;
			NullCheck(L_16);
			RuntimeObject* L_17 = ImageTargetBehaviour_get_ImageTarget_m2707173779(L_16, /*hidden argument*/NULL);
			NullCheck(L_17);
			InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean Vuforia.ObjectTarget::StopExtendedTracking() */, ObjectTarget_t3212252422_il2cpp_TypeInfo_var, L_17);
		}

IL_0079:
		{
			goto IL_01dd;
		}

IL_007e:
		{
			TrackableBehaviour_t1113559212 * L_18 = V_2;
			if (!((MultiTargetBehaviour_t2061511750 *)IsInstClass((RuntimeObject*)L_18, MultiTargetBehaviour_t2061511750_il2cpp_TypeInfo_var)))
			{
				goto IL_00d7;
			}
		}

IL_0089:
		{
			TrackableBehaviour_t1113559212 * L_19 = V_2;
			V_5 = ((MultiTargetBehaviour_t2061511750 *)IsInstClass((RuntimeObject*)L_19, MultiTargetBehaviour_t2061511750_il2cpp_TypeInfo_var));
			bool L_20 = ___extTrackingEnabled0;
			if (!L_20)
			{
				goto IL_00c5;
			}
		}

IL_0097:
		{
			MultiTargetBehaviour_t2061511750 * L_21 = V_5;
			NullCheck(L_21);
			RuntimeObject* L_22 = MultiTargetBehaviour_get_MultiTarget_m1306973800(L_21, /*hidden argument*/NULL);
			NullCheck(L_22);
			bool L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Vuforia.ObjectTarget::StartExtendedTracking() */, ObjectTarget_t3212252422_il2cpp_TypeInfo_var, L_22);
			if (L_23)
			{
				goto IL_00c0;
			}
		}

IL_00a8:
		{
			V_1 = (bool)0;
			MultiTargetBehaviour_t2061511750 * L_24 = V_5;
			NullCheck(L_24);
			String_t* L_25 = TrackableBehaviour_get_TrackableName_m3644057705(L_24, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_26 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2304731189, L_25, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogError_m2850623458(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		}

IL_00c0:
		{
			goto IL_00d2;
		}

IL_00c5:
		{
			MultiTargetBehaviour_t2061511750 * L_27 = V_5;
			NullCheck(L_27);
			RuntimeObject* L_28 = MultiTargetBehaviour_get_MultiTarget_m1306973800(L_27, /*hidden argument*/NULL);
			NullCheck(L_28);
			InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean Vuforia.ObjectTarget::StopExtendedTracking() */, ObjectTarget_t3212252422_il2cpp_TypeInfo_var, L_28);
		}

IL_00d2:
		{
			goto IL_01dd;
		}

IL_00d7:
		{
			TrackableBehaviour_t1113559212 * L_29 = V_2;
			if (!((CylinderTargetBehaviour_t822809409 *)IsInstClass((RuntimeObject*)L_29, CylinderTargetBehaviour_t822809409_il2cpp_TypeInfo_var)))
			{
				goto IL_0130;
			}
		}

IL_00e2:
		{
			TrackableBehaviour_t1113559212 * L_30 = V_2;
			V_6 = ((CylinderTargetBehaviour_t822809409 *)IsInstClass((RuntimeObject*)L_30, CylinderTargetBehaviour_t822809409_il2cpp_TypeInfo_var));
			bool L_31 = ___extTrackingEnabled0;
			if (!L_31)
			{
				goto IL_011e;
			}
		}

IL_00f0:
		{
			CylinderTargetBehaviour_t822809409 * L_32 = V_6;
			NullCheck(L_32);
			RuntimeObject* L_33 = CylinderTargetBehaviour_get_CylinderTarget_m2779698828(L_32, /*hidden argument*/NULL);
			NullCheck(L_33);
			bool L_34 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Vuforia.ObjectTarget::StartExtendedTracking() */, ObjectTarget_t3212252422_il2cpp_TypeInfo_var, L_33);
			if (L_34)
			{
				goto IL_0119;
			}
		}

IL_0101:
		{
			V_1 = (bool)0;
			CylinderTargetBehaviour_t822809409 * L_35 = V_6;
			NullCheck(L_35);
			String_t* L_36 = TrackableBehaviour_get_TrackableName_m3644057705(L_35, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_37 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2304731189, L_36, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogError_m2850623458(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		}

IL_0119:
		{
			goto IL_012b;
		}

IL_011e:
		{
			CylinderTargetBehaviour_t822809409 * L_38 = V_6;
			NullCheck(L_38);
			RuntimeObject* L_39 = CylinderTargetBehaviour_get_CylinderTarget_m2779698828(L_38, /*hidden argument*/NULL);
			NullCheck(L_39);
			InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean Vuforia.ObjectTarget::StopExtendedTracking() */, ObjectTarget_t3212252422_il2cpp_TypeInfo_var, L_39);
		}

IL_012b:
		{
			goto IL_01dd;
		}

IL_0130:
		{
			TrackableBehaviour_t1113559212 * L_40 = V_2;
			if (!((ObjectTargetBehaviour_t728125005 *)IsInstClass((RuntimeObject*)L_40, ObjectTargetBehaviour_t728125005_il2cpp_TypeInfo_var)))
			{
				goto IL_0189;
			}
		}

IL_013b:
		{
			TrackableBehaviour_t1113559212 * L_41 = V_2;
			V_7 = ((ObjectTargetBehaviour_t728125005 *)IsInstClass((RuntimeObject*)L_41, ObjectTargetBehaviour_t728125005_il2cpp_TypeInfo_var));
			bool L_42 = ___extTrackingEnabled0;
			if (!L_42)
			{
				goto IL_0177;
			}
		}

IL_0149:
		{
			ObjectTargetBehaviour_t728125005 * L_43 = V_7;
			NullCheck(L_43);
			RuntimeObject* L_44 = ObjectTargetBehaviour_get_ObjectTarget_m1153386099(L_43, /*hidden argument*/NULL);
			NullCheck(L_44);
			bool L_45 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Vuforia.ObjectTarget::StartExtendedTracking() */, ObjectTarget_t3212252422_il2cpp_TypeInfo_var, L_44);
			if (L_45)
			{
				goto IL_0172;
			}
		}

IL_015a:
		{
			V_1 = (bool)0;
			ObjectTargetBehaviour_t728125005 * L_46 = V_7;
			NullCheck(L_46);
			String_t* L_47 = TrackableBehaviour_get_TrackableName_m3644057705(L_46, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_48 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2304731189, L_47, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogError_m2850623458(NULL /*static, unused*/, L_48, /*hidden argument*/NULL);
		}

IL_0172:
		{
			goto IL_0184;
		}

IL_0177:
		{
			ObjectTargetBehaviour_t728125005 * L_49 = V_7;
			NullCheck(L_49);
			RuntimeObject* L_50 = ObjectTargetBehaviour_get_ObjectTarget_m1153386099(L_49, /*hidden argument*/NULL);
			NullCheck(L_50);
			InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean Vuforia.ObjectTarget::StopExtendedTracking() */, ObjectTarget_t3212252422_il2cpp_TypeInfo_var, L_50);
		}

IL_0184:
		{
			goto IL_01dd;
		}

IL_0189:
		{
			TrackableBehaviour_t1113559212 * L_51 = V_2;
			if (!((VuMarkBehaviour_t1178230459 *)IsInstClass((RuntimeObject*)L_51, VuMarkBehaviour_t1178230459_il2cpp_TypeInfo_var)))
			{
				goto IL_01dd;
			}
		}

IL_0194:
		{
			TrackableBehaviour_t1113559212 * L_52 = V_2;
			V_8 = ((VuMarkBehaviour_t1178230459 *)IsInstClass((RuntimeObject*)L_52, VuMarkBehaviour_t1178230459_il2cpp_TypeInfo_var));
			bool L_53 = ___extTrackingEnabled0;
			if (!L_53)
			{
				goto IL_01d0;
			}
		}

IL_01a2:
		{
			VuMarkBehaviour_t1178230459 * L_54 = V_8;
			NullCheck(L_54);
			RuntimeObject* L_55 = VuMarkBehaviour_get_VuMarkTemplate_m3771121130(L_54, /*hidden argument*/NULL);
			NullCheck(L_55);
			bool L_56 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Vuforia.ObjectTarget::StartExtendedTracking() */, ObjectTarget_t3212252422_il2cpp_TypeInfo_var, L_55);
			if (L_56)
			{
				goto IL_01cb;
			}
		}

IL_01b3:
		{
			V_1 = (bool)0;
			VuMarkBehaviour_t1178230459 * L_57 = V_8;
			NullCheck(L_57);
			String_t* L_58 = TrackableBehaviour_get_TrackableName_m3644057705(L_57, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_59 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2304731189, L_58, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogError_m2850623458(NULL /*static, unused*/, L_59, /*hidden argument*/NULL);
		}

IL_01cb:
		{
			goto IL_01dd;
		}

IL_01d0:
		{
			VuMarkBehaviour_t1178230459 * L_60 = V_8;
			NullCheck(L_60);
			RuntimeObject* L_61 = VuMarkBehaviour_get_VuMarkTemplate_m3771121130(L_60, /*hidden argument*/NULL);
			NullCheck(L_61);
			InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean Vuforia.ObjectTarget::StopExtendedTracking() */, ObjectTarget_t3212252422_il2cpp_TypeInfo_var, L_61);
		}

IL_01dd:
		{
			RuntimeObject* L_62 = V_3;
			NullCheck(L_62);
			bool L_63 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_62);
			if (L_63)
			{
				goto IL_001e;
			}
		}

IL_01e8:
		{
			IL2CPP_LEAVE(0x1FA, FINALLY_01ed);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01ed;
	}

FINALLY_01ed:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_64 = V_3;
			if (!L_64)
			{
				goto IL_01f9;
			}
		}

IL_01f3:
		{
			RuntimeObject* L_65 = V_3;
			NullCheck(L_65);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_65);
		}

IL_01f9:
		{
			IL2CPP_END_FINALLY(493)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(493)
	{
		IL2CPP_JUMP_TBL(0x1FA, IL_01fa)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01fa:
	{
		bool L_66 = V_1;
		G_B42_0 = __this;
		if (!L_66)
		{
			G_B43_0 = __this;
			goto IL_0204;
		}
	}
	{
		bool L_67 = ___extTrackingEnabled0;
		G_B44_0 = ((int32_t)(L_67));
		G_B44_1 = G_B42_0;
		goto IL_0205;
	}

IL_0204:
	{
		G_B44_0 = 0;
		G_B44_1 = G_B43_0;
	}

IL_0205:
	{
		NullCheck(G_B44_1);
		G_B44_1->set_mExtTrackingEnabled_2((bool)G_B44_0);
		return;
	}
}
// System.String TrackableSettings::GetActiveDatasetName()
extern "C"  String_t* TrackableSettings_GetActiveDatasetName_m1771968640 (TrackableSettings_t2862243993 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableSettings_GetActiveDatasetName_m1771968640_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectTracker_t4177997237 * V_0 = NULL;
	List_1_t463142320 * V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		RuntimeObject* L_0 = TrackerManager_get_Instance_m777262631(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectTracker_t4177997237 * L_1 = GenericInterfaceFuncInvoker0< ObjectTracker_t4177997237 * >::Invoke(ITrackerManager_GetTracker_TisObjectTracker_t4177997237_m1548597255_RuntimeMethod_var, L_0);
		V_0 = L_1;
		ObjectTracker_t4177997237 * L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3 = ObjectTracker_GetActiveDataSets_m254019146(L_2, /*hidden argument*/NULL);
		List_1_t463142320 * L_4 = Enumerable_ToList_TisDataSet_t3286034874_m1984750843(NULL /*static, unused*/, L_3, /*hidden argument*/Enumerable_ToList_TisDataSet_t3286034874_m1984750843_RuntimeMethod_var);
		V_1 = L_4;
		List_1_t463142320 * L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6 = List_1_get_Count_m3978133574(L_5, /*hidden argument*/List_1_get_Count_m3978133574_RuntimeMethod_var);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		List_1_t463142320 * L_7 = V_1;
		DataSet_t3286034874 * L_8 = Enumerable_ElementAt_TisDataSet_t3286034874_m1304043092(NULL /*static, unused*/, L_7, 0, /*hidden argument*/Enumerable_ElementAt_TisDataSet_t3286034874_m1304043092_RuntimeMethod_var);
		NullCheck(L_8);
		String_t* L_9 = DataSet_get_Path_m176743276(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		String_t* L_10 = V_2;
		String_t* L_11 = V_2;
		NullCheck(L_11);
		int32_t L_12 = String_LastIndexOf_m2676535141(L_11, _stringLiteral3452614529, /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_13 = String_Substring_m2848979100(L_10, ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)), /*hidden argument*/NULL);
		V_3 = L_13;
		String_t* L_14 = V_3;
		NullCheck(_stringLiteral3932363835);
		CharU5BU5D_t3528271667* L_15 = String_ToCharArray_m1492846834(_stringLiteral3932363835, /*hidden argument*/NULL);
		NullCheck(L_14);
		String_t* L_16 = String_TrimEnd_m3824727301(L_14, L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_0055:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_17;
	}
}
// System.Void TrackableSettings::ActivateDataSet(System.String)
extern "C"  void TrackableSettings_ActivateDataSet_m4118878993 (TrackableSettings_t2862243993 * __this, String_t* ___datasetName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableSettings_ActivateDataSet_m4118878993_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectTracker_t4177997237 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	List_1_t463142320 * V_3 = NULL;
	DataSet_t3286034874 * V_4 = NULL;
	Enumerator_t2352386197  V_5;
	memset(&V_5, 0, sizeof(V_5));
	DataSet_t3286034874 * V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = TrackerManager_get_Instance_m777262631(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectTracker_t4177997237 * L_1 = GenericInterfaceFuncInvoker0< ObjectTracker_t4177997237 * >::Invoke(ITrackerManager_GetTracker_TisObjectTracker_t4177997237_m1548597255_RuntimeMethod_var, L_0);
		V_0 = L_1;
		ObjectTracker_t4177997237 * L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3 = ObjectTracker_GetDataSets_m1245718448(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		ObjectTracker_t4177997237 * L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5 = ObjectTracker_GetActiveDataSets_m254019146(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		RuntimeObject* L_6 = V_2;
		List_1_t463142320 * L_7 = Enumerable_ToList_TisDataSet_t3286034874_m1984750843(NULL /*static, unused*/, L_6, /*hidden argument*/Enumerable_ToList_TisDataSet_t3286034874_m1984750843_RuntimeMethod_var);
		V_3 = L_7;
		List_1_t463142320 * L_8 = V_3;
		NullCheck(L_8);
		Enumerator_t2352386197  L_9 = List_1_GetEnumerator_m6144716(L_8, /*hidden argument*/List_1_GetEnumerator_m6144716_RuntimeMethod_var);
		V_5 = L_9;
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003f;
		}

IL_002d:
		{
			DataSet_t3286034874 * L_10 = Enumerator_get_Current_m1064371760((&V_5), /*hidden argument*/Enumerator_get_Current_m1064371760_RuntimeMethod_var);
			V_4 = L_10;
			ObjectTracker_t4177997237 * L_11 = V_0;
			DataSet_t3286034874 * L_12 = V_4;
			NullCheck(L_11);
			ObjectTracker_DeactivateDataSet_m2094146088(L_11, L_12, /*hidden argument*/NULL);
		}

IL_003f:
		{
			bool L_13 = Enumerator_MoveNext_m1234730920((&V_5), /*hidden argument*/Enumerator_MoveNext_m1234730920_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_002d;
			}
		}

IL_004b:
		{
			IL2CPP_LEAVE(0x5E, FINALLY_0050);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1247034833((&V_5), /*hidden argument*/Enumerator_Dispose_m1247034833_RuntimeMethod_var);
		IL2CPP_END_FINALLY(80)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005e:
	{
		ObjectTracker_t4177997237 * L_14 = V_0;
		NullCheck(L_14);
		VirtActionInvoker0::Invoke(5 /* System.Void Vuforia.Tracker::Stop() */, L_14);
		RuntimeObject* L_15 = V_1;
		NullCheck(L_15);
		RuntimeObject* L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Vuforia.DataSet>::GetEnumerator() */, IEnumerable_1_t2265887763_il2cpp_TypeInfo_var, L_15);
		V_7 = L_16;
	}

IL_006c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0095;
		}

IL_0071:
		{
			RuntimeObject* L_17 = V_7;
			NullCheck(L_17);
			DataSet_t3286034874 * L_18 = InterfaceFuncInvoker0< DataSet_t3286034874 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Vuforia.DataSet>::get_Current() */, IEnumerator_1_t3718605342_il2cpp_TypeInfo_var, L_17);
			V_6 = L_18;
			DataSet_t3286034874 * L_19 = V_6;
			NullCheck(L_19);
			String_t* L_20 = DataSet_get_Path_m176743276(L_19, /*hidden argument*/NULL);
			String_t* L_21 = ___datasetName0;
			NullCheck(L_20);
			bool L_22 = String_Contains_m1147431944(L_20, L_21, /*hidden argument*/NULL);
			if (!L_22)
			{
				goto IL_0095;
			}
		}

IL_008c:
		{
			ObjectTracker_t4177997237 * L_23 = V_0;
			DataSet_t3286034874 * L_24 = V_6;
			NullCheck(L_23);
			ObjectTracker_ActivateDataSet_m3009523340(L_23, L_24, /*hidden argument*/NULL);
		}

IL_0095:
		{
			RuntimeObject* L_25 = V_7;
			NullCheck(L_25);
			bool L_26 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_25);
			if (L_26)
			{
				goto IL_0071;
			}
		}

IL_00a1:
		{
			IL2CPP_LEAVE(0xB5, FINALLY_00a6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a6;
	}

FINALLY_00a6:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_27 = V_7;
			if (!L_27)
			{
				goto IL_00b4;
			}
		}

IL_00ad:
		{
			RuntimeObject* L_28 = V_7;
			NullCheck(L_28);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_28);
		}

IL_00b4:
		{
			IL2CPP_END_FINALLY(166)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(166)
	{
		IL2CPP_JUMP_TBL(0xB5, IL_00b5)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b5:
	{
		ObjectTracker_t4177997237 * L_29 = V_0;
		NullCheck(L_29);
		VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean Vuforia.Tracker::Start() */, L_29);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

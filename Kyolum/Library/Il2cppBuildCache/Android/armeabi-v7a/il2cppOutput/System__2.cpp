#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.Collections.Generic.Dictionary`2<System.String,System.UriParser>
struct Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.UriParser>
struct KeyCollection_t4D8331BBA9E57CE61F833B1895C15542E3802424;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.UriParser>
struct ValueCollection_t99ADD34BF63C2BCA597E9DD4C94B41AF81D39213;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.UriParser>[]
struct EntryU5BU5D_tE4D5DAB840B6A8609AE3436A3952F21D08487BD2;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Text.DecoderReplacementFallback
struct DecoderReplacementFallback_t8DA345EC4EF3A35A2667365F691EE69408A62130;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.EncoderReplacementFallback
struct EncoderReplacementFallback_t61E36A507D7FA8034B49F86DBE560EC77A6A8418;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Exception
struct Exception_t;
// System.FormatException
struct FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2A667D8777429024D8A3CB3D9AE29EA79FEA6176;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.UriFormatException
struct UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D;
// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Text.RegularExpressions.RegexCharClass/SingleRange
struct SingleRange_tEE8EA054843A8B8979D082D2CCC8E52A12155624;
// System.Text.RegularExpressions.RegexCharClass/SingleRangeComparer
struct SingleRangeComparer_t2D22B185700E925165F9548B3647E0E1FC9DB075;
// System.Uri/MoreInfo
struct MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727;
// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45;
// System.UriParser/BuiltInUriParser
struct BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26;

IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DecoderReplacementFallback_t8DA345EC4EF3A35A2667365F691EE69408A62130_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EncoderReplacementFallback_t61E36A507D7FA8034B49F86DBE560EC77A6A8418_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UriComponents_tA599793722A9810EC23036FF1B1B02A905B4EA76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t1267FAF6E08D720F26ABF676554E6948A7F6A2D0____59F5BD34B6C013DEACC784F69C67E95150033A84_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral19A87220AA9460BCE77166C6A721ECA99780C3E7;
IL2CPP_EXTERN_C String_t* _stringLiteral3AB04459C95BC4FFBBDA41BF1A685753EB83D903;
IL2CPP_EXTERN_C String_t* _stringLiteral3EE5BCAF4F2ABF8C2E555D5760FA880AAB22CABF;
IL2CPP_EXTERN_C String_t* _stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C;
IL2CPP_EXTERN_C String_t* _stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95;
IL2CPP_EXTERN_C String_t* _stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF;
IL2CPP_EXTERN_C String_t* _stringLiteral5D81741866E0AFB5638DF15167E9A90CDC2CF124;
IL2CPP_EXTERN_C String_t* _stringLiteral5FB56C8861544146EF414DAE01766AD43F440960;
IL2CPP_EXTERN_C String_t* _stringLiteral70ACDB62BA3184CF43D7E26D62FB85E2340ED892;
IL2CPP_EXTERN_C String_t* _stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA;
IL2CPP_EXTERN_C String_t* _stringLiteral83F837B4325FC4400C4089A21E353D2D0CD0EF29;
IL2CPP_EXTERN_C String_t* _stringLiteral84A0343BF19D2274E807E1B6505C382F81D6E3C9;
IL2CPP_EXTERN_C String_t* _stringLiteral8BF693870A1CA202D2EE1A186395E62B409214FD;
IL2CPP_EXTERN_C String_t* _stringLiteral8CB5CAE4A06CBA4A72564C688228877DD24B9906;
IL2CPP_EXTERN_C String_t* _stringLiteral9753F194FF9C1EAC5D2E1FAADADC2E63D96E516E;
IL2CPP_EXTERN_C String_t* _stringLiteralA3C5DC11C0F491C18EA087784CC4C662A0629733;
IL2CPP_EXTERN_C String_t* _stringLiteralBE9CA5A938D04349B649020FA52D9EC24C97099D;
IL2CPP_EXTERN_C String_t* _stringLiteralC05DD95A56B355AAD74E9CE147B236E03FF8905E;
IL2CPP_EXTERN_C String_t* _stringLiteralCC86C197E0FEFBC58402C83C0D74784A5C39CD74;
IL2CPP_EXTERN_C String_t* _stringLiteralD39E208E1EDCA34C72FCD76197E0EA7CD671D2F9;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDDA0FEDECC3765A8D5F295C4B302D615D29F3483;
IL2CPP_EXTERN_C String_t* _stringLiteralDE0A8A4B33338D09BDE82F544CF26FB4B56B9F98;
IL2CPP_EXTERN_C String_t* _stringLiteralE13258345AC5ED7FA38D641004219DBE3A3FB56C;
IL2CPP_EXTERN_C String_t* _stringLiteralE657126EBF76C06687ED6EAD2C714E37315C927F;
IL2CPP_EXTERN_C String_t* _stringLiteralF27E4C631EBEFA337EC21BE8552E169C9DED78A2;
IL2CPP_EXTERN_C String_t* _stringLiteralF7C03E97995F6950303A46C204A216735E6B4582;
IL2CPP_EXTERN_C String_t* _stringLiteralFA1D72164D93990AA279210A8D4332B3E0A6C411;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m05B3B2E9A02468956D9D51C30093821BFBC3C63A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mEF275C708A9D8C75BE351DE8D63068D20522B707_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_mC890D4862BCE096F4E905A751AEE39B30478357C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UriHelper_EscapeString_m86812263CFCDD337B818CC7401499CCC67196147_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UriHelper_UnescapeString_mFBF6EA6FBC25A465B680157F84CA1307A51EF65B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UriParser_GetComponents_mEF92B7D8CD59B1C8502D195D775D02D2C844FC1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UriParser_Resolve_m031E03AD4141D77F023345D8FB087FA06CEA41C0_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.UriParser>
struct Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tE4D5DAB840B6A8609AE3436A3952F21D08487BD2* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t4D8331BBA9E57CE61F833B1895C15542E3802424 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t99ADD34BF63C2BCA597E9DD4C94B41AF81D39213 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5, ___entries_1)); }
	inline EntryU5BU5D_tE4D5DAB840B6A8609AE3436A3952F21D08487BD2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tE4D5DAB840B6A8609AE3436A3952F21D08487BD2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tE4D5DAB840B6A8609AE3436A3952F21D08487BD2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5, ___keys_7)); }
	inline KeyCollection_t4D8331BBA9E57CE61F833B1895C15542E3802424 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t4D8331BBA9E57CE61F833B1895C15542E3802424 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t4D8331BBA9E57CE61F833B1895C15542E3802424 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5, ___values_8)); }
	inline ValueCollection_t99ADD34BF63C2BCA597E9DD4C94B41AF81D39213 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t99ADD34BF63C2BCA597E9DD4C94B41AF81D39213 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t99ADD34BF63C2BCA597E9DD4C94B41AF81D39213 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Runtime.Versioning.BinaryCompatibility
struct BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810  : public RuntimeObject
{
public:

public:
};


// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D  : public RuntimeObject
{
public:
	// System.Boolean System.Text.DecoderFallback::bIsMicrosoftBestFitFallback
	bool ___bIsMicrosoftBestFitFallback_0;

public:
	inline static int32_t get_offset_of_bIsMicrosoftBestFitFallback_0() { return static_cast<int32_t>(offsetof(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D, ___bIsMicrosoftBestFitFallback_0)); }
	inline bool get_bIsMicrosoftBestFitFallback_0() const { return ___bIsMicrosoftBestFitFallback_0; }
	inline bool* get_address_of_bIsMicrosoftBestFitFallback_0() { return &___bIsMicrosoftBestFitFallback_0; }
	inline void set_bIsMicrosoftBestFitFallback_0(bool value)
	{
		___bIsMicrosoftBestFitFallback_0 = value;
	}
};


// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4  : public RuntimeObject
{
public:
	// System.Boolean System.Text.EncoderFallback::bIsMicrosoftBestFitFallback
	bool ___bIsMicrosoftBestFitFallback_0;

public:
	inline static int32_t get_offset_of_bIsMicrosoftBestFitFallback_0() { return static_cast<int32_t>(offsetof(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4, ___bIsMicrosoftBestFitFallback_0)); }
	inline bool get_bIsMicrosoftBestFitFallback_0() const { return ___bIsMicrosoftBestFitFallback_0; }
	inline bool* get_address_of_bIsMicrosoftBestFitFallback_0() { return &___bIsMicrosoftBestFitFallback_0; }
	inline void set_bIsMicrosoftBestFitFallback_0(bool value)
	{
		___bIsMicrosoftBestFitFallback_0 = value;
	}
};


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1  : public RuntimeObject
{
public:
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t * ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;

public:
	inline static int32_t get_offset_of_m_members_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_members_3)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_members_3() const { return ___m_members_3; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_members_3() { return &___m_members_3; }
	inline void set_m_members_3(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_members_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_members_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_data_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_data_4)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_data_4() const { return ___m_data_4; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_data_4() { return &___m_data_4; }
	inline void set_m_data_4(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_data_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_types_5() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_types_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_m_types_5() const { return ___m_types_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_m_types_5() { return &___m_types_5; }
	inline void set_m_types_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___m_types_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_types_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_nameToIndex_6() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_nameToIndex_6)); }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * get_m_nameToIndex_6() const { return ___m_nameToIndex_6; }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 ** get_address_of_m_nameToIndex_6() { return &___m_nameToIndex_6; }
	inline void set_m_nameToIndex_6(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * value)
	{
		___m_nameToIndex_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_nameToIndex_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_currMember_7() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_currMember_7)); }
	inline int32_t get_m_currMember_7() const { return ___m_currMember_7; }
	inline int32_t* get_address_of_m_currMember_7() { return &___m_currMember_7; }
	inline void set_m_currMember_7(int32_t value)
	{
		___m_currMember_7 = value;
	}

	inline static int32_t get_offset_of_m_converter_8() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_converter_8)); }
	inline RuntimeObject* get_m_converter_8() const { return ___m_converter_8; }
	inline RuntimeObject** get_address_of_m_converter_8() { return &___m_converter_8; }
	inline void set_m_converter_8(RuntimeObject* value)
	{
		___m_converter_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_converter_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTypeName_9() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_fullTypeName_9)); }
	inline String_t* get_m_fullTypeName_9() const { return ___m_fullTypeName_9; }
	inline String_t** get_address_of_m_fullTypeName_9() { return &___m_fullTypeName_9; }
	inline void set_m_fullTypeName_9(String_t* value)
	{
		___m_fullTypeName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTypeName_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_assemName_10() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_assemName_10)); }
	inline String_t* get_m_assemName_10() const { return ___m_assemName_10; }
	inline String_t** get_address_of_m_assemName_10() { return &___m_assemName_10; }
	inline void set_m_assemName_10(String_t* value)
	{
		___m_assemName_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_assemName_10), (void*)value);
	}

	inline static int32_t get_offset_of_objectType_11() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___objectType_11)); }
	inline Type_t * get_objectType_11() const { return ___objectType_11; }
	inline Type_t ** get_address_of_objectType_11() { return &___objectType_11; }
	inline void set_objectType_11(Type_t * value)
	{
		___objectType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectType_11), (void*)value);
	}

	inline static int32_t get_offset_of_isFullTypeNameSetExplicit_12() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isFullTypeNameSetExplicit_12)); }
	inline bool get_isFullTypeNameSetExplicit_12() const { return ___isFullTypeNameSetExplicit_12; }
	inline bool* get_address_of_isFullTypeNameSetExplicit_12() { return &___isFullTypeNameSetExplicit_12; }
	inline void set_isFullTypeNameSetExplicit_12(bool value)
	{
		___isFullTypeNameSetExplicit_12 = value;
	}

	inline static int32_t get_offset_of_isAssemblyNameSetExplicit_13() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isAssemblyNameSetExplicit_13)); }
	inline bool get_isAssemblyNameSetExplicit_13() const { return ___isAssemblyNameSetExplicit_13; }
	inline bool* get_address_of_isAssemblyNameSetExplicit_13() { return &___isAssemblyNameSetExplicit_13; }
	inline void set_isAssemblyNameSetExplicit_13(bool value)
	{
		___isAssemblyNameSetExplicit_13 = value;
	}

	inline static int32_t get_offset_of_requireSameTokenInPartialTrust_14() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___requireSameTokenInPartialTrust_14)); }
	inline bool get_requireSameTokenInPartialTrust_14() const { return ___requireSameTokenInPartialTrust_14; }
	inline bool* get_address_of_requireSameTokenInPartialTrust_14() { return &___requireSameTokenInPartialTrust_14; }
	inline void set_requireSameTokenInPartialTrust_14(bool value)
	{
		___requireSameTokenInPartialTrust_14 = value;
	}
};


// System.String
struct String_t  : public RuntimeObject
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


// System.UriHelper
struct UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Text.RegularExpressions.RegexCharClass/SingleRange
struct SingleRange_tEE8EA054843A8B8979D082D2CCC8E52A12155624  : public RuntimeObject
{
public:
	// System.Char System.Text.RegularExpressions.RegexCharClass/SingleRange::_first
	Il2CppChar ____first_0;
	// System.Char System.Text.RegularExpressions.RegexCharClass/SingleRange::_last
	Il2CppChar ____last_1;

public:
	inline static int32_t get_offset_of__first_0() { return static_cast<int32_t>(offsetof(SingleRange_tEE8EA054843A8B8979D082D2CCC8E52A12155624, ____first_0)); }
	inline Il2CppChar get__first_0() const { return ____first_0; }
	inline Il2CppChar* get_address_of__first_0() { return &____first_0; }
	inline void set__first_0(Il2CppChar value)
	{
		____first_0 = value;
	}

	inline static int32_t get_offset_of__last_1() { return static_cast<int32_t>(offsetof(SingleRange_tEE8EA054843A8B8979D082D2CCC8E52A12155624, ____last_1)); }
	inline Il2CppChar get__last_1() const { return ____last_1; }
	inline Il2CppChar* get_address_of__last_1() { return &____last_1; }
	inline void set__last_1(Il2CppChar value)
	{
		____last_1 = value;
	}
};


// System.Text.RegularExpressions.RegexCharClass/SingleRangeComparer
struct SingleRangeComparer_t2D22B185700E925165F9548B3647E0E1FC9DB075  : public RuntimeObject
{
public:

public:
};


// System.Uri/MoreInfo
struct MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727  : public RuntimeObject
{
public:
	// System.String System.Uri/MoreInfo::AbsoluteUri
	String_t* ___AbsoluteUri_0;
	// System.Int32 System.Uri/MoreInfo::Hash
	int32_t ___Hash_1;
	// System.String System.Uri/MoreInfo::RemoteUrl
	String_t* ___RemoteUrl_2;

public:
	inline static int32_t get_offset_of_AbsoluteUri_0() { return static_cast<int32_t>(offsetof(MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727, ___AbsoluteUri_0)); }
	inline String_t* get_AbsoluteUri_0() const { return ___AbsoluteUri_0; }
	inline String_t** get_address_of_AbsoluteUri_0() { return &___AbsoluteUri_0; }
	inline void set_AbsoluteUri_0(String_t* value)
	{
		___AbsoluteUri_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AbsoluteUri_0), (void*)value);
	}

	inline static int32_t get_offset_of_Hash_1() { return static_cast<int32_t>(offsetof(MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727, ___Hash_1)); }
	inline int32_t get_Hash_1() const { return ___Hash_1; }
	inline int32_t* get_address_of_Hash_1() { return &___Hash_1; }
	inline void set_Hash_1(int32_t value)
	{
		___Hash_1 = value;
	}

	inline static int32_t get_offset_of_RemoteUrl_2() { return static_cast<int32_t>(offsetof(MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727, ___RemoteUrl_2)); }
	inline String_t* get_RemoteUrl_2() const { return ___RemoteUrl_2; }
	inline String_t** get_address_of_RemoteUrl_2() { return &___RemoteUrl_2; }
	inline void set_RemoteUrl_2(String_t* value)
	{
		___RemoteUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RemoteUrl_2), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};


// System.Text.DecoderReplacementFallback
struct DecoderReplacementFallback_t8DA345EC4EF3A35A2667365F691EE69408A62130  : public DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D
{
public:
	// System.String System.Text.DecoderReplacementFallback::strDefault
	String_t* ___strDefault_4;

public:
	inline static int32_t get_offset_of_strDefault_4() { return static_cast<int32_t>(offsetof(DecoderReplacementFallback_t8DA345EC4EF3A35A2667365F691EE69408A62130, ___strDefault_4)); }
	inline String_t* get_strDefault_4() const { return ___strDefault_4; }
	inline String_t** get_address_of_strDefault_4() { return &___strDefault_4; }
	inline void set_strDefault_4(String_t* value)
	{
		___strDefault_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strDefault_4), (void*)value);
	}
};


// System.Text.EncoderReplacementFallback
struct EncoderReplacementFallback_t61E36A507D7FA8034B49F86DBE560EC77A6A8418  : public EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4
{
public:
	// System.String System.Text.EncoderReplacementFallback::strDefault
	String_t* ___strDefault_4;

public:
	inline static int32_t get_offset_of_strDefault_4() { return static_cast<int32_t>(offsetof(EncoderReplacementFallback_t61E36A507D7FA8034B49F86DBE560EC77A6A8418, ___strDefault_4)); }
	inline String_t* get_strDefault_4() const { return ___strDefault_4; }
	inline String_t** get_address_of_strDefault_4() { return &___strDefault_4; }
	inline void set_strDefault_4(String_t* value)
	{
		___strDefault_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strDefault_4), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct __StaticArrayInitTypeSizeU3D128_t2C1166FE3CC05212DD55648859D997CA8842A83B 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t2C1166FE3CC05212DD55648859D997CA8842A83B__padding[128];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_tD37BEF7101998702862991181C721026AB96A59F 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tD37BEF7101998702862991181C721026AB96A59F__padding[32];
	};

public:
};


// System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping
struct LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE 
{
public:
	// System.Char System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping::_chMin
	Il2CppChar ____chMin_0;
	// System.Char System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping::_chMax
	Il2CppChar ____chMax_1;
	// System.Int32 System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping::_lcOp
	int32_t ____lcOp_2;
	// System.Int32 System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping::_data
	int32_t ____data_3;

public:
	inline static int32_t get_offset_of__chMin_0() { return static_cast<int32_t>(offsetof(LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE, ____chMin_0)); }
	inline Il2CppChar get__chMin_0() const { return ____chMin_0; }
	inline Il2CppChar* get_address_of__chMin_0() { return &____chMin_0; }
	inline void set__chMin_0(Il2CppChar value)
	{
		____chMin_0 = value;
	}

	inline static int32_t get_offset_of__chMax_1() { return static_cast<int32_t>(offsetof(LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE, ____chMax_1)); }
	inline Il2CppChar get__chMax_1() const { return ____chMax_1; }
	inline Il2CppChar* get_address_of__chMax_1() { return &____chMax_1; }
	inline void set__chMax_1(Il2CppChar value)
	{
		____chMax_1 = value;
	}

	inline static int32_t get_offset_of__lcOp_2() { return static_cast<int32_t>(offsetof(LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE, ____lcOp_2)); }
	inline int32_t get__lcOp_2() const { return ____lcOp_2; }
	inline int32_t* get_address_of__lcOp_2() { return &____lcOp_2; }
	inline void set__lcOp_2(int32_t value)
	{
		____lcOp_2 = value;
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE, ____data_3)); }
	inline int32_t get__data_3() const { return ____data_3; }
	inline int32_t* get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(int32_t value)
	{
		____data_3 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping
struct LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshaled_pinvoke
{
	uint8_t ____chMin_0;
	uint8_t ____chMax_1;
	int32_t ____lcOp_2;
	int32_t ____data_3;
};
// Native definition for COM marshalling of System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping
struct LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshaled_com
{
	uint8_t ____chMin_0;
	uint8_t ____chMax_1;
	int32_t ____lcOp_2;
	int32_t ____data_3;
};

// System.Uri/Offset
#pragma pack(push, tp, 1)
struct Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 
{
public:
	// System.UInt16 System.Uri/Offset::Scheme
	uint16_t ___Scheme_0;
	// System.UInt16 System.Uri/Offset::User
	uint16_t ___User_1;
	// System.UInt16 System.Uri/Offset::Host
	uint16_t ___Host_2;
	// System.UInt16 System.Uri/Offset::PortValue
	uint16_t ___PortValue_3;
	// System.UInt16 System.Uri/Offset::Path
	uint16_t ___Path_4;
	// System.UInt16 System.Uri/Offset::Query
	uint16_t ___Query_5;
	// System.UInt16 System.Uri/Offset::Fragment
	uint16_t ___Fragment_6;
	// System.UInt16 System.Uri/Offset::End
	uint16_t ___End_7;

public:
	inline static int32_t get_offset_of_Scheme_0() { return static_cast<int32_t>(offsetof(Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5, ___Scheme_0)); }
	inline uint16_t get_Scheme_0() const { return ___Scheme_0; }
	inline uint16_t* get_address_of_Scheme_0() { return &___Scheme_0; }
	inline void set_Scheme_0(uint16_t value)
	{
		___Scheme_0 = value;
	}

	inline static int32_t get_offset_of_User_1() { return static_cast<int32_t>(offsetof(Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5, ___User_1)); }
	inline uint16_t get_User_1() const { return ___User_1; }
	inline uint16_t* get_address_of_User_1() { return &___User_1; }
	inline void set_User_1(uint16_t value)
	{
		___User_1 = value;
	}

	inline static int32_t get_offset_of_Host_2() { return static_cast<int32_t>(offsetof(Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5, ___Host_2)); }
	inline uint16_t get_Host_2() const { return ___Host_2; }
	inline uint16_t* get_address_of_Host_2() { return &___Host_2; }
	inline void set_Host_2(uint16_t value)
	{
		___Host_2 = value;
	}

	inline static int32_t get_offset_of_PortValue_3() { return static_cast<int32_t>(offsetof(Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5, ___PortValue_3)); }
	inline uint16_t get_PortValue_3() const { return ___PortValue_3; }
	inline uint16_t* get_address_of_PortValue_3() { return &___PortValue_3; }
	inline void set_PortValue_3(uint16_t value)
	{
		___PortValue_3 = value;
	}

	inline static int32_t get_offset_of_Path_4() { return static_cast<int32_t>(offsetof(Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5, ___Path_4)); }
	inline uint16_t get_Path_4() const { return ___Path_4; }
	inline uint16_t* get_address_of_Path_4() { return &___Path_4; }
	inline void set_Path_4(uint16_t value)
	{
		___Path_4 = value;
	}

	inline static int32_t get_offset_of_Query_5() { return static_cast<int32_t>(offsetof(Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5, ___Query_5)); }
	inline uint16_t get_Query_5() const { return ___Query_5; }
	inline uint16_t* get_address_of_Query_5() { return &___Query_5; }
	inline void set_Query_5(uint16_t value)
	{
		___Query_5 = value;
	}

	inline static int32_t get_offset_of_Fragment_6() { return static_cast<int32_t>(offsetof(Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5, ___Fragment_6)); }
	inline uint16_t get_Fragment_6() const { return ___Fragment_6; }
	inline uint16_t* get_address_of_Fragment_6() { return &___Fragment_6; }
	inline void set_Fragment_6(uint16_t value)
	{
		___Fragment_6 = value;
	}

	inline static int32_t get_offset_of_End_7() { return static_cast<int32_t>(offsetof(Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5, ___End_7)); }
	inline uint16_t get_End_7() const { return ___End_7; }
	inline uint16_t* get_address_of_End_7() { return &___End_7; }
	inline void set_End_7(uint16_t value)
	{
		___End_7 = value;
	}
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t1267FAF6E08D720F26ABF676554E6948A7F6A2D0  : public RuntimeObject
{
public:

public:
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

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
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Runtime.Serialization.StreamingContextStates
struct StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UnescapeMode
struct UnescapeMode_tAAD72A439A031D63DA366126306CC0DDB9312850 
{
public:
	// System.Int32 System.UnescapeMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnescapeMode_tAAD72A439A031D63DA366126306CC0DDB9312850, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriComponents
struct UriComponents_tA599793722A9810EC23036FF1B1B02A905B4EA76 
{
public:
	// System.Int32 System.UriComponents::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriComponents_tA599793722A9810EC23036FF1B1B02A905B4EA76, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriFormat
struct UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F 
{
public:
	// System.Int32 System.UriFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriKind
struct UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriSyntaxFlags
struct UriSyntaxFlags_t00ABF83A3AA06E5B670D3F73E3E87BC21F72044A 
{
public:
	// System.Int32 System.UriSyntaxFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriSyntaxFlags_t00ABF83A3AA06E5B670D3F73E3E87BC21F72044A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Uri/Check
struct Check_tEDA05554030AFFE9920C7E4C2233599B26DA74E8 
{
public:
	// System.Int32 System.Uri/Check::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Check_tEDA05554030AFFE9920C7E4C2233599B26DA74E8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Uri/Flags
struct Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4 
{
public:
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45  : public RuntimeObject
{
public:
	// System.String System.Uri/UriInfo::Host
	String_t* ___Host_0;
	// System.String System.Uri/UriInfo::ScopeId
	String_t* ___ScopeId_1;
	// System.String System.Uri/UriInfo::String
	String_t* ___String_2;
	// System.Uri/Offset System.Uri/UriInfo::Offset
	Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5  ___Offset_3;
	// System.String System.Uri/UriInfo::DnsSafeHost
	String_t* ___DnsSafeHost_4;
	// System.Uri/MoreInfo System.Uri/UriInfo::MoreInfo
	MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 * ___MoreInfo_5;

public:
	inline static int32_t get_offset_of_Host_0() { return static_cast<int32_t>(offsetof(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45, ___Host_0)); }
	inline String_t* get_Host_0() const { return ___Host_0; }
	inline String_t** get_address_of_Host_0() { return &___Host_0; }
	inline void set_Host_0(String_t* value)
	{
		___Host_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Host_0), (void*)value);
	}

	inline static int32_t get_offset_of_ScopeId_1() { return static_cast<int32_t>(offsetof(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45, ___ScopeId_1)); }
	inline String_t* get_ScopeId_1() const { return ___ScopeId_1; }
	inline String_t** get_address_of_ScopeId_1() { return &___ScopeId_1; }
	inline void set_ScopeId_1(String_t* value)
	{
		___ScopeId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ScopeId_1), (void*)value);
	}

	inline static int32_t get_offset_of_String_2() { return static_cast<int32_t>(offsetof(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45, ___String_2)); }
	inline String_t* get_String_2() const { return ___String_2; }
	inline String_t** get_address_of_String_2() { return &___String_2; }
	inline void set_String_2(String_t* value)
	{
		___String_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___String_2), (void*)value);
	}

	inline static int32_t get_offset_of_Offset_3() { return static_cast<int32_t>(offsetof(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45, ___Offset_3)); }
	inline Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5  get_Offset_3() const { return ___Offset_3; }
	inline Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5 * get_address_of_Offset_3() { return &___Offset_3; }
	inline void set_Offset_3(Offset_t6F140A0C5B2AB5511E7E458806A6A73AE0A34DE5  value)
	{
		___Offset_3 = value;
	}

	inline static int32_t get_offset_of_DnsSafeHost_4() { return static_cast<int32_t>(offsetof(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45, ___DnsSafeHost_4)); }
	inline String_t* get_DnsSafeHost_4() const { return ___DnsSafeHost_4; }
	inline String_t** get_address_of_DnsSafeHost_4() { return &___DnsSafeHost_4; }
	inline void set_DnsSafeHost_4(String_t* value)
	{
		___DnsSafeHost_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DnsSafeHost_4), (void*)value);
	}

	inline static int32_t get_offset_of_MoreInfo_5() { return static_cast<int32_t>(offsetof(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45, ___MoreInfo_5)); }
	inline MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 * get_MoreInfo_5() const { return ___MoreInfo_5; }
	inline MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 ** get_address_of_MoreInfo_5() { return &___MoreInfo_5; }
	inline void set_MoreInfo_5(MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 * value)
	{
		___MoreInfo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MoreInfo_5), (void*)value);
	}
};


// System.UriParser/UriQuirksVersion
struct UriQuirksVersion_t5A2A88A1D01D0CBC52BC12C612CC1A7F714E79B6 
{
public:
	// System.Int32 System.UriParser/UriQuirksVersion::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriQuirksVersion_t5A2A88A1D01D0CBC52BC12C612CC1A7F714E79B6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};


// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;

public:
	inline static int32_t get_offset_of_m_String_13() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_String_13)); }
	inline String_t* get_m_String_13() const { return ___m_String_13; }
	inline String_t** get_address_of_m_String_13() { return &___m_String_13; }
	inline void set_m_String_13(String_t* value)
	{
		___m_String_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_14() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_originalUnicodeString_14)); }
	inline String_t* get_m_originalUnicodeString_14() const { return ___m_originalUnicodeString_14; }
	inline String_t** get_address_of_m_originalUnicodeString_14() { return &___m_originalUnicodeString_14; }
	inline void set_m_originalUnicodeString_14(String_t* value)
	{
		___m_originalUnicodeString_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_15() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Syntax_15)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_m_Syntax_15() const { return ___m_Syntax_15; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_m_Syntax_15() { return &___m_Syntax_15; }
	inline void set_m_Syntax_15(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___m_Syntax_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_16() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_DnsSafeHost_16)); }
	inline String_t* get_m_DnsSafeHost_16() const { return ___m_DnsSafeHost_16; }
	inline String_t** get_address_of_m_DnsSafeHost_16() { return &___m_DnsSafeHost_16; }
	inline void set_m_DnsSafeHost_16(String_t* value)
	{
		___m_DnsSafeHost_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_17() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Flags_17)); }
	inline uint64_t get_m_Flags_17() const { return ___m_Flags_17; }
	inline uint64_t* get_address_of_m_Flags_17() { return &___m_Flags_17; }
	inline void set_m_Flags_17(uint64_t value)
	{
		___m_Flags_17 = value;
	}

	inline static int32_t get_offset_of_m_Info_18() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Info_18)); }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * get_m_Info_18() const { return ___m_Info_18; }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 ** get_address_of_m_Info_18() { return &___m_Info_18; }
	inline void set_m_Info_18(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * value)
	{
		___m_Info_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_19() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_iriParsing_19)); }
	inline bool get_m_iriParsing_19() const { return ___m_iriParsing_19; }
	inline bool* get_address_of_m_iriParsing_19() { return &___m_iriParsing_19; }
	inline void set_m_iriParsing_19(bool value)
	{
		___m_iriParsing_19 = value;
	}
};


// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A  : public RuntimeObject
{
public:
	// System.UriSyntaxFlags System.UriParser::m_Flags
	int32_t ___m_Flags_2;
	// System.UriSyntaxFlags modreq(System.Runtime.CompilerServices.IsVolatile) System.UriParser::m_UpdatableFlags
	int32_t ___m_UpdatableFlags_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.UriParser::m_UpdatableFlagsUsed
	bool ___m_UpdatableFlagsUsed_4;
	// System.Int32 System.UriParser::m_Port
	int32_t ___m_Port_5;
	// System.String System.UriParser::m_Scheme
	String_t* ___m_Scheme_6;

public:
	inline static int32_t get_offset_of_m_Flags_2() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A, ___m_Flags_2)); }
	inline int32_t get_m_Flags_2() const { return ___m_Flags_2; }
	inline int32_t* get_address_of_m_Flags_2() { return &___m_Flags_2; }
	inline void set_m_Flags_2(int32_t value)
	{
		___m_Flags_2 = value;
	}

	inline static int32_t get_offset_of_m_UpdatableFlags_3() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A, ___m_UpdatableFlags_3)); }
	inline int32_t get_m_UpdatableFlags_3() const { return ___m_UpdatableFlags_3; }
	inline int32_t* get_address_of_m_UpdatableFlags_3() { return &___m_UpdatableFlags_3; }
	inline void set_m_UpdatableFlags_3(int32_t value)
	{
		___m_UpdatableFlags_3 = value;
	}

	inline static int32_t get_offset_of_m_UpdatableFlagsUsed_4() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A, ___m_UpdatableFlagsUsed_4)); }
	inline bool get_m_UpdatableFlagsUsed_4() const { return ___m_UpdatableFlagsUsed_4; }
	inline bool* get_address_of_m_UpdatableFlagsUsed_4() { return &___m_UpdatableFlagsUsed_4; }
	inline void set_m_UpdatableFlagsUsed_4(bool value)
	{
		___m_UpdatableFlagsUsed_4 = value;
	}

	inline static int32_t get_offset_of_m_Port_5() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A, ___m_Port_5)); }
	inline int32_t get_m_Port_5() const { return ___m_Port_5; }
	inline int32_t* get_address_of_m_Port_5() { return &___m_Port_5; }
	inline void set_m_Port_5(int32_t value)
	{
		___m_Port_5 = value;
	}

	inline static int32_t get_offset_of_m_Scheme_6() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A, ___m_Scheme_6)); }
	inline String_t* get_m_Scheme_6() const { return ___m_Scheme_6; }
	inline String_t** get_address_of_m_Scheme_6() { return &___m_Scheme_6; }
	inline void set_m_Scheme_6(String_t* value)
	{
		___m_Scheme_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Scheme_6), (void*)value);
	}
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.FormatException
struct FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.UriParser/BuiltInUriParser
struct BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26  : public UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};


// System.UriFormatException
struct UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D  : public FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759
{
public:

public:
};


// System.Object


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.UriParser>


// System.Collections.Generic.Dictionary`2<System.String,System.UriParser>

struct Il2CppArrayBounds;

// System.Array

struct Il2CppArrayBounds;

// System.Array


// System.Runtime.Versioning.BinaryCompatibility

struct BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_StaticFields
{
public:
	// System.Boolean System.Runtime.Versioning.BinaryCompatibility::TargetsAtLeast_Desktop_V4_5
	bool ___TargetsAtLeast_Desktop_V4_5_0;
	// System.Boolean System.Runtime.Versioning.BinaryCompatibility::TargetsAtLeast_Desktop_V4_5_1
	bool ___TargetsAtLeast_Desktop_V4_5_1_1;

public:
	inline static int32_t get_offset_of_TargetsAtLeast_Desktop_V4_5_0() { return static_cast<int32_t>(offsetof(BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_StaticFields, ___TargetsAtLeast_Desktop_V4_5_0)); }
	inline bool get_TargetsAtLeast_Desktop_V4_5_0() const { return ___TargetsAtLeast_Desktop_V4_5_0; }
	inline bool* get_address_of_TargetsAtLeast_Desktop_V4_5_0() { return &___TargetsAtLeast_Desktop_V4_5_0; }
	inline void set_TargetsAtLeast_Desktop_V4_5_0(bool value)
	{
		___TargetsAtLeast_Desktop_V4_5_0 = value;
	}

	inline static int32_t get_offset_of_TargetsAtLeast_Desktop_V4_5_1_1() { return static_cast<int32_t>(offsetof(BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_StaticFields, ___TargetsAtLeast_Desktop_V4_5_1_1)); }
	inline bool get_TargetsAtLeast_Desktop_V4_5_1_1() const { return ___TargetsAtLeast_Desktop_V4_5_1_1; }
	inline bool* get_address_of_TargetsAtLeast_Desktop_V4_5_1_1() { return &___TargetsAtLeast_Desktop_V4_5_1_1; }
	inline void set_TargetsAtLeast_Desktop_V4_5_1_1(bool value)
	{
		___TargetsAtLeast_Desktop_V4_5_1_1 = value;
	}
};


// System.Runtime.Versioning.BinaryCompatibility


// System.Text.DecoderFallback

struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_StaticFields
{
public:
	// System.Text.DecoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.DecoderFallback::replacementFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___replacementFallback_1;
	// System.Text.DecoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.DecoderFallback::exceptionFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___exceptionFallback_2;
	// System.Object System.Text.DecoderFallback::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_3;

public:
	inline static int32_t get_offset_of_replacementFallback_1() { return static_cast<int32_t>(offsetof(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_StaticFields, ___replacementFallback_1)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_replacementFallback_1() const { return ___replacementFallback_1; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_replacementFallback_1() { return &___replacementFallback_1; }
	inline void set_replacementFallback_1(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___replacementFallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___replacementFallback_1), (void*)value);
	}

	inline static int32_t get_offset_of_exceptionFallback_2() { return static_cast<int32_t>(offsetof(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_StaticFields, ___exceptionFallback_2)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_exceptionFallback_2() const { return ___exceptionFallback_2; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_exceptionFallback_2() { return &___exceptionFallback_2; }
	inline void set_exceptionFallback_2(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___exceptionFallback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exceptionFallback_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_3() { return static_cast<int32_t>(offsetof(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_StaticFields, ___s_InternalSyncObject_3)); }
	inline RuntimeObject * get_s_InternalSyncObject_3() const { return ___s_InternalSyncObject_3; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_3() { return &___s_InternalSyncObject_3; }
	inline void set_s_InternalSyncObject_3(RuntimeObject * value)
	{
		___s_InternalSyncObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_3), (void*)value);
	}
};


// System.Text.DecoderFallback


// System.Text.EncoderFallback

struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_StaticFields
{
public:
	// System.Text.EncoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.EncoderFallback::replacementFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___replacementFallback_1;
	// System.Text.EncoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.EncoderFallback::exceptionFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___exceptionFallback_2;
	// System.Object System.Text.EncoderFallback::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_3;

public:
	inline static int32_t get_offset_of_replacementFallback_1() { return static_cast<int32_t>(offsetof(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_StaticFields, ___replacementFallback_1)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_replacementFallback_1() const { return ___replacementFallback_1; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_replacementFallback_1() { return &___replacementFallback_1; }
	inline void set_replacementFallback_1(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___replacementFallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___replacementFallback_1), (void*)value);
	}

	inline static int32_t get_offset_of_exceptionFallback_2() { return static_cast<int32_t>(offsetof(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_StaticFields, ___exceptionFallback_2)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_exceptionFallback_2() const { return ___exceptionFallback_2; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_exceptionFallback_2() { return &___exceptionFallback_2; }
	inline void set_exceptionFallback_2(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___exceptionFallback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exceptionFallback_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_3() { return static_cast<int32_t>(offsetof(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_StaticFields, ___s_InternalSyncObject_3)); }
	inline RuntimeObject * get_s_InternalSyncObject_3() const { return ___s_InternalSyncObject_3; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_3() { return &___s_InternalSyncObject_3; }
	inline void set_s_InternalSyncObject_3(RuntimeObject * value)
	{
		___s_InternalSyncObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_3), (void*)value);
	}
};


// System.Text.EncoderFallback


// System.Text.Encoding

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.Text.Encoding


// System.Reflection.MemberInfo


// System.Reflection.MemberInfo


// System.Runtime.Serialization.SerializationInfo


// System.Runtime.Serialization.SerializationInfo


// System.String

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


// System.String


// System.UriHelper

struct UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_StaticFields
{
public:
	// System.Char[] System.UriHelper::HexUpperChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HexUpperChars_0;

public:
	inline static int32_t get_offset_of_HexUpperChars_0() { return static_cast<int32_t>(offsetof(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_StaticFields, ___HexUpperChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HexUpperChars_0() const { return ___HexUpperChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HexUpperChars_0() { return &___HexUpperChars_0; }
	inline void set_HexUpperChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HexUpperChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexUpperChars_0), (void*)value);
	}
};


// System.UriHelper


// System.ValueType


// System.ValueType


// System.Text.RegularExpressions.RegexCharClass/SingleRange


// System.Text.RegularExpressions.RegexCharClass/SingleRange


// System.Text.RegularExpressions.RegexCharClass/SingleRangeComparer


// System.Text.RegularExpressions.RegexCharClass/SingleRangeComparer


// System.Uri/MoreInfo


// System.Uri/MoreInfo


// System.Boolean

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Boolean


// System.Byte


// System.Byte


// System.Char

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Char


// System.Text.DecoderReplacementFallback


// System.Text.DecoderReplacementFallback


// System.Text.EncoderReplacementFallback


// System.Text.EncoderReplacementFallback


// System.Enum

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};


// System.Enum


// System.Int16


// System.Int16


// System.Int32


// System.Int32


// System.IntPtr

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


// System.IntPtr


// System.Void


// System.Void


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32


// System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping


// System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping


// System.Uri/Offset


// System.Uri/Offset


// <PrivateImplementationDetails>

struct U3CPrivateImplementationDetailsU3E_t1267FAF6E08D720F26ABF676554E6948A7F6A2D0_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::59F5BD34B6C013DEACC784F69C67E95150033A84
	__StaticArrayInitTypeSizeU3D32_tD37BEF7101998702862991181C721026AB96A59F  ___59F5BD34B6C013DEACC784F69C67E95150033A84_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536
	__StaticArrayInitTypeSizeU3D32_tD37BEF7101998702862991181C721026AB96A59F  ___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::CCEEADA43268372341F81AE0C9208C6856441C04
	__StaticArrayInitTypeSizeU3D128_t2C1166FE3CC05212DD55648859D997CA8842A83B  ___CCEEADA43268372341F81AE0C9208C6856441C04_2;
	// System.Int64 <PrivateImplementationDetails>::E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78
	int64_t ___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_3;

public:
	inline static int32_t get_offset_of_U359F5BD34B6C013DEACC784F69C67E95150033A84_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1267FAF6E08D720F26ABF676554E6948A7F6A2D0_StaticFields, ___59F5BD34B6C013DEACC784F69C67E95150033A84_0)); }
	inline __StaticArrayInitTypeSizeU3D32_tD37BEF7101998702862991181C721026AB96A59F  get_U359F5BD34B6C013DEACC784F69C67E95150033A84_0() const { return ___59F5BD34B6C013DEACC784F69C67E95150033A84_0; }
	inline __StaticArrayInitTypeSizeU3D32_tD37BEF7101998702862991181C721026AB96A59F * get_address_of_U359F5BD34B6C013DEACC784F69C67E95150033A84_0() { return &___59F5BD34B6C013DEACC784F69C67E95150033A84_0; }
	inline void set_U359F5BD34B6C013DEACC784F69C67E95150033A84_0(__StaticArrayInitTypeSizeU3D32_tD37BEF7101998702862991181C721026AB96A59F  value)
	{
		___59F5BD34B6C013DEACC784F69C67E95150033A84_0 = value;
	}

	inline static int32_t get_offset_of_C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1267FAF6E08D720F26ABF676554E6948A7F6A2D0_StaticFields, ___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_1)); }
	inline __StaticArrayInitTypeSizeU3D32_tD37BEF7101998702862991181C721026AB96A59F  get_C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_1() const { return ___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_1; }
	inline __StaticArrayInitTypeSizeU3D32_tD37BEF7101998702862991181C721026AB96A59F * get_address_of_C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_1() { return &___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_1; }
	inline void set_C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_1(__StaticArrayInitTypeSizeU3D32_tD37BEF7101998702862991181C721026AB96A59F  value)
	{
		___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_1 = value;
	}

	inline static int32_t get_offset_of_CCEEADA43268372341F81AE0C9208C6856441C04_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1267FAF6E08D720F26ABF676554E6948A7F6A2D0_StaticFields, ___CCEEADA43268372341F81AE0C9208C6856441C04_2)); }
	inline __StaticArrayInitTypeSizeU3D128_t2C1166FE3CC05212DD55648859D997CA8842A83B  get_CCEEADA43268372341F81AE0C9208C6856441C04_2() const { return ___CCEEADA43268372341F81AE0C9208C6856441C04_2; }
	inline __StaticArrayInitTypeSizeU3D128_t2C1166FE3CC05212DD55648859D997CA8842A83B * get_address_of_CCEEADA43268372341F81AE0C9208C6856441C04_2() { return &___CCEEADA43268372341F81AE0C9208C6856441C04_2; }
	inline void set_CCEEADA43268372341F81AE0C9208C6856441C04_2(__StaticArrayInitTypeSizeU3D128_t2C1166FE3CC05212DD55648859D997CA8842A83B  value)
	{
		___CCEEADA43268372341F81AE0C9208C6856441C04_2 = value;
	}

	inline static int32_t get_offset_of_E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1267FAF6E08D720F26ABF676554E6948A7F6A2D0_StaticFields, ___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_3)); }
	inline int64_t get_E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_3() const { return ___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_3; }
	inline int64_t* get_address_of_E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_3() { return &___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_3; }
	inline void set_E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_3(int64_t value)
	{
		___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_3 = value;
	}
};


// <PrivateImplementationDetails>


// System.Reflection.BindingFlags


// System.Reflection.BindingFlags


// System.Exception

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


// System.Exception


// System.RuntimeFieldHandle


// System.RuntimeFieldHandle


// System.RuntimeTypeHandle


// System.RuntimeTypeHandle


// System.Runtime.Serialization.StreamingContextStates


// System.Runtime.Serialization.StreamingContextStates


// System.UnescapeMode


// System.UnescapeMode


// System.UriComponents


// System.UriComponents


// System.UriFormat


// System.UriFormat


// System.UriIdnScope


// System.UriIdnScope


// System.UriKind


// System.UriKind


// System.UriSyntaxFlags


// System.UriSyntaxFlags


// System.Uri/Check


// System.Uri/Check


// System.Uri/Flags


// System.Uri/Flags


// System.Uri/UriInfo


// System.Uri/UriInfo


// System.UriParser/UriQuirksVersion


// System.UriParser/UriQuirksVersion


// System.Runtime.Serialization.StreamingContext


// System.Runtime.Serialization.StreamingContext


// System.SystemException


// System.SystemException


// System.Type

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Type


// System.Uri

struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____WSchars_28;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_20() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitialized_20)); }
	inline bool get_s_ConfigInitialized_20() const { return ___s_ConfigInitialized_20; }
	inline bool* get_address_of_s_ConfigInitialized_20() { return &___s_ConfigInitialized_20; }
	inline void set_s_ConfigInitialized_20(bool value)
	{
		___s_ConfigInitialized_20 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_21() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitializing_21)); }
	inline bool get_s_ConfigInitializing_21() const { return ___s_ConfigInitializing_21; }
	inline bool* get_address_of_s_ConfigInitializing_21() { return &___s_ConfigInitializing_21; }
	inline void set_s_ConfigInitializing_21(bool value)
	{
		___s_ConfigInitializing_21 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_22() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IdnScope_22)); }
	inline int32_t get_s_IdnScope_22() const { return ___s_IdnScope_22; }
	inline int32_t* get_address_of_s_IdnScope_22() { return &___s_IdnScope_22; }
	inline void set_s_IdnScope_22(int32_t value)
	{
		___s_IdnScope_22 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_23() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IriParsing_23)); }
	inline bool get_s_IriParsing_23() const { return ___s_IriParsing_23; }
	inline bool* get_address_of_s_IriParsing_23() { return &___s_IriParsing_23; }
	inline void set_s_IriParsing_23(bool value)
	{
		___s_IriParsing_23 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_24() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___useDotNetRelativeOrAbsolute_24)); }
	inline bool get_useDotNetRelativeOrAbsolute_24() const { return ___useDotNetRelativeOrAbsolute_24; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_24() { return &___useDotNetRelativeOrAbsolute_24; }
	inline void set_useDotNetRelativeOrAbsolute_24(bool value)
	{
		___useDotNetRelativeOrAbsolute_24 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_25() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___IsWindowsFileSystem_25)); }
	inline bool get_IsWindowsFileSystem_25() const { return ___IsWindowsFileSystem_25; }
	inline bool* get_address_of_IsWindowsFileSystem_25() { return &___IsWindowsFileSystem_25; }
	inline void set_IsWindowsFileSystem_25(bool value)
	{
		___IsWindowsFileSystem_25 = value;
	}

	inline static int32_t get_offset_of_s_initLock_26() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_initLock_26)); }
	inline RuntimeObject * get_s_initLock_26() const { return ___s_initLock_26; }
	inline RuntimeObject ** get_address_of_s_initLock_26() { return &___s_initLock_26; }
	inline void set_s_initLock_26(RuntimeObject * value)
	{
		___s_initLock_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_26), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_27() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___HexLowerChars_27)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HexLowerChars_27() const { return ___HexLowerChars_27; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HexLowerChars_27() { return &___HexLowerChars_27; }
	inline void set_HexLowerChars_27(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HexLowerChars_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_27), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_28() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ____WSchars_28)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__WSchars_28() const { return ____WSchars_28; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__WSchars_28() { return &____WSchars_28; }
	inline void set__WSchars_28(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____WSchars_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_28), (void*)value);
	}
};


// System.Uri


// System.UriParser

struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.UriParser> System.UriParser::m_Table
	Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * ___m_Table_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.UriParser> System.UriParser::m_TempTable
	Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * ___m_TempTable_1;
	// System.UriParser System.UriParser::HttpUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___HttpUri_7;
	// System.UriParser System.UriParser::HttpsUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___HttpsUri_8;
	// System.UriParser System.UriParser::WsUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___WsUri_9;
	// System.UriParser System.UriParser::WssUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___WssUri_10;
	// System.UriParser System.UriParser::FtpUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___FtpUri_11;
	// System.UriParser System.UriParser::FileUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___FileUri_12;
	// System.UriParser System.UriParser::GopherUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___GopherUri_13;
	// System.UriParser System.UriParser::NntpUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___NntpUri_14;
	// System.UriParser System.UriParser::NewsUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___NewsUri_15;
	// System.UriParser System.UriParser::MailToUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___MailToUri_16;
	// System.UriParser System.UriParser::UuidUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___UuidUri_17;
	// System.UriParser System.UriParser::TelnetUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___TelnetUri_18;
	// System.UriParser System.UriParser::LdapUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___LdapUri_19;
	// System.UriParser System.UriParser::NetTcpUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___NetTcpUri_20;
	// System.UriParser System.UriParser::NetPipeUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___NetPipeUri_21;
	// System.UriParser System.UriParser::VsMacrosUri
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___VsMacrosUri_22;
	// System.UriParser/UriQuirksVersion System.UriParser::s_QuirksVersion
	int32_t ___s_QuirksVersion_23;
	// System.UriSyntaxFlags System.UriParser::HttpSyntaxFlags
	int32_t ___HttpSyntaxFlags_24;
	// System.UriSyntaxFlags System.UriParser::FileSyntaxFlags
	int32_t ___FileSyntaxFlags_25;

public:
	inline static int32_t get_offset_of_m_Table_0() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___m_Table_0)); }
	inline Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * get_m_Table_0() const { return ___m_Table_0; }
	inline Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 ** get_address_of_m_Table_0() { return &___m_Table_0; }
	inline void set_m_Table_0(Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * value)
	{
		___m_Table_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Table_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_TempTable_1() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___m_TempTable_1)); }
	inline Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * get_m_TempTable_1() const { return ___m_TempTable_1; }
	inline Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 ** get_address_of_m_TempTable_1() { return &___m_TempTable_1; }
	inline void set_m_TempTable_1(Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * value)
	{
		___m_TempTable_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempTable_1), (void*)value);
	}

	inline static int32_t get_offset_of_HttpUri_7() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___HttpUri_7)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_HttpUri_7() const { return ___HttpUri_7; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_HttpUri_7() { return &___HttpUri_7; }
	inline void set_HttpUri_7(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___HttpUri_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HttpUri_7), (void*)value);
	}

	inline static int32_t get_offset_of_HttpsUri_8() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___HttpsUri_8)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_HttpsUri_8() const { return ___HttpsUri_8; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_HttpsUri_8() { return &___HttpsUri_8; }
	inline void set_HttpsUri_8(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___HttpsUri_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HttpsUri_8), (void*)value);
	}

	inline static int32_t get_offset_of_WsUri_9() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___WsUri_9)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_WsUri_9() const { return ___WsUri_9; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_WsUri_9() { return &___WsUri_9; }
	inline void set_WsUri_9(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___WsUri_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WsUri_9), (void*)value);
	}

	inline static int32_t get_offset_of_WssUri_10() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___WssUri_10)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_WssUri_10() const { return ___WssUri_10; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_WssUri_10() { return &___WssUri_10; }
	inline void set_WssUri_10(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___WssUri_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WssUri_10), (void*)value);
	}

	inline static int32_t get_offset_of_FtpUri_11() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___FtpUri_11)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_FtpUri_11() const { return ___FtpUri_11; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_FtpUri_11() { return &___FtpUri_11; }
	inline void set_FtpUri_11(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___FtpUri_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FtpUri_11), (void*)value);
	}

	inline static int32_t get_offset_of_FileUri_12() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___FileUri_12)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_FileUri_12() const { return ___FileUri_12; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_FileUri_12() { return &___FileUri_12; }
	inline void set_FileUri_12(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___FileUri_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FileUri_12), (void*)value);
	}

	inline static int32_t get_offset_of_GopherUri_13() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___GopherUri_13)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_GopherUri_13() const { return ___GopherUri_13; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_GopherUri_13() { return &___GopherUri_13; }
	inline void set_GopherUri_13(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___GopherUri_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GopherUri_13), (void*)value);
	}

	inline static int32_t get_offset_of_NntpUri_14() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___NntpUri_14)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_NntpUri_14() const { return ___NntpUri_14; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_NntpUri_14() { return &___NntpUri_14; }
	inline void set_NntpUri_14(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___NntpUri_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NntpUri_14), (void*)value);
	}

	inline static int32_t get_offset_of_NewsUri_15() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___NewsUri_15)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_NewsUri_15() const { return ___NewsUri_15; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_NewsUri_15() { return &___NewsUri_15; }
	inline void set_NewsUri_15(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___NewsUri_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NewsUri_15), (void*)value);
	}

	inline static int32_t get_offset_of_MailToUri_16() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___MailToUri_16)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_MailToUri_16() const { return ___MailToUri_16; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_MailToUri_16() { return &___MailToUri_16; }
	inline void set_MailToUri_16(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___MailToUri_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MailToUri_16), (void*)value);
	}

	inline static int32_t get_offset_of_UuidUri_17() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___UuidUri_17)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_UuidUri_17() const { return ___UuidUri_17; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_UuidUri_17() { return &___UuidUri_17; }
	inline void set_UuidUri_17(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___UuidUri_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UuidUri_17), (void*)value);
	}

	inline static int32_t get_offset_of_TelnetUri_18() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___TelnetUri_18)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_TelnetUri_18() const { return ___TelnetUri_18; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_TelnetUri_18() { return &___TelnetUri_18; }
	inline void set_TelnetUri_18(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___TelnetUri_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TelnetUri_18), (void*)value);
	}

	inline static int32_t get_offset_of_LdapUri_19() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___LdapUri_19)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_LdapUri_19() const { return ___LdapUri_19; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_LdapUri_19() { return &___LdapUri_19; }
	inline void set_LdapUri_19(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___LdapUri_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LdapUri_19), (void*)value);
	}

	inline static int32_t get_offset_of_NetTcpUri_20() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___NetTcpUri_20)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_NetTcpUri_20() const { return ___NetTcpUri_20; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_NetTcpUri_20() { return &___NetTcpUri_20; }
	inline void set_NetTcpUri_20(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___NetTcpUri_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetTcpUri_20), (void*)value);
	}

	inline static int32_t get_offset_of_NetPipeUri_21() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___NetPipeUri_21)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_NetPipeUri_21() const { return ___NetPipeUri_21; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_NetPipeUri_21() { return &___NetPipeUri_21; }
	inline void set_NetPipeUri_21(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___NetPipeUri_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetPipeUri_21), (void*)value);
	}

	inline static int32_t get_offset_of_VsMacrosUri_22() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___VsMacrosUri_22)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_VsMacrosUri_22() const { return ___VsMacrosUri_22; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_VsMacrosUri_22() { return &___VsMacrosUri_22; }
	inline void set_VsMacrosUri_22(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___VsMacrosUri_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VsMacrosUri_22), (void*)value);
	}

	inline static int32_t get_offset_of_s_QuirksVersion_23() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___s_QuirksVersion_23)); }
	inline int32_t get_s_QuirksVersion_23() const { return ___s_QuirksVersion_23; }
	inline int32_t* get_address_of_s_QuirksVersion_23() { return &___s_QuirksVersion_23; }
	inline void set_s_QuirksVersion_23(int32_t value)
	{
		___s_QuirksVersion_23 = value;
	}

	inline static int32_t get_offset_of_HttpSyntaxFlags_24() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___HttpSyntaxFlags_24)); }
	inline int32_t get_HttpSyntaxFlags_24() const { return ___HttpSyntaxFlags_24; }
	inline int32_t* get_address_of_HttpSyntaxFlags_24() { return &___HttpSyntaxFlags_24; }
	inline void set_HttpSyntaxFlags_24(int32_t value)
	{
		___HttpSyntaxFlags_24 = value;
	}

	inline static int32_t get_offset_of_FileSyntaxFlags_25() { return static_cast<int32_t>(offsetof(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields, ___FileSyntaxFlags_25)); }
	inline int32_t get_FileSyntaxFlags_25() const { return ___FileSyntaxFlags_25; }
	inline int32_t* get_address_of_FileSyntaxFlags_25() { return &___FileSyntaxFlags_25; }
	inline void set_FileSyntaxFlags_25(int32_t value)
	{
		___FileSyntaxFlags_25 = value;
	}
};


// System.UriParser


// System.ArgumentException


// System.ArgumentException


// System.FormatException


// System.FormatException


// System.InvalidOperationException


// System.InvalidOperationException


// System.UriParser/BuiltInUriParser


// System.UriParser/BuiltInUriParser


// System.ArgumentOutOfRangeException

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// System.ArgumentOutOfRangeException


// System.UriFormatException


// System.UriFormatException

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
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
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
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
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBD7199657787018123B7B8F2B048B503D484C097_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);

// System.Void System.FormatException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_m782FDB1A7F0BA932C9937FDB8E936D0E4724AA67 (FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 * __this, const RuntimeMethod* method);
// System.Void System.FormatException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mB8F9A26F985EF9A6C0C082F7D70CFDF2DBDBB23B (FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.FormatException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_m9D50D1A9FC1B72427455B7FFBDB80198D996667F (FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method);
// System.Void System.Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception_GetObjectData_m2031046D41E7BEE3C743E918B358A336F99D6882 (Exception_t * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method);
// System.String SR::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_m6A5DA279E5FFB81210609BAD3C4099947C625E54 (String_t* ___name0, const RuntimeMethod* method);
// System.Void System.UriFormatException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriFormatException__ctor_mC9CB29EF00CB33869659306AC3FCA69342FD044F (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * __this, String_t* ___textString0, const RuntimeMethod* method);
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::get_OffsetToStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_get_OffsetToStringData_mDD73A4AE670750B13D1EC5297E541EB5F389153D (const RuntimeMethod* method);
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m6411ABA96F53F6B588FD9F2F72FB5FDAC1C1BC9B (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Char[] System.UriHelper::EnsureDestinationSize(System.Char*,System.Char[],System.Int32,System.Int16,System.Int16,System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* UriHelper_EnsureDestinationSize_m5451D5091068288F6F361EA0BB64A6E5433A99E3 (Il2CppChar* ___pStr0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___dest1, int32_t ___currentInputPos2, int16_t ___charsToAdd3, int16_t ___minReallocateChars4, int32_t* ___destPos5, int32_t ___prevInputPos6, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mA1F9F8EACB3EEA1583247AA10DCE51C3A0A13469 (const RuntimeMethod* method);
// System.Void System.UriHelper::EscapeAsciiChar(System.Char,System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriHelper_EscapeAsciiChar_m514B5A9B356DB789631EC00662F65EE43A5B7B97 (Il2CppChar ___ch0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___to1, int32_t* ___pos2, const RuntimeMethod* method);
// System.Char System.UriHelper::EscapedAscii(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar UriHelper_EscapedAscii_m7AC352E3E869E7E5642C973397FA6C2696F9A573 (Il2CppChar ___digit0, Il2CppChar ___next1, const RuntimeMethod* method);
// System.Boolean System.UriHelper::IsUnreserved(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriHelper_IsUnreserved_m7036DEC07EA1D2204ECB4C1CBCB0E64716AFA50B (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Boolean System.UriHelper::IsReservedUnreservedOrHash(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriHelper_IsReservedUnreservedOrHash_m430460A215A6884D3736D156C0946ED5F8916A18 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_mF4642D7BB69FA7570F69E323F4597A2166065612 (RuntimeArray * ___src0, int32_t ___srcOffset1, RuntimeArray * ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method);
// System.Char[] System.UriHelper::UnescapeString(System.Char*,System.Int32,System.Int32,System.Char[],System.Int32&,System.Char,System.Char,System.Char,System.UnescapeMode,System.UriParser,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* UriHelper_UnescapeString_mFBF6EA6FBC25A465B680157F84CA1307A51EF65B (Il2CppChar* ___pStr0, int32_t ___start1, int32_t ___end2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___dest3, int32_t* ___destPosition4, Il2CppChar ___rsvd15, Il2CppChar ___rsvd26, Il2CppChar ___rsvd37, int32_t ___unescapeMode8, UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___syntax9, bool ___isQuery10, const RuntimeMethod* method);
// System.Boolean System.Uri::IriParsingStatic(System.UriParser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_IriParsingStatic_mBC868691E0FEA5CBA45F4BD2A457D3D801C245CE (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___syntax0, const RuntimeMethod* method);
// System.Boolean System.UriHelper::IsNotSafeForUnescape(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriHelper_IsNotSafeForUnescape_m033CF009114BEB2E119AE37C22DAF1EA04432E78 (Il2CppChar ___ch0, const RuntimeMethod* method);
// System.Boolean System.IriHelper::CheckIriUnicodeRange(System.Char,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IriHelper_CheckIriUnicodeRange_mB6188E33378F14F14241DF9BEC16504D8913C1DF (Il2CppChar ___unicode0, bool ___isQuery1, const RuntimeMethod* method);
// System.Void System.Text.EncoderReplacementFallback::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncoderReplacementFallback__ctor_m07299910DC3D3F6B9F8F37A4ADD40A500F97D1D4 (EncoderReplacementFallback_t61E36A507D7FA8034B49F86DBE560EC77A6A8418 * __this, String_t* ___replacement0, const RuntimeMethod* method);
// System.Void System.Text.Encoding::set_EncoderFallback(System.Text.EncoderFallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoding_set_EncoderFallback_m75BA39C6302BD7EFBB4A48B02C406A14789B244A (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * __this, EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___value0, const RuntimeMethod* method);
// System.Void System.Text.DecoderReplacementFallback::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecoderReplacementFallback__ctor_m7E6C273B2682E373C787568EB0BB0B2E4B6C2253 (DecoderReplacementFallback_t8DA345EC4EF3A35A2667365F691EE69408A62130 * __this, String_t* ___replacement0, const RuntimeMethod* method);
// System.Void System.Text.Encoding::set_DecoderFallback(System.Text.DecoderFallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoding_set_DecoderFallback_m771EA02DA99D57E19B6FC48E8C3A46F8A6D4CBB8 (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * __this, DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___value0, const RuntimeMethod* method);
// System.Void System.UriHelper::MatchUTF8Sequence(System.Char*,System.Char[],System.Int32&,System.Char[],System.Int32,System.Byte[],System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriHelper_MatchUTF8Sequence_mADC2C714DF505B425E34F2404F600955939A0BE4 (Il2CppChar* ___pDest0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___dest1, int32_t* ___destOffset2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___unescapedChars3, int32_t ___charCount4, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes5, int32_t ___byteCount6, bool ___isQuery7, bool ___iriParsing8, const RuntimeMethod* method);
// System.Boolean System.Char::IsHighSurrogate(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsHighSurrogate_m7D86B7AAB5A60B8A4A925BFDF331426B82077EF3 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Boolean System.IriHelper::CheckIriUnicodeRange(System.Char,System.Char,System.Boolean&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IriHelper_CheckIriUnicodeRange_mFC301B32EBD30C5039D7FC366221539142925911 (Il2CppChar ___highSurr0, Il2CppChar ___lowSurr1, bool* ___surrogatePair2, bool ___isQuery3, const RuntimeMethod* method);
// System.Boolean System.Uri::IsBidiControlCharacter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_IsBidiControlCharacter_m7671F6F9F367BD504B78C686233ED322EF5BF10B (Il2CppChar ___ch0, const RuntimeMethod* method);
// System.Boolean System.UriParser::get_ShouldUseLegacyV2Quirks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriParser_get_ShouldUseLegacyV2Quirks_m999F115810F8CD526705FC7FE28DC78348BB6B58 (const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Boolean System.Uri::IsAsciiLetterOrDigit(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_IsAsciiLetterOrDigit_mC5604E1B62ED7337C5966CC6AD021DF841C90A83 (Il2CppChar ___character0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m37345890E8136134556D27E57315B584AC51D53F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.UriFormatException System.Uri::ParseMinimal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * Uri_ParseMinimal_m47FF7ACAEB543DE87332F9DEA79F92ADC575107F (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Boolean System.Uri::get_UserDrivenParsing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_UserDrivenParsing_mF09087D4DE9A0823EBF1FC0C14101335D01393F2 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.String SR::GetString(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_m60DD6FC6EE29B45330D1A1A35D27061605169AF5 (String_t* ___name0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.Uri::get_IsAbsoluteUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_IsAbsoluteUri_m013346D65055CFEDF9E742534A584573C18A0E25 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Uri System.Uri::ResolveHelper(System.Uri,System.Uri,System.String&,System.Boolean&,System.UriFormatException&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * Uri_ResolveHelper_mA18C06D627E72E81F0848DA4C02CE7675D139CD7 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___baseUri0, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___relativeUri1, String_t** ___newUriString2, bool* ___userEscaped3, UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** ___e4, const RuntimeMethod* method);
// System.Boolean System.Uri::op_Inequality(System.Uri,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_op_Inequality_m1CFADE0F122D3B996C7B1871646FA1570AF399E5 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri10, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri21, const RuntimeMethod* method);
// System.String System.Uri::get_OriginalString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_OriginalString_mBD94B4BB84AE9C051C1CA8BA33C14D5BAD25B0AC (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, RuntimeObject * ___actualValue1, String_t* ___message2, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.String System.Uri::GetComponentsHelper(System.UriComponents,System.UriFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_GetComponentsHelper_mAA39E421157735AAD7D93A187CCCAED5A122C8E8 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, int32_t ___uriComponents0, int32_t ___uriFormat1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.UriParser>::.ctor(System.Int32)
inline void Dictionary_2__ctor_mEF275C708A9D8C75BE351DE8D63068D20522B707 (Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mBD7199657787018123B7B8F2B048B503D484C097_gshared)(__this, ___capacity0, method);
}
// System.Void System.UriParser/BuiltInUriParser::.ctor(System.String,System.Int32,System.UriSyntaxFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * __this, String_t* ___lwrCaseScheme0, int32_t ___defaultPort1, int32_t ___syntaxFlags2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.UriParser>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993 (Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * __this, String_t* ___key0, UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 *, String_t*, UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.UriParser::IsFullMatch(System.UriSyntaxFlags,System.UriSyntaxFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriParser_IsFullMatch_m3967BB43AFB5C11B75DA3BD1CE18B8DAE8F0C32E (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, int32_t ___flags0, int32_t ___expected1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.UriParser>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m05B3B2E9A02468956D9D51C30093821BFBC3C63A (Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * __this, String_t* ___key0, UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 *, String_t*, UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m588C16057E70F436C528A800D32546E987CAF1BD (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.UriParser>::get_Count()
inline int32_t Dictionary_2_get_Count_mC890D4862BCE096F4E905A751AEE39B30478357C (Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 *, const RuntimeMethod*))Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared)(__this, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m62365CE1CF6AD0E7396CEEB926F7B0C3FA8CABA1 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.UriParser::InFact(System.UriSyntaxFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, int32_t ___flags0, const RuntimeMethod* method);
// System.Void System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping::.ctor(System.Char,System.Char,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowerCaseMapping__ctor_m0236442CB5098331DEAE7CACFCAC42741945D3E8 (LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE * __this, Il2CppChar ___chMin0, Il2CppChar ___chMax1, int32_t ___lcOp2, int32_t ___data3, const RuntimeMethod* method);
// System.Void System.UriParser::.ctor(System.UriSyntaxFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriParser__ctor_m9A2C47C1F30EF65ADFBAEB0A569FB972F383825C (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, int32_t ___flags0, const RuntimeMethod* method);
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
// System.Void System.UriFormatException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriFormatException__ctor_m2B9D2DCA45C6A4C42CAC0DF830E3448E1F67D9DD (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * __this, const RuntimeMethod* method)
{
	{
		FormatException__ctor_m782FDB1A7F0BA932C9937FDB8E936D0E4724AA67(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriFormatException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriFormatException__ctor_mC9CB29EF00CB33869659306AC3FCA69342FD044F (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * __this, String_t* ___textString0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___textString0;
		FormatException__ctor_mB8F9A26F985EF9A6C0C082F7D70CFDF2DBDBB23B(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriFormatException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriFormatException__ctor_mE91E0D915423F0506A5C6AB2885ECA712669A02D (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___serializationInfo0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___streamingContext1, const RuntimeMethod* method)
{
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___serializationInfo0;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_1 = ___streamingContext1;
		FormatException__ctor_m9D50D1A9FC1B72427455B7FFBDB80198D996667F(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriFormatException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m064FAD00616310EEE1CBA5BE4B438F73C9EF489B (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___serializationInfo0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___streamingContext1, const RuntimeMethod* method)
{
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___serializationInfo0;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_1 = ___streamingContext1;
		Exception_GetObjectData_m2031046D41E7BEE3C743E918B358A336F99D6882(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Char[] System.UriHelper::EscapeString(System.String,System.Int32,System.Int32,System.Char[],System.Int32&,System.Boolean,System.Char,System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* UriHelper_EscapeString_m86812263CFCDD337B818CC7401499CCC67196147 (String_t* ___input0, int32_t ___start1, int32_t ___end2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___dest3, int32_t* ___destPos4, bool ___isUriString5, Il2CppChar ___force16, Il2CppChar ___force27, Il2CppChar ___rsvd8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t* V_2 = NULL;
	Il2CppChar* V_3 = NULL;
	String_t* V_4 = NULL;
	Il2CppChar V_5 = 0x0;
	int16_t V_6 = 0;
	int16_t V_7 = 0;
	int16_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t G_B35_0 = 0;
	{
		int32_t L_0 = ___end2;
		int32_t L_1 = ___start1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1))) < ((int32_t)((int32_t)65520))))
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_2;
		L_2 = SR_GetString_m6A5DA279E5FFB81210609BAD3C4099947C625E54(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDDA0FEDECC3765A8D5F295C4B302D615D29F3483)), /*hidden argument*/NULL);
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_3 = (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D_il2cpp_TypeInfo_var)));
		UriFormatException__ctor_mC9CB29EF00CB33869659306AC3FCA69342FD044F(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriHelper_EscapeString_m86812263CFCDD337B818CC7401499CCC67196147_RuntimeMethod_var)));
	}

IL_001a:
	{
		int32_t L_4 = ___start1;
		V_0 = L_4;
		int32_t L_5 = ___start1;
		V_1 = L_5;
		uintptr_t L_6 = ((uintptr_t)((int32_t)160));
		int8_t* L_7 = (int8_t*) (L_6 ? alloca(L_6) : NULL);
		memset(L_7, 0, L_6);
		V_2 = (uint8_t*)(L_7);
		String_t* L_8 = ___input0;
		V_4 = L_8;
		String_t* L_9 = V_4;
		V_3 = (Il2CppChar*)((uintptr_t)L_9);
		Il2CppChar* L_10 = V_3;
		if (!L_10)
		{
			goto IL_0250;
		}
	}
	{
		Il2CppChar* L_11 = V_3;
		int32_t L_12;
		L_12 = RuntimeHelpers_get_OffsetToStringData_mDD73A4AE670750B13D1EC5297E541EB5F389153D(/*hidden argument*/NULL);
		V_3 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_11, (int32_t)L_12));
		goto IL_0250;
	}

IL_0041:
	{
		Il2CppChar* L_13 = V_3;
		int32_t L_14 = V_0;
		int32_t L_15 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_13, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_14), (int32_t)2)))));
		V_5 = L_15;
		Il2CppChar L_16 = V_5;
		if ((((int32_t)L_16) <= ((int32_t)((int32_t)127))))
		{
			goto IL_0140;
		}
	}
	{
		int32_t L_17 = ___end2;
		int32_t L_18 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_19;
		L_19 = Math_Min_m6411ABA96F53F6B588FD9F2F72FB5FDAC1C1BC9B(((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18)), ((int32_t)39), /*hidden argument*/NULL);
		V_6 = ((int16_t)((int16_t)L_19));
		V_7 = (int16_t)1;
		goto IL_006c;
	}

IL_0065:
	{
		int16_t L_20 = V_7;
		V_7 = ((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1))));
	}

IL_006c:
	{
		int16_t L_21 = V_7;
		int16_t L_22 = V_6;
		if ((((int32_t)L_21) >= ((int32_t)L_22)))
		{
			goto IL_0080;
		}
	}
	{
		Il2CppChar* L_23 = V_3;
		int32_t L_24 = V_0;
		int16_t L_25 = V_7;
		int32_t L_26 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_23, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)L_25))), (int32_t)2)))));
		if ((((int32_t)L_26) > ((int32_t)((int32_t)127))))
		{
			goto IL_0065;
		}
	}

IL_0080:
	{
		Il2CppChar* L_27 = V_3;
		int32_t L_28 = V_0;
		int16_t L_29 = V_7;
		int32_t L_30 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_27, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)L_29)), (int32_t)1))), (int32_t)2)))));
		if ((((int32_t)L_30) < ((int32_t)((int32_t)55296))))
		{
			goto IL_00c9;
		}
	}
	{
		Il2CppChar* L_31 = V_3;
		int32_t L_32 = V_0;
		int16_t L_33 = V_7;
		int32_t L_34 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_31, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)L_33)), (int32_t)1))), (int32_t)2)))));
		if ((((int32_t)L_34) > ((int32_t)((int32_t)56319))))
		{
			goto IL_00c9;
		}
	}
	{
		int16_t L_35 = V_7;
		if ((((int32_t)L_35) == ((int32_t)1)))
		{
			goto IL_00b2;
		}
	}
	{
		int16_t L_36 = V_7;
		int32_t L_37 = ___end2;
		int32_t L_38 = V_0;
		if ((!(((uint32_t)L_36) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)L_38))))))
		{
			goto IL_00c2;
		}
	}

IL_00b2:
	{
		String_t* L_39;
		L_39 = SR_GetString_m6A5DA279E5FFB81210609BAD3C4099947C625E54(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCC86C197E0FEFBC58402C83C0D74784A5C39CD74)), /*hidden argument*/NULL);
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_40 = (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D_il2cpp_TypeInfo_var)));
		UriFormatException__ctor_mC9CB29EF00CB33869659306AC3FCA69342FD044F(L_40, L_39, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriHelper_EscapeString_m86812263CFCDD337B818CC7401499CCC67196147_RuntimeMethod_var)));
	}

IL_00c2:
	{
		int16_t L_41 = V_7;
		V_7 = ((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1))));
	}

IL_00c9:
	{
		Il2CppChar* L_42 = V_3;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_43 = ___dest3;
		int32_t L_44 = V_0;
		int16_t L_45 = V_7;
		int32_t* L_46 = ___destPos4;
		int32_t L_47 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_48;
		L_48 = UriHelper_EnsureDestinationSize_m5451D5091068288F6F361EA0BB64A6E5433A99E3((Il2CppChar*)(Il2CppChar*)L_42, L_43, L_44, ((int16_t)((int16_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_45, (int32_t)4)), (int32_t)3)))), (int16_t)((int32_t)480), (int32_t*)L_46, L_47, /*hidden argument*/NULL);
		___dest3 = L_48;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_49;
		L_49 = Encoding_get_UTF8_mA1F9F8EACB3EEA1583247AA10DCE51C3A0A13469(/*hidden argument*/NULL);
		Il2CppChar* L_50 = V_3;
		int32_t L_51 = V_0;
		int16_t L_52 = V_7;
		uint8_t* L_53 = V_2;
		NullCheck(L_49);
		int32_t L_54;
		L_54 = VirtFuncInvoker4< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(17 /* System.Int32 System.Text.Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32) */, L_49, (Il2CppChar*)(Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_50, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_51), (int32_t)2)))), L_52, (uint8_t*)(uint8_t*)L_53, ((int32_t)160));
		V_8 = ((int16_t)((int16_t)L_54));
		int16_t L_55 = V_8;
		if (L_55)
		{
			goto IL_0111;
		}
	}
	{
		String_t* L_56;
		L_56 = SR_GetString_m6A5DA279E5FFB81210609BAD3C4099947C625E54(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCC86C197E0FEFBC58402C83C0D74784A5C39CD74)), /*hidden argument*/NULL);
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_57 = (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D_il2cpp_TypeInfo_var)));
		UriFormatException__ctor_mC9CB29EF00CB33869659306AC3FCA69342FD044F(L_57, L_56, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_57, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriHelper_EscapeString_m86812263CFCDD337B818CC7401499CCC67196147_RuntimeMethod_var)));
	}

IL_0111:
	{
		int32_t L_58 = V_0;
		int16_t L_59 = V_7;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_59, (int32_t)1))));
		V_7 = (int16_t)0;
		goto IL_0131;
	}

IL_011d:
	{
		uint8_t* L_60 = V_2;
		int16_t L_61 = V_7;
		int32_t L_62 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_60, (int32_t)L_61)));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_63 = ___dest3;
		int32_t* L_64 = ___destPos4;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		UriHelper_EscapeAsciiChar_m514B5A9B356DB789631EC00662F65EE43A5B7B97(L_62, L_63, (int32_t*)L_64, /*hidden argument*/NULL);
		int16_t L_65 = V_7;
		V_7 = ((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1))));
	}

IL_0131:
	{
		int16_t L_66 = V_7;
		int16_t L_67 = V_8;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_68 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)1));
		goto IL_024c;
	}

IL_0140:
	{
		Il2CppChar L_69 = V_5;
		if ((!(((uint32_t)L_69) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_01e0;
		}
	}
	{
		Il2CppChar L_70 = ___rsvd8;
		if ((!(((uint32_t)L_70) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_01e0;
		}
	}
	{
		Il2CppChar* L_71 = V_3;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_72 = ___dest3;
		int32_t L_73 = V_0;
		int32_t* L_74 = ___destPos4;
		int32_t L_75 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_76;
		L_76 = UriHelper_EnsureDestinationSize_m5451D5091068288F6F361EA0BB64A6E5433A99E3((Il2CppChar*)(Il2CppChar*)L_71, L_72, L_73, (int16_t)3, (int16_t)((int32_t)120), (int32_t*)L_74, L_75, /*hidden argument*/NULL);
		___dest3 = L_76;
		int32_t L_77 = V_0;
		int32_t L_78 = ___end2;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)2))) >= ((int32_t)L_78)))
		{
			goto IL_01d0;
		}
	}
	{
		Il2CppChar* L_79 = V_3;
		int32_t L_80 = V_0;
		int32_t L_81 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_79, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)1))), (int32_t)2)))));
		Il2CppChar* L_82 = V_3;
		int32_t L_83 = V_0;
		int32_t L_84 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_82, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)2))), (int32_t)2)))));
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		Il2CppChar L_85;
		L_85 = UriHelper_EscapedAscii_m7AC352E3E869E7E5642C973397FA6C2696F9A573(L_81, L_84, /*hidden argument*/NULL);
		if ((((int32_t)L_85) == ((int32_t)((int32_t)65535))))
		{
			goto IL_01d0;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_86 = ___dest3;
		int32_t* L_87 = ___destPos4;
		int32_t* L_88 = ___destPos4;
		int32_t L_89 = *((int32_t*)L_88);
		V_9 = L_89;
		int32_t L_90 = V_9;
		*((int32_t*)L_87) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)1));
		int32_t L_91 = V_9;
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(L_91), (Il2CppChar)((int32_t)37));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_92 = ___dest3;
		int32_t* L_93 = ___destPos4;
		int32_t* L_94 = ___destPos4;
		int32_t L_95 = *((int32_t*)L_94);
		V_9 = L_95;
		int32_t L_96 = V_9;
		*((int32_t*)L_93) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_96, (int32_t)1));
		int32_t L_97 = V_9;
		Il2CppChar* L_98 = V_3;
		int32_t L_99 = V_0;
		int32_t L_100 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_98, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_99, (int32_t)1))), (int32_t)2)))));
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_97), (Il2CppChar)L_100);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_101 = ___dest3;
		int32_t* L_102 = ___destPos4;
		int32_t* L_103 = ___destPos4;
		int32_t L_104 = *((int32_t*)L_103);
		V_9 = L_104;
		int32_t L_105 = V_9;
		*((int32_t*)L_102) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_105, (int32_t)1));
		int32_t L_106 = V_9;
		Il2CppChar* L_107 = V_3;
		int32_t L_108 = V_0;
		int32_t L_109 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_107, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_108, (int32_t)2))), (int32_t)2)))));
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(L_106), (Il2CppChar)L_109);
		int32_t L_110 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_110, (int32_t)2));
		goto IL_01da;
	}

IL_01d0:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_111 = ___dest3;
		int32_t* L_112 = ___destPos4;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		UriHelper_EscapeAsciiChar_m514B5A9B356DB789631EC00662F65EE43A5B7B97(((int32_t)37), L_111, (int32_t*)L_112, /*hidden argument*/NULL);
	}

IL_01da:
	{
		int32_t L_113 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_113, (int32_t)1));
		goto IL_024c;
	}

IL_01e0:
	{
		Il2CppChar L_114 = V_5;
		Il2CppChar L_115 = ___force16;
		if ((((int32_t)L_114) == ((int32_t)L_115)))
		{
			goto IL_01ec;
		}
	}
	{
		Il2CppChar L_116 = V_5;
		Il2CppChar L_117 = ___force27;
		if ((!(((uint32_t)L_116) == ((uint32_t)L_117))))
		{
			goto IL_020c;
		}
	}

IL_01ec:
	{
		Il2CppChar* L_118 = V_3;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_119 = ___dest3;
		int32_t L_120 = V_0;
		int32_t* L_121 = ___destPos4;
		int32_t L_122 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_123;
		L_123 = UriHelper_EnsureDestinationSize_m5451D5091068288F6F361EA0BB64A6E5433A99E3((Il2CppChar*)(Il2CppChar*)L_118, L_119, L_120, (int16_t)3, (int16_t)((int32_t)120), (int32_t*)L_121, L_122, /*hidden argument*/NULL);
		___dest3 = L_123;
		Il2CppChar L_124 = V_5;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_125 = ___dest3;
		int32_t* L_126 = ___destPos4;
		UriHelper_EscapeAsciiChar_m514B5A9B356DB789631EC00662F65EE43A5B7B97(L_124, L_125, (int32_t*)L_126, /*hidden argument*/NULL);
		int32_t L_127 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_127, (int32_t)1));
		goto IL_024c;
	}

IL_020c:
	{
		Il2CppChar L_128 = V_5;
		Il2CppChar L_129 = ___rsvd8;
		if ((((int32_t)L_128) == ((int32_t)L_129)))
		{
			goto IL_024c;
		}
	}
	{
		bool L_130 = ___isUriString5;
		if (L_130)
		{
			goto IL_0222;
		}
	}
	{
		Il2CppChar L_131 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		bool L_132;
		L_132 = UriHelper_IsUnreserved_m7036DEC07EA1D2204ECB4C1CBCB0E64716AFA50B(L_131, /*hidden argument*/NULL);
		G_B35_0 = ((((int32_t)L_132) == ((int32_t)0))? 1 : 0);
		goto IL_022c;
	}

IL_0222:
	{
		Il2CppChar L_133 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		bool L_134;
		L_134 = UriHelper_IsReservedUnreservedOrHash_m430460A215A6884D3736D156C0946ED5F8916A18(L_133, /*hidden argument*/NULL);
		G_B35_0 = ((((int32_t)L_134) == ((int32_t)0))? 1 : 0);
	}

IL_022c:
	{
		if (!G_B35_0)
		{
			goto IL_024c;
		}
	}
	{
		Il2CppChar* L_135 = V_3;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_136 = ___dest3;
		int32_t L_137 = V_0;
		int32_t* L_138 = ___destPos4;
		int32_t L_139 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_140;
		L_140 = UriHelper_EnsureDestinationSize_m5451D5091068288F6F361EA0BB64A6E5433A99E3((Il2CppChar*)(Il2CppChar*)L_135, L_136, L_137, (int16_t)3, (int16_t)((int32_t)120), (int32_t*)L_138, L_139, /*hidden argument*/NULL);
		___dest3 = L_140;
		Il2CppChar L_141 = V_5;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_142 = ___dest3;
		int32_t* L_143 = ___destPos4;
		UriHelper_EscapeAsciiChar_m514B5A9B356DB789631EC00662F65EE43A5B7B97(L_141, L_142, (int32_t*)L_143, /*hidden argument*/NULL);
		int32_t L_144 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_144, (int32_t)1));
	}

IL_024c:
	{
		int32_t L_145 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_145, (int32_t)1));
	}

IL_0250:
	{
		int32_t L_146 = V_0;
		int32_t L_147 = ___end2;
		if ((((int32_t)L_146) < ((int32_t)L_147)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_148 = V_1;
		int32_t L_149 = V_0;
		if ((((int32_t)L_148) == ((int32_t)L_149)))
		{
			goto IL_0271;
		}
	}
	{
		int32_t L_150 = V_1;
		int32_t L_151 = ___start1;
		if ((!(((uint32_t)L_150) == ((uint32_t)L_151))))
		{
			goto IL_0262;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_152 = ___dest3;
		if (!L_152)
		{
			goto IL_0271;
		}
	}

IL_0262:
	{
		Il2CppChar* L_153 = V_3;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_154 = ___dest3;
		int32_t L_155 = V_0;
		int32_t* L_156 = ___destPos4;
		int32_t L_157 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_158;
		L_158 = UriHelper_EnsureDestinationSize_m5451D5091068288F6F361EA0BB64A6E5433A99E3((Il2CppChar*)(Il2CppChar*)L_153, L_154, L_155, (int16_t)0, (int16_t)0, (int32_t*)L_156, L_157, /*hidden argument*/NULL);
		___dest3 = L_158;
	}

IL_0271:
	{
		V_4 = (String_t*)NULL;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_159 = ___dest3;
		return L_159;
	}
}
// System.Char[] System.UriHelper::EnsureDestinationSize(System.Char*,System.Char[],System.Int32,System.Int16,System.Int16,System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* UriHelper_EnsureDestinationSize_m5451D5091068288F6F361EA0BB64A6E5433A99E3 (Il2CppChar* ___pStr0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___dest1, int32_t ___currentInputPos2, int16_t ___charsToAdd3, int16_t ___minReallocateChars4, int32_t* ___destPos5, int32_t ___prevInputPos6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_0 = NULL;
	int32_t V_1 = 0;
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___dest1;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___dest1;
		NullCheck(L_1);
		int32_t* L_2 = ___destPos5;
		int32_t L_3 = *((int32_t*)L_2);
		int32_t L_4 = ___currentInputPos2;
		int32_t L_5 = ___prevInputPos6;
		int16_t L_6 = ___charsToAdd3;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))) >= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5)))), (int32_t)L_6)))))
		{
			goto IL_0058;
		}
	}

IL_0012:
	{
		int32_t* L_7 = ___destPos5;
		int32_t L_8 = *((int32_t*)L_7);
		int32_t L_9 = ___currentInputPos2;
		int32_t L_10 = ___prevInputPos6;
		int16_t L_11 = ___minReallocateChars4;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_12 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)L_10)))), (int32_t)L_11)));
		V_0 = L_12;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_13 = ___dest1;
		if (!L_13)
		{
			goto IL_0039;
		}
	}
	{
		int32_t* L_14 = ___destPos5;
		int32_t L_15 = *((int32_t*)L_14);
		if (!L_15)
		{
			goto IL_0039;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_16 = ___dest1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_17 = V_0;
		int32_t* L_18 = ___destPos5;
		int32_t L_19 = *((int32_t*)L_18);
		Buffer_BlockCopy_mF4642D7BB69FA7570F69E323F4597A2166065612((RuntimeArray *)(RuntimeArray *)L_16, 0, (RuntimeArray *)(RuntimeArray *)L_17, 0, ((int32_t)((int32_t)L_19<<(int32_t)1)), /*hidden argument*/NULL);
	}

IL_0039:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_20 = V_0;
		___dest1 = L_20;
		goto IL_0058;
	}

IL_003e:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_21 = ___dest1;
		int32_t* L_22 = ___destPos5;
		int32_t* L_23 = ___destPos5;
		int32_t L_24 = *((int32_t*)L_23);
		V_1 = L_24;
		int32_t L_25 = V_1;
		*((int32_t*)L_22) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
		int32_t L_26 = V_1;
		Il2CppChar* L_27 = ___pStr0;
		int32_t L_28 = ___prevInputPos6;
		int32_t L_29 = L_28;
		___prevInputPos6 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
		int32_t L_30 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_27, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_29), (int32_t)2)))));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (Il2CppChar)L_30);
	}

IL_0058:
	{
		int32_t L_31 = ___prevInputPos6;
		int32_t L_32 = ___currentInputPos2;
		if ((!(((uint32_t)L_31) == ((uint32_t)L_32))))
		{
			goto IL_003e;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_33 = ___dest1;
		return L_33;
	}
}
// System.Char[] System.UriHelper::UnescapeString(System.String,System.Int32,System.Int32,System.Char[],System.Int32&,System.Char,System.Char,System.Char,System.UnescapeMode,System.UriParser,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* UriHelper_UnescapeString_m48AEEA101C2ED671FCC02656AAB8929F0435A591 (String_t* ___input0, int32_t ___start1, int32_t ___end2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___dest3, int32_t* ___destPosition4, Il2CppChar ___rsvd15, Il2CppChar ___rsvd26, Il2CppChar ___rsvd37, int32_t ___unescapeMode8, UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___syntax9, bool ___isQuery10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		String_t* L_0 = ___input0;
		V_1 = L_0;
		String_t* L_1 = V_1;
		V_0 = (Il2CppChar*)((uintptr_t)L_1);
		Il2CppChar* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		Il2CppChar* L_3 = V_0;
		int32_t L_4;
		L_4 = RuntimeHelpers_get_OffsetToStringData_mDD73A4AE670750B13D1EC5297E541EB5F389153D(/*hidden argument*/NULL);
		V_0 = (Il2CppChar*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_3, (int32_t)L_4));
	}

IL_0010:
	{
		Il2CppChar* L_5 = V_0;
		int32_t L_6 = ___start1;
		int32_t L_7 = ___end2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_8 = ___dest3;
		int32_t* L_9 = ___destPosition4;
		Il2CppChar L_10 = ___rsvd15;
		Il2CppChar L_11 = ___rsvd26;
		Il2CppChar L_12 = ___rsvd37;
		int32_t L_13 = ___unescapeMode8;
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_14 = ___syntax9;
		bool L_15 = ___isQuery10;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_16;
		L_16 = UriHelper_UnescapeString_mFBF6EA6FBC25A465B680157F84CA1307A51EF65B((Il2CppChar*)(Il2CppChar*)L_5, L_6, L_7, L_8, (int32_t*)L_9, L_10, L_11, L_12, L_13, L_14, L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Char[] System.UriHelper::UnescapeString(System.Char*,System.Int32,System.Int32,System.Char[],System.Int32&,System.Char,System.Char,System.Char,System.UnescapeMode,System.UriParser,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* UriHelper_UnescapeString_mFBF6EA6FBC25A465B680157F84CA1307A51EF65B (Il2CppChar* ___pStr0, int32_t ___start1, int32_t ___end2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___dest3, int32_t* ___destPosition4, Il2CppChar ___rsvd15, Il2CppChar ___rsvd26, Il2CppChar ___rsvd37, int32_t ___unescapeMode8, UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___syntax9, bool ___isQuery10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DecoderReplacementFallback_t8DA345EC4EF3A35A2667365F691EE69408A62130_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncoderReplacementFallback_t61E36A507D7FA8034B49F86DBE560EC77A6A8418_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	uint8_t V_1 = 0x0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	Il2CppChar* V_5 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_6 = NULL;
	int32_t V_7 = 0;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_8 = NULL;
	Il2CppChar V_9 = 0x0;
	int32_t V_10 = 0;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_11 = NULL;
	int32_t V_12 = 0;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_13 = NULL;
	Il2CppChar* V_14 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_15 = NULL;
	int32_t V_16 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	int32_t G_B3_0 = 0;
	{
		V_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
		V_1 = (uint8_t)0;
		V_2 = (bool)0;
		int32_t L_0 = ___start1;
		V_3 = L_0;
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_1 = ___syntax9;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Uri_IriParsingStatic_mBC868691E0FEA5CBA45F4BD2A457D3D801C245CE(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = ___unescapeMode8;
		G_B3_0 = ((((int32_t)((int32_t)((int32_t)L_3&(int32_t)3))) == ((int32_t)3))? 1 : 0);
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 0;
	}

IL_001b:
	{
		V_4 = (bool)G_B3_0;
	}

IL_001d:
	{
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = ___dest3;
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = L_4;
			V_6 = L_5;
			if (!L_5)
			{
				goto IL_002a;
			}
		}

IL_0024:
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_6 = V_6;
			NullCheck(L_6);
			if (((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))
			{
				goto IL_0030;
			}
		}

IL_002a:
		{
			V_5 = (Il2CppChar*)((uintptr_t)0);
			goto IL_003b;
		}

IL_0030:
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_7 = V_6;
			NullCheck(L_7);
			V_5 = (Il2CppChar*)((uintptr_t)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
		}

IL_003b:
		{
			int32_t L_8 = ___unescapeMode8;
			if (((int32_t)((int32_t)L_8&(int32_t)3)))
			{
				goto IL_0070;
			}
		}

IL_0041:
		{
			goto IL_0064;
		}

IL_0043:
		{
			Il2CppChar* L_9 = V_5;
			int32_t* L_10 = ___destPosition4;
			int32_t* L_11 = ___destPosition4;
			int32_t L_12 = *((int32_t*)L_11);
			V_7 = L_12;
			int32_t L_13 = V_7;
			*((int32_t*)L_10) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
			int32_t L_14 = V_7;
			Il2CppChar* L_15 = ___pStr0;
			int32_t L_16 = ___start1;
			int32_t L_17 = L_16;
			___start1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
			int32_t L_18 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_15, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_17), (int32_t)2)))));
			*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_9, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_14), (int32_t)2))))) = (int16_t)L_18;
		}

IL_0064:
		{
			int32_t L_19 = ___start1;
			int32_t L_20 = ___end2;
			if ((((int32_t)L_19) < ((int32_t)L_20)))
			{
				goto IL_0043;
			}
		}

IL_0068:
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_21 = ___dest3;
			V_8 = L_21;
			IL2CPP_LEAVE(0x39C, FINALLY_0396);
		}

IL_0070:
		{
			V_9 = 0;
			goto IL_01dd;
		}

IL_0078:
		{
			Il2CppChar* L_22 = ___pStr0;
			int32_t L_23 = V_3;
			int32_t L_24 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_22, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_23), (int32_t)2)))));
			int32_t L_25 = L_24;
			V_9 = L_25;
			if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)37)))))
			{
				goto IL_0195;
			}
		}

IL_0089:
		{
			int32_t L_26 = ___unescapeMode8;
			if (((int32_t)((int32_t)L_26&(int32_t)2)))
			{
				goto IL_0096;
			}
		}

IL_008f:
		{
			V_2 = (bool)1;
			goto IL_0207;
		}

IL_0096:
		{
			int32_t L_27 = V_3;
			int32_t L_28 = ___end2;
			if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)2))) >= ((int32_t)L_28)))
			{
				goto IL_0176;
			}
		}

IL_009f:
		{
			Il2CppChar* L_29 = ___pStr0;
			int32_t L_30 = V_3;
			int32_t L_31 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_29, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1))), (int32_t)2)))));
			Il2CppChar* L_32 = ___pStr0;
			int32_t L_33 = V_3;
			int32_t L_34 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_32, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)2))), (int32_t)2)))));
			IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
			Il2CppChar L_35;
			L_35 = UriHelper_EscapedAscii_m7AC352E3E869E7E5642C973397FA6C2696F9A573(L_31, L_34, /*hidden argument*/NULL);
			V_9 = L_35;
			int32_t L_36 = ___unescapeMode8;
			if ((((int32_t)L_36) < ((int32_t)8)))
			{
				goto IL_00e2;
			}
		}

IL_00bd:
		{
			Il2CppChar L_37 = V_9;
			if ((!(((uint32_t)L_37) == ((uint32_t)((int32_t)65535)))))
			{
				goto IL_0207;
			}
		}

IL_00c9:
		{
			int32_t L_38 = ___unescapeMode8;
			if ((((int32_t)L_38) < ((int32_t)((int32_t)24))))
			{
				goto IL_01d9;
			}
		}

IL_00d2:
		{
			String_t* L_39;
			L_39 = SR_GetString_m6A5DA279E5FFB81210609BAD3C4099947C625E54(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCC86C197E0FEFBC58402C83C0D74784A5C39CD74)), /*hidden argument*/NULL);
			UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_40 = (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D_il2cpp_TypeInfo_var)));
			UriFormatException__ctor_mC9CB29EF00CB33869659306AC3FCA69342FD044F(L_40, L_39, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriHelper_UnescapeString_mFBF6EA6FBC25A465B680157F84CA1307A51EF65B_RuntimeMethod_var)));
		}

IL_00e2:
		{
			Il2CppChar L_41 = V_9;
			if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)65535)))))
			{
				goto IL_00fb;
			}
		}

IL_00eb:
		{
			int32_t L_42 = ___unescapeMode8;
			if (!((int32_t)((int32_t)L_42&(int32_t)1)))
			{
				goto IL_01d9;
			}
		}

IL_00f4:
		{
			V_2 = (bool)1;
			goto IL_0207;
		}

IL_00fb:
		{
			Il2CppChar L_43 = V_9;
			if ((!(((uint32_t)L_43) == ((uint32_t)((int32_t)37)))))
			{
				goto IL_010a;
			}
		}

IL_0101:
		{
			int32_t L_44 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)2));
			goto IL_01d9;
		}

IL_010a:
		{
			Il2CppChar L_45 = V_9;
			Il2CppChar L_46 = ___rsvd15;
			if ((((int32_t)L_45) == ((int32_t)L_46)))
			{
				goto IL_011c;
			}
		}

IL_0110:
		{
			Il2CppChar L_47 = V_9;
			Il2CppChar L_48 = ___rsvd26;
			if ((((int32_t)L_47) == ((int32_t)L_48)))
			{
				goto IL_011c;
			}
		}

IL_0116:
		{
			Il2CppChar L_49 = V_9;
			Il2CppChar L_50 = ___rsvd37;
			if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
			{
				goto IL_0125;
			}
		}

IL_011c:
		{
			int32_t L_51 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)2));
			goto IL_01d9;
		}

IL_0125:
		{
			int32_t L_52 = ___unescapeMode8;
			if (((int32_t)((int32_t)L_52&(int32_t)4)))
			{
				goto IL_013d;
			}
		}

IL_012b:
		{
			Il2CppChar L_53 = V_9;
			IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
			bool L_54;
			L_54 = UriHelper_IsNotSafeForUnescape_m033CF009114BEB2E119AE37C22DAF1EA04432E78(L_53, /*hidden argument*/NULL);
			if (!L_54)
			{
				goto IL_013d;
			}
		}

IL_0134:
		{
			int32_t L_55 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)2));
			goto IL_01d9;
		}

IL_013d:
		{
			bool L_56 = V_4;
			if (!L_56)
			{
				goto IL_0207;
			}
		}

IL_0144:
		{
			Il2CppChar L_57 = V_9;
			if ((((int32_t)L_57) > ((int32_t)((int32_t)159))))
			{
				goto IL_0156;
			}
		}

IL_014d:
		{
			Il2CppChar L_58 = V_9;
			IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
			bool L_59;
			L_59 = UriHelper_IsNotSafeForUnescape_m033CF009114BEB2E119AE37C22DAF1EA04432E78(L_58, /*hidden argument*/NULL);
			if (L_59)
			{
				goto IL_0170;
			}
		}

IL_0156:
		{
			Il2CppChar L_60 = V_9;
			if ((((int32_t)L_60) <= ((int32_t)((int32_t)159))))
			{
				goto IL_0207;
			}
		}

IL_0162:
		{
			Il2CppChar L_61 = V_9;
			bool L_62 = ___isQuery10;
			bool L_63;
			L_63 = IriHelper_CheckIriUnicodeRange_mB6188E33378F14F14241DF9BEC16504D8913C1DF(L_61, L_62, /*hidden argument*/NULL);
			if (L_63)
			{
				goto IL_0207;
			}
		}

IL_0170:
		{
			int32_t L_64 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)2));
			goto IL_01d9;
		}

IL_0176:
		{
			int32_t L_65 = ___unescapeMode8;
			if ((((int32_t)L_65) < ((int32_t)8)))
			{
				goto IL_0191;
			}
		}

IL_017b:
		{
			int32_t L_66 = ___unescapeMode8;
			if ((((int32_t)L_66) < ((int32_t)((int32_t)24))))
			{
				goto IL_01d9;
			}
		}

IL_0181:
		{
			String_t* L_67;
			L_67 = SR_GetString_m6A5DA279E5FFB81210609BAD3C4099947C625E54(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCC86C197E0FEFBC58402C83C0D74784A5C39CD74)), /*hidden argument*/NULL);
			UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_68 = (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D_il2cpp_TypeInfo_var)));
			UriFormatException__ctor_mC9CB29EF00CB33869659306AC3FCA69342FD044F(L_68, L_67, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_68, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriHelper_UnescapeString_mFBF6EA6FBC25A465B680157F84CA1307A51EF65B_RuntimeMethod_var)));
		}

IL_0191:
		{
			V_2 = (bool)1;
			goto IL_0207;
		}

IL_0195:
		{
			int32_t L_69 = ___unescapeMode8;
			if ((((int32_t)((int32_t)((int32_t)L_69&(int32_t)((int32_t)10)))) == ((int32_t)((int32_t)10))))
			{
				goto IL_01d9;
			}
		}

IL_019e:
		{
			int32_t L_70 = ___unescapeMode8;
			if (!((int32_t)((int32_t)L_70&(int32_t)1)))
			{
				goto IL_01d9;
			}
		}

IL_01a4:
		{
			Il2CppChar L_71 = V_9;
			Il2CppChar L_72 = ___rsvd15;
			if ((((int32_t)L_71) == ((int32_t)L_72)))
			{
				goto IL_01b6;
			}
		}

IL_01aa:
		{
			Il2CppChar L_73 = V_9;
			Il2CppChar L_74 = ___rsvd26;
			if ((((int32_t)L_73) == ((int32_t)L_74)))
			{
				goto IL_01b6;
			}
		}

IL_01b0:
		{
			Il2CppChar L_75 = V_9;
			Il2CppChar L_76 = ___rsvd37;
			if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
			{
				goto IL_01ba;
			}
		}

IL_01b6:
		{
			V_2 = (bool)1;
			goto IL_0207;
		}

IL_01ba:
		{
			int32_t L_77 = ___unescapeMode8;
			if (((int32_t)((int32_t)L_77&(int32_t)4)))
			{
				goto IL_01d9;
			}
		}

IL_01c0:
		{
			Il2CppChar L_78 = V_9;
			if ((((int32_t)L_78) <= ((int32_t)((int32_t)31))))
			{
				goto IL_01d5;
			}
		}

IL_01c6:
		{
			Il2CppChar L_79 = V_9;
			if ((((int32_t)L_79) < ((int32_t)((int32_t)127))))
			{
				goto IL_01d9;
			}
		}

IL_01cc:
		{
			Il2CppChar L_80 = V_9;
			if ((((int32_t)L_80) > ((int32_t)((int32_t)159))))
			{
				goto IL_01d9;
			}
		}

IL_01d5:
		{
			V_2 = (bool)1;
			goto IL_0207;
		}

IL_01d9:
		{
			int32_t L_81 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)1));
		}

IL_01dd:
		{
			int32_t L_82 = V_3;
			int32_t L_83 = ___end2;
			if ((((int32_t)L_82) < ((int32_t)L_83)))
			{
				goto IL_0078;
			}
		}

IL_01e4:
		{
			goto IL_0207;
		}

IL_01e6:
		{
			Il2CppChar* L_84 = V_5;
			int32_t* L_85 = ___destPosition4;
			int32_t* L_86 = ___destPosition4;
			int32_t L_87 = *((int32_t*)L_86);
			V_7 = L_87;
			int32_t L_88 = V_7;
			*((int32_t*)L_85) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_88, (int32_t)1));
			int32_t L_89 = V_7;
			Il2CppChar* L_90 = ___pStr0;
			int32_t L_91 = ___start1;
			int32_t L_92 = L_91;
			___start1 = ((int32_t)il2cpp_codegen_add((int32_t)L_92, (int32_t)1));
			int32_t L_93 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_90, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_92), (int32_t)2)))));
			*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_84, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_89), (int32_t)2))))) = (int16_t)L_93;
		}

IL_0207:
		{
			int32_t L_94 = ___start1;
			int32_t L_95 = V_3;
			if ((((int32_t)L_94) < ((int32_t)L_95)))
			{
				goto IL_01e6;
			}
		}

IL_020b:
		{
			int32_t L_96 = V_3;
			int32_t L_97 = ___end2;
			if ((((int32_t)L_96) == ((int32_t)L_97)))
			{
				goto IL_038d;
			}
		}

IL_0212:
		{
			bool L_98 = V_2;
			if (!L_98)
			{
				goto IL_029c;
			}
		}

IL_0218:
		{
			uint8_t L_99 = V_1;
			if (L_99)
			{
				goto IL_027a;
			}
		}

IL_021b:
		{
			V_1 = (uint8_t)((int32_t)30);
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_100 = ___dest3;
			NullCheck(L_100);
			uint8_t L_101 = V_1;
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_102 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_100)->max_length))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_101, (int32_t)3)))));
			V_13 = L_102;
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_103 = V_13;
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_104 = L_103;
			V_15 = L_104;
			if (!L_104)
			{
				goto IL_0239;
			}
		}

IL_0233:
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_105 = V_15;
			NullCheck(L_105);
			if (((int32_t)((int32_t)(((RuntimeArray*)L_105)->max_length))))
			{
				goto IL_023f;
			}
		}

IL_0239:
		{
			V_14 = (Il2CppChar*)((uintptr_t)0);
			goto IL_024a;
		}

IL_023f:
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_106 = V_15;
			NullCheck(L_106);
			V_14 = (Il2CppChar*)((uintptr_t)((L_106)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
		}

IL_024a:
		{
			V_16 = 0;
			goto IL_0267;
		}

IL_024f:
		{
			Il2CppChar* L_107 = V_14;
			int32_t L_108 = V_16;
			Il2CppChar* L_109 = V_5;
			int32_t L_110 = V_16;
			int32_t L_111 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_109, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_110), (int32_t)2)))));
			*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_107, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_108), (int32_t)2))))) = (int16_t)L_111;
			int32_t L_112 = V_16;
			V_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_112, (int32_t)1));
		}

IL_0267:
		{
			int32_t L_113 = V_16;
			int32_t* L_114 = ___destPosition4;
			int32_t L_115 = *((int32_t*)L_114);
			if ((((int32_t)L_113) < ((int32_t)L_115)))
			{
				goto IL_024f;
			}
		}

IL_026e:
		{
			V_15 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)NULL;
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_116 = V_13;
			___dest3 = L_116;
			IL2CPP_LEAVE(0x1D, FINALLY_0396);
		}

IL_027a:
		{
			uint8_t L_117 = V_1;
			V_1 = (uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_117, (int32_t)1))));
			Il2CppChar* L_118 = ___pStr0;
			int32_t L_119 = V_3;
			int32_t L_120 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_118, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_119), (int32_t)2)))));
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_121 = ___dest3;
			int32_t* L_122 = ___destPosition4;
			IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
			UriHelper_EscapeAsciiChar_m514B5A9B356DB789631EC00662F65EE43A5B7B97(L_120, L_121, (int32_t*)L_122, /*hidden argument*/NULL);
			V_2 = (bool)0;
			int32_t L_123 = V_3;
			int32_t L_124 = ((int32_t)il2cpp_codegen_add((int32_t)L_123, (int32_t)1));
			V_3 = L_124;
			___start1 = L_124;
			goto IL_0070;
		}

IL_029c:
		{
			Il2CppChar L_125 = V_9;
			if ((((int32_t)L_125) > ((int32_t)((int32_t)127))))
			{
				goto IL_02c0;
			}
		}

IL_02a2:
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_126 = ___dest3;
			int32_t* L_127 = ___destPosition4;
			int32_t* L_128 = ___destPosition4;
			int32_t L_129 = *((int32_t*)L_128);
			V_7 = L_129;
			int32_t L_130 = V_7;
			*((int32_t*)L_127) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_130, (int32_t)1));
			int32_t L_131 = V_7;
			Il2CppChar L_132 = V_9;
			NullCheck(L_126);
			(L_126)->SetAt(static_cast<il2cpp_array_size_t>(L_131), (Il2CppChar)L_132);
			int32_t L_133 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_133, (int32_t)3));
			int32_t L_134 = V_3;
			___start1 = L_134;
			goto IL_0070;
		}

IL_02c0:
		{
			V_10 = 1;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_135 = V_0;
			if (L_135)
			{
				goto IL_02cf;
			}
		}

IL_02c6:
		{
			int32_t L_136 = ___end2;
			int32_t L_137 = V_3;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_138 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_136, (int32_t)L_137)));
			V_0 = L_138;
		}

IL_02cf:
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_139 = V_0;
			Il2CppChar L_140 = V_9;
			NullCheck(L_139);
			(L_139)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)((uint8_t)L_140)));
			int32_t L_141 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_141, (int32_t)3));
			goto IL_032a;
		}

IL_02db:
		{
			Il2CppChar* L_142 = ___pStr0;
			int32_t L_143 = V_3;
			int32_t L_144 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_142, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_143), (int32_t)2)))));
			int32_t L_145 = L_144;
			V_9 = L_145;
			if ((!(((uint32_t)L_145) == ((uint32_t)((int32_t)37)))))
			{
				goto IL_032e;
			}
		}

IL_02e9:
		{
			int32_t L_146 = V_3;
			int32_t L_147 = ___end2;
			if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_146, (int32_t)2))) >= ((int32_t)L_147)))
			{
				goto IL_032e;
			}
		}

IL_02ef:
		{
			Il2CppChar* L_148 = ___pStr0;
			int32_t L_149 = V_3;
			int32_t L_150 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_148, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_149, (int32_t)1))), (int32_t)2)))));
			Il2CppChar* L_151 = ___pStr0;
			int32_t L_152 = V_3;
			int32_t L_153 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_151, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_152, (int32_t)2))), (int32_t)2)))));
			IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
			Il2CppChar L_154;
			L_154 = UriHelper_EscapedAscii_m7AC352E3E869E7E5642C973397FA6C2696F9A573(L_150, L_153, /*hidden argument*/NULL);
			V_9 = L_154;
			Il2CppChar L_155 = V_9;
			if ((((int32_t)L_155) == ((int32_t)((int32_t)65535))))
			{
				goto IL_032e;
			}
		}

IL_0311:
		{
			Il2CppChar L_156 = V_9;
			if ((((int32_t)L_156) < ((int32_t)((int32_t)128))))
			{
				goto IL_032e;
			}
		}

IL_031a:
		{
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_157 = V_0;
			int32_t L_158 = V_10;
			int32_t L_159 = L_158;
			V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_159, (int32_t)1));
			Il2CppChar L_160 = V_9;
			NullCheck(L_157);
			(L_157)->SetAt(static_cast<il2cpp_array_size_t>(L_159), (uint8_t)((int32_t)((uint8_t)L_160)));
			int32_t L_161 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_161, (int32_t)3));
		}

IL_032a:
		{
			int32_t L_162 = V_3;
			int32_t L_163 = ___end2;
			if ((((int32_t)L_162) < ((int32_t)L_163)))
			{
				goto IL_02db;
			}
		}

IL_032e:
		{
			Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_164;
			L_164 = Encoding_get_UTF8_mA1F9F8EACB3EEA1583247AA10DCE51C3A0A13469(/*hidden argument*/NULL);
			NullCheck(L_164);
			RuntimeObject * L_165;
			L_165 = VirtFuncInvoker0< RuntimeObject * >::Invoke(8 /* System.Object System.Text.Encoding::Clone() */, L_164);
			Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_166 = ((Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *)CastclassClass((RuntimeObject*)L_165, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var));
			EncoderReplacementFallback_t61E36A507D7FA8034B49F86DBE560EC77A6A8418 * L_167 = (EncoderReplacementFallback_t61E36A507D7FA8034B49F86DBE560EC77A6A8418 *)il2cpp_codegen_object_new(EncoderReplacementFallback_t61E36A507D7FA8034B49F86DBE560EC77A6A8418_il2cpp_TypeInfo_var);
			EncoderReplacementFallback__ctor_m07299910DC3D3F6B9F8F37A4ADD40A500F97D1D4(L_167, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
			NullCheck(L_166);
			Encoding_set_EncoderFallback_m75BA39C6302BD7EFBB4A48B02C406A14789B244A(L_166, L_167, /*hidden argument*/NULL);
			Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_168 = L_166;
			DecoderReplacementFallback_t8DA345EC4EF3A35A2667365F691EE69408A62130 * L_169 = (DecoderReplacementFallback_t8DA345EC4EF3A35A2667365F691EE69408A62130 *)il2cpp_codegen_object_new(DecoderReplacementFallback_t8DA345EC4EF3A35A2667365F691EE69408A62130_il2cpp_TypeInfo_var);
			DecoderReplacementFallback__ctor_m7E6C273B2682E373C787568EB0BB0B2E4B6C2253(L_169, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
			NullCheck(L_168);
			Encoding_set_DecoderFallback_m771EA02DA99D57E19B6FC48E8C3A46F8A6D4CBB8(L_168, L_169, /*hidden argument*/NULL);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_170 = V_0;
			NullCheck(L_170);
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_171 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_170)->max_length))));
			V_11 = L_171;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_172 = V_0;
			int32_t L_173 = V_10;
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_174 = V_11;
			NullCheck(L_168);
			int32_t L_175;
			L_175 = VirtFuncInvoker5< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t >::Invoke(22 /* System.Int32 System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_168, L_172, 0, L_173, L_174, 0);
			V_12 = L_175;
			int32_t L_176 = V_3;
			___start1 = L_176;
			Il2CppChar* L_177 = V_5;
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_178 = ___dest3;
			int32_t* L_179 = ___destPosition4;
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_180 = V_11;
			int32_t L_181 = V_12;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_182 = V_0;
			int32_t L_183 = V_10;
			bool L_184 = ___isQuery10;
			bool L_185 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
			UriHelper_MatchUTF8Sequence_mADC2C714DF505B425E34F2404F600955939A0BE4((Il2CppChar*)(Il2CppChar*)L_177, L_178, (int32_t*)L_179, L_180, L_181, L_182, L_183, L_184, L_185, /*hidden argument*/NULL);
		}

IL_038d:
		{
			int32_t L_186 = V_3;
			int32_t L_187 = ___end2;
			if ((!(((uint32_t)L_186) == ((uint32_t)L_187))))
			{
				goto IL_0070;
			}
		}

IL_0394:
		{
			IL2CPP_LEAVE(0x39A, FINALLY_0396);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0396;
	}

FINALLY_0396:
	{ // begin finally (depth: 1)
		V_6 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)NULL;
		IL2CPP_END_FINALLY(918)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(918)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x39C, IL_039c)
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_JUMP_TBL(0x39A, IL_039a)
	}

IL_039a:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_188 = ___dest3;
		return L_188;
	}

IL_039c:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_189 = V_8;
		return L_189;
	}
}
// System.Void System.UriHelper::MatchUTF8Sequence(System.Char*,System.Char[],System.Int32&,System.Char[],System.Int32,System.Byte[],System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriHelper_MatchUTF8Sequence_mADC2C714DF505B425E34F2404F600955939A0BE4 (Il2CppChar* ___pDest0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___dest1, int32_t* ___destOffset2, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___unescapedChars3, int32_t ___charCount4, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes5, int32_t ___byteCount6, bool ___isQuery7, bool ___iriParsing8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar* V_1 = NULL;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_5 = NULL;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* G_B7_1 = NULL;
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * G_B7_2 = NULL;
	int32_t G_B6_0 = 0;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* G_B6_1 = NULL;
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * G_B6_2 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* G_B8_2 = NULL;
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * G_B8_3 = NULL;
	{
		V_0 = 0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___unescapedChars3;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = L_0;
		V_2 = L_1;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = V_2;
		NullCheck(L_2);
		if (((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))
		{
			goto IL_0011;
		}
	}

IL_000c:
	{
		V_1 = (Il2CppChar*)((uintptr_t)0);
		goto IL_001a;
	}

IL_0011:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = V_2;
		NullCheck(L_3);
		V_1 = (Il2CppChar*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_001a:
	{
		V_3 = 0;
		goto IL_01aa;
	}

IL_0021:
	{
		Il2CppChar* L_4 = V_1;
		int32_t L_5 = V_3;
		int32_t L_6 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_4, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_5), (int32_t)2)))));
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Char_IsHighSurrogate_m7D86B7AAB5A60B8A4A925BFDF331426B82077EF3(L_6, /*hidden argument*/NULL);
		V_4 = L_7;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_8;
		L_8 = Encoding_get_UTF8_mA1F9F8EACB3EEA1583247AA10DCE51C3A0A13469(/*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_9 = ___unescapedChars3;
		int32_t L_10 = V_3;
		bool L_11 = V_4;
		G_B6_0 = L_10;
		G_B6_1 = L_9;
		G_B6_2 = L_8;
		if (L_11)
		{
			G_B7_0 = L_10;
			G_B7_1 = L_9;
			G_B7_2 = L_8;
			goto IL_003d;
		}
	}
	{
		G_B8_0 = 1;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		G_B8_3 = G_B6_2;
		goto IL_003e;
	}

IL_003d:
	{
		G_B8_0 = 2;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
		G_B8_3 = G_B7_2;
	}

IL_003e:
	{
		NullCheck(G_B8_3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12;
		L_12 = VirtFuncInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, int32_t >::Invoke(13 /* System.Byte[] System.Text.Encoding::GetBytes(System.Char[],System.Int32,System.Int32) */, G_B8_3, G_B8_2, G_B8_1, G_B8_0);
		V_5 = L_12;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = V_5;
		NullCheck(L_13);
		V_6 = ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)));
		V_7 = (bool)0;
		bool L_14 = ___iriParsing8;
		if (!L_14)
		{
			goto IL_008b;
		}
	}
	{
		bool L_15 = V_4;
		if (L_15)
		{
			goto IL_0064;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_16 = ___unescapedChars3;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		uint16_t L_19 = (uint16_t)(L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		bool L_20 = ___isQuery7;
		bool L_21;
		L_21 = IriHelper_CheckIriUnicodeRange_mB6188E33378F14F14241DF9BEC16504D8913C1DF(L_19, L_20, /*hidden argument*/NULL);
		V_7 = L_21;
		goto IL_008b;
	}

IL_0064:
	{
		V_8 = (bool)0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_22 = ___unescapedChars3;
		int32_t L_23 = V_3;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		uint16_t L_25 = (uint16_t)(L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_26 = ___unescapedChars3;
		int32_t L_27 = V_3;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
		uint16_t L_29 = (uint16_t)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		bool L_30 = ___isQuery7;
		bool L_31;
		L_31 = IriHelper_CheckIriUnicodeRange_mFC301B32EBD30C5039D7FC366221539142925911(L_25, L_29, (bool*)(&V_8), L_30, /*hidden argument*/NULL);
		V_7 = L_31;
		goto IL_008b;
	}

IL_007c:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_32 = ___bytes5;
		int32_t L_33 = V_0;
		int32_t L_34 = L_33;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
		NullCheck(L_32);
		int32_t L_35 = L_34;
		uint8_t L_36 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_37 = ___dest1;
		int32_t* L_38 = ___destOffset2;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		UriHelper_EscapeAsciiChar_m514B5A9B356DB789631EC00662F65EE43A5B7B97(L_36, L_37, (int32_t*)L_38, /*hidden argument*/NULL);
	}

IL_008b:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_39 = ___bytes5;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		uint8_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_43 = V_5;
		NullCheck(L_43);
		int32_t L_44 = 0;
		uint8_t L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		if ((!(((uint32_t)L_42) == ((uint32_t)L_45))))
		{
			goto IL_007c;
		}
	}
	{
		V_9 = (bool)1;
		V_10 = 0;
		goto IL_00b6;
	}

IL_009d:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_46 = ___bytes5;
		int32_t L_47 = V_0;
		int32_t L_48 = V_10;
		NullCheck(L_46);
		int32_t L_49 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)L_48));
		uint8_t L_50 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_51 = V_5;
		int32_t L_52 = V_10;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		uint8_t L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		if ((((int32_t)L_50) == ((int32_t)L_54)))
		{
			goto IL_00b0;
		}
	}
	{
		V_9 = (bool)0;
		goto IL_00bc;
	}

IL_00b0:
	{
		int32_t L_55 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
	}

IL_00b6:
	{
		int32_t L_56 = V_10;
		int32_t L_57 = V_6;
		if ((((int32_t)L_56) < ((int32_t)L_57)))
		{
			goto IL_009d;
		}
	}

IL_00bc:
	{
		bool L_58 = V_9;
		if (!L_58)
		{
			goto IL_0179;
		}
	}
	{
		int32_t L_59 = V_0;
		int32_t L_60 = V_6;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)L_60));
		bool L_61 = ___iriParsing8;
		if (!L_61)
		{
			goto IL_013f;
		}
	}
	{
		bool L_62 = V_7;
		if (L_62)
		{
			goto IL_00f4;
		}
	}
	{
		V_11 = 0;
		goto IL_00e7;
	}

IL_00d5:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_63 = V_5;
		int32_t L_64 = V_11;
		NullCheck(L_63);
		int32_t L_65 = L_64;
		uint8_t L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_67 = ___dest1;
		int32_t* L_68 = ___destOffset2;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		UriHelper_EscapeAsciiChar_m514B5A9B356DB789631EC00662F65EE43A5B7B97(L_66, L_67, (int32_t*)L_68, /*hidden argument*/NULL);
		int32_t L_69 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)1));
	}

IL_00e7:
	{
		int32_t L_70 = V_11;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_71 = V_5;
		NullCheck(L_71);
		if ((((int32_t)L_70) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_71)->max_length))))))
		{
			goto IL_00d5;
		}
	}
	{
		goto IL_019e;
	}

IL_00f4:
	{
		Il2CppChar* L_72 = V_1;
		int32_t L_73 = V_3;
		int32_t L_74 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_72, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_73), (int32_t)2)))));
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = Uri_IsBidiControlCharacter_m7671F6F9F367BD504B78C686233ED322EF5BF10B(L_74, /*hidden argument*/NULL);
		if (L_75)
		{
			goto IL_019e;
		}
	}
	{
		Il2CppChar* L_76 = ___pDest0;
		int32_t* L_77 = ___destOffset2;
		int32_t* L_78 = ___destOffset2;
		int32_t L_79 = *((int32_t*)L_78);
		V_12 = L_79;
		int32_t L_80 = V_12;
		*((int32_t*)L_77) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)1));
		int32_t L_81 = V_12;
		Il2CppChar* L_82 = V_1;
		int32_t L_83 = V_3;
		int32_t L_84 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_82, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_83), (int32_t)2)))));
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_76, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_81), (int32_t)2))))) = (int16_t)L_84;
		bool L_85 = V_4;
		if (!L_85)
		{
			goto IL_019e;
		}
	}
	{
		Il2CppChar* L_86 = ___pDest0;
		int32_t* L_87 = ___destOffset2;
		int32_t* L_88 = ___destOffset2;
		int32_t L_89 = *((int32_t*)L_88);
		V_12 = L_89;
		int32_t L_90 = V_12;
		*((int32_t*)L_87) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)1));
		int32_t L_91 = V_12;
		Il2CppChar* L_92 = V_1;
		int32_t L_93 = V_3;
		int32_t L_94 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_92, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)1))), (int32_t)2)))));
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_86, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_91), (int32_t)2))))) = (int16_t)L_94;
		goto IL_019e;
	}

IL_013f:
	{
		Il2CppChar* L_95 = ___pDest0;
		int32_t* L_96 = ___destOffset2;
		int32_t* L_97 = ___destOffset2;
		int32_t L_98 = *((int32_t*)L_97);
		V_12 = L_98;
		int32_t L_99 = V_12;
		*((int32_t*)L_96) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_99, (int32_t)1));
		int32_t L_100 = V_12;
		Il2CppChar* L_101 = V_1;
		int32_t L_102 = V_3;
		int32_t L_103 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_101, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_102), (int32_t)2)))));
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_95, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_100), (int32_t)2))))) = (int16_t)L_103;
		bool L_104 = V_4;
		if (!L_104)
		{
			goto IL_019e;
		}
	}
	{
		Il2CppChar* L_105 = ___pDest0;
		int32_t* L_106 = ___destOffset2;
		int32_t* L_107 = ___destOffset2;
		int32_t L_108 = *((int32_t*)L_107);
		V_12 = L_108;
		int32_t L_109 = V_12;
		*((int32_t*)L_106) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_109, (int32_t)1));
		int32_t L_110 = V_12;
		Il2CppChar* L_111 = V_1;
		int32_t L_112 = V_3;
		int32_t L_113 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_111, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_112, (int32_t)1))), (int32_t)2)))));
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_105, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_110), (int32_t)2))))) = (int16_t)L_113;
		goto IL_019e;
	}

IL_0179:
	{
		V_13 = 0;
		goto IL_0193;
	}

IL_017e:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_114 = ___bytes5;
		int32_t L_115 = V_0;
		int32_t L_116 = L_115;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_116, (int32_t)1));
		NullCheck(L_114);
		int32_t L_117 = L_116;
		uint8_t L_118 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_119 = ___dest1;
		int32_t* L_120 = ___destOffset2;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		UriHelper_EscapeAsciiChar_m514B5A9B356DB789631EC00662F65EE43A5B7B97(L_118, L_119, (int32_t*)L_120, /*hidden argument*/NULL);
		int32_t L_121 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_121, (int32_t)1));
	}

IL_0193:
	{
		int32_t L_122 = V_13;
		int32_t L_123 = V_10;
		if ((((int32_t)L_122) < ((int32_t)L_123)))
		{
			goto IL_017e;
		}
	}
	{
		goto IL_008b;
	}

IL_019e:
	{
		bool L_124 = V_4;
		if (!L_124)
		{
			goto IL_01a6;
		}
	}
	{
		int32_t L_125 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_125, (int32_t)1));
	}

IL_01a6:
	{
		int32_t L_126 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_126, (int32_t)1));
	}

IL_01aa:
	{
		int32_t L_127 = V_3;
		int32_t L_128 = ___charCount4;
		if ((((int32_t)L_127) < ((int32_t)L_128)))
		{
			goto IL_0021;
		}
	}
	{
		V_2 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)NULL;
		goto IL_01c5;
	}

IL_01b6:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_129 = ___bytes5;
		int32_t L_130 = V_0;
		int32_t L_131 = L_130;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_131, (int32_t)1));
		NullCheck(L_129);
		int32_t L_132 = L_131;
		uint8_t L_133 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_134 = ___dest1;
		int32_t* L_135 = ___destOffset2;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		UriHelper_EscapeAsciiChar_m514B5A9B356DB789631EC00662F65EE43A5B7B97(L_133, L_134, (int32_t*)L_135, /*hidden argument*/NULL);
	}

IL_01c5:
	{
		int32_t L_136 = V_0;
		int32_t L_137 = ___byteCount6;
		if ((((int32_t)L_136) < ((int32_t)L_137)))
		{
			goto IL_01b6;
		}
	}
	{
		return;
	}
}
// System.Void System.UriHelper::EscapeAsciiChar(System.Char,System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriHelper_EscapeAsciiChar_m514B5A9B356DB789631EC00662F65EE43A5B7B97 (Il2CppChar ___ch0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___to1, int32_t* ___pos2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___to1;
		int32_t* L_1 = ___pos2;
		int32_t* L_2 = ___pos2;
		int32_t L_3 = *((int32_t*)L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		*((int32_t*)L_1) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		int32_t L_5 = V_0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Il2CppChar)((int32_t)37));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_6 = ___to1;
		int32_t* L_7 = ___pos2;
		int32_t* L_8 = ___pos2;
		int32_t L_9 = *((int32_t*)L_8);
		V_0 = L_9;
		int32_t L_10 = V_0;
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		int32_t L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_12 = ((UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_StaticFields*)il2cpp_codegen_static_fields_for(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var))->get_HexUpperChars_0();
		Il2CppChar L_13 = ___ch0;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)((int32_t)((int32_t)((int32_t)L_13&(int32_t)((int32_t)240)))>>(int32_t)4));
		uint16_t L_15 = (uint16_t)(L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (Il2CppChar)L_15);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_16 = ___to1;
		int32_t* L_17 = ___pos2;
		int32_t* L_18 = ___pos2;
		int32_t L_19 = *((int32_t*)L_18);
		V_0 = L_19;
		int32_t L_20 = V_0;
		*((int32_t*)L_17) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		int32_t L_21 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_22 = ((UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_StaticFields*)il2cpp_codegen_static_fields_for(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var))->get_HexUpperChars_0();
		Il2CppChar L_23 = ___ch0;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)((int32_t)L_23&(int32_t)((int32_t)15)));
		uint16_t L_25 = (uint16_t)(L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (Il2CppChar)L_25);
		return;
	}
}
// System.Char System.UriHelper::EscapedAscii(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar UriHelper_EscapedAscii_m7AC352E3E869E7E5642C973397FA6C2696F9A573 (Il2CppChar ___digit0, Il2CppChar ___next1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B24_1 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B26_1 = 0;
	{
		Il2CppChar L_0 = ___digit0;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)48))))
		{
			goto IL_000a;
		}
	}
	{
		Il2CppChar L_1 = ___digit0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0024;
		}
	}

IL_000a:
	{
		Il2CppChar L_2 = ___digit0;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)65))))
		{
			goto IL_0014;
		}
	}
	{
		Il2CppChar L_3 = ___digit0;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)70))))
		{
			goto IL_0024;
		}
	}

IL_0014:
	{
		Il2CppChar L_4 = ___digit0;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)97))))
		{
			goto IL_001e;
		}
	}
	{
		Il2CppChar L_5 = ___digit0;
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)102))))
		{
			goto IL_0024;
		}
	}

IL_001e:
	{
		return ((int32_t)65535);
	}

IL_0024:
	{
		Il2CppChar L_6 = ___digit0;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)57))))
		{
			goto IL_003d;
		}
	}
	{
		Il2CppChar L_7 = ___digit0;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)70))))
		{
			goto IL_0034;
		}
	}
	{
		Il2CppChar L_8 = ___digit0;
		G_B11_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)97)));
		goto IL_0038;
	}

IL_0034:
	{
		Il2CppChar L_9 = ___digit0;
		G_B11_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)((int32_t)65)));
	}

IL_0038:
	{
		G_B13_0 = ((int32_t)il2cpp_codegen_add((int32_t)G_B11_0, (int32_t)((int32_t)10)));
		goto IL_0041;
	}

IL_003d:
	{
		Il2CppChar L_10 = ___digit0;
		G_B13_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)((int32_t)48)));
	}

IL_0041:
	{
		V_0 = G_B13_0;
		Il2CppChar L_11 = ___next1;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)48))))
		{
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_12 = ___next1;
		if ((((int32_t)L_12) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0066;
		}
	}

IL_004c:
	{
		Il2CppChar L_13 = ___next1;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)65))))
		{
			goto IL_0056;
		}
	}
	{
		Il2CppChar L_14 = ___next1;
		if ((((int32_t)L_14) <= ((int32_t)((int32_t)70))))
		{
			goto IL_0066;
		}
	}

IL_0056:
	{
		Il2CppChar L_15 = ___next1;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)97))))
		{
			goto IL_0060;
		}
	}
	{
		Il2CppChar L_16 = ___next1;
		if ((((int32_t)L_16) <= ((int32_t)((int32_t)102))))
		{
			goto IL_0066;
		}
	}

IL_0060:
	{
		return ((int32_t)65535);
	}

IL_0066:
	{
		int32_t L_17 = V_0;
		Il2CppChar L_18 = ___next1;
		G_B21_0 = ((int32_t)((int32_t)L_17<<(int32_t)4));
		if ((((int32_t)L_18) <= ((int32_t)((int32_t)57))))
		{
			G_B25_0 = ((int32_t)((int32_t)L_17<<(int32_t)4));
			goto IL_0082;
		}
	}
	{
		Il2CppChar L_19 = ___next1;
		G_B22_0 = G_B21_0;
		if ((((int32_t)L_19) <= ((int32_t)((int32_t)70))))
		{
			G_B23_0 = G_B21_0;
			goto IL_0079;
		}
	}
	{
		Il2CppChar L_20 = ___next1;
		G_B24_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)((int32_t)97)));
		G_B24_1 = G_B22_0;
		goto IL_007d;
	}

IL_0079:
	{
		Il2CppChar L_21 = ___next1;
		G_B24_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)((int32_t)65)));
		G_B24_1 = G_B23_0;
	}

IL_007d:
	{
		G_B26_0 = ((int32_t)il2cpp_codegen_add((int32_t)G_B24_0, (int32_t)((int32_t)10)));
		G_B26_1 = G_B24_1;
		goto IL_0086;
	}

IL_0082:
	{
		Il2CppChar L_22 = ___next1;
		G_B26_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)((int32_t)48)));
		G_B26_1 = G_B25_0;
	}

IL_0086:
	{
		return ((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)G_B26_1, (int32_t)G_B26_0))));
	}
}
// System.Boolean System.UriHelper::IsNotSafeForUnescape(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriHelper_IsNotSafeForUnescape_m033CF009114BEB2E119AE37C22DAF1EA04432E78 (Il2CppChar ___ch0, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = ___ch0;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)31))))
		{
			goto IL_0012;
		}
	}
	{
		Il2CppChar L_1 = ___ch0;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)127))))
		{
			goto IL_0014;
		}
	}
	{
		Il2CppChar L_2 = ___ch0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)159))))
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		return (bool)1;
	}

IL_0014:
	{
		Il2CppChar L_3 = ___ch0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)59))))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppChar L_4 = ___ch0;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)64))))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppChar L_5 = ___ch0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_5|(int32_t)2))) == ((uint32_t)((int32_t)62)))))
		{
			goto IL_0043;
		}
	}

IL_0025:
	{
		Il2CppChar L_6 = ___ch0;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)35))))
		{
			goto IL_002f;
		}
	}
	{
		Il2CppChar L_7 = ___ch0;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)38))))
		{
			goto IL_0043;
		}
	}

IL_002f:
	{
		Il2CppChar L_8 = ___ch0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)43))))
		{
			goto IL_0043;
		}
	}
	{
		Il2CppChar L_9 = ___ch0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)44))))
		{
			goto IL_0043;
		}
	}
	{
		Il2CppChar L_10 = ___ch0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)47))))
		{
			goto IL_0043;
		}
	}
	{
		Il2CppChar L_11 = ___ch0;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0045;
		}
	}

IL_0043:
	{
		return (bool)1;
	}

IL_0045:
	{
		return (bool)0;
	}
}
// System.Boolean System.UriHelper::IsReservedUnreservedOrHash(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriHelper_IsReservedUnreservedOrHash_m430460A215A6884D3736D156C0946ED5F8916A18 (Il2CppChar ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84A0343BF19D2274E807E1B6505C382F81D6E3C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA1D72164D93990AA279210A8D4332B3E0A6C411);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = UriHelper_IsUnreserved_m7036DEC07EA1D2204ECB4C1CBCB0E64716AFA50B(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = UriParser_get_ShouldUseLegacyV2Quirks_m999F115810F8CD526705FC7FE28DC78348BB6B58(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		Il2CppChar L_3 = ___c0;
		NullCheck(_stringLiteral84A0343BF19D2274E807E1B6505C382F81D6E3C9);
		int32_t L_4;
		L_4 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(_stringLiteral84A0343BF19D2274E807E1B6505C382F81D6E3C9, L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppChar L_5 = ___c0;
		return (bool)((((int32_t)L_5) == ((int32_t)((int32_t)35)))? 1 : 0);
	}

IL_0025:
	{
		return (bool)1;
	}

IL_0027:
	{
		Il2CppChar L_6 = ___c0;
		NullCheck(_stringLiteralFA1D72164D93990AA279210A8D4332B3E0A6C411);
		int32_t L_7;
		L_7 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(_stringLiteralFA1D72164D93990AA279210A8D4332B3E0A6C411, L_6, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.UriHelper::IsUnreserved(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriHelper_IsUnreserved_m7036DEC07EA1D2204ECB4C1CBCB0E64716AFA50B (Il2CppChar ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70ACDB62BA3184CF43D7E26D62FB85E2340ED892);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83F837B4325FC4400C4089A21E353D2D0CD0EF29);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Uri_IsAsciiLetterOrDigit_mC5604E1B62ED7337C5966CC6AD021DF841C90A83(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = UriParser_get_ShouldUseLegacyV2Quirks_m999F115810F8CD526705FC7FE28DC78348BB6B58(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Il2CppChar L_3 = ___c0;
		NullCheck(_stringLiteral70ACDB62BA3184CF43D7E26D62FB85E2340ED892);
		int32_t L_4;
		L_4 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(_stringLiteral70ACDB62BA3184CF43D7E26D62FB85E2340ED892, L_3, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_4) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0023:
	{
		Il2CppChar L_5 = ___c0;
		NullCheck(_stringLiteral83F837B4325FC4400C4089A21E353D2D0CD0EF29);
		int32_t L_6;
		L_6 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(_stringLiteral83F837B4325FC4400C4089A21E353D2D0CD0EF29, L_5, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_6) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.UriHelper::Is3986Unreserved(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriHelper_Is3986Unreserved_m7A17E1EAE5812BCFD4158BF65A75013B3A87E8A8 (Il2CppChar ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83F837B4325FC4400C4089A21E353D2D0CD0EF29);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Uri_IsAsciiLetterOrDigit_mC5604E1B62ED7337C5966CC6AD021DF841C90A83(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		Il2CppChar L_2 = ___c0;
		NullCheck(_stringLiteral83F837B4325FC4400C4089A21E353D2D0CD0EF29);
		int32_t L_3;
		L_3 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(_stringLiteral83F837B4325FC4400C4089A21E353D2D0CD0EF29, L_2, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.UriHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriHelper__cctor_m6B15F5023455DDBFBBF1FFE533F71F7969CBD223 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t1267FAF6E08D720F26ABF676554E6948A7F6A2D0____59F5BD34B6C013DEACC784F69C67E95150033A84_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t1267FAF6E08D720F26ABF676554E6948A7F6A2D0____59F5BD34B6C013DEACC784F69C67E95150033A84_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m37345890E8136134556D27E57315B584AC51D53F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_StaticFields*)il2cpp_codegen_static_fields_for(UriHelper_tBEFC75B3A4E9E35CB41ADAAE22E0D1D7EE65E53D_il2cpp_TypeInfo_var))->set_HexUpperChars_0(L_1);
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
// System.UriParser System.UriParser::OnNewUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * UriParser_OnNewUri_m44FB81344517268B51B276DF7A9E236C04134ED5 (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, const RuntimeMethod* method)
{
	{
		return __this;
	}
}
// System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriParser_InitializeAndValidate_mE7C239F559C834F7C156FC21F175023D98E11A45 (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri0, UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** ___parsingError1, const RuntimeMethod* method)
{
	{
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** L_0 = ___parsingError1;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_1 = ___uri0;
		NullCheck(L_1);
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_2;
		L_2 = Uri_ParseMinimal_m47FF7ACAEB543DE87332F9DEA79F92ADC575107F(L_1, /*hidden argument*/NULL);
		*((RuntimeObject **)L_0) = (RuntimeObject *)L_2;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)L_2);
		return;
	}
}
// System.String System.UriParser::Resolve(System.Uri,System.Uri,System.UriFormatException&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UriParser_Resolve_m031E03AD4141D77F023345D8FB087FA06CEA41C0 (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___baseUri0, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___relativeUri1, UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** ___parsingError2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * V_2 = NULL;
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = ___baseUri0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Uri_get_UserDrivenParsing_mF09087D4DE9A0823EBF1FC0C14101335D01393F2(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		Type_t * L_4;
		L_4 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Type::get_FullName() */, L_4);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		String_t* L_6;
		L_6 = SR_GetString_m60DD6FC6EE29B45330D1A1A35D27061605169AF5(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3EE5BCAF4F2ABF8C2E555D5760FA880AAB22CABF)), L_3, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_7 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriParser_Resolve_m031E03AD4141D77F023345D8FB087FA06CEA41C0_RuntimeMethod_var)));
	}

IL_002c:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_8 = ___baseUri0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Uri_get_IsAbsoluteUri_m013346D65055CFEDF9E742534A584573C18A0E25(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_10;
		L_10 = SR_GetString_m6A5DA279E5FFB81210609BAD3C4099947C625E54(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE657126EBF76C06687ED6EAD2C714E37315C927F)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_11 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriParser_Resolve_m031E03AD4141D77F023345D8FB087FA06CEA41C0_RuntimeMethod_var)));
	}

IL_0044:
	{
		V_0 = (String_t*)NULL;
		V_1 = (bool)0;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_12 = ___baseUri0;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_13 = ___relativeUri1;
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** L_14 = ___parsingError2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_15;
		L_15 = Uri_ResolveHelper_mA18C06D627E72E81F0848DA4C02CE7675D139CD7(L_12, L_13, (String_t**)(&V_0), (bool*)(&V_1), (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D **)L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** L_16 = ___parsingError2;
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D * L_17 = *((UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D **)L_16);
		if (!L_17)
		{
			goto IL_005b;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_005b:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_18 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Uri_op_Inequality_m1CFADE0F122D3B996C7B1871646FA1570AF399E5(L_18, (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_006b;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_20 = V_2;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = Uri_get_OriginalString_mBD94B4BB84AE9C051C1CA8BA33C14D5BAD25B0AC(L_20, /*hidden argument*/NULL);
		return L_21;
	}

IL_006b:
	{
		String_t* L_22 = V_0;
		return L_22;
	}
}
// System.String System.UriParser::GetComponents(System.Uri,System.UriComponents,System.UriFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UriParser_GetComponents_mEF92B7D8CD59B1C8502D195D775D02D2C844FC1B (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri0, int32_t ___components1, int32_t ___format2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___components1;
		if (!((int32_t)((int32_t)L_0&(int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_1 = ___components1;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_2 = ___components1;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriComponents_tA599793722A9810EC23036FF1B1B02A905B4EA76_il2cpp_TypeInfo_var)), &L_3);
		String_t* L_5;
		L_5 = SR_GetString_m6A5DA279E5FFB81210609BAD3C4099947C625E54(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE13258345AC5ED7FA38D641004219DBE3A3FB56C)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_6 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7C03E97995F6950303A46C204A216735E6B4582)), L_4, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriParser_GetComponents_mEF92B7D8CD59B1C8502D195D775D02D2C844FC1B_RuntimeMethod_var)));
	}

IL_002c:
	{
		int32_t L_7 = ___format2;
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-4))))
		{
			goto IL_003d;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriParser_GetComponents_mEF92B7D8CD59B1C8502D195D775D02D2C844FC1B_RuntimeMethod_var)));
	}

IL_003d:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_9 = ___uri0;
		NullCheck(L_9);
		bool L_10;
		L_10 = Uri_get_UserDrivenParsing_mF09087D4DE9A0823EBF1FC0C14101335D01393F2(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0069;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_11;
		Type_t * L_13;
		L_13 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Type::get_FullName() */, L_13);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_14);
		String_t* L_15;
		L_15 = SR_GetString_m60DD6FC6EE29B45330D1A1A35D27061605169AF5(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3EE5BCAF4F2ABF8C2E555D5760FA880AAB22CABF)), L_12, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_16 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_16, L_15, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriParser_GetComponents_mEF92B7D8CD59B1C8502D195D775D02D2C844FC1B_RuntimeMethod_var)));
	}

IL_0069:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_17 = ___uri0;
		NullCheck(L_17);
		bool L_18;
		L_18 = Uri_get_IsAbsoluteUri_m013346D65055CFEDF9E742534A584573C18A0E25(L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_0081;
		}
	}
	{
		String_t* L_19;
		L_19 = SR_GetString_m6A5DA279E5FFB81210609BAD3C4099947C625E54(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE657126EBF76C06687ED6EAD2C714E37315C927F)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_20 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_20, L_19, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriParser_GetComponents_mEF92B7D8CD59B1C8502D195D775D02D2C844FC1B_RuntimeMethod_var)));
	}

IL_0081:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_21 = ___uri0;
		int32_t L_22 = ___components1;
		int32_t L_23 = ___format2;
		NullCheck(L_21);
		String_t* L_24;
		L_24 = Uri_GetComponentsHelper_mAA39E421157735AAD7D93A187CCCAED5A122C8E8(L_21, L_22, L_23, /*hidden argument*/NULL);
		return L_24;
	}
}
// System.Boolean System.UriParser::get_ShouldUseLegacyV2Quirks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriParser_get_ShouldUseLegacyV2Quirks_m999F115810F8CD526705FC7FE28DC78348BB6B58 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		int32_t L_0 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_s_QuirksVersion_23();
		return (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.UriParser::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriParser__cctor_m3312BCD8E4C266FCBFAB0998FBC5D8EAD202598D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mEF275C708A9D8C75BE351DE8D63068D20522B707_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19A87220AA9460BCE77166C6A721ECA99780C3E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AB04459C95BC4FFBBDA41BF1A685753EB83D903);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D81741866E0AFB5638DF15167E9A90CDC2CF124);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FB56C8861544146EF414DAE01766AD43F440960);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BF693870A1CA202D2EE1A186395E62B409214FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CB5CAE4A06CBA4A72564C688228877DD24B9906);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9753F194FF9C1EAC5D2E1FAADADC2E63D96E516E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C5DC11C0F491C18EA087784CC4C662A0629733);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE9CA5A938D04349B649020FA52D9EC24C97099D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC05DD95A56B355AAD74E9CE147B236E03FF8905E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD39E208E1EDCA34C72FCD76197E0EA7CD671D2F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE0A8A4B33338D09BDE82F544CF26FB4B56B9F98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF27E4C631EBEFA337EC21BE8552E169C9DED78A2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_il2cpp_TypeInfo_var);
		bool L_0 = ((BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_StaticFields*)il2cpp_codegen_static_fields_for(BinaryCompatibility_t44EDF0C684F7241E727B341DF3896349BC34D810_il2cpp_TypeInfo_var))->get_TargetsAtLeast_Desktop_V4_5_0();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		G_B3_0 = 2;
		goto IL_000b;
	}

IL_000a:
	{
		G_B3_0 = 3;
	}

IL_000b:
	{
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_s_QuirksVersion_23(G_B3_0);
		bool L_1;
		L_1 = UriParser_get_ShouldUseLegacyV2Quirks_m999F115810F8CD526705FC7FE28DC78348BB6B58(/*hidden argument*/NULL);
		G_B4_0 = ((int32_t)31461245);
		if (L_1)
		{
			G_B5_0 = ((int32_t)31461245);
			goto IL_001f;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0024;
	}

IL_001f:
	{
		G_B6_0 = ((int32_t)33554432);
		G_B6_1 = G_B5_0;
	}

IL_0024:
	{
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_HttpSyntaxFlags_24(((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)G_B6_1|(int32_t)G_B6_0))|(int32_t)((int32_t)67108864)))|(int32_t)((int32_t)268435456))));
		bool L_2;
		L_2 = UriParser_get_ShouldUseLegacyV2Quirks_m999F115810F8CD526705FC7FE28DC78348BB6B58(/*hidden argument*/NULL);
		G_B7_0 = ((int32_t)4049);
		if (L_2)
		{
			G_B8_0 = ((int32_t)4049);
			goto IL_0046;
		}
	}
	{
		G_B9_0 = ((int32_t)32);
		G_B9_1 = G_B7_0;
		goto IL_0047;
	}

IL_0046:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_0047:
	{
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_FileSyntaxFlags_25(((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)G_B9_1|(int32_t)G_B9_0))|(int32_t)((int32_t)8192)))|(int32_t)((int32_t)2097152)))|(int32_t)((int32_t)1048576)))|(int32_t)((int32_t)4194304)))|(int32_t)((int32_t)8388608)))|(int32_t)((int32_t)16777216)))|(int32_t)((int32_t)33554432)))|(int32_t)((int32_t)67108864)))|(int32_t)((int32_t)268435456))));
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_3 = (Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 *)il2cpp_codegen_object_new(Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mEF275C708A9D8C75BE351DE8D63068D20522B707(L_3, ((int32_t)25), /*hidden argument*/Dictionary_2__ctor_mEF275C708A9D8C75BE351DE8D63068D20522B707_RuntimeMethod_var);
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_m_Table_0(L_3);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_4 = (Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 *)il2cpp_codegen_object_new(Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mEF275C708A9D8C75BE351DE8D63068D20522B707(L_4, ((int32_t)25), /*hidden argument*/Dictionary_2__ctor_mEF275C708A9D8C75BE351DE8D63068D20522B707_RuntimeMethod_var);
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_m_TempTable_1(L_4);
		int32_t L_5 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_HttpSyntaxFlags_24();
		BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * L_6 = (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 *)il2cpp_codegen_object_new(BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA(L_6, _stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF, ((int32_t)80), L_5, /*hidden argument*/NULL);
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_HttpUri_7(L_6);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_7 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_8 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_HttpUri_7();
		NullCheck(L_8);
		String_t* L_9 = L_8->get_m_Scheme_6();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_10 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_HttpUri_7();
		NullCheck(L_7);
		Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993(L_7, L_9, L_10, /*hidden argument*/Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_11 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_HttpUri_7();
		NullCheck(L_11);
		int32_t L_12 = L_11->get_m_Flags_2();
		BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * L_13 = (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 *)il2cpp_codegen_object_new(BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA(L_13, _stringLiteralF27E4C631EBEFA337EC21BE8552E169C9DED78A2, ((int32_t)443), L_12, /*hidden argument*/NULL);
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_HttpsUri_8(L_13);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_14 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_15 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_HttpsUri_8();
		NullCheck(L_15);
		String_t* L_16 = L_15->get_m_Scheme_6();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_17 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_HttpsUri_8();
		NullCheck(L_14);
		Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993(L_14, L_16, L_17, /*hidden argument*/Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
		int32_t L_18 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_HttpSyntaxFlags_24();
		BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * L_19 = (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 *)il2cpp_codegen_object_new(BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA(L_19, _stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95, ((int32_t)80), L_18, /*hidden argument*/NULL);
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_WsUri_9(L_19);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_20 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_21 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_WsUri_9();
		NullCheck(L_21);
		String_t* L_22 = L_21->get_m_Scheme_6();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_23 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_WsUri_9();
		NullCheck(L_20);
		Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993(L_20, L_22, L_23, /*hidden argument*/Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
		int32_t L_24 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_HttpSyntaxFlags_24();
		BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * L_25 = (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 *)il2cpp_codegen_object_new(BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA(L_25, _stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C, ((int32_t)443), L_24, /*hidden argument*/NULL);
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_WssUri_10(L_25);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_26 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_27 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_WssUri_10();
		NullCheck(L_27);
		String_t* L_28 = L_27->get_m_Scheme_6();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_29 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_WssUri_10();
		NullCheck(L_26);
		Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993(L_26, L_28, L_29, /*hidden argument*/Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
		BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * L_30 = (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 *)il2cpp_codegen_object_new(BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA(L_30, _stringLiteral8CB5CAE4A06CBA4A72564C688228877DD24B9906, ((int32_t)21), ((int32_t)367005533), /*hidden argument*/NULL);
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_FtpUri_11(L_30);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_31 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_32 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_FtpUri_11();
		NullCheck(L_32);
		String_t* L_33 = L_32->get_m_Scheme_6();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_34 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_FtpUri_11();
		NullCheck(L_31);
		Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993(L_31, L_33, L_34, /*hidden argument*/Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
		int32_t L_35 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_FileSyntaxFlags_25();
		BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * L_36 = (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 *)il2cpp_codegen_object_new(BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA(L_36, _stringLiteralC05DD95A56B355AAD74E9CE147B236E03FF8905E, (-1), L_35, /*hidden argument*/NULL);
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_FileUri_12(L_36);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_37 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_38 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_FileUri_12();
		NullCheck(L_38);
		String_t* L_39 = L_38->get_m_Scheme_6();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_40 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_FileUri_12();
		NullCheck(L_37);
		Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993(L_37, L_39, L_40, /*hidden argument*/Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
		BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * L_41 = (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 *)il2cpp_codegen_object_new(BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA(L_41, _stringLiteralBE9CA5A938D04349B649020FA52D9EC24C97099D, ((int32_t)70), ((int32_t)337645405), /*hidden argument*/NULL);
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_GopherUri_13(L_41);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_42 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_43 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_GopherUri_13();
		NullCheck(L_43);
		String_t* L_44 = L_43->get_m_Scheme_6();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_45 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_GopherUri_13();
		NullCheck(L_42);
		Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993(L_42, L_44, L_45, /*hidden argument*/Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
		BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * L_46 = (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 *)il2cpp_codegen_object_new(BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA(L_46, _stringLiteralA3C5DC11C0F491C18EA087784CC4C662A0629733, ((int32_t)119), ((int32_t)337645405), /*hidden argument*/NULL);
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_NntpUri_14(L_46);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_47 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_48 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_NntpUri_14();
		NullCheck(L_48);
		String_t* L_49 = L_48->get_m_Scheme_6();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_50 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_NntpUri_14();
		NullCheck(L_47);
		Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993(L_47, L_49, L_50, /*hidden argument*/Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
		BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * L_51 = (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 *)il2cpp_codegen_object_new(BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA(L_51, _stringLiteral5FB56C8861544146EF414DAE01766AD43F440960, (-1), ((int32_t)268435536), /*hidden argument*/NULL);
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_NewsUri_15(L_51);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_52 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_53 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_NewsUri_15();
		NullCheck(L_53);
		String_t* L_54 = L_53->get_m_Scheme_6();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_55 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_NewsUri_15();
		NullCheck(L_52);
		Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993(L_52, L_54, L_55, /*hidden argument*/Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
		BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * L_56 = (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 *)il2cpp_codegen_object_new(BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA(L_56, _stringLiteralDE0A8A4B33338D09BDE82F544CF26FB4B56B9F98, ((int32_t)25), ((int32_t)335564796), /*hidden argument*/NULL);
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_MailToUri_16(L_56);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_57 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_58 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_MailToUri_16();
		NullCheck(L_58);
		String_t* L_59 = L_58->get_m_Scheme_6();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_60 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_MailToUri_16();
		NullCheck(L_57);
		Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993(L_57, L_59, L_60, /*hidden argument*/Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_61 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_NewsUri_15();
		NullCheck(L_61);
		int32_t L_62 = L_61->get_m_Flags_2();
		BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * L_63 = (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 *)il2cpp_codegen_object_new(BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA(L_63, _stringLiteral8BF693870A1CA202D2EE1A186395E62B409214FD, (-1), L_62, /*hidden argument*/NULL);
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_UuidUri_17(L_63);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_64 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_65 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_UuidUri_17();
		NullCheck(L_65);
		String_t* L_66 = L_65->get_m_Scheme_6();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_67 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_UuidUri_17();
		NullCheck(L_64);
		Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993(L_64, L_66, L_67, /*hidden argument*/Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
		BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * L_68 = (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 *)il2cpp_codegen_object_new(BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA(L_68, _stringLiteral5D81741866E0AFB5638DF15167E9A90CDC2CF124, ((int32_t)23), ((int32_t)337645405), /*hidden argument*/NULL);
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_TelnetUri_18(L_68);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_69 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_70 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_TelnetUri_18();
		NullCheck(L_70);
		String_t* L_71 = L_70->get_m_Scheme_6();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_72 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_TelnetUri_18();
		NullCheck(L_69);
		Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993(L_69, L_71, L_72, /*hidden argument*/Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
		BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * L_73 = (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 *)il2cpp_codegen_object_new(BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA(L_73, _stringLiteral9753F194FF9C1EAC5D2E1FAADADC2E63D96E516E, ((int32_t)389), ((int32_t)337645565), /*hidden argument*/NULL);
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_LdapUri_19(L_73);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_74 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_75 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_LdapUri_19();
		NullCheck(L_75);
		String_t* L_76 = L_75->get_m_Scheme_6();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_77 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_LdapUri_19();
		NullCheck(L_74);
		Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993(L_74, L_76, L_77, /*hidden argument*/Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
		BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * L_78 = (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 *)il2cpp_codegen_object_new(BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA(L_78, _stringLiteralD39E208E1EDCA34C72FCD76197E0EA7CD671D2F9, ((int32_t)808), ((int32_t)400559737), /*hidden argument*/NULL);
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_NetTcpUri_20(L_78);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_79 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_80 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_NetTcpUri_20();
		NullCheck(L_80);
		String_t* L_81 = L_80->get_m_Scheme_6();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_82 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_NetTcpUri_20();
		NullCheck(L_79);
		Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993(L_79, L_81, L_82, /*hidden argument*/Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
		BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * L_83 = (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 *)il2cpp_codegen_object_new(BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA(L_83, _stringLiteral3AB04459C95BC4FFBBDA41BF1A685753EB83D903, (-1), ((int32_t)400559729), /*hidden argument*/NULL);
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_NetPipeUri_21(L_83);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_84 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_85 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_NetPipeUri_21();
		NullCheck(L_85);
		String_t* L_86 = L_85->get_m_Scheme_6();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_87 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_NetPipeUri_21();
		NullCheck(L_84);
		Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993(L_84, L_86, L_87, /*hidden argument*/Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
		BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * L_88 = (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 *)il2cpp_codegen_object_new(BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
		BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA(L_88, _stringLiteral19A87220AA9460BCE77166C6A721ECA99780C3E7, (-1), ((int32_t)399519697), /*hidden argument*/NULL);
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_VsMacrosUri_22(L_88);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_89 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_Table_0();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_90 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_VsMacrosUri_22();
		NullCheck(L_90);
		String_t* L_91 = L_90->get_m_Scheme_6();
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_92 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_VsMacrosUri_22();
		NullCheck(L_89);
		Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993(L_89, L_91, L_92, /*hidden argument*/Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
		return;
	}
}
// System.Boolean System.UriParser::NotAny(System.UriSyntaxFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriParser_NotAny_m6A42FAC623F0EBDE441782DAC3E3B2ED34756D91 (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, int32_t ___flags0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___flags0;
		bool L_1;
		L_1 = UriParser_IsFullMatch_m3967BB43AFB5C11B75DA3BD1CE18B8DAE8F0C32E(__this, L_0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.UriParser::InFact(System.UriSyntaxFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, int32_t ___flags0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___flags0;
		bool L_1;
		L_1 = UriParser_IsFullMatch_m3967BB43AFB5C11B75DA3BD1CE18B8DAE8F0C32E(__this, L_0, 0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.UriParser::IsAllSet(System.UriSyntaxFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriParser_IsAllSet_m356BD044D8A53560B6A7AA9B81A20A364E015C18 (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, int32_t ___flags0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___flags0;
		int32_t L_1 = ___flags0;
		bool L_2;
		L_2 = UriParser_IsFullMatch_m3967BB43AFB5C11B75DA3BD1CE18B8DAE8F0C32E(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.UriParser::IsFullMatch(System.UriSyntaxFlags,System.UriSyntaxFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriParser_IsFullMatch_m3967BB43AFB5C11B75DA3BD1CE18B8DAE8F0C32E (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, int32_t ___flags0, int32_t ___expected1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___flags0;
		if (!((int32_t)((int32_t)L_0&(int32_t)((int32_t)33554432))))
		{
			goto IL_0013;
		}
	}
	{
		bool L_1 = __this->get_m_UpdatableFlagsUsed_4();
		il2cpp_codegen_memory_barrier();
		if (L_1)
		{
			goto IL_001c;
		}
	}

IL_0013:
	{
		int32_t L_2 = __this->get_m_Flags_2();
		V_0 = L_2;
		goto IL_0032;
	}

IL_001c:
	{
		int32_t L_3 = __this->get_m_Flags_2();
		int32_t L_4 = __this->get_m_UpdatableFlags_3();
		il2cpp_codegen_memory_barrier();
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)-33554433)))|(int32_t)L_4));
	}

IL_0032:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___flags0;
		int32_t L_7 = ___expected1;
		return (bool)((((int32_t)((int32_t)((int32_t)L_5&(int32_t)L_6))) == ((int32_t)L_7))? 1 : 0);
	}
}
// System.Void System.UriParser::.ctor(System.UriSyntaxFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriParser__ctor_m9A2C47C1F30EF65ADFBAEB0A569FB972F383825C (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, int32_t ___flags0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___flags0;
		__this->set_m_Flags_2(L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_m_Scheme_6(L_1);
		return;
	}
}
// System.UriParser System.UriParser::FindOrFetchAsUnknownV1Syntax(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * UriParser_FindOrFetchAsUnknownV1Syntax_m7E42C893EE2F8C29C3BAF9FBDAAEBD707311D63F (String_t* ___lwrCaseScheme0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m05B3B2E9A02468956D9D51C30093821BFBC3C63A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mEF275C708A9D8C75BE351DE8D63068D20522B707_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mC890D4862BCE096F4E905A751AEE39B30478357C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * V_0 = NULL;
	Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * V_1 = NULL;
	bool V_2 = false;
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		V_0 = (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A *)NULL;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_0 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_Table_0();
		String_t* L_1 = ___lwrCaseScheme0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m05B3B2E9A02468956D9D51C30093821BFBC3C63A(L_0, L_1, (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m05B3B2E9A02468956D9D51C30093821BFBC3C63A_RuntimeMethod_var);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_4 = V_0;
		return L_4;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_5 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_TempTable_1();
		String_t* L_6 = ___lwrCaseScheme0;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_TryGetValue_m05B3B2E9A02468956D9D51C30093821BFBC3C63A(L_5, L_6, (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m05B3B2E9A02468956D9D51C30093821BFBC3C63A_RuntimeMethod_var);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_8 = V_0;
		if (!L_8)
		{
			goto IL_0028;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_9 = V_0;
		return L_9;
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_10 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_Table_0();
		V_1 = L_10;
		V_2 = (bool)0;
	}

IL_0030:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_11 = V_1;
			Monitor_Enter_m588C16057E70F436C528A800D32546E987CAF1BD(L_11, (bool*)(&V_2), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
			Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_12 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_TempTable_1();
			NullCheck(L_12);
			int32_t L_13;
			L_13 = Dictionary_2_get_Count_mC890D4862BCE096F4E905A751AEE39B30478357C(L_12, /*hidden argument*/Dictionary_2_get_Count_mC890D4862BCE096F4E905A751AEE39B30478357C_RuntimeMethod_var);
			if ((((int32_t)L_13) < ((int32_t)((int32_t)512))))
			{
				goto IL_0055;
			}
		}

IL_0049:
		{
			Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_14 = (Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 *)il2cpp_codegen_object_new(Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_mEF275C708A9D8C75BE351DE8D63068D20522B707(L_14, ((int32_t)25), /*hidden argument*/Dictionary_2__ctor_mEF275C708A9D8C75BE351DE8D63068D20522B707_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
			((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->set_m_TempTable_1(L_14);
		}

IL_0055:
		{
			String_t* L_15 = ___lwrCaseScheme0;
			BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * L_16 = (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 *)il2cpp_codegen_object_new(BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26_il2cpp_TypeInfo_var);
			BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA(L_16, L_15, (-1), ((int32_t)351342590), /*hidden argument*/NULL);
			V_0 = L_16;
			IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
			Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_17 = ((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_StaticFields*)il2cpp_codegen_static_fields_for(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var))->get_m_TempTable_1();
			String_t* L_18 = ___lwrCaseScheme0;
			UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_19 = V_0;
			NullCheck(L_17);
			Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993(L_17, L_18, L_19, /*hidden argument*/Dictionary_2_set_Item_m43027DEBFCAF2EDBBE4B7A8573819B5A391A9993_RuntimeMethod_var);
			UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_20 = V_0;
			V_3 = L_20;
			IL2CPP_LEAVE(0x7C, FINALLY_0072);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0072;
	}

FINALLY_0072:
	{ // begin finally (depth: 1)
		{
			bool L_21 = V_2;
			if (!L_21)
			{
				goto IL_007b;
			}
		}

IL_0075:
		{
			Dictionary_2_t29257EB2565DDF3180663167EF129FA9827836C5 * L_22 = V_1;
			Monitor_Exit_m62365CE1CF6AD0E7396CEEB926F7B0C3FA8CABA1(L_22, /*hidden argument*/NULL);
		}

IL_007b:
		{
			IL2CPP_END_FINALLY(114)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(114)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7C, IL_007c)
	}

IL_007c:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_23 = V_3;
		return L_23;
	}
}
// System.Boolean System.UriParser::get_IsSimple()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UriParser_get_IsSimple_m09BA6505FDD1AE0BF6C711AE9C2C3F9379B868F8 (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = UriParser_InFact_m4E58BAFAB5A9BC24854C815FC093E16D4F1CFA4D(__this, ((int32_t)131072), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.UriParser System.UriParser::InternalOnNewUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * UriParser_InternalOnNewUri_m0AC629BCCA398E9A193AC16A5E91D445B9B70D79 (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, const RuntimeMethod* method)
{
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * V_0 = NULL;
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_0;
		L_0 = VirtFuncInvoker0< UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * >::Invoke(4 /* System.UriParser System.UriParser::OnNewUri() */, __this);
		V_0 = L_0;
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_1 = V_0;
		if ((((RuntimeObject*)(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A *)__this) == ((RuntimeObject*)(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A *)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_2 = V_0;
		String_t* L_3 = __this->get_m_Scheme_6();
		NullCheck(L_2);
		L_2->set_m_Scheme_6(L_3);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_4 = V_0;
		int32_t L_5 = __this->get_m_Port_5();
		NullCheck(L_4);
		L_4->set_m_Port_5(L_5);
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_6 = V_0;
		int32_t L_7 = __this->get_m_Flags_2();
		NullCheck(L_6);
		L_6->set_m_Flags_2(L_7);
	}

IL_002f:
	{
		UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * L_8 = V_0;
		return L_8;
	}
}
// System.Void System.UriParser::InternalValidate(System.Uri,System.UriFormatException&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriParser_InternalValidate_mB845C482B4B01EDFE012DD4C4CEF62C8F4FFE94F (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___thisUri0, UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** ___parsingError1, const RuntimeMethod* method)
{
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = ___thisUri0;
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** L_1 = ___parsingError1;
		VirtActionInvoker2< Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *, UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** >::Invoke(5 /* System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&) */, __this, L_0, (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D **)L_1);
		return;
	}
}
// System.String System.UriParser::InternalResolve(System.Uri,System.Uri,System.UriFormatException&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UriParser_InternalResolve_m7EF249EAEFB9DDE866F9830E91CC61E09F1548E9 (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___thisBaseUri0, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uriLink1, UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** ___parsingError2, const RuntimeMethod* method)
{
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = ___thisBaseUri0;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_1 = ___uriLink1;
		UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** L_2 = ___parsingError2;
		String_t* L_3;
		L_3 = VirtFuncInvoker3< String_t*, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *, UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D ** >::Invoke(6 /* System.String System.UriParser::Resolve(System.Uri,System.Uri,System.UriFormatException&) */, __this, L_0, L_1, (UriFormatException_tAA45C6D2264E9E74935A066FC3DF8DF68B37B61D **)L_2);
		return L_3;
	}
}
// System.String System.UriParser::InternalGetComponents(System.Uri,System.UriComponents,System.UriFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UriParser_InternalGetComponents_mAB0A54E462724FA417D0EF3A2AD0BD24BC66DFF8 (UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___thisUri0, int32_t ___uriComponents1, int32_t ___uriFormat2, const RuntimeMethod* method)
{
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = ___thisUri0;
		int32_t L_1 = ___uriComponents1;
		int32_t L_2 = ___uriFormat2;
		String_t* L_3;
		L_3 = VirtFuncInvoker3< String_t*, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *, int32_t, int32_t >::Invoke(7 /* System.String System.UriParser::GetComponents(System.Uri,System.UriComponents,System.UriFormat) */, __this, L_0, L_1, L_2);
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
// Conversion methods for marshalling of: System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping
IL2CPP_EXTERN_C void LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshal_pinvoke(const LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE& unmarshaled, LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshaled_pinvoke& marshaled)
{
	marshaled.____chMin_0 = static_cast<uint8_t>(unmarshaled.get__chMin_0());
	marshaled.____chMax_1 = static_cast<uint8_t>(unmarshaled.get__chMax_1());
	marshaled.____lcOp_2 = unmarshaled.get__lcOp_2();
	marshaled.____data_3 = unmarshaled.get__data_3();
}
IL2CPP_EXTERN_C void LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshal_pinvoke_back(const LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshaled_pinvoke& marshaled, LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE& unmarshaled)
{
	Il2CppChar unmarshaled__chMin_temp_0 = 0x0;
	unmarshaled__chMin_temp_0 = static_cast<Il2CppChar>(marshaled.____chMin_0);
	unmarshaled.set__chMin_0(unmarshaled__chMin_temp_0);
	Il2CppChar unmarshaled__chMax_temp_1 = 0x0;
	unmarshaled__chMax_temp_1 = static_cast<Il2CppChar>(marshaled.____chMax_1);
	unmarshaled.set__chMax_1(unmarshaled__chMax_temp_1);
	int32_t unmarshaled__lcOp_temp_2 = 0;
	unmarshaled__lcOp_temp_2 = marshaled.____lcOp_2;
	unmarshaled.set__lcOp_2(unmarshaled__lcOp_temp_2);
	int32_t unmarshaled__data_temp_3 = 0;
	unmarshaled__data_temp_3 = marshaled.____data_3;
	unmarshaled.set__data_3(unmarshaled__data_temp_3);
}
// Conversion method for clean up from marshalling of: System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping
IL2CPP_EXTERN_C void LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshal_pinvoke_cleanup(LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping
IL2CPP_EXTERN_C void LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshal_com(const LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE& unmarshaled, LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshaled_com& marshaled)
{
	marshaled.____chMin_0 = static_cast<uint8_t>(unmarshaled.get__chMin_0());
	marshaled.____chMax_1 = static_cast<uint8_t>(unmarshaled.get__chMax_1());
	marshaled.____lcOp_2 = unmarshaled.get__lcOp_2();
	marshaled.____data_3 = unmarshaled.get__data_3();
}
IL2CPP_EXTERN_C void LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshal_com_back(const LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshaled_com& marshaled, LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE& unmarshaled)
{
	Il2CppChar unmarshaled__chMin_temp_0 = 0x0;
	unmarshaled__chMin_temp_0 = static_cast<Il2CppChar>(marshaled.____chMin_0);
	unmarshaled.set__chMin_0(unmarshaled__chMin_temp_0);
	Il2CppChar unmarshaled__chMax_temp_1 = 0x0;
	unmarshaled__chMax_temp_1 = static_cast<Il2CppChar>(marshaled.____chMax_1);
	unmarshaled.set__chMax_1(unmarshaled__chMax_temp_1);
	int32_t unmarshaled__lcOp_temp_2 = 0;
	unmarshaled__lcOp_temp_2 = marshaled.____lcOp_2;
	unmarshaled.set__lcOp_2(unmarshaled__lcOp_temp_2);
	int32_t unmarshaled__data_temp_3 = 0;
	unmarshaled__data_temp_3 = marshaled.____data_3;
	unmarshaled.set__data_3(unmarshaled__data_temp_3);
}
// Conversion method for clean up from marshalling of: System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping
IL2CPP_EXTERN_C void LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshal_com_cleanup(LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE_marshaled_com& marshaled)
{
}
// System.Void System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping::.ctor(System.Char,System.Char,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowerCaseMapping__ctor_m0236442CB5098331DEAE7CACFCAC42741945D3E8 (LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE * __this, Il2CppChar ___chMin0, Il2CppChar ___chMax1, int32_t ___lcOp2, int32_t ___data3, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = ___chMin0;
		__this->set__chMin_0(L_0);
		Il2CppChar L_1 = ___chMax1;
		__this->set__chMax_1(L_1);
		int32_t L_2 = ___lcOp2;
		__this->set__lcOp_2(L_2);
		int32_t L_3 = ___data3;
		__this->set__data_3(L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void LowerCaseMapping__ctor_m0236442CB5098331DEAE7CACFCAC42741945D3E8_AdjustorThunk (RuntimeObject * __this, Il2CppChar ___chMin0, Il2CppChar ___chMax1, int32_t ___lcOp2, int32_t ___data3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE * _thisAdjusted = reinterpret_cast<LowerCaseMapping_t54FB537AEA4CA2EBAB5BDCC79881428C202241DE *>(__this + _offset);
	LowerCaseMapping__ctor_m0236442CB5098331DEAE7CACFCAC42741945D3E8(_thisAdjusted, ___chMin0, ___chMax1, ___lcOp2, ___data3, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Text.RegularExpressions.RegexCharClass/SingleRange::.ctor(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleRange__ctor_m886247FFB10501E4CDDC575B221D8CD1BC85E3B6 (SingleRange_tEE8EA054843A8B8979D082D2CCC8E52A12155624 * __this, Il2CppChar ___first0, Il2CppChar ___last1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Il2CppChar L_0 = ___first0;
		__this->set__first_0(L_0);
		Il2CppChar L_1 = ___last1;
		__this->set__last_1(L_1);
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
// System.Int32 System.Text.RegularExpressions.RegexCharClass/SingleRangeComparer::Compare(System.Text.RegularExpressions.RegexCharClass/SingleRange,System.Text.RegularExpressions.RegexCharClass/SingleRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SingleRangeComparer_Compare_m54BB5AFA11BF2F18A0C2F9491CE48E409D64AD3E (SingleRangeComparer_t2D22B185700E925165F9548B3647E0E1FC9DB075 * __this, SingleRange_tEE8EA054843A8B8979D082D2CCC8E52A12155624 * ___x0, SingleRange_tEE8EA054843A8B8979D082D2CCC8E52A12155624 * ___y1, const RuntimeMethod* method)
{
	{
		SingleRange_tEE8EA054843A8B8979D082D2CCC8E52A12155624 * L_0 = ___x0;
		NullCheck(L_0);
		Il2CppChar L_1 = L_0->get__first_0();
		SingleRange_tEE8EA054843A8B8979D082D2CCC8E52A12155624 * L_2 = ___y1;
		NullCheck(L_2);
		Il2CppChar L_3 = L_2->get__first_0();
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		SingleRange_tEE8EA054843A8B8979D082D2CCC8E52A12155624 * L_4 = ___x0;
		NullCheck(L_4);
		Il2CppChar L_5 = L_4->get__first_0();
		SingleRange_tEE8EA054843A8B8979D082D2CCC8E52A12155624 * L_6 = ___y1;
		NullCheck(L_6);
		Il2CppChar L_7 = L_6->get__first_0();
		if ((((int32_t)L_5) > ((int32_t)L_7)))
		{
			goto IL_001e;
		}
	}
	{
		return 0;
	}

IL_001e:
	{
		return 1;
	}

IL_0020:
	{
		return (-1);
	}
}
// System.Void System.Text.RegularExpressions.RegexCharClass/SingleRangeComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleRangeComparer__ctor_mCEFF5ECE77E53783E5B8EAC98A5E194B6C743E73 (SingleRangeComparer_t2D22B185700E925165F9548B3647E0E1FC9DB075 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void System.Uri/MoreInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoreInfo__ctor_mF8515B2BCCB5E7DC008164794946ADE7ADBCD2BD (MoreInfo_t15D42286ECE8DAD0B0FE9CDC1291109300C3E727 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void System.Uri/UriInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriInfo__ctor_m990C9CA368096AFE12B92F3605FAA70EC0C69BB8 (UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void System.UriParser/BuiltInUriParser::.ctor(System.String,System.Int32,System.UriSyntaxFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuiltInUriParser__ctor_m525296A62BB8A30ABA12A9DFE8C20CE22DA9CEAA (BuiltInUriParser_tD002C3439D3683127C216D09E22B0973AB9FDF26 * __this, String_t* ___lwrCaseScheme0, int32_t ___defaultPort1, int32_t ___syntaxFlags2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___syntaxFlags2;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A_il2cpp_TypeInfo_var);
		UriParser__ctor_m9A2C47C1F30EF65ADFBAEB0A569FB972F383825C(__this, ((int32_t)((int32_t)((int32_t)((int32_t)L_0|(int32_t)((int32_t)131072)))|(int32_t)((int32_t)262144))), /*hidden argument*/NULL);
		String_t* L_1 = ___lwrCaseScheme0;
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A *)__this)->set_m_Scheme_6(L_1);
		int32_t L_2 = ___defaultPort1;
		((UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A *)__this)->set_m_Port_5(L_2);
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

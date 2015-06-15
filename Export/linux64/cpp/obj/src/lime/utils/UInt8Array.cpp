#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_lime_utils_UInt8Array
#include <lime/utils/UInt8Array.h>
#endif
namespace lime{
namespace utils{

Void UInt8Array_obj::__construct(Dynamic bufferOrArray,hx::Null< int >  __o_start,Dynamic length)
{
HX_STACK_FRAME("lime.utils.UInt8Array","new",0x64decb63,"lime.utils.UInt8Array.new","lime/utils/UInt8Array.hx",15,0x1e0ae96b)
HX_STACK_THIS(this)
HX_STACK_ARG(bufferOrArray,"bufferOrArray")
HX_STACK_ARG(__o_start,"start")
HX_STACK_ARG(length,"length")
int start = __o_start.Default(0);
{
	HX_STACK_LINE(45)
	Dynamic tmp = bufferOrArray;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::Int >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	if ((tmp1)){
		HX_STACK_LINE(47)
		Float tmp2 = ((Float)(bufferOrArray));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(47)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(47)
		super::__construct(tmp3,null(),null());
		HX_STACK_LINE(49)
		this->length = ((int)(bufferOrArray));
	}
	else{
		HX_STACK_LINE(51)
		Dynamic tmp2 = bufferOrArray;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		if ((tmp3)){
			HX_STACK_LINE(53)
			Array< int > ints = ((Array< int >)(bufferOrArray));		HX_STACK_VAR(ints,"ints");
			HX_STACK_LINE(54)
			bool tmp4 = (length != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(54)
			int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(54)
			if ((tmp4)){
				HX_STACK_LINE(54)
				tmp5 = length;
			}
			else{
				HX_STACK_LINE(54)
				tmp5 = (ints->length - start);
			}
			HX_STACK_LINE(54)
			this->length = tmp5;
			HX_STACK_LINE(56)
			int tmp6 = this->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(56)
			super::__construct(tmp6,null(),null());
			HX_STACK_LINE(62)
			{
				HX_STACK_LINE(62)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(62)
				int tmp7 = this->length;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(62)
				int _g = tmp7;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(62)
				while((true)){
					HX_STACK_LINE(62)
					bool tmp8 = (_g1 < _g);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(62)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(62)
					if ((tmp9)){
						HX_STACK_LINE(62)
						break;
					}
					HX_STACK_LINE(62)
					int tmp10 = (_g1)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(62)
					int i = tmp10;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(65)
					::__hxcpp_memory_set_byte(this->bytes,i,ints->__get((i + start)));
				}
			}
		}
		else{
			HX_STACK_LINE(72)
			Dynamic tmp4 = bufferOrArray;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(72)
			bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::lime::utils::UInt8Array >());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(72)
			if ((tmp5)){
				HX_STACK_LINE(74)
				::lime::utils::UInt8Array ints = ((::lime::utils::UInt8Array)(bufferOrArray));		HX_STACK_VAR(ints,"ints");
				HX_STACK_LINE(75)
				bool tmp6 = (length != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(75)
				int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(75)
				if ((tmp6)){
					HX_STACK_LINE(75)
					tmp7 = length;
				}
				else{
					HX_STACK_LINE(75)
					tmp7 = (ints->length - start);
				}
				HX_STACK_LINE(75)
				this->length = tmp7;
				HX_STACK_LINE(77)
				int tmp8 = this->length;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(77)
				super::__construct(tmp8,null(),null());
				HX_STACK_LINE(83)
				{
					HX_STACK_LINE(83)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(83)
					int tmp9 = this->length;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(83)
					int _g = tmp9;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(83)
					while((true)){
						HX_STACK_LINE(83)
						bool tmp10 = (_g1 < _g);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(83)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(83)
						if ((tmp11)){
							HX_STACK_LINE(83)
							break;
						}
						HX_STACK_LINE(83)
						int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(83)
						int i = tmp12;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(86)
						::__hxcpp_memory_set_byte(this->bytes,i,ints->__get((i + start)));
					}
				}
			}
			else{
				HX_STACK_LINE(95)
				Dynamic tmp6 = bufferOrArray;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(95)
				int tmp7 = start;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(95)
				Dynamic tmp8 = length;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(95)
				super::__construct(tmp6,tmp7,tmp8);
				HX_STACK_LINE(97)
				int tmp9 = this->byteLength;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(97)
				this->length = tmp9;
			}
		}
	}
}
;
	return null();
}

//UInt8Array_obj::~UInt8Array_obj() { }

Dynamic UInt8Array_obj::__CreateEmpty() { return  new UInt8Array_obj; }
hx::ObjectPtr< UInt8Array_obj > UInt8Array_obj::__new(Dynamic bufferOrArray,hx::Null< int >  __o_start,Dynamic length)
{  hx::ObjectPtr< UInt8Array_obj > _result_ = new UInt8Array_obj();
	_result_->__construct(bufferOrArray,__o_start,length);
	return _result_;}

Dynamic UInt8Array_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UInt8Array_obj > _result_ = new UInt8Array_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void UInt8Array_obj::set( Dynamic bufferOrArray,hx::Null< int >  __o_offset){
int offset = __o_offset.Default(0);
	HX_STACK_FRAME("lime.utils.UInt8Array","set",0x64e296a5,"lime.utils.UInt8Array.set","lime/utils/UInt8Array.hx",104,0x1e0ae96b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bufferOrArray,"bufferOrArray")
	HX_STACK_ARG(offset,"offset")
{
		HX_STACK_LINE(106)
		Dynamic tmp = bufferOrArray;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(106)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		if ((tmp1)){
			HX_STACK_LINE(108)
			Array< int > ints = ((Array< int >)(bufferOrArray));		HX_STACK_VAR(ints,"ints");
			HX_STACK_LINE(110)
			{
				HX_STACK_LINE(110)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(110)
				int _g = ints->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(110)
				while((true)){
					HX_STACK_LINE(110)
					bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(110)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(110)
					if ((tmp3)){
						HX_STACK_LINE(110)
						break;
					}
					HX_STACK_LINE(110)
					int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(110)
					int i = tmp4;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(112)
					::__hxcpp_memory_set_byte(this->bytes,((i + offset) + this->byteOffset),ints->__get(i));
				}
			}
		}
		else{
			HX_STACK_LINE(116)
			Dynamic tmp2 = bufferOrArray;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(116)
			bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::lime::utils::UInt8Array >());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(116)
			if ((tmp3)){
				HX_STACK_LINE(118)
				::lime::utils::UInt8Array ints = ((::lime::utils::UInt8Array)(bufferOrArray));		HX_STACK_VAR(ints,"ints");
				HX_STACK_LINE(120)
				{
					HX_STACK_LINE(120)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(120)
					int _g = ints->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(120)
					while((true)){
						HX_STACK_LINE(120)
						bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(120)
						bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(120)
						if ((tmp5)){
							HX_STACK_LINE(120)
							break;
						}
						HX_STACK_LINE(120)
						int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(120)
						int i = tmp6;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(122)
						::__hxcpp_memory_set_byte(this->bytes,((i + offset) + this->byteOffset),ints->__get(i));
					}
				}
			}
			else{
				HX_STACK_LINE(128)
				HX_STACK_DO_THROW(HX_HCSTRING("Invalid input buffer","\x3f","\x39","\x2d","\x2c"));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UInt8Array_obj,set,(void))

::lime::utils::UInt8Array UInt8Array_obj::subarray( int start,Dynamic end){
	HX_STACK_FRAME("lime.utils.UInt8Array","subarray",0xb55a8e36,"lime.utils.UInt8Array.subarray","lime/utils/UInt8Array.hx",135,0x1e0ae96b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(137)
	bool tmp = (end == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(137)
	if ((tmp)){
		HX_STACK_LINE(137)
		tmp1 = this->length;
	}
	else{
		HX_STACK_LINE(137)
		tmp1 = end;
	}
	HX_STACK_LINE(137)
	end = tmp1;
	HX_STACK_LINE(138)
	::lime::utils::ByteArray tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(138)
	int tmp3 = start;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(138)
	int tmp4 = (end - start);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(138)
	::lime::utils::UInt8Array tmp5 = ::lime::utils::UInt8Array_obj::__new(tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(138)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(UInt8Array_obj,subarray,return )

int UInt8Array_obj::__get( int index){
	HX_STACK_FRAME("lime.utils.UInt8Array","__get",0xcbace339,"lime.utils.UInt8Array.__get","lime/utils/UInt8Array.hx",143,0x1e0ae96b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(143)
	int tmp = ::__hxcpp_memory_get_byte(this->bytes,(index + this->byteOffset));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(143)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(143)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(UInt8Array_obj,__get,return )

Void UInt8Array_obj::__set( int index,int value){
{
		HX_STACK_FRAME("lime.utils.UInt8Array","__set",0xcbb5fe45,"lime.utils.UInt8Array.__set","lime/utils/UInt8Array.hx",144,0x1e0ae96b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(144)
		::__hxcpp_memory_set_byte(this->bytes,(index + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UInt8Array_obj,__set,(void))

int UInt8Array_obj::BYTES_PER_ELEMENT;


UInt8Array_obj::UInt8Array_obj()
{
}

Dynamic UInt8Array_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"__get") ) { return __get_dyn(); }
		if (HX_FIELD_EQ(inName,"__set") ) { return __set_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subarray") ) { return subarray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UInt8Array_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool UInt8Array_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void UInt8Array_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(UInt8Array_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &UInt8Array_obj::BYTES_PER_ELEMENT,HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("subarray","\x19","\x54","\x81","\x07"),
	HX_HCSTRING("__get","\x76","\xe1","\x2a","\xf2"),
	HX_HCSTRING("__set","\x82","\xfc","\x33","\xf2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UInt8Array_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UInt8Array_obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UInt8Array_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UInt8Array_obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#endif

hx::Class UInt8Array_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc"),
	::String(null()) };

void UInt8Array_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.UInt8Array","\xf1","\xdd","\x5e","\xed");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &UInt8Array_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< UInt8Array_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void UInt8Array_obj::__boot()
{
	BYTES_PER_ELEMENT= (int)1;
}

} // end namespace lime
} // end namespace utils

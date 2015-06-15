#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_format_PNG
#include <lime/graphics/format/PNG.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
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
namespace lime{
namespace graphics{
namespace format{

Void PNG_obj::__construct()
{
	return null();
}

//PNG_obj::~PNG_obj() { }

Dynamic PNG_obj::__CreateEmpty() { return  new PNG_obj; }
hx::ObjectPtr< PNG_obj > PNG_obj::__new()
{  hx::ObjectPtr< PNG_obj > _result_ = new PNG_obj();
	_result_->__construct();
	return _result_;}

Dynamic PNG_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PNG_obj > _result_ = new PNG_obj();
	_result_->__construct();
	return _result_;}

::lime::utils::ByteArray PNG_obj::encode( ::lime::graphics::Image image){
	HX_STACK_FRAME("lime.graphics.format.PNG","encode",0x30ec4988,"lime.graphics.format.PNG.encode","lime/graphics/format/PNG.hx",20,0x0cfd2463)
	HX_STACK_ARG(image,"image")
	HX_STACK_LINE(26)
	bool tmp = ::lime::_system::System_obj::disableCFFI;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	if ((tmp1)){
		HX_STACK_LINE(28)
		::lime::graphics::ImageBuffer tmp2 = image->buffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(28)
		::lime::utils::ByteArray tmp3 = ::lime::graphics::format::PNG_obj::lime_image_encode(tmp2,(int)0,(int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		return tmp3;
	}
	HX_STACK_LINE(80)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PNG_obj,encode,return )

Dynamic PNG_obj::lime_image_encode;


PNG_obj::PNG_obj()
{
}

bool PNG_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { outValue = encode_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lime_image_encode") ) { outValue = lime_image_encode; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &PNG_obj::lime_image_encode,HX_HCSTRING("lime_image_encode","\x64","\x48","\x63","\x9c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PNG_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PNG_obj::lime_image_encode,"lime_image_encode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PNG_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PNG_obj::lime_image_encode,"lime_image_encode");
};

#endif

hx::Class PNG_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	HX_HCSTRING("lime_image_encode","\x64","\x48","\x63","\x9c"),
	::String(null()) };

void PNG_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.format.PNG","\xbc","\x8e","\xac","\x4b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PNG_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< PNG_obj >;
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

void PNG_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/graphics/format/PNG.hx",93,0x0cfd2463)
		{
			HX_STACK_LINE(93)
			Dynamic tmp = ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_encode","\x64","\x48","\x63","\x9c"),(int)3,null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(93)
			return tmp;
		}
		return null();
	}
};
	lime_image_encode= _Function_0_1::Block();
}

} // end namespace lime
} // end namespace graphics
} // end namespace format

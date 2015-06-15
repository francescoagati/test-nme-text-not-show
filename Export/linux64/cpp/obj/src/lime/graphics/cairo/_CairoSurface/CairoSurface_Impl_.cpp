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
#ifndef INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_
#include <lime/graphics/cairo/_CairoSurface/CairoSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
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
namespace graphics{
namespace cairo{
namespace _CairoSurface{

Void CairoSurface_Impl__obj::__construct()
{
	return null();
}

//CairoSurface_Impl__obj::~CairoSurface_Impl__obj() { }

Dynamic CairoSurface_Impl__obj::__CreateEmpty() { return  new CairoSurface_Impl__obj; }
hx::ObjectPtr< CairoSurface_Impl__obj > CairoSurface_Impl__obj::__new()
{  hx::ObjectPtr< CairoSurface_Impl__obj > _result_ = new CairoSurface_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoSurface_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoSurface_Impl__obj > _result_ = new CairoSurface_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoSurface_Impl__obj::_new( int format,int width,int height){
	HX_STACK_FRAME("lime.graphics.cairo._CairoSurface.CairoSurface_Impl_","_new",0x4072cdf0,"lime.graphics.cairo._CairoSurface.CairoSurface_Impl_._new","lime/graphics/cairo/CairoSurface.hx",17,0x58ce1be8)
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(17)
	Dynamic this1;		HX_STACK_VAR(this1,"this1");
	HX_STACK_LINE(20)
	int tmp = format;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	int tmp1 = width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	int tmp2 = height;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	Dynamic tmp3 = ::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::lime_cairo_image_surface_create(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(20)
	this1 = tmp3;
	HX_STACK_LINE(17)
	Dynamic tmp4 = this1;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(17)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoSurface_Impl__obj,_new,return )

Dynamic CairoSurface_Impl__obj::createForData( Dynamic data,int format,int width,int height,int stride){
	HX_STACK_FRAME("lime.graphics.cairo._CairoSurface.CairoSurface_Impl_","createForData",0x586617c8,"lime.graphics.cairo._CairoSurface.CairoSurface_Impl_.createForData","lime/graphics/cairo/CairoSurface.hx",28,0x58ce1be8)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(stride,"stride")
	HX_STACK_LINE(31)
	Dynamic tmp = data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	int tmp1 = format;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	int tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(31)
	int tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(31)
	int tmp4 = stride;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(31)
	Dynamic tmp5 = ::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::lime_cairo_image_surface_create_for_data(tmp,tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(31)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(CairoSurface_Impl__obj,createForData,return )

Void CairoSurface_Impl__obj::destroy( Dynamic this1){
{
		HX_STACK_FRAME("lime.graphics.cairo._CairoSurface.CairoSurface_Impl_","destroy",0x76daf7cb,"lime.graphics.cairo._CairoSurface.CairoSurface_Impl_.destroy","lime/graphics/cairo/CairoSurface.hx",39,0x58ce1be8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(42)
		Dynamic tmp = this1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::lime_cairo_surface_destroy(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoSurface_Impl__obj,destroy,(void))

Void CairoSurface_Impl__obj::flush( Dynamic this1){
{
		HX_STACK_FRAME("lime.graphics.cairo._CairoSurface.CairoSurface_Impl_","flush",0x2a892755,"lime.graphics.cairo._CairoSurface.CairoSurface_Impl_.flush","lime/graphics/cairo/CairoSurface.hx",48,0x58ce1be8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(51)
		Dynamic tmp = this1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::lime_cairo_surface_flush(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoSurface_Impl__obj,flush,(void))

Dynamic CairoSurface_Impl__obj::fromImage( ::lime::graphics::Image image){
	HX_STACK_FRAME("lime.graphics.cairo._CairoSurface.CairoSurface_Impl_","fromImage",0x9b2beaa2,"lime.graphics.cairo._CairoSurface.CairoSurface_Impl_.fromImage","lime/graphics/cairo/CairoSurface.hx",57,0x58ce1be8)
	HX_STACK_ARG(image,"image")
	HX_STACK_LINE(60)
	::lime::utils::UInt8Array tmp = image->get_data();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	Dynamic tmp1 = tmp->buffer->__getNativePointer();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	int tmp2 = image->width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(60)
	int tmp3 = image->height;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(60)
	int tmp4 = image->buffer->get_stride();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(60)
	Dynamic tmp5 = ::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::createForData(tmp1,(int)0,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(60)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoSurface_Impl__obj,fromImage,return )

int CairoSurface_Impl__obj::get_height( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoSurface.CairoSurface_Impl_","get_height",0xdc3e857f,"lime.graphics.cairo._CairoSurface.CairoSurface_Impl_.get_height","lime/graphics/cairo/CairoSurface.hx",75,0x58ce1be8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(78)
	Dynamic tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	int tmp1 = ::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::lime_cairo_image_surface_get_height(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(78)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoSurface_Impl__obj,get_height,return )

int CairoSurface_Impl__obj::get_width( Dynamic this1){
	HX_STACK_FRAME("lime.graphics.cairo._CairoSurface.CairoSurface_Impl_","get_width",0x3745f36e,"lime.graphics.cairo._CairoSurface.CairoSurface_Impl_.get_width","lime/graphics/cairo/CairoSurface.hx",86,0x58ce1be8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(89)
	Dynamic tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	int tmp1 = ::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::lime_cairo_image_surface_get_width(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(89)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoSurface_Impl__obj,get_width,return )

Dynamic CairoSurface_Impl__obj::lime_cairo_image_surface_create;

Dynamic CairoSurface_Impl__obj::lime_cairo_image_surface_create_for_data;

Dynamic CairoSurface_Impl__obj::lime_cairo_image_surface_get_height;

Dynamic CairoSurface_Impl__obj::lime_cairo_image_surface_get_width;

Dynamic CairoSurface_Impl__obj::lime_cairo_surface_destroy;

Dynamic CairoSurface_Impl__obj::lime_cairo_surface_flush;

Dynamic CairoSurface_Impl__obj::lime_buffer_get_native_pointer;


CairoSurface_Impl__obj::CairoSurface_Impl__obj()
{
}

bool CairoSurface_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flush") ) { outValue = flush_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { outValue = destroy_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromImage") ) { outValue = fromImage_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_width") ) { outValue = get_width_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { outValue = get_height_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createForData") ) { outValue = createForData_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoSurface_Impl__obj::lime_cairo_image_surface_create,HX_HCSTRING("lime_cairo_image_surface_create","\x33","\x6e","\xfc","\xce")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoSurface_Impl__obj::lime_cairo_image_surface_create_for_data,HX_HCSTRING("lime_cairo_image_surface_create_for_data","\x2c","\x35","\x7d","\x63")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoSurface_Impl__obj::lime_cairo_image_surface_get_height,HX_HCSTRING("lime_cairo_image_surface_get_height","\x67","\xe6","\x59","\x39")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoSurface_Impl__obj::lime_cairo_image_surface_get_width,HX_HCSTRING("lime_cairo_image_surface_get_width","\x86","\x27","\x18","\x52")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoSurface_Impl__obj::lime_cairo_surface_destroy,HX_HCSTRING("lime_cairo_surface_destroy","\xc7","\xcc","\xe1","\x3a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoSurface_Impl__obj::lime_cairo_surface_flush,HX_HCSTRING("lime_cairo_surface_flush","\x51","\x85","\xbf","\xed")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoSurface_Impl__obj::lime_buffer_get_native_pointer,HX_HCSTRING("lime_buffer_get_native_pointer","\xd3","\xc5","\x0f","\x9a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoSurface_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoSurface_Impl__obj::lime_cairo_image_surface_create,"lime_cairo_image_surface_create");
	HX_MARK_MEMBER_NAME(CairoSurface_Impl__obj::lime_cairo_image_surface_create_for_data,"lime_cairo_image_surface_create_for_data");
	HX_MARK_MEMBER_NAME(CairoSurface_Impl__obj::lime_cairo_image_surface_get_height,"lime_cairo_image_surface_get_height");
	HX_MARK_MEMBER_NAME(CairoSurface_Impl__obj::lime_cairo_image_surface_get_width,"lime_cairo_image_surface_get_width");
	HX_MARK_MEMBER_NAME(CairoSurface_Impl__obj::lime_cairo_surface_destroy,"lime_cairo_surface_destroy");
	HX_MARK_MEMBER_NAME(CairoSurface_Impl__obj::lime_cairo_surface_flush,"lime_cairo_surface_flush");
	HX_MARK_MEMBER_NAME(CairoSurface_Impl__obj::lime_buffer_get_native_pointer,"lime_buffer_get_native_pointer");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoSurface_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoSurface_Impl__obj::lime_cairo_image_surface_create,"lime_cairo_image_surface_create");
	HX_VISIT_MEMBER_NAME(CairoSurface_Impl__obj::lime_cairo_image_surface_create_for_data,"lime_cairo_image_surface_create_for_data");
	HX_VISIT_MEMBER_NAME(CairoSurface_Impl__obj::lime_cairo_image_surface_get_height,"lime_cairo_image_surface_get_height");
	HX_VISIT_MEMBER_NAME(CairoSurface_Impl__obj::lime_cairo_image_surface_get_width,"lime_cairo_image_surface_get_width");
	HX_VISIT_MEMBER_NAME(CairoSurface_Impl__obj::lime_cairo_surface_destroy,"lime_cairo_surface_destroy");
	HX_VISIT_MEMBER_NAME(CairoSurface_Impl__obj::lime_cairo_surface_flush,"lime_cairo_surface_flush");
	HX_VISIT_MEMBER_NAME(CairoSurface_Impl__obj::lime_buffer_get_native_pointer,"lime_buffer_get_native_pointer");
};

#endif

hx::Class CairoSurface_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("createForData","\x37","\xda","\x57","\xac"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("flush","\xc4","\x62","\x9b","\x02"),
	HX_HCSTRING("fromImage","\x91","\x09","\xf2","\x71"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("lime_cairo_image_surface_create","\x33","\x6e","\xfc","\xce"),
	HX_HCSTRING("lime_cairo_image_surface_create_for_data","\x2c","\x35","\x7d","\x63"),
	HX_HCSTRING("lime_cairo_image_surface_get_height","\x67","\xe6","\x59","\x39"),
	HX_HCSTRING("lime_cairo_image_surface_get_width","\x86","\x27","\x18","\x52"),
	HX_HCSTRING("lime_cairo_surface_destroy","\xc7","\xcc","\xe1","\x3a"),
	HX_HCSTRING("lime_cairo_surface_flush","\x51","\x85","\xbf","\xed"),
	HX_HCSTRING("lime_buffer_get_native_pointer","\xd3","\xc5","\x0f","\x9a"),
	::String(null()) };

void CairoSurface_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.cairo._CairoSurface.CairoSurface_Impl_","\x3f","\x72","\x19","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoSurface_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoSurface_Impl__obj >;
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

void CairoSurface_Impl__obj::__boot()
{
	lime_cairo_image_surface_create= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_image_surface_create","\x33","\x6e","\xfc","\xce"),(int)3,null());
	lime_cairo_image_surface_create_for_data= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_image_surface_create_for_data","\x2c","\x35","\x7d","\x63"),(int)5,null());
	lime_cairo_image_surface_get_height= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_image_surface_get_height","\x67","\xe6","\x59","\x39"),(int)1,null());
	lime_cairo_image_surface_get_width= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_image_surface_get_width","\x86","\x27","\x18","\x52"),(int)1,null());
	lime_cairo_surface_destroy= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_surface_destroy","\xc7","\xcc","\xe1","\x3a"),(int)1,null());
	lime_cairo_surface_flush= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_cairo_surface_flush","\x51","\x85","\xbf","\xed"),(int)1,null());
	lime_buffer_get_native_pointer= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_buffer_get_native_pointer","\xd3","\xc5","\x0f","\x9a"),(int)1,null());
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoSurface

#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
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

Void ImageBuffer_obj::__construct(::lime::utils::UInt8Array data,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_bitsPerPixel,Dynamic format)
{
HX_STACK_FRAME("lime.graphics.ImageBuffer","new",0xb261c9e3,"lime.graphics.ImageBuffer.new","lime/graphics/ImageBuffer.hx",44,0x6475c2cd)
HX_STACK_THIS(this)
HX_STACK_ARG(data,"data")
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
HX_STACK_ARG(__o_bitsPerPixel,"bitsPerPixel")
HX_STACK_ARG(format,"format")
int width = __o_width.Default(0);
int height = __o_height.Default(0);
int bitsPerPixel = __o_bitsPerPixel.Default(4);
{
	HX_STACK_LINE(46)
	this->data = data;
	HX_STACK_LINE(47)
	this->width = width;
	HX_STACK_LINE(48)
	this->height = height;
	HX_STACK_LINE(49)
	this->bitsPerPixel = bitsPerPixel;
	HX_STACK_LINE(50)
	bool tmp = (format == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	if ((tmp)){
		HX_STACK_LINE(50)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(50)
		tmp1 = format;
	}
	HX_STACK_LINE(50)
	this->format = tmp1;
	HX_STACK_LINE(51)
	this->transparent = true;
}
;
	return null();
}

//ImageBuffer_obj::~ImageBuffer_obj() { }

Dynamic ImageBuffer_obj::__CreateEmpty() { return  new ImageBuffer_obj; }
hx::ObjectPtr< ImageBuffer_obj > ImageBuffer_obj::__new(::lime::utils::UInt8Array data,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_bitsPerPixel,Dynamic format)
{  hx::ObjectPtr< ImageBuffer_obj > _result_ = new ImageBuffer_obj();
	_result_->__construct(data,__o_width,__o_height,__o_bitsPerPixel,format);
	return _result_;}

Dynamic ImageBuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ImageBuffer_obj > _result_ = new ImageBuffer_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

::lime::graphics::ImageBuffer ImageBuffer_obj::clone( ){
	HX_STACK_FRAME("lime.graphics.ImageBuffer","clone",0x1504b3a0,"lime.graphics.ImageBuffer.clone","lime/graphics/ImageBuffer.hx",56,0x6475c2cd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(58)
	::lime::utils::UInt8Array tmp = this->data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	int tmp1 = this->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	int tmp2 = this->height;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	int tmp3 = this->bitsPerPixel;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(58)
	::lime::graphics::ImageBuffer tmp4 = ::lime::graphics::ImageBuffer_obj::__new(tmp,tmp1,tmp2,tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(58)
	::lime::graphics::ImageBuffer buffer = tmp4;		HX_STACK_VAR(buffer,"buffer");
	HX_STACK_LINE(102)
	::lime::utils::UInt8Array tmp5 = this->data;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(102)
	bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(102)
	if ((tmp6)){
		HX_STACK_LINE(104)
		::lime::utils::UInt8Array tmp7 = this->data;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(104)
		int tmp8 = tmp7->byteLength;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(104)
		::haxe::io::Bytes tmp9 = ::haxe::io::Bytes_obj::alloc(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(104)
		::haxe::io::Bytes bytes = tmp9;		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(105)
		::lime::utils::ByteArray tmp10 = buffer->data->buffer;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(105)
		::lime::utils::UInt8Array tmp11 = this->data;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(105)
		int tmp12 = tmp11->byteLength;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(105)
		bytes->blit((int)0,tmp10,(int)0,tmp12);
		HX_STACK_LINE(106)
		::haxe::io::Bytes tmp13 = bytes;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(106)
		::lime::utils::ByteArray tmp14 = ::lime::utils::ByteArray_obj::fromBytes(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(106)
		::lime::utils::ByteArray byteArray = tmp14;		HX_STACK_VAR(byteArray,"byteArray");
		HX_STACK_LINE(107)
		::lime::utils::UInt8Array tmp15 = ::lime::utils::UInt8Array_obj::__new(byteArray,null(),null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(107)
		buffer->data = tmp15;
	}
	HX_STACK_LINE(112)
	bool tmp7 = this->premultiplied;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(112)
	buffer->premultiplied = tmp7;
	HX_STACK_LINE(113)
	bool tmp8 = this->transparent;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(113)
	buffer->transparent = tmp8;
	HX_STACK_LINE(114)
	::lime::graphics::ImageBuffer tmp9 = buffer;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(114)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC0(ImageBuffer_obj,clone,return )

Dynamic ImageBuffer_obj::get_src( ){
	HX_STACK_FRAME("lime.graphics.ImageBuffer","get_src",0x9748e67e,"lime.graphics.ImageBuffer.get_src","lime/graphics/ImageBuffer.hx",126,0x6475c2cd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(139)
	Dynamic tmp = this->__srcCustom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(139)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ImageBuffer_obj,get_src,return )

Dynamic ImageBuffer_obj::set_src( Dynamic value){
	HX_STACK_FRAME("lime.graphics.ImageBuffer","set_src",0x8a4a778a,"lime.graphics.ImageBuffer.set_src","lime/graphics/ImageBuffer.hx",146,0x6475c2cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(167)
	this->__srcCustom = value;
	HX_STACK_LINE(171)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(171)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ImageBuffer_obj,set_src,return )

int ImageBuffer_obj::get_stride( ){
	HX_STACK_FRAME("lime.graphics.ImageBuffer","get_stride",0xb11b1cbf,"lime.graphics.ImageBuffer.get_stride","lime/graphics/ImageBuffer.hx",176,0x6475c2cd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(178)
	int tmp = this->width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(178)
	int tmp1 = (tmp * (int)4);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(178)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ImageBuffer_obj,get_stride,return )


ImageBuffer_obj::ImageBuffer_obj()
{
}

void ImageBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ImageBuffer);
	HX_MARK_MEMBER_NAME(bitsPerPixel,"bitsPerPixel");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(premultiplied,"premultiplied");
	HX_MARK_MEMBER_NAME(transparent,"transparent");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(__srcBitmapData,"__srcBitmapData");
	HX_MARK_MEMBER_NAME(__srcCanvas,"__srcCanvas");
	HX_MARK_MEMBER_NAME(__srcContext,"__srcContext");
	HX_MARK_MEMBER_NAME(__srcCustom,"__srcCustom");
	HX_MARK_MEMBER_NAME(__srcImage,"__srcImage");
	HX_MARK_MEMBER_NAME(__srcImageData,"__srcImageData");
	HX_MARK_END_CLASS();
}

void ImageBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitsPerPixel,"bitsPerPixel");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(premultiplied,"premultiplied");
	HX_VISIT_MEMBER_NAME(transparent,"transparent");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(__srcBitmapData,"__srcBitmapData");
	HX_VISIT_MEMBER_NAME(__srcCanvas,"__srcCanvas");
	HX_VISIT_MEMBER_NAME(__srcContext,"__srcContext");
	HX_VISIT_MEMBER_NAME(__srcCustom,"__srcCustom");
	HX_VISIT_MEMBER_NAME(__srcImage,"__srcImage");
	HX_VISIT_MEMBER_NAME(__srcImageData,"__srcImageData");
}

Dynamic ImageBuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { if (inCallProp == hx::paccAlways) return get_src(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return format; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"stride") ) { if (inCallProp == hx::paccAlways) return get_stride(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_src") ) { return get_src_dyn(); }
		if (HX_FIELD_EQ(inName,"set_src") ) { return set_src_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__srcImage") ) { return __srcImage; }
		if (HX_FIELD_EQ(inName,"get_stride") ) { return get_stride_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { return transparent; }
		if (HX_FIELD_EQ(inName,"__srcCanvas") ) { return __srcCanvas; }
		if (HX_FIELD_EQ(inName,"__srcCustom") ) { return __srcCustom; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitsPerPixel") ) { return bitsPerPixel; }
		if (HX_FIELD_EQ(inName,"__srcContext") ) { return __srcContext; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"premultiplied") ) { return premultiplied; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__srcImageData") ) { return __srcImageData; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__srcBitmapData") ) { return __srcBitmapData; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ImageBuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { if (inCallProp == hx::paccAlways) return set_src(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::lime::utils::UInt8Array >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__srcImage") ) { __srcImage=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { transparent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__srcCanvas") ) { __srcCanvas=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__srcCustom") ) { __srcCustom=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitsPerPixel") ) { bitsPerPixel=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__srcContext") ) { __srcContext=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"premultiplied") ) { premultiplied=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__srcImageData") ) { __srcImageData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__srcBitmapData") ) { __srcBitmapData=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ImageBuffer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ImageBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bitsPerPixel","\x8f","\x4d","\xee","\x1c"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("premultiplied","\x56","\xf1","\x4e","\xa4"));
	outFields->push(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00"));
	outFields->push(HX_HCSTRING("stride","\x19","\x20","\x30","\x11"));
	outFields->push(HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("__srcBitmapData","\x9d","\x9e","\xde","\x24"));
	outFields->push(HX_HCSTRING("__srcCanvas","\xbc","\xfb","\xb8","\x6a"));
	outFields->push(HX_HCSTRING("__srcContext","\x8b","\xf6","\xd2","\x8e"));
	outFields->push(HX_HCSTRING("__srcCustom","\x95","\x2e","\x09","\xf2"));
	outFields->push(HX_HCSTRING("__srcImage","\xf7","\xe0","\x5b","\xbf"));
	outFields->push(HX_HCSTRING("__srcImageData","\xc1","\xaa","\x01","\x30"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ImageBuffer_obj,bitsPerPixel),HX_HCSTRING("bitsPerPixel","\x8f","\x4d","\xee","\x1c")},
	{hx::fsObject /*::lime::utils::UInt8Array*/ ,(int)offsetof(ImageBuffer_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsInt,(int)offsetof(ImageBuffer_obj,format),HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd")},
	{hx::fsInt,(int)offsetof(ImageBuffer_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsBool,(int)offsetof(ImageBuffer_obj,premultiplied),HX_HCSTRING("premultiplied","\x56","\xf1","\x4e","\xa4")},
	{hx::fsBool,(int)offsetof(ImageBuffer_obj,transparent),HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22")},
	{hx::fsInt,(int)offsetof(ImageBuffer_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageBuffer_obj,__srcBitmapData),HX_HCSTRING("__srcBitmapData","\x9d","\x9e","\xde","\x24")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageBuffer_obj,__srcCanvas),HX_HCSTRING("__srcCanvas","\xbc","\xfb","\xb8","\x6a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageBuffer_obj,__srcContext),HX_HCSTRING("__srcContext","\x8b","\xf6","\xd2","\x8e")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageBuffer_obj,__srcCustom),HX_HCSTRING("__srcCustom","\x95","\x2e","\x09","\xf2")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageBuffer_obj,__srcImage),HX_HCSTRING("__srcImage","\xf7","\xe0","\x5b","\xbf")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageBuffer_obj,__srcImageData),HX_HCSTRING("__srcImageData","\xc1","\xaa","\x01","\x30")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bitsPerPixel","\x8f","\x4d","\xee","\x1c"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("premultiplied","\x56","\xf1","\x4e","\xa4"),
	HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("__srcBitmapData","\x9d","\x9e","\xde","\x24"),
	HX_HCSTRING("__srcCanvas","\xbc","\xfb","\xb8","\x6a"),
	HX_HCSTRING("__srcContext","\x8b","\xf6","\xd2","\x8e"),
	HX_HCSTRING("__srcCustom","\x95","\x2e","\x09","\xf2"),
	HX_HCSTRING("__srcImage","\xf7","\xe0","\x5b","\xbf"),
	HX_HCSTRING("__srcImageData","\xc1","\xaa","\x01","\x30"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("get_src","\x7b","\x6f","\xcc","\x26"),
	HX_HCSTRING("set_src","\x87","\x00","\xce","\x19"),
	HX_HCSTRING("get_stride","\xe2","\x8f","\xb7","\x01"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageBuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageBuffer_obj::__mClass,"__mClass");
};

#endif

hx::Class ImageBuffer_obj::__mClass;

void ImageBuffer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.ImageBuffer","\x71","\x9c","\xe0","\x10");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ImageBuffer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ImageBuffer_obj >;
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

} // end namespace lime
} // end namespace graphics

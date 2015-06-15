#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
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
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_Texture
#include <openfl/display3D/textures/Texture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace openfl{
namespace display3D{
namespace textures{

Void Texture_obj::__construct(::lime::graphics::opengl::GLTexture glTexture,bool optimize,int width,int height)
{
HX_STACK_FRAME("openfl.display3D.textures.Texture","new",0xaee720f0,"openfl.display3D.textures.Texture.new","openfl/display3D/textures/Texture.hx",21,0x3ee19dbf)
HX_STACK_THIS(this)
HX_STACK_ARG(glTexture,"glTexture")
HX_STACK_ARG(optimize,"optimize")
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
{
	HX_STACK_LINE(23)
	this->optimizeForRenderToTexture = optimize;
	HX_STACK_LINE(29)
	::lime::graphics::opengl::GLTexture tmp = glTexture;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	int tmp1 = width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	int tmp2 = height;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	super::__construct(tmp,tmp1,tmp2);
	HX_STACK_LINE(32)
	bool tmp3 = this->optimizeForRenderToTexture;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(32)
	if ((tmp3)){
		HX_STACK_LINE(34)
		::lime::graphics::opengl::GL_obj::lime_gl_pixel_storei((int)37440,(int)1);
		HX_STACK_LINE(35)
		::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10240,(int)9728);
		HX_STACK_LINE(36)
		::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,(int)9728);
		HX_STACK_LINE(37)
		::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10242,(int)33071);
		HX_STACK_LINE(38)
		::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10243,(int)33071);
	}
}
;
	return null();
}

//Texture_obj::~Texture_obj() { }

Dynamic Texture_obj::__CreateEmpty() { return  new Texture_obj; }
hx::ObjectPtr< Texture_obj > Texture_obj::__new(::lime::graphics::opengl::GLTexture glTexture,bool optimize,int width,int height)
{  hx::ObjectPtr< Texture_obj > _result_ = new Texture_obj();
	_result_->__construct(glTexture,optimize,width,height);
	return _result_;}

Dynamic Texture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Texture_obj > _result_ = new Texture_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void Texture_obj::uploadCompressedTextureFromByteArray( ::lime::utils::ByteArray data,int byteArrayOffset,hx::Null< bool >  __o_async){
bool async = __o_async.Default(false);
	HX_STACK_FRAME("openfl.display3D.textures.Texture","uploadCompressedTextureFromByteArray",0xe2c5b53e,"openfl.display3D.textures.Texture.uploadCompressedTextureFromByteArray","openfl/display3D/textures/Texture.hx",46,0x3ee19dbf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
	HX_STACK_ARG(async,"async")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadCompressedTextureFromByteArray,(void))

Void Texture_obj::uploadFromBitmapData( ::openfl::display::BitmapData bitmapData,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
	HX_STACK_FRAME("openfl.display3D.textures.Texture","uploadFromBitmapData",0x5c4e9314,"openfl.display3D.textures.Texture.uploadFromBitmapData","openfl/display3D/textures/Texture.hx",53,0x3ee19dbf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_ARG(miplevel,"miplevel")
{
		HX_STACK_LINE(66)
		::lime::graphics::Image image = bitmapData->__image;		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(68)
		bool tmp = image->get_premultiplied();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(68)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(68)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(68)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(68)
		if ((tmp2)){
			HX_STACK_LINE(68)
			tmp3 = image->get_transparent();
		}
		else{
			HX_STACK_LINE(68)
			tmp3 = false;
		}
		HX_STACK_LINE(68)
		if ((tmp3)){
			HX_STACK_LINE(70)
			::lime::graphics::Image tmp4 = image->clone();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(70)
			image = tmp4;
			HX_STACK_LINE(71)
			image->set_premultiplied(true);
		}
		HX_STACK_LINE(75)
		this->width = image->width;
		HX_STACK_LINE(76)
		this->height = image->height;
		HX_STACK_LINE(78)
		::lime::utils::UInt8Array tmp4 = image->get_data();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(78)
		int tmp5 = miplevel;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(78)
		this->uploadFromUInt8Array(tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,uploadFromBitmapData,(void))

Void Texture_obj::uploadFromByteArray( ::lime::utils::ByteArray data,int byteArrayOffset,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
	HX_STACK_FRAME("openfl.display3D.textures.Texture","uploadFromByteArray",0x0d748876,"openfl.display3D.textures.Texture.uploadFromByteArray","openfl/display3D/textures/Texture.hx",85,0x3ee19dbf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
	HX_STACK_ARG(miplevel,"miplevel")
{
		HX_STACK_LINE(100)
		::lime::utils::UInt8Array tmp = ::lime::utils::UInt8Array_obj::__new(data,null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(100)
		::lime::utils::UInt8Array source = tmp;		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(103)
		::lime::utils::UInt8Array tmp1 = source;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(103)
		int tmp2 = miplevel;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(103)
		this->uploadFromUInt8Array(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadFromByteArray,(void))

Void Texture_obj::uploadFromUInt8Array( ::lime::utils::UInt8Array data,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
	HX_STACK_FRAME("openfl.display3D.textures.Texture","uploadFromUInt8Array",0xb98d8296,"openfl.display3D.textures.Texture.uploadFromUInt8Array","openfl/display3D/textures/Texture.hx",108,0x3ee19dbf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(miplevel,"miplevel")
{
		HX_STACK_LINE(110)
		{
			HX_STACK_LINE(110)
			::lime::graphics::opengl::GLTexture tmp = this->glTexture;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(110)
			::lime::graphics::opengl::GLTexture texture = tmp;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(110)
			bool tmp1 = (texture == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(110)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(110)
			if ((tmp1)){
				HX_STACK_LINE(110)
				tmp2 = (int)0;
			}
			else{
				HX_STACK_LINE(110)
				tmp2 = texture->id;
			}
			HX_STACK_LINE(110)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_texture((int)3553,tmp2);
		}
		HX_STACK_LINE(112)
		bool tmp = this->optimizeForRenderToTexture;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(112)
		if ((tmp)){
			HX_STACK_LINE(114)
			::lime::graphics::opengl::GL_obj::lime_gl_pixel_storei((int)37440,(int)1);
			HX_STACK_LINE(115)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10240,(int)9728);
			HX_STACK_LINE(116)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,(int)9728);
			HX_STACK_LINE(117)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10242,(int)33071);
			HX_STACK_LINE(118)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10243,(int)33071);
		}
		HX_STACK_LINE(122)
		{
			HX_STACK_LINE(122)
			int tmp1 = miplevel;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(122)
			int tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(122)
			int tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(122)
			bool tmp4 = (data == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(122)
			::lime::utils::ByteArray tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(122)
			if ((tmp4)){
				HX_STACK_LINE(122)
				tmp5 = null();
			}
			else{
				HX_STACK_LINE(122)
				tmp5 = data->getByteBuffer();
			}
			HX_STACK_LINE(122)
			bool tmp6 = (data == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(122)
			Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(122)
			if ((tmp6)){
				HX_STACK_LINE(122)
				tmp7 = null();
			}
			else{
				HX_STACK_LINE(122)
				tmp7 = data->getStart();
			}
			HX_STACK_LINE(122)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_image_2d((int)3553,tmp1,(int)6408,tmp2,tmp3,(int)0,(int)6408,(int)5121,tmp5,tmp7);
		}
		HX_STACK_LINE(123)
		{
			HX_STACK_LINE(123)
			bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(123)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(123)
			if ((tmp1)){
				HX_STACK_LINE(123)
				tmp2 = (int)0;
			}
			else{
				HX_STACK_LINE(123)
				tmp2 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
			}
			HX_STACK_LINE(123)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_texture((int)3553,tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,uploadFromUInt8Array,(void))


Texture_obj::Texture_obj()
{
}

Dynamic Texture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return uploadFromByteArray_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromBitmapData") ) { return uploadFromBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"uploadFromUInt8Array") ) { return uploadFromUInt8Array_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"optimizeForRenderToTexture") ) { return optimizeForRenderToTexture; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"uploadCompressedTextureFromByteArray") ) { return uploadCompressedTextureFromByteArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Texture_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 26:
		if (HX_FIELD_EQ(inName,"optimizeForRenderToTexture") ) { optimizeForRenderToTexture=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Texture_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Texture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("optimizeForRenderToTexture","\x9e","\x19","\x9d","\x60"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Texture_obj,optimizeForRenderToTexture),HX_HCSTRING("optimizeForRenderToTexture","\x9e","\x19","\x9d","\x60")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("optimizeForRenderToTexture","\x9e","\x19","\x9d","\x60"),
	HX_HCSTRING("uploadCompressedTextureFromByteArray","\xce","\xc7","\x86","\xc5"),
	HX_HCSTRING("uploadFromBitmapData","\xa4","\x85","\x65","\x0d"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	HX_HCSTRING("uploadFromUInt8Array","\x26","\x75","\xa4","\x6a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
};

#endif

hx::Class Texture_obj::__mClass;

void Texture_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.textures.Texture","\xfe","\x28","\x30","\xf1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Texture_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Texture_obj >;
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

} // end namespace openfl
} // end namespace display3D
} // end namespace textures

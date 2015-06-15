#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLBuffer
#include <lime/graphics/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_Float32Array
#include <lime/utils/Float32Array.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_lime_utils_UInt16Array
#include <lime/utils/UInt16Array.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLGraphicsData
#include <openfl/_internal/renderer/opengl/utils/GLGraphicsData.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void GLGraphicsData_obj::__construct(::lime::graphics::GLRenderContext gl)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLGraphicsData","new",0xf5d27d4d,"openfl._internal.renderer.opengl.utils.GLGraphicsData.new","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1590,0xd295150c)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
{
	HX_STACK_LINE(1604)
	this->indices = Array_obj< int >::__new();
	HX_STACK_LINE(1600)
	this->data = Array_obj< Float >::__new();
	HX_STACK_LINE(1598)
	this->lastIndex = (int)0;
	HX_STACK_LINE(1597)
	this->mode = (int)0;
	HX_STACK_LINE(1596)
	this->dirty = true;
	HX_STACK_LINE(1595)
	this->alpha = ((Float)1.0);
	HX_STACK_LINE(1594)
	this->tint = Array_obj< Float >::__new().Add(((Float)1.0)).Add(((Float)1.0)).Add(((Float)1.0));
	HX_STACK_LINE(1611)
	this->gl = gl;
	HX_STACK_LINE(1613)
	int tmp = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1613)
	Dynamic tmp1 = ::lime::graphics::opengl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1613)
	::lime::graphics::opengl::GLBuffer tmp2 = ::lime::graphics::opengl::GLBuffer_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1613)
	this->dataBuffer = tmp2;
	HX_STACK_LINE(1614)
	int tmp3 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1614)
	Dynamic tmp4 = ::lime::graphics::opengl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1614)
	::lime::graphics::opengl::GLBuffer tmp5 = ::lime::graphics::opengl::GLBuffer_obj::__new(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1614)
	this->indexBuffer = tmp5;
}
;
	return null();
}

//GLGraphicsData_obj::~GLGraphicsData_obj() { }

Dynamic GLGraphicsData_obj::__CreateEmpty() { return  new GLGraphicsData_obj; }
hx::ObjectPtr< GLGraphicsData_obj > GLGraphicsData_obj::__new(::lime::graphics::GLRenderContext gl)
{  hx::ObjectPtr< GLGraphicsData_obj > _result_ = new GLGraphicsData_obj();
	_result_->__construct(gl);
	return _result_;}

Dynamic GLGraphicsData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLGraphicsData_obj > _result_ = new GLGraphicsData_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void GLGraphicsData_obj::reset( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLGraphicsData","reset",0x3afdcbfc,"openfl._internal.renderer.opengl.utils.GLGraphicsData.reset","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1619,0xd295150c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1621)
		this->data = Array_obj< Float >::__new();
		HX_STACK_LINE(1622)
		this->indices = Array_obj< int >::__new();
		HX_STACK_LINE(1623)
		this->lastIndex = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GLGraphicsData_obj,reset,(void))

Void GLGraphicsData_obj::upload( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLGraphicsData","upload",0xe6f62f34,"openfl._internal.renderer.opengl.utils.GLGraphicsData.upload","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1628,0xd295150c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1630)
		Dynamic tmp = ((Dynamic)(this->data));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1630)
		::lime::utils::Float32Array tmp1 = ::lime::utils::Float32Array_obj::__new(tmp,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1630)
		this->glData = tmp1;
		HX_STACK_LINE(1631)
		{
			HX_STACK_LINE(1631)
			::lime::graphics::opengl::GLBuffer tmp2 = this->dataBuffer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1631)
			::lime::graphics::opengl::GLBuffer buffer = tmp2;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(1631)
			{
				HX_STACK_LINE(1631)
				::lime::graphics::GLRenderContext tmp3 = this->gl;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1631)
				int tmp4 = tmp3->ARRAY_BUFFER;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1631)
				bool tmp5 = (buffer == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1631)
				int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1631)
				if ((tmp5)){
					HX_STACK_LINE(1631)
					tmp6 = (int)0;
				}
				else{
					HX_STACK_LINE(1631)
					tmp6 = buffer->id;
				}
				HX_STACK_LINE(1631)
				::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(tmp4,tmp6);
			}
		}
		HX_STACK_LINE(1632)
		{
			HX_STACK_LINE(1632)
			::lime::utils::Float32Array tmp2 = this->glData;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1632)
			::lime::utils::ArrayBufferView data = tmp2;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(1632)
			{
				HX_STACK_LINE(1632)
				::lime::graphics::GLRenderContext tmp3 = this->gl;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1632)
				int tmp4 = tmp3->ARRAY_BUFFER;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1632)
				::lime::utils::ByteArray tmp5 = data->getByteBuffer();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1632)
				int tmp6 = data->getStart();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1632)
				int tmp7 = data->getLength();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1632)
				::lime::graphics::GLRenderContext tmp8 = this->gl;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1632)
				int tmp9 = tmp8->STATIC_DRAW;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1632)
				::lime::graphics::opengl::GL_obj::lime_gl_buffer_data(tmp4,tmp5,tmp6,tmp7,tmp9);
			}
		}
		HX_STACK_LINE(1635)
		Dynamic tmp2 = ((Dynamic)(this->indices));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1635)
		::lime::utils::UInt16Array tmp3 = ::lime::utils::UInt16Array_obj::__new(tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1635)
		this->glIndices = tmp3;
		HX_STACK_LINE(1636)
		{
			HX_STACK_LINE(1636)
			::lime::graphics::opengl::GLBuffer tmp4 = this->indexBuffer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1636)
			::lime::graphics::opengl::GLBuffer buffer = tmp4;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(1636)
			{
				HX_STACK_LINE(1636)
				::lime::graphics::GLRenderContext tmp5 = this->gl;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1636)
				int tmp6 = tmp5->ELEMENT_ARRAY_BUFFER;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1636)
				bool tmp7 = (buffer == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1636)
				int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1636)
				if ((tmp7)){
					HX_STACK_LINE(1636)
					tmp8 = (int)0;
				}
				else{
					HX_STACK_LINE(1636)
					tmp8 = buffer->id;
				}
				HX_STACK_LINE(1636)
				::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(tmp6,tmp8);
			}
		}
		HX_STACK_LINE(1637)
		{
			HX_STACK_LINE(1637)
			::lime::utils::UInt16Array tmp4 = this->glIndices;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1637)
			::lime::utils::ArrayBufferView data = tmp4;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(1637)
			{
				HX_STACK_LINE(1637)
				::lime::graphics::GLRenderContext tmp5 = this->gl;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1637)
				int tmp6 = tmp5->ELEMENT_ARRAY_BUFFER;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1637)
				::lime::utils::ByteArray tmp7 = data->getByteBuffer();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1637)
				int tmp8 = data->getStart();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1637)
				int tmp9 = data->getLength();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1637)
				::lime::graphics::GLRenderContext tmp10 = this->gl;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1637)
				int tmp11 = tmp10->STATIC_DRAW;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1637)
				::lime::graphics::opengl::GL_obj::lime_gl_buffer_data(tmp6,tmp7,tmp8,tmp9,tmp11);
			}
		}
		HX_STACK_LINE(1639)
		this->dirty = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GLGraphicsData_obj,upload,(void))


GLGraphicsData_obj::GLGraphicsData_obj()
{
}

void GLGraphicsData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLGraphicsData);
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(tint,"tint");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(mode,"mode");
	HX_MARK_MEMBER_NAME(lastIndex,"lastIndex");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(glData,"glData");
	HX_MARK_MEMBER_NAME(dataBuffer,"dataBuffer");
	HX_MARK_MEMBER_NAME(indices,"indices");
	HX_MARK_MEMBER_NAME(glIndices,"glIndices");
	HX_MARK_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_MARK_END_CLASS();
}

void GLGraphicsData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(tint,"tint");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(mode,"mode");
	HX_VISIT_MEMBER_NAME(lastIndex,"lastIndex");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(glData,"glData");
	HX_VISIT_MEMBER_NAME(dataBuffer,"dataBuffer");
	HX_VISIT_MEMBER_NAME(indices,"indices");
	HX_VISIT_MEMBER_NAME(glIndices,"glIndices");
	HX_VISIT_MEMBER_NAME(indexBuffer,"indexBuffer");
}

Dynamic GLGraphicsData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"tint") ) { return tint; }
		if (HX_FIELD_EQ(inName,"mode") ) { return mode; }
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"glData") ) { return glData; }
		if (HX_FIELD_EQ(inName,"upload") ) { return upload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { return indices; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lastIndex") ) { return lastIndex; }
		if (HX_FIELD_EQ(inName,"glIndices") ) { return glIndices; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dataBuffer") ) { return dataBuffer; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { return indexBuffer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLGraphicsData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"tint") ) { tint=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mode") ) { mode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"glData") ) { glData=inValue.Cast< ::lime::utils::Float32Array >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { indices=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lastIndex") ) { lastIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"glIndices") ) { glIndices=inValue.Cast< ::lime::utils::UInt16Array >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dataBuffer") ) { dataBuffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { indexBuffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GLGraphicsData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void GLGraphicsData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("tint","\xfb","\xcc","\xfc","\x4c"));
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"));
	outFields->push(HX_HCSTRING("mode","\x63","\xd3","\x60","\x48"));
	outFields->push(HX_HCSTRING("lastIndex","\xdc","\xc8","\xc1","\x0a"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("glData","\xef","\x52","\x45","\x8b"));
	outFields->push(HX_HCSTRING("dataBuffer","\xca","\x82","\x36","\xbc"));
	outFields->push(HX_HCSTRING("indices","\x27","\x47","\x54","\xe3"));
	outFields->push(HX_HCSTRING("glIndices","\x82","\xd3","\x0e","\xb1"));
	outFields->push(HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(GLGraphicsData_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(GLGraphicsData_obj,tint),HX_HCSTRING("tint","\xfb","\xcc","\xfc","\x4c")},
	{hx::fsFloat,(int)offsetof(GLGraphicsData_obj,alpha),HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21")},
	{hx::fsBool,(int)offsetof(GLGraphicsData_obj,dirty),HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9")},
	{hx::fsInt,(int)offsetof(GLGraphicsData_obj,mode),HX_HCSTRING("mode","\x63","\xd3","\x60","\x48")},
	{hx::fsInt,(int)offsetof(GLGraphicsData_obj,lastIndex),HX_HCSTRING("lastIndex","\xdc","\xc8","\xc1","\x0a")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(GLGraphicsData_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsObject /*::lime::utils::Float32Array*/ ,(int)offsetof(GLGraphicsData_obj,glData),HX_HCSTRING("glData","\xef","\x52","\x45","\x8b")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(GLGraphicsData_obj,dataBuffer),HX_HCSTRING("dataBuffer","\xca","\x82","\x36","\xbc")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(GLGraphicsData_obj,indices),HX_HCSTRING("indices","\x27","\x47","\x54","\xe3")},
	{hx::fsObject /*::lime::utils::UInt16Array*/ ,(int)offsetof(GLGraphicsData_obj,glIndices),HX_HCSTRING("glIndices","\x82","\xd3","\x0e","\xb1")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(GLGraphicsData_obj,indexBuffer),HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("tint","\xfb","\xcc","\xfc","\x4c"),
	HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"),
	HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"),
	HX_HCSTRING("mode","\x63","\xd3","\x60","\x48"),
	HX_HCSTRING("lastIndex","\xdc","\xc8","\xc1","\x0a"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("glData","\xef","\x52","\x45","\x8b"),
	HX_HCSTRING("dataBuffer","\xca","\x82","\x36","\xbc"),
	HX_HCSTRING("indices","\x27","\x47","\x54","\xe3"),
	HX_HCSTRING("glIndices","\x82","\xd3","\x0e","\xb1"),
	HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("upload","\x01","\xca","\x59","\x8c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLGraphicsData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLGraphicsData_obj::__mClass,"__mClass");
};

#endif

hx::Class GLGraphicsData_obj::__mClass;

void GLGraphicsData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.utils.GLGraphicsData","\xdb","\xd2","\x84","\x06");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &GLGraphicsData_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLGraphicsData_obj >;
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
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils

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
#ifndef INCLUDED_lime_graphics_opengl_GLFramebuffer
#include <lime/graphics/opengl/GLFramebuffer.h>
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
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_DefaultShader
#include <openfl/_internal/renderer/opengl/shaders2/DefaultShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_Shader
#include <openfl/_internal/renderer/opengl/shaders2/Shader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FilterManager
#include <openfl/_internal/renderer/opengl/utils/FilterManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FilterTexture
#include <openfl/_internal/renderer/opengl/utils/FilterTexture.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_ShaderManager
#include <openfl/_internal/renderer/opengl/utils/ShaderManager.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void FilterManager_obj::__construct(::lime::graphics::GLRenderContext gl,bool transparent)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.FilterManager","new",0x6afe6f06,"openfl._internal.renderer.opengl.utils.FilterManager.new","openfl/_internal/renderer/opengl/utils/FilterManager.hx",37,0x7d1f400d)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
HX_STACK_ARG(transparent,"transparent")
{
	HX_STACK_LINE(39)
	this->transparent = transparent;
	HX_STACK_LINE(41)
	this->filterStack = cpp::ArrayBase_obj::__new();
	HX_STACK_LINE(43)
	this->offsetX = (int)0;
	HX_STACK_LINE(44)
	this->offsetY = (int)0;
	HX_STACK_LINE(46)
	::lime::graphics::GLRenderContext tmp = gl;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	this->setContext(tmp);
}
;
	return null();
}

//FilterManager_obj::~FilterManager_obj() { }

Dynamic FilterManager_obj::__CreateEmpty() { return  new FilterManager_obj; }
hx::ObjectPtr< FilterManager_obj > FilterManager_obj::__new(::lime::graphics::GLRenderContext gl,bool transparent)
{  hx::ObjectPtr< FilterManager_obj > _result_ = new FilterManager_obj();
	_result_->__construct(gl,transparent);
	return _result_;}

Dynamic FilterManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FilterManager_obj > _result_ = new FilterManager_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void FilterManager_obj::applyFilterPass( Dynamic filter,::openfl::geom::Rectangle filterArea,int width,int height){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.FilterManager","applyFilterPass",0xe07e4b5d,"openfl._internal.renderer.opengl.utils.FilterManager.applyFilterPass","openfl/_internal/renderer/opengl/utils/FilterManager.hx",51,0x7d1f400d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(filter,"filter")
		HX_STACK_ARG(filterArea,"filterArea")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FilterManager_obj,applyFilterPass,(void))

Void FilterManager_obj::begin( ::openfl::_internal::renderer::RenderSession renderSession,::lime::graphics::opengl::GLFramebuffer buffer){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.FilterManager","begin",0x11e1fe4f,"openfl._internal.renderer.opengl.utils.FilterManager.begin","openfl/_internal/renderer/opengl/utils/FilterManager.hx",102,0x7d1f400d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(104)
		this->renderSession = renderSession;
		HX_STACK_LINE(105)
		::openfl::_internal::renderer::opengl::shaders2::DefaultShader tmp = renderSession->shaderManager->defaultShader;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(105)
		this->defaultShader = tmp;
		HX_STACK_LINE(108)
		this->width = (int)0;
		HX_STACK_LINE(109)
		this->height = (int)0;
		HX_STACK_LINE(110)
		this->buffer = buffer;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FilterManager_obj,begin,(void))

Void FilterManager_obj::destroy( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.FilterManager","destroy",0x105c16a0,"openfl._internal.renderer.opengl.utils.FilterManager.destroy","openfl/_internal/renderer/opengl/utils/FilterManager.hx",115,0x7d1f400d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(117)
		::lime::graphics::GLRenderContext tmp = this->gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(117)
		::lime::graphics::GLRenderContext gl = tmp;		HX_STACK_VAR(gl,"gl");
		HX_STACK_LINE(119)
		this->filterStack = null();
		HX_STACK_LINE(121)
		this->offsetX = (int)0;
		HX_STACK_LINE(122)
		this->offsetY = (int)0;
		HX_STACK_LINE(124)
		{
			HX_STACK_LINE(124)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(124)
			Array< ::Dynamic > _g1 = this->texturePool;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(124)
			while((true)){
				HX_STACK_LINE(124)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(124)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(124)
				if ((tmp2)){
					HX_STACK_LINE(124)
					break;
				}
				HX_STACK_LINE(124)
				::openfl::_internal::renderer::opengl::utils::FilterTexture tmp3 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::FilterTexture >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(124)
				::openfl::_internal::renderer::opengl::utils::FilterTexture texture = tmp3;		HX_STACK_VAR(texture,"texture");
				HX_STACK_LINE(124)
				++(_g);
				HX_STACK_LINE(126)
				texture->destroy();
			}
		}
		HX_STACK_LINE(130)
		this->texturePool = null();
		HX_STACK_LINE(132)
		{
			HX_STACK_LINE(132)
			::lime::graphics::opengl::GLBuffer tmp1 = this->vertexBuffer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(132)
			::lime::graphics::opengl::GLBuffer buffer = tmp1;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(132)
			{
				HX_STACK_LINE(132)
				Dynamic tmp2 = buffer->id;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(132)
				::lime::graphics::opengl::GL_obj::lime_gl_delete_buffer(tmp2);
				HX_STACK_LINE(132)
				buffer->invalidate();
			}
		}
		HX_STACK_LINE(133)
		{
			HX_STACK_LINE(133)
			::lime::graphics::opengl::GLBuffer tmp1 = this->uvBuffer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(133)
			::lime::graphics::opengl::GLBuffer buffer = tmp1;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(133)
			{
				HX_STACK_LINE(133)
				Dynamic tmp2 = buffer->id;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(133)
				::lime::graphics::opengl::GL_obj::lime_gl_delete_buffer(tmp2);
				HX_STACK_LINE(133)
				buffer->invalidate();
			}
		}
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			::lime::graphics::opengl::GLBuffer tmp1 = this->colorBuffer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(134)
			::lime::graphics::opengl::GLBuffer buffer = tmp1;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(134)
			{
				HX_STACK_LINE(134)
				Dynamic tmp2 = buffer->id;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(134)
				::lime::graphics::opengl::GL_obj::lime_gl_delete_buffer(tmp2);
				HX_STACK_LINE(134)
				buffer->invalidate();
			}
		}
		HX_STACK_LINE(135)
		{
			HX_STACK_LINE(135)
			::lime::graphics::opengl::GLBuffer tmp1 = this->indexBuffer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(135)
			::lime::graphics::opengl::GLBuffer buffer = tmp1;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(135)
			{
				HX_STACK_LINE(135)
				Dynamic tmp2 = buffer->id;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(135)
				::lime::graphics::opengl::GL_obj::lime_gl_delete_buffer(tmp2);
				HX_STACK_LINE(135)
				buffer->invalidate();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FilterManager_obj,destroy,(void))

Void FilterManager_obj::initShaderBuffers( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.FilterManager","initShaderBuffers",0xfb7f8ac4,"openfl._internal.renderer.opengl.utils.FilterManager.initShaderBuffers","openfl/_internal/renderer/opengl/utils/FilterManager.hx",140,0x7d1f400d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(142)
		::lime::graphics::GLRenderContext tmp = this->gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(142)
		::lime::graphics::GLRenderContext gl = tmp;		HX_STACK_VAR(gl,"gl");
		HX_STACK_LINE(144)
		int tmp1 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(144)
		Dynamic tmp2 = ::lime::graphics::opengl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(144)
		::lime::graphics::opengl::GLBuffer tmp3 = ::lime::graphics::opengl::GLBuffer_obj::__new(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(144)
		this->vertexBuffer = tmp3;
		HX_STACK_LINE(145)
		int tmp4 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(145)
		Dynamic tmp5 = ::lime::graphics::opengl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(145)
		::lime::graphics::opengl::GLBuffer tmp6 = ::lime::graphics::opengl::GLBuffer_obj::__new(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(145)
		this->uvBuffer = tmp6;
		HX_STACK_LINE(146)
		int tmp7 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(146)
		Dynamic tmp8 = ::lime::graphics::opengl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(146)
		::lime::graphics::opengl::GLBuffer tmp9 = ::lime::graphics::opengl::GLBuffer_obj::__new(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(146)
		this->colorBuffer = tmp9;
		HX_STACK_LINE(147)
		int tmp10 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(147)
		Dynamic tmp11 = ::lime::graphics::opengl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(147)
		::lime::graphics::opengl::GLBuffer tmp12 = ::lime::graphics::opengl::GLBuffer_obj::__new(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(147)
		this->indexBuffer = tmp12;
		HX_STACK_LINE(149)
		::lime::utils::Float32Array tmp13 = ::lime::utils::Float32Array_obj::__new(Array_obj< Float >::__new().Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)1.0)).Add(((Float)1.0)),null(),null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(149)
		this->vertexArray = tmp13;
		HX_STACK_LINE(151)
		{
			HX_STACK_LINE(151)
			::lime::graphics::opengl::GLBuffer tmp14 = this->vertexBuffer;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(151)
			::lime::graphics::opengl::GLBuffer buffer = tmp14;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(151)
			{
				HX_STACK_LINE(151)
				int tmp15 = gl->ARRAY_BUFFER;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(151)
				bool tmp16 = (buffer == null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(151)
				int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(151)
				if ((tmp16)){
					HX_STACK_LINE(151)
					tmp17 = (int)0;
				}
				else{
					HX_STACK_LINE(151)
					tmp17 = buffer->id;
				}
				HX_STACK_LINE(151)
				::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(tmp15,tmp17);
			}
		}
		HX_STACK_LINE(152)
		{
			HX_STACK_LINE(152)
			::lime::utils::Float32Array tmp14 = this->vertexArray;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(152)
			::lime::utils::ArrayBufferView data = tmp14;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(152)
			{
				HX_STACK_LINE(152)
				int tmp15 = gl->ARRAY_BUFFER;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(152)
				::lime::utils::ByteArray tmp16 = data->getByteBuffer();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(152)
				int tmp17 = data->getStart();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(152)
				int tmp18 = data->getLength();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(152)
				int tmp19 = gl->STATIC_DRAW;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(152)
				::lime::graphics::opengl::GL_obj::lime_gl_buffer_data(tmp15,tmp16,tmp17,tmp18,tmp19);
			}
		}
		HX_STACK_LINE(154)
		::lime::utils::Float32Array tmp14 = ::lime::utils::Float32Array_obj::__new(Array_obj< Float >::__new().Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)1.0)).Add(((Float)1.0)),null(),null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(154)
		this->uvArray = tmp14;
		HX_STACK_LINE(156)
		{
			HX_STACK_LINE(156)
			::lime::graphics::opengl::GLBuffer tmp15 = this->uvBuffer;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(156)
			::lime::graphics::opengl::GLBuffer buffer = tmp15;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(156)
			{
				HX_STACK_LINE(156)
				int tmp16 = gl->ARRAY_BUFFER;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(156)
				bool tmp17 = (buffer == null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(156)
				int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(156)
				if ((tmp17)){
					HX_STACK_LINE(156)
					tmp18 = (int)0;
				}
				else{
					HX_STACK_LINE(156)
					tmp18 = buffer->id;
				}
				HX_STACK_LINE(156)
				::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(tmp16,tmp18);
			}
		}
		HX_STACK_LINE(157)
		{
			HX_STACK_LINE(157)
			::lime::utils::Float32Array tmp15 = this->uvArray;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(157)
			::lime::utils::ArrayBufferView data = tmp15;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(157)
			{
				HX_STACK_LINE(157)
				int tmp16 = gl->ARRAY_BUFFER;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(157)
				::lime::utils::ByteArray tmp17 = data->getByteBuffer();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(157)
				int tmp18 = data->getStart();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(157)
				int tmp19 = data->getLength();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(157)
				int tmp20 = gl->STATIC_DRAW;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(157)
				::lime::graphics::opengl::GL_obj::lime_gl_buffer_data(tmp16,tmp17,tmp18,tmp19,tmp20);
			}
		}
		HX_STACK_LINE(159)
		::lime::utils::Float32Array tmp15 = ::lime::utils::Float32Array_obj::__new(Array_obj< Float >::__new().Add(((Float)1.0)).Add((int)16777215).Add(((Float)1.0)).Add((int)16777215).Add(((Float)1.0)).Add((int)16777215).Add(((Float)1.0)).Add((int)16777215),null(),null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(159)
		this->colorArray = tmp15;
		HX_STACK_LINE(161)
		{
			HX_STACK_LINE(161)
			::lime::graphics::opengl::GLBuffer tmp16 = this->colorBuffer;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(161)
			::lime::graphics::opengl::GLBuffer buffer = tmp16;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(161)
			{
				HX_STACK_LINE(161)
				int tmp17 = gl->ARRAY_BUFFER;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(161)
				bool tmp18 = (buffer == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(161)
				int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(161)
				if ((tmp18)){
					HX_STACK_LINE(161)
					tmp19 = (int)0;
				}
				else{
					HX_STACK_LINE(161)
					tmp19 = buffer->id;
				}
				HX_STACK_LINE(161)
				::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(tmp17,tmp19);
			}
		}
		HX_STACK_LINE(162)
		{
			HX_STACK_LINE(162)
			::lime::utils::Float32Array tmp16 = this->colorArray;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(162)
			::lime::utils::ArrayBufferView data = tmp16;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(162)
			{
				HX_STACK_LINE(162)
				int tmp17 = gl->ARRAY_BUFFER;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(162)
				::lime::utils::ByteArray tmp18 = data->getByteBuffer();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(162)
				int tmp19 = data->getStart();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(162)
				int tmp20 = data->getLength();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(162)
				int tmp21 = gl->STATIC_DRAW;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(162)
				::lime::graphics::opengl::GL_obj::lime_gl_buffer_data(tmp17,tmp18,tmp19,tmp20,tmp21);
			}
		}
		HX_STACK_LINE(164)
		{
			HX_STACK_LINE(164)
			::lime::graphics::opengl::GLBuffer tmp16 = this->indexBuffer;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(164)
			::lime::graphics::opengl::GLBuffer buffer = tmp16;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(164)
			{
				HX_STACK_LINE(164)
				int tmp17 = gl->ELEMENT_ARRAY_BUFFER;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(164)
				bool tmp18 = (buffer == null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(164)
				int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(164)
				if ((tmp18)){
					HX_STACK_LINE(164)
					tmp19 = (int)0;
				}
				else{
					HX_STACK_LINE(164)
					tmp19 = buffer->id;
				}
				HX_STACK_LINE(164)
				::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(tmp17,tmp19);
			}
		}
		HX_STACK_LINE(165)
		{
			HX_STACK_LINE(165)
			::lime::utils::UInt16Array tmp16 = ::lime::utils::UInt16Array_obj::__new(Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)1).Add((int)3).Add((int)2),null(),null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(165)
			::lime::utils::ArrayBufferView data = tmp16;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(165)
			{
				HX_STACK_LINE(165)
				int tmp17 = gl->ELEMENT_ARRAY_BUFFER;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(165)
				::lime::utils::ByteArray tmp18 = data->getByteBuffer();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(165)
				int tmp19 = data->getStart();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(165)
				int tmp20 = data->getLength();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(165)
				int tmp21 = gl->STATIC_DRAW;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(165)
				::lime::graphics::opengl::GL_obj::lime_gl_buffer_data(tmp17,tmp18,tmp19,tmp20,tmp21);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FilterManager_obj,initShaderBuffers,(void))

Void FilterManager_obj::popFilter( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.FilterManager","popFilter",0xfe0b134f,"openfl._internal.renderer.opengl.utils.FilterManager.popFilter","openfl/_internal/renderer/opengl/utils/FilterManager.hx",170,0x7d1f400d)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FilterManager_obj,popFilter,(void))

Void FilterManager_obj::pushFilter( Dynamic filterBlock){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.FilterManager","pushFilter",0xb0cfa74c,"openfl._internal.renderer.opengl.utils.FilterManager.pushFilter","openfl/_internal/renderer/opengl/utils/FilterManager.hx",329,0x7d1f400d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(filterBlock,"filterBlock")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FilterManager_obj,pushFilter,(void))

Void FilterManager_obj::setContext( ::lime::graphics::GLRenderContext gl){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.FilterManager","setContext",0x4411dc87,"openfl._internal.renderer.opengl.utils.FilterManager.setContext","openfl/_internal/renderer/opengl/utils/FilterManager.hx",405,0x7d1f400d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gl,"gl")
		HX_STACK_LINE(407)
		this->gl = gl;
		HX_STACK_LINE(408)
		this->texturePool = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(410)
		this->initShaderBuffers();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FilterManager_obj,setContext,(void))


FilterManager_obj::FilterManager_obj()
{
}

void FilterManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FilterManager);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(colorArray,"colorArray");
	HX_MARK_MEMBER_NAME(colorBuffer,"colorBuffer");
	HX_MARK_MEMBER_NAME(defaultShader,"defaultShader");
	HX_MARK_MEMBER_NAME(filterStack,"filterStack");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_MEMBER_NAME(renderSession,"renderSession");
	HX_MARK_MEMBER_NAME(texturePool,"texturePool");
	HX_MARK_MEMBER_NAME(transparent,"transparent");
	HX_MARK_MEMBER_NAME(uvArray,"uvArray");
	HX_MARK_MEMBER_NAME(uvBuffer,"uvBuffer");
	HX_MARK_MEMBER_NAME(vertexArray,"vertexArray");
	HX_MARK_MEMBER_NAME(vertexBuffer,"vertexBuffer");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_END_CLASS();
}

void FilterManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(colorArray,"colorArray");
	HX_VISIT_MEMBER_NAME(colorBuffer,"colorBuffer");
	HX_VISIT_MEMBER_NAME(defaultShader,"defaultShader");
	HX_VISIT_MEMBER_NAME(filterStack,"filterStack");
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
	HX_VISIT_MEMBER_NAME(renderSession,"renderSession");
	HX_VISIT_MEMBER_NAME(texturePool,"texturePool");
	HX_VISIT_MEMBER_NAME(transparent,"transparent");
	HX_VISIT_MEMBER_NAME(uvArray,"uvArray");
	HX_VISIT_MEMBER_NAME(uvBuffer,"uvBuffer");
	HX_VISIT_MEMBER_NAME(vertexArray,"vertexArray");
	HX_VISIT_MEMBER_NAME(vertexBuffer,"vertexBuffer");
	HX_VISIT_MEMBER_NAME(width,"width");
}

Dynamic FilterManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { return offsetX; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return offsetY; }
		if (HX_FIELD_EQ(inName,"uvArray") ) { return uvArray; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uvBuffer") ) { return uvBuffer; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"popFilter") ) { return popFilter_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"colorArray") ) { return colorArray; }
		if (HX_FIELD_EQ(inName,"pushFilter") ) { return pushFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"setContext") ) { return setContext_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"colorBuffer") ) { return colorBuffer; }
		if (HX_FIELD_EQ(inName,"filterStack") ) { return filterStack; }
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { return indexBuffer; }
		if (HX_FIELD_EQ(inName,"texturePool") ) { return texturePool; }
		if (HX_FIELD_EQ(inName,"transparent") ) { return transparent; }
		if (HX_FIELD_EQ(inName,"vertexArray") ) { return vertexArray; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vertexBuffer") ) { return vertexBuffer; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultShader") ) { return defaultShader; }
		if (HX_FIELD_EQ(inName,"renderSession") ) { return renderSession; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"applyFilterPass") ) { return applyFilterPass_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"initShaderBuffers") ) { return initShaderBuffers_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FilterManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::lime::graphics::opengl::GLFramebuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uvArray") ) { uvArray=inValue.Cast< ::lime::utils::Float32Array >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uvBuffer") ) { uvBuffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"colorArray") ) { colorArray=inValue.Cast< ::lime::utils::Float32Array >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"colorBuffer") ) { colorBuffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filterStack") ) { filterStack=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { indexBuffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"texturePool") ) { texturePool=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"transparent") ) { transparent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vertexArray") ) { vertexArray=inValue.Cast< ::lime::utils::Float32Array >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vertexBuffer") ) { vertexBuffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultShader") ) { defaultShader=inValue.Cast< ::openfl::_internal::renderer::opengl::shaders2::DefaultShader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderSession") ) { renderSession=inValue.Cast< ::openfl::_internal::renderer::RenderSession >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FilterManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FilterManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"));
	outFields->push(HX_HCSTRING("colorArray","\x36","\x85","\xfb","\x49"));
	outFields->push(HX_HCSTRING("colorBuffer","\xc3","\x4e","\xbd","\x8a"));
	outFields->push(HX_HCSTRING("defaultShader","\xc6","\x92","\x99","\x17"));
	outFields->push(HX_HCSTRING("filterStack","\x70","\xbc","\xbd","\x33"));
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5"));
	outFields->push(HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"));
	outFields->push(HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"));
	outFields->push(HX_HCSTRING("renderSession","\xa0","\x8a","\x85","\x8f"));
	outFields->push(HX_HCSTRING("texturePool","\x57","\x7f","\xdb","\x00"));
	outFields->push(HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"));
	outFields->push(HX_HCSTRING("uvArray","\x78","\xb7","\x28","\xe8"));
	outFields->push(HX_HCSTRING("uvBuffer","\x41","\x16","\x1c","\x54"));
	outFields->push(HX_HCSTRING("vertexArray","\x95","\x37","\xcb","\x39"));
	outFields->push(HX_HCSTRING("vertexBuffer","\x84","\xaf","\xa9","\x70"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::opengl::GLFramebuffer*/ ,(int)offsetof(FilterManager_obj,buffer),HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{hx::fsObject /*::lime::utils::Float32Array*/ ,(int)offsetof(FilterManager_obj,colorArray),HX_HCSTRING("colorArray","\x36","\x85","\xfb","\x49")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(FilterManager_obj,colorBuffer),HX_HCSTRING("colorBuffer","\xc3","\x4e","\xbd","\x8a")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::shaders2::DefaultShader*/ ,(int)offsetof(FilterManager_obj,defaultShader),HX_HCSTRING("defaultShader","\xc6","\x92","\x99","\x17")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(FilterManager_obj,filterStack),HX_HCSTRING("filterStack","\x70","\xbc","\xbd","\x33")},
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(FilterManager_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsInt,(int)offsetof(FilterManager_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(FilterManager_obj,indexBuffer),HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5")},
	{hx::fsFloat,(int)offsetof(FilterManager_obj,offsetX),HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7")},
	{hx::fsFloat,(int)offsetof(FilterManager_obj,offsetY),HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7")},
	{hx::fsObject /*::openfl::_internal::renderer::RenderSession*/ ,(int)offsetof(FilterManager_obj,renderSession),HX_HCSTRING("renderSession","\xa0","\x8a","\x85","\x8f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FilterManager_obj,texturePool),HX_HCSTRING("texturePool","\x57","\x7f","\xdb","\x00")},
	{hx::fsBool,(int)offsetof(FilterManager_obj,transparent),HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22")},
	{hx::fsObject /*::lime::utils::Float32Array*/ ,(int)offsetof(FilterManager_obj,uvArray),HX_HCSTRING("uvArray","\x78","\xb7","\x28","\xe8")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(FilterManager_obj,uvBuffer),HX_HCSTRING("uvBuffer","\x41","\x16","\x1c","\x54")},
	{hx::fsObject /*::lime::utils::Float32Array*/ ,(int)offsetof(FilterManager_obj,vertexArray),HX_HCSTRING("vertexArray","\x95","\x37","\xcb","\x39")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(FilterManager_obj,vertexBuffer),HX_HCSTRING("vertexBuffer","\x84","\xaf","\xa9","\x70")},
	{hx::fsInt,(int)offsetof(FilterManager_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("colorArray","\x36","\x85","\xfb","\x49"),
	HX_HCSTRING("colorBuffer","\xc3","\x4e","\xbd","\x8a"),
	HX_HCSTRING("defaultShader","\xc6","\x92","\x99","\x17"),
	HX_HCSTRING("filterStack","\x70","\xbc","\xbd","\x33"),
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5"),
	HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"),
	HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"),
	HX_HCSTRING("renderSession","\xa0","\x8a","\x85","\x8f"),
	HX_HCSTRING("texturePool","\x57","\x7f","\xdb","\x00"),
	HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"),
	HX_HCSTRING("uvArray","\x78","\xb7","\x28","\xe8"),
	HX_HCSTRING("uvBuffer","\x41","\x16","\x1c","\x54"),
	HX_HCSTRING("vertexArray","\x95","\x37","\xcb","\x39"),
	HX_HCSTRING("vertexBuffer","\x84","\xaf","\xa9","\x70"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("applyFilterPass","\xb7","\x4b","\x8d","\x16"),
	HX_HCSTRING("begin","\x29","\xea","\x55","\xb0"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("initShaderBuffers","\x9e","\xd5","\x92","\x13"),
	HX_HCSTRING("popFilter","\x29","\xf4","\xaa","\x01"),
	HX_HCSTRING("pushFilter","\x32","\x85","\x14","\xd9"),
	HX_HCSTRING("setContext","\x6d","\xba","\x56","\x6c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FilterManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FilterManager_obj::__mClass,"__mClass");
};

#endif

hx::Class FilterManager_obj::__mClass;

void FilterManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.utils.FilterManager","\x14","\x34","\x95","\x03");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FilterManager_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FilterManager_obj >;
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

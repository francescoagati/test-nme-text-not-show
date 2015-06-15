#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
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
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
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
#ifndef INCLUDED_lime_utils_UInt32Array
#include <lime/utils/UInt32Array.h>
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
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BlendModeManager
#include <openfl/_internal/renderer/opengl/utils/BlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_FilterTexture
#include <openfl/_internal/renderer/opengl/utils/FilterTexture.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_ShaderManager
#include <openfl/_internal/renderer/opengl/utils/ShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch
#include <openfl/_internal/renderer/opengl/utils/SpriteBatch.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexArray
#include <openfl/_internal/renderer/opengl/utils/VertexArray.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexAttribute
#include <openfl/_internal/renderer/opengl/utils/VertexAttribute.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils__SpriteBatch_State
#include <openfl/_internal/renderer/opengl/utils/_SpriteBatch/State.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_display_TextureUvs
#include <openfl/display/TextureUvs.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void SpriteBatch_obj::__construct(::lime::graphics::GLRenderContext gl,hx::Null< int >  __o_maxSprites)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","new",0x9b485926,"openfl._internal.renderer.opengl.utils.SpriteBatch.new","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",27,0x8289eb2d)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
HX_STACK_ARG(__o_maxSprites,"maxSprites")
int maxSprites = __o_maxSprites.Default(2000);
{
	HX_STACK_LINE(63)
	this->lastEnableColor = true;
	HX_STACK_LINE(61)
	this->enableColor = true;
	HX_STACK_LINE(59)
	this->attributes = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(56)
	this->writtenVertexBytes = (int)0;
	HX_STACK_LINE(45)
	this->drawing = false;
	HX_STACK_LINE(44)
	this->dirty = true;
	HX_STACK_LINE(34)
	this->states = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(67)
	this->maxSprites = maxSprites;
	HX_STACK_LINE(69)
	::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)2,(int)5126,false,HX_HCSTRING("aPosition","\x2a","\x26","\x25","\x92"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	this->attributes->push(tmp);
	HX_STACK_LINE(70)
	::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp1 = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)2,(int)5126,false,HX_HCSTRING("aTexCoord0","\x81","\xa8","\x7d","\x1f"),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	this->attributes->push(tmp1);
	HX_STACK_LINE(71)
	::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp2 = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)4,(int)5121,true,HX_HCSTRING("aColor","\x42","\xe1","\x27","\xa6"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(71)
	this->attributes->push(tmp2);
	HX_STACK_LINE(73)
	::lime::utils::Float32Array tmp3 = ::lime::utils::Float32Array_obj::__new(Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)1).Add((int)1),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(73)
	::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp4 = this->attributes->__get((int)2).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(73)
	tmp4->defaultValue = tmp3;
	HX_STACK_LINE(75)
	this->maxElementsPerVertex = (int)0;
	HX_STACK_LINE(77)
	{
		HX_STACK_LINE(77)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(77)
		Array< ::Dynamic > _g1 = this->attributes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(77)
		while((true)){
			HX_STACK_LINE(77)
			bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(77)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(77)
			if ((tmp6)){
				HX_STACK_LINE(77)
				break;
			}
			HX_STACK_LINE(77)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp7 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(77)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute a = tmp7;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(77)
			++(_g);
			HX_STACK_LINE(78)
			int tmp8 = a->components;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(78)
			int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(78)
			{
				HX_STACK_LINE(78)
				int _g2 = a->type;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(78)
				int tmp10 = _g2;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(78)
				switch( (int)(tmp10)){
					case (int)5120: case (int)5121: {
						HX_STACK_LINE(78)
						tmp9 = (int)1;
					}
					;break;
					case (int)5122: case (int)5123: {
						HX_STACK_LINE(78)
						tmp9 = (int)2;
					}
					;break;
					default: {
						HX_STACK_LINE(78)
						tmp9 = (int)4;
					}
				}
			}
			HX_STACK_LINE(78)
			int tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(78)
			Float tmp11 = (Float(tmp10) / Float((int)4));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(78)
			int tmp12 = ::Math_obj::floor(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(78)
			hx::AddEq(this->maxElementsPerVertex,tmp12);
		}
	}
	HX_STACK_LINE(81)
	int tmp5 = maxSprites;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(81)
	int tmp6 = this->maxElementsPerVertex;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(81)
	int tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(81)
	int tmp8 = (tmp7 * (int)4);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(81)
	int tmp9 = (tmp8 * (int)4);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(81)
	this->vertexArraySize = tmp9;
	HX_STACK_LINE(82)
	int tmp10 = (maxSprites * (int)6);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(82)
	this->indexArraySize = tmp10;
	HX_STACK_LINE(84)
	int tmp11 = this->vertexArraySize;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(84)
	::openfl::_internal::renderer::opengl::utils::VertexArray tmp12 = ::openfl::_internal::renderer::opengl::utils::VertexArray_obj::__new(this->attributes,tmp11,false);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(84)
	this->vertexArray = tmp12;
	HX_STACK_LINE(85)
	::openfl::_internal::renderer::opengl::utils::VertexArray tmp13 = this->vertexArray;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(85)
	::lime::utils::ByteArray tmp14 = tmp13->buffer;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(85)
	::lime::utils::Float32Array tmp15 = ::lime::utils::Float32Array_obj::__new(tmp14,null(),null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(85)
	this->positions = tmp15;
	HX_STACK_LINE(86)
	::openfl::_internal::renderer::opengl::utils::VertexArray tmp16 = this->vertexArray;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(86)
	::lime::utils::ByteArray tmp17 = tmp16->buffer;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(86)
	::lime::utils::UInt32Array tmp18 = ::lime::utils::UInt32Array_obj::__new(tmp17,null(),null());		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(86)
	this->colors = tmp18;
	HX_STACK_LINE(88)
	int tmp19 = this->indexArraySize;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(88)
	::lime::utils::UInt16Array tmp20 = ::lime::utils::UInt16Array_obj::__new(tmp19,null(),null());		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(88)
	this->indices = tmp20;
	HX_STACK_LINE(90)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(90)
	int j = (int)0;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(91)
	while((true)){
		HX_STACK_LINE(91)
		int tmp21 = i;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(91)
		int tmp22 = this->indexArraySize;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(91)
		bool tmp23 = (tmp21 < tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(91)
		bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(91)
		if ((tmp24)){
			HX_STACK_LINE(91)
			break;
		}
		HX_STACK_LINE(92)
		::lime::utils::UInt16Array tmp25 = this->indices;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(92)
		int tmp26 = i;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(92)
		int tmp27 = j;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(92)
		hx::__ArrayImplRef(tmp25,tmp26) = tmp27;
		HX_STACK_LINE(93)
		::lime::utils::UInt16Array tmp28 = this->indices;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(93)
		int tmp29 = (i + (int)1);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(93)
		int tmp30 = (j + (int)1);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(93)
		hx::__ArrayImplRef(tmp28,tmp29) = tmp30;
		HX_STACK_LINE(94)
		::lime::utils::UInt16Array tmp31 = this->indices;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(94)
		int tmp32 = (i + (int)2);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(94)
		int tmp33 = (j + (int)2);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(94)
		hx::__ArrayImplRef(tmp31,tmp32) = tmp33;
		HX_STACK_LINE(95)
		::lime::utils::UInt16Array tmp34 = this->indices;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(95)
		int tmp35 = (i + (int)3);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(95)
		int tmp36 = j;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(95)
		hx::__ArrayImplRef(tmp34,tmp35) = tmp36;
		HX_STACK_LINE(96)
		::lime::utils::UInt16Array tmp37 = this->indices;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(96)
		int tmp38 = (i + (int)4);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(96)
		int tmp39 = (j + (int)2);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(96)
		hx::__ArrayImplRef(tmp37,tmp38) = tmp39;
		HX_STACK_LINE(97)
		::lime::utils::UInt16Array tmp40 = this->indices;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(97)
		int tmp41 = (i + (int)5);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(97)
		int tmp42 = (j + (int)3);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(97)
		hx::__ArrayImplRef(tmp40,tmp41) = tmp42;
		HX_STACK_LINE(98)
		hx::AddEq(i,(int)6);
		HX_STACK_LINE(99)
		hx::AddEq(j,(int)4);
	}
	HX_STACK_LINE(102)
	::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp21 = ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State_obj::__new();		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(102)
	this->currentState = tmp21;
	HX_STACK_LINE(103)
	this->dirty = true;
	HX_STACK_LINE(104)
	this->drawing = false;
	HX_STACK_LINE(105)
	this->batchedSprites = (int)0;
	HX_STACK_LINE(107)
	::lime::graphics::GLRenderContext tmp22 = gl;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(107)
	this->setContext(tmp22);
}
;
	return null();
}

//SpriteBatch_obj::~SpriteBatch_obj() { }

Dynamic SpriteBatch_obj::__CreateEmpty() { return  new SpriteBatch_obj; }
hx::ObjectPtr< SpriteBatch_obj > SpriteBatch_obj::__new(::lime::graphics::GLRenderContext gl,hx::Null< int >  __o_maxSprites)
{  hx::ObjectPtr< SpriteBatch_obj > _result_ = new SpriteBatch_obj();
	_result_->__construct(gl,__o_maxSprites);
	return _result_;}

Dynamic SpriteBatch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SpriteBatch_obj > _result_ = new SpriteBatch_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void SpriteBatch_obj::destroy( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","destroy",0xc9b590c0,"openfl._internal.renderer.opengl.utils.SpriteBatch.destroy","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",111,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(112)
		::openfl::_internal::renderer::opengl::utils::VertexArray tmp = this->vertexArray;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(112)
		tmp->destroy();
		HX_STACK_LINE(113)
		this->vertexArray = null();
		HX_STACK_LINE(115)
		this->indices = null();
		HX_STACK_LINE(116)
		{
			HX_STACK_LINE(116)
			::lime::graphics::opengl::GLBuffer tmp1 = this->indexBuffer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(116)
			::lime::graphics::opengl::GLBuffer buffer = tmp1;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(116)
			{
				HX_STACK_LINE(116)
				Dynamic tmp2 = buffer->id;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(116)
				::lime::graphics::opengl::GL_obj::lime_gl_delete_buffer(tmp2);
				HX_STACK_LINE(116)
				buffer->invalidate();
			}
		}
		HX_STACK_LINE(118)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp1 = this->currentState;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(118)
		tmp1->destroy();
		HX_STACK_LINE(119)
		{
			HX_STACK_LINE(119)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(119)
			Array< ::Dynamic > _g1 = this->states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(119)
			while((true)){
				HX_STACK_LINE(119)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(119)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(119)
				if ((tmp3)){
					HX_STACK_LINE(119)
					break;
				}
				HX_STACK_LINE(119)
				::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp4 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(119)
				::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(119)
				++(_g);
				HX_STACK_LINE(120)
				state->destroy();
			}
		}
		HX_STACK_LINE(123)
		this->gl = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteBatch_obj,destroy,(void))

Void SpriteBatch_obj::begin( ::openfl::_internal::renderer::RenderSession renderSession,::openfl::geom::Rectangle clipRect){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","begin",0x5812b06f,"openfl._internal.renderer.opengl.utils.SpriteBatch.begin","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",126,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_ARG(clipRect,"clipRect")
		HX_STACK_LINE(128)
		this->renderSession = renderSession;
		HX_STACK_LINE(129)
		::openfl::_internal::renderer::opengl::shaders2::DefaultShader tmp = renderSession->shaderManager->defaultShader;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(129)
		this->shader = tmp;
		HX_STACK_LINE(130)
		this->drawing = true;
		HX_STACK_LINE(131)
		::openfl::geom::Rectangle tmp1 = clipRect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(131)
		this->start(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SpriteBatch_obj,begin,(void))

Void SpriteBatch_obj::finish( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","finish",0xa3eff74d,"openfl._internal.renderer.opengl.utils.SpriteBatch.finish","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",135,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(136)
		this->stop();
		HX_STACK_LINE(137)
		this->clipRect = null();
		HX_STACK_LINE(138)
		this->drawing = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteBatch_obj,finish,(void))

Void SpriteBatch_obj::start( ::openfl::geom::Rectangle clipRect){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","start",0x2bc83aa8,"openfl._internal.renderer.opengl.utils.SpriteBatch.start","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",141,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(clipRect,"clipRect")
		HX_STACK_LINE(142)
		bool tmp = this->drawing;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(142)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(142)
		if ((tmp1)){
			HX_STACK_LINE(143)
			HX_STACK_DO_THROW(HX_HCSTRING("Call Spritebatch.begin() before start()","\x33","\x9f","\x89","\x3f"));
		}
		HX_STACK_LINE(145)
		this->dirty = true;
		HX_STACK_LINE(146)
		this->clipRect = clipRect;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteBatch_obj,start,(void))

Void SpriteBatch_obj::stop( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","stop",0x475f147c,"openfl._internal.renderer.opengl.utils.SpriteBatch.stop","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",150,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(150)
		this->flush();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteBatch_obj,stop,(void))

Void SpriteBatch_obj::renderBitmapData( ::openfl::display::BitmapData bitmapData,bool smoothing,::openfl::geom::Matrix matrix,::openfl::geom::ColorTransform ct,Dynamic __o_alpha,::openfl::display::BlendMode blendMode,::openfl::display::PixelSnapping pixelSnapping,hx::Null< bool >  __o_bgra){
Dynamic alpha = __o_alpha.Default(1);
bool bgra = __o_bgra.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","renderBitmapData",0x214be029,"openfl._internal.renderer.opengl.utils.SpriteBatch.renderBitmapData","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",153,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_ARG(smoothing,"smoothing")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(ct,"ct")
	HX_STACK_ARG(alpha,"alpha")
	HX_STACK_ARG(blendMode,"blendMode")
	HX_STACK_ARG(pixelSnapping,"pixelSnapping")
	HX_STACK_ARG(bgra,"bgra")
{
		HX_STACK_LINE(154)
		bool tmp = (bitmapData == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(154)
		if ((tmp)){
			HX_STACK_LINE(154)
			return null();
		}
		HX_STACK_LINE(155)
		::lime::graphics::GLRenderContext tmp1 = this->gl;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(155)
		::lime::graphics::opengl::GLTexture tmp2 = bitmapData->getTexture(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(155)
		::lime::graphics::opengl::GLTexture texture = tmp2;		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(157)
		int tmp3 = this->batchedSprites;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(157)
		int tmp4 = this->maxSprites;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(157)
		bool tmp5 = (tmp3 >= tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(157)
		if ((tmp5)){
			HX_STACK_LINE(158)
			this->flush();
		}
		HX_STACK_LINE(161)
		::openfl::display::TextureUvs uvs = bitmapData->__uvData;		HX_STACK_VAR(uvs,"uvs");
		HX_STACK_LINE(162)
		bool tmp6 = (uvs == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(162)
		if ((tmp6)){
			HX_STACK_LINE(162)
			return null();
		}
		HX_STACK_LINE(164)
		Float tmp7 = (alpha * (int)255);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(164)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(164)
		int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(164)
		int tmp10 = (int(tmp9) << int((int)24));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(164)
		int tmp11 = (int(tmp10) | int((int)16777215));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(164)
		int color = tmp11;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(167)
		{
			HX_STACK_LINE(167)
			bool tmp12 = true;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(167)
			this->enableColor = tmp12;
			HX_STACK_LINE(167)
			bool tmp13 = this->enableColor;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(167)
			bool tmp14 = this->lastEnableColor;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(167)
			bool tmp15 = (tmp13 != tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(167)
			if ((tmp15)){
				HX_STACK_LINE(167)
				this->flush();
				HX_STACK_LINE(167)
				bool tmp16 = this->enableColor;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(167)
				this->lastEnableColor = tmp16;
			}
			HX_STACK_LINE(167)
			bool tmp16 = this->lastEnableColor;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(167)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp17 = this->attributes->__get((int)2).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(167)
			tmp17->enabled = tmp16;
			HX_STACK_LINE(167)
			int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(167)
			{
				HX_STACK_LINE(167)
				int r = (int)0;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(167)
				{
					HX_STACK_LINE(167)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(167)
					Array< ::Dynamic > _g1 = this->attributes;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(167)
					while((true)){
						HX_STACK_LINE(167)
						bool tmp19 = (_g < _g1->length);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(167)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(167)
						if ((tmp20)){
							HX_STACK_LINE(167)
							break;
						}
						HX_STACK_LINE(167)
						::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp21 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(167)
						::openfl::_internal::renderer::opengl::utils::VertexAttribute a = tmp21;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(167)
						++(_g);
						HX_STACK_LINE(167)
						bool tmp22 = a->enabled;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(167)
						if ((tmp22)){
							HX_STACK_LINE(167)
							int tmp23 = a->components;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(167)
							int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(167)
							{
								HX_STACK_LINE(167)
								int _g2 = a->type;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(167)
								int tmp25 = _g2;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(167)
								switch( (int)(tmp25)){
									case (int)5120: case (int)5121: {
										HX_STACK_LINE(167)
										tmp24 = (int)1;
									}
									;break;
									case (int)5122: case (int)5123: {
										HX_STACK_LINE(167)
										tmp24 = (int)2;
									}
									;break;
									default: {
										HX_STACK_LINE(167)
										tmp24 = (int)4;
									}
								}
							}
							HX_STACK_LINE(167)
							int tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(167)
							Float tmp26 = (Float(tmp25) / Float((int)4));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(167)
							int tmp27 = ::Math_obj::floor(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(167)
							hx::AddEq(r,tmp27);
						}
					}
				}
				HX_STACK_LINE(167)
				tmp18 = r;
			}
			HX_STACK_LINE(167)
			this->elementsPerVertex = tmp18;
		}
		HX_STACK_LINE(169)
		int tmp12 = this->batchedSprites;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(169)
		int tmp13 = (tmp12 * (int)4);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(169)
		int tmp14 = this->elementsPerVertex;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(169)
		int tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(169)
		int index = tmp15;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(170)
		{
			HX_STACK_LINE(170)
			int index1 = index;		HX_STACK_VAR(index1,"index1");
			HX_STACK_LINE(170)
			Float width = bitmapData->width;		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(170)
			Float height = bitmapData->height;		HX_STACK_VAR(height,"height");
			HX_STACK_LINE(170)
			::openfl::display::PixelSnapping pixelSnapping1 = pixelSnapping;		HX_STACK_VAR(pixelSnapping1,"pixelSnapping1");
			HX_STACK_LINE(170)
			Float w0;		HX_STACK_VAR(w0,"w0");
			HX_STACK_LINE(170)
			Float w1;		HX_STACK_VAR(w1,"w1");
			HX_STACK_LINE(170)
			Float h0;		HX_STACK_VAR(h0,"h0");
			HX_STACK_LINE(170)
			Float h1;		HX_STACK_VAR(h1,"h1");
			HX_STACK_LINE(170)
			bool tmp16 = true;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(170)
			if ((tmp16)){
				HX_STACK_LINE(170)
				w0 = width;
				HX_STACK_LINE(170)
				w1 = (int)0;
				HX_STACK_LINE(170)
				h0 = height;
				HX_STACK_LINE(170)
				h1 = (int)0;
			}
			else{
				HX_STACK_LINE(170)
				Float tmp17 = width;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(170)
				Float tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(170)
				Float tmp19 = ((int)1 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(170)
				Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(170)
				w0 = tmp20;
				HX_STACK_LINE(170)
				Float tmp21 = width;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(170)
				Float tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(170)
				Float tmp23 = -(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(170)
				Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(170)
				w1 = tmp24;
				HX_STACK_LINE(170)
				Float tmp25 = height;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(170)
				Float tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(170)
				Float tmp27 = ((int)1 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(170)
				Float tmp28 = (tmp25 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(170)
				h0 = tmp28;
				HX_STACK_LINE(170)
				Float tmp29 = height;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(170)
				Float tmp30 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(170)
				Float tmp31 = -(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(170)
				Float tmp32 = (tmp29 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(170)
				h1 = tmp32;
			}
			HX_STACK_LINE(170)
			bool tmp17 = (pixelSnapping1 == null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(170)
			if ((tmp17)){
				HX_STACK_LINE(170)
				pixelSnapping1 = ::openfl::display::PixelSnapping_obj::NEVER;
			}
			HX_STACK_LINE(170)
			bool tmp18 = (pixelSnapping1 != ::openfl::display::PixelSnapping_obj::NEVER);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(170)
			bool snap = tmp18;		HX_STACK_VAR(snap,"snap");
			HX_STACK_LINE(170)
			Float a = matrix->a;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(170)
			Float b = matrix->b;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(170)
			Float c = matrix->c;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(170)
			Float d = matrix->d;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(170)
			Float tx = matrix->tx;		HX_STACK_VAR(tx,"tx");
			HX_STACK_LINE(170)
			Float ty = matrix->ty;		HX_STACK_VAR(ty,"ty");
			HX_STACK_LINE(170)
			int cOffsetIndex = (int)0;		HX_STACK_VAR(cOffsetIndex,"cOffsetIndex");
			HX_STACK_LINE(170)
			bool tmp19 = snap;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(170)
			bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(170)
			if ((tmp20)){
				HX_STACK_LINE(170)
				::lime::utils::Float32Array tmp21 = this->positions;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(170)
				int tmp22 = (index1)++;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(170)
				Float tmp23 = (a * w1);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(170)
				Float tmp24 = (c * h1);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(170)
				Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(170)
				Float tmp26 = tx;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(170)
				Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(tmp21,tmp22) = tmp27;
				HX_STACK_LINE(170)
				::lime::utils::Float32Array tmp28 = this->positions;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(170)
				int tmp29 = (index1)++;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(170)
				Float tmp30 = (d * h1);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(170)
				Float tmp31 = (b * w1);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(170)
				Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(170)
				Float tmp33 = ty;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(170)
				Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(tmp28,tmp29) = tmp34;
			}
			else{
				HX_STACK_LINE(170)
				::lime::utils::Float32Array tmp21 = this->positions;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(170)
				int tmp22 = (index1)++;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(170)
				Float tmp23 = (a * w1);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(170)
				Float tmp24 = (c * h1);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(170)
				Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(170)
				Float tmp26 = tx;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(170)
				Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(170)
				Float tmp28 = ::Math_obj::fround(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(tmp21,tmp22) = tmp28;
				HX_STACK_LINE(170)
				::lime::utils::Float32Array tmp29 = this->positions;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(170)
				int tmp30 = (index1)++;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(170)
				Float tmp31 = (d * h1);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(170)
				Float tmp32 = (b * w1);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(170)
				Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(170)
				Float tmp34 = ty;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(170)
				Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(170)
				Float tmp36 = ::Math_obj::fround(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(tmp29,tmp30) = tmp36;
			}
			HX_STACK_LINE(170)
			::lime::utils::Float32Array tmp21 = this->positions;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(170)
			int tmp22 = (index1)++;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(170)
			Float tmp23 = uvs->x0;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(170)
			hx::__ArrayImplRef(tmp21,tmp22) = tmp23;
			HX_STACK_LINE(170)
			::lime::utils::Float32Array tmp24 = this->positions;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(170)
			int tmp25 = (index1)++;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(170)
			Float tmp26 = uvs->y0;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(170)
			hx::__ArrayImplRef(tmp24,tmp25) = tmp26;
			HX_STACK_LINE(170)
			bool tmp27 = this->enableColor;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(170)
			if ((tmp27)){
				HX_STACK_LINE(170)
				::lime::utils::UInt32Array tmp28 = this->colors;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(170)
				int tmp29 = (index1)++;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(170)
				int tmp30 = color;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(tmp28,tmp29) = tmp30;
			}
			HX_STACK_LINE(170)
			bool tmp28 = snap;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(170)
			bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(170)
			if ((tmp29)){
				HX_STACK_LINE(170)
				::lime::utils::Float32Array tmp30 = this->positions;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(170)
				int tmp31 = (index1)++;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(170)
				Float tmp32 = (a * w0);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(170)
				Float tmp33 = (c * h1);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(170)
				Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(170)
				Float tmp35 = tx;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(170)
				Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(tmp30,tmp31) = tmp36;
				HX_STACK_LINE(170)
				::lime::utils::Float32Array tmp37 = this->positions;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(170)
				int tmp38 = (index1)++;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(170)
				Float tmp39 = (d * h1);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(170)
				Float tmp40 = (b * w0);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(170)
				Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(170)
				Float tmp42 = ty;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(170)
				Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(tmp37,tmp38) = tmp43;
			}
			else{
				HX_STACK_LINE(170)
				::lime::utils::Float32Array tmp30 = this->positions;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(170)
				int tmp31 = (index1)++;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(170)
				Float tmp32 = (a * w0);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(170)
				Float tmp33 = (c * h1);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(170)
				Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(170)
				Float tmp35 = tx;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(170)
				Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(170)
				Float tmp37 = ::Math_obj::fround(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(tmp30,tmp31) = tmp37;
				HX_STACK_LINE(170)
				::lime::utils::Float32Array tmp38 = this->positions;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(170)
				int tmp39 = (index1)++;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(170)
				Float tmp40 = (d * h1);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(170)
				Float tmp41 = (b * w0);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(170)
				Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(170)
				Float tmp43 = ty;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(170)
				Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(170)
				Float tmp45 = ::Math_obj::fround(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(tmp38,tmp39) = tmp45;
			}
			HX_STACK_LINE(170)
			::lime::utils::Float32Array tmp30 = this->positions;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(170)
			int tmp31 = (index1)++;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(170)
			Float tmp32 = uvs->x1;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(170)
			hx::__ArrayImplRef(tmp30,tmp31) = tmp32;
			HX_STACK_LINE(170)
			::lime::utils::Float32Array tmp33 = this->positions;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(170)
			int tmp34 = (index1)++;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(170)
			Float tmp35 = uvs->y1;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(170)
			hx::__ArrayImplRef(tmp33,tmp34) = tmp35;
			HX_STACK_LINE(170)
			bool tmp36 = this->enableColor;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(170)
			if ((tmp36)){
				HX_STACK_LINE(170)
				::lime::utils::UInt32Array tmp37 = this->colors;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(170)
				int tmp38 = (index1)++;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(170)
				int tmp39 = color;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(tmp37,tmp38) = tmp39;
			}
			HX_STACK_LINE(170)
			bool tmp37 = snap;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(170)
			bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(170)
			if ((tmp38)){
				HX_STACK_LINE(170)
				::lime::utils::Float32Array tmp39 = this->positions;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(170)
				int tmp40 = (index1)++;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(170)
				Float tmp41 = (a * w0);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(170)
				Float tmp42 = (c * h0);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(170)
				Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(170)
				Float tmp44 = tx;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(170)
				Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(tmp39,tmp40) = tmp45;
				HX_STACK_LINE(170)
				::lime::utils::Float32Array tmp46 = this->positions;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(170)
				int tmp47 = (index1)++;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(170)
				Float tmp48 = (d * h0);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(170)
				Float tmp49 = (b * w0);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(170)
				Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(170)
				Float tmp51 = ty;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(170)
				Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(tmp46,tmp47) = tmp52;
			}
			else{
				HX_STACK_LINE(170)
				::lime::utils::Float32Array tmp39 = this->positions;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(170)
				int tmp40 = (index1)++;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(170)
				Float tmp41 = (a * w0);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(170)
				Float tmp42 = (c * h0);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(170)
				Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(170)
				Float tmp44 = tx;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(170)
				Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(170)
				Float tmp46 = ::Math_obj::fround(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(tmp39,tmp40) = tmp46;
				HX_STACK_LINE(170)
				::lime::utils::Float32Array tmp47 = this->positions;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(170)
				int tmp48 = (index1)++;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(170)
				Float tmp49 = (d * h0);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(170)
				Float tmp50 = (b * w0);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(170)
				Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(170)
				Float tmp52 = ty;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(170)
				Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(170)
				Float tmp54 = ::Math_obj::fround(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(tmp47,tmp48) = tmp54;
			}
			HX_STACK_LINE(170)
			::lime::utils::Float32Array tmp39 = this->positions;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(170)
			int tmp40 = (index1)++;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(170)
			Float tmp41 = uvs->x2;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(170)
			hx::__ArrayImplRef(tmp39,tmp40) = tmp41;
			HX_STACK_LINE(170)
			::lime::utils::Float32Array tmp42 = this->positions;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(170)
			int tmp43 = (index1)++;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(170)
			Float tmp44 = uvs->y2;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(170)
			hx::__ArrayImplRef(tmp42,tmp43) = tmp44;
			HX_STACK_LINE(170)
			bool tmp45 = this->enableColor;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(170)
			if ((tmp45)){
				HX_STACK_LINE(170)
				::lime::utils::UInt32Array tmp46 = this->colors;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(170)
				int tmp47 = (index1)++;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(170)
				int tmp48 = color;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(tmp46,tmp47) = tmp48;
			}
			HX_STACK_LINE(170)
			bool tmp46 = snap;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(170)
			bool tmp47 = !(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(170)
			if ((tmp47)){
				HX_STACK_LINE(170)
				::lime::utils::Float32Array tmp48 = this->positions;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(170)
				int tmp49 = (index1)++;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(170)
				Float tmp50 = (a * w1);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(170)
				Float tmp51 = (c * h0);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(170)
				Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(170)
				Float tmp53 = tx;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(170)
				Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(tmp48,tmp49) = tmp54;
				HX_STACK_LINE(170)
				::lime::utils::Float32Array tmp55 = this->positions;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(170)
				int tmp56 = (index1)++;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(170)
				Float tmp57 = (d * h0);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(170)
				Float tmp58 = (b * w1);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(170)
				Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(170)
				Float tmp60 = ty;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(170)
				Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(tmp55,tmp56) = tmp61;
			}
			else{
				HX_STACK_LINE(170)
				::lime::utils::Float32Array tmp48 = this->positions;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(170)
				int tmp49 = (index1)++;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(170)
				Float tmp50 = (a * w1);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(170)
				Float tmp51 = (c * h0);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(170)
				Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(170)
				Float tmp53 = tx;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(170)
				Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(170)
				Float tmp55 = ::Math_obj::fround(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(tmp48,tmp49) = tmp55;
				HX_STACK_LINE(170)
				::lime::utils::Float32Array tmp56 = this->positions;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(170)
				int tmp57 = (index1)++;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(170)
				Float tmp58 = (d * h0);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(170)
				Float tmp59 = (b * w1);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(170)
				Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(170)
				Float tmp61 = ty;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(170)
				Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(170)
				Float tmp63 = ::Math_obj::fround(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(tmp56,tmp57) = tmp63;
			}
			HX_STACK_LINE(170)
			::lime::utils::Float32Array tmp48 = this->positions;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(170)
			int tmp49 = (index1)++;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(170)
			Float tmp50 = uvs->x3;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(170)
			hx::__ArrayImplRef(tmp48,tmp49) = tmp50;
			HX_STACK_LINE(170)
			::lime::utils::Float32Array tmp51 = this->positions;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(170)
			int tmp52 = (index1)++;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(170)
			Float tmp53 = uvs->y3;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(170)
			hx::__ArrayImplRef(tmp51,tmp52) = tmp53;
			HX_STACK_LINE(170)
			bool tmp54 = this->enableColor;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(170)
			if ((tmp54)){
				HX_STACK_LINE(170)
				::lime::utils::UInt32Array tmp55 = this->colors;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(170)
				int tmp56 = (index1)++;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(170)
				int tmp57 = color;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(170)
				hx::__ArrayImplRef(tmp55,tmp56) = tmp57;
			}
			HX_STACK_LINE(170)
			this->writtenVertexBytes = index1;
		}
		HX_STACK_LINE(172)
		int tmp16 = this->batchedSprites;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(172)
		::lime::graphics::opengl::GLTexture tmp17 = texture;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(172)
		bool tmp18 = smoothing;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(172)
		::openfl::display::BlendMode tmp19 = blendMode;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(172)
		::openfl::geom::ColorTransform tmp20 = ct;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(172)
		this->setState(tmp16,tmp17,tmp18,tmp19,tmp20,true);
		HX_STACK_LINE(174)
		(this->batchedSprites)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(SpriteBatch_obj,renderBitmapData,(void))

Void SpriteBatch_obj::renderTiles( ::openfl::display::DisplayObject object,::openfl::display::Tilesheet sheet,Array< Float > tileData,hx::Null< bool >  __o_smooth,hx::Null< int >  __o_flags,hx::Null< int >  __o_count){
bool smooth = __o_smooth.Default(false);
int flags = __o_flags.Default(0);
int count = __o_count.Default(-1);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","renderTiles",0xf159e915,"openfl._internal.renderer.opengl.utils.SpriteBatch.renderTiles","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",177,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(sheet,"sheet")
	HX_STACK_ARG(tileData,"tileData")
	HX_STACK_ARG(smooth,"smooth")
	HX_STACK_ARG(flags,"flags")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(179)
		::lime::graphics::GLRenderContext tmp = this->gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(179)
		::lime::graphics::opengl::GLTexture tmp1 = sheet->__bitmap->getTexture(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(179)
		::lime::graphics::opengl::GLTexture texture = tmp1;		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(180)
		bool tmp2 = (texture == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(180)
		if ((tmp2)){
			HX_STACK_LINE(180)
			return null();
		}
		HX_STACK_LINE(182)
		int tmp3 = (int(flags) & int((int)1));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(182)
		bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(182)
		bool useScale = tmp4;		HX_STACK_VAR(useScale,"useScale");
		HX_STACK_LINE(183)
		int tmp5 = (int(flags) & int((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(183)
		bool tmp6 = (tmp5 > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(183)
		bool useRotation = tmp6;		HX_STACK_VAR(useRotation,"useRotation");
		HX_STACK_LINE(184)
		int tmp7 = (int(flags) & int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(184)
		bool tmp8 = (tmp7 > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(184)
		bool useTransform = tmp8;		HX_STACK_VAR(useTransform,"useTransform");
		HX_STACK_LINE(185)
		int tmp9 = (int(flags) & int((int)4));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(185)
		bool tmp10 = (tmp9 > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(185)
		bool useRGB = tmp10;		HX_STACK_VAR(useRGB,"useRGB");
		HX_STACK_LINE(186)
		int tmp11 = (int(flags) & int((int)8));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(186)
		bool tmp12 = (tmp11 > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(186)
		bool useAlpha = tmp12;		HX_STACK_VAR(useAlpha,"useAlpha");
		HX_STACK_LINE(187)
		int tmp13 = (int(flags) & int((int)32));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(187)
		bool tmp14 = (tmp13 > (int)0);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(187)
		bool useRect = tmp14;		HX_STACK_VAR(useRect,"useRect");
		HX_STACK_LINE(188)
		int tmp15 = (int(flags) & int((int)64));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(188)
		bool tmp16 = (tmp15 > (int)0);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(188)
		bool useOrigin = tmp16;		HX_STACK_VAR(useOrigin,"useOrigin");
		HX_STACK_LINE(190)
		::openfl::display::BlendMode tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(190)
		{
			HX_STACK_LINE(190)
			int tmp18 = (int(flags) & int((int)983040));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(190)
			int _g = tmp18;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(190)
			int tmp19 = _g;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(190)
			switch( (int)(tmp19)){
				case (int)65536: {
					HX_STACK_LINE(191)
					tmp17 = ::openfl::display::BlendMode_obj::ADD;
				}
				;break;
				case (int)131072: {
					HX_STACK_LINE(192)
					tmp17 = ::openfl::display::BlendMode_obj::MULTIPLY;
				}
				;break;
				case (int)262144: {
					HX_STACK_LINE(193)
					tmp17 = ::openfl::display::BlendMode_obj::SCREEN;
				}
				;break;
				case (int)524288: {
					HX_STACK_LINE(194)
					tmp17 = ::openfl::display::BlendMode_obj::SUBTRACT;
				}
				;break;
				default: {
					HX_STACK_LINE(195)
					tmp17 = ::openfl::display::BlendMode_obj::NORMAL;
				}
			}
		}
		HX_STACK_LINE(190)
		::openfl::display::BlendMode blendMode = tmp17;		HX_STACK_VAR(blendMode,"blendMode");
		HX_STACK_LINE(198)
		bool tmp18 = useTransform;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(198)
		if ((tmp18)){
			HX_STACK_LINE(198)
			useScale = false;
			HX_STACK_LINE(198)
			useRotation = false;
		}
		HX_STACK_LINE(200)
		int scaleIndex = (int)0;		HX_STACK_VAR(scaleIndex,"scaleIndex");
		HX_STACK_LINE(201)
		int rotationIndex = (int)0;		HX_STACK_VAR(rotationIndex,"rotationIndex");
		HX_STACK_LINE(202)
		int rgbIndex = (int)0;		HX_STACK_VAR(rgbIndex,"rgbIndex");
		HX_STACK_LINE(203)
		int alphaIndex = (int)0;		HX_STACK_VAR(alphaIndex,"alphaIndex");
		HX_STACK_LINE(204)
		int transformIndex = (int)0;		HX_STACK_VAR(transformIndex,"transformIndex");
		HX_STACK_LINE(206)
		int numValues = (int)3;		HX_STACK_VAR(numValues,"numValues");
		HX_STACK_LINE(208)
		bool tmp19 = useRect;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(208)
		if ((tmp19)){
			HX_STACK_LINE(208)
			bool tmp20 = useOrigin;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(208)
			int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(208)
			if ((tmp20)){
				HX_STACK_LINE(208)
				tmp21 = (int)8;
			}
			else{
				HX_STACK_LINE(208)
				tmp21 = (int)6;
			}
			HX_STACK_LINE(208)
			numValues = tmp21;
		}
		HX_STACK_LINE(209)
		bool tmp20 = useScale;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(209)
		if ((tmp20)){
			HX_STACK_LINE(209)
			scaleIndex = numValues;
			HX_STACK_LINE(209)
			(numValues)++;
		}
		HX_STACK_LINE(210)
		bool tmp21 = useRotation;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(210)
		if ((tmp21)){
			HX_STACK_LINE(210)
			rotationIndex = numValues;
			HX_STACK_LINE(210)
			(numValues)++;
		}
		HX_STACK_LINE(211)
		bool tmp22 = useTransform;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(211)
		if ((tmp22)){
			HX_STACK_LINE(211)
			transformIndex = numValues;
			HX_STACK_LINE(211)
			hx::AddEq(numValues,(int)4);
		}
		HX_STACK_LINE(212)
		bool tmp23 = useRGB;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(212)
		if ((tmp23)){
			HX_STACK_LINE(212)
			rgbIndex = numValues;
			HX_STACK_LINE(212)
			hx::AddEq(numValues,(int)3);
		}
		HX_STACK_LINE(213)
		bool tmp24 = useAlpha;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(213)
		if ((tmp24)){
			HX_STACK_LINE(213)
			alphaIndex = numValues;
			HX_STACK_LINE(213)
			(numValues)++;
		}
		HX_STACK_LINE(215)
		int totalCount = tileData->length;		HX_STACK_VAR(totalCount,"totalCount");
		HX_STACK_LINE(216)
		bool tmp25 = (count >= (int)0);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(216)
		bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(216)
		if ((tmp25)){
			HX_STACK_LINE(216)
			tmp26 = (totalCount > count);
		}
		else{
			HX_STACK_LINE(216)
			tmp26 = false;
		}
		HX_STACK_LINE(216)
		if ((tmp26)){
			HX_STACK_LINE(216)
			totalCount = count;
		}
		HX_STACK_LINE(217)
		Float tmp27 = (Float(totalCount) / Float(numValues));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(217)
		int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(217)
		int itemCount = tmp28;		HX_STACK_VAR(itemCount,"itemCount");
		HX_STACK_LINE(218)
		int iIndex = (int)0;		HX_STACK_VAR(iIndex,"iIndex");
		HX_STACK_LINE(220)
		int tileID = (int)-1;		HX_STACK_VAR(tileID,"tileID");
		HX_STACK_LINE(221)
		::openfl::geom::Rectangle rect = sheet->__rectTile;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(222)
		::openfl::geom::Rectangle tileUV = sheet->__rectUV;		HX_STACK_VAR(tileUV,"tileUV");
		HX_STACK_LINE(223)
		::openfl::geom::Point center = sheet->__point;		HX_STACK_VAR(center,"center");
		HX_STACK_LINE(224)
		Float x = ((Float)0.0);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(224)
		Float y = ((Float)0.0);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(225)
		Float alpha = ((Float)1.0);		HX_STACK_VAR(alpha,"alpha");
		HX_STACK_LINE(225)
		int tint = (int)16777215;		HX_STACK_VAR(tint,"tint");
		HX_STACK_LINE(225)
		int color = (int)-1;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(226)
		Float scale = ((Float)1.0);		HX_STACK_VAR(scale,"scale");
		HX_STACK_LINE(226)
		Float rotation = ((Float)0.0);		HX_STACK_VAR(rotation,"rotation");
		HX_STACK_LINE(227)
		Float cosTheta = ((Float)1.0);		HX_STACK_VAR(cosTheta,"cosTheta");
		HX_STACK_LINE(227)
		Float sinTheta = ((Float)0.0);		HX_STACK_VAR(sinTheta,"sinTheta");
		HX_STACK_LINE(228)
		Float a = ((Float)0.0);		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(228)
		Float b = ((Float)0.0);		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(228)
		Float c = ((Float)0.0);		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(228)
		Float d = ((Float)0.0);		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(228)
		Float tx = ((Float)0.0);		HX_STACK_VAR(tx,"tx");
		HX_STACK_LINE(228)
		Float ty = ((Float)0.0);		HX_STACK_VAR(ty,"ty");
		HX_STACK_LINE(229)
		Float ox = ((Float)0.0);		HX_STACK_VAR(ox,"ox");
		HX_STACK_LINE(229)
		Float oy = ((Float)0.0);		HX_STACK_VAR(oy,"oy");
		HX_STACK_LINE(230)
		::openfl::geom::Matrix tmp29 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(230)
		::openfl::geom::Matrix matrix = tmp29;		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(231)
		::openfl::geom::Matrix oMatrix = object->__worldTransform;		HX_STACK_VAR(oMatrix,"oMatrix");
		HX_STACK_LINE(232)
		::openfl::display::TextureUvs tmp30 = ::openfl::display::TextureUvs_obj::__new();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(232)
		::openfl::display::TextureUvs uvs = tmp30;		HX_STACK_VAR(uvs,"uvs");
		HX_STACK_LINE(234)
		int bIndex = (int)0;		HX_STACK_VAR(bIndex,"bIndex");
		HX_STACK_LINE(237)
		{
			HX_STACK_LINE(237)
			bool tmp31 = true;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(237)
			this->enableColor = tmp31;
			HX_STACK_LINE(237)
			bool tmp32 = this->enableColor;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(237)
			bool tmp33 = this->lastEnableColor;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(237)
			bool tmp34 = (tmp32 != tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(237)
			if ((tmp34)){
				HX_STACK_LINE(237)
				this->flush();
				HX_STACK_LINE(237)
				bool tmp35 = this->enableColor;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(237)
				this->lastEnableColor = tmp35;
			}
			HX_STACK_LINE(237)
			bool tmp35 = this->lastEnableColor;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(237)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp36 = this->attributes->__get((int)2).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(237)
			tmp36->enabled = tmp35;
			HX_STACK_LINE(237)
			int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(237)
			{
				HX_STACK_LINE(237)
				int r = (int)0;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(237)
				{
					HX_STACK_LINE(237)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(237)
					Array< ::Dynamic > _g1 = this->attributes;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(237)
					while((true)){
						HX_STACK_LINE(237)
						bool tmp38 = (_g < _g1->length);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(237)
						bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(237)
						if ((tmp39)){
							HX_STACK_LINE(237)
							break;
						}
						HX_STACK_LINE(237)
						::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp40 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(237)
						::openfl::_internal::renderer::opengl::utils::VertexAttribute a1 = tmp40;		HX_STACK_VAR(a1,"a1");
						HX_STACK_LINE(237)
						++(_g);
						HX_STACK_LINE(237)
						bool tmp41 = a1->enabled;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(237)
						if ((tmp41)){
							HX_STACK_LINE(237)
							int tmp42 = a1->components;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(237)
							int tmp43;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(237)
							{
								HX_STACK_LINE(237)
								int _g2 = a1->type;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(237)
								int tmp44 = _g2;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(237)
								switch( (int)(tmp44)){
									case (int)5120: case (int)5121: {
										HX_STACK_LINE(237)
										tmp43 = (int)1;
									}
									;break;
									case (int)5122: case (int)5123: {
										HX_STACK_LINE(237)
										tmp43 = (int)2;
									}
									;break;
									default: {
										HX_STACK_LINE(237)
										tmp43 = (int)4;
									}
								}
							}
							HX_STACK_LINE(237)
							int tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(237)
							Float tmp45 = (Float(tmp44) / Float((int)4));		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(237)
							int tmp46 = ::Math_obj::floor(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(237)
							hx::AddEq(r,tmp46);
						}
					}
				}
				HX_STACK_LINE(237)
				tmp37 = r;
			}
			HX_STACK_LINE(237)
			this->elementsPerVertex = tmp37;
		}
		HX_STACK_LINE(239)
		while((true)){
			HX_STACK_LINE(239)
			bool tmp31 = (iIndex < totalCount);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(239)
			bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(239)
			if ((tmp32)){
				HX_STACK_LINE(239)
				break;
			}
			HX_STACK_LINE(241)
			int tmp33 = this->batchedSprites;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(241)
			int tmp34 = this->maxSprites;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(241)
			bool tmp35 = (tmp33 >= tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(241)
			if ((tmp35)){
				HX_STACK_LINE(242)
				this->flush();
			}
			HX_STACK_LINE(245)
			int tmp36 = iIndex;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(245)
			Float tmp37 = tileData->__get(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(245)
			x = tmp37;
			HX_STACK_LINE(246)
			int tmp38 = (iIndex + (int)1);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(246)
			Float tmp39 = tileData->__get(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(246)
			y = tmp39;
			HX_STACK_LINE(248)
			bool tmp40 = useRect;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(248)
			if ((tmp40)){
				HX_STACK_LINE(249)
				tileID = (int)-1;
				HX_STACK_LINE(251)
				int tmp41 = (iIndex + (int)2);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(251)
				Float tmp42 = tileData->__get(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(251)
				rect->x = tmp42;
				HX_STACK_LINE(252)
				int tmp43 = (iIndex + (int)3);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(252)
				Float tmp44 = tileData->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(252)
				rect->y = tmp44;
				HX_STACK_LINE(253)
				int tmp45 = (iIndex + (int)4);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(253)
				Float tmp46 = tileData->__get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(253)
				rect->width = tmp46;
				HX_STACK_LINE(254)
				int tmp47 = (iIndex + (int)5);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(254)
				Float tmp48 = tileData->__get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(254)
				rect->height = tmp48;
				HX_STACK_LINE(256)
				bool tmp49 = useOrigin;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(256)
				if ((tmp49)){
					HX_STACK_LINE(257)
					int tmp50 = (iIndex + (int)6);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(257)
					Float tmp51 = tileData->__get(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(257)
					center->x = tmp51;
					HX_STACK_LINE(258)
					int tmp52 = (iIndex + (int)7);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(258)
					Float tmp53 = tileData->__get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(258)
					center->y = tmp53;
				}
				else{
					HX_STACK_LINE(260)
					center->x = (int)0;
					HX_STACK_LINE(260)
					center->y = (int)0;
				}
				HX_STACK_LINE(263)
				Float tmp50 = rect->get_left();		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(263)
				int tmp51 = sheet->__bitmap->width;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(263)
				Float tmp52 = (Float(tmp50) / Float(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(263)
				Float tmp53 = rect->get_top();		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(263)
				int tmp54 = sheet->__bitmap->height;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(263)
				Float tmp55 = (Float(tmp53) / Float(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(263)
				Float tmp56 = rect->get_right();		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(263)
				int tmp57 = sheet->__bitmap->width;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(263)
				Float tmp58 = (Float(tmp56) / Float(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(263)
				Float tmp59 = rect->get_bottom();		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(263)
				int tmp60 = sheet->__bitmap->height;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(263)
				Float tmp61 = (Float(tmp59) / Float(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(263)
				tileUV->setTo(tmp52,tmp55,tmp58,tmp61);
			}
			else{
				HX_STACK_LINE(265)
				int tmp41 = (iIndex + (int)2);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(265)
				Float tmp42 = tileData->__get(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(265)
				int tmp43 = ::Std_obj::_int(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(265)
				tileID = tmp43;
				HX_STACK_LINE(266)
				::openfl::geom::Rectangle tmp44 = sheet->__tileRects->__get(tileID).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(266)
				rect = tmp44;
				HX_STACK_LINE(267)
				::openfl::geom::Point tmp45 = sheet->__centerPoints->__get(tileID).StaticCast< ::openfl::geom::Point >();		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(267)
				center = tmp45;
				HX_STACK_LINE(268)
				::openfl::geom::Rectangle tmp46 = sheet->__tileUVs->__get(tileID).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(268)
				tileUV = tmp46;
			}
			HX_STACK_LINE(271)
			bool tmp41 = (rect != null());		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(271)
			bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(271)
			bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(271)
			if ((tmp42)){
				HX_STACK_LINE(271)
				tmp43 = (rect->width > (int)0);
			}
			else{
				HX_STACK_LINE(271)
				tmp43 = false;
			}
			HX_STACK_LINE(271)
			bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(271)
			bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(271)
			if ((tmp44)){
				HX_STACK_LINE(271)
				tmp45 = (rect->height > (int)0);
			}
			else{
				HX_STACK_LINE(271)
				tmp45 = false;
			}
			HX_STACK_LINE(271)
			bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(271)
			if ((tmp45)){
				HX_STACK_LINE(271)
				tmp46 = (center != null());
			}
			else{
				HX_STACK_LINE(271)
				tmp46 = false;
			}
			HX_STACK_LINE(271)
			if ((tmp46)){
				HX_STACK_LINE(273)
				alpha = (int)1;
				HX_STACK_LINE(274)
				tint = (int)16777215;
				HX_STACK_LINE(275)
				a = (int)1;
				HX_STACK_LINE(275)
				b = (int)0;
				HX_STACK_LINE(275)
				c = (int)0;
				HX_STACK_LINE(275)
				d = (int)1;
				HX_STACK_LINE(275)
				tx = (int)0;
				HX_STACK_LINE(275)
				ty = (int)0;
				HX_STACK_LINE(276)
				scale = ((Float)1.0);
				HX_STACK_LINE(277)
				rotation = ((Float)0.0);
				HX_STACK_LINE(278)
				cosTheta = ((Float)1.0);
				HX_STACK_LINE(279)
				sinTheta = ((Float)0.0);
				HX_STACK_LINE(280)
				matrix->identity();
				HX_STACK_LINE(282)
				bool tmp47 = useAlpha;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(282)
				if ((tmp47)){
					HX_STACK_LINE(283)
					int tmp48 = (iIndex + alphaIndex);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(283)
					Float tmp49 = tileData->__get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(283)
					Float tmp50 = object->__worldAlpha;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(283)
					Float tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(283)
					alpha = tmp51;
				}
				else{
					HX_STACK_LINE(285)
					alpha = object->__worldAlpha;
				}
				HX_STACK_LINE(288)
				bool tmp48 = useRGB;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(288)
				if ((tmp48)){
					HX_STACK_LINE(289)
					int tmp49 = (iIndex + rgbIndex);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(289)
					Float tmp50 = tileData->__get(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(289)
					Float tmp51 = (tmp50 * (int)255);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(289)
					int tmp52 = ::Std_obj::_int(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(289)
					int tmp53 = (int(tmp52) << int((int)16));		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(289)
					int tmp54 = (iIndex + rgbIndex);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(289)
					int tmp55 = (tmp54 + (int)1);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(289)
					Float tmp56 = tileData->__get(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(289)
					Float tmp57 = (tmp56 * (int)255);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(289)
					int tmp58 = ::Std_obj::_int(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(289)
					int tmp59 = (int(tmp58) << int((int)8));		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(289)
					int tmp60 = (int(tmp53) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(289)
					int tmp61 = (iIndex + rgbIndex);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(289)
					int tmp62 = (tmp61 + (int)2);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(289)
					Float tmp63 = tileData->__get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(289)
					Float tmp64 = (tmp63 * (int)255);		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(289)
					int tmp65 = ::Std_obj::_int(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(289)
					int tmp66 = (int(tmp60) | int(tmp65));		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(289)
					tint = tmp66;
				}
				HX_STACK_LINE(292)
				bool tmp49 = useScale;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(292)
				if ((tmp49)){
					HX_STACK_LINE(293)
					int tmp50 = (iIndex + scaleIndex);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(293)
					Float tmp51 = tileData->__get(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(293)
					scale = tmp51;
				}
				HX_STACK_LINE(296)
				bool tmp50 = useRotation;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(296)
				if ((tmp50)){
					HX_STACK_LINE(297)
					int tmp51 = (iIndex + rotationIndex);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(297)
					Float tmp52 = tileData->__get(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(297)
					rotation = tmp52;
					HX_STACK_LINE(298)
					Float tmp53 = rotation;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(298)
					Float tmp54 = ::Math_obj::cos(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(298)
					cosTheta = tmp54;
					HX_STACK_LINE(299)
					Float tmp55 = rotation;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(299)
					Float tmp56 = ::Math_obj::sin(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(299)
					sinTheta = tmp56;
				}
				HX_STACK_LINE(302)
				bool tmp51 = useTransform;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(302)
				if ((tmp51)){
					HX_STACK_LINE(303)
					int tmp52 = (iIndex + transformIndex);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(303)
					int tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(303)
					Float tmp54 = tileData->__get(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(303)
					a = tmp54;
					HX_STACK_LINE(304)
					int tmp55 = (iIndex + transformIndex);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(304)
					int tmp56 = (tmp55 + (int)1);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(304)
					Float tmp57 = tileData->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(304)
					b = tmp57;
					HX_STACK_LINE(305)
					int tmp58 = (iIndex + transformIndex);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(305)
					int tmp59 = (tmp58 + (int)2);		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(305)
					Float tmp60 = tileData->__get(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(305)
					c = tmp60;
					HX_STACK_LINE(306)
					int tmp61 = (iIndex + transformIndex);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(306)
					int tmp62 = (tmp61 + (int)3);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(306)
					Float tmp63 = tileData->__get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(306)
					d = tmp63;
				}
				else{
					HX_STACK_LINE(308)
					Float tmp52 = (scale * cosTheta);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(308)
					a = tmp52;
					HX_STACK_LINE(309)
					Float tmp53 = (scale * sinTheta);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(309)
					b = tmp53;
					HX_STACK_LINE(310)
					Float tmp54 = b;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(310)
					Float tmp55 = -(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(310)
					c = tmp55;
					HX_STACK_LINE(311)
					d = a;
				}
				HX_STACK_LINE(314)
				Float tmp52 = (center->x * a);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(314)
				Float tmp53 = (center->y * c);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(314)
				Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(314)
				ox = tmp54;
				HX_STACK_LINE(315)
				Float tmp55 = (center->x * b);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(315)
				Float tmp56 = (center->y * d);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(315)
				Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(315)
				oy = tmp57;
				HX_STACK_LINE(317)
				Float tmp58 = (x - ox);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(317)
				tx = tmp58;
				HX_STACK_LINE(318)
				Float tmp59 = (y - oy);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(318)
				ty = tmp59;
				HX_STACK_LINE(320)
				Float tmp60 = (a * oMatrix->a);		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(320)
				Float tmp61 = (b * oMatrix->c);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(320)
				Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(320)
				matrix->a = tmp62;
				HX_STACK_LINE(321)
				Float tmp63 = (a * oMatrix->b);		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(321)
				Float tmp64 = (b * oMatrix->d);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(321)
				Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(321)
				matrix->b = tmp65;
				HX_STACK_LINE(322)
				Float tmp66 = (c * oMatrix->a);		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(322)
				Float tmp67 = (d * oMatrix->c);		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(322)
				Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(322)
				matrix->c = tmp68;
				HX_STACK_LINE(323)
				Float tmp69 = (c * oMatrix->b);		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(323)
				Float tmp70 = (d * oMatrix->d);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(323)
				Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(323)
				matrix->d = tmp71;
				HX_STACK_LINE(324)
				Float tmp72 = (tx * oMatrix->a);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(324)
				Float tmp73 = (ty * oMatrix->c);		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(324)
				Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(324)
				Float tmp75 = oMatrix->tx;		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(324)
				Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(324)
				matrix->tx = tmp76;
				HX_STACK_LINE(325)
				Float tmp77 = (tx * oMatrix->b);		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(325)
				Float tmp78 = (ty * oMatrix->d);		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(325)
				Float tmp79 = (tmp77 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
				HX_STACK_LINE(325)
				Float tmp80 = oMatrix->ty;		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(325)
				Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(325)
				matrix->ty = tmp81;
				HX_STACK_LINE(327)
				uvs->x0 = tileUV->x;
				HX_STACK_LINE(327)
				uvs->y0 = tileUV->y;
				HX_STACK_LINE(328)
				uvs->x1 = tileUV->width;
				HX_STACK_LINE(328)
				uvs->y1 = tileUV->y;
				HX_STACK_LINE(329)
				uvs->x2 = tileUV->width;
				HX_STACK_LINE(329)
				uvs->y2 = tileUV->height;
				HX_STACK_LINE(330)
				uvs->x3 = tileUV->x;
				HX_STACK_LINE(330)
				uvs->y3 = tileUV->height;
				HX_STACK_LINE(332)
				int tmp82 = this->batchedSprites;		HX_STACK_VAR(tmp82,"tmp82");
				HX_STACK_LINE(332)
				int tmp83 = (tmp82 * (int)4);		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(332)
				int tmp84 = this->elementsPerVertex;		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(332)
				int tmp85 = (tmp83 * tmp84);		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(332)
				bIndex = tmp85;
				HX_STACK_LINE(334)
				Float tmp86 = (alpha * (int)255);		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(334)
				int tmp87 = ::Std_obj::_int(tmp86);		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(334)
				int tmp88 = (int(tmp87) & int((int)255));		HX_STACK_VAR(tmp88,"tmp88");
				HX_STACK_LINE(334)
				int tmp89 = (int(tmp88) << int((int)24));		HX_STACK_VAR(tmp89,"tmp89");
				HX_STACK_LINE(334)
				int tmp90 = (int(tint) & int((int)255));		HX_STACK_VAR(tmp90,"tmp90");
				HX_STACK_LINE(334)
				int tmp91 = (int(tmp90) << int((int)16));		HX_STACK_VAR(tmp91,"tmp91");
				HX_STACK_LINE(334)
				int tmp92 = (int(tmp89) | int(tmp91));		HX_STACK_VAR(tmp92,"tmp92");
				HX_STACK_LINE(334)
				int tmp93 = (int(tint) >> int((int)8));		HX_STACK_VAR(tmp93,"tmp93");
				HX_STACK_LINE(334)
				int tmp94 = (int(tmp93) & int((int)255));		HX_STACK_VAR(tmp94,"tmp94");
				HX_STACK_LINE(334)
				int tmp95 = (int(tmp94) << int((int)8));		HX_STACK_VAR(tmp95,"tmp95");
				HX_STACK_LINE(334)
				int tmp96 = (int(tmp92) | int(tmp95));		HX_STACK_VAR(tmp96,"tmp96");
				HX_STACK_LINE(334)
				int tmp97 = (int(tint) >> int((int)16));		HX_STACK_VAR(tmp97,"tmp97");
				HX_STACK_LINE(334)
				int tmp98 = (int(tmp97) & int((int)255));		HX_STACK_VAR(tmp98,"tmp98");
				HX_STACK_LINE(334)
				int tmp99 = (int(tmp96) | int(tmp98));		HX_STACK_VAR(tmp99,"tmp99");
				HX_STACK_LINE(334)
				color = tmp99;
				HX_STACK_LINE(336)
				{
					HX_STACK_LINE(336)
					int index = bIndex;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(336)
					Float width = rect->width;		HX_STACK_VAR(width,"width");
					HX_STACK_LINE(336)
					Float height = rect->height;		HX_STACK_VAR(height,"height");
					HX_STACK_LINE(336)
					::openfl::display::PixelSnapping pixelSnapping = ::openfl::display::PixelSnapping_obj::NEVER;		HX_STACK_VAR(pixelSnapping,"pixelSnapping");
					HX_STACK_LINE(336)
					Float w0;		HX_STACK_VAR(w0,"w0");
					HX_STACK_LINE(336)
					Float w1;		HX_STACK_VAR(w1,"w1");
					HX_STACK_LINE(336)
					Float h0;		HX_STACK_VAR(h0,"h0");
					HX_STACK_LINE(336)
					Float h1;		HX_STACK_VAR(h1,"h1");
					HX_STACK_LINE(336)
					bool tmp100 = true;		HX_STACK_VAR(tmp100,"tmp100");
					HX_STACK_LINE(336)
					if ((tmp100)){
						HX_STACK_LINE(336)
						w0 = width;
						HX_STACK_LINE(336)
						w1 = (int)0;
						HX_STACK_LINE(336)
						h0 = height;
						HX_STACK_LINE(336)
						h1 = (int)0;
					}
					else{
						HX_STACK_LINE(336)
						Float tmp101 = width;		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(336)
						Float tmp102 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(336)
						Float tmp103 = ((int)1 - tmp102);		HX_STACK_VAR(tmp103,"tmp103");
						HX_STACK_LINE(336)
						Float tmp104 = (tmp101 * tmp103);		HX_STACK_VAR(tmp104,"tmp104");
						HX_STACK_LINE(336)
						w0 = tmp104;
						HX_STACK_LINE(336)
						Float tmp105 = width;		HX_STACK_VAR(tmp105,"tmp105");
						HX_STACK_LINE(336)
						Float tmp106 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp106,"tmp106");
						HX_STACK_LINE(336)
						Float tmp107 = -(tmp106);		HX_STACK_VAR(tmp107,"tmp107");
						HX_STACK_LINE(336)
						Float tmp108 = (tmp105 * tmp107);		HX_STACK_VAR(tmp108,"tmp108");
						HX_STACK_LINE(336)
						w1 = tmp108;
						HX_STACK_LINE(336)
						Float tmp109 = height;		HX_STACK_VAR(tmp109,"tmp109");
						HX_STACK_LINE(336)
						Float tmp110 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp110,"tmp110");
						HX_STACK_LINE(336)
						Float tmp111 = ((int)1 - tmp110);		HX_STACK_VAR(tmp111,"tmp111");
						HX_STACK_LINE(336)
						Float tmp112 = (tmp109 * tmp111);		HX_STACK_VAR(tmp112,"tmp112");
						HX_STACK_LINE(336)
						h0 = tmp112;
						HX_STACK_LINE(336)
						Float tmp113 = height;		HX_STACK_VAR(tmp113,"tmp113");
						HX_STACK_LINE(336)
						Float tmp114 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp114,"tmp114");
						HX_STACK_LINE(336)
						Float tmp115 = -(tmp114);		HX_STACK_VAR(tmp115,"tmp115");
						HX_STACK_LINE(336)
						Float tmp116 = (tmp113 * tmp115);		HX_STACK_VAR(tmp116,"tmp116");
						HX_STACK_LINE(336)
						h1 = tmp116;
					}
					HX_STACK_LINE(336)
					bool tmp101 = (pixelSnapping == null());		HX_STACK_VAR(tmp101,"tmp101");
					HX_STACK_LINE(336)
					if ((tmp101)){
						HX_STACK_LINE(336)
						pixelSnapping = ::openfl::display::PixelSnapping_obj::NEVER;
					}
					HX_STACK_LINE(336)
					bool tmp102 = (pixelSnapping != ::openfl::display::PixelSnapping_obj::NEVER);		HX_STACK_VAR(tmp102,"tmp102");
					HX_STACK_LINE(336)
					bool snap = tmp102;		HX_STACK_VAR(snap,"snap");
					HX_STACK_LINE(336)
					Float a1 = matrix->a;		HX_STACK_VAR(a1,"a1");
					HX_STACK_LINE(336)
					Float b1 = matrix->b;		HX_STACK_VAR(b1,"b1");
					HX_STACK_LINE(336)
					Float c1 = matrix->c;		HX_STACK_VAR(c1,"c1");
					HX_STACK_LINE(336)
					Float d1 = matrix->d;		HX_STACK_VAR(d1,"d1");
					HX_STACK_LINE(336)
					Float tx1 = matrix->tx;		HX_STACK_VAR(tx1,"tx1");
					HX_STACK_LINE(336)
					Float ty1 = matrix->ty;		HX_STACK_VAR(ty1,"ty1");
					HX_STACK_LINE(336)
					int cOffsetIndex = (int)0;		HX_STACK_VAR(cOffsetIndex,"cOffsetIndex");
					HX_STACK_LINE(336)
					bool tmp103 = snap;		HX_STACK_VAR(tmp103,"tmp103");
					HX_STACK_LINE(336)
					bool tmp104 = !(tmp103);		HX_STACK_VAR(tmp104,"tmp104");
					HX_STACK_LINE(336)
					if ((tmp104)){
						HX_STACK_LINE(336)
						::lime::utils::Float32Array tmp105 = this->positions;		HX_STACK_VAR(tmp105,"tmp105");
						HX_STACK_LINE(336)
						int tmp106 = (index)++;		HX_STACK_VAR(tmp106,"tmp106");
						HX_STACK_LINE(336)
						Float tmp107 = (a1 * w1);		HX_STACK_VAR(tmp107,"tmp107");
						HX_STACK_LINE(336)
						Float tmp108 = (c1 * h1);		HX_STACK_VAR(tmp108,"tmp108");
						HX_STACK_LINE(336)
						Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
						HX_STACK_LINE(336)
						Float tmp110 = tx1;		HX_STACK_VAR(tmp110,"tmp110");
						HX_STACK_LINE(336)
						Float tmp111 = (tmp109 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
						HX_STACK_LINE(336)
						hx::__ArrayImplRef(tmp105,tmp106) = tmp111;
						HX_STACK_LINE(336)
						::lime::utils::Float32Array tmp112 = this->positions;		HX_STACK_VAR(tmp112,"tmp112");
						HX_STACK_LINE(336)
						int tmp113 = (index)++;		HX_STACK_VAR(tmp113,"tmp113");
						HX_STACK_LINE(336)
						Float tmp114 = (d1 * h1);		HX_STACK_VAR(tmp114,"tmp114");
						HX_STACK_LINE(336)
						Float tmp115 = (b1 * w1);		HX_STACK_VAR(tmp115,"tmp115");
						HX_STACK_LINE(336)
						Float tmp116 = (tmp114 + tmp115);		HX_STACK_VAR(tmp116,"tmp116");
						HX_STACK_LINE(336)
						Float tmp117 = ty1;		HX_STACK_VAR(tmp117,"tmp117");
						HX_STACK_LINE(336)
						Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
						HX_STACK_LINE(336)
						hx::__ArrayImplRef(tmp112,tmp113) = tmp118;
					}
					else{
						HX_STACK_LINE(336)
						::lime::utils::Float32Array tmp105 = this->positions;		HX_STACK_VAR(tmp105,"tmp105");
						HX_STACK_LINE(336)
						int tmp106 = (index)++;		HX_STACK_VAR(tmp106,"tmp106");
						HX_STACK_LINE(336)
						Float tmp107 = (a1 * w1);		HX_STACK_VAR(tmp107,"tmp107");
						HX_STACK_LINE(336)
						Float tmp108 = (c1 * h1);		HX_STACK_VAR(tmp108,"tmp108");
						HX_STACK_LINE(336)
						Float tmp109 = (tmp107 + tmp108);		HX_STACK_VAR(tmp109,"tmp109");
						HX_STACK_LINE(336)
						Float tmp110 = tx1;		HX_STACK_VAR(tmp110,"tmp110");
						HX_STACK_LINE(336)
						Float tmp111 = (tmp109 + tmp110);		HX_STACK_VAR(tmp111,"tmp111");
						HX_STACK_LINE(336)
						Float tmp112 = ::Math_obj::fround(tmp111);		HX_STACK_VAR(tmp112,"tmp112");
						HX_STACK_LINE(336)
						hx::__ArrayImplRef(tmp105,tmp106) = tmp112;
						HX_STACK_LINE(336)
						::lime::utils::Float32Array tmp113 = this->positions;		HX_STACK_VAR(tmp113,"tmp113");
						HX_STACK_LINE(336)
						int tmp114 = (index)++;		HX_STACK_VAR(tmp114,"tmp114");
						HX_STACK_LINE(336)
						Float tmp115 = (d1 * h1);		HX_STACK_VAR(tmp115,"tmp115");
						HX_STACK_LINE(336)
						Float tmp116 = (b1 * w1);		HX_STACK_VAR(tmp116,"tmp116");
						HX_STACK_LINE(336)
						Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
						HX_STACK_LINE(336)
						Float tmp118 = ty1;		HX_STACK_VAR(tmp118,"tmp118");
						HX_STACK_LINE(336)
						Float tmp119 = (tmp117 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
						HX_STACK_LINE(336)
						Float tmp120 = ::Math_obj::fround(tmp119);		HX_STACK_VAR(tmp120,"tmp120");
						HX_STACK_LINE(336)
						hx::__ArrayImplRef(tmp113,tmp114) = tmp120;
					}
					HX_STACK_LINE(336)
					::lime::utils::Float32Array tmp105 = this->positions;		HX_STACK_VAR(tmp105,"tmp105");
					HX_STACK_LINE(336)
					int tmp106 = (index)++;		HX_STACK_VAR(tmp106,"tmp106");
					HX_STACK_LINE(336)
					Float tmp107 = uvs->x0;		HX_STACK_VAR(tmp107,"tmp107");
					HX_STACK_LINE(336)
					hx::__ArrayImplRef(tmp105,tmp106) = tmp107;
					HX_STACK_LINE(336)
					::lime::utils::Float32Array tmp108 = this->positions;		HX_STACK_VAR(tmp108,"tmp108");
					HX_STACK_LINE(336)
					int tmp109 = (index)++;		HX_STACK_VAR(tmp109,"tmp109");
					HX_STACK_LINE(336)
					Float tmp110 = uvs->y0;		HX_STACK_VAR(tmp110,"tmp110");
					HX_STACK_LINE(336)
					hx::__ArrayImplRef(tmp108,tmp109) = tmp110;
					HX_STACK_LINE(336)
					bool tmp111 = this->enableColor;		HX_STACK_VAR(tmp111,"tmp111");
					HX_STACK_LINE(336)
					if ((tmp111)){
						HX_STACK_LINE(336)
						::lime::utils::UInt32Array tmp112 = this->colors;		HX_STACK_VAR(tmp112,"tmp112");
						HX_STACK_LINE(336)
						int tmp113 = (index)++;		HX_STACK_VAR(tmp113,"tmp113");
						HX_STACK_LINE(336)
						int tmp114 = color;		HX_STACK_VAR(tmp114,"tmp114");
						HX_STACK_LINE(336)
						hx::__ArrayImplRef(tmp112,tmp113) = tmp114;
					}
					HX_STACK_LINE(336)
					bool tmp112 = snap;		HX_STACK_VAR(tmp112,"tmp112");
					HX_STACK_LINE(336)
					bool tmp113 = !(tmp112);		HX_STACK_VAR(tmp113,"tmp113");
					HX_STACK_LINE(336)
					if ((tmp113)){
						HX_STACK_LINE(336)
						::lime::utils::Float32Array tmp114 = this->positions;		HX_STACK_VAR(tmp114,"tmp114");
						HX_STACK_LINE(336)
						int tmp115 = (index)++;		HX_STACK_VAR(tmp115,"tmp115");
						HX_STACK_LINE(336)
						Float tmp116 = (a1 * w0);		HX_STACK_VAR(tmp116,"tmp116");
						HX_STACK_LINE(336)
						Float tmp117 = (c1 * h1);		HX_STACK_VAR(tmp117,"tmp117");
						HX_STACK_LINE(336)
						Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
						HX_STACK_LINE(336)
						Float tmp119 = tx1;		HX_STACK_VAR(tmp119,"tmp119");
						HX_STACK_LINE(336)
						Float tmp120 = (tmp118 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
						HX_STACK_LINE(336)
						hx::__ArrayImplRef(tmp114,tmp115) = tmp120;
						HX_STACK_LINE(336)
						::lime::utils::Float32Array tmp121 = this->positions;		HX_STACK_VAR(tmp121,"tmp121");
						HX_STACK_LINE(336)
						int tmp122 = (index)++;		HX_STACK_VAR(tmp122,"tmp122");
						HX_STACK_LINE(336)
						Float tmp123 = (d1 * h1);		HX_STACK_VAR(tmp123,"tmp123");
						HX_STACK_LINE(336)
						Float tmp124 = (b1 * w0);		HX_STACK_VAR(tmp124,"tmp124");
						HX_STACK_LINE(336)
						Float tmp125 = (tmp123 + tmp124);		HX_STACK_VAR(tmp125,"tmp125");
						HX_STACK_LINE(336)
						Float tmp126 = ty1;		HX_STACK_VAR(tmp126,"tmp126");
						HX_STACK_LINE(336)
						Float tmp127 = (tmp125 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
						HX_STACK_LINE(336)
						hx::__ArrayImplRef(tmp121,tmp122) = tmp127;
					}
					else{
						HX_STACK_LINE(336)
						::lime::utils::Float32Array tmp114 = this->positions;		HX_STACK_VAR(tmp114,"tmp114");
						HX_STACK_LINE(336)
						int tmp115 = (index)++;		HX_STACK_VAR(tmp115,"tmp115");
						HX_STACK_LINE(336)
						Float tmp116 = (a1 * w0);		HX_STACK_VAR(tmp116,"tmp116");
						HX_STACK_LINE(336)
						Float tmp117 = (c1 * h1);		HX_STACK_VAR(tmp117,"tmp117");
						HX_STACK_LINE(336)
						Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
						HX_STACK_LINE(336)
						Float tmp119 = tx1;		HX_STACK_VAR(tmp119,"tmp119");
						HX_STACK_LINE(336)
						Float tmp120 = (tmp118 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
						HX_STACK_LINE(336)
						Float tmp121 = ::Math_obj::fround(tmp120);		HX_STACK_VAR(tmp121,"tmp121");
						HX_STACK_LINE(336)
						hx::__ArrayImplRef(tmp114,tmp115) = tmp121;
						HX_STACK_LINE(336)
						::lime::utils::Float32Array tmp122 = this->positions;		HX_STACK_VAR(tmp122,"tmp122");
						HX_STACK_LINE(336)
						int tmp123 = (index)++;		HX_STACK_VAR(tmp123,"tmp123");
						HX_STACK_LINE(336)
						Float tmp124 = (d1 * h1);		HX_STACK_VAR(tmp124,"tmp124");
						HX_STACK_LINE(336)
						Float tmp125 = (b1 * w0);		HX_STACK_VAR(tmp125,"tmp125");
						HX_STACK_LINE(336)
						Float tmp126 = (tmp124 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
						HX_STACK_LINE(336)
						Float tmp127 = ty1;		HX_STACK_VAR(tmp127,"tmp127");
						HX_STACK_LINE(336)
						Float tmp128 = (tmp126 + tmp127);		HX_STACK_VAR(tmp128,"tmp128");
						HX_STACK_LINE(336)
						Float tmp129 = ::Math_obj::fround(tmp128);		HX_STACK_VAR(tmp129,"tmp129");
						HX_STACK_LINE(336)
						hx::__ArrayImplRef(tmp122,tmp123) = tmp129;
					}
					HX_STACK_LINE(336)
					::lime::utils::Float32Array tmp114 = this->positions;		HX_STACK_VAR(tmp114,"tmp114");
					HX_STACK_LINE(336)
					int tmp115 = (index)++;		HX_STACK_VAR(tmp115,"tmp115");
					HX_STACK_LINE(336)
					Float tmp116 = uvs->x1;		HX_STACK_VAR(tmp116,"tmp116");
					HX_STACK_LINE(336)
					hx::__ArrayImplRef(tmp114,tmp115) = tmp116;
					HX_STACK_LINE(336)
					::lime::utils::Float32Array tmp117 = this->positions;		HX_STACK_VAR(tmp117,"tmp117");
					HX_STACK_LINE(336)
					int tmp118 = (index)++;		HX_STACK_VAR(tmp118,"tmp118");
					HX_STACK_LINE(336)
					Float tmp119 = uvs->y1;		HX_STACK_VAR(tmp119,"tmp119");
					HX_STACK_LINE(336)
					hx::__ArrayImplRef(tmp117,tmp118) = tmp119;
					HX_STACK_LINE(336)
					bool tmp120 = this->enableColor;		HX_STACK_VAR(tmp120,"tmp120");
					HX_STACK_LINE(336)
					if ((tmp120)){
						HX_STACK_LINE(336)
						::lime::utils::UInt32Array tmp121 = this->colors;		HX_STACK_VAR(tmp121,"tmp121");
						HX_STACK_LINE(336)
						int tmp122 = (index)++;		HX_STACK_VAR(tmp122,"tmp122");
						HX_STACK_LINE(336)
						int tmp123 = color;		HX_STACK_VAR(tmp123,"tmp123");
						HX_STACK_LINE(336)
						hx::__ArrayImplRef(tmp121,tmp122) = tmp123;
					}
					HX_STACK_LINE(336)
					bool tmp121 = snap;		HX_STACK_VAR(tmp121,"tmp121");
					HX_STACK_LINE(336)
					bool tmp122 = !(tmp121);		HX_STACK_VAR(tmp122,"tmp122");
					HX_STACK_LINE(336)
					if ((tmp122)){
						HX_STACK_LINE(336)
						::lime::utils::Float32Array tmp123 = this->positions;		HX_STACK_VAR(tmp123,"tmp123");
						HX_STACK_LINE(336)
						int tmp124 = (index)++;		HX_STACK_VAR(tmp124,"tmp124");
						HX_STACK_LINE(336)
						Float tmp125 = (a1 * w0);		HX_STACK_VAR(tmp125,"tmp125");
						HX_STACK_LINE(336)
						Float tmp126 = (c1 * h0);		HX_STACK_VAR(tmp126,"tmp126");
						HX_STACK_LINE(336)
						Float tmp127 = (tmp125 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
						HX_STACK_LINE(336)
						Float tmp128 = tx1;		HX_STACK_VAR(tmp128,"tmp128");
						HX_STACK_LINE(336)
						Float tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
						HX_STACK_LINE(336)
						hx::__ArrayImplRef(tmp123,tmp124) = tmp129;
						HX_STACK_LINE(336)
						::lime::utils::Float32Array tmp130 = this->positions;		HX_STACK_VAR(tmp130,"tmp130");
						HX_STACK_LINE(336)
						int tmp131 = (index)++;		HX_STACK_VAR(tmp131,"tmp131");
						HX_STACK_LINE(336)
						Float tmp132 = (d1 * h0);		HX_STACK_VAR(tmp132,"tmp132");
						HX_STACK_LINE(336)
						Float tmp133 = (b1 * w0);		HX_STACK_VAR(tmp133,"tmp133");
						HX_STACK_LINE(336)
						Float tmp134 = (tmp132 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
						HX_STACK_LINE(336)
						Float tmp135 = ty1;		HX_STACK_VAR(tmp135,"tmp135");
						HX_STACK_LINE(336)
						Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
						HX_STACK_LINE(336)
						hx::__ArrayImplRef(tmp130,tmp131) = tmp136;
					}
					else{
						HX_STACK_LINE(336)
						::lime::utils::Float32Array tmp123 = this->positions;		HX_STACK_VAR(tmp123,"tmp123");
						HX_STACK_LINE(336)
						int tmp124 = (index)++;		HX_STACK_VAR(tmp124,"tmp124");
						HX_STACK_LINE(336)
						Float tmp125 = (a1 * w0);		HX_STACK_VAR(tmp125,"tmp125");
						HX_STACK_LINE(336)
						Float tmp126 = (c1 * h0);		HX_STACK_VAR(tmp126,"tmp126");
						HX_STACK_LINE(336)
						Float tmp127 = (tmp125 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
						HX_STACK_LINE(336)
						Float tmp128 = tx1;		HX_STACK_VAR(tmp128,"tmp128");
						HX_STACK_LINE(336)
						Float tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
						HX_STACK_LINE(336)
						Float tmp130 = ::Math_obj::fround(tmp129);		HX_STACK_VAR(tmp130,"tmp130");
						HX_STACK_LINE(336)
						hx::__ArrayImplRef(tmp123,tmp124) = tmp130;
						HX_STACK_LINE(336)
						::lime::utils::Float32Array tmp131 = this->positions;		HX_STACK_VAR(tmp131,"tmp131");
						HX_STACK_LINE(336)
						int tmp132 = (index)++;		HX_STACK_VAR(tmp132,"tmp132");
						HX_STACK_LINE(336)
						Float tmp133 = (d1 * h0);		HX_STACK_VAR(tmp133,"tmp133");
						HX_STACK_LINE(336)
						Float tmp134 = (b1 * w0);		HX_STACK_VAR(tmp134,"tmp134");
						HX_STACK_LINE(336)
						Float tmp135 = (tmp133 + tmp134);		HX_STACK_VAR(tmp135,"tmp135");
						HX_STACK_LINE(336)
						Float tmp136 = ty1;		HX_STACK_VAR(tmp136,"tmp136");
						HX_STACK_LINE(336)
						Float tmp137 = (tmp135 + tmp136);		HX_STACK_VAR(tmp137,"tmp137");
						HX_STACK_LINE(336)
						Float tmp138 = ::Math_obj::fround(tmp137);		HX_STACK_VAR(tmp138,"tmp138");
						HX_STACK_LINE(336)
						hx::__ArrayImplRef(tmp131,tmp132) = tmp138;
					}
					HX_STACK_LINE(336)
					::lime::utils::Float32Array tmp123 = this->positions;		HX_STACK_VAR(tmp123,"tmp123");
					HX_STACK_LINE(336)
					int tmp124 = (index)++;		HX_STACK_VAR(tmp124,"tmp124");
					HX_STACK_LINE(336)
					Float tmp125 = uvs->x2;		HX_STACK_VAR(tmp125,"tmp125");
					HX_STACK_LINE(336)
					hx::__ArrayImplRef(tmp123,tmp124) = tmp125;
					HX_STACK_LINE(336)
					::lime::utils::Float32Array tmp126 = this->positions;		HX_STACK_VAR(tmp126,"tmp126");
					HX_STACK_LINE(336)
					int tmp127 = (index)++;		HX_STACK_VAR(tmp127,"tmp127");
					HX_STACK_LINE(336)
					Float tmp128 = uvs->y2;		HX_STACK_VAR(tmp128,"tmp128");
					HX_STACK_LINE(336)
					hx::__ArrayImplRef(tmp126,tmp127) = tmp128;
					HX_STACK_LINE(336)
					bool tmp129 = this->enableColor;		HX_STACK_VAR(tmp129,"tmp129");
					HX_STACK_LINE(336)
					if ((tmp129)){
						HX_STACK_LINE(336)
						::lime::utils::UInt32Array tmp130 = this->colors;		HX_STACK_VAR(tmp130,"tmp130");
						HX_STACK_LINE(336)
						int tmp131 = (index)++;		HX_STACK_VAR(tmp131,"tmp131");
						HX_STACK_LINE(336)
						int tmp132 = color;		HX_STACK_VAR(tmp132,"tmp132");
						HX_STACK_LINE(336)
						hx::__ArrayImplRef(tmp130,tmp131) = tmp132;
					}
					HX_STACK_LINE(336)
					bool tmp130 = snap;		HX_STACK_VAR(tmp130,"tmp130");
					HX_STACK_LINE(336)
					bool tmp131 = !(tmp130);		HX_STACK_VAR(tmp131,"tmp131");
					HX_STACK_LINE(336)
					if ((tmp131)){
						HX_STACK_LINE(336)
						::lime::utils::Float32Array tmp132 = this->positions;		HX_STACK_VAR(tmp132,"tmp132");
						HX_STACK_LINE(336)
						int tmp133 = (index)++;		HX_STACK_VAR(tmp133,"tmp133");
						HX_STACK_LINE(336)
						Float tmp134 = (a1 * w1);		HX_STACK_VAR(tmp134,"tmp134");
						HX_STACK_LINE(336)
						Float tmp135 = (c1 * h0);		HX_STACK_VAR(tmp135,"tmp135");
						HX_STACK_LINE(336)
						Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
						HX_STACK_LINE(336)
						Float tmp137 = tx1;		HX_STACK_VAR(tmp137,"tmp137");
						HX_STACK_LINE(336)
						Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
						HX_STACK_LINE(336)
						hx::__ArrayImplRef(tmp132,tmp133) = tmp138;
						HX_STACK_LINE(336)
						::lime::utils::Float32Array tmp139 = this->positions;		HX_STACK_VAR(tmp139,"tmp139");
						HX_STACK_LINE(336)
						int tmp140 = (index)++;		HX_STACK_VAR(tmp140,"tmp140");
						HX_STACK_LINE(336)
						Float tmp141 = (d1 * h0);		HX_STACK_VAR(tmp141,"tmp141");
						HX_STACK_LINE(336)
						Float tmp142 = (b1 * w1);		HX_STACK_VAR(tmp142,"tmp142");
						HX_STACK_LINE(336)
						Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
						HX_STACK_LINE(336)
						Float tmp144 = ty1;		HX_STACK_VAR(tmp144,"tmp144");
						HX_STACK_LINE(336)
						Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
						HX_STACK_LINE(336)
						hx::__ArrayImplRef(tmp139,tmp140) = tmp145;
					}
					else{
						HX_STACK_LINE(336)
						::lime::utils::Float32Array tmp132 = this->positions;		HX_STACK_VAR(tmp132,"tmp132");
						HX_STACK_LINE(336)
						int tmp133 = (index)++;		HX_STACK_VAR(tmp133,"tmp133");
						HX_STACK_LINE(336)
						Float tmp134 = (a1 * w1);		HX_STACK_VAR(tmp134,"tmp134");
						HX_STACK_LINE(336)
						Float tmp135 = (c1 * h0);		HX_STACK_VAR(tmp135,"tmp135");
						HX_STACK_LINE(336)
						Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
						HX_STACK_LINE(336)
						Float tmp137 = tx1;		HX_STACK_VAR(tmp137,"tmp137");
						HX_STACK_LINE(336)
						Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
						HX_STACK_LINE(336)
						Float tmp139 = ::Math_obj::fround(tmp138);		HX_STACK_VAR(tmp139,"tmp139");
						HX_STACK_LINE(336)
						hx::__ArrayImplRef(tmp132,tmp133) = tmp139;
						HX_STACK_LINE(336)
						::lime::utils::Float32Array tmp140 = this->positions;		HX_STACK_VAR(tmp140,"tmp140");
						HX_STACK_LINE(336)
						int tmp141 = (index)++;		HX_STACK_VAR(tmp141,"tmp141");
						HX_STACK_LINE(336)
						Float tmp142 = (d1 * h0);		HX_STACK_VAR(tmp142,"tmp142");
						HX_STACK_LINE(336)
						Float tmp143 = (b1 * w1);		HX_STACK_VAR(tmp143,"tmp143");
						HX_STACK_LINE(336)
						Float tmp144 = (tmp142 + tmp143);		HX_STACK_VAR(tmp144,"tmp144");
						HX_STACK_LINE(336)
						Float tmp145 = ty1;		HX_STACK_VAR(tmp145,"tmp145");
						HX_STACK_LINE(336)
						Float tmp146 = (tmp144 + tmp145);		HX_STACK_VAR(tmp146,"tmp146");
						HX_STACK_LINE(336)
						Float tmp147 = ::Math_obj::fround(tmp146);		HX_STACK_VAR(tmp147,"tmp147");
						HX_STACK_LINE(336)
						hx::__ArrayImplRef(tmp140,tmp141) = tmp147;
					}
					HX_STACK_LINE(336)
					::lime::utils::Float32Array tmp132 = this->positions;		HX_STACK_VAR(tmp132,"tmp132");
					HX_STACK_LINE(336)
					int tmp133 = (index)++;		HX_STACK_VAR(tmp133,"tmp133");
					HX_STACK_LINE(336)
					Float tmp134 = uvs->x3;		HX_STACK_VAR(tmp134,"tmp134");
					HX_STACK_LINE(336)
					hx::__ArrayImplRef(tmp132,tmp133) = tmp134;
					HX_STACK_LINE(336)
					::lime::utils::Float32Array tmp135 = this->positions;		HX_STACK_VAR(tmp135,"tmp135");
					HX_STACK_LINE(336)
					int tmp136 = (index)++;		HX_STACK_VAR(tmp136,"tmp136");
					HX_STACK_LINE(336)
					Float tmp137 = uvs->y3;		HX_STACK_VAR(tmp137,"tmp137");
					HX_STACK_LINE(336)
					hx::__ArrayImplRef(tmp135,tmp136) = tmp137;
					HX_STACK_LINE(336)
					bool tmp138 = this->enableColor;		HX_STACK_VAR(tmp138,"tmp138");
					HX_STACK_LINE(336)
					if ((tmp138)){
						HX_STACK_LINE(336)
						::lime::utils::UInt32Array tmp139 = this->colors;		HX_STACK_VAR(tmp139,"tmp139");
						HX_STACK_LINE(336)
						int tmp140 = (index)++;		HX_STACK_VAR(tmp140,"tmp140");
						HX_STACK_LINE(336)
						int tmp141 = color;		HX_STACK_VAR(tmp141,"tmp141");
						HX_STACK_LINE(336)
						hx::__ArrayImplRef(tmp139,tmp140) = tmp141;
					}
					HX_STACK_LINE(336)
					this->writtenVertexBytes = index;
				}
				HX_STACK_LINE(338)
				int tmp100 = this->batchedSprites;		HX_STACK_VAR(tmp100,"tmp100");
				HX_STACK_LINE(338)
				::lime::graphics::opengl::GLTexture tmp101 = texture;		HX_STACK_VAR(tmp101,"tmp101");
				HX_STACK_LINE(338)
				bool tmp102 = smooth;		HX_STACK_VAR(tmp102,"tmp102");
				HX_STACK_LINE(338)
				::openfl::display::BlendMode tmp103 = blendMode;		HX_STACK_VAR(tmp103,"tmp103");
				HX_STACK_LINE(338)
				::openfl::geom::ColorTransform tmp104 = object->__worldColorTransform;		HX_STACK_VAR(tmp104,"tmp104");
				HX_STACK_LINE(338)
				this->setState(tmp100,tmp101,tmp102,tmp103,tmp104,false);
				HX_STACK_LINE(340)
				(this->batchedSprites)++;
			}
			HX_STACK_LINE(343)
			hx::AddEq(iIndex,numValues);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(SpriteBatch_obj,renderTiles,(void))

Void SpriteBatch_obj::renderCachedGraphics( ::openfl::display::DisplayObject object){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","renderCachedGraphics",0x0e6ae93d,"openfl._internal.renderer.opengl.utils.SpriteBatch.renderCachedGraphics","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",348,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
		HX_STACK_LINE(349)
		::openfl::_internal::renderer::opengl::utils::FilterTexture tmp = object->__graphics->__cachedTexture;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(349)
		::openfl::_internal::renderer::opengl::utils::FilterTexture cachedTexture = tmp;		HX_STACK_VAR(cachedTexture,"cachedTexture");
		HX_STACK_LINE(351)
		bool tmp1 = (cachedTexture == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(351)
		if ((tmp1)){
			HX_STACK_LINE(351)
			return null();
		}
		HX_STACK_LINE(353)
		int tmp2 = this->batchedSprites;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(353)
		int tmp3 = this->maxSprites;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(353)
		bool tmp4 = (tmp2 >= tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(353)
		if ((tmp4)){
			HX_STACK_LINE(354)
			this->flush();
		}
		HX_STACK_LINE(357)
		Float alpha = object->__worldAlpha;		HX_STACK_VAR(alpha,"alpha");
		HX_STACK_LINE(358)
		Float tmp5 = (alpha * (int)255);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(358)
		int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(358)
		int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(358)
		int tmp8 = (int(tmp7) << int((int)24));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(358)
		int tmp9 = (int(tmp8) | int((int)16777215));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(358)
		int color = tmp9;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(361)
		::openfl::display::TextureUvs tmp10 = ::openfl::display::TextureUvs_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(361)
		::openfl::display::TextureUvs uvs = tmp10;		HX_STACK_VAR(uvs,"uvs");
		HX_STACK_LINE(362)
		uvs->x0 = (int)0;
		HX_STACK_LINE(362)
		uvs->y0 = (int)1;
		HX_STACK_LINE(363)
		uvs->x1 = (int)1;
		HX_STACK_LINE(363)
		uvs->y1 = (int)1;
		HX_STACK_LINE(364)
		uvs->x2 = (int)1;
		HX_STACK_LINE(364)
		uvs->y2 = (int)0;
		HX_STACK_LINE(365)
		uvs->x3 = (int)0;
		HX_STACK_LINE(365)
		uvs->y3 = (int)0;
		HX_STACK_LINE(367)
		::openfl::geom::Matrix tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(367)
		{
			HX_STACK_LINE(367)
			::openfl::geom::Matrix _this = object->__worldTransform;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(367)
			tmp11 = ::openfl::geom::Matrix_obj::__new(_this->a,_this->b,_this->c,_this->d,_this->tx,_this->ty);
		}
		HX_STACK_LINE(367)
		::openfl::geom::Matrix worldTransform = tmp11;		HX_STACK_VAR(worldTransform,"worldTransform");
		HX_STACK_LINE(368)
		{
			HX_STACK_LINE(368)
			::openfl::geom::Rectangle tmp12 = object->__graphics->__bounds;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(368)
			Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(368)
			::openfl::geom::Rectangle tmp14 = object->__graphics->__bounds;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(368)
			Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(368)
			::openfl::geom::Point tmp16 = ::openfl::geom::Point_obj::__new(tmp13,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(368)
			::openfl::geom::Point pos = tmp16;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(368)
			Float tmp17 = (pos->x * worldTransform->a);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(368)
			Float tmp18 = (pos->y * worldTransform->c);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(368)
			Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(368)
			Float tmp20 = worldTransform->tx;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(368)
			Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(368)
			worldTransform->tx = tmp21;
			HX_STACK_LINE(368)
			Float tmp22 = (pos->x * worldTransform->b);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(368)
			Float tmp23 = (pos->y * worldTransform->d);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(368)
			Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(368)
			Float tmp25 = worldTransform->ty;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(368)
			Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(368)
			worldTransform->ty = tmp26;
		}
		HX_STACK_LINE(370)
		{
			HX_STACK_LINE(370)
			bool tmp12 = (color != (int)-1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(370)
			this->enableColor = tmp12;
			HX_STACK_LINE(370)
			bool tmp13 = this->enableColor;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(370)
			bool tmp14 = this->lastEnableColor;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(370)
			bool tmp15 = (tmp13 != tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(370)
			if ((tmp15)){
				HX_STACK_LINE(370)
				this->flush();
				HX_STACK_LINE(370)
				bool tmp16 = this->enableColor;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(370)
				this->lastEnableColor = tmp16;
			}
			HX_STACK_LINE(370)
			bool tmp16 = this->lastEnableColor;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(370)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp17 = this->attributes->__get((int)2).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(370)
			tmp17->enabled = tmp16;
			HX_STACK_LINE(370)
			int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(370)
			{
				HX_STACK_LINE(370)
				int r = (int)0;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(370)
				{
					HX_STACK_LINE(370)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(370)
					Array< ::Dynamic > _g1 = this->attributes;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(370)
					while((true)){
						HX_STACK_LINE(370)
						bool tmp19 = (_g < _g1->length);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(370)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(370)
						if ((tmp20)){
							HX_STACK_LINE(370)
							break;
						}
						HX_STACK_LINE(370)
						::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp21 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(370)
						::openfl::_internal::renderer::opengl::utils::VertexAttribute a = tmp21;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(370)
						++(_g);
						HX_STACK_LINE(370)
						bool tmp22 = a->enabled;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(370)
						if ((tmp22)){
							HX_STACK_LINE(370)
							int tmp23 = a->components;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(370)
							int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(370)
							{
								HX_STACK_LINE(370)
								int _g2 = a->type;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(370)
								int tmp25 = _g2;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(370)
								switch( (int)(tmp25)){
									case (int)5120: case (int)5121: {
										HX_STACK_LINE(370)
										tmp24 = (int)1;
									}
									;break;
									case (int)5122: case (int)5123: {
										HX_STACK_LINE(370)
										tmp24 = (int)2;
									}
									;break;
									default: {
										HX_STACK_LINE(370)
										tmp24 = (int)4;
									}
								}
							}
							HX_STACK_LINE(370)
							int tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(370)
							Float tmp26 = (Float(tmp25) / Float((int)4));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(370)
							int tmp27 = ::Math_obj::floor(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(370)
							hx::AddEq(r,tmp27);
						}
					}
				}
				HX_STACK_LINE(370)
				tmp18 = r;
			}
			HX_STACK_LINE(370)
			this->elementsPerVertex = tmp18;
		}
		HX_STACK_LINE(372)
		int tmp12 = this->batchedSprites;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(372)
		int tmp13 = (tmp12 * (int)4);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(372)
		int tmp14 = this->elementsPerVertex;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(372)
		int tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(372)
		int index = tmp15;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(373)
		{
			HX_STACK_LINE(373)
			int index1 = index;		HX_STACK_VAR(index1,"index1");
			HX_STACK_LINE(373)
			Float width = cachedTexture->width;		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(373)
			Float height = cachedTexture->height;		HX_STACK_VAR(height,"height");
			HX_STACK_LINE(373)
			::openfl::display::PixelSnapping pixelSnapping = null();		HX_STACK_VAR(pixelSnapping,"pixelSnapping");
			HX_STACK_LINE(373)
			Float w0;		HX_STACK_VAR(w0,"w0");
			HX_STACK_LINE(373)
			Float w1;		HX_STACK_VAR(w1,"w1");
			HX_STACK_LINE(373)
			Float h0;		HX_STACK_VAR(h0,"h0");
			HX_STACK_LINE(373)
			Float h1;		HX_STACK_VAR(h1,"h1");
			HX_STACK_LINE(373)
			bool tmp16 = true;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(373)
			if ((tmp16)){
				HX_STACK_LINE(373)
				w0 = width;
				HX_STACK_LINE(373)
				w1 = (int)0;
				HX_STACK_LINE(373)
				h0 = height;
				HX_STACK_LINE(373)
				h1 = (int)0;
			}
			else{
				HX_STACK_LINE(373)
				Float tmp17 = width;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(373)
				Float tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(373)
				Float tmp19 = ((int)1 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(373)
				Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(373)
				w0 = tmp20;
				HX_STACK_LINE(373)
				Float tmp21 = width;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(373)
				Float tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(373)
				Float tmp23 = -(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(373)
				Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(373)
				w1 = tmp24;
				HX_STACK_LINE(373)
				Float tmp25 = height;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(373)
				Float tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(373)
				Float tmp27 = ((int)1 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(373)
				Float tmp28 = (tmp25 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(373)
				h0 = tmp28;
				HX_STACK_LINE(373)
				Float tmp29 = height;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(373)
				Float tmp30 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(373)
				Float tmp31 = -(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(373)
				Float tmp32 = (tmp29 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(373)
				h1 = tmp32;
			}
			HX_STACK_LINE(373)
			bool tmp17 = (pixelSnapping == null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(373)
			if ((tmp17)){
				HX_STACK_LINE(373)
				pixelSnapping = ::openfl::display::PixelSnapping_obj::NEVER;
			}
			HX_STACK_LINE(373)
			bool tmp18 = (pixelSnapping != ::openfl::display::PixelSnapping_obj::NEVER);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(373)
			bool snap = tmp18;		HX_STACK_VAR(snap,"snap");
			HX_STACK_LINE(373)
			Float a = worldTransform->a;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(373)
			Float b = worldTransform->b;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(373)
			Float c = worldTransform->c;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(373)
			Float d = worldTransform->d;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(373)
			Float tx = worldTransform->tx;		HX_STACK_VAR(tx,"tx");
			HX_STACK_LINE(373)
			Float ty = worldTransform->ty;		HX_STACK_VAR(ty,"ty");
			HX_STACK_LINE(373)
			int cOffsetIndex = (int)0;		HX_STACK_VAR(cOffsetIndex,"cOffsetIndex");
			HX_STACK_LINE(373)
			bool tmp19 = snap;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(373)
			bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(373)
			if ((tmp20)){
				HX_STACK_LINE(373)
				::lime::utils::Float32Array tmp21 = this->positions;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(373)
				int tmp22 = (index1)++;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(373)
				Float tmp23 = (a * w1);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(373)
				Float tmp24 = (c * h1);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(373)
				Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(373)
				Float tmp26 = tx;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(373)
				Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(373)
				hx::__ArrayImplRef(tmp21,tmp22) = tmp27;
				HX_STACK_LINE(373)
				::lime::utils::Float32Array tmp28 = this->positions;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(373)
				int tmp29 = (index1)++;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(373)
				Float tmp30 = (d * h1);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(373)
				Float tmp31 = (b * w1);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(373)
				Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(373)
				Float tmp33 = ty;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(373)
				Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(373)
				hx::__ArrayImplRef(tmp28,tmp29) = tmp34;
			}
			else{
				HX_STACK_LINE(373)
				::lime::utils::Float32Array tmp21 = this->positions;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(373)
				int tmp22 = (index1)++;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(373)
				Float tmp23 = (a * w1);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(373)
				Float tmp24 = (c * h1);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(373)
				Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(373)
				Float tmp26 = tx;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(373)
				Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(373)
				Float tmp28 = ::Math_obj::fround(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(373)
				hx::__ArrayImplRef(tmp21,tmp22) = tmp28;
				HX_STACK_LINE(373)
				::lime::utils::Float32Array tmp29 = this->positions;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(373)
				int tmp30 = (index1)++;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(373)
				Float tmp31 = (d * h1);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(373)
				Float tmp32 = (b * w1);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(373)
				Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(373)
				Float tmp34 = ty;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(373)
				Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(373)
				Float tmp36 = ::Math_obj::fround(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(373)
				hx::__ArrayImplRef(tmp29,tmp30) = tmp36;
			}
			HX_STACK_LINE(373)
			::lime::utils::Float32Array tmp21 = this->positions;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(373)
			int tmp22 = (index1)++;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(373)
			Float tmp23 = uvs->x0;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(373)
			hx::__ArrayImplRef(tmp21,tmp22) = tmp23;
			HX_STACK_LINE(373)
			::lime::utils::Float32Array tmp24 = this->positions;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(373)
			int tmp25 = (index1)++;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(373)
			Float tmp26 = uvs->y0;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(373)
			hx::__ArrayImplRef(tmp24,tmp25) = tmp26;
			HX_STACK_LINE(373)
			bool tmp27 = this->enableColor;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(373)
			if ((tmp27)){
				HX_STACK_LINE(373)
				::lime::utils::UInt32Array tmp28 = this->colors;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(373)
				int tmp29 = (index1)++;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(373)
				int tmp30 = color;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(373)
				hx::__ArrayImplRef(tmp28,tmp29) = tmp30;
			}
			HX_STACK_LINE(373)
			bool tmp28 = snap;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(373)
			bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(373)
			if ((tmp29)){
				HX_STACK_LINE(373)
				::lime::utils::Float32Array tmp30 = this->positions;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(373)
				int tmp31 = (index1)++;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(373)
				Float tmp32 = (a * w0);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(373)
				Float tmp33 = (c * h1);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(373)
				Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(373)
				Float tmp35 = tx;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(373)
				Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(373)
				hx::__ArrayImplRef(tmp30,tmp31) = tmp36;
				HX_STACK_LINE(373)
				::lime::utils::Float32Array tmp37 = this->positions;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(373)
				int tmp38 = (index1)++;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(373)
				Float tmp39 = (d * h1);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(373)
				Float tmp40 = (b * w0);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(373)
				Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(373)
				Float tmp42 = ty;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(373)
				Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(373)
				hx::__ArrayImplRef(tmp37,tmp38) = tmp43;
			}
			else{
				HX_STACK_LINE(373)
				::lime::utils::Float32Array tmp30 = this->positions;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(373)
				int tmp31 = (index1)++;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(373)
				Float tmp32 = (a * w0);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(373)
				Float tmp33 = (c * h1);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(373)
				Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(373)
				Float tmp35 = tx;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(373)
				Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(373)
				Float tmp37 = ::Math_obj::fround(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(373)
				hx::__ArrayImplRef(tmp30,tmp31) = tmp37;
				HX_STACK_LINE(373)
				::lime::utils::Float32Array tmp38 = this->positions;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(373)
				int tmp39 = (index1)++;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(373)
				Float tmp40 = (d * h1);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(373)
				Float tmp41 = (b * w0);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(373)
				Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(373)
				Float tmp43 = ty;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(373)
				Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(373)
				Float tmp45 = ::Math_obj::fround(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(373)
				hx::__ArrayImplRef(tmp38,tmp39) = tmp45;
			}
			HX_STACK_LINE(373)
			::lime::utils::Float32Array tmp30 = this->positions;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(373)
			int tmp31 = (index1)++;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(373)
			Float tmp32 = uvs->x1;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(373)
			hx::__ArrayImplRef(tmp30,tmp31) = tmp32;
			HX_STACK_LINE(373)
			::lime::utils::Float32Array tmp33 = this->positions;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(373)
			int tmp34 = (index1)++;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(373)
			Float tmp35 = uvs->y1;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(373)
			hx::__ArrayImplRef(tmp33,tmp34) = tmp35;
			HX_STACK_LINE(373)
			bool tmp36 = this->enableColor;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(373)
			if ((tmp36)){
				HX_STACK_LINE(373)
				::lime::utils::UInt32Array tmp37 = this->colors;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(373)
				int tmp38 = (index1)++;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(373)
				int tmp39 = color;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(373)
				hx::__ArrayImplRef(tmp37,tmp38) = tmp39;
			}
			HX_STACK_LINE(373)
			bool tmp37 = snap;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(373)
			bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(373)
			if ((tmp38)){
				HX_STACK_LINE(373)
				::lime::utils::Float32Array tmp39 = this->positions;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(373)
				int tmp40 = (index1)++;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(373)
				Float tmp41 = (a * w0);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(373)
				Float tmp42 = (c * h0);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(373)
				Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(373)
				Float tmp44 = tx;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(373)
				Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(373)
				hx::__ArrayImplRef(tmp39,tmp40) = tmp45;
				HX_STACK_LINE(373)
				::lime::utils::Float32Array tmp46 = this->positions;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(373)
				int tmp47 = (index1)++;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(373)
				Float tmp48 = (d * h0);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(373)
				Float tmp49 = (b * w0);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(373)
				Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(373)
				Float tmp51 = ty;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(373)
				Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(373)
				hx::__ArrayImplRef(tmp46,tmp47) = tmp52;
			}
			else{
				HX_STACK_LINE(373)
				::lime::utils::Float32Array tmp39 = this->positions;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(373)
				int tmp40 = (index1)++;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(373)
				Float tmp41 = (a * w0);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(373)
				Float tmp42 = (c * h0);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(373)
				Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(373)
				Float tmp44 = tx;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(373)
				Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(373)
				Float tmp46 = ::Math_obj::fround(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(373)
				hx::__ArrayImplRef(tmp39,tmp40) = tmp46;
				HX_STACK_LINE(373)
				::lime::utils::Float32Array tmp47 = this->positions;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(373)
				int tmp48 = (index1)++;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(373)
				Float tmp49 = (d * h0);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(373)
				Float tmp50 = (b * w0);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(373)
				Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(373)
				Float tmp52 = ty;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(373)
				Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(373)
				Float tmp54 = ::Math_obj::fround(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(373)
				hx::__ArrayImplRef(tmp47,tmp48) = tmp54;
			}
			HX_STACK_LINE(373)
			::lime::utils::Float32Array tmp39 = this->positions;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(373)
			int tmp40 = (index1)++;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(373)
			Float tmp41 = uvs->x2;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(373)
			hx::__ArrayImplRef(tmp39,tmp40) = tmp41;
			HX_STACK_LINE(373)
			::lime::utils::Float32Array tmp42 = this->positions;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(373)
			int tmp43 = (index1)++;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(373)
			Float tmp44 = uvs->y2;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(373)
			hx::__ArrayImplRef(tmp42,tmp43) = tmp44;
			HX_STACK_LINE(373)
			bool tmp45 = this->enableColor;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(373)
			if ((tmp45)){
				HX_STACK_LINE(373)
				::lime::utils::UInt32Array tmp46 = this->colors;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(373)
				int tmp47 = (index1)++;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(373)
				int tmp48 = color;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(373)
				hx::__ArrayImplRef(tmp46,tmp47) = tmp48;
			}
			HX_STACK_LINE(373)
			bool tmp46 = snap;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(373)
			bool tmp47 = !(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(373)
			if ((tmp47)){
				HX_STACK_LINE(373)
				::lime::utils::Float32Array tmp48 = this->positions;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(373)
				int tmp49 = (index1)++;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(373)
				Float tmp50 = (a * w1);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(373)
				Float tmp51 = (c * h0);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(373)
				Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(373)
				Float tmp53 = tx;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(373)
				Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(373)
				hx::__ArrayImplRef(tmp48,tmp49) = tmp54;
				HX_STACK_LINE(373)
				::lime::utils::Float32Array tmp55 = this->positions;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(373)
				int tmp56 = (index1)++;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(373)
				Float tmp57 = (d * h0);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(373)
				Float tmp58 = (b * w1);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(373)
				Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(373)
				Float tmp60 = ty;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(373)
				Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(373)
				hx::__ArrayImplRef(tmp55,tmp56) = tmp61;
			}
			else{
				HX_STACK_LINE(373)
				::lime::utils::Float32Array tmp48 = this->positions;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(373)
				int tmp49 = (index1)++;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(373)
				Float tmp50 = (a * w1);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(373)
				Float tmp51 = (c * h0);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(373)
				Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(373)
				Float tmp53 = tx;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(373)
				Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(373)
				Float tmp55 = ::Math_obj::fround(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(373)
				hx::__ArrayImplRef(tmp48,tmp49) = tmp55;
				HX_STACK_LINE(373)
				::lime::utils::Float32Array tmp56 = this->positions;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(373)
				int tmp57 = (index1)++;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(373)
				Float tmp58 = (d * h0);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(373)
				Float tmp59 = (b * w1);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(373)
				Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(373)
				Float tmp61 = ty;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(373)
				Float tmp62 = (tmp60 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(373)
				Float tmp63 = ::Math_obj::fround(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(373)
				hx::__ArrayImplRef(tmp56,tmp57) = tmp63;
			}
			HX_STACK_LINE(373)
			::lime::utils::Float32Array tmp48 = this->positions;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(373)
			int tmp49 = (index1)++;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(373)
			Float tmp50 = uvs->x3;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(373)
			hx::__ArrayImplRef(tmp48,tmp49) = tmp50;
			HX_STACK_LINE(373)
			::lime::utils::Float32Array tmp51 = this->positions;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(373)
			int tmp52 = (index1)++;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(373)
			Float tmp53 = uvs->y3;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(373)
			hx::__ArrayImplRef(tmp51,tmp52) = tmp53;
			HX_STACK_LINE(373)
			bool tmp54 = this->enableColor;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(373)
			if ((tmp54)){
				HX_STACK_LINE(373)
				::lime::utils::UInt32Array tmp55 = this->colors;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(373)
				int tmp56 = (index1)++;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(373)
				int tmp57 = color;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(373)
				hx::__ArrayImplRef(tmp55,tmp56) = tmp57;
			}
			HX_STACK_LINE(373)
			this->writtenVertexBytes = index1;
		}
		HX_STACK_LINE(375)
		int tmp16 = this->batchedSprites;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(375)
		::lime::graphics::opengl::GLTexture tmp17 = cachedTexture->texture;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(375)
		::openfl::display::BlendMode tmp18 = object->blendMode;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(375)
		::openfl::geom::ColorTransform tmp19 = object->__worldColorTransform;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(375)
		this->setState(tmp16,tmp17,null(),tmp18,tmp19,null());
		HX_STACK_LINE(377)
		(this->batchedSprites)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteBatch_obj,renderCachedGraphics,(void))

Void SpriteBatch_obj::fillVertices( int index,Float width,Float height,::openfl::geom::Matrix matrix,::openfl::display::TextureUvs uvs,::openfl::geom::Point pivot,Dynamic __o_color,::openfl::display::PixelSnapping pixelSnapping){
Dynamic color = __o_color.Default(-1);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","fillVertices",0x1e5d3416,"openfl._internal.renderer.opengl.utils.SpriteBatch.fillVertices","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",381,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(uvs,"uvs")
	HX_STACK_ARG(pivot,"pivot")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(pixelSnapping,"pixelSnapping")
{
		HX_STACK_LINE(383)
		Float w0;		HX_STACK_VAR(w0,"w0");
		HX_STACK_LINE(383)
		Float w1;		HX_STACK_VAR(w1,"w1");
		HX_STACK_LINE(383)
		Float h0;		HX_STACK_VAR(h0,"h0");
		HX_STACK_LINE(383)
		Float h1;		HX_STACK_VAR(h1,"h1");
		HX_STACK_LINE(386)
		bool tmp = (pivot == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(386)
		if ((tmp)){
			HX_STACK_LINE(387)
			w0 = width;
			HX_STACK_LINE(387)
			w1 = (int)0;
			HX_STACK_LINE(388)
			h0 = height;
			HX_STACK_LINE(388)
			h1 = (int)0;
		}
		else{
			HX_STACK_LINE(390)
			Float tmp1 = width;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(390)
			Float tmp2 = ((int)1 - pivot->x);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(390)
			Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(390)
			w0 = tmp3;
			HX_STACK_LINE(391)
			Float tmp4 = width;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(391)
			Float tmp5 = pivot->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(391)
			Float tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(391)
			Float tmp7 = (tmp4 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(391)
			w1 = tmp7;
			HX_STACK_LINE(392)
			Float tmp8 = height;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(392)
			Float tmp9 = ((int)1 - pivot->y);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(392)
			Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(392)
			h0 = tmp10;
			HX_STACK_LINE(393)
			Float tmp11 = height;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(393)
			Float tmp12 = pivot->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(393)
			Float tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(393)
			Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(393)
			h1 = tmp14;
		}
		HX_STACK_LINE(396)
		bool tmp1 = (pixelSnapping == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(396)
		if ((tmp1)){
			HX_STACK_LINE(397)
			pixelSnapping = ::openfl::display::PixelSnapping_obj::NEVER;
		}
		HX_STACK_LINE(400)
		bool tmp2 = (pixelSnapping != ::openfl::display::PixelSnapping_obj::NEVER);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(400)
		bool snap = tmp2;		HX_STACK_VAR(snap,"snap");
		HX_STACK_LINE(401)
		Float a = matrix->a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(402)
		Float b = matrix->b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(403)
		Float c = matrix->c;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(404)
		Float d = matrix->d;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(405)
		Float tx = matrix->tx;		HX_STACK_VAR(tx,"tx");
		HX_STACK_LINE(406)
		Float ty = matrix->ty;		HX_STACK_VAR(ty,"ty");
		HX_STACK_LINE(407)
		int cOffsetIndex = (int)0;		HX_STACK_VAR(cOffsetIndex,"cOffsetIndex");
		HX_STACK_LINE(409)
		bool tmp3 = snap;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(409)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(409)
		if ((tmp4)){
			HX_STACK_LINE(410)
			::lime::utils::Float32Array tmp5 = this->positions;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(410)
			int tmp6 = (index)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(410)
			Float tmp7 = (a * w1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(410)
			Float tmp8 = (c * h1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(410)
			Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(410)
			Float tmp10 = tx;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(410)
			Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(410)
			hx::__ArrayImplRef(tmp5,tmp6) = tmp11;
			HX_STACK_LINE(411)
			::lime::utils::Float32Array tmp12 = this->positions;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(411)
			int tmp13 = (index)++;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(411)
			Float tmp14 = (d * h1);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(411)
			Float tmp15 = (b * w1);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(411)
			Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(411)
			Float tmp17 = ty;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(411)
			Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(411)
			hx::__ArrayImplRef(tmp12,tmp13) = tmp18;
		}
		else{
			HX_STACK_LINE(413)
			::lime::utils::Float32Array tmp5 = this->positions;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(413)
			int tmp6 = (index)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(413)
			Float tmp7 = (a * w1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(413)
			Float tmp8 = (c * h1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(413)
			Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(413)
			Float tmp10 = tx;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(413)
			Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(413)
			Float tmp12 = ::Math_obj::fround(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(413)
			hx::__ArrayImplRef(tmp5,tmp6) = tmp12;
			HX_STACK_LINE(414)
			::lime::utils::Float32Array tmp13 = this->positions;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(414)
			int tmp14 = (index)++;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(414)
			Float tmp15 = (d * h1);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(414)
			Float tmp16 = (b * w1);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(414)
			Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(414)
			Float tmp18 = ty;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(414)
			Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(414)
			Float tmp20 = ::Math_obj::fround(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(414)
			hx::__ArrayImplRef(tmp13,tmp14) = tmp20;
		}
		HX_STACK_LINE(416)
		::lime::utils::Float32Array tmp5 = this->positions;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(416)
		int tmp6 = (index)++;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(416)
		Float tmp7 = uvs->x0;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(416)
		hx::__ArrayImplRef(tmp5,tmp6) = tmp7;
		HX_STACK_LINE(417)
		::lime::utils::Float32Array tmp8 = this->positions;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(417)
		int tmp9 = (index)++;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(417)
		Float tmp10 = uvs->y0;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(417)
		hx::__ArrayImplRef(tmp8,tmp9) = tmp10;
		HX_STACK_LINE(418)
		bool tmp11 = this->enableColor;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(418)
		if ((tmp11)){
			HX_STACK_LINE(419)
			::lime::utils::UInt32Array tmp12 = this->colors;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(419)
			int tmp13 = (index)++;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(419)
			Dynamic tmp14 = color;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(419)
			hx::__ArrayImplRef(tmp12,tmp13) = tmp14;
		}
		HX_STACK_LINE(422)
		bool tmp12 = snap;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(422)
		bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(422)
		if ((tmp13)){
			HX_STACK_LINE(423)
			::lime::utils::Float32Array tmp14 = this->positions;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(423)
			int tmp15 = (index)++;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(423)
			Float tmp16 = (a * w0);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(423)
			Float tmp17 = (c * h1);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(423)
			Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(423)
			Float tmp19 = tx;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(423)
			Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(423)
			hx::__ArrayImplRef(tmp14,tmp15) = tmp20;
			HX_STACK_LINE(424)
			::lime::utils::Float32Array tmp21 = this->positions;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(424)
			int tmp22 = (index)++;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(424)
			Float tmp23 = (d * h1);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(424)
			Float tmp24 = (b * w0);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(424)
			Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(424)
			Float tmp26 = ty;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(424)
			Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(424)
			hx::__ArrayImplRef(tmp21,tmp22) = tmp27;
		}
		else{
			HX_STACK_LINE(426)
			::lime::utils::Float32Array tmp14 = this->positions;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(426)
			int tmp15 = (index)++;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(426)
			Float tmp16 = (a * w0);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(426)
			Float tmp17 = (c * h1);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(426)
			Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(426)
			Float tmp19 = tx;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(426)
			Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(426)
			Float tmp21 = ::Math_obj::fround(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(426)
			hx::__ArrayImplRef(tmp14,tmp15) = tmp21;
			HX_STACK_LINE(427)
			::lime::utils::Float32Array tmp22 = this->positions;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(427)
			int tmp23 = (index)++;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(427)
			Float tmp24 = (d * h1);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(427)
			Float tmp25 = (b * w0);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(427)
			Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(427)
			Float tmp27 = ty;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(427)
			Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(427)
			Float tmp29 = ::Math_obj::fround(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(427)
			hx::__ArrayImplRef(tmp22,tmp23) = tmp29;
		}
		HX_STACK_LINE(429)
		::lime::utils::Float32Array tmp14 = this->positions;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(429)
		int tmp15 = (index)++;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(429)
		Float tmp16 = uvs->x1;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(429)
		hx::__ArrayImplRef(tmp14,tmp15) = tmp16;
		HX_STACK_LINE(430)
		::lime::utils::Float32Array tmp17 = this->positions;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(430)
		int tmp18 = (index)++;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(430)
		Float tmp19 = uvs->y1;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(430)
		hx::__ArrayImplRef(tmp17,tmp18) = tmp19;
		HX_STACK_LINE(431)
		bool tmp20 = this->enableColor;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(431)
		if ((tmp20)){
			HX_STACK_LINE(432)
			::lime::utils::UInt32Array tmp21 = this->colors;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(432)
			int tmp22 = (index)++;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(432)
			Dynamic tmp23 = color;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(432)
			hx::__ArrayImplRef(tmp21,tmp22) = tmp23;
		}
		HX_STACK_LINE(435)
		bool tmp21 = snap;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(435)
		bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(435)
		if ((tmp22)){
			HX_STACK_LINE(436)
			::lime::utils::Float32Array tmp23 = this->positions;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(436)
			int tmp24 = (index)++;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(436)
			Float tmp25 = (a * w0);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(436)
			Float tmp26 = (c * h0);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(436)
			Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(436)
			Float tmp28 = tx;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(436)
			Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(436)
			hx::__ArrayImplRef(tmp23,tmp24) = tmp29;
			HX_STACK_LINE(437)
			::lime::utils::Float32Array tmp30 = this->positions;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(437)
			int tmp31 = (index)++;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(437)
			Float tmp32 = (d * h0);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(437)
			Float tmp33 = (b * w0);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(437)
			Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(437)
			Float tmp35 = ty;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(437)
			Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(437)
			hx::__ArrayImplRef(tmp30,tmp31) = tmp36;
		}
		else{
			HX_STACK_LINE(439)
			::lime::utils::Float32Array tmp23 = this->positions;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(439)
			int tmp24 = (index)++;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(439)
			Float tmp25 = (a * w0);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(439)
			Float tmp26 = (c * h0);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(439)
			Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(439)
			Float tmp28 = tx;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(439)
			Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(439)
			Float tmp30 = ::Math_obj::fround(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(439)
			hx::__ArrayImplRef(tmp23,tmp24) = tmp30;
			HX_STACK_LINE(440)
			::lime::utils::Float32Array tmp31 = this->positions;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(440)
			int tmp32 = (index)++;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(440)
			Float tmp33 = (d * h0);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(440)
			Float tmp34 = (b * w0);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(440)
			Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(440)
			Float tmp36 = ty;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(440)
			Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(440)
			Float tmp38 = ::Math_obj::fround(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(440)
			hx::__ArrayImplRef(tmp31,tmp32) = tmp38;
		}
		HX_STACK_LINE(442)
		::lime::utils::Float32Array tmp23 = this->positions;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(442)
		int tmp24 = (index)++;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(442)
		Float tmp25 = uvs->x2;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(442)
		hx::__ArrayImplRef(tmp23,tmp24) = tmp25;
		HX_STACK_LINE(443)
		::lime::utils::Float32Array tmp26 = this->positions;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(443)
		int tmp27 = (index)++;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(443)
		Float tmp28 = uvs->y2;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(443)
		hx::__ArrayImplRef(tmp26,tmp27) = tmp28;
		HX_STACK_LINE(444)
		bool tmp29 = this->enableColor;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(444)
		if ((tmp29)){
			HX_STACK_LINE(445)
			::lime::utils::UInt32Array tmp30 = this->colors;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(445)
			int tmp31 = (index)++;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(445)
			Dynamic tmp32 = color;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(445)
			hx::__ArrayImplRef(tmp30,tmp31) = tmp32;
		}
		HX_STACK_LINE(448)
		bool tmp30 = snap;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(448)
		bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(448)
		if ((tmp31)){
			HX_STACK_LINE(449)
			::lime::utils::Float32Array tmp32 = this->positions;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(449)
			int tmp33 = (index)++;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(449)
			Float tmp34 = (a * w1);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(449)
			Float tmp35 = (c * h0);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(449)
			Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(449)
			Float tmp37 = tx;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(449)
			Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(449)
			hx::__ArrayImplRef(tmp32,tmp33) = tmp38;
			HX_STACK_LINE(450)
			::lime::utils::Float32Array tmp39 = this->positions;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(450)
			int tmp40 = (index)++;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(450)
			Float tmp41 = (d * h0);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(450)
			Float tmp42 = (b * w1);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(450)
			Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(450)
			Float tmp44 = ty;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(450)
			Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(450)
			hx::__ArrayImplRef(tmp39,tmp40) = tmp45;
		}
		else{
			HX_STACK_LINE(452)
			::lime::utils::Float32Array tmp32 = this->positions;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(452)
			int tmp33 = (index)++;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(452)
			Float tmp34 = (a * w1);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(452)
			Float tmp35 = (c * h0);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(452)
			Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(452)
			Float tmp37 = tx;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(452)
			Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(452)
			Float tmp39 = ::Math_obj::fround(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(452)
			hx::__ArrayImplRef(tmp32,tmp33) = tmp39;
			HX_STACK_LINE(453)
			::lime::utils::Float32Array tmp40 = this->positions;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(453)
			int tmp41 = (index)++;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(453)
			Float tmp42 = (d * h0);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(453)
			Float tmp43 = (b * w1);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(453)
			Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(453)
			Float tmp45 = ty;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(453)
			Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(453)
			Float tmp47 = ::Math_obj::fround(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(453)
			hx::__ArrayImplRef(tmp40,tmp41) = tmp47;
		}
		HX_STACK_LINE(455)
		::lime::utils::Float32Array tmp32 = this->positions;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(455)
		int tmp33 = (index)++;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(455)
		Float tmp34 = uvs->x3;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(455)
		hx::__ArrayImplRef(tmp32,tmp33) = tmp34;
		HX_STACK_LINE(456)
		::lime::utils::Float32Array tmp35 = this->positions;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(456)
		int tmp36 = (index)++;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(456)
		Float tmp37 = uvs->y3;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(456)
		hx::__ArrayImplRef(tmp35,tmp36) = tmp37;
		HX_STACK_LINE(457)
		bool tmp38 = this->enableColor;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(457)
		if ((tmp38)){
			HX_STACK_LINE(458)
			::lime::utils::UInt32Array tmp39 = this->colors;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(458)
			int tmp40 = (index)++;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(458)
			Dynamic tmp41 = color;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(458)
			hx::__ArrayImplRef(tmp39,tmp40) = tmp41;
		}
		HX_STACK_LINE(461)
		this->writtenVertexBytes = index;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(SpriteBatch_obj,fillVertices,(void))

Void SpriteBatch_obj::enableAttributes( Dynamic __o_color){
Dynamic color = __o_color.Default(-1);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","enableAttributes",0x7705b0b4,"openfl._internal.renderer.opengl.utils.SpriteBatch.enableAttributes","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",464,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(color,"color")
{
		HX_STACK_LINE(465)
		bool tmp = (color != (int)-1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(465)
		this->enableColor = tmp;
		HX_STACK_LINE(467)
		bool tmp1 = this->enableColor;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(467)
		bool tmp2 = this->lastEnableColor;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(467)
		bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(467)
		if ((tmp3)){
			HX_STACK_LINE(468)
			this->flush();
			HX_STACK_LINE(469)
			bool tmp4 = this->enableColor;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(469)
			this->lastEnableColor = tmp4;
		}
		HX_STACK_LINE(472)
		bool tmp4 = this->lastEnableColor;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(472)
		::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp5 = this->attributes->__get((int)2).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(472)
		tmp5->enabled = tmp4;
		HX_STACK_LINE(474)
		int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(474)
		{
			HX_STACK_LINE(474)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(474)
			{
				HX_STACK_LINE(474)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(474)
				Array< ::Dynamic > _g1 = this->attributes;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(474)
				while((true)){
					HX_STACK_LINE(474)
					bool tmp7 = (_g < _g1->length);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(474)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(474)
					if ((tmp8)){
						HX_STACK_LINE(474)
						break;
					}
					HX_STACK_LINE(474)
					::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp9 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(474)
					::openfl::_internal::renderer::opengl::utils::VertexAttribute a = tmp9;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(474)
					++(_g);
					HX_STACK_LINE(474)
					bool tmp10 = a->enabled;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(474)
					if ((tmp10)){
						HX_STACK_LINE(474)
						int tmp11 = a->components;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(474)
						int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(474)
						{
							HX_STACK_LINE(474)
							int _g2 = a->type;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(474)
							int tmp13 = _g2;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(474)
							switch( (int)(tmp13)){
								case (int)5120: case (int)5121: {
									HX_STACK_LINE(474)
									tmp12 = (int)1;
								}
								;break;
								case (int)5122: case (int)5123: {
									HX_STACK_LINE(474)
									tmp12 = (int)2;
								}
								;break;
								default: {
									HX_STACK_LINE(474)
									tmp12 = (int)4;
								}
							}
						}
						HX_STACK_LINE(474)
						int tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(474)
						Float tmp14 = (Float(tmp13) / Float((int)4));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(474)
						int tmp15 = ::Math_obj::floor(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(474)
						hx::AddEq(r,tmp15);
					}
				}
			}
			HX_STACK_LINE(474)
			tmp6 = r;
		}
		HX_STACK_LINE(474)
		this->elementsPerVertex = tmp6;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteBatch_obj,enableAttributes,(void))

Void SpriteBatch_obj::flush( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","flush",0xaa58290a,"openfl._internal.renderer.opengl.utils.SpriteBatch.flush","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",477,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(478)
		int tmp = this->batchedSprites;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(478)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(478)
		if ((tmp1)){
			HX_STACK_LINE(478)
			return null();
		}
		HX_STACK_LINE(480)
		::openfl::geom::Rectangle tmp2 = this->clipRect;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(480)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(480)
		if ((tmp3)){
			HX_STACK_LINE(481)
			{
				HX_STACK_LINE(481)
				::lime::graphics::GLRenderContext tmp4 = this->gl;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(481)
				int tmp5 = tmp4->SCISSOR_TEST;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(481)
				::lime::graphics::opengl::GL_obj::lime_gl_enable(tmp5);
			}
			HX_STACK_LINE(482)
			{
				HX_STACK_LINE(482)
				::openfl::geom::Rectangle tmp4 = this->clipRect;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(482)
				Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(482)
				int tmp6 = ::Math_obj::floor(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(482)
				int x = tmp6;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(483)
				::openfl::geom::Rectangle tmp7 = this->clipRect;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(483)
				Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(483)
				int tmp9 = ::Math_obj::floor(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(483)
				int y = tmp9;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(484)
				::openfl::geom::Rectangle tmp10 = this->clipRect;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(484)
				Float tmp11 = tmp10->width;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(484)
				int tmp12 = ::Math_obj::floor(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(484)
				int width = tmp12;		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(485)
				::openfl::geom::Rectangle tmp13 = this->clipRect;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(485)
				Float tmp14 = tmp13->height;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(485)
				int tmp15 = ::Math_obj::floor(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(485)
				int height = tmp15;		HX_STACK_VAR(height,"height");
				HX_STACK_LINE(482)
				{
					HX_STACK_LINE(482)
					int tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(482)
					int tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(482)
					int tmp18 = width;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(482)
					int tmp19 = height;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(482)
					::lime::graphics::opengl::GL_obj::lime_gl_scissor(tmp16,tmp17,tmp18,tmp19);
				}
			}
		}
		HX_STACK_LINE(489)
		bool tmp4 = this->dirty;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(489)
		if ((tmp4)){
			HX_STACK_LINE(490)
			this->dirty = false;
			HX_STACK_LINE(492)
			{
				HX_STACK_LINE(492)
				::lime::graphics::GLRenderContext tmp5 = this->gl;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(492)
				int tmp6 = tmp5->TEXTURE0;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(492)
				::lime::graphics::opengl::GL_obj::lime_gl_active_texture(tmp6);
			}
			HX_STACK_LINE(494)
			{
				HX_STACK_LINE(494)
				::openfl::_internal::renderer::opengl::utils::VertexArray tmp5 = this->vertexArray;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(494)
				::openfl::_internal::renderer::opengl::utils::VertexArray _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(494)
				{
					HX_STACK_LINE(494)
					::lime::graphics::opengl::GLBuffer buffer = _this->glBuffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(494)
					{
						HX_STACK_LINE(494)
						int tmp6 = _this->gl->ARRAY_BUFFER;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(494)
						bool tmp7 = (buffer == null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(494)
						int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(494)
						if ((tmp7)){
							HX_STACK_LINE(494)
							tmp8 = (int)0;
						}
						else{
							HX_STACK_LINE(494)
							tmp8 = buffer->id;
						}
						HX_STACK_LINE(494)
						::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(tmp6,tmp8);
					}
				}
			}
			HX_STACK_LINE(495)
			{
				HX_STACK_LINE(495)
				::lime::graphics::opengl::GLBuffer tmp5 = this->indexBuffer;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(495)
				::lime::graphics::opengl::GLBuffer buffer = tmp5;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(495)
				{
					HX_STACK_LINE(495)
					::lime::graphics::GLRenderContext tmp6 = this->gl;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(495)
					int tmp7 = tmp6->ELEMENT_ARRAY_BUFFER;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(495)
					bool tmp8 = (buffer == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(495)
					int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(495)
					if ((tmp8)){
						HX_STACK_LINE(495)
						tmp9 = (int)0;
					}
					else{
						HX_STACK_LINE(495)
						tmp9 = buffer->id;
					}
					HX_STACK_LINE(495)
					::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(tmp7,tmp9);
				}
			}
		}
		HX_STACK_LINE(498)
		int tmp5 = this->writtenVertexBytes;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(498)
		int tmp6 = this->vertexArraySize;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(498)
		Float tmp7 = (tmp6 * ((Float)0.5));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(498)
		bool tmp8 = (tmp5 > tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(498)
		if ((tmp8)){
			HX_STACK_LINE(499)
			::openfl::_internal::renderer::opengl::utils::VertexArray tmp9 = this->vertexArray;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(499)
			::lime::utils::Float32Array tmp10 = this->positions;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(499)
			tmp9->upload(tmp10);
		}
		else{
			HX_STACK_LINE(501)
			::lime::utils::Float32Array tmp9 = this->positions;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(501)
			int tmp10 = this->writtenVertexBytes;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(501)
			::lime::utils::Float32Array tmp11 = tmp9->subarray((int)0,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(501)
			::lime::utils::Float32Array view = tmp11;		HX_STACK_VAR(view,"view");
			HX_STACK_LINE(502)
			::openfl::_internal::renderer::opengl::utils::VertexArray tmp12 = this->vertexArray;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(502)
			::lime::utils::Float32Array tmp13 = view;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(502)
			tmp12->upload(tmp13);
		}
		HX_STACK_LINE(505)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State nextState;		HX_STACK_VAR(nextState,"nextState");
		HX_STACK_LINE(506)
		int batchSize = (int)0;		HX_STACK_VAR(batchSize,"batchSize");
		HX_STACK_LINE(507)
		int start = (int)0;		HX_STACK_VAR(start,"start");
		HX_STACK_LINE(509)
		::openfl::_internal::renderer::RenderSession tmp9 = this->renderSession;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(509)
		::openfl::_internal::renderer::opengl::shaders2::DefaultShader tmp10 = tmp9->shaderManager->defaultShader;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(509)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp11 = this->currentState;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(509)
		tmp11->shader = tmp10;
		HX_STACK_LINE(510)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp12 = this->currentState;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(510)
		tmp12->texture = null();
		HX_STACK_LINE(511)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp13 = this->currentState;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(511)
		tmp13->textureSmooth = false;
		HX_STACK_LINE(512)
		::openfl::_internal::renderer::RenderSession tmp14 = this->renderSession;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(512)
		::openfl::display::BlendMode tmp15 = tmp14->blendModeManager->currentBlendMode;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(512)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp16 = this->currentState;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(512)
		tmp16->blendMode = tmp15;
		HX_STACK_LINE(513)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp17 = this->currentState;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(513)
		tmp17->colorTransform = null();
		HX_STACK_LINE(514)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp18 = this->currentState;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(514)
		tmp18->skipColorTransformAlpha = false;
		HX_STACK_LINE(516)
		{
			HX_STACK_LINE(516)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(516)
			int tmp19 = this->batchedSprites;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(516)
			int _g = tmp19;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(516)
			while((true)){
				HX_STACK_LINE(516)
				bool tmp20 = (_g1 < _g);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(516)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(516)
				if ((tmp21)){
					HX_STACK_LINE(516)
					break;
				}
				HX_STACK_LINE(516)
				int tmp22 = (_g1)++;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(516)
				int i = tmp22;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(517)
				::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp23 = this->states->__get(i).StaticCast< ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State >();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(517)
				nextState = tmp23;
				HX_STACK_LINE(518)
				::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp24 = this->currentState;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(518)
				tmp24->skipColorTransformAlpha = nextState->skipColorTransformAlpha;
				HX_STACK_LINE(519)
				bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(519)
				{
					HX_STACK_LINE(519)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp26 = this->currentState;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(519)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State other = tmp26;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(519)
					bool tmp27 = (nextState->shader == null());		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(519)
					bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(519)
					bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(519)
					bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(519)
					if ((tmp29)){
						HX_STACK_LINE(519)
						tmp30 = (other->shader == null());
					}
					else{
						HX_STACK_LINE(519)
						tmp30 = true;
					}
					HX_STACK_LINE(519)
					bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(519)
					bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(519)
					bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(519)
					if ((tmp32)){
						HX_STACK_LINE(519)
						int tmp34 = nextState->shader->ID;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(519)
						int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(519)
						int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(519)
						int tmp37 = other->shader->ID;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(519)
						int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(519)
						int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(519)
						tmp33 = (tmp36 == tmp39);
					}
					else{
						HX_STACK_LINE(519)
						tmp33 = true;
					}
					HX_STACK_LINE(519)
					bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(519)
					bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(519)
					if ((tmp34)){
						HX_STACK_LINE(519)
						tmp35 = (nextState->texture == other->texture);
					}
					else{
						HX_STACK_LINE(519)
						tmp35 = false;
					}
					HX_STACK_LINE(519)
					bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(519)
					bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(519)
					if ((tmp36)){
						HX_STACK_LINE(519)
						tmp37 = (nextState->textureSmooth == other->textureSmooth);
					}
					else{
						HX_STACK_LINE(519)
						tmp37 = false;
					}
					HX_STACK_LINE(519)
					bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(519)
					bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(519)
					if ((tmp38)){
						HX_STACK_LINE(519)
						tmp39 = (nextState->blendMode == other->blendMode);
					}
					else{
						HX_STACK_LINE(519)
						tmp39 = false;
					}
					HX_STACK_LINE(519)
					if ((tmp39)){
						HX_STACK_LINE(519)
						bool tmp40 = (nextState->colorTransform != null());		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(519)
						bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(519)
						bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(519)
						if ((tmp42)){
							HX_STACK_LINE(519)
							::openfl::geom::ColorTransform tmp43 = other->colorTransform;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(519)
							bool tmp44 = nextState->skipColorTransformAlpha;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(519)
							::openfl::geom::ColorTransform tmp45 = tmp43;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(519)
							bool tmp46 = tmp44;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(519)
							::openfl::geom::ColorTransform tmp47 = tmp45;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(519)
							bool tmp48 = tmp46;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(519)
							tmp25 = nextState->colorTransform->__equals(tmp47,tmp48);
						}
						else{
							HX_STACK_LINE(519)
							tmp25 = false;
						}
					}
					else{
						HX_STACK_LINE(519)
						tmp25 = false;
					}
				}
				HX_STACK_LINE(519)
				bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(519)
				if ((tmp26)){
					HX_STACK_LINE(520)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp27 = this->currentState;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(520)
					int tmp28 = batchSize;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(520)
					int tmp29 = start;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(520)
					this->renderBatch(tmp27,tmp28,tmp29);
					HX_STACK_LINE(522)
					start = i;
					HX_STACK_LINE(523)
					batchSize = (int)0;
					HX_STACK_LINE(525)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp30 = this->currentState;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(525)
					tmp30->shader = nextState->shader;
					HX_STACK_LINE(526)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp31 = this->currentState;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(526)
					tmp31->texture = nextState->texture;
					HX_STACK_LINE(527)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp32 = this->currentState;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(527)
					tmp32->textureSmooth = nextState->textureSmooth;
					HX_STACK_LINE(528)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp33 = this->currentState;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(528)
					tmp33->blendMode = nextState->blendMode;
					HX_STACK_LINE(529)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp34 = this->currentState;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(529)
					tmp34->colorTransform = nextState->colorTransform;
				}
				HX_STACK_LINE(532)
				(batchSize)++;
			}
		}
		HX_STACK_LINE(535)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp19 = this->currentState;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(535)
		int tmp20 = batchSize;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(535)
		int tmp21 = start;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(535)
		this->renderBatch(tmp19,tmp20,tmp21);
		HX_STACK_LINE(536)
		this->batchedSprites = (int)0;
		HX_STACK_LINE(537)
		this->writtenVertexBytes = (int)0;
		HX_STACK_LINE(539)
		::openfl::geom::Rectangle tmp22 = this->clipRect;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(539)
		bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(539)
		if ((tmp23)){
			HX_STACK_LINE(540)
			::lime::graphics::GLRenderContext tmp24 = this->gl;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(540)
			int tmp25 = tmp24->SCISSOR_TEST;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(540)
			::lime::graphics::opengl::GL_obj::lime_gl_disable(tmp25);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteBatch_obj,flush,(void))

Void SpriteBatch_obj::renderBatch( ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State state,int size,int start){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","renderBatch",0x8edfd34a,"openfl._internal.renderer.opengl.utils.SpriteBatch.renderBatch","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",546,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(state,"state")
		HX_STACK_ARG(size,"size")
		HX_STACK_ARG(start,"start")
		HX_STACK_LINE(547)
		bool tmp = (size == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(547)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(547)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(547)
		if ((tmp1)){
			HX_STACK_LINE(547)
			tmp2 = (state->texture == null());
		}
		else{
			HX_STACK_LINE(547)
			tmp2 = true;
		}
		HX_STACK_LINE(547)
		if ((tmp2)){
			HX_STACK_LINE(547)
			return null();
		}
		HX_STACK_LINE(549)
		bool tmp3 = (state->shader == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(549)
		::openfl::_internal::renderer::opengl::shaders2::Shader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(549)
		if ((tmp3)){
			HX_STACK_LINE(549)
			::openfl::_internal::renderer::RenderSession tmp5 = this->renderSession;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(549)
			tmp4 = tmp5->shaderManager->defaultShader;
		}
		else{
			HX_STACK_LINE(549)
			tmp4 = state->shader;
		}
		HX_STACK_LINE(549)
		::openfl::_internal::renderer::opengl::shaders2::Shader shader = tmp4;		HX_STACK_VAR(shader,"shader");
		HX_STACK_LINE(550)
		::openfl::_internal::renderer::RenderSession tmp5 = this->renderSession;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(550)
		::openfl::_internal::renderer::opengl::shaders2::Shader tmp6 = shader;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(550)
		tmp5->shaderManager->setShader(tmp6,null());
		HX_STACK_LINE(553)
		::openfl::_internal::renderer::opengl::utils::VertexArray tmp7 = this->vertexArray;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(553)
		shader->bindVertexArray(tmp7);
		HX_STACK_LINE(555)
		{
			HX_STACK_LINE(555)
			int tmp8 = shader->getUniformLocation(HX_HCSTRING("uProjectionMatrix","\xc5","\x5e","\x25","\xc4"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(555)
			int location = tmp8;		HX_STACK_VAR(location,"location");
			HX_STACK_LINE(555)
			::openfl::_internal::renderer::RenderSession tmp9 = this->renderSession;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(555)
			::lime::utils::Float32Array tmp10 = tmp9->projectionMatrix->toArray(true);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(555)
			::lime::utils::Float32Array v = tmp10;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(555)
			{
				HX_STACK_LINE(555)
				int tmp11 = location;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(555)
				::lime::utils::ByteArray tmp12 = v->getByteBuffer();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(555)
				::lime::graphics::opengl::GL_obj::lime_gl_uniform_matrix(tmp11,false,tmp12,(int)3);
			}
		}
		HX_STACK_LINE(557)
		bool tmp8 = (state->colorTransform != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(557)
		if ((tmp8)){
			HX_STACK_LINE(558)
			::openfl::geom::ColorTransform ct = state->colorTransform;		HX_STACK_VAR(ct,"ct");
			HX_STACK_LINE(559)
			{
				HX_STACK_LINE(559)
				int tmp9 = shader->getUniformLocation(HX_HCSTRING("uColorMultiplier","\xcf","\xe9","\x0f","\xba"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(559)
				int location = tmp9;		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(559)
				{
					HX_STACK_LINE(559)
					int tmp10 = location;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(560)
					Float tmp11 = ct->redMultiplier;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(560)
					Float tmp12 = ct->greenMultiplier;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(560)
					Float tmp13 = ct->blueMultiplier;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(560)
					bool tmp14 = state->skipColorTransformAlpha;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(560)
					Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(560)
					if ((tmp14)){
						HX_STACK_LINE(560)
						tmp15 = (int)1;
					}
					else{
						HX_STACK_LINE(560)
						tmp15 = ct->alphaMultiplier;
					}
					HX_STACK_LINE(559)
					::lime::graphics::opengl::GL_obj::lime_gl_uniform4f(tmp10,tmp11,tmp12,tmp13,tmp15);
				}
			}
			HX_STACK_LINE(561)
			{
				HX_STACK_LINE(561)
				int tmp9 = shader->getUniformLocation(HX_HCSTRING("uColorOffset","\xe1","\xda","\x17","\x0b"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(561)
				int location = tmp9;		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(561)
				{
					HX_STACK_LINE(561)
					int tmp10 = location;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(562)
					Float tmp11 = (Float(ct->redOffset) / Float(((Float)255.)));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(562)
					Float tmp12 = (Float(ct->greenOffset) / Float(((Float)255.)));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(562)
					Float tmp13 = (Float(ct->blueOffset) / Float(((Float)255.)));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(562)
					Float tmp14 = (Float(ct->alphaOffset) / Float(((Float)255.)));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(561)
					::lime::graphics::opengl::GL_obj::lime_gl_uniform4f(tmp10,tmp11,tmp12,tmp13,tmp14);
				}
			}
		}
		else{
			HX_STACK_LINE(564)
			{
				HX_STACK_LINE(564)
				int tmp9 = shader->getUniformLocation(HX_HCSTRING("uColorMultiplier","\xcf","\xe9","\x0f","\xba"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(564)
				int location = tmp9;		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(564)
				{
					HX_STACK_LINE(564)
					int tmp10 = location;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(564)
					::lime::graphics::opengl::GL_obj::lime_gl_uniform4f(tmp10,(int)1,(int)1,(int)1,(int)1);
				}
			}
			HX_STACK_LINE(565)
			{
				HX_STACK_LINE(565)
				int tmp9 = shader->getUniformLocation(HX_HCSTRING("uColorOffset","\xe1","\xda","\x17","\x0b"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(565)
				int location = tmp9;		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(565)
				{
					HX_STACK_LINE(565)
					int tmp10 = location;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(565)
					::lime::graphics::opengl::GL_obj::lime_gl_uniform4f(tmp10,(int)0,(int)0,(int)0,(int)0);
				}
			}
		}
		HX_STACK_LINE(568)
		::openfl::_internal::renderer::RenderSession tmp9 = this->renderSession;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(568)
		::openfl::display::BlendMode tmp10 = state->blendMode;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(568)
		tmp9->blendModeManager->setBlendMode(tmp10,null());
		HX_STACK_LINE(569)
		{
			HX_STACK_LINE(569)
			::lime::graphics::opengl::GLTexture texture = state->texture;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(569)
			{
				HX_STACK_LINE(569)
				::lime::graphics::GLRenderContext tmp11 = this->gl;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(569)
				int tmp12 = tmp11->TEXTURE_2D;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(569)
				bool tmp13 = (texture == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(569)
				int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(569)
				if ((tmp13)){
					HX_STACK_LINE(569)
					tmp14 = (int)0;
				}
				else{
					HX_STACK_LINE(569)
					tmp14 = texture->id;
				}
				HX_STACK_LINE(569)
				::lime::graphics::opengl::GL_obj::lime_gl_bind_texture(tmp12,tmp14);
			}
		}
		HX_STACK_LINE(571)
		bool tmp11 = state->textureSmooth;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(571)
		if ((tmp11)){
			HX_STACK_LINE(573)
			{
				HX_STACK_LINE(573)
				::lime::graphics::GLRenderContext tmp12 = this->gl;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(573)
				int tmp13 = tmp12->TEXTURE_2D;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(573)
				::lime::graphics::GLRenderContext tmp14 = this->gl;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(573)
				int tmp15 = tmp14->TEXTURE_MAG_FILTER;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(573)
				::lime::graphics::GLRenderContext tmp16 = this->gl;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(573)
				int tmp17 = tmp16->LINEAR;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(573)
				::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(tmp13,tmp15,tmp17);
			}
			HX_STACK_LINE(574)
			{
				HX_STACK_LINE(574)
				::lime::graphics::GLRenderContext tmp12 = this->gl;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(574)
				int tmp13 = tmp12->TEXTURE_2D;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(574)
				::lime::graphics::GLRenderContext tmp14 = this->gl;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(574)
				int tmp15 = tmp14->TEXTURE_MIN_FILTER;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(574)
				::lime::graphics::GLRenderContext tmp16 = this->gl;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(574)
				int tmp17 = tmp16->LINEAR;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(574)
				::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(tmp13,tmp15,tmp17);
			}
		}
		else{
			HX_STACK_LINE(576)
			{
				HX_STACK_LINE(576)
				::lime::graphics::GLRenderContext tmp12 = this->gl;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(576)
				int tmp13 = tmp12->TEXTURE_2D;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(576)
				::lime::graphics::GLRenderContext tmp14 = this->gl;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(576)
				int tmp15 = tmp14->TEXTURE_MAG_FILTER;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(576)
				::lime::graphics::GLRenderContext tmp16 = this->gl;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(576)
				int tmp17 = tmp16->NEAREST;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(576)
				::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(tmp13,tmp15,tmp17);
			}
			HX_STACK_LINE(577)
			{
				HX_STACK_LINE(577)
				::lime::graphics::GLRenderContext tmp12 = this->gl;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(577)
				int tmp13 = tmp12->TEXTURE_2D;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(577)
				::lime::graphics::GLRenderContext tmp14 = this->gl;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(577)
				int tmp15 = tmp14->TEXTURE_MIN_FILTER;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(577)
				::lime::graphics::GLRenderContext tmp16 = this->gl;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(577)
				int tmp17 = tmp16->NEAREST;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(577)
				::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(tmp13,tmp15,tmp17);
			}
		}
		HX_STACK_LINE(580)
		{
			HX_STACK_LINE(580)
			::lime::graphics::GLRenderContext tmp12 = this->gl;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(580)
			int tmp13 = tmp12->TRIANGLES;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(580)
			int tmp14 = (size * (int)6);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(580)
			::lime::graphics::GLRenderContext tmp15 = this->gl;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(580)
			int tmp16 = tmp15->UNSIGNED_SHORT;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(580)
			int tmp17 = (start * (int)6);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(580)
			int tmp18 = (tmp17 * (int)2);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(580)
			::lime::graphics::opengl::GL_obj::lime_gl_draw_elements(tmp13,tmp14,tmp16,tmp18);
		}
		HX_STACK_LINE(582)
		::openfl::_internal::renderer::RenderSession tmp12 = this->renderSession;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(582)
		(tmp12->drawCount)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(SpriteBatch_obj,renderBatch,(void))

Void SpriteBatch_obj::setState( int index,::lime::graphics::opengl::GLTexture texture,Dynamic __o_smooth,::openfl::display::BlendMode blendMode,::openfl::geom::ColorTransform colorTransform,Dynamic __o_skipAlpha){
Dynamic smooth = __o_smooth.Default(false);
Dynamic skipAlpha = __o_skipAlpha.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","setState",0x7687c889,"openfl._internal.renderer.opengl.utils.SpriteBatch.setState","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",586,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(texture,"texture")
	HX_STACK_ARG(smooth,"smooth")
	HX_STACK_ARG(blendMode,"blendMode")
	HX_STACK_ARG(colorTransform,"colorTransform")
	HX_STACK_ARG(skipAlpha,"skipAlpha")
{
		HX_STACK_LINE(587)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp = this->states->__get(index).StaticCast< ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(587)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State state = tmp;		HX_STACK_VAR(state,"state");
		HX_STACK_LINE(588)
		bool tmp1 = (state == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(588)
		if ((tmp1)){
			HX_STACK_LINE(589)
			::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp2 = ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(589)
			::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp3 = this->states[index] = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(589)
			state = tmp3;
		}
		HX_STACK_LINE(591)
		state->texture = texture;
		HX_STACK_LINE(592)
		state->textureSmooth = smooth;
		HX_STACK_LINE(593)
		state->blendMode = blendMode;
		HX_STACK_LINE(594)
		state->colorTransform = colorTransform;
		HX_STACK_LINE(595)
		state->skipColorTransformAlpha = skipAlpha;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(SpriteBatch_obj,setState,(void))

Void SpriteBatch_obj::setContext( ::lime::graphics::GLRenderContext gl){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","setContext",0xe1877667,"openfl._internal.renderer.opengl.utils.SpriteBatch.setContext","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",598,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gl,"gl")
		HX_STACK_LINE(599)
		this->gl = gl;
		HX_STACK_LINE(601)
		::openfl::_internal::renderer::opengl::utils::VertexArray tmp = this->vertexArray;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(601)
		::lime::graphics::GLRenderContext tmp1 = gl;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(601)
		::lime::utils::Float32Array tmp2 = this->positions;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(601)
		tmp->setContext(tmp1,tmp2);
		HX_STACK_LINE(603)
		int tmp3 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(603)
		Dynamic tmp4 = ::lime::graphics::opengl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(603)
		::lime::graphics::opengl::GLBuffer tmp5 = ::lime::graphics::opengl::GLBuffer_obj::__new(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(603)
		this->indexBuffer = tmp5;
		HX_STACK_LINE(604)
		{
			HX_STACK_LINE(604)
			::lime::graphics::opengl::GLBuffer tmp6 = this->indexBuffer;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(604)
			::lime::graphics::opengl::GLBuffer buffer = tmp6;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(604)
			{
				HX_STACK_LINE(604)
				int tmp7 = gl->ELEMENT_ARRAY_BUFFER;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(604)
				bool tmp8 = (buffer == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(604)
				int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(604)
				if ((tmp8)){
					HX_STACK_LINE(604)
					tmp9 = (int)0;
				}
				else{
					HX_STACK_LINE(604)
					tmp9 = buffer->id;
				}
				HX_STACK_LINE(604)
				::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(tmp7,tmp9);
			}
		}
		HX_STACK_LINE(605)
		{
			HX_STACK_LINE(605)
			::lime::utils::UInt16Array tmp6 = this->indices;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(605)
			::lime::utils::ArrayBufferView data = tmp6;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(605)
			{
				HX_STACK_LINE(605)
				int tmp7 = gl->ELEMENT_ARRAY_BUFFER;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(605)
				::lime::utils::ByteArray tmp8 = data->getByteBuffer();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(605)
				int tmp9 = data->getStart();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(605)
				int tmp10 = data->getLength();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(605)
				int tmp11 = gl->STATIC_DRAW;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(605)
				::lime::graphics::opengl::GL_obj::lime_gl_buffer_data(tmp7,tmp8,tmp9,tmp10,tmp11);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteBatch_obj,setContext,(void))

int SpriteBatch_obj::getElementsPerVertex( ){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","getElementsPerVertex",0x09fa41ee,"openfl._internal.renderer.opengl.utils.SpriteBatch.getElementsPerVertex","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",610,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(611)
	int r = (int)0;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(613)
	{
		HX_STACK_LINE(613)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(613)
		Array< ::Dynamic > _g1 = this->attributes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(613)
		while((true)){
			HX_STACK_LINE(613)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(613)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(613)
			if ((tmp1)){
				HX_STACK_LINE(613)
				break;
			}
			HX_STACK_LINE(613)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp2 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(613)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute a = tmp2;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(613)
			++(_g);
			HX_STACK_LINE(614)
			bool tmp3 = a->enabled;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(614)
			if ((tmp3)){
				HX_STACK_LINE(614)
				int tmp4 = a->components;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(614)
				int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(614)
				{
					HX_STACK_LINE(614)
					int _g2 = a->type;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(614)
					int tmp6 = _g2;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(614)
					switch( (int)(tmp6)){
						case (int)5120: case (int)5121: {
							HX_STACK_LINE(614)
							tmp5 = (int)1;
						}
						;break;
						case (int)5122: case (int)5123: {
							HX_STACK_LINE(614)
							tmp5 = (int)2;
						}
						;break;
						default: {
							HX_STACK_LINE(614)
							tmp5 = (int)4;
						}
					}
				}
				HX_STACK_LINE(614)
				int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(614)
				Float tmp7 = (Float(tmp6) / Float((int)4));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(614)
				int tmp8 = ::Math_obj::floor(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(614)
				hx::AddEq(r,tmp8);
			}
		}
	}
	HX_STACK_LINE(617)
	int tmp = r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(617)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteBatch_obj,getElementsPerVertex,return )

int SpriteBatch_obj::VERTS_PER_SPRITE;


SpriteBatch_obj::SpriteBatch_obj()
{
}

void SpriteBatch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SpriteBatch);
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(renderSession,"renderSession");
	HX_MARK_MEMBER_NAME(states,"states");
	HX_MARK_MEMBER_NAME(currentState,"currentState");
	HX_MARK_MEMBER_NAME(vertexArray,"vertexArray");
	HX_MARK_MEMBER_NAME(positions,"positions");
	HX_MARK_MEMBER_NAME(colors,"colors");
	HX_MARK_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_MARK_MEMBER_NAME(indices,"indices");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(drawing,"drawing");
	HX_MARK_MEMBER_NAME(clipRect,"clipRect");
	HX_MARK_MEMBER_NAME(maxSprites,"maxSprites");
	HX_MARK_MEMBER_NAME(batchedSprites,"batchedSprites");
	HX_MARK_MEMBER_NAME(vertexArraySize,"vertexArraySize");
	HX_MARK_MEMBER_NAME(indexArraySize,"indexArraySize");
	HX_MARK_MEMBER_NAME(maxElementsPerVertex,"maxElementsPerVertex");
	HX_MARK_MEMBER_NAME(elementsPerVertex,"elementsPerVertex");
	HX_MARK_MEMBER_NAME(writtenVertexBytes,"writtenVertexBytes");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(attributes,"attributes");
	HX_MARK_MEMBER_NAME(enableColor,"enableColor");
	HX_MARK_MEMBER_NAME(lastEnableColor,"lastEnableColor");
	HX_MARK_END_CLASS();
}

void SpriteBatch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(renderSession,"renderSession");
	HX_VISIT_MEMBER_NAME(states,"states");
	HX_VISIT_MEMBER_NAME(currentState,"currentState");
	HX_VISIT_MEMBER_NAME(vertexArray,"vertexArray");
	HX_VISIT_MEMBER_NAME(positions,"positions");
	HX_VISIT_MEMBER_NAME(colors,"colors");
	HX_VISIT_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_VISIT_MEMBER_NAME(indices,"indices");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(drawing,"drawing");
	HX_VISIT_MEMBER_NAME(clipRect,"clipRect");
	HX_VISIT_MEMBER_NAME(maxSprites,"maxSprites");
	HX_VISIT_MEMBER_NAME(batchedSprites,"batchedSprites");
	HX_VISIT_MEMBER_NAME(vertexArraySize,"vertexArraySize");
	HX_VISIT_MEMBER_NAME(indexArraySize,"indexArraySize");
	HX_VISIT_MEMBER_NAME(maxElementsPerVertex,"maxElementsPerVertex");
	HX_VISIT_MEMBER_NAME(elementsPerVertex,"elementsPerVertex");
	HX_VISIT_MEMBER_NAME(writtenVertexBytes,"writtenVertexBytes");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(attributes,"attributes");
	HX_VISIT_MEMBER_NAME(enableColor,"enableColor");
	HX_VISIT_MEMBER_NAME(lastEnableColor,"lastEnableColor");
}

Dynamic SpriteBatch_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"states") ) { return states; }
		if (HX_FIELD_EQ(inName,"colors") ) { return colors; }
		if (HX_FIELD_EQ(inName,"shader") ) { return shader; }
		if (HX_FIELD_EQ(inName,"finish") ) { return finish_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { return indices; }
		if (HX_FIELD_EQ(inName,"drawing") ) { return drawing; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"clipRect") ) { return clipRect; }
		if (HX_FIELD_EQ(inName,"setState") ) { return setState_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"positions") ) { return positions; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxSprites") ) { return maxSprites; }
		if (HX_FIELD_EQ(inName,"attributes") ) { return attributes; }
		if (HX_FIELD_EQ(inName,"setContext") ) { return setContext_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vertexArray") ) { return vertexArray; }
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { return indexBuffer; }
		if (HX_FIELD_EQ(inName,"enableColor") ) { return enableColor; }
		if (HX_FIELD_EQ(inName,"renderTiles") ) { return renderTiles_dyn(); }
		if (HX_FIELD_EQ(inName,"renderBatch") ) { return renderBatch_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentState") ) { return currentState; }
		if (HX_FIELD_EQ(inName,"fillVertices") ) { return fillVertices_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderSession") ) { return renderSession; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"batchedSprites") ) { return batchedSprites; }
		if (HX_FIELD_EQ(inName,"indexArraySize") ) { return indexArraySize; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"vertexArraySize") ) { return vertexArraySize; }
		if (HX_FIELD_EQ(inName,"lastEnableColor") ) { return lastEnableColor; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"renderBitmapData") ) { return renderBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"enableAttributes") ) { return enableAttributes_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"elementsPerVertex") ) { return elementsPerVertex; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"writtenVertexBytes") ) { return writtenVertexBytes; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"maxElementsPerVertex") ) { return maxElementsPerVertex; }
		if (HX_FIELD_EQ(inName,"renderCachedGraphics") ) { return renderCachedGraphics_dyn(); }
		if (HX_FIELD_EQ(inName,"getElementsPerVertex") ) { return getElementsPerVertex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SpriteBatch_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"states") ) { states=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colors") ) { colors=inValue.Cast< ::lime::utils::UInt32Array >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast< ::openfl::_internal::renderer::opengl::shaders2::Shader >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { indices=inValue.Cast< ::lime::utils::UInt16Array >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawing") ) { drawing=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"clipRect") ) { clipRect=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"positions") ) { positions=inValue.Cast< ::lime::utils::Float32Array >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxSprites") ) { maxSprites=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"attributes") ) { attributes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vertexArray") ) { vertexArray=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::VertexArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { indexBuffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enableColor") ) { enableColor=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentState") ) { currentState=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderSession") ) { renderSession=inValue.Cast< ::openfl::_internal::renderer::RenderSession >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"batchedSprites") ) { batchedSprites=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexArraySize") ) { indexArraySize=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"vertexArraySize") ) { vertexArraySize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastEnableColor") ) { lastEnableColor=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"elementsPerVertex") ) { elementsPerVertex=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"writtenVertexBytes") ) { writtenVertexBytes=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"maxElementsPerVertex") ) { maxElementsPerVertex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SpriteBatch_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void SpriteBatch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("renderSession","\xa0","\x8a","\x85","\x8f"));
	outFields->push(HX_HCSTRING("states","\x42","\xd9","\xfb","\x05"));
	outFields->push(HX_HCSTRING("currentState","\x18","\x5b","\x17","\xcb"));
	outFields->push(HX_HCSTRING("vertexArray","\x95","\x37","\xcb","\x39"));
	outFields->push(HX_HCSTRING("positions","\xaa","\xf3","\x51","\xd0"));
	outFields->push(HX_HCSTRING("colors","\xb0","\xc5","\x86","\xc6"));
	outFields->push(HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5"));
	outFields->push(HX_HCSTRING("indices","\x27","\x47","\x54","\xe3"));
	outFields->push(HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"));
	outFields->push(HX_HCSTRING("drawing","\x5e","\x3b","\xe8","\xfb"));
	outFields->push(HX_HCSTRING("clipRect","\x14","\x90","\x6a","\x58"));
	outFields->push(HX_HCSTRING("maxSprites","\x8a","\x22","\xaf","\xc9"));
	outFields->push(HX_HCSTRING("batchedSprites","\x35","\x23","\x1a","\x71"));
	outFields->push(HX_HCSTRING("vertexArraySize","\xf6","\xf2","\x13","\x87"));
	outFields->push(HX_HCSTRING("indexArraySize","\x88","\xcd","\xd4","\xb2"));
	outFields->push(HX_HCSTRING("maxElementsPerVertex","\xa6","\x4f","\xf4","\x82"));
	outFields->push(HX_HCSTRING("elementsPerVertex","\xea","\xd2","\xc7","\xbf"));
	outFields->push(HX_HCSTRING("writtenVertexBytes","\xd0","\x9e","\x8f","\xc3"));
	outFields->push(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"));
	outFields->push(HX_HCSTRING("attributes","\xd7","\xa8","\x71","\x97"));
	outFields->push(HX_HCSTRING("enableColor","\xe0","\xb7","\x2b","\x15"));
	outFields->push(HX_HCSTRING("lastEnableColor","\x2a","\x59","\x68","\xb7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(SpriteBatch_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsObject /*::openfl::_internal::renderer::RenderSession*/ ,(int)offsetof(SpriteBatch_obj,renderSession),HX_HCSTRING("renderSession","\xa0","\x8a","\x85","\x8f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SpriteBatch_obj,states),HX_HCSTRING("states","\x42","\xd9","\xfb","\x05")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State*/ ,(int)offsetof(SpriteBatch_obj,currentState),HX_HCSTRING("currentState","\x18","\x5b","\x17","\xcb")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::VertexArray*/ ,(int)offsetof(SpriteBatch_obj,vertexArray),HX_HCSTRING("vertexArray","\x95","\x37","\xcb","\x39")},
	{hx::fsObject /*::lime::utils::Float32Array*/ ,(int)offsetof(SpriteBatch_obj,positions),HX_HCSTRING("positions","\xaa","\xf3","\x51","\xd0")},
	{hx::fsObject /*::lime::utils::UInt32Array*/ ,(int)offsetof(SpriteBatch_obj,colors),HX_HCSTRING("colors","\xb0","\xc5","\x86","\xc6")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(SpriteBatch_obj,indexBuffer),HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5")},
	{hx::fsObject /*::lime::utils::UInt16Array*/ ,(int)offsetof(SpriteBatch_obj,indices),HX_HCSTRING("indices","\x27","\x47","\x54","\xe3")},
	{hx::fsBool,(int)offsetof(SpriteBatch_obj,dirty),HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9")},
	{hx::fsBool,(int)offsetof(SpriteBatch_obj,drawing),HX_HCSTRING("drawing","\x5e","\x3b","\xe8","\xfb")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(SpriteBatch_obj,clipRect),HX_HCSTRING("clipRect","\x14","\x90","\x6a","\x58")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,maxSprites),HX_HCSTRING("maxSprites","\x8a","\x22","\xaf","\xc9")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,batchedSprites),HX_HCSTRING("batchedSprites","\x35","\x23","\x1a","\x71")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,vertexArraySize),HX_HCSTRING("vertexArraySize","\xf6","\xf2","\x13","\x87")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,indexArraySize),HX_HCSTRING("indexArraySize","\x88","\xcd","\xd4","\xb2")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,maxElementsPerVertex),HX_HCSTRING("maxElementsPerVertex","\xa6","\x4f","\xf4","\x82")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,elementsPerVertex),HX_HCSTRING("elementsPerVertex","\xea","\xd2","\xc7","\xbf")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,writtenVertexBytes),HX_HCSTRING("writtenVertexBytes","\xd0","\x9e","\x8f","\xc3")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::shaders2::Shader*/ ,(int)offsetof(SpriteBatch_obj,shader),HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SpriteBatch_obj,attributes),HX_HCSTRING("attributes","\xd7","\xa8","\x71","\x97")},
	{hx::fsBool,(int)offsetof(SpriteBatch_obj,enableColor),HX_HCSTRING("enableColor","\xe0","\xb7","\x2b","\x15")},
	{hx::fsBool,(int)offsetof(SpriteBatch_obj,lastEnableColor),HX_HCSTRING("lastEnableColor","\x2a","\x59","\x68","\xb7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &SpriteBatch_obj::VERTS_PER_SPRITE,HX_HCSTRING("VERTS_PER_SPRITE","\x64","\x04","\x57","\x9d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("renderSession","\xa0","\x8a","\x85","\x8f"),
	HX_HCSTRING("states","\x42","\xd9","\xfb","\x05"),
	HX_HCSTRING("currentState","\x18","\x5b","\x17","\xcb"),
	HX_HCSTRING("vertexArray","\x95","\x37","\xcb","\x39"),
	HX_HCSTRING("positions","\xaa","\xf3","\x51","\xd0"),
	HX_HCSTRING("colors","\xb0","\xc5","\x86","\xc6"),
	HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5"),
	HX_HCSTRING("indices","\x27","\x47","\x54","\xe3"),
	HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"),
	HX_HCSTRING("drawing","\x5e","\x3b","\xe8","\xfb"),
	HX_HCSTRING("clipRect","\x14","\x90","\x6a","\x58"),
	HX_HCSTRING("maxSprites","\x8a","\x22","\xaf","\xc9"),
	HX_HCSTRING("batchedSprites","\x35","\x23","\x1a","\x71"),
	HX_HCSTRING("vertexArraySize","\xf6","\xf2","\x13","\x87"),
	HX_HCSTRING("indexArraySize","\x88","\xcd","\xd4","\xb2"),
	HX_HCSTRING("maxElementsPerVertex","\xa6","\x4f","\xf4","\x82"),
	HX_HCSTRING("elementsPerVertex","\xea","\xd2","\xc7","\xbf"),
	HX_HCSTRING("writtenVertexBytes","\xd0","\x9e","\x8f","\xc3"),
	HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"),
	HX_HCSTRING("attributes","\xd7","\xa8","\x71","\x97"),
	HX_HCSTRING("enableColor","\xe0","\xb7","\x2b","\x15"),
	HX_HCSTRING("lastEnableColor","\x2a","\x59","\x68","\xb7"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("begin","\x29","\xea","\x55","\xb0"),
	HX_HCSTRING("finish","\x53","\x40","\x7f","\x86"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("renderBitmapData","\xaf","\xec","\x66","\xde"),
	HX_HCSTRING("renderTiles","\x4f","\x2a","\xe6","\xdb"),
	HX_HCSTRING("renderCachedGraphics","\xc3","\xb0","\xad","\xeb"),
	HX_HCSTRING("fillVertices","\x9c","\x05","\x8a","\x6e"),
	HX_HCSTRING("enableAttributes","\x3a","\xbd","\x20","\x34"),
	HX_HCSTRING("flush","\xc4","\x62","\x9b","\x02"),
	HX_HCSTRING("renderBatch","\x84","\x14","\x6c","\x79"),
	HX_HCSTRING("setState","\x0f","\xdf","\x3f","\x92"),
	HX_HCSTRING("setContext","\x6d","\xba","\x56","\x6c"),
	HX_HCSTRING("getElementsPerVertex","\x74","\x09","\x3d","\xe7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpriteBatch_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SpriteBatch_obj::VERTS_PER_SPRITE,"VERTS_PER_SPRITE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpriteBatch_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SpriteBatch_obj::VERTS_PER_SPRITE,"VERTS_PER_SPRITE");
};

#endif

hx::Class SpriteBatch_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("VERTS_PER_SPRITE","\x64","\x04","\x57","\x9d"),
	::String(null()) };

void SpriteBatch_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.utils.SpriteBatch","\x34","\x8e","\xd7","\x6d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &SpriteBatch_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SpriteBatch_obj >;
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

void SpriteBatch_obj::__boot()
{
	VERTS_PER_SPRITE= (int)4;
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils

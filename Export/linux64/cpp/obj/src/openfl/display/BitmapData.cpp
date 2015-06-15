#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageChannel
#include <lime/graphics/ImageChannel.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageType
#include <lime/graphics/ImageType.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_
#include <lime/graphics/cairo/_CairoSurface/CairoSurface_Impl_.h>
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
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_lime_graphics_utils_ImageCanvasUtil
#include <lime/graphics/utils/ImageCanvasUtil.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
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
#ifndef INCLUDED_lime_utils_UInt8Array
#include <lime/utils/UInt8Array.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_Memory
#include <openfl/Memory.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
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
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_JPEGEncoderOptions
#include <openfl/display/JPEGEncoderOptions.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_PNGEncoderOptions
#include <openfl/display/PNGEncoderOptions.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_TextureUvs
#include <openfl/display/TextureUvs.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
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
namespace display{

Void BitmapData_obj::__construct(int width,int height,hx::Null< bool >  __o_transparent,hx::Null< int >  __o_fillColor)
{
HX_STACK_FRAME("openfl.display.BitmapData","new",0x7e3e4115,"openfl.display.BitmapData.new","openfl/display/BitmapData.hx",108,0xdd12d5b9)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(__o_transparent,"transparent")
HX_STACK_ARG(__o_fillColor,"fillColor")
bool transparent = __o_transparent.Default(true);
int fillColor = __o_fillColor.Default(-1);
{
	HX_STACK_LINE(155)
	this->__usingFramebuffer = false;
	HX_STACK_LINE(174)
	this->transparent = transparent;
	HX_STACK_LINE(181)
	bool tmp = (width < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(181)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(181)
	if ((tmp)){
		HX_STACK_LINE(181)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(181)
		tmp1 = width;
	}
	HX_STACK_LINE(181)
	width = tmp1;
	HX_STACK_LINE(182)
	bool tmp2 = (height < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(182)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(182)
	if ((tmp2)){
		HX_STACK_LINE(182)
		tmp3 = (int)0;
	}
	else{
		HX_STACK_LINE(182)
		tmp3 = height;
	}
	HX_STACK_LINE(182)
	height = tmp3;
	HX_STACK_LINE(184)
	this->width = width;
	HX_STACK_LINE(185)
	this->height = height;
	HX_STACK_LINE(186)
	::openfl::geom::Rectangle tmp4 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,width,height);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(186)
	this->rect = tmp4;
	HX_STACK_LINE(188)
	bool tmp5 = (width > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(188)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(188)
	if ((tmp5)){
		HX_STACK_LINE(188)
		tmp6 = (height > (int)0);
	}
	else{
		HX_STACK_LINE(188)
		tmp6 = false;
	}
	HX_STACK_LINE(188)
	if ((tmp6)){
		HX_STACK_LINE(190)
		bool tmp7 = transparent;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(190)
		if ((tmp7)){
			HX_STACK_LINE(192)
			int tmp8 = (int(fillColor) & int((int)-16777216));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(192)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(192)
			bool tmp10 = (tmp9 == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(192)
			if ((tmp10)){
				HX_STACK_LINE(194)
				fillColor = (int)0;
			}
		}
		else{
			HX_STACK_LINE(200)
			int tmp8 = (int(fillColor) & int((int)16777215));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(200)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(200)
			int tmp10 = (int((int)-16777216) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(200)
			fillColor = tmp10;
		}
		HX_STACK_LINE(204)
		int tmp8 = (int(fillColor) << int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(204)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(204)
		int tmp10 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(204)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(204)
		int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(204)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(204)
		int tmp14 = (int(tmp9) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(204)
		fillColor = tmp14;
		HX_STACK_LINE(206)
		::lime::graphics::Image tmp15 = ::lime::graphics::Image_obj::__new(null(),(int)0,(int)0,width,height,fillColor,null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(206)
		this->__image = tmp15;
		HX_STACK_LINE(207)
		::lime::graphics::Image tmp16 = this->__image;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(207)
		bool tmp17 = transparent;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(207)
		tmp16->set_transparent(tmp17);
		HX_STACK_LINE(208)
		this->__isValid = true;
	}
	HX_STACK_LINE(212)
	this->__createUVs();
	HX_STACK_LINE(214)
	::openfl::geom::Matrix tmp7 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(214)
	this->__worldTransform = tmp7;
	HX_STACK_LINE(215)
	::openfl::geom::ColorTransform tmp8 = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(215)
	this->__worldColorTransform = tmp8;
}
;
	return null();
}

//BitmapData_obj::~BitmapData_obj() { }

Dynamic BitmapData_obj::__CreateEmpty() { return  new BitmapData_obj; }
hx::ObjectPtr< BitmapData_obj > BitmapData_obj::__new(int width,int height,hx::Null< bool >  __o_transparent,hx::Null< int >  __o_fillColor)
{  hx::ObjectPtr< BitmapData_obj > _result_ = new BitmapData_obj();
	_result_->__construct(width,height,__o_transparent,__o_fillColor);
	return _result_;}

Dynamic BitmapData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapData_obj > _result_ = new BitmapData_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

hx::Object *BitmapData_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::display::IBitmapDrawable_obj)) return operator ::openfl::display::IBitmapDrawable_obj *();
	return super::__ToInterface(inType);
}

BitmapData_obj::operator ::openfl::display::IBitmapDrawable_obj *()
	{ return new ::openfl::display::IBitmapDrawable_delegate_< BitmapData_obj >(this); }
Void BitmapData_obj::applyFilter( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,::openfl::filters::BitmapFilter filter){
{
		HX_STACK_FRAME("openfl.display.BitmapData","applyFilter",0xfbb98d7b,"openfl.display.BitmapData.applyFilter","openfl/display/BitmapData.hx",245,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(filter,"filter")
		HX_STACK_LINE(247)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(247)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(247)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(247)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(247)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(247)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(247)
		if ((tmp4)){
			HX_STACK_LINE(247)
			tmp5 = (sourceBitmapData == null());
		}
		else{
			HX_STACK_LINE(247)
			tmp5 = true;
		}
		HX_STACK_LINE(247)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(247)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(247)
		if ((tmp6)){
			HX_STACK_LINE(247)
			bool tmp8 = sourceBitmapData->__isValid;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(247)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(247)
			tmp7 = !(tmp9);
		}
		else{
			HX_STACK_LINE(247)
			tmp7 = true;
		}
		HX_STACK_LINE(247)
		if ((tmp7)){
			HX_STACK_LINE(247)
			return null();
		}
		HX_STACK_LINE(260)
		::lime::graphics::Image tmp8 = this->__image;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(260)
		tmp8->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(BitmapData_obj,applyFilter,(void))

::openfl::display::BitmapData BitmapData_obj::clone( ){
	HX_STACK_FRAME("openfl.display.BitmapData","clone",0xea52db52,"openfl.display.BitmapData.clone","openfl/display/BitmapData.hx",269,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(271)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(271)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(271)
	if ((tmp1)){
		HX_STACK_LINE(273)
		int tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(273)
		int tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(273)
		bool tmp4 = this->transparent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(273)
		::openfl::display::BitmapData tmp5 = ::openfl::display::BitmapData_obj::__new(tmp2,tmp3,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(273)
		return tmp5;
	}
	else{
		HX_STACK_LINE(277)
		::lime::graphics::Image tmp2 = this->__image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(277)
		::lime::graphics::Image tmp3 = tmp2->clone();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(277)
		bool tmp4 = this->transparent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(277)
		::openfl::display::BitmapData tmp5 = ::openfl::display::BitmapData_obj::fromImage(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(277)
		return tmp5;
	}
	HX_STACK_LINE(271)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,clone,return )

Void BitmapData_obj::colorTransform( ::openfl::geom::Rectangle rect,::openfl::geom::ColorTransform colorTransform){
{
		HX_STACK_FRAME("openfl.display.BitmapData","colorTransform",0xbfe3e8f4,"openfl.display.BitmapData.colorTransform","openfl/display/BitmapData.hx",291,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(colorTransform,"colorTransform")
		HX_STACK_LINE(293)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(293)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(293)
		if ((tmp1)){
			HX_STACK_LINE(293)
			return null();
		}
		HX_STACK_LINE(295)
		::lime::graphics::Image tmp2 = this->__image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(295)
		::lime::math::Rectangle tmp3 = rect->__toLimeRectangle();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(295)
		::lime::utils::Float32Array tmp4 = colorTransform->__toLimeColorMatrix();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(295)
		tmp2->colorTransform(tmp3,tmp4);
		HX_STACK_LINE(296)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,colorTransform,(void))

Void BitmapData_obj::copyChannel( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,int sourceChannel,int destChannel){
{
		HX_STACK_FRAME("openfl.display.BitmapData","copyChannel",0x5d702b43,"openfl.display.BitmapData.copyChannel","openfl/display/BitmapData.hx",344,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(sourceChannel,"sourceChannel")
		HX_STACK_ARG(destChannel,"destChannel")
		HX_STACK_LINE(346)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(346)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(346)
		if ((tmp1)){
			HX_STACK_LINE(346)
			return null();
		}
		HX_STACK_LINE(348)
		int tmp2 = sourceChannel;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(348)
		::lime::graphics::ImageChannel tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(348)
		switch( (int)(tmp2)){
			case (int)1: {
				HX_STACK_LINE(350)
				tmp3 = ::lime::graphics::ImageChannel_obj::RED;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(351)
				tmp3 = ::lime::graphics::ImageChannel_obj::GREEN;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(352)
				tmp3 = ::lime::graphics::ImageChannel_obj::BLUE;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(353)
				tmp3 = ::lime::graphics::ImageChannel_obj::ALPHA;
			}
			;break;
			default: {
				HX_STACK_LINE(354)
				return null();
			}
		}
		HX_STACK_LINE(348)
		::lime::graphics::ImageChannel sourceChannel1 = tmp3;		HX_STACK_VAR(sourceChannel1,"sourceChannel1");
		HX_STACK_LINE(358)
		int tmp4 = destChannel;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(358)
		::lime::graphics::ImageChannel tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(358)
		switch( (int)(tmp4)){
			case (int)1: {
				HX_STACK_LINE(360)
				tmp5 = ::lime::graphics::ImageChannel_obj::RED;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(361)
				tmp5 = ::lime::graphics::ImageChannel_obj::GREEN;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(362)
				tmp5 = ::lime::graphics::ImageChannel_obj::BLUE;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(363)
				tmp5 = ::lime::graphics::ImageChannel_obj::ALPHA;
			}
			;break;
			default: {
				HX_STACK_LINE(364)
				return null();
			}
		}
		HX_STACK_LINE(358)
		::lime::graphics::ImageChannel destChannel1 = tmp5;		HX_STACK_VAR(destChannel1,"destChannel1");
		HX_STACK_LINE(368)
		::lime::graphics::Image tmp6 = this->__image;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(368)
		::lime::graphics::Image tmp7 = sourceBitmapData->__image;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(368)
		::lime::math::Rectangle tmp8 = sourceRect->__toLimeRectangle();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(368)
		::lime::math::Vector2 tmp9 = destPoint->__toLimeVector2();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(368)
		::lime::graphics::ImageChannel tmp10 = sourceChannel1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(368)
		::lime::graphics::ImageChannel tmp11 = destChannel1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(368)
		tmp6->copyChannel(tmp7,tmp8,tmp9,tmp10,tmp11);
		HX_STACK_LINE(369)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,copyChannel,(void))

Void BitmapData_obj::copyPixels( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,::openfl::display::BitmapData alphaBitmapData,::openfl::geom::Point alphaPoint,hx::Null< bool >  __o_mergeAlpha){
bool mergeAlpha = __o_mergeAlpha.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","copyPixels",0x385c94ad,"openfl.display.BitmapData.copyPixels","openfl/display/BitmapData.hx",413,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(alphaBitmapData,"alphaBitmapData")
	HX_STACK_ARG(alphaPoint,"alphaPoint")
	HX_STACK_ARG(mergeAlpha,"mergeAlpha")
{
		HX_STACK_LINE(415)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(415)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(415)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(415)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(415)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(415)
		if ((tmp3)){
			HX_STACK_LINE(415)
			tmp4 = (sourceBitmapData == null());
		}
		else{
			HX_STACK_LINE(415)
			tmp4 = true;
		}
		HX_STACK_LINE(415)
		if ((tmp4)){
			HX_STACK_LINE(415)
			return null();
		}
		HX_STACK_LINE(417)
		::lime::graphics::Image tmp5 = this->__image;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(417)
		::lime::graphics::Image tmp6 = sourceBitmapData->__image;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(417)
		::lime::math::Rectangle tmp7 = sourceRect->__toLimeRectangle();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(417)
		::lime::math::Vector2 tmp8 = destPoint->__toLimeVector2();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(417)
		bool tmp9 = (alphaBitmapData != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(417)
		::lime::graphics::Image tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(417)
		if ((tmp9)){
			HX_STACK_LINE(417)
			tmp10 = alphaBitmapData->__image;
		}
		else{
			HX_STACK_LINE(417)
			tmp10 = null();
		}
		HX_STACK_LINE(417)
		bool tmp11 = (alphaPoint != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(417)
		::lime::math::Vector2 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(417)
		if ((tmp11)){
			HX_STACK_LINE(417)
			tmp12 = alphaPoint->__toLimeVector2();
		}
		else{
			HX_STACK_LINE(417)
			tmp12 = null();
		}
		HX_STACK_LINE(417)
		bool tmp13 = mergeAlpha;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(417)
		tmp5->copyPixels(tmp6,tmp7,tmp8,tmp10,tmp12,tmp13);
		HX_STACK_LINE(418)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BitmapData_obj,copyPixels,(void))

Void BitmapData_obj::dispose( ){
{
		HX_STACK_FRAME("openfl.display.BitmapData","dispose",0x8eb5efd4,"openfl.display.BitmapData.dispose","openfl/display/BitmapData.hx",442,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(444)
		this->__image = null();
		HX_STACK_LINE(446)
		this->width = (int)0;
		HX_STACK_LINE(447)
		this->height = (int)0;
		HX_STACK_LINE(448)
		this->rect = null();
		HX_STACK_LINE(449)
		this->__isValid = false;
		HX_STACK_LINE(451)
		::lime::graphics::opengl::GLTexture tmp = this->__texture;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(451)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(451)
		if ((tmp1)){
			HX_STACK_LINE(453)
			::openfl::display::MovieClip tmp2 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(453)
			::openfl::_internal::renderer::AbstractRenderer tmp3 = tmp2->stage->__renderer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(453)
			::openfl::_internal::renderer::AbstractRenderer renderer = tmp3;		HX_STACK_VAR(renderer,"renderer");
			HX_STACK_LINE(455)
			bool tmp4 = (renderer != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(455)
			if ((tmp4)){
				HX_STACK_LINE(457)
				::openfl::_internal::renderer::RenderSession renderSession = renderer->renderSession;		HX_STACK_VAR(renderSession,"renderSession");
				HX_STACK_LINE(458)
				::lime::graphics::GLRenderContext gl = renderSession->gl;		HX_STACK_VAR(gl,"gl");
				HX_STACK_LINE(460)
				bool tmp5 = (gl != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(460)
				if ((tmp5)){
					HX_STACK_LINE(462)
					::lime::graphics::opengl::GLTexture tmp6 = this->__texture;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(462)
					::lime::graphics::opengl::GLTexture texture = tmp6;		HX_STACK_VAR(texture,"texture");
					HX_STACK_LINE(462)
					{
						HX_STACK_LINE(462)
						Dynamic tmp7 = texture->id;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(462)
						::lime::graphics::opengl::GL_obj::lime_gl_delete_texture(tmp7);
						HX_STACK_LINE(462)
						texture->invalidate();
					}
				}
			}
		}
		HX_STACK_LINE(470)
		::openfl::_internal::renderer::opengl::utils::FilterTexture tmp2 = this->__framebuffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(470)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(470)
		if ((tmp3)){
			HX_STACK_LINE(472)
			::openfl::_internal::renderer::opengl::utils::FilterTexture tmp4 = this->__framebuffer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(472)
			tmp4->destroy();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,dispose,(void))

Void BitmapData_obj::draw( ::openfl::display::IBitmapDrawable source,::openfl::geom::Matrix matrix,::openfl::geom::ColorTransform colorTransform,::openfl::display::BlendMode blendMode,::openfl::geom::Rectangle clipRect,hx::Null< bool >  __o_smoothing){
bool smoothing = __o_smoothing.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","draw",0xf1a859af,"openfl.display.BitmapData.draw","openfl/display/BitmapData.hx",551,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(colorTransform,"colorTransform")
	HX_STACK_ARG(blendMode,"blendMode")
	HX_STACK_ARG(clipRect,"clipRect")
	HX_STACK_ARG(smoothing,"smoothing")
{
		HX_STACK_LINE(553)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(553)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(553)
		if ((tmp1)){
			HX_STACK_LINE(553)
			return null();
		}
		HX_STACK_LINE(555)
		{
			HX_STACK_LINE(555)
			::lime::graphics::Image tmp2 = this->__image;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(555)
			::lime::graphics::ImageType _g = tmp2->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(555)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(559)
					::lime::graphics::Image tmp3 = this->__image;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(559)
					::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp3);
					HX_STACK_LINE(560)
					::lime::graphics::Image tmp4 = this->__image;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(560)
					::lime::graphics::utils::ImageCanvasUtil_obj::sync(tmp4);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(598)
					::openfl::display::MovieClip tmp3 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(598)
					::openfl::_internal::renderer::AbstractRenderer tmp4 = tmp3->stage->__renderer;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(598)
					::openfl::_internal::renderer::RenderSession renderSession = tmp4->renderSession;		HX_STACK_VAR(renderSession,"renderSession");
					HX_STACK_LINE(599)
					::openfl::_internal::renderer::RenderSession tmp5 = renderSession;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(599)
					int tmp6 = this->width;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(599)
					int tmp7 = this->height;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(599)
					::openfl::display::IBitmapDrawable tmp8 = source;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(599)
					::openfl::geom::Matrix tmp9 = matrix;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(599)
					::openfl::geom::ColorTransform tmp10 = colorTransform;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(599)
					::openfl::display::BlendMode tmp11 = blendMode;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(599)
					::openfl::geom::Rectangle tmp12 = clipRect;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(599)
					bool tmp13 = smoothing;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(599)
					bool tmp14 = this->__usingFramebuffer;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(599)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(599)
					this->__drawGL(tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,tmp11,tmp12,tmp13,tmp15,false,true);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BitmapData_obj,draw,(void))

::lime::utils::ByteArray BitmapData_obj::encode( ::openfl::geom::Rectangle rect,Dynamic compressor,::lime::utils::ByteArray byteArray){
	HX_STACK_FRAME("openfl.display.BitmapData","encode",0x09c32081,"openfl.display.BitmapData.encode","openfl/display/BitmapData.hx",611,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(compressor,"compressor")
	HX_STACK_ARG(byteArray,"byteArray")
	HX_STACK_LINE(615)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(615)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(615)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(615)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(615)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(615)
	if ((tmp3)){
		HX_STACK_LINE(615)
		tmp4 = (rect == null());
	}
	else{
		HX_STACK_LINE(615)
		tmp4 = true;
	}
	HX_STACK_LINE(615)
	if ((tmp4)){
		HX_STACK_LINE(615)
		::lime::utils::ByteArray tmp5 = byteArray = null();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(615)
		return tmp5;
	}
	HX_STACK_LINE(617)
	Dynamic tmp5 = compressor;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(617)
	bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::openfl::display::PNGEncoderOptions >());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(617)
	if ((tmp6)){
		HX_STACK_LINE(619)
		::lime::graphics::Image tmp7 = this->__image;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(619)
		::lime::utils::ByteArray tmp8 = tmp7->encode(HX_HCSTRING("png","\xa9","\x5c","\x55","\x00"),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(619)
		::lime::utils::ByteArray tmp9 = byteArray = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(619)
		return tmp9;
	}
	else{
		HX_STACK_LINE(621)
		Dynamic tmp7 = compressor;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(621)
		bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::openfl::display::JPEGEncoderOptions >());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(621)
		if ((tmp8)){
			HX_STACK_LINE(623)
			::lime::graphics::Image tmp9 = this->__image;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(623)
			::openfl::display::JPEGEncoderOptions tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(623)
			tmp10 = hx::TCast< ::openfl::display::JPEGEncoderOptions >::cast(compressor);
			HX_STACK_LINE(623)
			int tmp11 = tmp10->quality;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(623)
			::lime::utils::ByteArray tmp12 = tmp9->encode(HX_HCSTRING("jpg","\xe1","\xd0","\x50","\x00"),tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(623)
			::lime::utils::ByteArray tmp13 = byteArray = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(623)
			return tmp13;
		}
	}
	HX_STACK_LINE(627)
	::lime::utils::ByteArray tmp7 = byteArray = null();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(627)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,encode,return )

Void BitmapData_obj::fillRect( ::openfl::geom::Rectangle rect,int color){
{
		HX_STACK_FRAME("openfl.display.BitmapData","fillRect",0x95912472,"openfl.display.BitmapData.fillRect","openfl/display/BitmapData.hx",641,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(643)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(643)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(643)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(643)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(643)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(643)
		if ((tmp3)){
			HX_STACK_LINE(643)
			tmp4 = (rect == null());
		}
		else{
			HX_STACK_LINE(643)
			tmp4 = true;
		}
		HX_STACK_LINE(643)
		if ((tmp4)){
			HX_STACK_LINE(643)
			return null();
		}
		HX_STACK_LINE(644)
		::lime::graphics::Image tmp5 = this->__image;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(644)
		::lime::math::Rectangle tmp6 = rect->__toLimeRectangle();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(644)
		int tmp7 = color;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(644)
		tmp5->fillRect(tmp6,tmp7,(int)1);
		HX_STACK_LINE(645)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,fillRect,(void))

Void BitmapData_obj::floodFill( int x,int y,int color){
{
		HX_STACK_FRAME("openfl.display.BitmapData","floodFill",0xed95e9d6,"openfl.display.BitmapData.floodFill","openfl/display/BitmapData.hx",661,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(663)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(663)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(663)
		if ((tmp1)){
			HX_STACK_LINE(663)
			return null();
		}
		HX_STACK_LINE(664)
		::lime::graphics::Image tmp2 = this->__image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(664)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(664)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(664)
		int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(664)
		tmp2->floodFill(tmp3,tmp4,tmp5,(int)1);
		HX_STACK_LINE(665)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,floodFill,(void))

::openfl::geom::Rectangle BitmapData_obj::generateFilterRect( ::openfl::geom::Rectangle sourceRect,::openfl::filters::BitmapFilter filter){
	HX_STACK_FRAME("openfl.display.BitmapData","generateFilterRect",0x1ef8cf7c,"openfl.display.BitmapData.generateFilterRect","openfl/display/BitmapData.hx",746,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(748)
	::openfl::geom::Rectangle tmp = sourceRect->clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(748)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,generateFilterRect,return )

::lime::graphics::opengl::GLBuffer BitmapData_obj::getBuffer( ::lime::graphics::GLRenderContext gl){
	HX_STACK_FRAME("openfl.display.BitmapData","getBuffer",0xe0f6acab,"openfl.display.BitmapData.getBuffer","openfl/display/BitmapData.hx",753,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gl,"gl")
	HX_STACK_LINE(755)
	::lime::graphics::opengl::GLBuffer tmp = this->__buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(755)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(755)
	if ((tmp1)){
		HX_STACK_LINE(759)
		int tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(759)
		int tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(760)
		int tmp4 = this->height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(761)
		int tmp5 = this->width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(757)
		Array< int > data = Array_obj< int >::__new().Add(tmp2).Add(tmp3).Add((int)0).Add((int)1).Add((int)1).Add((int)0).Add(tmp4).Add((int)0).Add((int)0).Add((int)1).Add(tmp5).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0);		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(766)
		int tmp6 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(766)
		Dynamic tmp7 = ::lime::graphics::opengl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(766)
		::lime::graphics::opengl::GLBuffer tmp8 = ::lime::graphics::opengl::GLBuffer_obj::__new(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(766)
		this->__buffer = tmp8;
		HX_STACK_LINE(767)
		{
			HX_STACK_LINE(767)
			::lime::graphics::opengl::GLBuffer tmp9 = this->__buffer;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(767)
			::lime::graphics::opengl::GLBuffer buffer = tmp9;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(767)
			{
				HX_STACK_LINE(767)
				int tmp10 = gl->ARRAY_BUFFER;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(767)
				bool tmp11 = (buffer == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(767)
				int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(767)
				if ((tmp11)){
					HX_STACK_LINE(767)
					tmp12 = (int)0;
				}
				else{
					HX_STACK_LINE(767)
					tmp12 = buffer->id;
				}
				HX_STACK_LINE(767)
				::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(tmp10,tmp12);
			}
		}
		HX_STACK_LINE(768)
		{
			HX_STACK_LINE(768)
			::lime::utils::Float32Array tmp9 = ::lime::utils::Float32Array_obj::__new(((Dynamic)(data)),null(),null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(768)
			::lime::utils::ArrayBufferView data1 = tmp9;		HX_STACK_VAR(data1,"data1");
			HX_STACK_LINE(768)
			{
				HX_STACK_LINE(768)
				int tmp10 = gl->ARRAY_BUFFER;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(768)
				::lime::utils::ByteArray tmp11 = data1->getByteBuffer();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(768)
				int tmp12 = data1->getStart();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(768)
				int tmp13 = data1->getLength();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(768)
				int tmp14 = gl->STATIC_DRAW;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(768)
				::lime::graphics::opengl::GL_obj::lime_gl_buffer_data(tmp10,tmp11,tmp12,tmp13,tmp14);
			}
		}
		HX_STACK_LINE(769)
		{
			HX_STACK_LINE(769)
			int tmp9 = gl->ARRAY_BUFFER;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(769)
			bool tmp10 = true;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(769)
			int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(769)
			if ((tmp10)){
				HX_STACK_LINE(769)
				tmp11 = (int)0;
			}
			else{
				HX_STACK_LINE(769)
				tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
			}
			HX_STACK_LINE(769)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(tmp9,tmp11);
		}
	}
	HX_STACK_LINE(773)
	::lime::graphics::opengl::GLBuffer tmp2 = this->__buffer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(773)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getBuffer,return )

::openfl::geom::Rectangle BitmapData_obj::getColorBoundsRect( int mask,int color,hx::Null< bool >  __o_findColor){
bool findColor = __o_findColor.Default(true);
	HX_STACK_FRAME("openfl.display.BitmapData","getColorBoundsRect",0x21495071,"openfl.display.BitmapData.getColorBoundsRect","openfl/display/BitmapData.hx",812,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(findColor,"findColor")
{
		HX_STACK_LINE(814)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(814)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(814)
		if ((tmp1)){
			HX_STACK_LINE(814)
			int tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(814)
			int tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(814)
			::openfl::geom::Rectangle tmp4 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(814)
			return tmp4;
		}
		HX_STACK_LINE(815)
		::lime::graphics::Image tmp2 = this->__image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(815)
		int tmp3 = mask;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(815)
		int tmp4 = color;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(815)
		bool tmp5 = findColor;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(815)
		::lime::math::Rectangle tmp6 = tmp2->getColorBoundsRect(tmp3,tmp4,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(815)
		::lime::math::Rectangle rect = tmp6;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(816)
		::openfl::geom::Rectangle tmp7 = ::openfl::geom::Rectangle_obj::__new(rect->x,rect->y,rect->width,rect->height);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(816)
		return tmp7;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,getColorBoundsRect,return )

int BitmapData_obj::getPixel( int x,int y){
	HX_STACK_FRAME("openfl.display.BitmapData","getPixel",0x4b52b53b,"openfl.display.BitmapData.getPixel","openfl/display/BitmapData.hx",844,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(846)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(846)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(846)
	if ((tmp1)){
		HX_STACK_LINE(846)
		return (int)0;
	}
	HX_STACK_LINE(847)
	::lime::graphics::Image tmp2 = this->__image;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(847)
	int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(847)
	int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(847)
	int tmp5 = tmp2->getPixel(tmp3,tmp4,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(847)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,getPixel,return )

int BitmapData_obj::getPixel32( int x,int y){
	HX_STACK_FRAME("openfl.display.BitmapData","getPixel32",0xcd56e69a,"openfl.display.BitmapData.getPixel32","openfl/display/BitmapData.hx",874,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(876)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(876)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(876)
	if ((tmp1)){
		HX_STACK_LINE(876)
		return (int)0;
	}
	HX_STACK_LINE(877)
	::lime::graphics::Image tmp2 = this->__image;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(877)
	int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(877)
	int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(877)
	int tmp5 = tmp2->getPixel32(tmp3,tmp4,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(877)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,getPixel32,return )

::lime::utils::ByteArray BitmapData_obj::getPixels( ::openfl::geom::Rectangle rect){
	HX_STACK_FRAME("openfl.display.BitmapData","getPixels",0x9d0bded8,"openfl.display.BitmapData.getPixels","openfl/display/BitmapData.hx",891,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(893)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(893)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(893)
	if ((tmp1)){
		HX_STACK_LINE(893)
		return null();
	}
	HX_STACK_LINE(894)
	bool tmp2 = (rect == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(894)
	if ((tmp2)){
		HX_STACK_LINE(894)
		::openfl::geom::Rectangle tmp3 = this->rect;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(894)
		rect = tmp3;
	}
	HX_STACK_LINE(895)
	::lime::graphics::Image tmp3 = this->__image;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(895)
	::lime::math::Rectangle tmp4 = rect->__toLimeRectangle();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(895)
	::lime::utils::ByteArray tmp5 = tmp3->getPixels(tmp4,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(895)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getPixels,return )

Dynamic BitmapData_obj::getSurface( hx::Null< bool >  __o_clone){
bool clone = __o_clone.Default(true);
	HX_STACK_FRAME("openfl.display.BitmapData","getSurface",0xa2992c22,"openfl.display.BitmapData.getSurface","openfl/display/BitmapData.hx",900,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(clone,"clone")
{
		HX_STACK_LINE(902)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(902)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(902)
		if ((tmp1)){
			HX_STACK_LINE(902)
			return null();
		}
		HX_STACK_LINE(904)
		Dynamic tmp2 = this->__surface;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(904)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(904)
		if ((tmp3)){
			HX_STACK_LINE(906)
			::lime::graphics::Image tmp4 = this->__image;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(906)
			tmp4->dirty = true;
		}
		HX_STACK_LINE(910)
		::lime::graphics::Image tmp4 = this->__image;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(910)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(910)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(910)
		if ((tmp5)){
			HX_STACK_LINE(910)
			::lime::graphics::Image tmp7 = this->__image;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(910)
			::lime::graphics::Image tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(910)
			tmp6 = tmp8->dirty;
		}
		else{
			HX_STACK_LINE(910)
			tmp6 = false;
		}
		HX_STACK_LINE(910)
		if ((tmp6)){
			HX_STACK_LINE(912)
			Dynamic tmp7 = this->__surface;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(912)
			bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(912)
			if ((tmp8)){
				HX_STACK_LINE(914)
				Dynamic tmp9 = this->__surface;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(914)
				::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::destroy(tmp9);
			}
			HX_STACK_LINE(918)
			bool tmp9 = clone;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(918)
			if ((tmp9)){
				HX_STACK_LINE(920)
				::lime::graphics::Image tmp10 = this->__image;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(920)
				::lime::graphics::Image tmp11 = tmp10->clone();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(920)
				this->__surfaceImage = tmp11;
			}
			else{
				HX_STACK_LINE(924)
				::lime::graphics::Image tmp10 = this->__image;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(924)
				this->__surfaceImage = tmp10;
			}
			HX_STACK_LINE(928)
			::lime::graphics::Image tmp10 = this->__surfaceImage;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(928)
			tmp10->set_format((int)2);
			HX_STACK_LINE(929)
			::lime::graphics::Image tmp11 = this->__surfaceImage;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(929)
			tmp11->set_premultiplied(true);
			HX_STACK_LINE(930)
			::lime::graphics::Image tmp12 = this->__surfaceImage;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(930)
			Dynamic tmp13 = ::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::fromImage(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(930)
			this->__surface = tmp13;
			HX_STACK_LINE(931)
			::lime::graphics::Image tmp14 = this->__image;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(931)
			tmp14->dirty = false;
		}
		HX_STACK_LINE(935)
		Dynamic tmp7 = this->__surface;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(935)
		return tmp7;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getSurface,return )

::lime::graphics::opengl::GLTexture BitmapData_obj::getTexture( ::lime::graphics::GLRenderContext gl){
	HX_STACK_FRAME("openfl.display.BitmapData","getTexture",0xe4308ed0,"openfl.display.BitmapData.getTexture","openfl/display/BitmapData.hx",940,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gl,"gl")
	HX_STACK_LINE(942)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(942)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(942)
	if ((tmp1)){
		HX_STACK_LINE(942)
		return null();
	}
	HX_STACK_LINE(944)
	bool tmp2 = this->__usingFramebuffer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(944)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(944)
	if ((tmp2)){
		HX_STACK_LINE(944)
		::openfl::_internal::renderer::opengl::utils::FilterTexture tmp4 = this->__framebuffer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(944)
		::openfl::_internal::renderer::opengl::utils::FilterTexture tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(944)
		tmp3 = (tmp5 != null());
	}
	else{
		HX_STACK_LINE(944)
		tmp3 = false;
	}
	HX_STACK_LINE(944)
	if ((tmp3)){
		HX_STACK_LINE(945)
		::openfl::_internal::renderer::opengl::utils::FilterTexture tmp4 = this->__framebuffer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(945)
		::lime::graphics::opengl::GLTexture tmp5 = tmp4->texture;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(945)
		return tmp5;
	}
	HX_STACK_LINE(948)
	::lime::graphics::opengl::GLTexture tmp4 = this->__texture;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(948)
	bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(948)
	if ((tmp5)){
		HX_STACK_LINE(950)
		int tmp6 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(950)
		Dynamic tmp7 = ::lime::graphics::opengl::GL_obj::lime_gl_create_texture();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(950)
		::lime::graphics::opengl::GLTexture tmp8 = ::lime::graphics::opengl::GLTexture_obj::__new(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(950)
		this->__texture = tmp8;
		HX_STACK_LINE(951)
		{
			HX_STACK_LINE(951)
			::lime::graphics::opengl::GLTexture tmp9 = this->__texture;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(951)
			::lime::graphics::opengl::GLTexture texture = tmp9;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(951)
			{
				HX_STACK_LINE(951)
				int tmp10 = gl->TEXTURE_2D;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(951)
				bool tmp11 = (texture == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(951)
				int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(951)
				if ((tmp11)){
					HX_STACK_LINE(951)
					tmp12 = (int)0;
				}
				else{
					HX_STACK_LINE(951)
					tmp12 = texture->id;
				}
				HX_STACK_LINE(951)
				::lime::graphics::opengl::GL_obj::lime_gl_bind_texture(tmp10,tmp12);
			}
		}
		HX_STACK_LINE(952)
		{
			HX_STACK_LINE(952)
			int tmp9 = gl->TEXTURE_2D;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(952)
			int tmp10 = gl->TEXTURE_WRAP_S;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(952)
			int tmp11 = gl->CLAMP_TO_EDGE;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(952)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(tmp9,tmp10,tmp11);
		}
		HX_STACK_LINE(953)
		{
			HX_STACK_LINE(953)
			int tmp9 = gl->TEXTURE_2D;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(953)
			int tmp10 = gl->TEXTURE_WRAP_T;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(953)
			int tmp11 = gl->CLAMP_TO_EDGE;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(953)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(tmp9,tmp10,tmp11);
		}
		HX_STACK_LINE(954)
		{
			HX_STACK_LINE(954)
			int tmp9 = gl->TEXTURE_2D;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(954)
			int tmp10 = gl->TEXTURE_MAG_FILTER;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(954)
			int tmp11 = gl->NEAREST;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(954)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(tmp9,tmp10,tmp11);
		}
		HX_STACK_LINE(955)
		{
			HX_STACK_LINE(955)
			int tmp9 = gl->TEXTURE_2D;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(955)
			int tmp10 = gl->TEXTURE_MIN_FILTER;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(955)
			int tmp11 = gl->NEAREST;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(955)
			::lime::graphics::opengl::GL_obj::lime_gl_tex_parameteri(tmp9,tmp10,tmp11);
		}
		HX_STACK_LINE(956)
		::lime::graphics::Image tmp9 = this->__image;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(956)
		tmp9->dirty = true;
	}
	HX_STACK_LINE(960)
	::lime::graphics::Image tmp6 = this->__image;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(960)
	bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(960)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(960)
	if ((tmp7)){
		HX_STACK_LINE(960)
		::lime::graphics::Image tmp9 = this->__image;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(960)
		::lime::graphics::Image tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(960)
		tmp8 = tmp10->dirty;
	}
	else{
		HX_STACK_LINE(960)
		tmp8 = false;
	}
	HX_STACK_LINE(960)
	if ((tmp8)){
		HX_STACK_LINE(962)
		::lime::graphics::Image tmp9 = this->__image;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(962)
		int tmp10 = tmp9->buffer->bitsPerPixel;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(962)
		bool tmp11 = (tmp10 == (int)1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(962)
		int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(962)
		if ((tmp11)){
			HX_STACK_LINE(962)
			tmp12 = gl->ALPHA;
		}
		else{
			HX_STACK_LINE(962)
			tmp12 = gl->RGBA;
		}
		HX_STACK_LINE(962)
		int internalFormat = tmp12;		HX_STACK_VAR(internalFormat,"internalFormat");
		HX_STACK_LINE(963)
		int format = internalFormat;		HX_STACK_VAR(format,"format");
		HX_STACK_LINE(964)
		{
			HX_STACK_LINE(964)
			::lime::graphics::opengl::GLTexture tmp13 = this->__texture;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(964)
			::lime::graphics::opengl::GLTexture texture = tmp13;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(964)
			{
				HX_STACK_LINE(964)
				int tmp14 = gl->TEXTURE_2D;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(964)
				bool tmp15 = (texture == null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(964)
				int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(964)
				if ((tmp15)){
					HX_STACK_LINE(964)
					tmp16 = (int)0;
				}
				else{
					HX_STACK_LINE(964)
					tmp16 = texture->id;
				}
				HX_STACK_LINE(964)
				::lime::graphics::opengl::GL_obj::lime_gl_bind_texture(tmp14,tmp16);
			}
		}
		HX_STACK_LINE(965)
		::lime::graphics::Image tmp13 = this->__image;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(965)
		::lime::graphics::Image textureImage = tmp13;		HX_STACK_VAR(textureImage,"textureImage");
		HX_STACK_LINE(967)
		bool tmp14 = this->__bgra;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(967)
		if ((tmp14)){
			HX_STACK_LINE(971)
			Dynamic tmp15 = ::openfl::display::BitmapData_obj::__supportsBGRA;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(971)
			bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(971)
			if ((tmp16)){
				struct _Function_4_1{
					inline static Array< ::String > Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display/BitmapData.hx",973,0xdd12d5b9)
						{
							HX_STACK_LINE(973)
							Array< ::String > result = Array_obj< ::String >::__new();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(973)
							::lime::graphics::opengl::GL_obj::lime_gl_get_supported_extensions(result);
							HX_STACK_LINE(973)
							return result;
						}
						return null();
					}
				};
				HX_STACK_LINE(973)
				bool tmp17 = ::Lambda_obj::has(_Function_4_1::Block(),HX_HCSTRING("GL_EXT_bgra","\x0c","\xc1","\x7b","\x5b"));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(973)
				::openfl::display::BitmapData_obj::__supportsBGRA = tmp17;
			}
			HX_STACK_LINE(978)
			Dynamic tmp17 = ::openfl::display::BitmapData_obj::__supportsBGRA;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(978)
			if ((tmp17)){
				HX_STACK_LINE(980)
				format = gl->BGRA_EXT;
			}
			else{
				HX_STACK_LINE(986)
				::lime::graphics::Image tmp18 = this->__image;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(986)
				int tmp19 = tmp18->width;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(986)
				::lime::graphics::Image tmp20 = this->__image;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(986)
				int tmp21 = tmp20->height;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(986)
				::lime::graphics::Image tmp22 = ::lime::graphics::Image_obj::__new(null(),(int)0,(int)0,tmp19,tmp21,null(),null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(986)
				textureImage = tmp22;
				HX_STACK_LINE(987)
				::lime::graphics::Image tmp23 = this->__image;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(987)
				int tmp24 = tmp23->width;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(987)
				::lime::graphics::Image tmp25 = this->__image;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(987)
				int tmp26 = tmp25->height;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(987)
				::lime::math::Rectangle tmp27 = ::lime::math::Rectangle_obj::__new((int)0,(int)0,tmp24,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(987)
				::lime::math::Rectangle rect = tmp27;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(988)
				::lime::math::Vector2 tmp28 = ::lime::math::Vector2_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(988)
				::lime::math::Vector2 point = tmp28;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(990)
				::lime::graphics::Image tmp29 = this->__image;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(990)
				::lime::math::Rectangle tmp30 = rect;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(990)
				::lime::math::Vector2 tmp31 = point;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(990)
				textureImage->copyChannel(tmp29,tmp30,tmp31,::lime::graphics::ImageChannel_obj::RED,::lime::graphics::ImageChannel_obj::BLUE);
				HX_STACK_LINE(991)
				::lime::graphics::Image tmp32 = this->__image;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(991)
				::lime::math::Rectangle tmp33 = rect;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(991)
				::lime::math::Vector2 tmp34 = point;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(991)
				textureImage->copyChannel(tmp32,tmp33,tmp34,::lime::graphics::ImageChannel_obj::GREEN,::lime::graphics::ImageChannel_obj::GREEN);
				HX_STACK_LINE(992)
				::lime::graphics::Image tmp35 = this->__image;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(992)
				::lime::math::Rectangle tmp36 = rect;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(992)
				::lime::math::Vector2 tmp37 = point;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(992)
				textureImage->copyChannel(tmp35,tmp36,tmp37,::lime::graphics::ImageChannel_obj::BLUE,::lime::graphics::ImageChannel_obj::RED);
				HX_STACK_LINE(993)
				::lime::graphics::Image tmp38 = this->__image;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(993)
				::lime::math::Rectangle tmp39 = rect;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(993)
				::lime::math::Vector2 tmp40 = point;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(993)
				textureImage->copyChannel(tmp38,tmp39,tmp40,::lime::graphics::ImageChannel_obj::ALPHA,::lime::graphics::ImageChannel_obj::ALPHA);
			}
		}
		HX_STACK_LINE(999)
		bool tmp15 = textureImage->get_premultiplied();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(999)
		bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(999)
		bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(999)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(999)
		if ((tmp17)){
			HX_STACK_LINE(999)
			tmp18 = textureImage->get_transparent();
		}
		else{
			HX_STACK_LINE(999)
			tmp18 = false;
		}
		HX_STACK_LINE(999)
		if ((tmp18)){
			HX_STACK_LINE(1001)
			::lime::graphics::Image tmp19 = textureImage->clone();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1001)
			textureImage = tmp19;
			HX_STACK_LINE(1002)
			textureImage->set_premultiplied(true);
		}
		HX_STACK_LINE(1006)
		{
			HX_STACK_LINE(1006)
			::lime::utils::UInt8Array tmp19 = textureImage->get_data();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1006)
			::lime::utils::ArrayBufferView pixels = tmp19;		HX_STACK_VAR(pixels,"pixels");
			HX_STACK_LINE(1006)
			{
				HX_STACK_LINE(1006)
				int tmp20 = gl->TEXTURE_2D;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1006)
				int tmp21 = internalFormat;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1006)
				int tmp22 = this->width;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1006)
				int tmp23 = this->height;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1006)
				int tmp24 = format;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1006)
				int tmp25 = gl->UNSIGNED_BYTE;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1006)
				bool tmp26 = (pixels == null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1006)
				::lime::utils::ByteArray tmp27;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1006)
				if ((tmp26)){
					HX_STACK_LINE(1006)
					tmp27 = null();
				}
				else{
					HX_STACK_LINE(1006)
					tmp27 = pixels->getByteBuffer();
				}
				HX_STACK_LINE(1006)
				bool tmp28 = (pixels == null());		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1006)
				Dynamic tmp29;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1006)
				if ((tmp28)){
					HX_STACK_LINE(1006)
					tmp29 = null();
				}
				else{
					HX_STACK_LINE(1006)
					tmp29 = pixels->getStart();
				}
				HX_STACK_LINE(1006)
				::lime::graphics::opengl::GL_obj::lime_gl_tex_image_2d(tmp20,(int)0,tmp21,tmp22,tmp23,(int)0,tmp24,tmp25,tmp27,tmp29);
			}
		}
		HX_STACK_LINE(1007)
		{
			HX_STACK_LINE(1007)
			int tmp19 = gl->TEXTURE_2D;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1007)
			bool tmp20 = true;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1007)
			int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1007)
			if ((tmp20)){
				HX_STACK_LINE(1007)
				tmp21 = (int)0;
			}
			else{
				HX_STACK_LINE(1007)
				tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
			}
			HX_STACK_LINE(1007)
			::lime::graphics::opengl::GL_obj::lime_gl_bind_texture(tmp19,tmp21);
		}
		HX_STACK_LINE(1008)
		::lime::graphics::Image tmp19 = this->__image;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1008)
		tmp19->dirty = false;
	}
	HX_STACK_LINE(1012)
	::lime::graphics::opengl::GLTexture tmp9 = this->__texture;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1012)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getTexture,return )

Array< int > BitmapData_obj::getVector( ::openfl::geom::Rectangle rect){
	HX_STACK_FRAME("openfl.display.BitmapData","getVector",0xa7bfa06e,"openfl.display.BitmapData.getVector","openfl/display/BitmapData.hx",1026,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(1028)
	::openfl::geom::Rectangle tmp = rect;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1028)
	::lime::utils::ByteArray tmp1 = this->getPixels(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1028)
	::lime::utils::ByteArray pixels = tmp1;		HX_STACK_VAR(pixels,"pixels");
	HX_STACK_LINE(1029)
	Float tmp2 = (Float(pixels->length) / Float((int)4));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1029)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1029)
	int length = tmp3;		HX_STACK_VAR(length,"length");
	HX_STACK_LINE(1030)
	Array< int > tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1030)
	{
		HX_STACK_LINE(1030)
		Array< int > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(1030)
		int tmp5 = length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1030)
		this1 = Array_obj< int >::__new()->__SetSizeExact(tmp5);
		HX_STACK_LINE(1030)
		tmp4 = this1;
	}
	HX_STACK_LINE(1030)
	Array< int > result = tmp4;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(1032)
	{
		HX_STACK_LINE(1032)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1032)
		while((true)){
			HX_STACK_LINE(1032)
			bool tmp5 = (_g < length);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1032)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1032)
			if ((tmp6)){
				HX_STACK_LINE(1032)
				break;
			}
			HX_STACK_LINE(1032)
			int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1032)
			int i = tmp7;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1034)
			{
				HX_STACK_LINE(1034)
				int tmp8 = pixels->readUnsignedInt();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1034)
				int value = tmp8;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(1034)
				int tmp9 = value;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1034)
				result[i] = tmp9;
			}
		}
	}
	HX_STACK_LINE(1038)
	Array< int > tmp5 = result;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1038)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getVector,return )

Array< ::Dynamic > BitmapData_obj::histogram( ::openfl::geom::Rectangle hRect){
	HX_STACK_FRAME("openfl.display.BitmapData","histogram",0xf93f4519,"openfl.display.BitmapData.histogram","openfl/display/BitmapData.hx",1043,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(hRect,"hRect")
	HX_STACK_LINE(1045)
	bool tmp = (hRect != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1045)
	::openfl::geom::Rectangle tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1045)
	if ((tmp)){
		HX_STACK_LINE(1045)
		tmp1 = hRect;
	}
	else{
		HX_STACK_LINE(1045)
		int tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1045)
		int tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1045)
		tmp1 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,tmp2,tmp3);
	}
	HX_STACK_LINE(1045)
	::openfl::geom::Rectangle rect = tmp1;		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(1046)
	::openfl::geom::Rectangle tmp2 = rect;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1046)
	::lime::utils::ByteArray tmp3 = this->getPixels(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1046)
	::lime::utils::ByteArray pixels = tmp3;		HX_STACK_VAR(pixels,"pixels");
	HX_STACK_LINE(1047)
	Array< ::Dynamic > result;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(1047)
	{
		HX_STACK_LINE(1047)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1047)
		{
			HX_STACK_LINE(1047)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1047)
			while((true)){
				HX_STACK_LINE(1047)
				bool tmp4 = (_g1 < (int)4);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1047)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1047)
				if ((tmp5)){
					HX_STACK_LINE(1047)
					break;
				}
				HX_STACK_LINE(1047)
				int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1047)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				struct _Function_4_1{
					inline static Array< int > Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display/BitmapData.hx",1047,0xdd12d5b9)
						{
							HX_STACK_LINE(1047)
							Array< int > _g2 = Array_obj< int >::__new();		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(1047)
							{
								HX_STACK_LINE(1047)
								int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(1047)
								while((true)){
									HX_STACK_LINE(1047)
									bool tmp7 = (_g3 < (int)256);		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(1047)
									bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(1047)
									if ((tmp8)){
										HX_STACK_LINE(1047)
										break;
									}
									HX_STACK_LINE(1047)
									int tmp9 = (_g3)++;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(1047)
									int j = tmp9;		HX_STACK_VAR(j,"j");
									HX_STACK_LINE(1047)
									_g2->push((int)0);
								}
							}
							HX_STACK_LINE(1047)
							return _g2;
						}
						return null();
					}
				};
				HX_STACK_LINE(1047)
				_g->push(_Function_4_1::Block());
			}
		}
		HX_STACK_LINE(1047)
		result = _g;
	}
	HX_STACK_LINE(1049)
	{
		HX_STACK_LINE(1049)
		int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1049)
		int _g1 = pixels->length;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1049)
		while((true)){
			HX_STACK_LINE(1049)
			bool tmp4 = (_g2 < _g1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1049)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1049)
			if ((tmp5)){
				HX_STACK_LINE(1049)
				break;
			}
			HX_STACK_LINE(1049)
			int tmp6 = (_g2)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1049)
			int i = tmp6;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1051)
			int tmp7 = hx::Mod(i,(int)4);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1051)
			bool tmp8 = (pixels->position < pixels->length);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1051)
			int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1051)
			if ((tmp8)){
				HX_STACK_LINE(1051)
				int tmp10 = (pixels->position)++;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1051)
				int pos = tmp10;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(1051)
				tmp9 = pixels->b->__get(pos);
			}
			else{
				HX_STACK_LINE(1051)
				tmp9 = pixels->ThrowEOFi();
			}
			HX_STACK_LINE(1051)
			++(result->__get(tmp7).StaticCast< Array< int > >()[tmp9]);
		}
	}
	HX_STACK_LINE(1055)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,histogram,return )

bool BitmapData_obj::hitTest( ::openfl::geom::Point firstPoint,int firstAlphaThreshold,Dynamic secondObject,::openfl::geom::Point secondBitmapDataPoint,hx::Null< int >  __o_secondAlphaThreshold){
int secondAlphaThreshold = __o_secondAlphaThreshold.Default(1);
	HX_STACK_FRAME("openfl.display.BitmapData","hitTest",0xb5e8cf7a,"openfl.display.BitmapData.hitTest","openfl/display/BitmapData.hx",1060,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(firstPoint,"firstPoint")
	HX_STACK_ARG(firstAlphaThreshold,"firstAlphaThreshold")
	HX_STACK_ARG(secondObject,"secondObject")
	HX_STACK_ARG(secondBitmapDataPoint,"secondBitmapDataPoint")
	HX_STACK_ARG(secondAlphaThreshold,"secondAlphaThreshold")
{
		HX_STACK_LINE(1062)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1062)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1062)
		if ((tmp1)){
			HX_STACK_LINE(1062)
			return false;
		}
		HX_STACK_LINE(1064)
		::openfl::Lib_obj::notImplemented(HX_HCSTRING("BitmapData.hitTest","\xb0","\x9c","\x84","\xf0"));
		HX_STACK_LINE(1066)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,hitTest,return )

Void BitmapData_obj::lock( ){
{
		HX_STACK_FRAME("openfl.display.BitmapData","lock",0xf6efc996,"openfl.display.BitmapData.lock","openfl/display/BitmapData.hx",1079,0xdd12d5b9)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,lock,(void))

Void BitmapData_obj::merge( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
{
		HX_STACK_FRAME("openfl.display.BitmapData","merge",0xa7b66aad,"openfl.display.BitmapData.merge","openfl/display/BitmapData.hx",1086,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redMultiplier,"redMultiplier")
		HX_STACK_ARG(greenMultiplier,"greenMultiplier")
		HX_STACK_ARG(blueMultiplier,"blueMultiplier")
		HX_STACK_ARG(alphaMultiplier,"alphaMultiplier")
		HX_STACK_LINE(1088)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1088)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1088)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1088)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1088)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1088)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1088)
		if ((tmp4)){
			HX_STACK_LINE(1088)
			tmp5 = (sourceBitmapData == null());
		}
		else{
			HX_STACK_LINE(1088)
			tmp5 = true;
		}
		HX_STACK_LINE(1088)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1088)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1088)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1088)
		if ((tmp7)){
			HX_STACK_LINE(1088)
			bool tmp9 = sourceBitmapData->__isValid;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1088)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1088)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1088)
			tmp8 = !(tmp11);
		}
		else{
			HX_STACK_LINE(1088)
			tmp8 = true;
		}
		HX_STACK_LINE(1088)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1088)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1088)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1088)
		if ((tmp10)){
			HX_STACK_LINE(1088)
			tmp11 = (sourceRect == null());
		}
		else{
			HX_STACK_LINE(1088)
			tmp11 = true;
		}
		HX_STACK_LINE(1088)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1088)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1088)
		if ((tmp12)){
			HX_STACK_LINE(1088)
			tmp13 = (destPoint == null());
		}
		else{
			HX_STACK_LINE(1088)
			tmp13 = true;
		}
		HX_STACK_LINE(1088)
		if ((tmp13)){
			HX_STACK_LINE(1088)
			return null();
		}
		HX_STACK_LINE(1089)
		::lime::graphics::Image tmp14 = this->__image;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1089)
		::lime::graphics::Image tmp15 = sourceBitmapData->__image;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1089)
		::lime::math::Rectangle tmp16 = sourceRect->__toLimeRectangle();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1089)
		::lime::math::Vector2 tmp17 = destPoint->__toLimeVector2();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1089)
		int tmp18 = redMultiplier;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1089)
		int tmp19 = greenMultiplier;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1089)
		int tmp20 = blueMultiplier;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1089)
		int tmp21 = alphaMultiplier;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1089)
		tmp14->merge(tmp15,tmp16,tmp17,tmp18,tmp19,tmp20,tmp21);
		HX_STACK_LINE(1090)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(BitmapData_obj,merge,(void))

Void BitmapData_obj::noise( int randomSeed,hx::Null< int >  __o_low,hx::Null< int >  __o_high,hx::Null< int >  __o_channelOptions,hx::Null< bool >  __o_grayScale){
int low = __o_low.Default(0);
int high = __o_high.Default(255);
int channelOptions = __o_channelOptions.Default(7);
bool grayScale = __o_grayScale.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","noise",0x41b2578f,"openfl.display.BitmapData.noise","openfl/display/BitmapData.hx",1123,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(randomSeed,"randomSeed")
	HX_STACK_ARG(low,"low")
	HX_STACK_ARG(high,"high")
	HX_STACK_ARG(channelOptions,"channelOptions")
	HX_STACK_ARG(grayScale,"grayScale")
{
		HX_STACK_LINE(1125)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1125)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1125)
		if ((tmp1)){
			HX_STACK_LINE(1125)
			return null();
		}
		HX_STACK_LINE(1127)
		::openfl::Lib_obj::notImplemented(HX_HCSTRING("BitmapData.noise","\x45","\x4b","\xe1","\x5b"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,noise,(void))

Void BitmapData_obj::paletteMap( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,Array< int > redArray,Array< int > greenArray,Array< int > blueArray,Array< int > alphaArray){
{
		HX_STACK_FRAME("openfl.display.BitmapData","paletteMap",0xfc19eecc,"openfl.display.BitmapData.paletteMap","openfl/display/BitmapData.hx",1132,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redArray,"redArray")
		HX_STACK_ARG(greenArray,"greenArray")
		HX_STACK_ARG(blueArray,"blueArray")
		HX_STACK_ARG(alphaArray,"alphaArray")
		HX_STACK_LINE(1134)
		Float tmp = sourceRect->width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1134)
		int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1134)
		int sw = tmp1;		HX_STACK_VAR(sw,"sw");
		HX_STACK_LINE(1135)
		Float tmp2 = sourceRect->height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1135)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1135)
		int sh = tmp3;		HX_STACK_VAR(sh,"sh");
		HX_STACK_LINE(1137)
		::openfl::geom::Rectangle tmp4 = sourceRect;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1137)
		::lime::utils::ByteArray tmp5 = this->getPixels(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1137)
		::lime::utils::ByteArray pixels = tmp5;		HX_STACK_VAR(pixels,"pixels");
		HX_STACK_LINE(1138)
		pixels->position = (int)0;
		HX_STACK_LINE(1140)
		int pixelValue;		HX_STACK_VAR(pixelValue,"pixelValue");
		HX_STACK_LINE(1140)
		int r;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(1140)
		int g;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(1140)
		int b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(1140)
		int a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(1140)
		int color;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(1140)
		int c1;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(1140)
		int c2;		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(1140)
		int c3;		HX_STACK_VAR(c3,"c3");
		HX_STACK_LINE(1140)
		int c4;		HX_STACK_VAR(c4,"c4");
		HX_STACK_LINE(1142)
		{
			HX_STACK_LINE(1142)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1142)
			int tmp6 = (sh * sw);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1142)
			int _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1142)
			while((true)){
				HX_STACK_LINE(1142)
				bool tmp7 = (_g1 < _g);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1142)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1142)
				if ((tmp8)){
					HX_STACK_LINE(1142)
					break;
				}
				HX_STACK_LINE(1142)
				int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1142)
				int i = tmp9;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1144)
				int tmp10 = pixels->readUnsignedInt();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1144)
				pixelValue = tmp10;
				HX_STACK_LINE(1146)
				bool tmp11 = (alphaArray == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1146)
				int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1146)
				if ((tmp11)){
					HX_STACK_LINE(1146)
					tmp12 = (int(pixelValue) & int((int)-16777216));
				}
				else{
					HX_STACK_LINE(1146)
					int tmp13 = (int(pixelValue) >> int((int)24));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1146)
					int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1146)
					tmp12 = alphaArray->__get(tmp14);
				}
				HX_STACK_LINE(1146)
				c1 = tmp12;
				HX_STACK_LINE(1147)
				bool tmp13 = (redArray == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1147)
				int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1147)
				if ((tmp13)){
					HX_STACK_LINE(1147)
					tmp14 = (int(pixelValue) & int((int)16711680));
				}
				else{
					HX_STACK_LINE(1147)
					int tmp15 = (int(pixelValue) >> int((int)16));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1147)
					int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1147)
					tmp14 = redArray->__get(tmp16);
				}
				HX_STACK_LINE(1147)
				c2 = tmp14;
				HX_STACK_LINE(1148)
				bool tmp15 = (greenArray == null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1148)
				int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1148)
				if ((tmp15)){
					HX_STACK_LINE(1148)
					tmp16 = (int(pixelValue) & int((int)65280));
				}
				else{
					HX_STACK_LINE(1148)
					int tmp17 = (int(pixelValue) >> int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1148)
					int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1148)
					tmp16 = greenArray->__get(tmp18);
				}
				HX_STACK_LINE(1148)
				c3 = tmp16;
				HX_STACK_LINE(1149)
				bool tmp17 = (blueArray == null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1149)
				int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1149)
				if ((tmp17)){
					HX_STACK_LINE(1149)
					tmp18 = (int(pixelValue) & int((int)255));
				}
				else{
					HX_STACK_LINE(1149)
					int tmp19 = (int(pixelValue) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1149)
					tmp18 = blueArray->__get(tmp19);
				}
				HX_STACK_LINE(1149)
				c4 = tmp18;
				HX_STACK_LINE(1151)
				int tmp19 = (int(c1) >> int((int)24));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1151)
				int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1151)
				int tmp21 = (int(c2) >> int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1151)
				int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1151)
				int tmp23 = (tmp20 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1151)
				int tmp24 = (int(c3) >> int((int)24));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1151)
				int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1151)
				int tmp26 = (tmp23 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1151)
				int tmp27 = (int(c4) >> int((int)24));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1151)
				int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1151)
				int tmp29 = (tmp26 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1151)
				a = tmp29;
				HX_STACK_LINE(1152)
				bool tmp30 = (a > (int)255);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1152)
				if ((tmp30)){
					HX_STACK_LINE(1152)
					(a == (int)255);
				}
				HX_STACK_LINE(1154)
				int tmp31 = (int(c1) >> int((int)16));		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1154)
				int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1154)
				int tmp33 = (int(c2) >> int((int)16));		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1154)
				int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1154)
				int tmp35 = (tmp32 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1154)
				int tmp36 = (int(c3) >> int((int)16));		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1154)
				int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1154)
				int tmp38 = (tmp35 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1154)
				int tmp39 = (int(c4) >> int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1154)
				int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1154)
				int tmp41 = (tmp38 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1154)
				r = tmp41;
				HX_STACK_LINE(1155)
				bool tmp42 = (r > (int)255);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(1155)
				if ((tmp42)){
					HX_STACK_LINE(1155)
					(r == (int)255);
				}
				HX_STACK_LINE(1157)
				int tmp43 = (int(c1) >> int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(1157)
				int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(1157)
				int tmp45 = (int(c2) >> int((int)8));		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(1157)
				int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(1157)
				int tmp47 = (tmp44 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(1157)
				int tmp48 = (int(c3) >> int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(1157)
				int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(1157)
				int tmp50 = (tmp47 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(1157)
				int tmp51 = (int(c4) >> int((int)8));		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(1157)
				int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(1157)
				int tmp53 = (tmp50 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(1157)
				g = tmp53;
				HX_STACK_LINE(1158)
				bool tmp54 = (g > (int)255);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(1158)
				if ((tmp54)){
					HX_STACK_LINE(1158)
					(g == (int)255);
				}
				HX_STACK_LINE(1160)
				int tmp55 = (int(c1) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(1160)
				int tmp56 = (int(c2) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(1160)
				int tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(1160)
				int tmp58 = (int(c3) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(1160)
				int tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(1160)
				int tmp60 = (int(c4) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(1160)
				int tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(1160)
				b = tmp61;
				HX_STACK_LINE(1161)
				bool tmp62 = (b > (int)255);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(1161)
				if ((tmp62)){
					HX_STACK_LINE(1161)
					(b == (int)255);
				}
				HX_STACK_LINE(1163)
				int tmp63 = (int(a) << int((int)24));		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(1163)
				int tmp64 = (int(r) << int((int)16));		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(1163)
				int tmp65 = (int(tmp63) | int(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(1163)
				int tmp66 = (int(g) << int((int)8));		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(1163)
				int tmp67 = (int(tmp65) | int(tmp66));		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(1163)
				int tmp68 = b;		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(1163)
				int tmp69 = (int(tmp67) | int(tmp68));		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(1163)
				color = tmp69;
				HX_STACK_LINE(1165)
				int tmp70 = (i * (int)4);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(1165)
				pixels->position = tmp70;
				HX_STACK_LINE(1166)
				int tmp71 = color;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(1166)
				pixels->writeUnsignedInt(tmp71);
			}
		}
		HX_STACK_LINE(1170)
		pixels->position = (int)0;
		HX_STACK_LINE(1171)
		::openfl::geom::Rectangle tmp6 = ::openfl::geom::Rectangle_obj::__new(destPoint->x,destPoint->y,sw,sh);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1171)
		::openfl::geom::Rectangle destRect = tmp6;		HX_STACK_VAR(destRect,"destRect");
		HX_STACK_LINE(1172)
		::openfl::geom::Rectangle tmp7 = destRect;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1172)
		::lime::utils::ByteArray tmp8 = pixels;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1172)
		this->setPixels(tmp7,tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(BitmapData_obj,paletteMap,(void))

Void BitmapData_obj::perlinNoise( Float baseX,Float baseY,int numOctaves,int randomSeed,bool stitch,bool fractalNoise,hx::Null< int >  __o_channelOptions,hx::Null< bool >  __o_grayScale,Array< ::Dynamic > offsets){
int channelOptions = __o_channelOptions.Default(7);
bool grayScale = __o_grayScale.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","perlinNoise",0xc682321b,"openfl.display.BitmapData.perlinNoise","openfl/display/BitmapData.hx",1245,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(baseX,"baseX")
	HX_STACK_ARG(baseY,"baseY")
	HX_STACK_ARG(numOctaves,"numOctaves")
	HX_STACK_ARG(randomSeed,"randomSeed")
	HX_STACK_ARG(stitch,"stitch")
	HX_STACK_ARG(fractalNoise,"fractalNoise")
	HX_STACK_ARG(channelOptions,"channelOptions")
	HX_STACK_ARG(grayScale,"grayScale")
	HX_STACK_ARG(offsets,"offsets")
{
		HX_STACK_LINE(1245)
		::openfl::Lib_obj::notImplemented(HX_HCSTRING("BitmapData.perlinNoise","\x51","\xd2","\x2b","\x27"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(BitmapData_obj,perlinNoise,(void))

Void BitmapData_obj::scroll( int x,int y){
{
		HX_STACK_FRAME("openfl.display.BitmapData","scroll",0x57440678,"openfl.display.BitmapData.scroll","openfl/display/BitmapData.hx",1259,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(1259)
		::openfl::Lib_obj::notImplemented(HX_HCSTRING("BitmapData.scroll","\x02","\x52","\x2a","\x26"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,scroll,(void))

Void BitmapData_obj::setPixel( int x,int y,int color){
{
		HX_STACK_FRAME("openfl.display.BitmapData","setPixel",0xf9b00eaf,"openfl.display.BitmapData.setPixel","openfl/display/BitmapData.hx",1281,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(1283)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1283)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1283)
		if ((tmp1)){
			HX_STACK_LINE(1283)
			return null();
		}
		HX_STACK_LINE(1284)
		::lime::graphics::Image tmp2 = this->__image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1284)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1284)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1284)
		int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1284)
		tmp2->setPixel(tmp3,tmp4,tmp5,(int)1);
		HX_STACK_LINE(1285)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,setPixel,(void))

Void BitmapData_obj::setPixel32( int x,int y,int color){
{
		HX_STACK_FRAME("openfl.display.BitmapData","setPixel32",0xd0d4850e,"openfl.display.BitmapData.setPixel32","openfl/display/BitmapData.hx",1321,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(1323)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1323)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1323)
		if ((tmp1)){
			HX_STACK_LINE(1323)
			return null();
		}
		HX_STACK_LINE(1324)
		::lime::graphics::Image tmp2 = this->__image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1324)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1324)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1324)
		int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1324)
		tmp2->setPixel32(tmp3,tmp4,tmp5,(int)1);
		HX_STACK_LINE(1325)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,setPixel32,(void))

Void BitmapData_obj::setPixels( ::openfl::geom::Rectangle rect,::lime::utils::ByteArray byteArray){
{
		HX_STACK_FRAME("openfl.display.BitmapData","setPixels",0x805ccae4,"openfl.display.BitmapData.setPixels","openfl/display/BitmapData.hx",1349,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(byteArray,"byteArray")
		HX_STACK_LINE(1351)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1351)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1351)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1351)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1351)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1351)
		if ((tmp3)){
			HX_STACK_LINE(1351)
			tmp4 = (rect == null());
		}
		else{
			HX_STACK_LINE(1351)
			tmp4 = true;
		}
		HX_STACK_LINE(1351)
		if ((tmp4)){
			HX_STACK_LINE(1351)
			return null();
		}
		HX_STACK_LINE(1352)
		::lime::graphics::Image tmp5 = this->__image;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1352)
		::lime::math::Rectangle tmp6 = rect->__toLimeRectangle();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1352)
		::lime::utils::ByteArray tmp7 = byteArray;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1352)
		tmp5->setPixels(tmp6,tmp7,(int)1);
		HX_STACK_LINE(1353)
		this->__usingFramebuffer = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,setPixels,(void))

Void BitmapData_obj::setVector( ::openfl::geom::Rectangle rect,Array< int > inputVector){
{
		HX_STACK_FRAME("openfl.display.BitmapData","setVector",0x8b108c7a,"openfl.display.BitmapData.setVector","openfl/display/BitmapData.hx",1367,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(inputVector,"inputVector")
		HX_STACK_LINE(1369)
		::lime::utils::ByteArray tmp = ::lime::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1369)
		::lime::utils::ByteArray byteArray = tmp;		HX_STACK_VAR(byteArray,"byteArray");
		HX_STACK_LINE(1374)
		{
			HX_STACK_LINE(1374)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1374)
			while((true)){
				HX_STACK_LINE(1374)
				int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1374)
				int tmp2 = inputVector->length;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1374)
				bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1374)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1374)
				if ((tmp4)){
					HX_STACK_LINE(1374)
					break;
				}
				HX_STACK_LINE(1374)
				int tmp5 = inputVector->__get(_g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1374)
				Dynamic color = ((Dynamic)(tmp5));		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(1374)
				++(_g);
				HX_STACK_LINE(1376)
				Dynamic tmp6 = color;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1376)
				byteArray->writeUnsignedInt(tmp6);
			}
		}
		HX_STACK_LINE(1380)
		byteArray->position = (int)0;
		HX_STACK_LINE(1381)
		::openfl::geom::Rectangle tmp1 = rect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1381)
		::lime::utils::ByteArray tmp2 = byteArray;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1381)
		this->setPixels(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,setVector,(void))

int BitmapData_obj::threshold( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,::String operation,int threshold,hx::Null< int >  __o_color,hx::Null< int >  __o_mask,hx::Null< bool >  __o_copySource){
int color = __o_color.Default(0);
int mask = __o_mask.Default(-1);
bool copySource = __o_copySource.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","threshold",0xc8af2a20,"openfl.display.BitmapData.threshold","openfl/display/BitmapData.hx",1436,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(operation,"operation")
	HX_STACK_ARG(threshold,"threshold")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(copySource,"copySource")
{
		HX_STACK_LINE(1438)
		bool tmp = (sourceBitmapData == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1438)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1438)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1438)
		if ((tmp1)){
			HX_STACK_LINE(1438)
			::openfl::geom::Rectangle tmp3 = this->rect;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1438)
			::openfl::geom::Rectangle tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1438)
			::openfl::geom::Rectangle tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1438)
			::openfl::geom::Rectangle tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1438)
			::openfl::geom::Rectangle tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1438)
			tmp2 = sourceRect->equals(tmp7);
		}
		else{
			HX_STACK_LINE(1438)
			tmp2 = false;
		}
		HX_STACK_LINE(1438)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1438)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1438)
		if ((tmp3)){
			HX_STACK_LINE(1438)
			tmp4 = (destPoint->x == (int)0);
		}
		else{
			HX_STACK_LINE(1438)
			tmp4 = false;
		}
		HX_STACK_LINE(1438)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1438)
		if ((tmp4)){
			HX_STACK_LINE(1438)
			tmp5 = (destPoint->y == (int)0);
		}
		else{
			HX_STACK_LINE(1438)
			tmp5 = false;
		}
		HX_STACK_LINE(1438)
		if ((tmp5)){
			HX_STACK_LINE(1440)
			int hits = (int)0;		HX_STACK_VAR(hits,"hits");
			HX_STACK_LINE(1442)
			int tmp6 = (int(threshold) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1442)
			int tmp7 = (int(tmp6) << int((int)24));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1442)
			int tmp8 = (int(threshold) >> int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1442)
			int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1442)
			int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1442)
			int tmp11 = (int(tmp7) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1442)
			int tmp12 = (int(threshold) >> int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1442)
			int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1442)
			int tmp14 = (int(tmp13) << int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1442)
			int tmp15 = (int(tmp11) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1442)
			int tmp16 = (int(threshold) >> int((int)24));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1442)
			int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1442)
			int tmp18 = (int(tmp15) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1442)
			threshold = tmp18;
			HX_STACK_LINE(1443)
			int tmp19 = (int(color) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1443)
			int tmp20 = (int(tmp19) << int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1443)
			int tmp21 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1443)
			int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1443)
			int tmp23 = (int(tmp22) << int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1443)
			int tmp24 = (int(tmp20) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1443)
			int tmp25 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1443)
			int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1443)
			int tmp27 = (int(tmp26) << int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1443)
			int tmp28 = (int(tmp24) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1443)
			int tmp29 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1443)
			int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1443)
			int tmp31 = (int(tmp28) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1443)
			color = tmp31;
			HX_STACK_LINE(1445)
			::lime::utils::ByteArray tmp32 = ::lime::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1445)
			::lime::utils::ByteArray memory = tmp32;		HX_STACK_VAR(memory,"memory");
			HX_STACK_LINE(1449)
			::openfl::geom::Rectangle tmp33 = this->rect;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1449)
			::lime::utils::ByteArray tmp34 = this->getPixels(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1449)
			memory = tmp34;
			HX_STACK_LINE(1450)
			memory->position = (int)0;
			HX_STACK_LINE(1451)
			::lime::utils::ByteArray tmp35 = memory;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1451)
			::openfl::Memory_obj::select(tmp35);
			HX_STACK_LINE(1453)
			int tmp36 = (int(threshold) & int(mask));		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(1453)
			int thresholdMask = tmp36;		HX_STACK_VAR(thresholdMask,"thresholdMask");
			HX_STACK_LINE(1455)
			int width_yy;		HX_STACK_VAR(width_yy,"width_yy");
			HX_STACK_LINE(1455)
			int position;		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(1455)
			int pixelMask;		HX_STACK_VAR(pixelMask,"pixelMask");
			HX_STACK_LINE(1455)
			int pixelValue;		HX_STACK_VAR(pixelValue,"pixelValue");
			HX_STACK_LINE(1455)
			int i;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1455)
			bool test;		HX_STACK_VAR(test,"test");
			HX_STACK_LINE(1457)
			{
				HX_STACK_LINE(1457)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1457)
				int tmp37 = this->height;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1457)
				int _g = tmp37;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1457)
				while((true)){
					HX_STACK_LINE(1457)
					bool tmp38 = (_g1 < _g);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(1457)
					bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(1457)
					if ((tmp39)){
						HX_STACK_LINE(1457)
						break;
					}
					HX_STACK_LINE(1457)
					int tmp40 = (_g1)++;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(1457)
					int yy = tmp40;		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(1459)
					int tmp41 = this->width;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(1459)
					int tmp42 = yy;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(1459)
					int tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(1459)
					width_yy = tmp43;
					HX_STACK_LINE(1461)
					{
						HX_STACK_LINE(1461)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(1461)
						int tmp44 = this->width;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(1461)
						int _g2 = tmp44;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(1461)
						while((true)){
							HX_STACK_LINE(1461)
							bool tmp45 = (_g3 < _g2);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1461)
							bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(1461)
							if ((tmp46)){
								HX_STACK_LINE(1461)
								break;
							}
							HX_STACK_LINE(1461)
							int tmp47 = (_g3)++;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1461)
							int xx = tmp47;		HX_STACK_VAR(xx,"xx");
							HX_STACK_LINE(1463)
							int tmp48 = (width_yy + xx);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1463)
							int tmp49 = (tmp48 * (int)4);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1463)
							position = tmp49;
							HX_STACK_LINE(1464)
							int tmp50 = position;		HX_STACK_VAR(tmp50,"tmp50");

							HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_6_1)
							int __ArgCount() const { return 0; }
							int run(){
								HX_STACK_FRAME("*","_Function_6_1",0x5204b87c,"*._Function_6_1","openfl/display/BitmapData.hx",1464,0xdd12d5b9)
								{
									HX_STACK_LINE(1464)
									::lime::utils::ByteArray tmp51 = ::openfl::Memory_obj::gcRef;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(1464)
									int tmp52 = tmp51->readInt();		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(1464)
									return tmp52;
								}
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							HX_STACK_LINE(1464)
							int tmp51 = ::openfl::Memory_obj::_setPositionTemporarily(tmp50, Dynamic(new _Function_6_1()));		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1464)
							pixelValue = tmp51;
							HX_STACK_LINE(1465)
							int tmp52 = (int(pixelValue) & int(mask));		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1465)
							pixelMask = tmp52;
							HX_STACK_LINE(1467)
							int tmp53 = pixelMask;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1467)
							int tmp54 = thresholdMask;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(1467)
							int tmp55 = ::openfl::display::BitmapData_obj::__ucompare(tmp53,tmp54);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(1467)
							i = tmp55;
							HX_STACK_LINE(1468)
							test = false;
							HX_STACK_LINE(1470)
							bool tmp56 = (operation == HX_HCSTRING("==","\x60","\x35","\x00","\x00"));		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(1470)
							if ((tmp56)){
								HX_STACK_LINE(1470)
								bool tmp57 = (i == (int)0);		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(1470)
								test = tmp57;
							}
							else{
								HX_STACK_LINE(1471)
								bool tmp57 = (operation == HX_HCSTRING("<","\x3c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(1471)
								if ((tmp57)){
									HX_STACK_LINE(1471)
									bool tmp58 = (i == (int)-1);		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(1471)
									test = tmp58;
								}
								else{
									HX_STACK_LINE(1472)
									bool tmp58 = (operation == HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(1472)
									if ((tmp58)){
										HX_STACK_LINE(1472)
										bool tmp59 = (i == (int)1);		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(1472)
										test = tmp59;
									}
									else{
										HX_STACK_LINE(1473)
										bool tmp59 = (operation == HX_HCSTRING("!=","\xfc","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(1473)
										if ((tmp59)){
											HX_STACK_LINE(1473)
											bool tmp60 = (i != (int)0);		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(1473)
											test = tmp60;
										}
										else{
											HX_STACK_LINE(1474)
											bool tmp60 = (operation == HX_HCSTRING("<=","\x81","\x34","\x00","\x00"));		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(1474)
											if ((tmp60)){
												HX_STACK_LINE(1474)
												bool tmp61 = (i == (int)0);		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(1474)
												bool tmp62 = !(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(1474)
												bool tmp63;		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(1474)
												if ((tmp62)){
													HX_STACK_LINE(1474)
													tmp63 = (i == (int)-1);
												}
												else{
													HX_STACK_LINE(1474)
													tmp63 = true;
												}
												HX_STACK_LINE(1474)
												test = tmp63;
											}
											else{
												HX_STACK_LINE(1475)
												bool tmp61 = (operation == HX_HCSTRING(">=","\x3f","\x36","\x00","\x00"));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(1475)
												if ((tmp61)){
													HX_STACK_LINE(1475)
													bool tmp62 = (i == (int)0);		HX_STACK_VAR(tmp62,"tmp62");
													HX_STACK_LINE(1475)
													bool tmp63 = !(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
													HX_STACK_LINE(1475)
													bool tmp64;		HX_STACK_VAR(tmp64,"tmp64");
													HX_STACK_LINE(1475)
													if ((tmp63)){
														HX_STACK_LINE(1475)
														tmp64 = (i == (int)1);
													}
													else{
														HX_STACK_LINE(1475)
														tmp64 = true;
													}
													HX_STACK_LINE(1475)
													test = tmp64;
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(1477)
							bool tmp57 = test;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(1477)
							if ((tmp57)){
								HX_STACK_LINE(1479)
								{
									HX_STACK_LINE(1479)
									int v = color;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(1479)
									int tmp58 = position;		HX_STACK_VAR(tmp58,"tmp58");

									HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_8_1,int,v)
									int __ArgCount() const { return 0; }
									Void run(){
										HX_STACK_FRAME("*","_Function_8_1",0x52063cfe,"*._Function_8_1","openfl/display/BitmapData.hx",1479,0xdd12d5b9)
										{
											HX_STACK_LINE(1479)
											::lime::utils::ByteArray tmp59 = ::openfl::Memory_obj::gcRef;		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(1479)
											int tmp60 = v;		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(1479)
											tmp59->writeInt(tmp60);
										}
										return null();
									}
									HX_END_LOCAL_FUNC0((void))

									HX_STACK_LINE(1479)
									::openfl::Memory_obj::_setPositionTemporarily(tmp58, Dynamic(new _Function_8_1(v)));
								}
								HX_STACK_LINE(1480)
								(hits)++;
							}
						}
					}
				}
			}
			HX_STACK_LINE(1488)
			memory->position = (int)0;
			HX_STACK_LINE(1489)
			::openfl::geom::Rectangle tmp37 = this->rect;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(1489)
			::lime::utils::ByteArray tmp38 = memory;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1489)
			this->setPixels(tmp37,tmp38);
			HX_STACK_LINE(1490)
			::openfl::Memory_obj::select(null());
			HX_STACK_LINE(1491)
			int tmp39 = hits;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1491)
			return tmp39;
		}
		else{
			HX_STACK_LINE(1495)
			Float tmp6 = sourceRect->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1495)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1495)
			int sx = tmp7;		HX_STACK_VAR(sx,"sx");
			HX_STACK_LINE(1496)
			Float tmp8 = sourceRect->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1496)
			int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1496)
			int sy = tmp9;		HX_STACK_VAR(sy,"sy");
			HX_STACK_LINE(1497)
			int tmp10 = sourceBitmapData->width;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1497)
			int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1497)
			int sw = tmp11;		HX_STACK_VAR(sw,"sw");
			HX_STACK_LINE(1498)
			int tmp12 = sourceBitmapData->height;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1498)
			int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1498)
			int sh = tmp13;		HX_STACK_VAR(sh,"sh");
			HX_STACK_LINE(1500)
			Float tmp14 = destPoint->x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1500)
			int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1500)
			int dx = tmp15;		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(1501)
			Float tmp16 = destPoint->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1501)
			int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1501)
			int dy = tmp17;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(1503)
			int tmp18 = this->width;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1503)
			int tmp19 = sw;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1503)
			int tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1503)
			int tmp21 = dx;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1503)
			int tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1503)
			int bw = tmp22;		HX_STACK_VAR(bw,"bw");
			HX_STACK_LINE(1504)
			int tmp23 = this->height;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1504)
			int tmp24 = sh;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1504)
			int tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1504)
			int tmp26 = dy;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1504)
			int tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1504)
			int bh = tmp27;		HX_STACK_VAR(bh,"bh");
			HX_STACK_LINE(1506)
			bool tmp28 = (bw < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1506)
			int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1506)
			if ((tmp28)){
				HX_STACK_LINE(1506)
				int tmp30 = sw;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1506)
				int tmp31 = this->width;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1506)
				int tmp32 = sw;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1506)
				int tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1506)
				int tmp34 = dx;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1506)
				int tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1506)
				tmp29 = (tmp30 + tmp35);
			}
			else{
				HX_STACK_LINE(1506)
				tmp29 = sw;
			}
			HX_STACK_LINE(1506)
			int dw = tmp29;		HX_STACK_VAR(dw,"dw");
			HX_STACK_LINE(1507)
			bool tmp30 = (bw < (int)0);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1507)
			int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1507)
			if ((tmp30)){
				HX_STACK_LINE(1507)
				int tmp32 = sh;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1507)
				int tmp33 = this->height;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1507)
				int tmp34 = sh;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1507)
				int tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1507)
				int tmp36 = dy;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1507)
				int tmp37 = (tmp35 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1507)
				tmp31 = (tmp32 + tmp37);
			}
			else{
				HX_STACK_LINE(1507)
				tmp31 = sh;
			}
			HX_STACK_LINE(1507)
			int dh = tmp31;		HX_STACK_VAR(dh,"dh");
			HX_STACK_LINE(1509)
			int hits = (int)0;		HX_STACK_VAR(hits,"hits");
			HX_STACK_LINE(1511)
			int tmp32 = (int(threshold) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1511)
			int tmp33 = (int(tmp32) << int((int)24));		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1511)
			int tmp34 = (int(threshold) >> int((int)8));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1511)
			int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1511)
			int tmp36 = (int(tmp35) << int((int)16));		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(1511)
			int tmp37 = (int(tmp33) | int(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(1511)
			int tmp38 = (int(threshold) >> int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1511)
			int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1511)
			int tmp40 = (int(tmp39) << int((int)8));		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1511)
			int tmp41 = (int(tmp37) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(1511)
			int tmp42 = (int(threshold) >> int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(1511)
			int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(1511)
			int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(1511)
			threshold = tmp44;
			HX_STACK_LINE(1512)
			int tmp45 = (int(color) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(1512)
			int tmp46 = (int(tmp45) << int((int)24));		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(1512)
			int tmp47 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(1512)
			int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(1512)
			int tmp49 = (int(tmp48) << int((int)16));		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(1512)
			int tmp50 = (int(tmp46) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(1512)
			int tmp51 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(1512)
			int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(1512)
			int tmp53 = (int(tmp52) << int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(1512)
			int tmp54 = (int(tmp50) | int(tmp53));		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(1512)
			int tmp55 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(1512)
			int tmp56 = (int(tmp55) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(1512)
			int tmp57 = (int(tmp54) | int(tmp56));		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(1512)
			color = tmp57;
			HX_STACK_LINE(1514)
			int tmp58 = (sw * sh);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(1514)
			int tmp59 = (tmp58 * (int)4);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(1514)
			int canvasMemory = tmp59;		HX_STACK_VAR(canvasMemory,"canvasMemory");
			HX_STACK_LINE(1515)
			int sourceMemory = (int)0;		HX_STACK_VAR(sourceMemory,"sourceMemory");
			HX_STACK_LINE(1517)
			bool tmp60 = copySource;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(1517)
			if ((tmp60)){
				HX_STACK_LINE(1519)
				int tmp61 = (sw * sh);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(1519)
				int tmp62 = (tmp61 * (int)4);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(1519)
				sourceMemory = tmp62;
			}
			HX_STACK_LINE(1523)
			int tmp61 = (canvasMemory + sourceMemory);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(1523)
			int totalMemory = tmp61;		HX_STACK_VAR(totalMemory,"totalMemory");
			HX_STACK_LINE(1524)
			::lime::utils::ByteArray tmp62 = ::lime::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(1524)
			::lime::utils::ByteArray memory = tmp62;		HX_STACK_VAR(memory,"memory");
			HX_STACK_LINE(1528)
			memory->position = (int)0;
			HX_STACK_LINE(1529)
			::openfl::display::BitmapData tmp63 = sourceBitmapData->clone();		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(1529)
			::openfl::display::BitmapData bitmapData = tmp63;		HX_STACK_VAR(bitmapData,"bitmapData");
			HX_STACK_LINE(1530)
			::openfl::geom::Rectangle tmp64 = sourceRect;		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(1530)
			::lime::utils::ByteArray tmp65 = bitmapData->getPixels(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(1530)
			::lime::utils::ByteArray pixels = tmp65;		HX_STACK_VAR(pixels,"pixels");
			HX_STACK_LINE(1531)
			::lime::utils::ByteArray tmp66 = pixels;		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(1531)
			memory->writeBytes(tmp66,null(),null());
			HX_STACK_LINE(1532)
			memory->position = canvasMemory;
			HX_STACK_LINE(1534)
			bool tmp67 = copySource;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(1534)
			if ((tmp67)){
				HX_STACK_LINE(1536)
				::lime::utils::ByteArray tmp68 = pixels;		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(1536)
				memory->writeBytes(tmp68,null(),null());
			}
			HX_STACK_LINE(1540)
			memory->position = (int)0;
			HX_STACK_LINE(1541)
			::lime::utils::ByteArray tmp68 = memory;		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(1541)
			::openfl::Memory_obj::select(tmp68);
			HX_STACK_LINE(1543)
			int tmp69 = (int(threshold) & int(mask));		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(1543)
			int thresholdMask = tmp69;		HX_STACK_VAR(thresholdMask,"thresholdMask");
			HX_STACK_LINE(1545)
			int position;		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(1545)
			int pixelMask;		HX_STACK_VAR(pixelMask,"pixelMask");
			HX_STACK_LINE(1545)
			int pixelValue;		HX_STACK_VAR(pixelValue,"pixelValue");
			HX_STACK_LINE(1545)
			int i;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1545)
			bool test;		HX_STACK_VAR(test,"test");
			HX_STACK_LINE(1547)
			{
				HX_STACK_LINE(1547)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1547)
				while((true)){
					HX_STACK_LINE(1547)
					bool tmp70 = (_g < dh);		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(1547)
					bool tmp71 = !(tmp70);		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(1547)
					if ((tmp71)){
						HX_STACK_LINE(1547)
						break;
					}
					HX_STACK_LINE(1547)
					int tmp72 = (_g)++;		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(1547)
					int yy = tmp72;		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(1549)
					{
						HX_STACK_LINE(1549)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1549)
						while((true)){
							HX_STACK_LINE(1549)
							bool tmp73 = (_g1 < dw);		HX_STACK_VAR(tmp73,"tmp73");
							HX_STACK_LINE(1549)
							bool tmp74 = !(tmp73);		HX_STACK_VAR(tmp74,"tmp74");
							HX_STACK_LINE(1549)
							if ((tmp74)){
								HX_STACK_LINE(1549)
								break;
							}
							HX_STACK_LINE(1549)
							int tmp75 = (_g1)++;		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(1549)
							int xx = tmp75;		HX_STACK_VAR(xx,"xx");
							HX_STACK_LINE(1551)
							int tmp76 = (xx + sx);		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(1551)
							int tmp77 = (yy + sy);		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(1551)
							int tmp78 = sw;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(1551)
							int tmp79 = (tmp77 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(1551)
							int tmp80 = (tmp76 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(1551)
							int tmp81 = (tmp80 * (int)4);		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(1551)
							position = tmp81;
							HX_STACK_LINE(1552)
							int tmp82 = position;		HX_STACK_VAR(tmp82,"tmp82");

							HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_6_1)
							int __ArgCount() const { return 0; }
							int run(){
								HX_STACK_FRAME("*","_Function_6_1",0x5204b87c,"*._Function_6_1","openfl/display/BitmapData.hx",1552,0xdd12d5b9)
								{
									HX_STACK_LINE(1552)
									::lime::utils::ByteArray tmp83 = ::openfl::Memory_obj::gcRef;		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(1552)
									int tmp84 = tmp83->readInt();		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(1552)
									return tmp84;
								}
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							HX_STACK_LINE(1552)
							int tmp83 = ::openfl::Memory_obj::_setPositionTemporarily(tmp82, Dynamic(new _Function_6_1()));		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(1552)
							pixelValue = tmp83;
							HX_STACK_LINE(1553)
							int tmp84 = (int(pixelValue) & int(mask));		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(1553)
							pixelMask = tmp84;
							HX_STACK_LINE(1555)
							int tmp85 = pixelMask;		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(1555)
							int tmp86 = thresholdMask;		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(1555)
							int tmp87 = ::openfl::display::BitmapData_obj::__ucompare(tmp85,tmp86);		HX_STACK_VAR(tmp87,"tmp87");
							HX_STACK_LINE(1555)
							i = tmp87;
							HX_STACK_LINE(1556)
							test = false;
							HX_STACK_LINE(1558)
							bool tmp88 = (operation == HX_HCSTRING("==","\x60","\x35","\x00","\x00"));		HX_STACK_VAR(tmp88,"tmp88");
							HX_STACK_LINE(1558)
							if ((tmp88)){
								HX_STACK_LINE(1558)
								bool tmp89 = (i == (int)0);		HX_STACK_VAR(tmp89,"tmp89");
								HX_STACK_LINE(1558)
								test = tmp89;
							}
							else{
								HX_STACK_LINE(1559)
								bool tmp89 = (operation == HX_HCSTRING("<","\x3c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp89,"tmp89");
								HX_STACK_LINE(1559)
								if ((tmp89)){
									HX_STACK_LINE(1559)
									bool tmp90 = (i == (int)-1);		HX_STACK_VAR(tmp90,"tmp90");
									HX_STACK_LINE(1559)
									test = tmp90;
								}
								else{
									HX_STACK_LINE(1560)
									bool tmp90 = (operation == HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp90,"tmp90");
									HX_STACK_LINE(1560)
									if ((tmp90)){
										HX_STACK_LINE(1560)
										bool tmp91 = (i == (int)1);		HX_STACK_VAR(tmp91,"tmp91");
										HX_STACK_LINE(1560)
										test = tmp91;
									}
									else{
										HX_STACK_LINE(1561)
										bool tmp91 = (operation == HX_HCSTRING("!=","\xfc","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp91,"tmp91");
										HX_STACK_LINE(1561)
										if ((tmp91)){
											HX_STACK_LINE(1561)
											bool tmp92 = (i != (int)0);		HX_STACK_VAR(tmp92,"tmp92");
											HX_STACK_LINE(1561)
											test = tmp92;
										}
										else{
											HX_STACK_LINE(1562)
											bool tmp92 = (operation == HX_HCSTRING("<=","\x81","\x34","\x00","\x00"));		HX_STACK_VAR(tmp92,"tmp92");
											HX_STACK_LINE(1562)
											if ((tmp92)){
												HX_STACK_LINE(1562)
												bool tmp93 = (i == (int)0);		HX_STACK_VAR(tmp93,"tmp93");
												HX_STACK_LINE(1562)
												bool tmp94 = !(tmp93);		HX_STACK_VAR(tmp94,"tmp94");
												HX_STACK_LINE(1562)
												bool tmp95;		HX_STACK_VAR(tmp95,"tmp95");
												HX_STACK_LINE(1562)
												if ((tmp94)){
													HX_STACK_LINE(1562)
													tmp95 = (i == (int)-1);
												}
												else{
													HX_STACK_LINE(1562)
													tmp95 = true;
												}
												HX_STACK_LINE(1562)
												test = tmp95;
											}
											else{
												HX_STACK_LINE(1563)
												bool tmp93 = (operation == HX_HCSTRING(">=","\x3f","\x36","\x00","\x00"));		HX_STACK_VAR(tmp93,"tmp93");
												HX_STACK_LINE(1563)
												if ((tmp93)){
													HX_STACK_LINE(1563)
													bool tmp94 = (i == (int)0);		HX_STACK_VAR(tmp94,"tmp94");
													HX_STACK_LINE(1563)
													bool tmp95 = !(tmp94);		HX_STACK_VAR(tmp95,"tmp95");
													HX_STACK_LINE(1563)
													bool tmp96;		HX_STACK_VAR(tmp96,"tmp96");
													HX_STACK_LINE(1563)
													if ((tmp95)){
														HX_STACK_LINE(1563)
														tmp96 = (i == (int)1);
													}
													else{
														HX_STACK_LINE(1563)
														tmp96 = true;
													}
													HX_STACK_LINE(1563)
													test = tmp96;
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(1565)
							bool tmp89 = test;		HX_STACK_VAR(tmp89,"tmp89");
							HX_STACK_LINE(1565)
							if ((tmp89)){
								HX_STACK_LINE(1567)
								{
									HX_STACK_LINE(1567)
									int v = color;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(1567)
									int tmp90 = position;		HX_STACK_VAR(tmp90,"tmp90");

									HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_8_1,int,v)
									int __ArgCount() const { return 0; }
									Void run(){
										HX_STACK_FRAME("*","_Function_8_1",0x52063cfe,"*._Function_8_1","openfl/display/BitmapData.hx",1567,0xdd12d5b9)
										{
											HX_STACK_LINE(1567)
											::lime::utils::ByteArray tmp91 = ::openfl::Memory_obj::gcRef;		HX_STACK_VAR(tmp91,"tmp91");
											HX_STACK_LINE(1567)
											int tmp92 = v;		HX_STACK_VAR(tmp92,"tmp92");
											HX_STACK_LINE(1567)
											tmp91->writeInt(tmp92);
										}
										return null();
									}
									HX_END_LOCAL_FUNC0((void))

									HX_STACK_LINE(1567)
									::openfl::Memory_obj::_setPositionTemporarily(tmp90, Dynamic(new _Function_8_1(v)));
								}
								HX_STACK_LINE(1568)
								(hits)++;
							}
							else{
								HX_STACK_LINE(1570)
								bool tmp90 = copySource;		HX_STACK_VAR(tmp90,"tmp90");
								HX_STACK_LINE(1570)
								if ((tmp90)){
									HX_STACK_LINE(1572)
									int tmp91 = (canvasMemory + position);		HX_STACK_VAR(tmp91,"tmp91");

									HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_8_1)
									int __ArgCount() const { return 0; }
									int run(){
										HX_STACK_FRAME("*","_Function_8_1",0x52063cfe,"*._Function_8_1","openfl/display/BitmapData.hx",1572,0xdd12d5b9)
										{
											HX_STACK_LINE(1572)
											::lime::utils::ByteArray tmp92 = ::openfl::Memory_obj::gcRef;		HX_STACK_VAR(tmp92,"tmp92");
											HX_STACK_LINE(1572)
											int tmp93 = tmp92->readInt();		HX_STACK_VAR(tmp93,"tmp93");
											HX_STACK_LINE(1572)
											return tmp93;
										}
										return null();
									}
									HX_END_LOCAL_FUNC0(return)

									HX_STACK_LINE(1572)
									int tmp92 = ::openfl::Memory_obj::_setPositionTemporarily(tmp91, Dynamic(new _Function_8_1()));		HX_STACK_VAR(tmp92,"tmp92");
									HX_STACK_LINE(1572)
									int v = tmp92;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(1572)
									int tmp93 = position;		HX_STACK_VAR(tmp93,"tmp93");

									HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_8_2,int,v)
									int __ArgCount() const { return 0; }
									Void run(){
										HX_STACK_FRAME("*","_Function_8_2",0x52063cff,"*._Function_8_2","openfl/display/BitmapData.hx",1572,0xdd12d5b9)
										{
											HX_STACK_LINE(1572)
											::lime::utils::ByteArray tmp94 = ::openfl::Memory_obj::gcRef;		HX_STACK_VAR(tmp94,"tmp94");
											HX_STACK_LINE(1572)
											int tmp95 = v;		HX_STACK_VAR(tmp95,"tmp95");
											HX_STACK_LINE(1572)
											tmp94->writeInt(tmp95);
										}
										return null();
									}
									HX_END_LOCAL_FUNC0((void))

									HX_STACK_LINE(1572)
									::openfl::Memory_obj::_setPositionTemporarily(tmp93, Dynamic(new _Function_8_2(v)));
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(1580)
			memory->position = (int)0;
			HX_STACK_LINE(1581)
			::openfl::geom::Rectangle tmp70 = sourceRect;		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(1581)
			::lime::utils::ByteArray tmp71 = memory;		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(1581)
			bitmapData->setPixels(tmp70,tmp71);
			HX_STACK_LINE(1582)
			::openfl::display::BitmapData tmp72 = bitmapData;		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(1582)
			::openfl::geom::Rectangle tmp73 = bitmapData->rect;		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(1582)
			::openfl::geom::Point tmp74 = destPoint;		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(1582)
			this->copyPixels(tmp72,tmp73,tmp74,null(),null(),null());
			HX_STACK_LINE(1583)
			::openfl::Memory_obj::select(null());
			HX_STACK_LINE(1584)
			int tmp75 = hits;		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(1584)
			return tmp75;
		}
		HX_STACK_LINE(1438)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC8(BitmapData_obj,threshold,return )

Void BitmapData_obj::unlock( ::openfl::geom::Rectangle changeRect){
{
		HX_STACK_FRAME("openfl.display.BitmapData","unlock",0x756bd12f,"openfl.display.BitmapData.unlock","openfl/display/BitmapData.hx",1603,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(changeRect,"changeRect")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,unlock,(void))

Void BitmapData_obj::__createUVs( ){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__createUVs",0xb29ce00b,"openfl.display.BitmapData.__createUVs","openfl/display/BitmapData.hx",1610,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1612)
		::openfl::display::TextureUvs tmp = this->__uvData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1612)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1612)
		if ((tmp1)){
			HX_STACK_LINE(1612)
			::openfl::display::TextureUvs tmp2 = ::openfl::display::TextureUvs_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1612)
			this->__uvData = tmp2;
		}
		HX_STACK_LINE(1614)
		::openfl::display::TextureUvs tmp2 = this->__uvData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1614)
		tmp2->x0 = (int)0;
		HX_STACK_LINE(1615)
		::openfl::display::TextureUvs tmp3 = this->__uvData;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1615)
		tmp3->y0 = (int)0;
		HX_STACK_LINE(1616)
		::openfl::display::TextureUvs tmp4 = this->__uvData;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1616)
		tmp4->x1 = (int)1;
		HX_STACK_LINE(1617)
		::openfl::display::TextureUvs tmp5 = this->__uvData;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1617)
		tmp5->y1 = (int)0;
		HX_STACK_LINE(1618)
		::openfl::display::TextureUvs tmp6 = this->__uvData;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1618)
		tmp6->x2 = (int)1;
		HX_STACK_LINE(1619)
		::openfl::display::TextureUvs tmp7 = this->__uvData;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1619)
		tmp7->y2 = (int)1;
		HX_STACK_LINE(1620)
		::openfl::display::TextureUvs tmp8 = this->__uvData;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1620)
		tmp8->x3 = (int)0;
		HX_STACK_LINE(1621)
		::openfl::display::TextureUvs tmp9 = this->__uvData;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1621)
		tmp9->y3 = (int)1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,__createUVs,(void))

Void BitmapData_obj::__drawGL( ::openfl::_internal::renderer::RenderSession renderSession,int width,int height,::openfl::display::IBitmapDrawable source,::openfl::geom::Matrix matrix,::openfl::geom::ColorTransform colorTransform,::openfl::display::BlendMode blendMode,::openfl::geom::Rectangle clipRect,hx::Null< bool >  __o_smoothing,hx::Null< bool >  __o_drawSelf,hx::Null< bool >  __o_clearBuffer,hx::Null< bool >  __o_readPixels){
bool smoothing = __o_smoothing.Default(false);
bool drawSelf = __o_drawSelf.Default(false);
bool clearBuffer = __o_clearBuffer.Default(false);
bool readPixels = __o_readPixels.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","__drawGL",0xb0ddbd74,"openfl.display.BitmapData.__drawGL","openfl/display/BitmapData.hx",1626,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(renderSession,"renderSession")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(colorTransform,"colorTransform")
	HX_STACK_ARG(blendMode,"blendMode")
	HX_STACK_ARG(clipRect,"clipRect")
	HX_STACK_ARG(smoothing,"smoothing")
	HX_STACK_ARG(drawSelf,"drawSelf")
	HX_STACK_ARG(clearBuffer,"clearBuffer")
	HX_STACK_ARG(readPixels,"readPixels")
{
		HX_STACK_LINE(1628)
		::openfl::display::MovieClip tmp = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1628)
		::openfl::_internal::renderer::AbstractRenderer tmp1 = tmp->stage->__renderer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1628)
		::openfl::_internal::renderer::AbstractRenderer renderer = tmp1;		HX_STACK_VAR(renderer,"renderer");
		HX_STACK_LINE(1629)
		bool tmp2 = (renderer == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1629)
		if ((tmp2)){
			HX_STACK_LINE(1629)
			return null();
		}
		HX_STACK_LINE(1631)
		::openfl::_internal::renderer::RenderSession renderSession1 = renderer->renderSession;		HX_STACK_VAR(renderSession1,"renderSession1");
		HX_STACK_LINE(1632)
		::lime::graphics::GLRenderContext gl = renderSession1->gl;		HX_STACK_VAR(gl,"gl");
		HX_STACK_LINE(1633)
		bool tmp3 = (gl == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1633)
		if ((tmp3)){
			HX_STACK_LINE(1633)
			return null();
		}
		HX_STACK_LINE(1635)
		::openfl::_internal::renderer::opengl::utils::SpriteBatch spritebatch = renderSession1->spriteBatch;		HX_STACK_VAR(spritebatch,"spritebatch");
		HX_STACK_LINE(1636)
		bool tmp4 = renderSession1->renderer->transparent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1636)
		bool renderTransparent = tmp4;		HX_STACK_VAR(renderTransparent,"renderTransparent");
		HX_STACK_LINE(1638)
		bool tmp5 = (clipRect == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1638)
		::openfl::geom::Rectangle tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1638)
		if ((tmp5)){
			HX_STACK_LINE(1638)
			tmp6 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,width,height);
		}
		else{
			HX_STACK_LINE(1638)
			tmp6 = clipRect->clone();
		}
		HX_STACK_LINE(1638)
		::openfl::geom::Rectangle tmpRect = tmp6;		HX_STACK_VAR(tmpRect,"tmpRect");
		HX_STACK_LINE(1640)
		bool tmp7 = this->transparent;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1640)
		renderSession1->renderer->transparent = tmp7;
		HX_STACK_LINE(1642)
		::openfl::_internal::renderer::opengl::utils::FilterTexture tmp8 = this->__framebuffer;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1642)
		bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1642)
		if ((tmp9)){
			HX_STACK_LINE(1644)
			::openfl::_internal::renderer::opengl::utils::FilterTexture tmp10 = ::openfl::_internal::renderer::opengl::utils::FilterTexture_obj::__new(gl,width,height,smoothing);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1644)
			this->__framebuffer = tmp10;
		}
		HX_STACK_LINE(1648)
		::openfl::_internal::renderer::opengl::utils::FilterTexture tmp10 = this->__framebuffer;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1648)
		int tmp11 = width;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1648)
		int tmp12 = height;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1648)
		tmp10->resize(tmp11,tmp12);
		HX_STACK_LINE(1649)
		{
			HX_STACK_LINE(1649)
			::openfl::_internal::renderer::opengl::utils::FilterTexture tmp13 = this->__framebuffer;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1649)
			::lime::graphics::opengl::GLFramebuffer framebuffer = tmp13->frameBuffer;		HX_STACK_VAR(framebuffer,"framebuffer");
			HX_STACK_LINE(1649)
			{
				HX_STACK_LINE(1649)
				int tmp14 = gl->FRAMEBUFFER;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1649)
				bool tmp15 = (framebuffer == null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1649)
				int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1649)
				if ((tmp15)){
					HX_STACK_LINE(1649)
					tmp16 = (int)0;
				}
				else{
					HX_STACK_LINE(1649)
					tmp16 = framebuffer->id;
				}
				HX_STACK_LINE(1649)
				::lime::graphics::opengl::GL_obj::lime_gl_bind_framebuffer(tmp14,tmp16);
			}
		}
		HX_STACK_LINE(1651)
		int tmp13 = width;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1651)
		int tmp14 = height;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1651)
		renderer->setViewport((int)0,(int)0,tmp13,tmp14);
		HX_STACK_LINE(1653)
		::openfl::_internal::renderer::RenderSession tmp15 = renderSession1;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1653)
		bool tmp16 = drawSelf;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1653)
		::openfl::geom::Rectangle tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1653)
		if ((tmp16)){
			HX_STACK_LINE(1653)
			tmp17 = null();
		}
		else{
			HX_STACK_LINE(1653)
			tmp17 = tmpRect;
		}
		HX_STACK_LINE(1653)
		spritebatch->begin(tmp15,tmp17);
		HX_STACK_LINE(1656)
		::lime::graphics::opengl::GL_obj::lime_gl_color_mask(true,true,true,true);
		HX_STACK_LINE(1657)
		renderSession1->blendModeManager->setBlendMode(::openfl::display::BlendMode_obj::NORMAL,null());
		HX_STACK_LINE(1659)
		::openfl::_internal::renderer::opengl::shaders2::DefaultShader tmp18 = renderSession1->shaderManager->defaultShader;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1659)
		renderSession1->shaderManager->setShader(tmp18,true);
		HX_STACK_LINE(1661)
		bool tmp19 = clearBuffer;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1661)
		bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1661)
		bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1661)
		if ((tmp20)){
			HX_STACK_LINE(1661)
			tmp21 = drawSelf;
		}
		else{
			HX_STACK_LINE(1661)
			tmp21 = true;
		}
		HX_STACK_LINE(1661)
		if ((tmp21)){
			HX_STACK_LINE(1663)
			::openfl::_internal::renderer::opengl::utils::FilterTexture tmp22 = this->__framebuffer;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1663)
			tmp22->clear();
		}
		HX_STACK_LINE(1667)
		bool tmp22 = drawSelf;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1667)
		if ((tmp22)){
			HX_STACK_LINE(1669)
			::openfl::geom::Matrix tmp23 = this->__worldTransform;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1669)
			tmp23->identity();
			HX_STACK_LINE(1670)
			{
				HX_STACK_LINE(1670)
				::openfl::geom::Matrix tmp24 = this->__worldTransform;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1670)
				::openfl::geom::Matrix m = tmp24;		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(1670)
				Float tx = m->tx;		HX_STACK_VAR(tx,"tx");
				HX_STACK_LINE(1670)
				Float ty = m->ty;		HX_STACK_VAR(ty,"ty");
				HX_STACK_LINE(1670)
				m->tx = (int)0;
				HX_STACK_LINE(1670)
				m->ty = (int)0;
				HX_STACK_LINE(1670)
				m->scale((int)1,(int)-1);
				HX_STACK_LINE(1670)
				int tmp25 = this->height;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1670)
				m->translate((int)0,tmp25);
				HX_STACK_LINE(1670)
				hx::AddEq(m->tx,tx);
				HX_STACK_LINE(1670)
				hx::SubEq(m->ty,ty);
			}
			HX_STACK_LINE(1671)
			::openfl::_internal::renderer::RenderSession tmp24 = renderSession1;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1671)
			this->__renderGL(tmp24);
			HX_STACK_LINE(1672)
			spritebatch->stop();
			HX_STACK_LINE(1673)
			{
				HX_STACK_LINE(1673)
				::lime::graphics::opengl::GLTexture tmp25 = this->__texture;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1673)
				::lime::graphics::opengl::GLTexture texture = tmp25;		HX_STACK_VAR(texture,"texture");
				HX_STACK_LINE(1673)
				{
					HX_STACK_LINE(1673)
					Dynamic tmp26 = texture->id;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1673)
					::lime::graphics::opengl::GL_obj::lime_gl_delete_texture(tmp26);
					HX_STACK_LINE(1673)
					texture->invalidate();
				}
			}
			HX_STACK_LINE(1674)
			::openfl::geom::Rectangle tmp25 = tmpRect;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1674)
			spritebatch->start(tmp25);
		}
		HX_STACK_LINE(1678)
		::openfl::geom::ColorTransform ctCache = source->__Field(HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3"), hx::paccDynamic );		HX_STACK_VAR(ctCache,"ctCache");
		HX_STACK_LINE(1679)
		::openfl::geom::Matrix matrixCache = source->__Field(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"), hx::paccDynamic );		HX_STACK_VAR(matrixCache,"matrixCache");
		HX_STACK_LINE(1680)
		::openfl::display::BlendMode blendModeCache = source->__Field(HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a"), hx::paccDynamic );		HX_STACK_VAR(blendModeCache,"blendModeCache");
		HX_STACK_LINE(1681)
		bool cached = source->__Field(HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1"), hx::paccDynamic );		HX_STACK_VAR(cached,"cached");
		HX_STACK_LINE(1683)
		bool tmp23 = (matrix != null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1683)
		::openfl::geom::Matrix tmp24;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1683)
		if ((tmp23)){
			HX_STACK_LINE(1683)
			tmp24 = ::openfl::geom::Matrix_obj::__new(matrix->a,matrix->b,matrix->c,matrix->d,matrix->tx,matrix->ty);
		}
		else{
			HX_STACK_LINE(1683)
			tmp24 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
		}
		HX_STACK_LINE(1683)
		::openfl::geom::Matrix m = tmp24;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(1685)
		{
			HX_STACK_LINE(1685)
			Float tx = m->tx;		HX_STACK_VAR(tx,"tx");
			HX_STACK_LINE(1685)
			Float ty = m->ty;		HX_STACK_VAR(ty,"ty");
			HX_STACK_LINE(1685)
			m->tx = (int)0;
			HX_STACK_LINE(1685)
			m->ty = (int)0;
			HX_STACK_LINE(1685)
			m->scale((int)1,(int)-1);
			HX_STACK_LINE(1685)
			int tmp25 = this->height;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1685)
			m->translate((int)0,tmp25);
			HX_STACK_LINE(1685)
			hx::AddEq(m->tx,tx);
			HX_STACK_LINE(1685)
			hx::SubEq(m->ty,ty);
		}
		HX_STACK_LINE(1687)
		source->__FieldRef(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a")) = m;
		HX_STACK_LINE(1688)
		bool tmp25 = (colorTransform != null());		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1688)
		::openfl::geom::ColorTransform tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1688)
		if ((tmp25)){
			HX_STACK_LINE(1688)
			tmp26 = colorTransform;
		}
		else{
			HX_STACK_LINE(1688)
			tmp26 = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());
		}
		HX_STACK_LINE(1688)
		source->__FieldRef(HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3")) = tmp26;
		HX_STACK_LINE(1689)
		source->__FieldRef(HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a")) = blendMode;
		HX_STACK_LINE(1690)
		source->__FieldRef(HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1")) = false;
		HX_STACK_LINE(1692)
		source->__updateChildren(false);
		HX_STACK_LINE(1694)
		::openfl::_internal::renderer::RenderSession tmp27 = renderSession1;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1694)
		source->__renderGL(tmp27);
		HX_STACK_LINE(1696)
		source->__FieldRef(HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3")) = ctCache;
		HX_STACK_LINE(1697)
		source->__FieldRef(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a")) = matrixCache;
		HX_STACK_LINE(1698)
		source->__FieldRef(HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a")) = blendModeCache;
		HX_STACK_LINE(1699)
		source->__FieldRef(HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1")) = cached;
		HX_STACK_LINE(1701)
		source->__updateChildren(true);
		HX_STACK_LINE(1703)
		spritebatch->finish();
		HX_STACK_LINE(1705)
		bool tmp28 = readPixels;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1705)
		if ((tmp28)){
			HX_STACK_LINE(1708)
			::lime::graphics::Image tmp29 = this->__image;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1708)
			int tmp30 = tmp29->width;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1708)
			int tmp31 = width;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1708)
			bool tmp32 = (tmp30 != tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1708)
			bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1708)
			bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1708)
			if ((tmp33)){
				HX_STACK_LINE(1708)
				::lime::graphics::Image tmp35 = this->__image;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1708)
				::lime::graphics::Image tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1708)
				int tmp37 = tmp36->height;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1708)
				int tmp38 = height;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1708)
				tmp34 = (tmp37 != tmp38);
			}
			else{
				HX_STACK_LINE(1708)
				tmp34 = true;
			}
			HX_STACK_LINE(1708)
			if ((tmp34)){
				HX_STACK_LINE(1710)
				::lime::graphics::Image tmp35 = this->__image;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1710)
				int tmp36 = width;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1710)
				int tmp37 = height;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1710)
				tmp35->resize(tmp36,tmp37);
			}
			HX_STACK_LINE(1714)
			{
				HX_STACK_LINE(1714)
				::lime::graphics::Image tmp35 = this->__image;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1714)
				::lime::utils::UInt8Array tmp36 = tmp35->buffer->data;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1714)
				::lime::utils::ArrayBufferView pixels = tmp36;		HX_STACK_VAR(pixels,"pixels");
				HX_STACK_LINE(1714)
				{
					HX_STACK_LINE(1714)
					int tmp37 = width;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(1714)
					int tmp38 = height;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(1714)
					int tmp39 = gl->RGBA;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(1714)
					int tmp40 = gl->UNSIGNED_BYTE;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(1714)
					bool tmp41 = (pixels == null());		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(1714)
					::lime::utils::ByteArray tmp42;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(1714)
					if ((tmp41)){
						HX_STACK_LINE(1714)
						tmp42 = null();
					}
					else{
						HX_STACK_LINE(1714)
						tmp42 = pixels->getByteBuffer();
					}
					HX_STACK_LINE(1714)
					bool tmp43 = (pixels == null());		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(1714)
					Dynamic tmp44;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(1714)
					if ((tmp43)){
						HX_STACK_LINE(1714)
						tmp44 = null();
					}
					else{
						HX_STACK_LINE(1714)
						tmp44 = pixels->getStart();
					}
					HX_STACK_LINE(1714)
					::lime::graphics::opengl::GL_obj::lime_gl_read_pixels((int)0,(int)0,tmp37,tmp38,tmp39,tmp40,tmp42,tmp44);
				}
			}
		}
		HX_STACK_LINE(1718)
		{
			HX_STACK_LINE(1718)
			::lime::graphics::opengl::GLFramebuffer framebuffer = renderSession1->defaultFramebuffer;		HX_STACK_VAR(framebuffer,"framebuffer");
			HX_STACK_LINE(1718)
			{
				HX_STACK_LINE(1718)
				int tmp29 = gl->FRAMEBUFFER;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1718)
				bool tmp30 = (framebuffer == null());		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1718)
				int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1718)
				if ((tmp30)){
					HX_STACK_LINE(1718)
					tmp31 = (int)0;
				}
				else{
					HX_STACK_LINE(1718)
					tmp31 = framebuffer->id;
				}
				HX_STACK_LINE(1718)
				::lime::graphics::opengl::GL_obj::lime_gl_bind_framebuffer(tmp29,tmp31);
			}
		}
		HX_STACK_LINE(1720)
		int tmp29 = renderSession1->renderer->width;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1720)
		int tmp30 = renderSession1->renderer->height;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(1720)
		renderer->setViewport((int)0,(int)0,tmp29,tmp30);
		HX_STACK_LINE(1722)
		renderSession1->renderer->transparent = renderTransparent;
		HX_STACK_LINE(1724)
		{
			HX_STACK_LINE(1724)
			bool tmp31 = renderSession1->renderer->transparent;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1724)
			::lime::graphics::opengl::GL_obj::lime_gl_color_mask(true,true,true,tmp31);
		}
		HX_STACK_LINE(1726)
		this->__usingFramebuffer = true;
		HX_STACK_LINE(1728)
		::lime::graphics::Image tmp31 = this->__image;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(1728)
		bool tmp32 = (tmp31 != null());		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(1728)
		if ((tmp32)){
			HX_STACK_LINE(1730)
			::lime::graphics::Image tmp33 = this->__image;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1730)
			tmp33->dirty = false;
			HX_STACK_LINE(1731)
			::lime::graphics::Image tmp34 = this->__image;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1731)
			tmp34->set_premultiplied(true);
		}
		HX_STACK_LINE(1735)
		this->__createUVs();
		HX_STACK_LINE(1736)
		this->__isValid = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC12(BitmapData_obj,__drawGL,(void))

Void BitmapData_obj::__flipMatrix( ::openfl::geom::Matrix m){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__flipMatrix",0x69774899,"openfl.display.BitmapData.__flipMatrix","openfl/display/BitmapData.hx",1741,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m,"m")
		HX_STACK_LINE(1743)
		Float tx = m->tx;		HX_STACK_VAR(tx,"tx");
		HX_STACK_LINE(1744)
		Float ty = m->ty;		HX_STACK_VAR(ty,"ty");
		HX_STACK_LINE(1745)
		m->tx = (int)0;
		HX_STACK_LINE(1746)
		m->ty = (int)0;
		HX_STACK_LINE(1747)
		m->scale((int)1,(int)-1);
		HX_STACK_LINE(1748)
		int tmp = this->height;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1748)
		m->translate((int)0,tmp);
		HX_STACK_LINE(1749)
		hx::AddEq(m->tx,tx);
		HX_STACK_LINE(1750)
		hx::SubEq(m->ty,ty);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__flipMatrix,(void))

Void BitmapData_obj::__fromBase64( ::String base64,::String type,Dynamic onload){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__fromBase64",0xceedce64,"openfl.display.BitmapData.__fromBase64","openfl/display/BitmapData.hx",1762,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(base64,"base64")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_LINE(1762)
		::openfl::display::BitmapData _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1764)
		::String tmp = base64;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1764)
		::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::openfl::display::BitmapData,_g,Dynamic,onload)
		int __ArgCount() const { return 1; }
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/display/BitmapData.hx",1764,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(1766)
				::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1766)
				_g->__fromImage(tmp2);
				HX_STACK_LINE(1768)
				bool tmp3 = (onload != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1768)
				if ((tmp3)){
					HX_STACK_LINE(1770)
					::openfl::display::BitmapData tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1770)
					onload(tmp4).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(1764)
		::lime::graphics::Image_obj::fromBase64(tmp,tmp1, Dynamic(new _Function_1_1(_g,onload)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,__fromBase64,(void))

Void BitmapData_obj::__fromBytes( ::lime::utils::ByteArray bytes,::lime::utils::ByteArray rawAlpha,Dynamic onload){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__fromBytes",0xdad6e936,"openfl.display.BitmapData.__fromBytes","openfl/display/BitmapData.hx",1779,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(rawAlpha,"rawAlpha")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_LINE(1779)
		::openfl::display::BitmapData _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1781)
		::lime::utils::ByteArray tmp = bytes;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,::openfl::display::BitmapData,_g,Dynamic,onload,::lime::utils::ByteArray,rawAlpha)
		int __ArgCount() const { return 1; }
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/display/BitmapData.hx",1781,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(1783)
				::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1783)
				_g->__fromImage(tmp1);
				HX_STACK_LINE(1785)
				bool tmp2 = (rawAlpha != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1785)
				if ((tmp2)){
					HX_STACK_LINE(1792)
					::lime::graphics::ImageBuffer tmp3 = _g->__image->buffer;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1792)
					::lime::utils::UInt8Array data = tmp3->data;		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(1794)
					{
						HX_STACK_LINE(1794)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(1794)
						int _g1 = rawAlpha->length;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1794)
						while((true)){
							HX_STACK_LINE(1794)
							bool tmp4 = (_g2 < _g1);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(1794)
							bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(1794)
							if ((tmp5)){
								HX_STACK_LINE(1794)
								break;
							}
							HX_STACK_LINE(1794)
							int tmp6 = (_g2)++;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1794)
							int i = tmp6;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(1796)
							::lime::utils::UInt8Array tmp7 = data;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1796)
							int tmp8 = (i * (int)4);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1796)
							int tmp9 = (tmp8 + (int)3);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1796)
							bool tmp10 = (rawAlpha->position < rawAlpha->length);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1796)
							int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1796)
							if ((tmp10)){
								HX_STACK_LINE(1796)
								int tmp12 = (rawAlpha->position)++;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1796)
								int pos = tmp12;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(1796)
								tmp11 = rawAlpha->b->__get(pos);
							}
							else{
								HX_STACK_LINE(1796)
								tmp11 = rawAlpha->ThrowEOFi();
							}
							HX_STACK_LINE(1796)
							hx::__ArrayImplRef(tmp7,tmp9) = tmp11;
						}
					}
					HX_STACK_LINE(1800)
					_g->__image->dirty = true;
				}
				HX_STACK_LINE(1804)
				bool tmp3 = (onload != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1804)
				if ((tmp3)){
					HX_STACK_LINE(1806)
					::openfl::display::BitmapData tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1806)
					onload(tmp4).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(1781)
		::lime::graphics::Image_obj::fromBytes(tmp, Dynamic(new _Function_1_1(_g,onload,rawAlpha)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,__fromBytes,(void))

Void BitmapData_obj::__fromFile( ::String path,Dynamic onload,Dynamic onerror){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__fromFile",0x3aae5011,"openfl.display.BitmapData.__fromFile","openfl/display/BitmapData.hx",1815,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_ARG(onerror,"onerror")
		HX_STACK_LINE(1815)
		::openfl::display::BitmapData _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1817)
		::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1827)
		Dynamic tmp1 = onerror;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::openfl::display::BitmapData,_g,Dynamic,onload)
		int __ArgCount() const { return 1; }
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/display/BitmapData.hx",1817,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(1819)
				::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1819)
				_g->__fromImage(tmp2);
				HX_STACK_LINE(1821)
				bool tmp3 = (onload != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1821)
				if ((tmp3)){
					HX_STACK_LINE(1823)
					::openfl::display::BitmapData tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1823)
					onload(tmp4).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(1817)
		::lime::graphics::Image_obj::fromFile(tmp, Dynamic(new _Function_1_1(_g,onload)),tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,__fromFile,(void))

Void BitmapData_obj::__fromImage( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__fromImage",0xdaa80026,"openfl.display.BitmapData.__fromImage","openfl/display/BitmapData.hx",1832,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(1834)
		this->__image = image;
		HX_STACK_LINE(1836)
		this->width = image->width;
		HX_STACK_LINE(1837)
		this->height = image->height;
		HX_STACK_LINE(1838)
		::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,image->width,image->height);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1838)
		this->rect = tmp;
		HX_STACK_LINE(1839)
		this->__isValid = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__fromImage,(void))

Void BitmapData_obj::__renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderCairo",0x87dae327,"openfl.display.BitmapData.__renderCairo","openfl/display/BitmapData.hx",1844,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1846)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1846)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1846)
		if ((tmp1)){
			HX_STACK_LINE(1846)
			return null();
		}
		HX_STACK_LINE(1848)
		::lime::graphics::cairo::Cairo cairo = renderSession->cairo;		HX_STACK_VAR(cairo,"cairo");
		HX_STACK_LINE(1850)
		::openfl::geom::Matrix tmp2 = this->__worldTransform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1850)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1850)
		if ((tmp3)){
			HX_STACK_LINE(1850)
			::openfl::geom::Matrix tmp4 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1850)
			this->__worldTransform = tmp4;
		}
		HX_STACK_LINE(1853)
		::openfl::geom::Matrix tmp4 = this->__worldTransform;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1853)
		::openfl::geom::Matrix transform = tmp4;		HX_STACK_VAR(transform,"transform");
		HX_STACK_LINE(1855)
		bool tmp5 = renderSession->roundPixels;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1855)
		if ((tmp5)){
			HX_STACK_LINE(1857)
			::lime::math::Matrix3 tmp6 = transform->__toMatrix3();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1857)
			::lime::math::Matrix3 matrix = tmp6;		HX_STACK_VAR(matrix,"matrix");
			HX_STACK_LINE(1858)
			Float tmp7 = matrix->tx;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1858)
			int tmp8 = ::Math_obj::round(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1858)
			matrix->tx = tmp8;
			HX_STACK_LINE(1859)
			Float tmp9 = matrix->ty;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1859)
			int tmp10 = ::Math_obj::round(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1859)
			matrix->ty = tmp10;
			HX_STACK_LINE(1860)
			::lime::math::Matrix3 tmp11 = matrix;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1860)
			cairo->set_matrix(tmp11);
		}
		else{
			HX_STACK_LINE(1865)
			::lime::math::Matrix3 tmp6 = transform->__toMatrix3();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1865)
			cairo->set_matrix(tmp6);
		}
		HX_STACK_LINE(1870)
		Dynamic tmp6 = this->getSurface(null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1870)
		Dynamic surface = tmp6;		HX_STACK_VAR(surface,"surface");
		HX_STACK_LINE(1872)
		bool tmp7 = (surface != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1872)
		if ((tmp7)){
			HX_STACK_LINE(1874)
			Dynamic tmp8 = surface;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1874)
			cairo->setSourceSurface(tmp8,(int)0,(int)0);
			HX_STACK_LINE(1875)
			cairo->paint();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderCairo,(void))

Void BitmapData_obj::__renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderCairoMask",0x1a586fb3,"openfl.display.BitmapData.__renderCairoMask","openfl/display/BitmapData.hx",1882,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderCairoMask,(void))

Void BitmapData_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderCanvas",0x5afced59,"openfl.display.BitmapData.__renderCanvas","openfl/display/BitmapData.hx",1889,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderCanvas,(void))

Void BitmapData_obj::__renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderCanvasMask",0xf2507ae5,"openfl.display.BitmapData.__renderCanvasMask","openfl/display/BitmapData.hx",1919,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderCanvasMask,(void))

Void BitmapData_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderGL",0x4c025e06,"openfl.display.BitmapData.__renderGL","openfl/display/BitmapData.hx",1926,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1928)
		::openfl::geom::Matrix tmp = this->__worldTransform;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1928)
		::openfl::geom::ColorTransform tmp1 = this->__worldColorTransform;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1928)
		::openfl::geom::ColorTransform tmp2 = this->__worldColorTransform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1928)
		Float tmp3 = tmp2->alphaMultiplier;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1928)
		::openfl::display::BlendMode tmp4 = this->__blendMode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1928)
		renderSession->spriteBatch->renderBitmapData(hx::ObjectPtr<OBJ_>(this),false,tmp,tmp1,tmp3,tmp4,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderGL,(void))

Void BitmapData_obj::__sync( ){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__sync",0x0b374be6,"openfl.display.BitmapData.__sync","openfl/display/BitmapData.hx",1933,0xdd12d5b9)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,__sync,(void))

Void BitmapData_obj::__updateChildren( bool transformOnly){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__updateChildren",0xeaaf19b3,"openfl.display.BitmapData.__updateChildren","openfl/display/BitmapData.hx",1996,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__updateChildren,(void))

Void BitmapData_obj::__updateMask( ::openfl::display::Graphics maskGraphics){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__updateMask",0x378cf760,"openfl.display.BitmapData.__updateMask","openfl/display/BitmapData.hx",2003,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(maskGraphics,"maskGraphics")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__updateMask,(void))

Dynamic BitmapData_obj::__supportsBGRA;

::openfl::display::BitmapData BitmapData_obj::fromBase64( ::String base64,::String type,Dynamic onload){
	HX_STACK_FRAME("openfl.display.BitmapData","fromBase64",0x8e5a4284,"openfl.display.BitmapData.fromBase64","openfl/display/BitmapData.hx",670,0xdd12d5b9)
	HX_STACK_ARG(base64,"base64")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_LINE(672)
	::openfl::display::BitmapData tmp = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,true,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(672)
	::openfl::display::BitmapData bitmapData = tmp;		HX_STACK_VAR(bitmapData,"bitmapData");
	HX_STACK_LINE(673)
	{
		HX_STACK_LINE(673)
		Dynamic onload1 = onload;		HX_STACK_VAR(onload1,"onload1");
		HX_STACK_LINE(673)
		::openfl::display::BitmapData _g = bitmapData;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(673)
		::String tmp1 = base64;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(673)
		::String tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::openfl::display::BitmapData,_g,Dynamic,onload1)
		int __ArgCount() const { return 1; }
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/BitmapData.hx",673,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(673)
				::lime::graphics::Image tmp3 = image;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(673)
				_g->__fromImage(tmp3);
				HX_STACK_LINE(673)
				bool tmp4 = (onload1 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(673)
				if ((tmp4)){
					HX_STACK_LINE(673)
					::openfl::display::BitmapData tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(673)
					onload1(tmp5).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(673)
		::lime::graphics::Image_obj::fromBase64(tmp1,tmp2, Dynamic(new _Function_2_1(_g,onload1)));
	}
	HX_STACK_LINE(674)
	::openfl::display::BitmapData tmp1 = bitmapData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(674)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,fromBase64,return )

::openfl::display::BitmapData BitmapData_obj::fromBytes( ::lime::utils::ByteArray bytes,::lime::utils::ByteArray rawAlpha,Dynamic onload){
	HX_STACK_FRAME("openfl.display.BitmapData","fromBytes",0x062c5916,"openfl.display.BitmapData.fromBytes","openfl/display/BitmapData.hx",679,0xdd12d5b9)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(rawAlpha,"rawAlpha")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_LINE(681)
	::openfl::display::BitmapData tmp = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,true,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(681)
	::openfl::display::BitmapData bitmapData = tmp;		HX_STACK_VAR(bitmapData,"bitmapData");
	HX_STACK_LINE(682)
	{
		HX_STACK_LINE(682)
		::lime::utils::ByteArray rawAlpha1 = rawAlpha;		HX_STACK_VAR(rawAlpha1,"rawAlpha1");
		HX_STACK_LINE(682)
		Dynamic onload1 = onload;		HX_STACK_VAR(onload1,"onload1");
		HX_STACK_LINE(682)
		::openfl::display::BitmapData _g = bitmapData;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(682)
		::lime::utils::ByteArray tmp1 = bytes;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_2_1,::lime::utils::ByteArray,rawAlpha1,::openfl::display::BitmapData,_g,Dynamic,onload1)
		int __ArgCount() const { return 1; }
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/BitmapData.hx",682,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(682)
				::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(682)
				_g->__fromImage(tmp2);
				HX_STACK_LINE(682)
				bool tmp3 = (rawAlpha1 != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(682)
				if ((tmp3)){
					HX_STACK_LINE(682)
					::lime::graphics::ImageBuffer tmp4 = _g->__image->buffer;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(682)
					::lime::utils::UInt8Array data = tmp4->data;		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(682)
					{
						HX_STACK_LINE(682)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(682)
						int _g1 = rawAlpha1->length;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(682)
						while((true)){
							HX_STACK_LINE(682)
							bool tmp5 = (_g2 < _g1);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(682)
							bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(682)
							if ((tmp6)){
								HX_STACK_LINE(682)
								break;
							}
							HX_STACK_LINE(682)
							int tmp7 = (_g2)++;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(682)
							int i = tmp7;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(682)
							::lime::utils::UInt8Array tmp8 = data;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(682)
							int tmp9 = (i * (int)4);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(682)
							int tmp10 = (tmp9 + (int)3);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(682)
							bool tmp11 = (rawAlpha1->position < rawAlpha1->length);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(682)
							int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(682)
							if ((tmp11)){
								HX_STACK_LINE(682)
								int tmp13 = (rawAlpha1->position)++;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(682)
								int pos = tmp13;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(682)
								tmp12 = rawAlpha1->b->__get(pos);
							}
							else{
								HX_STACK_LINE(682)
								tmp12 = rawAlpha1->ThrowEOFi();
							}
							HX_STACK_LINE(682)
							hx::__ArrayImplRef(tmp8,tmp10) = tmp12;
						}
					}
					HX_STACK_LINE(682)
					_g->__image->dirty = true;
				}
				HX_STACK_LINE(682)
				bool tmp4 = (onload1 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(682)
				if ((tmp4)){
					HX_STACK_LINE(682)
					::openfl::display::BitmapData tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(682)
					onload1(tmp5).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(682)
		::lime::graphics::Image_obj::fromBytes(tmp1, Dynamic(new _Function_2_1(rawAlpha1,_g,onload1)));
	}
	HX_STACK_LINE(683)
	::openfl::display::BitmapData tmp1 = bitmapData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(683)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,fromBytes,return )

::openfl::display::BitmapData BitmapData_obj::fromFile( ::String path,Dynamic onload,Dynamic onerror){
	HX_STACK_FRAME("openfl.display.BitmapData","fromFile",0xca5f7c31,"openfl.display.BitmapData.fromFile","openfl/display/BitmapData.hx",700,0xdd12d5b9)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_ARG(onerror,"onerror")
	HX_STACK_LINE(702)
	::openfl::display::BitmapData tmp = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,true,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(702)
	::openfl::display::BitmapData bitmapData = tmp;		HX_STACK_VAR(bitmapData,"bitmapData");
	HX_STACK_LINE(703)
	::String tmp1 = path;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(703)
	Dynamic tmp2 = onload;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(703)
	Dynamic tmp3 = onerror;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(703)
	bitmapData->__fromFile(tmp1,tmp2,tmp3);
	HX_STACK_LINE(704)
	::openfl::display::BitmapData tmp4 = bitmapData;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(704)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,fromFile,return )

::openfl::display::BitmapData BitmapData_obj::fromImage( ::lime::graphics::Image image,hx::Null< bool >  __o_transparent){
bool transparent = __o_transparent.Default(true);
	HX_STACK_FRAME("openfl.display.BitmapData","fromImage",0x05fd7006,"openfl.display.BitmapData.fromImage","openfl/display/BitmapData.hx",709,0xdd12d5b9)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(transparent,"transparent")
{
		HX_STACK_LINE(711)
		::openfl::display::BitmapData tmp = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,transparent,null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(711)
		::openfl::display::BitmapData bitmapData = tmp;		HX_STACK_VAR(bitmapData,"bitmapData");
		HX_STACK_LINE(712)
		::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(712)
		bitmapData->__fromImage(tmp1);
		HX_STACK_LINE(713)
		bool tmp2 = transparent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(713)
		bitmapData->__image->set_transparent(tmp2);
		HX_STACK_LINE(714)
		::openfl::display::BitmapData tmp3 = bitmapData;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(714)
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,fromImage,return )

int BitmapData_obj::__flipPixel( int pixel){
	HX_STACK_FRAME("openfl.display.BitmapData","__flipPixel",0xc245472e,"openfl.display.BitmapData.__flipPixel","openfl/display/BitmapData.hx",1755,0xdd12d5b9)
	HX_STACK_ARG(pixel,"pixel")
	HX_STACK_LINE(1757)
	int tmp = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1757)
	int tmp1 = (int(tmp) << int((int)24));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1757)
	int tmp2 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1757)
	int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1757)
	int tmp4 = (int(tmp3) << int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1757)
	int tmp5 = (int(tmp1) | int(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1757)
	int tmp6 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1757)
	int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1757)
	int tmp8 = (int(tmp7) << int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1757)
	int tmp9 = (int(tmp5) | int(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1757)
	int tmp10 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1757)
	int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1757)
	int tmp12 = (int(tmp9) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1757)
	return tmp12;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__flipPixel,return )

int BitmapData_obj::__ucompare( int n1,int n2){
	HX_STACK_FRAME("openfl.display.BitmapData","__ucompare",0x409df3db,"openfl.display.BitmapData.__ucompare","openfl/display/BitmapData.hx",1942,0xdd12d5b9)
	HX_STACK_ARG(n1,"n1")
	HX_STACK_ARG(n2,"n2")
	HX_STACK_LINE(1944)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1945)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1947)
	int tmp = (int(n1) >> int((int)24));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1947)
	int tmp3 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1947)
	tmp1 = tmp3;
	HX_STACK_LINE(1948)
	int tmp4 = (int(n2) >> int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1948)
	int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1948)
	tmp2 = tmp5;
	HX_STACK_LINE(1950)
	bool tmp6 = (tmp1 != tmp2);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1950)
	if ((tmp6)){
		HX_STACK_LINE(1952)
		bool tmp7 = (tmp1 > tmp2);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1952)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1952)
		if ((tmp7)){
			HX_STACK_LINE(1952)
			tmp8 = (int)1;
		}
		else{
			HX_STACK_LINE(1952)
			tmp8 = (int)-1;
		}
		HX_STACK_LINE(1952)
		return tmp8;
	}
	else{
		HX_STACK_LINE(1956)
		int tmp7 = (int(n1) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1956)
		int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1956)
		tmp1 = tmp8;
		HX_STACK_LINE(1957)
		int tmp9 = (int(n2) >> int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1957)
		int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1957)
		tmp2 = tmp10;
		HX_STACK_LINE(1959)
		bool tmp11 = (tmp1 != tmp2);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1959)
		if ((tmp11)){
			HX_STACK_LINE(1961)
			bool tmp12 = (tmp1 > tmp2);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1961)
			int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1961)
			if ((tmp12)){
				HX_STACK_LINE(1961)
				tmp13 = (int)1;
			}
			else{
				HX_STACK_LINE(1961)
				tmp13 = (int)-1;
			}
			HX_STACK_LINE(1961)
			return tmp13;
		}
		else{
			HX_STACK_LINE(1965)
			int tmp12 = (int(n1) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1965)
			int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1965)
			tmp1 = tmp13;
			HX_STACK_LINE(1966)
			int tmp14 = (int(n2) >> int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1966)
			int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1966)
			tmp2 = tmp15;
			HX_STACK_LINE(1968)
			bool tmp16 = (tmp1 != tmp2);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1968)
			if ((tmp16)){
				HX_STACK_LINE(1970)
				bool tmp17 = (tmp1 > tmp2);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1970)
				int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1970)
				if ((tmp17)){
					HX_STACK_LINE(1970)
					tmp18 = (int)1;
				}
				else{
					HX_STACK_LINE(1970)
					tmp18 = (int)-1;
				}
				HX_STACK_LINE(1970)
				return tmp18;
			}
			else{
				HX_STACK_LINE(1974)
				int tmp17 = (int(n1) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1974)
				tmp1 = tmp17;
				HX_STACK_LINE(1975)
				int tmp18 = (int(n2) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1975)
				tmp2 = tmp18;
				HX_STACK_LINE(1977)
				bool tmp19 = (tmp1 != tmp2);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1977)
				if ((tmp19)){
					HX_STACK_LINE(1979)
					bool tmp20 = (tmp1 > tmp2);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1979)
					int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1979)
					if ((tmp20)){
						HX_STACK_LINE(1979)
						tmp21 = (int)1;
					}
					else{
						HX_STACK_LINE(1979)
						tmp21 = (int)-1;
					}
					HX_STACK_LINE(1979)
					return tmp21;
				}
				else{
					HX_STACK_LINE(1983)
					return (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(1950)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,__ucompare,return )


BitmapData_obj::BitmapData_obj()
{
}

void BitmapData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapData);
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(transparent,"transparent");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(__worldTransform,"__worldTransform");
	HX_MARK_MEMBER_NAME(__worldColorTransform,"__worldColorTransform");
	HX_MARK_MEMBER_NAME(__cacheAsBitmap,"__cacheAsBitmap");
	HX_MARK_MEMBER_NAME(__bgra,"__bgra");
	HX_MARK_MEMBER_NAME(__blendMode,"__blendMode");
	HX_MARK_MEMBER_NAME(__buffer,"__buffer");
	HX_MARK_MEMBER_NAME(__image,"__image");
	HX_MARK_MEMBER_NAME(__isValid,"__isValid");
	HX_MARK_MEMBER_NAME(__surface,"__surface");
	HX_MARK_MEMBER_NAME(__surfaceImage,"__surfaceImage");
	HX_MARK_MEMBER_NAME(__texture,"__texture");
	HX_MARK_MEMBER_NAME(__textureImage,"__textureImage");
	HX_MARK_MEMBER_NAME(__framebuffer,"__framebuffer");
	HX_MARK_MEMBER_NAME(__uvData,"__uvData");
	HX_MARK_MEMBER_NAME(__usingFramebuffer,"__usingFramebuffer");
	HX_MARK_END_CLASS();
}

void BitmapData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(transparent,"transparent");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(__worldTransform,"__worldTransform");
	HX_VISIT_MEMBER_NAME(__worldColorTransform,"__worldColorTransform");
	HX_VISIT_MEMBER_NAME(__cacheAsBitmap,"__cacheAsBitmap");
	HX_VISIT_MEMBER_NAME(__bgra,"__bgra");
	HX_VISIT_MEMBER_NAME(__blendMode,"__blendMode");
	HX_VISIT_MEMBER_NAME(__buffer,"__buffer");
	HX_VISIT_MEMBER_NAME(__image,"__image");
	HX_VISIT_MEMBER_NAME(__isValid,"__isValid");
	HX_VISIT_MEMBER_NAME(__surface,"__surface");
	HX_VISIT_MEMBER_NAME(__surfaceImage,"__surfaceImage");
	HX_VISIT_MEMBER_NAME(__texture,"__texture");
	HX_VISIT_MEMBER_NAME(__textureImage,"__textureImage");
	HX_VISIT_MEMBER_NAME(__framebuffer,"__framebuffer");
	HX_VISIT_MEMBER_NAME(__uvData,"__uvData");
	HX_VISIT_MEMBER_NAME(__usingFramebuffer,"__usingFramebuffer");
}

Dynamic BitmapData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"lock") ) { return lock_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"merge") ) { return merge_dyn(); }
		if (HX_FIELD_EQ(inName,"noise") ) { return noise_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"__bgra") ) { return __bgra; }
		if (HX_FIELD_EQ(inName,"encode") ) { return encode_dyn(); }
		if (HX_FIELD_EQ(inName,"scroll") ) { return scroll_dyn(); }
		if (HX_FIELD_EQ(inName,"unlock") ) { return unlock_dyn(); }
		if (HX_FIELD_EQ(inName,"__sync") ) { return __sync_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__image") ) { return __image; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"hitTest") ) { return hitTest_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__buffer") ) { return __buffer; }
		if (HX_FIELD_EQ(inName,"__uvData") ) { return __uvData; }
		if (HX_FIELD_EQ(inName,"fillRect") ) { return fillRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel") ) { return getPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel") ) { return setPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"__drawGL") ) { return __drawGL_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__isValid") ) { return __isValid; }
		if (HX_FIELD_EQ(inName,"__surface") ) { return __surface; }
		if (HX_FIELD_EQ(inName,"__texture") ) { return __texture; }
		if (HX_FIELD_EQ(inName,"floodFill") ) { return floodFill_dyn(); }
		if (HX_FIELD_EQ(inName,"getBuffer") ) { return getBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixels") ) { return getPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"getVector") ) { return getVector_dyn(); }
		if (HX_FIELD_EQ(inName,"histogram") ) { return histogram_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixels") ) { return setPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"setVector") ) { return setVector_dyn(); }
		if (HX_FIELD_EQ(inName,"threshold") ) { return threshold_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"copyPixels") ) { return copyPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel32") ) { return getPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"getSurface") ) { return getSurface_dyn(); }
		if (HX_FIELD_EQ(inName,"getTexture") ) { return getTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"paletteMap") ) { return paletteMap_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel32") ) { return setPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromFile") ) { return __fromFile_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { return transparent; }
		if (HX_FIELD_EQ(inName,"__blendMode") ) { return __blendMode; }
		if (HX_FIELD_EQ(inName,"applyFilter") ) { return applyFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"copyChannel") ) { return copyChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"perlinNoise") ) { return perlinNoise_dyn(); }
		if (HX_FIELD_EQ(inName,"__createUVs") ) { return __createUVs_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return __fromBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromImage") ) { return __fromImage_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__flipMatrix") ) { return __flipMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromBase64") ) { return __fromBase64_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateMask") ) { return __updateMask_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__framebuffer") ) { return __framebuffer; }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return __renderCairo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__surfaceImage") ) { return __surfaceImage; }
		if (HX_FIELD_EQ(inName,"__textureImage") ) { return __textureImage; }
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return colorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__cacheAsBitmap") ) { return __cacheAsBitmap; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { return __worldTransform; }
		if (HX_FIELD_EQ(inName,"__updateChildren") ) { return __updateChildren_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderCairoMask") ) { return __renderCairoMask_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__usingFramebuffer") ) { return __usingFramebuffer; }
		if (HX_FIELD_EQ(inName,"generateFilterRect") ) { return generateFilterRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getColorBoundsRect") ) { return getColorBoundsRect_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvasMask") ) { return __renderCanvasMask_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { return __worldColorTransform; }
	}
	return super::__Field(inName,inCallProp);
}

bool BitmapData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromImage") ) { outValue = fromImage_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromBase64") ) { outValue = fromBase64_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__ucompare") ) { outValue = __ucompare_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__flipPixel") ) { outValue = __flipPixel_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__supportsBGRA") ) { outValue = __supportsBGRA; return true;  }
	}
	return false;
}

Dynamic BitmapData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__bgra") ) { __bgra=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__image") ) { __image=inValue.Cast< ::lime::graphics::Image >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__buffer") ) { __buffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__uvData") ) { __uvData=inValue.Cast< ::openfl::display::TextureUvs >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__isValid") ) { __isValid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__surface") ) { __surface=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__texture") ) { __texture=inValue.Cast< ::lime::graphics::opengl::GLTexture >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { transparent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__blendMode") ) { __blendMode=inValue.Cast< ::openfl::display::BlendMode >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__framebuffer") ) { __framebuffer=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::FilterTexture >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__surfaceImage") ) { __surfaceImage=inValue.Cast< ::lime::graphics::Image >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textureImage") ) { __textureImage=inValue.Cast< ::lime::graphics::Image >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__cacheAsBitmap") ) { __cacheAsBitmap=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { __worldTransform=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__usingFramebuffer") ) { __usingFramebuffer=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { __worldColorTransform=inValue.Cast< ::openfl::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BitmapData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"__supportsBGRA") ) { __supportsBGRA=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void BitmapData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"));
	outFields->push(HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"));
	outFields->push(HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3"));
	outFields->push(HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1"));
	outFields->push(HX_HCSTRING("__bgra","\xd4","\xd7","\x0d","\xf0"));
	outFields->push(HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a"));
	outFields->push(HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78"));
	outFields->push(HX_HCSTRING("__image","\x3b","\x78","\xc7","\x27"));
	outFields->push(HX_HCSTRING("__isValid","\x92","\x69","\x8c","\x4f"));
	outFields->push(HX_HCSTRING("__surface","\x0d","\xb7","\x97","\xde"));
	outFields->push(HX_HCSTRING("__surfaceImage","\x0e","\x29","\x4b","\xb0"));
	outFields->push(HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20"));
	outFields->push(HX_HCSTRING("__textureImage","\xa0","\x4f","\xc9","\xd6"));
	outFields->push(HX_HCSTRING("__framebuffer","\xcd","\x55","\xc0","\xc2"));
	outFields->push(HX_HCSTRING("__uvData","\x4b","\x98","\x75","\x8e"));
	outFields->push(HX_HCSTRING("__usingFramebuffer","\x29","\x09","\xe9","\x05"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(BitmapData_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(BitmapData_obj,rect),HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,transparent),HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22")},
	{hx::fsInt,(int)offsetof(BitmapData_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(BitmapData_obj,__worldTransform),HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a")},
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(BitmapData_obj,__worldColorTransform),HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,__cacheAsBitmap),HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,__bgra),HX_HCSTRING("__bgra","\xd4","\xd7","\x0d","\xf0")},
	{hx::fsObject /*::openfl::display::BlendMode*/ ,(int)offsetof(BitmapData_obj,__blendMode),HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(BitmapData_obj,__buffer),HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78")},
	{hx::fsObject /*::lime::graphics::Image*/ ,(int)offsetof(BitmapData_obj,__image),HX_HCSTRING("__image","\x3b","\x78","\xc7","\x27")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,__isValid),HX_HCSTRING("__isValid","\x92","\x69","\x8c","\x4f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BitmapData_obj,__surface),HX_HCSTRING("__surface","\x0d","\xb7","\x97","\xde")},
	{hx::fsObject /*::lime::graphics::Image*/ ,(int)offsetof(BitmapData_obj,__surfaceImage),HX_HCSTRING("__surfaceImage","\x0e","\x29","\x4b","\xb0")},
	{hx::fsObject /*::lime::graphics::opengl::GLTexture*/ ,(int)offsetof(BitmapData_obj,__texture),HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20")},
	{hx::fsObject /*::lime::graphics::Image*/ ,(int)offsetof(BitmapData_obj,__textureImage),HX_HCSTRING("__textureImage","\xa0","\x4f","\xc9","\xd6")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::FilterTexture*/ ,(int)offsetof(BitmapData_obj,__framebuffer),HX_HCSTRING("__framebuffer","\xcd","\x55","\xc0","\xc2")},
	{hx::fsObject /*::openfl::display::TextureUvs*/ ,(int)offsetof(BitmapData_obj,__uvData),HX_HCSTRING("__uvData","\x4b","\x98","\x75","\x8e")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,__usingFramebuffer),HX_HCSTRING("__usingFramebuffer","\x29","\x09","\xe9","\x05")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::__supportsBGRA,HX_HCSTRING("__supportsBGRA","\x58","\x53","\x57","\x0f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"),
	HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"),
	HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3"),
	HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1"),
	HX_HCSTRING("__bgra","\xd4","\xd7","\x0d","\xf0"),
	HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a"),
	HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78"),
	HX_HCSTRING("__image","\x3b","\x78","\xc7","\x27"),
	HX_HCSTRING("__isValid","\x92","\x69","\x8c","\x4f"),
	HX_HCSTRING("__surface","\x0d","\xb7","\x97","\xde"),
	HX_HCSTRING("__surfaceImage","\x0e","\x29","\x4b","\xb0"),
	HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20"),
	HX_HCSTRING("__textureImage","\xa0","\x4f","\xc9","\xd6"),
	HX_HCSTRING("__framebuffer","\xcd","\x55","\xc0","\xc2"),
	HX_HCSTRING("__uvData","\x4b","\x98","\x75","\x8e"),
	HX_HCSTRING("__usingFramebuffer","\x29","\x09","\xe9","\x05"),
	HX_HCSTRING("applyFilter","\xc6","\xdf","\x2f","\xc1"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),
	HX_HCSTRING("copyChannel","\x8e","\x7d","\xe6","\x22"),
	HX_HCSTRING("copyPixels","\xc2","\x54","\x6e","\x42"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	HX_HCSTRING("fillRect","\x47","\x45","\xb9","\x6c"),
	HX_HCSTRING("floodFill","\x61","\x83","\x8a","\x59"),
	HX_HCSTRING("generateFilterRect","\x91","\x2c","\x98","\x7e"),
	HX_HCSTRING("getBuffer","\x36","\x46","\xeb","\x4c"),
	HX_HCSTRING("getColorBoundsRect","\x86","\xad","\xe8","\x80"),
	HX_HCSTRING("getPixel","\x10","\xd6","\x7a","\x22"),
	HX_HCSTRING("getPixel32","\xaf","\xa6","\x68","\xd7"),
	HX_HCSTRING("getPixels","\x63","\x78","\x00","\x09"),
	HX_HCSTRING("getSurface","\x37","\xec","\xaa","\xac"),
	HX_HCSTRING("getTexture","\xe5","\x4e","\x42","\xee"),
	HX_HCSTRING("getVector","\xf9","\x39","\xb4","\x13"),
	HX_HCSTRING("histogram","\xa4","\xde","\x33","\x65"),
	HX_HCSTRING("hitTest","\x45","\x60","\x7f","\xe2"),
	HX_HCSTRING("lock","\xeb","\x9b","\xb7","\x47"),
	HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"),
	HX_HCSTRING("noise","\x9a","\x8f","\xc2","\x9f"),
	HX_HCSTRING("paletteMap","\xe1","\xae","\x2b","\x06"),
	HX_HCSTRING("perlinNoise","\x66","\x84","\xf8","\x8b"),
	HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47"),
	HX_HCSTRING("setPixel","\x84","\x2f","\xd8","\xd0"),
	HX_HCSTRING("setPixel32","\x23","\x45","\xe6","\xda"),
	HX_HCSTRING("setPixels","\x6f","\x64","\x51","\xec"),
	HX_HCSTRING("setVector","\x05","\x26","\x05","\xf7"),
	HX_HCSTRING("threshold","\xab","\xc3","\xa3","\x34"),
	HX_HCSTRING("unlock","\xc4","\xa2","\x8c","\x65"),
	HX_HCSTRING("__createUVs","\x56","\x32","\x13","\x78"),
	HX_HCSTRING("__drawGL","\x49","\xde","\x05","\x88"),
	HX_HCSTRING("__flipMatrix","\xee","\xf7","\x88","\x6b"),
	HX_HCSTRING("__fromBase64","\xb9","\x7d","\xff","\xd0"),
	HX_HCSTRING("__fromBytes","\x81","\x3b","\x4d","\xa0"),
	HX_HCSTRING("__fromFile","\x26","\x10","\xc0","\x44"),
	HX_HCSTRING("__fromImage","\x71","\x52","\x1e","\xa0"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCairoMask","\x3e","\x0c","\x22","\x6b"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderCanvasMask","\xfa","\xd7","\xef","\x51"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__sync","\x7b","\x1d","\x58","\xfb"),
	HX_HCSTRING("__updateChildren","\x88","\x97","\xd3","\xd9"),
	HX_HCSTRING("__updateMask","\xb5","\xa6","\x9e","\x39"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapData_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BitmapData_obj::__supportsBGRA,"__supportsBGRA");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapData_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::__supportsBGRA,"__supportsBGRA");
};

#endif

hx::Class BitmapData_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__supportsBGRA","\x58","\x53","\x57","\x0f"),
	HX_HCSTRING("fromBase64","\x99","\x02","\x6c","\x98"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("fromFile","\x06","\x9d","\x87","\xa1"),
	HX_HCSTRING("fromImage","\x91","\x09","\xf2","\x71"),
	HX_HCSTRING("__flipPixel","\x79","\x99","\xbb","\x87"),
	HX_HCSTRING("__ucompare","\xf0","\xb3","\xaf","\x4a"),
	::String(null()) };

void BitmapData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.BitmapData","\xa3","\x12","\x41","\x9a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BitmapData_obj::__GetStatic;
	__mClass->mSetStaticField = &BitmapData_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BitmapData_obj >;
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
} // end namespace display

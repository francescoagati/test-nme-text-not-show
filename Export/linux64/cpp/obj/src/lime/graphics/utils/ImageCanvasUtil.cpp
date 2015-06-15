#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_lime_graphics_utils_ImageCanvasUtil
#include <lime/graphics/utils/ImageCanvasUtil.h>
#endif
#ifndef INCLUDED_lime_graphics_utils_ImageDataUtil
#include <lime/graphics/utils/ImageDataUtil.h>
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
namespace lime{
namespace graphics{
namespace utils{

Void ImageCanvasUtil_obj::__construct()
{
	return null();
}

//ImageCanvasUtil_obj::~ImageCanvasUtil_obj() { }

Dynamic ImageCanvasUtil_obj::__CreateEmpty() { return  new ImageCanvasUtil_obj; }
hx::ObjectPtr< ImageCanvasUtil_obj > ImageCanvasUtil_obj::__new()
{  hx::ObjectPtr< ImageCanvasUtil_obj > _result_ = new ImageCanvasUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic ImageCanvasUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ImageCanvasUtil_obj > _result_ = new ImageCanvasUtil_obj();
	_result_->__construct();
	return _result_;}

Void ImageCanvasUtil_obj::colorTransform( ::lime::graphics::Image image,::lime::math::Rectangle rect,::lime::utils::Float32Array colorMatrix){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","colorTransform",0x478efac9,"lime.graphics.utils.ImageCanvasUtil.colorTransform","lime/graphics/utils/ImageCanvasUtil.hx",24,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(colorMatrix,"colorMatrix")
		HX_STACK_LINE(26)
		::lime::graphics::Image tmp = image;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(26)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp);
		HX_STACK_LINE(27)
		::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp1);
		HX_STACK_LINE(29)
		::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(29)
		::lime::math::Rectangle tmp3 = rect;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(29)
		::lime::utils::Float32Array tmp4 = colorMatrix;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(29)
		::lime::graphics::utils::ImageDataUtil_obj::colorTransform(tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageCanvasUtil_obj,colorTransform,(void))

Void ImageCanvasUtil_obj::convertToCanvas( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","convertToCanvas",0x7fd81686,"lime.graphics.utils.ImageCanvasUtil.convertToCanvas","lime/graphics/utils/ImageCanvasUtil.hx",34,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(36)
		::lime::graphics::ImageBuffer buffer = image->buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(38)
		bool tmp = (buffer->__srcImage != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		if ((tmp)){
			HX_STACK_LINE(40)
			bool tmp1 = (buffer->__srcCanvas == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(40)
			if ((tmp1)){
				HX_STACK_LINE(42)
				::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(42)
				::lime::graphics::utils::ImageCanvasUtil_obj::createCanvas(tmp2,buffer->__srcImage->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),buffer->__srcImage->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ));
				HX_STACK_LINE(43)
				buffer->__srcContext->__Field(HX_HCSTRING("drawImage","\xb7","\x54","\x74","\x85"), hx::paccDynamic )(buffer->__srcImage,(int)0,(int)0);
			}
			HX_STACK_LINE(47)
			buffer->__srcImage = null();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageCanvasUtil_obj,convertToCanvas,(void))

Void ImageCanvasUtil_obj::convertToData( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","convertToData",0x2b8bb058,"lime.graphics.utils.ImageCanvasUtil.convertToData","lime/graphics/utils/ImageCanvasUtil.hx",54,0x78efca71)
		HX_STACK_ARG(image,"image")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageCanvasUtil_obj,convertToData,(void))

Void ImageCanvasUtil_obj::copyChannel( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::ImageChannel sourceChannel,::lime::graphics::ImageChannel destChannel){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","copyChannel",0xbd2cd24e,"lime.graphics.utils.ImageCanvasUtil.copyChannel","lime/graphics/utils/ImageCanvasUtil.hx",72,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(sourceChannel,"sourceChannel")
		HX_STACK_ARG(destChannel,"destChannel")
		HX_STACK_LINE(74)
		::lime::graphics::Image tmp = sourceImage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(74)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp);
		HX_STACK_LINE(75)
		::lime::graphics::Image tmp1 = sourceImage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(75)
		::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp1);
		HX_STACK_LINE(76)
		::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(76)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp2);
		HX_STACK_LINE(77)
		::lime::graphics::Image tmp3 = image;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(77)
		::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp3);
		HX_STACK_LINE(79)
		::lime::graphics::Image tmp4 = image;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(79)
		::lime::graphics::Image tmp5 = sourceImage;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(79)
		::lime::math::Rectangle tmp6 = sourceRect;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(79)
		::lime::math::Vector2 tmp7 = destPoint;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(79)
		::lime::graphics::ImageChannel tmp8 = sourceChannel;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(79)
		::lime::graphics::ImageChannel tmp9 = destChannel;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(79)
		::lime::graphics::utils::ImageDataUtil_obj::copyChannel(tmp4,tmp5,tmp6,tmp7,tmp8,tmp9);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ImageCanvasUtil_obj,copyChannel,(void))

Void ImageCanvasUtil_obj::copyPixels( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::Image alphaImage,::lime::math::Vector2 alphaPoint,hx::Null< bool >  __o_mergeAlpha){
bool mergeAlpha = __o_mergeAlpha.Default(false);
	HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","copyPixels",0xbf1ad802,"lime.graphics.utils.ImageCanvasUtil.copyPixels","lime/graphics/utils/ImageCanvasUtil.hx",84,0x78efca71)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(sourceImage,"sourceImage")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(alphaImage,"alphaImage")
	HX_STACK_ARG(alphaPoint,"alphaPoint")
	HX_STACK_ARG(mergeAlpha,"mergeAlpha")
{
		HX_STACK_LINE(86)
		bool tmp = (alphaImage != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(86)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(86)
		if ((tmp)){
			HX_STACK_LINE(86)
			tmp1 = alphaImage->get_transparent();
		}
		else{
			HX_STACK_LINE(86)
			tmp1 = false;
		}
		HX_STACK_LINE(86)
		if ((tmp1)){
			HX_STACK_LINE(88)
			bool tmp2 = (alphaPoint == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(88)
			if ((tmp2)){
				HX_STACK_LINE(88)
				::lime::math::Vector2 tmp3 = ::lime::math::Vector2_obj::__new(null(),null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(88)
				alphaPoint = tmp3;
			}
			HX_STACK_LINE(92)
			::lime::graphics::Image tmp3 = image->clone();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(92)
			::lime::graphics::Image tempData = tmp3;		HX_STACK_VAR(tempData,"tempData");
			HX_STACK_LINE(93)
			::lime::graphics::Image tmp4 = alphaImage;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(93)
			::lime::math::Rectangle tmp5 = ::lime::math::Rectangle_obj::__new(alphaPoint->x,alphaPoint->y,sourceRect->width,sourceRect->height);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(93)
			::lime::math::Vector2 tmp6 = ::lime::math::Vector2_obj::__new(sourceRect->x,sourceRect->y);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(93)
			tempData->copyChannel(tmp4,tmp5,tmp6,::lime::graphics::ImageChannel_obj::ALPHA,::lime::graphics::ImageChannel_obj::ALPHA);
			HX_STACK_LINE(94)
			sourceImage = tempData;
		}
		HX_STACK_LINE(98)
		::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(98)
		::lime::graphics::utils::ImageCanvasUtil_obj::sync(tmp2);
		HX_STACK_LINE(100)
		bool tmp3 = mergeAlpha;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(100)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(100)
		if ((tmp4)){
			HX_STACK_LINE(102)
			bool tmp5 = image->get_transparent();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(102)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(102)
			if ((tmp5)){
				HX_STACK_LINE(102)
				tmp6 = sourceImage->get_transparent();
			}
			else{
				HX_STACK_LINE(102)
				tmp6 = false;
			}
			HX_STACK_LINE(102)
			if ((tmp6)){
				HX_STACK_LINE(104)
				Dynamic tmp7 = image->buffer->__srcContext;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(104)
				tmp7->__Field(HX_HCSTRING("clearRect","\x51","\x35","\x68","\xbf"), hx::paccDynamic )((destPoint->x + image->offsetX),(destPoint->y + image->offsetY),(sourceRect->width + image->offsetX),(sourceRect->height + image->offsetY));
			}
		}
		HX_STACK_LINE(110)
		::lime::graphics::Image tmp5 = sourceImage;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(110)
		::lime::graphics::utils::ImageCanvasUtil_obj::sync(tmp5);
		HX_STACK_LINE(112)
		Dynamic tmp6 = sourceImage->buffer->get_src();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(112)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(112)
		if ((tmp7)){
			HX_STACK_LINE(114)
			Dynamic tmp8 = image->buffer->__srcContext;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(114)
			Float tmp9 = (sourceRect->x + sourceImage->offsetX);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(114)
			Float tmp10 = (sourceRect->y + sourceImage->offsetY);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(114)
			Float tmp11 = sourceRect->width;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(114)
			Float tmp12 = sourceRect->height;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(114)
			Float tmp13 = (destPoint->x + image->offsetX);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(114)
			Float tmp14 = (destPoint->y + image->offsetY);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(114)
			Float tmp15 = sourceRect->width;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(114)
			Float tmp16 = sourceRect->height;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(114)
			tmp8->__Field(HX_HCSTRING("drawImage","\xb7","\x54","\x74","\x85"), hx::paccDynamic )(sourceImage->buffer->get_src(),::Std_obj::_int(tmp9),::Std_obj::_int(tmp10),::Std_obj::_int(tmp11),::Std_obj::_int(tmp12),::Std_obj::_int(tmp13),::Std_obj::_int(tmp14),::Std_obj::_int(tmp15),::Std_obj::_int(tmp16));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(ImageCanvasUtil_obj,copyPixels,(void))

Void ImageCanvasUtil_obj::createCanvas( ::lime::graphics::Image image,int width,int height){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","createCanvas",0x3ddb6834,"lime.graphics.utils.ImageCanvasUtil.createCanvas","lime/graphics/utils/ImageCanvasUtil.hx",121,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageCanvasUtil_obj,createCanvas,(void))

Void ImageCanvasUtil_obj::createImageData( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","createImageData",0x307c5949,"lime.graphics.utils.ImageCanvasUtil.createImageData","lime/graphics/utils/ImageCanvasUtil.hx",153,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(155)
		::lime::graphics::ImageBuffer buffer = image->buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(157)
		bool tmp = (buffer->data == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(157)
		if ((tmp)){
			HX_STACK_LINE(159)
			Dynamic tmp1 = buffer->__srcContext->__Field(HX_HCSTRING("getImageData","\xaf","\x87","\xee","\x33"), hx::paccDynamic )((int)0,(int)0,buffer->width,buffer->height);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(159)
			buffer->__srcImageData = tmp1;
			HX_STACK_LINE(160)
			::lime::utils::UInt8Array tmp2 = ::lime::utils::UInt8Array_obj::__new(buffer->__srcImageData->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"), hx::paccDynamic ),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(160)
			buffer->data = tmp2;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageCanvasUtil_obj,createImageData,(void))

Void ImageCanvasUtil_obj::fillRect( ::lime::graphics::Image image,::lime::math::Rectangle rect,int color,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","fillRect",0x8e427887,"lime.graphics.utils.ImageCanvasUtil.fillRect","lime/graphics/utils/ImageCanvasUtil.hx",167,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(169)
		::lime::graphics::Image tmp = image;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(169)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp);
		HX_STACK_LINE(170)
		::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(170)
		::lime::graphics::utils::ImageCanvasUtil_obj::sync(tmp1);
		HX_STACK_LINE(172)
		bool tmp2 = (rect->x == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(172)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(172)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(172)
		if ((tmp3)){
			HX_STACK_LINE(172)
			tmp4 = (rect->y == (int)0);
		}
		else{
			HX_STACK_LINE(172)
			tmp4 = false;
		}
		HX_STACK_LINE(172)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(172)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(172)
		if ((tmp5)){
			HX_STACK_LINE(172)
			tmp6 = (rect->width == image->width);
		}
		else{
			HX_STACK_LINE(172)
			tmp6 = false;
		}
		HX_STACK_LINE(172)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(172)
		if ((tmp6)){
			HX_STACK_LINE(172)
			tmp7 = (rect->height == image->height);
		}
		else{
			HX_STACK_LINE(172)
			tmp7 = false;
		}
		HX_STACK_LINE(172)
		if ((tmp7)){
			HX_STACK_LINE(174)
			bool tmp8 = image->get_transparent();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(174)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(174)
			if ((tmp8)){
				HX_STACK_LINE(174)
				int tmp10 = (int(color) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(174)
				int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(174)
				tmp9 = (tmp11 == (int)0);
			}
			else{
				HX_STACK_LINE(174)
				tmp9 = false;
			}
			HX_STACK_LINE(174)
			if ((tmp9)){
				HX_STACK_LINE(176)
				int tmp10 = image->buffer->width;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(176)
				Dynamic tmp11 = image->buffer->__srcCanvas;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(176)
				tmp11->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = tmp10;
				HX_STACK_LINE(177)
				return null();
			}
		}
		HX_STACK_LINE(183)
		int r;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(183)
		int g;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(183)
		int b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(183)
		int a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(185)
		bool tmp8 = (format == (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(185)
		if ((tmp8)){
			HX_STACK_LINE(187)
			int tmp9 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(187)
			int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(187)
			r = tmp10;
			HX_STACK_LINE(188)
			int tmp11 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(188)
			int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(188)
			g = tmp12;
			HX_STACK_LINE(189)
			int tmp13 = (int(color) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(189)
			b = tmp13;
			HX_STACK_LINE(190)
			bool tmp14 = image->get_transparent();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(190)
			int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(190)
			if ((tmp14)){
				HX_STACK_LINE(190)
				int tmp16 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(190)
				tmp15 = (int(tmp16) & int((int)255));
			}
			else{
				HX_STACK_LINE(190)
				tmp15 = (int)255;
			}
			HX_STACK_LINE(190)
			a = tmp15;
		}
		else{
			HX_STACK_LINE(194)
			int tmp9 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(194)
			int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(194)
			r = tmp10;
			HX_STACK_LINE(195)
			int tmp11 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(195)
			int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(195)
			g = tmp12;
			HX_STACK_LINE(196)
			int tmp13 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(196)
			int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(196)
			b = tmp14;
			HX_STACK_LINE(197)
			bool tmp15 = image->get_transparent();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(197)
			int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(197)
			if ((tmp15)){
				HX_STACK_LINE(197)
				tmp16 = (int(color) & int((int)255));
			}
			else{
				HX_STACK_LINE(197)
				tmp16 = (int)255;
			}
			HX_STACK_LINE(197)
			a = tmp16;
		}
		HX_STACK_LINE(201)
		::String tmp9 = (HX_HCSTRING("rgba(","\xf4","\xcc","\x0d","\xe8") + r);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(201)
		::String tmp10 = (tmp9 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(201)
		int tmp11 = g;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(201)
		::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(201)
		::String tmp13 = (tmp12 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(201)
		int tmp14 = b;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(201)
		::String tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(201)
		::String tmp16 = (tmp15 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(201)
		Float tmp17 = (Float(a) / Float((int)255));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(201)
		::String tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(201)
		::String tmp19 = (tmp18 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(201)
		Dynamic tmp20 = image->buffer->__srcContext;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(201)
		tmp20->__FieldRef(HX_HCSTRING("fillStyle","\xae","\xcb","\xc4","\x52")) = tmp19;
		HX_STACK_LINE(202)
		Dynamic tmp21 = image->buffer->__srcContext;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(202)
		tmp21->__Field(HX_HCSTRING("fillRect","\x47","\x45","\xb9","\x6c"), hx::paccDynamic )((rect->x + image->offsetX),(rect->y + image->offsetY),(rect->width + image->offsetX),(rect->height + image->offsetY));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageCanvasUtil_obj,fillRect,(void))

Void ImageCanvasUtil_obj::floodFill( ::lime::graphics::Image image,int x,int y,int color,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","floodFill",0x900e2821,"lime.graphics.utils.ImageCanvasUtil.floodFill","lime/graphics/utils/ImageCanvasUtil.hx",207,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(209)
		::lime::graphics::Image tmp = image;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(209)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp);
		HX_STACK_LINE(210)
		::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(210)
		::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp1);
		HX_STACK_LINE(212)
		::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(212)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(212)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(212)
		int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(212)
		int tmp6 = format;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(212)
		::lime::graphics::utils::ImageDataUtil_obj::floodFill(tmp2,tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageCanvasUtil_obj,floodFill,(void))

int ImageCanvasUtil_obj::getPixel( ::lime::graphics::Image image,int x,int y,int format){
	HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","getPixel",0x44040950,"lime.graphics.utils.ImageCanvasUtil.getPixel","lime/graphics/utils/ImageCanvasUtil.hx",217,0x78efca71)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(219)
	::lime::graphics::Image tmp = image;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(219)
	::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp);
	HX_STACK_LINE(220)
	::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(220)
	::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp1);
	HX_STACK_LINE(222)
	::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(222)
	int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(222)
	int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(222)
	int tmp5 = format;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(222)
	int tmp6 = ::lime::graphics::utils::ImageDataUtil_obj::getPixel(tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(222)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageCanvasUtil_obj,getPixel,return )

int ImageCanvasUtil_obj::getPixel32( ::lime::graphics::Image image,int x,int y,int format){
	HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","getPixel32",0x541529ef,"lime.graphics.utils.ImageCanvasUtil.getPixel32","lime/graphics/utils/ImageCanvasUtil.hx",227,0x78efca71)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(229)
	::lime::graphics::Image tmp = image;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(229)
	::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp);
	HX_STACK_LINE(230)
	::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(230)
	::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp1);
	HX_STACK_LINE(232)
	::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(232)
	int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(232)
	int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(232)
	int tmp5 = format;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(232)
	int tmp6 = ::lime::graphics::utils::ImageDataUtil_obj::getPixel32(tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(232)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageCanvasUtil_obj,getPixel32,return )

::lime::utils::ByteArray ImageCanvasUtil_obj::getPixels( ::lime::graphics::Image image,::lime::math::Rectangle rect,int format){
	HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","getPixels",0x3f841d23,"lime.graphics.utils.ImageCanvasUtil.getPixels","lime/graphics/utils/ImageCanvasUtil.hx",237,0x78efca71)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(239)
	::lime::graphics::Image tmp = image;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(239)
	::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp);
	HX_STACK_LINE(240)
	::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(240)
	::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp1);
	HX_STACK_LINE(242)
	::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(242)
	::lime::math::Rectangle tmp3 = rect;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(242)
	int tmp4 = format;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(242)
	::lime::utils::ByteArray tmp5 = ::lime::graphics::utils::ImageDataUtil_obj::getPixels(tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(242)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageCanvasUtil_obj,getPixels,return )

Void ImageCanvasUtil_obj::merge( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","merge",0x36e8e778,"lime.graphics.utils.ImageCanvasUtil.merge","lime/graphics/utils/ImageCanvasUtil.hx",247,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redMultiplier,"redMultiplier")
		HX_STACK_ARG(greenMultiplier,"greenMultiplier")
		HX_STACK_ARG(blueMultiplier,"blueMultiplier")
		HX_STACK_ARG(alphaMultiplier,"alphaMultiplier")
		HX_STACK_LINE(249)
		::lime::graphics::Image tmp = sourceImage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(249)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp);
		HX_STACK_LINE(250)
		::lime::graphics::Image tmp1 = sourceImage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(250)
		::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp1);
		HX_STACK_LINE(251)
		::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(251)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp2);
		HX_STACK_LINE(252)
		::lime::graphics::Image tmp3 = image;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(252)
		::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp3);
		HX_STACK_LINE(254)
		::lime::graphics::Image tmp4 = image;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(254)
		::lime::graphics::Image tmp5 = sourceImage;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(254)
		::lime::math::Rectangle tmp6 = sourceRect;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(254)
		::lime::math::Vector2 tmp7 = destPoint;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(254)
		int tmp8 = redMultiplier;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(254)
		int tmp9 = greenMultiplier;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(254)
		int tmp10 = blueMultiplier;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(254)
		int tmp11 = alphaMultiplier;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(254)
		::lime::graphics::utils::ImageDataUtil_obj::merge(tmp4,tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,tmp11);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(ImageCanvasUtil_obj,merge,(void))

Void ImageCanvasUtil_obj::resize( ::lime::graphics::Image image,int newWidth,int newHeight){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","resize",0xd5553d34,"lime.graphics.utils.ImageCanvasUtil.resize","lime/graphics/utils/ImageCanvasUtil.hx",259,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(newWidth,"newWidth")
		HX_STACK_ARG(newHeight,"newHeight")
		HX_STACK_LINE(261)
		::lime::graphics::ImageBuffer buffer = image->buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(263)
		bool tmp = (buffer->__srcCanvas == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(263)
		if ((tmp)){
			HX_STACK_LINE(265)
			::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(265)
			int tmp2 = newWidth;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(265)
			int tmp3 = newHeight;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(265)
			::lime::graphics::utils::ImageCanvasUtil_obj::createCanvas(tmp1,tmp2,tmp3);
			HX_STACK_LINE(266)
			buffer->__srcContext->__Field(HX_HCSTRING("drawImage","\xb7","\x54","\x74","\x85"), hx::paccDynamic )(buffer->get_src(),(int)0,(int)0,newWidth,newHeight);
		}
		else{
			HX_STACK_LINE(270)
			::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(270)
			::lime::graphics::utils::ImageCanvasUtil_obj::sync(tmp1);
			HX_STACK_LINE(271)
			Dynamic sourceCanvas = buffer->__srcCanvas;		HX_STACK_VAR(sourceCanvas,"sourceCanvas");
			HX_STACK_LINE(272)
			buffer->__srcCanvas = null();
			HX_STACK_LINE(273)
			::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(273)
			int tmp3 = newWidth;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(273)
			int tmp4 = newHeight;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(273)
			::lime::graphics::utils::ImageCanvasUtil_obj::createCanvas(tmp2,tmp3,tmp4);
			HX_STACK_LINE(274)
			buffer->__srcContext->__Field(HX_HCSTRING("drawImage","\xb7","\x54","\x74","\x85"), hx::paccDynamic )(sourceCanvas,(int)0,(int)0,newWidth,newHeight);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageCanvasUtil_obj,resize,(void))

Void ImageCanvasUtil_obj::setPixel( ::lime::graphics::Image image,int x,int y,int color,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","setPixel",0xf26162c4,"lime.graphics.utils.ImageCanvasUtil.setPixel","lime/graphics/utils/ImageCanvasUtil.hx",281,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(283)
		::lime::graphics::Image tmp = image;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(283)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp);
		HX_STACK_LINE(284)
		::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(284)
		::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp1);
		HX_STACK_LINE(286)
		::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(286)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(286)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(286)
		int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(286)
		int tmp6 = format;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(286)
		::lime::graphics::utils::ImageDataUtil_obj::setPixel(tmp2,tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageCanvasUtil_obj,setPixel,(void))

Void ImageCanvasUtil_obj::setPixel32( ::lime::graphics::Image image,int x,int y,int color,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","setPixel32",0x5792c863,"lime.graphics.utils.ImageCanvasUtil.setPixel32","lime/graphics/utils/ImageCanvasUtil.hx",291,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(293)
		::lime::graphics::Image tmp = image;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(293)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp);
		HX_STACK_LINE(294)
		::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(294)
		::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp1);
		HX_STACK_LINE(296)
		::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(296)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(296)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(296)
		int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(296)
		int tmp6 = format;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(296)
		::lime::graphics::utils::ImageDataUtil_obj::setPixel32(tmp2,tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageCanvasUtil_obj,setPixel32,(void))

Void ImageCanvasUtil_obj::setPixels( ::lime::graphics::Image image,::lime::math::Rectangle rect,::lime::utils::ByteArray byteArray,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","setPixels",0x22d5092f,"lime.graphics.utils.ImageCanvasUtil.setPixels","lime/graphics/utils/ImageCanvasUtil.hx",301,0x78efca71)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(byteArray,"byteArray")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(303)
		::lime::graphics::Image tmp = image;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(303)
		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(tmp);
		HX_STACK_LINE(304)
		::lime::graphics::Image tmp1 = image;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(304)
		::lime::graphics::utils::ImageCanvasUtil_obj::createImageData(tmp1);
		HX_STACK_LINE(306)
		::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(306)
		::lime::math::Rectangle tmp3 = rect;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(306)
		::lime::utils::ByteArray tmp4 = byteArray;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(306)
		int tmp5 = format;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(306)
		::lime::graphics::utils::ImageDataUtil_obj::setPixels(tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageCanvasUtil_obj,setPixels,(void))

Void ImageCanvasUtil_obj::sync( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageCanvasUtil","sync",0x85fe4d9b,"lime.graphics.utils.ImageCanvasUtil.sync","lime/graphics/utils/ImageCanvasUtil.hx",311,0x78efca71)
		HX_STACK_ARG(image,"image")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageCanvasUtil_obj,sync,(void))


ImageCanvasUtil_obj::ImageCanvasUtil_obj()
{
}

bool ImageCanvasUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"sync") ) { outValue = sync_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"merge") ) { outValue = merge_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { outValue = resize_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fillRect") ) { outValue = fillRect_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getPixel") ) { outValue = getPixel_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setPixel") ) { outValue = setPixel_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"floodFill") ) { outValue = floodFill_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getPixels") ) { outValue = getPixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setPixels") ) { outValue = setPixels_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"copyPixels") ) { outValue = copyPixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getPixel32") ) { outValue = getPixel32_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setPixel32") ) { outValue = setPixel32_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyChannel") ) { outValue = copyChannel_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createCanvas") ) { outValue = createCanvas_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"convertToData") ) { outValue = convertToData_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { outValue = colorTransform_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"convertToCanvas") ) { outValue = convertToCanvas_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createImageData") ) { outValue = createImageData_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageCanvasUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageCanvasUtil_obj::__mClass,"__mClass");
};

#endif

hx::Class ImageCanvasUtil_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),
	HX_HCSTRING("convertToCanvas","\xc6","\x61","\xe8","\x14"),
	HX_HCSTRING("convertToData","\x98","\xab","\x76","\xb3"),
	HX_HCSTRING("copyChannel","\x8e","\x7d","\xe6","\x22"),
	HX_HCSTRING("copyPixels","\xc2","\x54","\x6e","\x42"),
	HX_HCSTRING("createCanvas","\xf4","\x94","\x97","\xda"),
	HX_HCSTRING("createImageData","\x89","\xa4","\x8c","\xc5"),
	HX_HCSTRING("fillRect","\x47","\x45","\xb9","\x6c"),
	HX_HCSTRING("floodFill","\x61","\x83","\x8a","\x59"),
	HX_HCSTRING("getPixel","\x10","\xd6","\x7a","\x22"),
	HX_HCSTRING("getPixel32","\xaf","\xa6","\x68","\xd7"),
	HX_HCSTRING("getPixels","\x63","\x78","\x00","\x09"),
	HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("setPixel","\x84","\x2f","\xd8","\xd0"),
	HX_HCSTRING("setPixel32","\x23","\x45","\xe6","\xda"),
	HX_HCSTRING("setPixels","\x6f","\x64","\x51","\xec"),
	HX_HCSTRING("sync","\x5b","\xba","\x5f","\x4c"),
	::String(null()) };

void ImageCanvasUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.utils.ImageCanvasUtil","\x2e","\x95","\x3e","\x53");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ImageCanvasUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ImageCanvasUtil_obj >;
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
} // end namespace utils

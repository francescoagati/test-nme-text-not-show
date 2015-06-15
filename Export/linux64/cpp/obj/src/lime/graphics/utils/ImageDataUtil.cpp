#include <hxcpp.h>

#include "hxMath.h"
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
#ifndef INCLUDED_lime_graphics_utils_ImageDataUtil
#include <lime/graphics/utils/ImageDataUtil.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
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

Void ImageDataUtil_obj::__construct()
{
	return null();
}

//ImageDataUtil_obj::~ImageDataUtil_obj() { }

Dynamic ImageDataUtil_obj::__CreateEmpty() { return  new ImageDataUtil_obj; }
hx::ObjectPtr< ImageDataUtil_obj > ImageDataUtil_obj::__new()
{  hx::ObjectPtr< ImageDataUtil_obj > _result_ = new ImageDataUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic ImageDataUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ImageDataUtil_obj > _result_ = new ImageDataUtil_obj();
	_result_->__construct();
	return _result_;}

void ImageDataUtil_obj::__init__() {
HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","__init__",0xe8f6f8fe,"lime.graphics.utils.ImageDataUtil.__init__","lime/graphics/utils/ImageDataUtil.hx",23,0x494d921f)
{
	HX_STACK_LINE(25)
	Array< int > tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	{
		HX_STACK_LINE(25)
		Array< int > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(25)
		this1 = Array_obj< int >::__new();
		HX_STACK_LINE(25)
		this1->__SetSizeExact((int)256);
		HX_STACK_LINE(25)
		tmp = this1;
	}
	HX_STACK_LINE(25)
	::lime::graphics::utils::ImageDataUtil_obj::__alpha16 = tmp;
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(27)
		while((true)){
			HX_STACK_LINE(27)
			bool tmp1 = (_g < (int)256);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(27)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(27)
			if ((tmp2)){
				HX_STACK_LINE(27)
				break;
			}
			HX_STACK_LINE(27)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(27)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(29)
			{
				HX_STACK_LINE(29)
				int tmp4 = (i * (int)65536);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(29)
				Float tmp5 = (Float(tmp4) / Float((int)255));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(29)
				int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(29)
				int val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(29)
				Array< int > tmp7 = ::lime::graphics::utils::ImageDataUtil_obj::__alpha16;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(29)
				int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(29)
				int tmp9 = val;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(29)
				int tmp10 = tmp7->__unsafe_set(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(29)
				tmp10;
			}
		}
	}
	HX_STACK_LINE(33)
	Array< int > tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	{
		HX_STACK_LINE(33)
		Array< int > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(33)
		this1 = Array_obj< int >::__new();
		HX_STACK_LINE(33)
		this1->__SetSizeExact((int)510);
		HX_STACK_LINE(33)
		tmp1 = this1;
	}
	HX_STACK_LINE(33)
	::lime::graphics::utils::ImageDataUtil_obj::__clamp = tmp1;
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(35)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(35)
		while((true)){
			HX_STACK_LINE(35)
			bool tmp2 = (_g < (int)255);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(35)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(35)
			if ((tmp3)){
				HX_STACK_LINE(35)
				break;
			}
			HX_STACK_LINE(35)
			int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(35)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(37)
			Array< int > tmp5 = ::lime::graphics::utils::ImageDataUtil_obj::__clamp;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(37)
			int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(37)
			int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(37)
			int tmp8 = tmp5->__unsafe_set(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(37)
			tmp8;
		}
	}
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		int _g1 = (int)255;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(41)
		int tmp2 = (int)510;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(41)
		int _g = tmp3;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(41)
		while((true)){
			HX_STACK_LINE(41)
			bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(41)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(41)
			if ((tmp5)){
				HX_STACK_LINE(41)
				break;
			}
			HX_STACK_LINE(41)
			int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(41)
			int i = tmp6;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(43)
			Array< int > tmp7 = ::lime::graphics::utils::ImageDataUtil_obj::__clamp;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(43)
			int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(43)
			int tmp9 = tmp7->__unsafe_set(tmp8,(int)255);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(43)
			tmp9;
		}
	}
}
}

Array< int > ImageDataUtil_obj::__alpha16;

Array< int > ImageDataUtil_obj::__clamp;

Void ImageDataUtil_obj::colorTransform( ::lime::graphics::Image image,::lime::math::Rectangle rect,::lime::utils::Float32Array colorMatrix){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","colorTransform",0x2c17e9b7,"lime.graphics.utils.ImageDataUtil.colorTransform","lime/graphics/utils/ImageDataUtil.hx",50,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(colorMatrix,"colorMatrix")
		HX_STACK_LINE(52)
		::lime::utils::UInt8Array tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		::lime::utils::UInt8Array data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(53)
		bool tmp1 = (data == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(53)
		if ((tmp1)){
			HX_STACK_LINE(53)
			return null();
		}
		HX_STACK_LINE(56)
		bool tmp2 = ::lime::_system::System_obj::disableCFFI;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(56)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(56)
		if ((tmp3)){
			HX_STACK_LINE(56)
			::lime::graphics::Image tmp4 = image;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(56)
			::lime::math::Rectangle tmp5 = rect;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(56)
			::lime::utils::Float32Array tmp6 = colorMatrix;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(56)
			::lime::graphics::utils::ImageDataUtil_obj::lime_image_data_util_color_transform(tmp4,tmp5,tmp6);
		}
		else{
			HX_STACK_LINE(60)
			int tmp4 = image->buffer->width;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(60)
			int tmp5 = (tmp4 * (int)4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(60)
			int stride = tmp5;		HX_STACK_VAR(stride,"stride");
			HX_STACK_LINE(61)
			int offset;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(63)
			Float tmp6 = rect->get_top();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(63)
			int tmp7 = image->offsetY;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(63)
			Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(63)
			int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(63)
			int rowStart = tmp9;		HX_STACK_VAR(rowStart,"rowStart");
			HX_STACK_LINE(64)
			Float tmp10 = rect->get_bottom();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(64)
			int tmp11 = image->offsetY;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(64)
			Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(64)
			int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(64)
			int rowEnd = tmp13;		HX_STACK_VAR(rowEnd,"rowEnd");
			HX_STACK_LINE(65)
			Float tmp14 = rect->get_left();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(65)
			int tmp15 = image->offsetX;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(65)
			Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(65)
			int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(65)
			int columnStart = tmp17;		HX_STACK_VAR(columnStart,"columnStart");
			HX_STACK_LINE(66)
			Float tmp18 = rect->get_right();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(66)
			int tmp19 = image->offsetX;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(66)
			Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(66)
			int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(66)
			int columnEnd = tmp21;		HX_STACK_VAR(columnEnd,"columnEnd");
			HX_STACK_LINE(68)
			int r;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(68)
			int g;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(68)
			int b;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(68)
			int a;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(68)
			int ex = (int)0;		HX_STACK_VAR(ex,"ex");
			HX_STACK_LINE(70)
			{
				HX_STACK_LINE(70)
				int _g = rowStart;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(70)
				while((true)){
					HX_STACK_LINE(70)
					bool tmp22 = (_g < rowEnd);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(70)
					bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(70)
					if ((tmp23)){
						HX_STACK_LINE(70)
						break;
					}
					HX_STACK_LINE(70)
					int tmp24 = (_g)++;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(70)
					int row = tmp24;		HX_STACK_VAR(row,"row");
					HX_STACK_LINE(72)
					{
						HX_STACK_LINE(72)
						int _g1 = columnStart;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(72)
						while((true)){
							HX_STACK_LINE(72)
							bool tmp25 = (_g1 < columnEnd);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(72)
							bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(72)
							if ((tmp26)){
								HX_STACK_LINE(72)
								break;
							}
							HX_STACK_LINE(72)
							int tmp27 = (_g1)++;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(72)
							int column = tmp27;		HX_STACK_VAR(column,"column");
							HX_STACK_LINE(74)
							int tmp28 = (row * stride);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(74)
							int tmp29 = (column * (int)4);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(74)
							int tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(74)
							offset = tmp30;
							HX_STACK_LINE(76)
							::lime::utils::UInt8Array tmp31 = data;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(76)
							int tmp32 = (offset + (int)3);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(76)
							int tmp33 = tmp31->__get(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(76)
							Float tmp34 = colorMatrix->__get((int)18);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(76)
							Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(76)
							Float tmp36 = colorMatrix->__get((int)19);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(76)
							Float tmp37 = (tmp36 * (int)255);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(76)
							Float tmp38 = (tmp35 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(76)
							int tmp39 = ::Std_obj::_int(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(76)
							a = tmp39;
							HX_STACK_LINE(77)
							bool tmp40 = (a > (int)255);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(77)
							int tmp41;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(77)
							if ((tmp40)){
								HX_STACK_LINE(77)
								tmp41 = (a - (int)255);
							}
							else{
								HX_STACK_LINE(77)
								tmp41 = (int)0;
							}
							HX_STACK_LINE(77)
							ex = tmp41;
							HX_STACK_LINE(78)
							::lime::utils::UInt8Array tmp42 = data;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(78)
							int tmp43 = (offset + (int)2);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(78)
							int tmp44 = tmp42->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(78)
							Float tmp45 = colorMatrix->__get((int)12);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(78)
							Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(78)
							Float tmp47 = colorMatrix->__get((int)14);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(78)
							Float tmp48 = (tmp47 * (int)255);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(78)
							Float tmp49 = (tmp46 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(78)
							int tmp50 = ex;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(78)
							Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(78)
							int tmp52 = ::Std_obj::_int(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(78)
							b = tmp52;
							HX_STACK_LINE(79)
							bool tmp53 = (b > (int)255);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(79)
							int tmp54;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(79)
							if ((tmp53)){
								HX_STACK_LINE(79)
								tmp54 = (b - (int)255);
							}
							else{
								HX_STACK_LINE(79)
								tmp54 = (int)0;
							}
							HX_STACK_LINE(79)
							ex = tmp54;
							HX_STACK_LINE(80)
							::lime::utils::UInt8Array tmp55 = data;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(80)
							int tmp56 = (offset + (int)1);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(80)
							int tmp57 = tmp55->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(80)
							Float tmp58 = colorMatrix->__get((int)6);		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(80)
							Float tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(80)
							Float tmp60 = colorMatrix->__get((int)9);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(80)
							Float tmp61 = (tmp60 * (int)255);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(80)
							Float tmp62 = (tmp59 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(80)
							int tmp63 = ex;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(80)
							Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(80)
							int tmp65 = ::Std_obj::_int(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(80)
							g = tmp65;
							HX_STACK_LINE(81)
							bool tmp66 = (g > (int)255);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(81)
							int tmp67;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(81)
							if ((tmp66)){
								HX_STACK_LINE(81)
								tmp67 = (g - (int)255);
							}
							else{
								HX_STACK_LINE(81)
								tmp67 = (int)0;
							}
							HX_STACK_LINE(81)
							ex = tmp67;
							HX_STACK_LINE(82)
							int tmp68 = data->__get(offset);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(82)
							Float tmp69 = colorMatrix->__get((int)0);		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(82)
							Float tmp70 = (tmp68 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(82)
							Float tmp71 = colorMatrix->__get((int)4);		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(82)
							Float tmp72 = (tmp71 * (int)255);		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(82)
							Float tmp73 = (tmp70 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
							HX_STACK_LINE(82)
							int tmp74 = ex;		HX_STACK_VAR(tmp74,"tmp74");
							HX_STACK_LINE(82)
							Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(82)
							int tmp76 = ::Std_obj::_int(tmp75);		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(82)
							r = tmp76;
							HX_STACK_LINE(84)
							bool tmp77 = (r > (int)255);		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(84)
							int tmp78;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(84)
							if ((tmp77)){
								HX_STACK_LINE(84)
								tmp78 = (int)255;
							}
							else{
								HX_STACK_LINE(84)
								tmp78 = r;
							}
							HX_STACK_LINE(84)
							hx::__ArrayImplRef(data,offset) = tmp78;
							HX_STACK_LINE(85)
							::lime::utils::UInt8Array tmp79 = data;		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(85)
							int tmp80 = (offset + (int)1);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(85)
							bool tmp81 = (g > (int)255);		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(85)
							int tmp82;		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(85)
							if ((tmp81)){
								HX_STACK_LINE(85)
								tmp82 = (int)255;
							}
							else{
								HX_STACK_LINE(85)
								tmp82 = g;
							}
							HX_STACK_LINE(85)
							hx::__ArrayImplRef(tmp79,tmp80) = tmp82;
							HX_STACK_LINE(86)
							::lime::utils::UInt8Array tmp83 = data;		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(86)
							int tmp84 = (offset + (int)2);		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(86)
							bool tmp85 = (b > (int)255);		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(86)
							int tmp86;		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(86)
							if ((tmp85)){
								HX_STACK_LINE(86)
								tmp86 = (int)255;
							}
							else{
								HX_STACK_LINE(86)
								tmp86 = b;
							}
							HX_STACK_LINE(86)
							hx::__ArrayImplRef(tmp83,tmp84) = tmp86;
							HX_STACK_LINE(87)
							::lime::utils::UInt8Array tmp87 = data;		HX_STACK_VAR(tmp87,"tmp87");
							HX_STACK_LINE(87)
							int tmp88 = (offset + (int)3);		HX_STACK_VAR(tmp88,"tmp88");
							HX_STACK_LINE(87)
							bool tmp89 = (a > (int)255);		HX_STACK_VAR(tmp89,"tmp89");
							HX_STACK_LINE(87)
							int tmp90;		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(87)
							if ((tmp89)){
								HX_STACK_LINE(87)
								tmp90 = (int)255;
							}
							else{
								HX_STACK_LINE(87)
								tmp90 = a;
							}
							HX_STACK_LINE(87)
							hx::__ArrayImplRef(tmp87,tmp88) = tmp90;
						}
					}
				}
			}
		}
		HX_STACK_LINE(95)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,colorTransform,(void))

Void ImageDataUtil_obj::copyChannel( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::ImageChannel sourceChannel,::lime::graphics::ImageChannel destChannel){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","copyChannel",0xa41162a0,"lime.graphics.utils.ImageDataUtil.copyChannel","lime/graphics/utils/ImageDataUtil.hx",100,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(sourceChannel,"sourceChannel")
		HX_STACK_ARG(destChannel,"destChannel")
		HX_STACK_LINE(102)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(102)
		switch( (int)(destChannel->__Index())){
			case (int)0: {
				HX_STACK_LINE(104)
				tmp = (int)0;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(105)
				tmp = (int)1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(106)
				tmp = (int)2;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(107)
				tmp = (int)3;
			}
			;break;
		}
		HX_STACK_LINE(102)
		int destIdx = tmp;		HX_STACK_VAR(destIdx,"destIdx");
		HX_STACK_LINE(111)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(111)
		switch( (int)(sourceChannel->__Index())){
			case (int)0: {
				HX_STACK_LINE(113)
				tmp1 = (int)0;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(114)
				tmp1 = (int)1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(115)
				tmp1 = (int)2;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(116)
				tmp1 = (int)3;
			}
			;break;
		}
		HX_STACK_LINE(111)
		int srcIdx = tmp1;		HX_STACK_VAR(srcIdx,"srcIdx");
		HX_STACK_LINE(120)
		::lime::utils::UInt8Array tmp2 = sourceImage->buffer->data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(120)
		::lime::utils::UInt8Array srcData = tmp2;		HX_STACK_VAR(srcData,"srcData");
		HX_STACK_LINE(121)
		::lime::utils::UInt8Array tmp3 = image->buffer->data;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(121)
		::lime::utils::UInt8Array destData = tmp3;		HX_STACK_VAR(destData,"destData");
		HX_STACK_LINE(123)
		bool tmp4 = (srcData == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(123)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(123)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(123)
		if ((tmp5)){
			HX_STACK_LINE(123)
			tmp6 = (destData == null());
		}
		else{
			HX_STACK_LINE(123)
			tmp6 = true;
		}
		HX_STACK_LINE(123)
		if ((tmp6)){
			HX_STACK_LINE(123)
			return null();
		}
		HX_STACK_LINE(126)
		bool tmp7 = ::lime::_system::System_obj::disableCFFI;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(126)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(126)
		if ((tmp8)){
			HX_STACK_LINE(126)
			::lime::graphics::Image tmp9 = image;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(126)
			::lime::graphics::Image tmp10 = sourceImage;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(126)
			::lime::math::Rectangle tmp11 = sourceRect;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(126)
			::lime::math::Vector2 tmp12 = destPoint;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(126)
			int tmp13 = srcIdx;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(126)
			int tmp14 = destIdx;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(126)
			::lime::graphics::utils::ImageDataUtil_obj::lime_image_data_util_copy_channel(tmp9,tmp10,tmp11,tmp12,tmp13,tmp14);
		}
		else{
			HX_STACK_LINE(130)
			int tmp9 = sourceImage->buffer->width;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(130)
			int tmp10 = (tmp9 * (int)4);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(130)
			int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(130)
			int srcStride = tmp11;		HX_STACK_VAR(srcStride,"srcStride");
			HX_STACK_LINE(131)
			Float tmp12 = (sourceRect->x + sourceImage->offsetX);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(131)
			Float tmp13 = (tmp12 * (int)4);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(131)
			int tmp14 = srcStride;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(131)
			Float tmp15 = (sourceRect->y + sourceImage->offsetY);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(131)
			Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(131)
			Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(131)
			int tmp18 = srcIdx;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(131)
			Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(131)
			int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(131)
			int srcPosition = tmp20;		HX_STACK_VAR(srcPosition,"srcPosition");
			HX_STACK_LINE(132)
			int tmp21 = srcStride;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(132)
			Float tmp22 = (sourceRect->width + sourceImage->offsetX);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(132)
			Float tmp23 = ((int)4 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(132)
			int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(132)
			int tmp25 = (tmp21 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(132)
			int srcRowOffset = tmp25;		HX_STACK_VAR(srcRowOffset,"srcRowOffset");
			HX_STACK_LINE(133)
			Float tmp26 = (sourceRect->x + sourceImage->offsetX);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(133)
			Float tmp27 = sourceRect->width;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(133)
			Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(133)
			Float tmp29 = ((int)4 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(133)
			int tmp30 = ::Std_obj::_int(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(133)
			int srcRowEnd = tmp30;		HX_STACK_VAR(srcRowEnd,"srcRowEnd");
			HX_STACK_LINE(134)
			::lime::utils::UInt8Array tmp31 = sourceImage->buffer->data;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(134)
			::lime::utils::UInt8Array srcData1 = tmp31;		HX_STACK_VAR(srcData1,"srcData1");
			HX_STACK_LINE(136)
			int tmp32 = image->buffer->width;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(136)
			int tmp33 = (tmp32 * (int)4);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(136)
			int tmp34 = ::Std_obj::_int(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(136)
			int destStride = tmp34;		HX_STACK_VAR(destStride,"destStride");
			HX_STACK_LINE(137)
			Float tmp35 = (destPoint->x + image->offsetX);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(137)
			Float tmp36 = (tmp35 * (int)4);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(137)
			int tmp37 = destStride;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(137)
			Float tmp38 = (destPoint->y + image->offsetY);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(137)
			Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(137)
			Float tmp40 = (tmp36 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(137)
			int tmp41 = destIdx;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(137)
			Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(137)
			int tmp43 = ::Std_obj::_int(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(137)
			int destPosition = tmp43;		HX_STACK_VAR(destPosition,"destPosition");
			HX_STACK_LINE(138)
			int tmp44 = destStride;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(138)
			Float tmp45 = (sourceRect->width + image->offsetX);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(138)
			Float tmp46 = ((int)4 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(138)
			int tmp47 = ::Std_obj::_int(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(138)
			int tmp48 = (tmp44 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(138)
			int destRowOffset = tmp48;		HX_STACK_VAR(destRowOffset,"destRowOffset");
			HX_STACK_LINE(139)
			Float tmp49 = (destPoint->x + image->offsetX);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(139)
			Float tmp50 = sourceRect->width;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(139)
			Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(139)
			Float tmp52 = ((int)4 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(139)
			int tmp53 = ::Std_obj::_int(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(139)
			int destRowEnd = tmp53;		HX_STACK_VAR(destRowEnd,"destRowEnd");
			HX_STACK_LINE(140)
			::lime::utils::UInt8Array tmp54 = image->buffer->data;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(140)
			::lime::utils::UInt8Array destData1 = tmp54;		HX_STACK_VAR(destData1,"destData1");
			HX_STACK_LINE(142)
			Float tmp55 = (sourceRect->width * sourceRect->height);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(142)
			int tmp56 = ::Std_obj::_int(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(142)
			int length = tmp56;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(144)
			{
				HX_STACK_LINE(144)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(144)
				while((true)){
					HX_STACK_LINE(144)
					bool tmp57 = (_g < length);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(144)
					bool tmp58 = !(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(144)
					if ((tmp58)){
						HX_STACK_LINE(144)
						break;
					}
					HX_STACK_LINE(144)
					int tmp59 = (_g)++;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(144)
					int i = tmp59;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(146)
					int tmp60 = srcData1->__get(srcPosition);		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(146)
					hx::__ArrayImplRef(destData1,destPosition) = tmp60;
					HX_STACK_LINE(148)
					hx::AddEq(srcPosition,(int)4);
					HX_STACK_LINE(149)
					hx::AddEq(destPosition,(int)4);
					HX_STACK_LINE(151)
					int tmp61 = hx::Mod(srcPosition,srcStride);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(151)
					int tmp62 = srcRowEnd;		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(151)
					bool tmp63 = (tmp61 > tmp62);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(151)
					if ((tmp63)){
						HX_STACK_LINE(153)
						hx::AddEq(srcPosition,srcRowOffset);
					}
					HX_STACK_LINE(157)
					int tmp64 = hx::Mod(destPosition,destStride);		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(157)
					int tmp65 = destRowEnd;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(157)
					bool tmp66 = (tmp64 > tmp65);		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(157)
					if ((tmp66)){
						HX_STACK_LINE(159)
						hx::AddEq(destPosition,destRowOffset);
					}
				}
			}
		}
		HX_STACK_LINE(167)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ImageDataUtil_obj,copyChannel,(void))

Void ImageDataUtil_obj::copyPixels( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::Image alphaImage,::lime::math::Vector2 alphaPoint,hx::Null< bool >  __o_mergeAlpha){
bool mergeAlpha = __o_mergeAlpha.Default(false);
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","copyPixels",0x95aa37f0,"lime.graphics.utils.ImageDataUtil.copyPixels","lime/graphics/utils/ImageDataUtil.hx",172,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(sourceImage,"sourceImage")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(alphaImage,"alphaImage")
	HX_STACK_ARG(alphaPoint,"alphaPoint")
	HX_STACK_ARG(mergeAlpha,"mergeAlpha")
{
		HX_STACK_LINE(174)
		bool tmp = (alphaImage != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(174)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(174)
		if ((tmp)){
			HX_STACK_LINE(174)
			tmp1 = alphaImage->get_transparent();
		}
		else{
			HX_STACK_LINE(174)
			tmp1 = false;
		}
		HX_STACK_LINE(174)
		if ((tmp1)){
			HX_STACK_LINE(176)
			bool tmp2 = (alphaPoint == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(176)
			if ((tmp2)){
				HX_STACK_LINE(176)
				::lime::math::Vector2 tmp3 = ::lime::math::Vector2_obj::__new(null(),null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(176)
				alphaPoint = tmp3;
			}
			HX_STACK_LINE(180)
			::lime::graphics::Image tmp3 = image->clone();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(180)
			::lime::graphics::Image tempData = tmp3;		HX_STACK_VAR(tempData,"tempData");
			HX_STACK_LINE(181)
			::lime::graphics::Image tmp4 = alphaImage;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(181)
			::lime::math::Rectangle tmp5 = ::lime::math::Rectangle_obj::__new(alphaPoint->x,alphaPoint->y,sourceRect->width,sourceRect->height);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(181)
			::lime::math::Vector2 tmp6 = ::lime::math::Vector2_obj::__new(sourceRect->x,sourceRect->y);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(181)
			tempData->copyChannel(tmp4,tmp5,tmp6,::lime::graphics::ImageChannel_obj::ALPHA,::lime::graphics::ImageChannel_obj::ALPHA);
			HX_STACK_LINE(182)
			sourceImage = tempData;
		}
		HX_STACK_LINE(187)
		bool tmp2 = ::lime::_system::System_obj::disableCFFI;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(187)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(187)
		if ((tmp3)){
			HX_STACK_LINE(187)
			::lime::graphics::Image tmp4 = image;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(187)
			::lime::graphics::Image tmp5 = sourceImage;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(187)
			::lime::math::Rectangle tmp6 = sourceRect;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(187)
			::lime::math::Vector2 tmp7 = destPoint;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(187)
			bool tmp8 = mergeAlpha;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(187)
			::lime::graphics::utils::ImageDataUtil_obj::lime_image_data_util_copy_pixels(tmp4,tmp5,tmp6,tmp7,tmp8);
		}
		else{
			HX_STACK_LINE(191)
			Float tmp4 = (destPoint->y + image->offsetY);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(191)
			Float tmp5 = sourceRect->y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(191)
			Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(191)
			int tmp7 = sourceImage->offsetY;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(191)
			Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(191)
			int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(191)
			int rowOffset = tmp9;		HX_STACK_VAR(rowOffset,"rowOffset");
			HX_STACK_LINE(192)
			Float tmp10 = (destPoint->x + image->offsetX);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(192)
			Float tmp11 = sourceRect->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(192)
			Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(192)
			int tmp13 = sourceImage->offsetY;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(192)
			Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(192)
			int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(192)
			int columnOffset = tmp15;		HX_STACK_VAR(columnOffset,"columnOffset");
			HX_STACK_LINE(194)
			::lime::utils::UInt8Array tmp16 = sourceImage->buffer->data;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(194)
			::lime::utils::UInt8Array sourceData = tmp16;		HX_STACK_VAR(sourceData,"sourceData");
			HX_STACK_LINE(195)
			int tmp17 = sourceImage->buffer->width;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(195)
			int tmp18 = (tmp17 * (int)4);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(195)
			int sourceStride = tmp18;		HX_STACK_VAR(sourceStride,"sourceStride");
			HX_STACK_LINE(196)
			int sourceOffset = (int)0;		HX_STACK_VAR(sourceOffset,"sourceOffset");
			HX_STACK_LINE(198)
			::lime::utils::UInt8Array tmp19 = image->buffer->data;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(198)
			::lime::utils::UInt8Array data = tmp19;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(199)
			int tmp20 = image->buffer->width;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(199)
			int tmp21 = (tmp20 * (int)4);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(199)
			int stride = tmp21;		HX_STACK_VAR(stride,"stride");
			HX_STACK_LINE(200)
			int offset = (int)0;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(202)
			bool tmp22 = mergeAlpha;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(202)
			bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(202)
			bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(202)
			bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(202)
			bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(202)
			if ((tmp25)){
				HX_STACK_LINE(202)
				bool tmp27 = sourceImage->get_transparent();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(202)
				bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(202)
				bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(202)
				tmp26 = !(tmp29);
			}
			else{
				HX_STACK_LINE(202)
				tmp26 = true;
			}
			HX_STACK_LINE(202)
			if ((tmp26)){
				HX_STACK_LINE(213)
				Float tmp27 = sourceRect->get_top();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(213)
				int tmp28 = sourceImage->offsetY;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(213)
				Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(213)
				int tmp30 = ::Std_obj::_int(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(213)
				int _g1 = tmp30;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(213)
				Float tmp31 = sourceRect->get_bottom();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(213)
				int tmp32 = sourceImage->offsetY;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(213)
				Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(213)
				int tmp34 = ::Std_obj::_int(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(213)
				int _g = tmp34;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(213)
				while((true)){
					HX_STACK_LINE(213)
					bool tmp35 = (_g1 < _g);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(213)
					bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(213)
					if ((tmp36)){
						HX_STACK_LINE(213)
						break;
					}
					HX_STACK_LINE(213)
					int tmp37 = (_g1)++;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(213)
					int row = tmp37;		HX_STACK_VAR(row,"row");
					HX_STACK_LINE(215)
					{
						HX_STACK_LINE(215)
						Float tmp38 = sourceRect->get_left();		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(215)
						int tmp39 = sourceImage->offsetX;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(215)
						Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(215)
						int tmp41 = ::Std_obj::_int(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(215)
						int _g3 = tmp41;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(215)
						Float tmp42 = sourceRect->get_right();		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(215)
						int tmp43 = sourceImage->offsetX;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(215)
						Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(215)
						int tmp45 = ::Std_obj::_int(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(215)
						int _g2 = tmp45;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(215)
						while((true)){
							HX_STACK_LINE(215)
							bool tmp46 = (_g3 < _g2);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(215)
							bool tmp47 = !(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(215)
							if ((tmp47)){
								HX_STACK_LINE(215)
								break;
							}
							HX_STACK_LINE(215)
							int tmp48 = (_g3)++;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(215)
							int column = tmp48;		HX_STACK_VAR(column,"column");
							HX_STACK_LINE(217)
							int tmp49 = (row * sourceStride);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(217)
							int tmp50 = (column * (int)4);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(217)
							int tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(217)
							sourceOffset = tmp51;
							HX_STACK_LINE(218)
							int tmp52 = (row + rowOffset);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(218)
							int tmp53 = stride;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(218)
							int tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(218)
							int tmp55 = (column + columnOffset);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(218)
							int tmp56 = (tmp55 * (int)4);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(218)
							int tmp57 = (tmp54 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(218)
							offset = tmp57;
							HX_STACK_LINE(220)
							int tmp58 = sourceData->__get(sourceOffset);		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(220)
							hx::__ArrayImplRef(data,offset) = tmp58;
							HX_STACK_LINE(221)
							::lime::utils::UInt8Array tmp59 = data;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(221)
							int tmp60 = (offset + (int)1);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(221)
							::lime::utils::UInt8Array tmp61 = sourceData;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(221)
							int tmp62 = (sourceOffset + (int)1);		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(221)
							int tmp63 = tmp61->__get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(221)
							hx::__ArrayImplRef(tmp59,tmp60) = tmp63;
							HX_STACK_LINE(222)
							::lime::utils::UInt8Array tmp64 = data;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(222)
							int tmp65 = (offset + (int)2);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(222)
							::lime::utils::UInt8Array tmp66 = sourceData;		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(222)
							int tmp67 = (sourceOffset + (int)2);		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(222)
							int tmp68 = tmp66->__get(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(222)
							hx::__ArrayImplRef(tmp64,tmp65) = tmp68;
							HX_STACK_LINE(223)
							::lime::utils::UInt8Array tmp69 = data;		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(223)
							int tmp70 = (offset + (int)3);		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(223)
							::lime::utils::UInt8Array tmp71 = sourceData;		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(223)
							int tmp72 = (sourceOffset + (int)3);		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(223)
							int tmp73 = tmp71->__get(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
							HX_STACK_LINE(223)
							hx::__ArrayImplRef(tmp69,tmp70) = tmp73;
						}
					}
				}
			}
			else{
				HX_STACK_LINE(231)
				Float sourceAlpha;		HX_STACK_VAR(sourceAlpha,"sourceAlpha");
				HX_STACK_LINE(232)
				Float destAlpha;		HX_STACK_VAR(destAlpha,"destAlpha");
				HX_STACK_LINE(233)
				Float outA;		HX_STACK_VAR(outA,"outA");
				HX_STACK_LINE(234)
				Float oneMinusSourceAlpha;		HX_STACK_VAR(oneMinusSourceAlpha,"oneMinusSourceAlpha");
				HX_STACK_LINE(236)
				{
					HX_STACK_LINE(236)
					Float tmp27 = sourceRect->get_top();		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(236)
					int tmp28 = sourceImage->offsetY;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(236)
					Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(236)
					int tmp30 = ::Std_obj::_int(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(236)
					int _g1 = tmp30;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(236)
					Float tmp31 = sourceRect->get_bottom();		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(236)
					int tmp32 = sourceImage->offsetY;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(236)
					Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(236)
					int tmp34 = ::Std_obj::_int(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(236)
					int _g = tmp34;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(236)
					while((true)){
						HX_STACK_LINE(236)
						bool tmp35 = (_g1 < _g);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(236)
						bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(236)
						if ((tmp36)){
							HX_STACK_LINE(236)
							break;
						}
						HX_STACK_LINE(236)
						int tmp37 = (_g1)++;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(236)
						int row = tmp37;		HX_STACK_VAR(row,"row");
						HX_STACK_LINE(238)
						{
							HX_STACK_LINE(238)
							Float tmp38 = sourceRect->get_left();		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(238)
							int tmp39 = sourceImage->offsetX;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(238)
							Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(238)
							int tmp41 = ::Std_obj::_int(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(238)
							int _g3 = tmp41;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(238)
							Float tmp42 = sourceRect->get_right();		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(238)
							int tmp43 = sourceImage->offsetX;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(238)
							Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(238)
							int tmp45 = ::Std_obj::_int(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(238)
							int _g2 = tmp45;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(238)
							while((true)){
								HX_STACK_LINE(238)
								bool tmp46 = (_g3 < _g2);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(238)
								bool tmp47 = !(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(238)
								if ((tmp47)){
									HX_STACK_LINE(238)
									break;
								}
								HX_STACK_LINE(238)
								int tmp48 = (_g3)++;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(238)
								int column = tmp48;		HX_STACK_VAR(column,"column");
								HX_STACK_LINE(240)
								int tmp49 = (row * sourceStride);		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(240)
								int tmp50 = (column * (int)4);		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(240)
								int tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(240)
								sourceOffset = tmp51;
								HX_STACK_LINE(241)
								int tmp52 = (row + rowOffset);		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(241)
								int tmp53 = stride;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(241)
								int tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(241)
								int tmp55 = (column + columnOffset);		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(241)
								int tmp56 = (tmp55 * (int)4);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(241)
								int tmp57 = (tmp54 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(241)
								offset = tmp57;
								HX_STACK_LINE(243)
								::lime::utils::UInt8Array tmp58 = sourceData;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(243)
								int tmp59 = (sourceOffset + (int)3);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(243)
								int tmp60 = tmp58->__get(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(243)
								Float tmp61 = (Float(tmp60) / Float(((Float)255.0)));		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(243)
								sourceAlpha = tmp61;
								HX_STACK_LINE(244)
								::lime::utils::UInt8Array tmp62 = data;		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(244)
								int tmp63 = (offset + (int)3);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(244)
								int tmp64 = tmp62->__get(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(244)
								Float tmp65 = (Float(tmp64) / Float(((Float)255.0)));		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(244)
								destAlpha = tmp65;
								HX_STACK_LINE(245)
								Float tmp66 = ((int)1 - sourceAlpha);		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(245)
								oneMinusSourceAlpha = tmp66;
								HX_STACK_LINE(247)
								Float tmp67 = sourceAlpha;		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(247)
								Float tmp68 = (destAlpha * oneMinusSourceAlpha);		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(247)
								Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(247)
								outA = tmp69;
								HX_STACK_LINE(248)
								::lime::utils::UInt8Array tmp70 = data;		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(248)
								int tmp71 = offset;		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(248)
								int tmp72;		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(248)
								{
									HX_STACK_LINE(248)
									int tmp73 = sourceData->__get(sourceOffset);		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(248)
									Float tmp74 = sourceAlpha;		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(248)
									Float tmp75 = (tmp73 * tmp74);		HX_STACK_VAR(tmp75,"tmp75");
									HX_STACK_LINE(248)
									int tmp76 = data->__get(offset);		HX_STACK_VAR(tmp76,"tmp76");
									HX_STACK_LINE(248)
									Float tmp77 = destAlpha;		HX_STACK_VAR(tmp77,"tmp77");
									HX_STACK_LINE(248)
									Float tmp78 = (tmp76 * tmp77);		HX_STACK_VAR(tmp78,"tmp78");
									HX_STACK_LINE(248)
									Float tmp79 = oneMinusSourceAlpha;		HX_STACK_VAR(tmp79,"tmp79");
									HX_STACK_LINE(248)
									Float tmp80 = (tmp78 * tmp79);		HX_STACK_VAR(tmp80,"tmp80");
									HX_STACK_LINE(248)
									Float tmp81 = (tmp75 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(248)
									Float tmp82 = outA;		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(248)
									Float tmp83 = (Float(tmp81) / Float(tmp82));		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(248)
									int tmp84 = ::Math_obj::round(tmp83);		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(248)
									int index = tmp84;		HX_STACK_VAR(index,"index");
									HX_STACK_LINE(248)
									Array< int > tmp85 = ::lime::graphics::utils::ImageDataUtil_obj::__clamp;		HX_STACK_VAR(tmp85,"tmp85");
									HX_STACK_LINE(248)
									int tmp86 = index;		HX_STACK_VAR(tmp86,"tmp86");
									HX_STACK_LINE(248)
									int tmp87 = tmp85->__unsafe_get(tmp86);		HX_STACK_VAR(tmp87,"tmp87");
									HX_STACK_LINE(248)
									tmp72 = tmp87;
								}
								HX_STACK_LINE(248)
								hx::__ArrayImplRef(tmp70,tmp71) = tmp72;
								HX_STACK_LINE(249)
								::lime::utils::UInt8Array tmp73 = data;		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(249)
								int tmp74 = (offset + (int)1);		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(249)
								int tmp75;		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(249)
								{
									HX_STACK_LINE(249)
									::lime::utils::UInt8Array tmp76 = sourceData;		HX_STACK_VAR(tmp76,"tmp76");
									HX_STACK_LINE(249)
									int tmp77 = (sourceOffset + (int)1);		HX_STACK_VAR(tmp77,"tmp77");
									HX_STACK_LINE(249)
									int tmp78 = tmp76->__get(tmp77);		HX_STACK_VAR(tmp78,"tmp78");
									HX_STACK_LINE(249)
									Float tmp79 = sourceAlpha;		HX_STACK_VAR(tmp79,"tmp79");
									HX_STACK_LINE(249)
									Float tmp80 = (tmp78 * tmp79);		HX_STACK_VAR(tmp80,"tmp80");
									HX_STACK_LINE(249)
									::lime::utils::UInt8Array tmp81 = data;		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(249)
									int tmp82 = (offset + (int)1);		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(249)
									int tmp83 = tmp81->__get(tmp82);		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(249)
									Float tmp84 = destAlpha;		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(249)
									Float tmp85 = (tmp83 * tmp84);		HX_STACK_VAR(tmp85,"tmp85");
									HX_STACK_LINE(249)
									Float tmp86 = oneMinusSourceAlpha;		HX_STACK_VAR(tmp86,"tmp86");
									HX_STACK_LINE(249)
									Float tmp87 = (tmp85 * tmp86);		HX_STACK_VAR(tmp87,"tmp87");
									HX_STACK_LINE(249)
									Float tmp88 = (tmp80 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
									HX_STACK_LINE(249)
									Float tmp89 = outA;		HX_STACK_VAR(tmp89,"tmp89");
									HX_STACK_LINE(249)
									Float tmp90 = (Float(tmp88) / Float(tmp89));		HX_STACK_VAR(tmp90,"tmp90");
									HX_STACK_LINE(249)
									int tmp91 = ::Math_obj::round(tmp90);		HX_STACK_VAR(tmp91,"tmp91");
									HX_STACK_LINE(249)
									int index = tmp91;		HX_STACK_VAR(index,"index");
									HX_STACK_LINE(249)
									Array< int > tmp92 = ::lime::graphics::utils::ImageDataUtil_obj::__clamp;		HX_STACK_VAR(tmp92,"tmp92");
									HX_STACK_LINE(249)
									int tmp93 = index;		HX_STACK_VAR(tmp93,"tmp93");
									HX_STACK_LINE(249)
									int tmp94 = tmp92->__unsafe_get(tmp93);		HX_STACK_VAR(tmp94,"tmp94");
									HX_STACK_LINE(249)
									tmp75 = tmp94;
								}
								HX_STACK_LINE(249)
								hx::__ArrayImplRef(tmp73,tmp74) = tmp75;
								HX_STACK_LINE(250)
								::lime::utils::UInt8Array tmp76 = data;		HX_STACK_VAR(tmp76,"tmp76");
								HX_STACK_LINE(250)
								int tmp77 = (offset + (int)2);		HX_STACK_VAR(tmp77,"tmp77");
								HX_STACK_LINE(250)
								int tmp78;		HX_STACK_VAR(tmp78,"tmp78");
								HX_STACK_LINE(250)
								{
									HX_STACK_LINE(250)
									::lime::utils::UInt8Array tmp79 = sourceData;		HX_STACK_VAR(tmp79,"tmp79");
									HX_STACK_LINE(250)
									int tmp80 = (sourceOffset + (int)2);		HX_STACK_VAR(tmp80,"tmp80");
									HX_STACK_LINE(250)
									int tmp81 = tmp79->__get(tmp80);		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(250)
									Float tmp82 = sourceAlpha;		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(250)
									Float tmp83 = (tmp81 * tmp82);		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(250)
									::lime::utils::UInt8Array tmp84 = data;		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(250)
									int tmp85 = (offset + (int)2);		HX_STACK_VAR(tmp85,"tmp85");
									HX_STACK_LINE(250)
									int tmp86 = tmp84->__get(tmp85);		HX_STACK_VAR(tmp86,"tmp86");
									HX_STACK_LINE(250)
									Float tmp87 = destAlpha;		HX_STACK_VAR(tmp87,"tmp87");
									HX_STACK_LINE(250)
									Float tmp88 = (tmp86 * tmp87);		HX_STACK_VAR(tmp88,"tmp88");
									HX_STACK_LINE(250)
									Float tmp89 = oneMinusSourceAlpha;		HX_STACK_VAR(tmp89,"tmp89");
									HX_STACK_LINE(250)
									Float tmp90 = (tmp88 * tmp89);		HX_STACK_VAR(tmp90,"tmp90");
									HX_STACK_LINE(250)
									Float tmp91 = (tmp83 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
									HX_STACK_LINE(250)
									Float tmp92 = outA;		HX_STACK_VAR(tmp92,"tmp92");
									HX_STACK_LINE(250)
									Float tmp93 = (Float(tmp91) / Float(tmp92));		HX_STACK_VAR(tmp93,"tmp93");
									HX_STACK_LINE(250)
									int tmp94 = ::Math_obj::round(tmp93);		HX_STACK_VAR(tmp94,"tmp94");
									HX_STACK_LINE(250)
									int index = tmp94;		HX_STACK_VAR(index,"index");
									HX_STACK_LINE(250)
									Array< int > tmp95 = ::lime::graphics::utils::ImageDataUtil_obj::__clamp;		HX_STACK_VAR(tmp95,"tmp95");
									HX_STACK_LINE(250)
									int tmp96 = index;		HX_STACK_VAR(tmp96,"tmp96");
									HX_STACK_LINE(250)
									int tmp97 = tmp95->__unsafe_get(tmp96);		HX_STACK_VAR(tmp97,"tmp97");
									HX_STACK_LINE(250)
									tmp78 = tmp97;
								}
								HX_STACK_LINE(250)
								hx::__ArrayImplRef(tmp76,tmp77) = tmp78;
								HX_STACK_LINE(251)
								::lime::utils::UInt8Array tmp79 = data;		HX_STACK_VAR(tmp79,"tmp79");
								HX_STACK_LINE(251)
								int tmp80 = (offset + (int)3);		HX_STACK_VAR(tmp80,"tmp80");
								HX_STACK_LINE(251)
								int tmp81;		HX_STACK_VAR(tmp81,"tmp81");
								HX_STACK_LINE(251)
								{
									HX_STACK_LINE(251)
									Float tmp82 = (outA * ((Float)255.0));		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(251)
									int tmp83 = ::Math_obj::round(tmp82);		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(251)
									int index = tmp83;		HX_STACK_VAR(index,"index");
									HX_STACK_LINE(251)
									Array< int > tmp84 = ::lime::graphics::utils::ImageDataUtil_obj::__clamp;		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(251)
									int tmp85 = index;		HX_STACK_VAR(tmp85,"tmp85");
									HX_STACK_LINE(251)
									int tmp86 = tmp84->__unsafe_get(tmp85);		HX_STACK_VAR(tmp86,"tmp86");
									HX_STACK_LINE(251)
									tmp81 = tmp86;
								}
								HX_STACK_LINE(251)
								hx::__ArrayImplRef(tmp79,tmp80) = tmp81;
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(262)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(ImageDataUtil_obj,copyPixels,(void))

Void ImageDataUtil_obj::fillRect( ::lime::graphics::Image image,::lime::math::Rectangle rect,int color,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","fillRect",0x163460f5,"lime.graphics.utils.ImageDataUtil.fillRect","lime/graphics/utils/ImageDataUtil.hx",267,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(269)
		int r;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(269)
		int g;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(269)
		int b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(269)
		int a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(271)
		bool tmp = (format == (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(271)
		if ((tmp)){
			HX_STACK_LINE(273)
			bool tmp1 = image->get_transparent();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(273)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(273)
			if ((tmp1)){
				HX_STACK_LINE(273)
				int tmp3 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(273)
				tmp2 = (int(tmp3) & int((int)255));
			}
			else{
				HX_STACK_LINE(273)
				tmp2 = (int)255;
			}
			HX_STACK_LINE(273)
			a = tmp2;
			HX_STACK_LINE(274)
			int tmp3 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(274)
			int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(274)
			r = tmp4;
			HX_STACK_LINE(275)
			int tmp5 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(275)
			int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(275)
			g = tmp6;
			HX_STACK_LINE(276)
			int tmp7 = (int(color) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(276)
			b = tmp7;
		}
		else{
			HX_STACK_LINE(280)
			int tmp1 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(280)
			int tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(280)
			r = tmp2;
			HX_STACK_LINE(281)
			int tmp3 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(281)
			int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(281)
			g = tmp4;
			HX_STACK_LINE(282)
			int tmp5 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(282)
			int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(282)
			b = tmp6;
			HX_STACK_LINE(283)
			bool tmp7 = image->get_transparent();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(283)
			int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(283)
			if ((tmp7)){
				HX_STACK_LINE(283)
				tmp8 = (int(color) & int((int)255));
			}
			else{
				HX_STACK_LINE(283)
				tmp8 = (int)255;
			}
			HX_STACK_LINE(283)
			a = tmp8;
		}
		HX_STACK_LINE(287)
		int tmp1 = r;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(287)
		int tmp2 = (int(g) << int((int)8));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(287)
		int tmp3 = (int(tmp1) | int(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(287)
		int tmp4 = (int(b) << int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(287)
		int tmp5 = (int(tmp3) | int(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(287)
		int tmp6 = (int(a) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(287)
		int tmp7 = (int(tmp5) | int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(287)
		int rgba = tmp7;		HX_STACK_VAR(rgba,"rgba");
		HX_STACK_LINE(289)
		::lime::utils::UInt8Array tmp8 = image->buffer->data;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(289)
		::lime::utils::UInt8Array data = tmp8;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(290)
		bool tmp9 = (data == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(290)
		if ((tmp9)){
			HX_STACK_LINE(290)
			return null();
		}
		HX_STACK_LINE(293)
		bool tmp10 = ::lime::_system::System_obj::disableCFFI;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(293)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(293)
		if ((tmp11)){
			HX_STACK_LINE(293)
			::lime::graphics::Image tmp12 = image;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(293)
			::lime::math::Rectangle tmp13 = rect;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(293)
			int tmp14 = rgba;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(293)
			::lime::graphics::utils::ImageDataUtil_obj::lime_image_data_util_fill_rect(tmp12,tmp13,tmp14);
		}
		else{
			HX_STACK_LINE(297)
			Float tmp12 = rect->width;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(297)
			int tmp13 = image->buffer->width;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(297)
			bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(297)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(297)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(297)
			if ((tmp15)){
				HX_STACK_LINE(297)
				Float tmp17 = rect->height;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(297)
				int tmp18 = image->buffer->height;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(297)
				int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(297)
				int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(297)
				tmp16 = (tmp17 == tmp20);
			}
			else{
				HX_STACK_LINE(297)
				tmp16 = false;
			}
			HX_STACK_LINE(297)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(297)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(297)
			if ((tmp17)){
				HX_STACK_LINE(297)
				tmp18 = (rect->x == (int)0);
			}
			else{
				HX_STACK_LINE(297)
				tmp18 = false;
			}
			HX_STACK_LINE(297)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(297)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(297)
			if ((tmp19)){
				HX_STACK_LINE(297)
				tmp20 = (rect->y == (int)0);
			}
			else{
				HX_STACK_LINE(297)
				tmp20 = false;
			}
			HX_STACK_LINE(297)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(297)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(297)
			if ((tmp21)){
				HX_STACK_LINE(297)
				tmp22 = (image->offsetX == (int)0);
			}
			else{
				HX_STACK_LINE(297)
				tmp22 = false;
			}
			HX_STACK_LINE(297)
			bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(297)
			if ((tmp22)){
				HX_STACK_LINE(297)
				tmp23 = (image->offsetY == (int)0);
			}
			else{
				HX_STACK_LINE(297)
				tmp23 = false;
			}
			HX_STACK_LINE(297)
			if ((tmp23)){
				HX_STACK_LINE(299)
				int tmp24 = image->buffer->width;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(299)
				int tmp25 = image->buffer->height;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(299)
				int tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(299)
				int length = tmp26;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(301)
				int j = (int)0;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(302)
				{
					HX_STACK_LINE(302)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(302)
					while((true)){
						HX_STACK_LINE(302)
						bool tmp27 = (_g < length);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(302)
						bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(302)
						if ((tmp28)){
							HX_STACK_LINE(302)
							break;
						}
						HX_STACK_LINE(302)
						int tmp29 = (_g)++;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(302)
						int i = tmp29;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(304)
						int tmp30 = (i * (int)4);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(304)
						j = tmp30;
						HX_STACK_LINE(312)
						::__hxcpp_memory_set_ui32(data->bytes,(j + data->byteOffset),rgba);
					}
				}
			}
			else{
				HX_STACK_LINE(319)
				int tmp24 = image->buffer->width;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(319)
				int tmp25 = (tmp24 * (int)4);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(319)
				int stride = tmp25;		HX_STACK_VAR(stride,"stride");
				HX_STACK_LINE(320)
				int offset;		HX_STACK_VAR(offset,"offset");
				HX_STACK_LINE(322)
				Float tmp26 = (rect->y + image->offsetY);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(322)
				int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(322)
				int rowStart = tmp27;		HX_STACK_VAR(rowStart,"rowStart");
				HX_STACK_LINE(323)
				Float tmp28 = rect->get_bottom();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(323)
				int tmp29 = image->offsetY;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(323)
				Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(323)
				int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(323)
				int rowEnd = tmp31;		HX_STACK_VAR(rowEnd,"rowEnd");
				HX_STACK_LINE(324)
				Float tmp32 = (rect->x + image->offsetX);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(324)
				int tmp33 = ::Std_obj::_int(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(324)
				int columnStart = tmp33;		HX_STACK_VAR(columnStart,"columnStart");
				HX_STACK_LINE(325)
				Float tmp34 = rect->get_right();		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(325)
				int tmp35 = image->offsetX;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(325)
				Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(325)
				int tmp37 = ::Std_obj::_int(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(325)
				int columnEnd = tmp37;		HX_STACK_VAR(columnEnd,"columnEnd");
				HX_STACK_LINE(327)
				{
					HX_STACK_LINE(327)
					int _g = rowStart;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(327)
					while((true)){
						HX_STACK_LINE(327)
						bool tmp38 = (_g < rowEnd);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(327)
						bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(327)
						if ((tmp39)){
							HX_STACK_LINE(327)
							break;
						}
						HX_STACK_LINE(327)
						int tmp40 = (_g)++;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(327)
						int row = tmp40;		HX_STACK_VAR(row,"row");
						HX_STACK_LINE(329)
						{
							HX_STACK_LINE(329)
							int _g1 = columnStart;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(329)
							while((true)){
								HX_STACK_LINE(329)
								bool tmp41 = (_g1 < columnEnd);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(329)
								bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(329)
								if ((tmp42)){
									HX_STACK_LINE(329)
									break;
								}
								HX_STACK_LINE(329)
								int tmp43 = (_g1)++;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(329)
								int column = tmp43;		HX_STACK_VAR(column,"column");
								HX_STACK_LINE(331)
								int tmp44 = (row * stride);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(331)
								int tmp45 = (column * (int)4);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(331)
								int tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(331)
								offset = tmp46;
								HX_STACK_LINE(339)
								::__hxcpp_memory_set_ui32(data->bytes,(offset + data->byteOffset),rgba);
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(350)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,fillRect,(void))

Void ImageDataUtil_obj::floodFill( ::lime::graphics::Image image,int x,int y,int color,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","floodFill",0xfbc79ff3,"lime.graphics.utils.ImageDataUtil.floodFill","lime/graphics/utils/ImageDataUtil.hx",355,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(357)
		::lime::utils::UInt8Array tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(357)
		::lime::utils::UInt8Array data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(358)
		bool tmp1 = (data == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(358)
		if ((tmp1)){
			HX_STACK_LINE(358)
			return null();
		}
		HX_STACK_LINE(360)
		bool tmp2 = (format == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(360)
		if ((tmp2)){
			HX_STACK_LINE(360)
			int tmp3 = (int(color) & int((int)16777215));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(360)
			int tmp4 = (int(tmp3) << int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(360)
			int tmp5 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(360)
			int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(360)
			int tmp7 = (int(tmp4) | int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(360)
			color = tmp7;
		}
		HX_STACK_LINE(363)
		bool tmp3 = ::lime::_system::System_obj::disableCFFI;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(363)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(363)
		if ((tmp4)){
			HX_STACK_LINE(363)
			::lime::graphics::Image tmp5 = image;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(363)
			int tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(363)
			int tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(363)
			int tmp8 = color;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(363)
			::lime::graphics::utils::ImageDataUtil_obj::lime_image_data_util_flood_fill(tmp5,tmp6,tmp7,tmp8);
		}
		else{
			HX_STACK_LINE(367)
			int tmp5 = (y + image->offsetY);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(367)
			int tmp6 = image->buffer->width;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(367)
			int tmp7 = (tmp6 * (int)4);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(367)
			int tmp8 = (tmp5 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(367)
			int tmp9 = (x + image->offsetX);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(367)
			int tmp10 = (tmp9 * (int)4);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(367)
			int tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(367)
			int offset = tmp11;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(368)
			::lime::utils::UInt8Array tmp12 = data;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(368)
			int tmp13 = offset;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(368)
			int tmp14 = tmp12->__get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(368)
			int hitColorR = tmp14;		HX_STACK_VAR(hitColorR,"hitColorR");
			HX_STACK_LINE(369)
			::lime::utils::UInt8Array tmp15 = data;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(369)
			int tmp16 = (offset + (int)1);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(369)
			int tmp17 = tmp15->__get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(369)
			int hitColorG = tmp17;		HX_STACK_VAR(hitColorG,"hitColorG");
			HX_STACK_LINE(370)
			::lime::utils::UInt8Array tmp18 = data;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(370)
			int tmp19 = (offset + (int)2);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(370)
			int tmp20 = tmp18->__get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(370)
			int hitColorB = tmp20;		HX_STACK_VAR(hitColorB,"hitColorB");
			HX_STACK_LINE(371)
			bool tmp21 = image->get_transparent();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(371)
			int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(371)
			if ((tmp21)){
				HX_STACK_LINE(371)
				::lime::utils::UInt8Array tmp23 = data;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(371)
				int tmp24 = (offset + (int)3);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(371)
				tmp22 = tmp23->__get(tmp24);
			}
			else{
				HX_STACK_LINE(371)
				tmp22 = (int)255;
			}
			HX_STACK_LINE(371)
			int hitColorA = tmp22;		HX_STACK_VAR(hitColorA,"hitColorA");
			HX_STACK_LINE(373)
			int tmp23 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(373)
			int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(373)
			int r = tmp24;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(374)
			int tmp25 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(374)
			int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(374)
			int g = tmp26;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(375)
			int tmp27 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(375)
			int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(375)
			int b = tmp28;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(376)
			bool tmp29 = image->get_transparent();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(376)
			int tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(376)
			if ((tmp29)){
				HX_STACK_LINE(376)
				tmp30 = (int(color) & int((int)255));
			}
			else{
				HX_STACK_LINE(376)
				tmp30 = (int)255;
			}
			HX_STACK_LINE(376)
			int a = tmp30;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(378)
			bool tmp31 = (hitColorR == r);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(378)
			bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(378)
			bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(378)
			if ((tmp32)){
				HX_STACK_LINE(378)
				tmp33 = (hitColorG == g);
			}
			else{
				HX_STACK_LINE(378)
				tmp33 = false;
			}
			HX_STACK_LINE(378)
			bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(378)
			bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(378)
			if ((tmp34)){
				HX_STACK_LINE(378)
				tmp35 = (hitColorB == b);
			}
			else{
				HX_STACK_LINE(378)
				tmp35 = false;
			}
			HX_STACK_LINE(378)
			bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(378)
			if ((tmp35)){
				HX_STACK_LINE(378)
				tmp36 = (hitColorA == a);
			}
			else{
				HX_STACK_LINE(378)
				tmp36 = false;
			}
			HX_STACK_LINE(378)
			if ((tmp36)){
				HX_STACK_LINE(378)
				return null();
			}
			HX_STACK_LINE(380)
			Array< int > dx = Array_obj< int >::__new().Add((int)0).Add((int)-1).Add((int)1).Add((int)0);		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(381)
			Array< int > dy = Array_obj< int >::__new().Add((int)-1).Add((int)0).Add((int)0).Add((int)1);		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(383)
			int tmp37 = image->offsetX;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(383)
			int tmp38 = -(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(383)
			int minX = tmp38;		HX_STACK_VAR(minX,"minX");
			HX_STACK_LINE(384)
			int tmp39 = image->offsetY;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(384)
			int tmp40 = -(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(384)
			int minY = tmp40;		HX_STACK_VAR(minY,"minY");
			HX_STACK_LINE(385)
			int tmp41 = (minX + image->width);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(385)
			int maxX = tmp41;		HX_STACK_VAR(maxX,"maxX");
			HX_STACK_LINE(386)
			int tmp42 = (minY + image->height);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(386)
			int maxY = tmp42;		HX_STACK_VAR(maxY,"maxY");
			HX_STACK_LINE(388)
			Array< int > queue = Array_obj< int >::__new();		HX_STACK_VAR(queue,"queue");
			HX_STACK_LINE(389)
			int tmp43 = x;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(389)
			queue->push(tmp43);
			HX_STACK_LINE(390)
			int tmp44 = y;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(390)
			queue->push(tmp44);
			HX_STACK_LINE(392)
			while((true)){
				HX_STACK_LINE(392)
				bool tmp45 = (queue->length > (int)0);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(392)
				bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(392)
				if ((tmp46)){
					HX_STACK_LINE(392)
					break;
				}
				HX_STACK_LINE(394)
				Dynamic tmp47 = queue->pop();		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(394)
				Dynamic curPointY = tmp47;		HX_STACK_VAR(curPointY,"curPointY");
				HX_STACK_LINE(395)
				Dynamic tmp48 = queue->pop();		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(395)
				Dynamic curPointX = tmp48;		HX_STACK_VAR(curPointX,"curPointX");
				HX_STACK_LINE(397)
				{
					HX_STACK_LINE(397)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(397)
					while((true)){
						HX_STACK_LINE(397)
						bool tmp49 = (_g < (int)4);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(397)
						bool tmp50 = !(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(397)
						if ((tmp50)){
							HX_STACK_LINE(397)
							break;
						}
						HX_STACK_LINE(397)
						int tmp51 = (_g)++;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(397)
						int i = tmp51;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(399)
						Dynamic tmp52 = curPointX;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(399)
						int tmp53 = dx->__get(i);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(399)
						int tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(399)
						int nextPointX = tmp54;		HX_STACK_VAR(nextPointX,"nextPointX");
						HX_STACK_LINE(400)
						Dynamic tmp55 = curPointY;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(400)
						int tmp56 = dy->__get(i);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(400)
						int tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(400)
						int nextPointY = tmp57;		HX_STACK_VAR(nextPointY,"nextPointY");
						HX_STACK_LINE(402)
						bool tmp58 = (nextPointX < minX);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(402)
						bool tmp59 = !(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(402)
						bool tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(402)
						bool tmp61;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(402)
						if ((tmp60)){
							HX_STACK_LINE(402)
							tmp61 = (nextPointY < minY);
						}
						else{
							HX_STACK_LINE(402)
							tmp61 = true;
						}
						HX_STACK_LINE(402)
						bool tmp62 = !(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(402)
						bool tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(402)
						bool tmp64;		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(402)
						if ((tmp63)){
							HX_STACK_LINE(402)
							tmp64 = (nextPointX >= maxX);
						}
						else{
							HX_STACK_LINE(402)
							tmp64 = true;
						}
						HX_STACK_LINE(402)
						bool tmp65 = !(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(402)
						bool tmp66;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(402)
						if ((tmp65)){
							HX_STACK_LINE(402)
							tmp66 = (nextPointY >= maxY);
						}
						else{
							HX_STACK_LINE(402)
							tmp66 = true;
						}
						HX_STACK_LINE(402)
						if ((tmp66)){
							HX_STACK_LINE(404)
							continue;
						}
						HX_STACK_LINE(408)
						int tmp67 = (nextPointY * image->width);		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(408)
						int tmp68 = nextPointX;		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(408)
						int tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(408)
						int tmp70 = (tmp69 * (int)4);		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(408)
						int nextPointOffset = tmp70;		HX_STACK_VAR(nextPointOffset,"nextPointOffset");
						HX_STACK_LINE(410)
						::lime::utils::UInt8Array tmp71 = data;		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(410)
						int tmp72 = nextPointOffset;		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(410)
						int tmp73 = tmp71->__get(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(410)
						int tmp74 = hitColorR;		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(410)
						bool tmp75 = (tmp73 == tmp74);		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(410)
						bool tmp76 = tmp75;		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(410)
						bool tmp77;		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(410)
						if ((tmp76)){
							HX_STACK_LINE(410)
							::lime::utils::UInt8Array tmp78 = data;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(410)
							int tmp79 = (nextPointOffset + (int)1);		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(410)
							int tmp80 = tmp79;		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(410)
							int tmp81 = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(410)
							int tmp82 = tmp78->__get(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(410)
							int tmp83 = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(410)
							int tmp84 = tmp83;		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(410)
							int tmp85 = hitColorG;		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(410)
							tmp77 = (tmp84 == tmp85);
						}
						else{
							HX_STACK_LINE(410)
							tmp77 = false;
						}
						HX_STACK_LINE(410)
						bool tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(410)
						bool tmp79;		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(410)
						if ((tmp78)){
							HX_STACK_LINE(410)
							::lime::utils::UInt8Array tmp80 = data;		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(410)
							int tmp81 = (nextPointOffset + (int)2);		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(410)
							int tmp82 = tmp81;		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(410)
							int tmp83 = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(410)
							int tmp84 = tmp80->__get(tmp83);		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(410)
							int tmp85 = tmp84;		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(410)
							int tmp86 = tmp85;		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(410)
							int tmp87 = hitColorB;		HX_STACK_VAR(tmp87,"tmp87");
							HX_STACK_LINE(410)
							tmp79 = (tmp86 == tmp87);
						}
						else{
							HX_STACK_LINE(410)
							tmp79 = false;
						}
						HX_STACK_LINE(410)
						bool tmp80;		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(410)
						if ((tmp79)){
							HX_STACK_LINE(410)
							::lime::utils::UInt8Array tmp81 = data;		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(410)
							int tmp82 = (nextPointOffset + (int)3);		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(410)
							int tmp83 = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(410)
							int tmp84 = tmp81->__get(tmp83);		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(410)
							int tmp85 = tmp84;		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(410)
							int tmp86 = hitColorA;		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(410)
							tmp80 = (tmp85 == tmp86);
						}
						else{
							HX_STACK_LINE(410)
							tmp80 = false;
						}
						HX_STACK_LINE(410)
						if ((tmp80)){
							HX_STACK_LINE(412)
							::lime::utils::UInt8Array tmp81 = data;		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(412)
							int tmp82 = nextPointOffset;		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(412)
							int tmp83 = r;		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(412)
							hx::__ArrayImplRef(tmp81,tmp82) = tmp83;
							HX_STACK_LINE(413)
							::lime::utils::UInt8Array tmp84 = data;		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(413)
							int tmp85 = (nextPointOffset + (int)1);		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(413)
							int tmp86 = g;		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(413)
							hx::__ArrayImplRef(tmp84,tmp85) = tmp86;
							HX_STACK_LINE(414)
							::lime::utils::UInt8Array tmp87 = data;		HX_STACK_VAR(tmp87,"tmp87");
							HX_STACK_LINE(414)
							int tmp88 = (nextPointOffset + (int)2);		HX_STACK_VAR(tmp88,"tmp88");
							HX_STACK_LINE(414)
							int tmp89 = b;		HX_STACK_VAR(tmp89,"tmp89");
							HX_STACK_LINE(414)
							hx::__ArrayImplRef(tmp87,tmp88) = tmp89;
							HX_STACK_LINE(415)
							::lime::utils::UInt8Array tmp90 = data;		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(415)
							int tmp91 = (nextPointOffset + (int)3);		HX_STACK_VAR(tmp91,"tmp91");
							HX_STACK_LINE(415)
							int tmp92 = a;		HX_STACK_VAR(tmp92,"tmp92");
							HX_STACK_LINE(415)
							hx::__ArrayImplRef(tmp90,tmp91) = tmp92;
							HX_STACK_LINE(417)
							int tmp93 = nextPointX;		HX_STACK_VAR(tmp93,"tmp93");
							HX_STACK_LINE(417)
							queue->push(tmp93);
							HX_STACK_LINE(418)
							int tmp94 = nextPointY;		HX_STACK_VAR(tmp94,"tmp94");
							HX_STACK_LINE(418)
							queue->push(tmp94);
						}
					}
				}
			}
		}
		HX_STACK_LINE(428)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageDataUtil_obj,floodFill,(void))

::lime::math::Rectangle ImageDataUtil_obj::getColorBoundsRect( ::lime::graphics::Image image,int mask,int color,hx::Null< bool >  __o_findColor,int format){
bool findColor = __o_findColor.Default(true);
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","getColorBoundsRect",0xfea06eb4,"lime.graphics.utils.ImageDataUtil.getColorBoundsRect","lime/graphics/utils/ImageDataUtil.hx",433,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(findColor,"findColor")
	HX_STACK_ARG(format,"format")
{
		HX_STACK_LINE(435)
		int tmp = (image->width + (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(435)
		int left = tmp;		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(436)
		int right = (int)0;		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(437)
		int tmp1 = (image->height + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(437)
		int top = tmp1;		HX_STACK_VAR(top,"top");
		HX_STACK_LINE(438)
		int bottom = (int)0;		HX_STACK_VAR(bottom,"bottom");
		HX_STACK_LINE(440)
		int r;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(440)
		int g;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(440)
		int b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(440)
		int a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(441)
		int mr;		HX_STACK_VAR(mr,"mr");
		HX_STACK_LINE(441)
		int mg;		HX_STACK_VAR(mg,"mg");
		HX_STACK_LINE(441)
		int mb;		HX_STACK_VAR(mb,"mb");
		HX_STACK_LINE(441)
		int ma;		HX_STACK_VAR(ma,"ma");
		HX_STACK_LINE(443)
		bool tmp2 = (format == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(443)
		if ((tmp2)){
			HX_STACK_LINE(445)
			bool tmp3 = image->get_transparent();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(445)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(445)
			if ((tmp3)){
				HX_STACK_LINE(445)
				int tmp5 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(445)
				tmp4 = (int(tmp5) & int((int)255));
			}
			else{
				HX_STACK_LINE(445)
				tmp4 = (int)255;
			}
			HX_STACK_LINE(445)
			a = tmp4;
			HX_STACK_LINE(446)
			int tmp5 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(446)
			int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(446)
			r = tmp6;
			HX_STACK_LINE(447)
			int tmp7 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(447)
			int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(447)
			g = tmp8;
			HX_STACK_LINE(448)
			int tmp9 = (int(color) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(448)
			b = tmp9;
			HX_STACK_LINE(450)
			bool tmp10 = image->get_transparent();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(450)
			int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(450)
			if ((tmp10)){
				HX_STACK_LINE(450)
				int tmp12 = (int(mask) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(450)
				tmp11 = (int(tmp12) & int((int)255));
			}
			else{
				HX_STACK_LINE(450)
				tmp11 = (int)255;
			}
			HX_STACK_LINE(450)
			ma = tmp11;
			HX_STACK_LINE(451)
			int tmp12 = (int(mask) >> int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(451)
			int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(451)
			mr = tmp13;
			HX_STACK_LINE(452)
			int tmp14 = (int(mask) >> int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(452)
			int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(452)
			mg = tmp15;
			HX_STACK_LINE(453)
			int tmp16 = (int(mask) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(453)
			mb = tmp16;
		}
		else{
			HX_STACK_LINE(457)
			int tmp3 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(457)
			int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(457)
			r = tmp4;
			HX_STACK_LINE(458)
			int tmp5 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(458)
			int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(458)
			g = tmp6;
			HX_STACK_LINE(459)
			int tmp7 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(459)
			int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(459)
			b = tmp8;
			HX_STACK_LINE(460)
			bool tmp9 = image->get_transparent();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(460)
			int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(460)
			if ((tmp9)){
				HX_STACK_LINE(460)
				tmp10 = (int(color) & int((int)255));
			}
			else{
				HX_STACK_LINE(460)
				tmp10 = (int)255;
			}
			HX_STACK_LINE(460)
			a = tmp10;
			HX_STACK_LINE(462)
			int tmp11 = (int(mask) >> int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(462)
			int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(462)
			mr = tmp12;
			HX_STACK_LINE(463)
			int tmp13 = (int(mask) >> int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(463)
			int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(463)
			mg = tmp14;
			HX_STACK_LINE(464)
			int tmp15 = (int(mask) >> int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(464)
			int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(464)
			mb = tmp16;
			HX_STACK_LINE(465)
			bool tmp17 = image->get_transparent();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(465)
			int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(465)
			if ((tmp17)){
				HX_STACK_LINE(465)
				tmp18 = (int(mask) & int((int)255));
			}
			else{
				HX_STACK_LINE(465)
				tmp18 = (int)255;
			}
			HX_STACK_LINE(465)
			ma = tmp18;
		}
		HX_STACK_LINE(469)
		int tmp3 = r;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(469)
		int tmp4 = (int(g) << int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(469)
		int tmp5 = (int(tmp3) | int(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(469)
		int tmp6 = (int(b) << int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(469)
		int tmp7 = (int(tmp5) | int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(469)
		int tmp8 = (int(a) << int((int)24));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(469)
		int tmp9 = (int(tmp7) | int(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(469)
		color = tmp9;
		HX_STACK_LINE(470)
		int tmp10 = mr;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(470)
		int tmp11 = (int(mg) << int((int)8));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(470)
		int tmp12 = (int(tmp10) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(470)
		int tmp13 = (int(mb) << int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(470)
		int tmp14 = (int(tmp12) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(470)
		int tmp15 = (int(mask) << int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(470)
		int tmp16 = (int(tmp14) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(470)
		mask = tmp16;
		HX_STACK_LINE(472)
		int pix;		HX_STACK_VAR(pix,"pix");
		HX_STACK_LINE(474)
		{
			HX_STACK_LINE(474)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(474)
			int _g = image->width;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(474)
			while((true)){
				HX_STACK_LINE(474)
				bool tmp17 = (_g1 < _g);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(474)
				bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(474)
				if ((tmp18)){
					HX_STACK_LINE(474)
					break;
				}
				HX_STACK_LINE(474)
				int tmp19 = (_g1)++;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(474)
				int ix = tmp19;		HX_STACK_VAR(ix,"ix");
				HX_STACK_LINE(476)
				bool hit = false;		HX_STACK_VAR(hit,"hit");
				HX_STACK_LINE(478)
				{
					HX_STACK_LINE(478)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(478)
					int _g2 = image->height;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(478)
					while((true)){
						HX_STACK_LINE(478)
						bool tmp20 = (_g3 < _g2);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(478)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(478)
						if ((tmp21)){
							HX_STACK_LINE(478)
							break;
						}
						HX_STACK_LINE(478)
						int tmp22 = (_g3)++;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(478)
						int iy = tmp22;		HX_STACK_VAR(iy,"iy");
						HX_STACK_LINE(480)
						int tmp23 = ix;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(480)
						int tmp24 = iy;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(480)
						int tmp25 = image->getPixel32(tmp23,tmp24,null());		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(480)
						pix = tmp25;
						HX_STACK_LINE(481)
						bool tmp26 = findColor;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(481)
						bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(481)
						if ((tmp26)){
							HX_STACK_LINE(481)
							int tmp28 = (int(pix) & int(mask));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(481)
							int tmp29 = color;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(481)
							tmp27 = (tmp28 == tmp29);
						}
						else{
							HX_STACK_LINE(481)
							int tmp28 = (int(pix) & int(mask));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(481)
							int tmp29 = color;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(481)
							tmp27 = (tmp28 != tmp29);
						}
						HX_STACK_LINE(481)
						hit = tmp27;
						HX_STACK_LINE(483)
						bool tmp28 = hit;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(483)
						if ((tmp28)){
							HX_STACK_LINE(485)
							bool tmp29 = (ix < left);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(485)
							if ((tmp29)){
								HX_STACK_LINE(485)
								left = ix;
							}
							HX_STACK_LINE(486)
							break;
						}
					}
				}
				HX_STACK_LINE(492)
				bool tmp20 = hit;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(492)
				if ((tmp20)){
					HX_STACK_LINE(494)
					break;
				}
			}
		}
		HX_STACK_LINE(500)
		{
			HX_STACK_LINE(500)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(500)
			int _g = image->width;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(500)
			while((true)){
				HX_STACK_LINE(500)
				bool tmp17 = (_g1 < _g);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(500)
				bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(500)
				if ((tmp18)){
					HX_STACK_LINE(500)
					break;
				}
				HX_STACK_LINE(500)
				int tmp19 = (_g1)++;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(500)
				int _ix = tmp19;		HX_STACK_VAR(_ix,"_ix");
				HX_STACK_LINE(502)
				int tmp20 = (image->width - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(502)
				int tmp21 = _ix;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(502)
				int tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(502)
				int ix = tmp22;		HX_STACK_VAR(ix,"ix");
				HX_STACK_LINE(503)
				bool hit = false;		HX_STACK_VAR(hit,"hit");
				HX_STACK_LINE(505)
				{
					HX_STACK_LINE(505)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(505)
					int _g2 = image->height;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(505)
					while((true)){
						HX_STACK_LINE(505)
						bool tmp23 = (_g3 < _g2);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(505)
						bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(505)
						if ((tmp24)){
							HX_STACK_LINE(505)
							break;
						}
						HX_STACK_LINE(505)
						int tmp25 = (_g3)++;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(505)
						int iy = tmp25;		HX_STACK_VAR(iy,"iy");
						HX_STACK_LINE(507)
						int tmp26 = ix;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(507)
						int tmp27 = iy;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(507)
						int tmp28 = image->getPixel32(tmp26,tmp27,null());		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(507)
						pix = tmp28;
						HX_STACK_LINE(508)
						bool tmp29 = findColor;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(508)
						bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(508)
						if ((tmp29)){
							HX_STACK_LINE(508)
							int tmp31 = (int(pix) & int(mask));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(508)
							int tmp32 = color;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(508)
							tmp30 = (tmp31 == tmp32);
						}
						else{
							HX_STACK_LINE(508)
							int tmp31 = (int(pix) & int(mask));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(508)
							int tmp32 = color;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(508)
							tmp30 = (tmp31 != tmp32);
						}
						HX_STACK_LINE(508)
						hit = tmp30;
						HX_STACK_LINE(510)
						bool tmp31 = hit;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(510)
						if ((tmp31)){
							HX_STACK_LINE(512)
							bool tmp32 = (ix > right);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(512)
							if ((tmp32)){
								HX_STACK_LINE(512)
								right = ix;
							}
							HX_STACK_LINE(513)
							break;
						}
					}
				}
				HX_STACK_LINE(519)
				bool tmp23 = hit;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(519)
				if ((tmp23)){
					HX_STACK_LINE(521)
					break;
				}
			}
		}
		HX_STACK_LINE(527)
		{
			HX_STACK_LINE(527)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(527)
			int _g = image->height;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(527)
			while((true)){
				HX_STACK_LINE(527)
				bool tmp17 = (_g1 < _g);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(527)
				bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(527)
				if ((tmp18)){
					HX_STACK_LINE(527)
					break;
				}
				HX_STACK_LINE(527)
				int tmp19 = (_g1)++;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(527)
				int iy = tmp19;		HX_STACK_VAR(iy,"iy");
				HX_STACK_LINE(529)
				bool hit = false;		HX_STACK_VAR(hit,"hit");
				HX_STACK_LINE(531)
				{
					HX_STACK_LINE(531)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(531)
					int _g2 = image->width;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(531)
					while((true)){
						HX_STACK_LINE(531)
						bool tmp20 = (_g3 < _g2);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(531)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(531)
						if ((tmp21)){
							HX_STACK_LINE(531)
							break;
						}
						HX_STACK_LINE(531)
						int tmp22 = (_g3)++;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(531)
						int ix = tmp22;		HX_STACK_VAR(ix,"ix");
						HX_STACK_LINE(533)
						int tmp23 = ix;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(533)
						int tmp24 = iy;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(533)
						int tmp25 = image->getPixel32(tmp23,tmp24,null());		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(533)
						pix = tmp25;
						HX_STACK_LINE(534)
						bool tmp26 = findColor;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(534)
						bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(534)
						if ((tmp26)){
							HX_STACK_LINE(534)
							int tmp28 = (int(pix) & int(mask));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(534)
							int tmp29 = color;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(534)
							tmp27 = (tmp28 == tmp29);
						}
						else{
							HX_STACK_LINE(534)
							int tmp28 = (int(pix) & int(mask));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(534)
							int tmp29 = color;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(534)
							tmp27 = (tmp28 != tmp29);
						}
						HX_STACK_LINE(534)
						hit = tmp27;
						HX_STACK_LINE(536)
						bool tmp28 = hit;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(536)
						if ((tmp28)){
							HX_STACK_LINE(538)
							bool tmp29 = (iy < top);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(538)
							if ((tmp29)){
								HX_STACK_LINE(538)
								top = iy;
							}
							HX_STACK_LINE(539)
							break;
						}
					}
				}
				HX_STACK_LINE(545)
				bool tmp20 = hit;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(545)
				if ((tmp20)){
					HX_STACK_LINE(547)
					break;
				}
			}
		}
		HX_STACK_LINE(553)
		{
			HX_STACK_LINE(553)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(553)
			int _g = image->height;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(553)
			while((true)){
				HX_STACK_LINE(553)
				bool tmp17 = (_g1 < _g);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(553)
				bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(553)
				if ((tmp18)){
					HX_STACK_LINE(553)
					break;
				}
				HX_STACK_LINE(553)
				int tmp19 = (_g1)++;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(553)
				int _iy = tmp19;		HX_STACK_VAR(_iy,"_iy");
				HX_STACK_LINE(555)
				int tmp20 = (image->height - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(555)
				int tmp21 = _iy;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(555)
				int tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(555)
				int iy = tmp22;		HX_STACK_VAR(iy,"iy");
				HX_STACK_LINE(556)
				bool hit = false;		HX_STACK_VAR(hit,"hit");
				HX_STACK_LINE(558)
				{
					HX_STACK_LINE(558)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(558)
					int _g2 = image->width;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(558)
					while((true)){
						HX_STACK_LINE(558)
						bool tmp23 = (_g3 < _g2);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(558)
						bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(558)
						if ((tmp24)){
							HX_STACK_LINE(558)
							break;
						}
						HX_STACK_LINE(558)
						int tmp25 = (_g3)++;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(558)
						int ix = tmp25;		HX_STACK_VAR(ix,"ix");
						HX_STACK_LINE(560)
						int tmp26 = ix;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(560)
						int tmp27 = iy;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(560)
						int tmp28 = image->getPixel32(tmp26,tmp27,null());		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(560)
						pix = tmp28;
						HX_STACK_LINE(561)
						bool tmp29 = findColor;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(561)
						bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(561)
						if ((tmp29)){
							HX_STACK_LINE(561)
							int tmp31 = (int(pix) & int(mask));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(561)
							int tmp32 = color;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(561)
							tmp30 = (tmp31 == tmp32);
						}
						else{
							HX_STACK_LINE(561)
							int tmp31 = (int(pix) & int(mask));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(561)
							int tmp32 = color;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(561)
							tmp30 = (tmp31 != tmp32);
						}
						HX_STACK_LINE(561)
						hit = tmp30;
						HX_STACK_LINE(563)
						bool tmp31 = hit;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(563)
						if ((tmp31)){
							HX_STACK_LINE(565)
							bool tmp32 = (iy > bottom);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(565)
							if ((tmp32)){
								HX_STACK_LINE(565)
								bottom = iy;
							}
							HX_STACK_LINE(566)
							break;
						}
					}
				}
				HX_STACK_LINE(572)
				bool tmp23 = hit;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(572)
				if ((tmp23)){
					HX_STACK_LINE(574)
					break;
				}
			}
		}
		HX_STACK_LINE(580)
		int tmp17 = (right - left);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(580)
		int w = tmp17;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(581)
		int tmp18 = (bottom - top);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(581)
		int h = tmp18;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(583)
		bool tmp19 = (w > (int)0);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(583)
		if ((tmp19)){
			HX_STACK_LINE(583)
			(w)++;
		}
		HX_STACK_LINE(584)
		bool tmp20 = (h > (int)0);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(584)
		if ((tmp20)){
			HX_STACK_LINE(584)
			(h)++;
		}
		HX_STACK_LINE(586)
		bool tmp21 = (w < (int)0);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(586)
		if ((tmp21)){
			HX_STACK_LINE(586)
			w = (int)0;
		}
		HX_STACK_LINE(587)
		bool tmp22 = (h < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(587)
		if ((tmp22)){
			HX_STACK_LINE(587)
			h = (int)0;
		}
		HX_STACK_LINE(589)
		bool tmp23 = (left == right);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(589)
		if ((tmp23)){
			HX_STACK_LINE(589)
			w = (int)1;
		}
		HX_STACK_LINE(590)
		bool tmp24 = (top == bottom);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(590)
		if ((tmp24)){
			HX_STACK_LINE(590)
			h = (int)1;
		}
		HX_STACK_LINE(592)
		bool tmp25 = (left > image->width);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(592)
		if ((tmp25)){
			HX_STACK_LINE(592)
			left = (int)0;
		}
		HX_STACK_LINE(593)
		bool tmp26 = (top > image->height);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(593)
		if ((tmp26)){
			HX_STACK_LINE(593)
			top = (int)0;
		}
		HX_STACK_LINE(595)
		::lime::math::Rectangle tmp27 = ::lime::math::Rectangle_obj::__new(left,top,w,h);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(595)
		return tmp27;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageDataUtil_obj,getColorBoundsRect,return )

int ImageDataUtil_obj::getPixel( ::lime::graphics::Image image,int x,int y,int format){
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","getPixel",0xcbf5f1be,"lime.graphics.utils.ImageDataUtil.getPixel","lime/graphics/utils/ImageDataUtil.hx",600,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(602)
	::lime::utils::UInt8Array tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(602)
	::lime::utils::UInt8Array data = tmp;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(603)
	int tmp1 = (y + image->offsetY);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(603)
	int tmp2 = ((int)4 * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(603)
	int tmp3 = image->buffer->width;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(603)
	int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(603)
	int tmp5 = (x + image->offsetX);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(603)
	int tmp6 = (tmp5 * (int)4);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(603)
	int tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(603)
	int offset = tmp7;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(604)
	int pixel;		HX_STACK_VAR(pixel,"pixel");
	HX_STACK_LINE(606)
	bool tmp8 = image->get_premultiplied();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(606)
	if ((tmp8)){
		HX_STACK_LINE(608)
		::lime::utils::UInt8Array tmp9 = data;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(608)
		int tmp10 = (offset + (int)3);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(608)
		int tmp11 = tmp9->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(608)
		Float tmp12 = (Float(((Float)255.0)) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(608)
		Float unmultiply = tmp12;		HX_STACK_VAR(unmultiply,"unmultiply");
		HX_STACK_LINE(609)
		int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(609)
		{
			HX_STACK_LINE(609)
			int tmp14 = data->__get(offset);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(609)
			Float tmp15 = unmultiply;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(609)
			Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(609)
			int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(609)
			int index = tmp17;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(609)
			Array< int > tmp18 = ::lime::graphics::utils::ImageDataUtil_obj::__clamp;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(609)
			int tmp19 = index;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(609)
			int tmp20 = tmp18->__unsafe_get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(609)
			tmp13 = tmp20;
		}
		HX_STACK_LINE(609)
		int tmp14 = (int(tmp13) << int((int)24));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(609)
		int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(609)
		{
			HX_STACK_LINE(609)
			::lime::utils::UInt8Array tmp16 = data;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(609)
			int tmp17 = (offset + (int)1);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(609)
			int tmp18 = tmp16->__get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(609)
			Float tmp19 = unmultiply;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(609)
			Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(609)
			int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(609)
			int index = tmp21;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(609)
			Array< int > tmp22 = ::lime::graphics::utils::ImageDataUtil_obj::__clamp;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(609)
			int tmp23 = index;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(609)
			int tmp24 = tmp22->__unsafe_get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(609)
			tmp15 = tmp24;
		}
		HX_STACK_LINE(609)
		int tmp16 = (int(tmp15) << int((int)16));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(609)
		int tmp17 = (int(tmp14) | int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(609)
		int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(609)
		{
			HX_STACK_LINE(609)
			::lime::utils::UInt8Array tmp19 = data;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(609)
			int tmp20 = (offset + (int)2);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(609)
			int tmp21 = tmp19->__get(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(609)
			Float tmp22 = unmultiply;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(609)
			Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(609)
			int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(609)
			int index = tmp24;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(609)
			Array< int > tmp25 = ::lime::graphics::utils::ImageDataUtil_obj::__clamp;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(609)
			int tmp26 = index;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(609)
			int tmp27 = tmp25->__unsafe_get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(609)
			tmp18 = tmp27;
		}
		HX_STACK_LINE(609)
		int tmp19 = (int(tmp18) << int((int)8));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(609)
		int tmp20 = (int(tmp17) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(609)
		pixel = tmp20;
	}
	else{
		HX_STACK_LINE(613)
		int tmp9 = data->__get(offset);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(613)
		int tmp10 = (int(tmp9) << int((int)24));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(613)
		::lime::utils::UInt8Array tmp11 = data;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(613)
		int tmp12 = (offset + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(613)
		int tmp13 = tmp11->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(613)
		int tmp14 = (int(tmp13) << int((int)16));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(613)
		int tmp15 = (int(tmp10) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(613)
		::lime::utils::UInt8Array tmp16 = data;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(613)
		int tmp17 = (offset + (int)2);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(613)
		int tmp18 = tmp16->__get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(613)
		int tmp19 = (int(tmp18) << int((int)8));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(613)
		int tmp20 = (int(tmp15) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(613)
		pixel = tmp20;
	}
	HX_STACK_LINE(617)
	bool tmp9 = (format == (int)1);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(617)
	if ((tmp9)){
		HX_STACK_LINE(619)
		int tmp10 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(619)
		int tmp11 = (int(tmp10) & int((int)16777215));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(619)
		return tmp11;
	}
	else{
		HX_STACK_LINE(623)
		int tmp10 = pixel;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(623)
		return tmp10;
	}
	HX_STACK_LINE(617)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,getPixel,return )

int ImageDataUtil_obj::getPixel32( ::lime::graphics::Image image,int x,int y,int format){
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","getPixel32",0x2aa489dd,"lime.graphics.utils.ImageDataUtil.getPixel32","lime/graphics/utils/ImageDataUtil.hx",630,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(632)
	::lime::utils::UInt8Array tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(632)
	::lime::utils::UInt8Array data = tmp;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(633)
	int tmp1 = (y + image->offsetY);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(633)
	int tmp2 = ((int)4 * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(633)
	int tmp3 = image->buffer->width;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(633)
	int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(633)
	int tmp5 = (x + image->offsetX);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(633)
	int tmp6 = (tmp5 * (int)4);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(633)
	int tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(633)
	int offset = tmp7;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(634)
	bool tmp8 = image->get_transparent();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(634)
	int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(634)
	if ((tmp8)){
		HX_STACK_LINE(634)
		::lime::utils::UInt8Array tmp10 = data;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(634)
		int tmp11 = (offset + (int)3);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(634)
		tmp9 = tmp10->__get(tmp11);
	}
	else{
		HX_STACK_LINE(634)
		tmp9 = (int)255;
	}
	HX_STACK_LINE(634)
	int a = tmp9;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(635)
	int r;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(635)
	int g;		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(635)
	int b;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(637)
	bool tmp10 = image->get_premultiplied();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(637)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(637)
	if ((tmp10)){
		HX_STACK_LINE(637)
		tmp11 = (a != (int)0);
	}
	else{
		HX_STACK_LINE(637)
		tmp11 = false;
	}
	HX_STACK_LINE(637)
	if ((tmp11)){
		HX_STACK_LINE(639)
		Float tmp12 = (Float(((Float)255.0)) / Float(a));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(639)
		Float unmultiply = tmp12;		HX_STACK_VAR(unmultiply,"unmultiply");
		HX_STACK_LINE(640)
		int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(640)
		{
			HX_STACK_LINE(640)
			int tmp14 = data->__get(offset);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(640)
			Float tmp15 = unmultiply;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(640)
			Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(640)
			int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(640)
			int index = tmp17;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(640)
			Array< int > tmp18 = ::lime::graphics::utils::ImageDataUtil_obj::__clamp;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(640)
			int tmp19 = index;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(640)
			int tmp20 = tmp18->__unsafe_get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(640)
			tmp13 = tmp20;
		}
		HX_STACK_LINE(640)
		r = tmp13;
		HX_STACK_LINE(641)
		int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(641)
		{
			HX_STACK_LINE(641)
			::lime::utils::UInt8Array tmp15 = data;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(641)
			int tmp16 = (offset + (int)1);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(641)
			int tmp17 = tmp15->__get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(641)
			Float tmp18 = unmultiply;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(641)
			Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(641)
			int tmp20 = ::Math_obj::round(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(641)
			int index = tmp20;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(641)
			Array< int > tmp21 = ::lime::graphics::utils::ImageDataUtil_obj::__clamp;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(641)
			int tmp22 = index;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(641)
			int tmp23 = tmp21->__unsafe_get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(641)
			tmp14 = tmp23;
		}
		HX_STACK_LINE(641)
		g = tmp14;
		HX_STACK_LINE(642)
		int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(642)
		{
			HX_STACK_LINE(642)
			::lime::utils::UInt8Array tmp16 = data;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(642)
			int tmp17 = (offset + (int)2);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(642)
			int tmp18 = tmp16->__get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(642)
			Float tmp19 = unmultiply;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(642)
			Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(642)
			int tmp21 = ::Math_obj::round(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(642)
			int index = tmp21;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(642)
			Array< int > tmp22 = ::lime::graphics::utils::ImageDataUtil_obj::__clamp;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(642)
			int tmp23 = index;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(642)
			int tmp24 = tmp22->__unsafe_get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(642)
			tmp15 = tmp24;
		}
		HX_STACK_LINE(642)
		b = tmp15;
	}
	else{
		HX_STACK_LINE(646)
		int tmp12 = data->__get(offset);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(646)
		r = tmp12;
		HX_STACK_LINE(647)
		::lime::utils::UInt8Array tmp13 = data;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(647)
		int tmp14 = (offset + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(647)
		int tmp15 = tmp13->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(647)
		g = tmp15;
		HX_STACK_LINE(648)
		::lime::utils::UInt8Array tmp16 = data;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(648)
		int tmp17 = (offset + (int)2);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(648)
		int tmp18 = tmp16->__get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(648)
		b = tmp18;
	}
	HX_STACK_LINE(652)
	bool tmp12 = (format == (int)1);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(652)
	if ((tmp12)){
		HX_STACK_LINE(654)
		int tmp13 = (int(a) << int((int)24));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(654)
		int tmp14 = (int(r) << int((int)16));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(654)
		int tmp15 = (int(tmp13) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(654)
		int tmp16 = (int(g) << int((int)8));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(654)
		int tmp17 = (int(tmp15) | int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(654)
		int tmp18 = b;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(654)
		int tmp19 = (int(tmp17) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(654)
		return tmp19;
	}
	else{
		HX_STACK_LINE(658)
		int tmp13 = (int(r) << int((int)24));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(658)
		int tmp14 = (int(g) << int((int)16));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(658)
		int tmp15 = (int(tmp13) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(658)
		int tmp16 = (int(b) << int((int)8));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(658)
		int tmp17 = (int(tmp15) | int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(658)
		int tmp18 = a;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(658)
		int tmp19 = (int(tmp17) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(658)
		return tmp19;
	}
	HX_STACK_LINE(652)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,getPixel32,return )

::lime::utils::ByteArray ImageDataUtil_obj::getPixels( ::lime::graphics::Image image,::lime::math::Rectangle rect,int format){
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","getPixels",0xab3d94f5,"lime.graphics.utils.ImageDataUtil.getPixels","lime/graphics/utils/ImageDataUtil.hx",665,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(667)
	::lime::utils::UInt8Array tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(667)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(667)
	if ((tmp1)){
		HX_STACK_LINE(667)
		return null();
	}
	HX_STACK_LINE(669)
	Float tmp2 = (rect->width * rect->height);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(669)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(669)
	int length = tmp3;		HX_STACK_VAR(length,"length");
	HX_STACK_LINE(674)
	int tmp4 = (length * (int)4);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(674)
	::lime::utils::ByteArray tmp5 = ::lime::utils::ByteArray_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(674)
	::lime::utils::ByteArray byteArray = tmp5;		HX_STACK_VAR(byteArray,"byteArray");
	HX_STACK_LINE(675)
	byteArray->position = (int)0;
	HX_STACK_LINE(679)
	bool tmp6 = ::lime::_system::System_obj::disableCFFI;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(679)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(679)
	if ((tmp7)){
		HX_STACK_LINE(679)
		::lime::graphics::Image tmp8 = image;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(679)
		::lime::math::Rectangle tmp9 = rect;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(679)
		int tmp10 = format;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(679)
		::lime::utils::ByteArray tmp11 = ::lime::graphics::utils::ImageDataUtil_obj::lime_image_data_util_get_pixels(tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(679)
		byteArray = tmp11;
	}
	else{
		HX_STACK_LINE(694)
		::lime::utils::UInt8Array tmp8 = image->buffer->data;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(694)
		::lime::utils::UInt8Array srcData = tmp8;		HX_STACK_VAR(srcData,"srcData");
		HX_STACK_LINE(695)
		int tmp9 = image->buffer->width;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(695)
		int tmp10 = (tmp9 * (int)4);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(695)
		int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(695)
		int srcStride = tmp11;		HX_STACK_VAR(srcStride,"srcStride");
		HX_STACK_LINE(696)
		Float tmp12 = (rect->x * (int)4);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(696)
		Float tmp13 = (srcStride * rect->y);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(696)
		Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(696)
		int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(696)
		int srcPosition = tmp15;		HX_STACK_VAR(srcPosition,"srcPosition");
		HX_STACK_LINE(697)
		int tmp16 = srcStride;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(697)
		Float tmp17 = ((int)4 * rect->width);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(697)
		int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(697)
		int tmp19 = (tmp16 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(697)
		int srcRowOffset = tmp19;		HX_STACK_VAR(srcRowOffset,"srcRowOffset");
		HX_STACK_LINE(698)
		Float tmp20 = (rect->x + rect->width);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(698)
		Float tmp21 = ((int)4 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(698)
		int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(698)
		int srcRowEnd = tmp22;		HX_STACK_VAR(srcRowEnd,"srcRowEnd");
		HX_STACK_LINE(704)
		bool tmp23 = (format == (int)1);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(704)
		if ((tmp23)){
			HX_STACK_LINE(706)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(706)
			while((true)){
				HX_STACK_LINE(706)
				bool tmp24 = (_g < length);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(706)
				bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(706)
				if ((tmp25)){
					HX_STACK_LINE(706)
					break;
				}
				HX_STACK_LINE(706)
				int tmp26 = (_g)++;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(706)
				int i = tmp26;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(714)
				{
					HX_STACK_LINE(714)
					::lime::utils::UInt8Array tmp27 = srcData;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(714)
					int tmp28 = (srcPosition)++;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(714)
					int tmp29 = tmp27->__get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(714)
					int v = tmp29;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(714)
					int tmp30 = (i * (int)4);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(714)
					int tmp31 = (tmp30 + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(714)
					int tmp32 = v;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(714)
					byteArray->b[tmp31] = tmp32;
				}
				HX_STACK_LINE(715)
				{
					HX_STACK_LINE(715)
					::lime::utils::UInt8Array tmp27 = srcData;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(715)
					int tmp28 = (srcPosition)++;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(715)
					int tmp29 = tmp27->__get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(715)
					int v = tmp29;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(715)
					int tmp30 = (i * (int)4);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(715)
					int tmp31 = (tmp30 + (int)2);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(715)
					int tmp32 = v;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(715)
					byteArray->b[tmp31] = tmp32;
				}
				HX_STACK_LINE(716)
				{
					HX_STACK_LINE(716)
					::lime::utils::UInt8Array tmp27 = srcData;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(716)
					int tmp28 = (srcPosition)++;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(716)
					int tmp29 = tmp27->__get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(716)
					int v = tmp29;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(716)
					int tmp30 = (i * (int)4);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(716)
					int tmp31 = (tmp30 + (int)3);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(716)
					int tmp32 = v;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(716)
					byteArray->b[tmp31] = tmp32;
				}
				HX_STACK_LINE(717)
				{
					HX_STACK_LINE(717)
					::lime::utils::UInt8Array tmp27 = srcData;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(717)
					int tmp28 = (srcPosition)++;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(717)
					int tmp29 = tmp27->__get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(717)
					int v = tmp29;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(717)
					int tmp30 = (i * (int)4);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(717)
					int tmp31 = v;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(717)
					byteArray->b[tmp30] = tmp31;
				}
				HX_STACK_LINE(720)
				int tmp27 = hx::Mod(srcPosition,srcStride);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(720)
				int tmp28 = srcRowEnd;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(720)
				bool tmp29 = (tmp27 > tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(720)
				if ((tmp29)){
					HX_STACK_LINE(722)
					hx::AddEq(srcPosition,srcRowOffset);
				}
			}
		}
		else{
			HX_STACK_LINE(730)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(730)
			while((true)){
				HX_STACK_LINE(730)
				bool tmp24 = (_g < length);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(730)
				bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(730)
				if ((tmp25)){
					HX_STACK_LINE(730)
					break;
				}
				HX_STACK_LINE(730)
				int tmp26 = (_g)++;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(730)
				int i = tmp26;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(739)
				{
					HX_STACK_LINE(739)
					::lime::utils::UInt8Array tmp27 = srcData;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(739)
					int tmp28 = (srcPosition)++;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(739)
					int tmp29 = tmp27->__get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(739)
					int v = tmp29;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(739)
					int tmp30 = (i * (int)4);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(739)
					int tmp31 = v;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(739)
					byteArray->b[tmp30] = tmp31;
				}
				HX_STACK_LINE(740)
				{
					HX_STACK_LINE(740)
					::lime::utils::UInt8Array tmp27 = srcData;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(740)
					int tmp28 = (srcPosition)++;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(740)
					int tmp29 = tmp27->__get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(740)
					int v = tmp29;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(740)
					int tmp30 = (i * (int)4);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(740)
					int tmp31 = (tmp30 + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(740)
					int tmp32 = v;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(740)
					byteArray->b[tmp31] = tmp32;
				}
				HX_STACK_LINE(741)
				{
					HX_STACK_LINE(741)
					::lime::utils::UInt8Array tmp27 = srcData;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(741)
					int tmp28 = (srcPosition)++;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(741)
					int tmp29 = tmp27->__get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(741)
					int v = tmp29;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(741)
					int tmp30 = (i * (int)4);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(741)
					int tmp31 = (tmp30 + (int)2);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(741)
					int tmp32 = v;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(741)
					byteArray->b[tmp31] = tmp32;
				}
				HX_STACK_LINE(742)
				{
					HX_STACK_LINE(742)
					::lime::utils::UInt8Array tmp27 = srcData;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(742)
					int tmp28 = (srcPosition)++;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(742)
					int tmp29 = tmp27->__get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(742)
					int v = tmp29;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(742)
					int tmp30 = (i * (int)4);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(742)
					int tmp31 = (tmp30 + (int)3);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(742)
					int tmp32 = v;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(742)
					byteArray->b[tmp31] = tmp32;
				}
				HX_STACK_LINE(745)
				int tmp27 = hx::Mod(srcPosition,srcStride);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(745)
				int tmp28 = srcRowEnd;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(745)
				bool tmp29 = (tmp27 > tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(745)
				if ((tmp29)){
					HX_STACK_LINE(747)
					hx::AddEq(srcPosition,srcRowOffset);
				}
			}
		}
	}
	HX_STACK_LINE(757)
	byteArray->position = (int)0;
	HX_STACK_LINE(758)
	::lime::utils::ByteArray tmp8 = byteArray;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(758)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,getPixels,return )

Void ImageDataUtil_obj::merge( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","merge",0xf0318e4a,"lime.graphics.utils.ImageDataUtil.merge","lime/graphics/utils/ImageDataUtil.hx",763,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redMultiplier,"redMultiplier")
		HX_STACK_ARG(greenMultiplier,"greenMultiplier")
		HX_STACK_ARG(blueMultiplier,"blueMultiplier")
		HX_STACK_ARG(alphaMultiplier,"alphaMultiplier")
		HX_STACK_LINE(765)
		::lime::utils::UInt8Array tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(765)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(765)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(765)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(765)
		if ((tmp2)){
			HX_STACK_LINE(765)
			::lime::utils::UInt8Array tmp4 = sourceImage->buffer->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(765)
			::lime::utils::UInt8Array tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(765)
			tmp3 = (tmp5 == null());
		}
		else{
			HX_STACK_LINE(765)
			tmp3 = true;
		}
		HX_STACK_LINE(765)
		if ((tmp3)){
			HX_STACK_LINE(765)
			return null();
		}
		HX_STACK_LINE(768)
		bool tmp4 = ::lime::_system::System_obj::disableCFFI;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(768)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(768)
		if ((tmp5)){
			HX_STACK_LINE(768)
			::lime::graphics::Image tmp6 = image;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(768)
			::lime::graphics::Image tmp7 = sourceImage;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(768)
			::lime::math::Rectangle tmp8 = sourceRect;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(768)
			::lime::math::Vector2 tmp9 = destPoint;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(768)
			int tmp10 = redMultiplier;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(768)
			int tmp11 = greenMultiplier;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(768)
			int tmp12 = blueMultiplier;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(768)
			int tmp13 = alphaMultiplier;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(768)
			::lime::graphics::utils::ImageDataUtil_obj::lime_image_data_util_merge(tmp6,tmp7,tmp8,tmp9,tmp10,tmp11,tmp12,tmp13);
		}
		else{
			HX_STACK_LINE(772)
			Float tmp6 = (destPoint->y + image->offsetY);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(772)
			Float tmp7 = sourceRect->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(772)
			Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(772)
			int tmp9 = sourceImage->offsetY;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(772)
			Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(772)
			int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(772)
			int rowOffset = tmp11;		HX_STACK_VAR(rowOffset,"rowOffset");
			HX_STACK_LINE(773)
			Float tmp12 = (destPoint->x + image->offsetX);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(773)
			Float tmp13 = sourceRect->x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(773)
			Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(773)
			int tmp15 = sourceImage->offsetY;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(773)
			Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(773)
			int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(773)
			int columnOffset = tmp17;		HX_STACK_VAR(columnOffset,"columnOffset");
			HX_STACK_LINE(775)
			::lime::utils::UInt8Array tmp18 = sourceImage->buffer->data;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(775)
			::lime::utils::UInt8Array sourceData = tmp18;		HX_STACK_VAR(sourceData,"sourceData");
			HX_STACK_LINE(776)
			int tmp19 = sourceImage->buffer->width;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(776)
			int tmp20 = (tmp19 * (int)4);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(776)
			int sourceStride = tmp20;		HX_STACK_VAR(sourceStride,"sourceStride");
			HX_STACK_LINE(777)
			int sourceOffset = (int)0;		HX_STACK_VAR(sourceOffset,"sourceOffset");
			HX_STACK_LINE(779)
			::lime::utils::UInt8Array tmp21 = image->buffer->data;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(779)
			::lime::utils::UInt8Array data = tmp21;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(780)
			int tmp22 = image->buffer->width;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(780)
			int tmp23 = (tmp22 * (int)4);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(780)
			int stride = tmp23;		HX_STACK_VAR(stride,"stride");
			HX_STACK_LINE(781)
			int offset = (int)0;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(783)
			{
				HX_STACK_LINE(783)
				Float tmp24 = sourceRect->get_top();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(783)
				int tmp25 = sourceImage->offsetY;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(783)
				Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(783)
				int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(783)
				int _g1 = tmp27;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(783)
				Float tmp28 = sourceRect->get_bottom();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(783)
				int tmp29 = sourceImage->offsetY;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(783)
				Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(783)
				int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(783)
				int _g = tmp31;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(783)
				while((true)){
					HX_STACK_LINE(783)
					bool tmp32 = (_g1 < _g);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(783)
					bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(783)
					if ((tmp33)){
						HX_STACK_LINE(783)
						break;
					}
					HX_STACK_LINE(783)
					int tmp34 = (_g1)++;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(783)
					int row = tmp34;		HX_STACK_VAR(row,"row");
					HX_STACK_LINE(785)
					{
						HX_STACK_LINE(785)
						Float tmp35 = sourceRect->get_left();		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(785)
						int tmp36 = sourceImage->offsetX;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(785)
						Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(785)
						int tmp38 = ::Std_obj::_int(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(785)
						int _g3 = tmp38;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(785)
						Float tmp39 = sourceRect->get_right();		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(785)
						int tmp40 = sourceImage->offsetX;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(785)
						Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(785)
						int tmp42 = ::Std_obj::_int(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(785)
						int _g2 = tmp42;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(785)
						while((true)){
							HX_STACK_LINE(785)
							bool tmp43 = (_g3 < _g2);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(785)
							bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(785)
							if ((tmp44)){
								HX_STACK_LINE(785)
								break;
							}
							HX_STACK_LINE(785)
							int tmp45 = (_g3)++;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(785)
							int column = tmp45;		HX_STACK_VAR(column,"column");
							HX_STACK_LINE(787)
							int tmp46 = (row * sourceStride);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(787)
							int tmp47 = (column * (int)4);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(787)
							int tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(787)
							sourceOffset = tmp48;
							HX_STACK_LINE(788)
							int tmp49 = (row + rowOffset);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(788)
							int tmp50 = stride;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(788)
							int tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(788)
							int tmp52 = (column + columnOffset);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(788)
							int tmp53 = (tmp52 * (int)4);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(788)
							int tmp54 = (tmp51 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(788)
							offset = tmp54;
							HX_STACK_LINE(790)
							int tmp55 = sourceData->__get(offset);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(790)
							int tmp56 = redMultiplier;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(790)
							int tmp57 = (tmp55 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(790)
							int tmp58 = data->__get(offset);		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(790)
							int tmp59 = ((int)256 - redMultiplier);		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(790)
							int tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(790)
							int tmp61 = (tmp57 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(790)
							Float tmp62 = (Float(tmp61) / Float((int)256));		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(790)
							int tmp63 = ::Std_obj::_int(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(790)
							hx::__ArrayImplRef(data,offset) = tmp63;
							HX_STACK_LINE(791)
							::lime::utils::UInt8Array tmp64 = data;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(791)
							int tmp65 = (offset + (int)1);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(791)
							::lime::utils::UInt8Array tmp66 = sourceData;		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(791)
							int tmp67 = (offset + (int)1);		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(791)
							int tmp68 = tmp66->__get(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(791)
							int tmp69 = greenMultiplier;		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(791)
							int tmp70 = (tmp68 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(791)
							::lime::utils::UInt8Array tmp71 = data;		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(791)
							int tmp72 = (offset + (int)1);		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(791)
							int tmp73 = tmp71->__get(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
							HX_STACK_LINE(791)
							int tmp74 = ((int)256 - greenMultiplier);		HX_STACK_VAR(tmp74,"tmp74");
							HX_STACK_LINE(791)
							int tmp75 = (tmp73 * tmp74);		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(791)
							int tmp76 = (tmp70 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(791)
							Float tmp77 = (Float(tmp76) / Float((int)256));		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(791)
							int tmp78 = ::Std_obj::_int(tmp77);		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(791)
							hx::__ArrayImplRef(tmp64,tmp65) = tmp78;
							HX_STACK_LINE(792)
							::lime::utils::UInt8Array tmp79 = data;		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(792)
							int tmp80 = (offset + (int)2);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(792)
							::lime::utils::UInt8Array tmp81 = sourceData;		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(792)
							int tmp82 = (offset + (int)2);		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(792)
							int tmp83 = tmp81->__get(tmp82);		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(792)
							int tmp84 = blueMultiplier;		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(792)
							int tmp85 = (tmp83 * tmp84);		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(792)
							::lime::utils::UInt8Array tmp86 = data;		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(792)
							int tmp87 = (offset + (int)2);		HX_STACK_VAR(tmp87,"tmp87");
							HX_STACK_LINE(792)
							int tmp88 = tmp86->__get(tmp87);		HX_STACK_VAR(tmp88,"tmp88");
							HX_STACK_LINE(792)
							int tmp89 = ((int)256 - blueMultiplier);		HX_STACK_VAR(tmp89,"tmp89");
							HX_STACK_LINE(792)
							int tmp90 = (tmp88 * tmp89);		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(792)
							int tmp91 = (tmp85 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
							HX_STACK_LINE(792)
							Float tmp92 = (Float(tmp91) / Float((int)256));		HX_STACK_VAR(tmp92,"tmp92");
							HX_STACK_LINE(792)
							int tmp93 = ::Std_obj::_int(tmp92);		HX_STACK_VAR(tmp93,"tmp93");
							HX_STACK_LINE(792)
							hx::__ArrayImplRef(tmp79,tmp80) = tmp93;
							HX_STACK_LINE(793)
							::lime::utils::UInt8Array tmp94 = data;		HX_STACK_VAR(tmp94,"tmp94");
							HX_STACK_LINE(793)
							int tmp95 = (offset + (int)3);		HX_STACK_VAR(tmp95,"tmp95");
							HX_STACK_LINE(793)
							::lime::utils::UInt8Array tmp96 = sourceData;		HX_STACK_VAR(tmp96,"tmp96");
							HX_STACK_LINE(793)
							int tmp97 = (offset + (int)3);		HX_STACK_VAR(tmp97,"tmp97");
							HX_STACK_LINE(793)
							int tmp98 = tmp96->__get(tmp97);		HX_STACK_VAR(tmp98,"tmp98");
							HX_STACK_LINE(793)
							int tmp99 = alphaMultiplier;		HX_STACK_VAR(tmp99,"tmp99");
							HX_STACK_LINE(793)
							int tmp100 = (tmp98 * tmp99);		HX_STACK_VAR(tmp100,"tmp100");
							HX_STACK_LINE(793)
							::lime::utils::UInt8Array tmp101 = data;		HX_STACK_VAR(tmp101,"tmp101");
							HX_STACK_LINE(793)
							int tmp102 = (offset + (int)3);		HX_STACK_VAR(tmp102,"tmp102");
							HX_STACK_LINE(793)
							int tmp103 = tmp101->__get(tmp102);		HX_STACK_VAR(tmp103,"tmp103");
							HX_STACK_LINE(793)
							int tmp104 = ((int)256 - alphaMultiplier);		HX_STACK_VAR(tmp104,"tmp104");
							HX_STACK_LINE(793)
							int tmp105 = (tmp103 * tmp104);		HX_STACK_VAR(tmp105,"tmp105");
							HX_STACK_LINE(793)
							int tmp106 = (tmp100 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
							HX_STACK_LINE(793)
							Float tmp107 = (Float(tmp106) / Float((int)256));		HX_STACK_VAR(tmp107,"tmp107");
							HX_STACK_LINE(793)
							int tmp108 = ::Std_obj::_int(tmp107);		HX_STACK_VAR(tmp108,"tmp108");
							HX_STACK_LINE(793)
							hx::__ArrayImplRef(tmp94,tmp95) = tmp108;
						}
					}
				}
			}
		}
		HX_STACK_LINE(801)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(ImageDataUtil_obj,merge,(void))

Void ImageDataUtil_obj::multiplyAlpha( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","multiplyAlpha",0xb898c02c,"lime.graphics.utils.ImageDataUtil.multiplyAlpha","lime/graphics/utils/ImageDataUtil.hx",806,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(808)
		::lime::utils::UInt8Array tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(808)
		::lime::utils::UInt8Array data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(809)
		bool tmp1 = (data == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(809)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(809)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(809)
		if ((tmp2)){
			HX_STACK_LINE(809)
			bool tmp4 = image->buffer->transparent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(809)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(809)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(809)
			tmp3 = !(tmp6);
		}
		else{
			HX_STACK_LINE(809)
			tmp3 = true;
		}
		HX_STACK_LINE(809)
		if ((tmp3)){
			HX_STACK_LINE(809)
			return null();
		}
		HX_STACK_LINE(812)
		bool tmp4 = ::lime::_system::System_obj::disableCFFI;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(812)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(812)
		if ((tmp5)){
			HX_STACK_LINE(812)
			::lime::graphics::Image tmp6 = image;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(812)
			::lime::graphics::utils::ImageDataUtil_obj::lime_image_data_util_multiply_alpha(tmp6);
		}
		else{
			HX_STACK_LINE(816)
			int index;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(816)
			int a16;		HX_STACK_VAR(a16,"a16");
			HX_STACK_LINE(817)
			Float tmp6 = (Float(data->length) / Float((int)4));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(817)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(817)
			int length = tmp7;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(819)
			{
				HX_STACK_LINE(819)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(819)
				while((true)){
					HX_STACK_LINE(819)
					bool tmp8 = (_g < length);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(819)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(819)
					if ((tmp9)){
						HX_STACK_LINE(819)
						break;
					}
					HX_STACK_LINE(819)
					int tmp10 = (_g)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(819)
					int i = tmp10;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(821)
					int tmp11 = (i * (int)4);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(821)
					index = tmp11;
					HX_STACK_LINE(823)
					Array< int > tmp12 = ::lime::graphics::utils::ImageDataUtil_obj::__alpha16;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(823)
					::lime::utils::UInt8Array tmp13 = data;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(823)
					int tmp14 = (index + (int)3);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(823)
					int tmp15 = tmp13->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(823)
					int tmp16 = tmp12->__unsafe_get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(823)
					a16 = tmp16;
					HX_STACK_LINE(824)
					int tmp17 = data->__get(index);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(824)
					int tmp18 = a16;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(824)
					int tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(824)
					int tmp20 = (int(tmp19) >> int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(824)
					hx::__ArrayImplRef(data,index) = tmp20;
					HX_STACK_LINE(825)
					::lime::utils::UInt8Array tmp21 = data;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(825)
					int tmp22 = (index + (int)1);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(825)
					::lime::utils::UInt8Array tmp23 = data;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(825)
					int tmp24 = (index + (int)1);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(825)
					int tmp25 = tmp23->__get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(825)
					int tmp26 = a16;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(825)
					int tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(825)
					int tmp28 = (int(tmp27) >> int((int)16));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(825)
					hx::__ArrayImplRef(tmp21,tmp22) = tmp28;
					HX_STACK_LINE(826)
					::lime::utils::UInt8Array tmp29 = data;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(826)
					int tmp30 = (index + (int)2);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(826)
					::lime::utils::UInt8Array tmp31 = data;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(826)
					int tmp32 = (index + (int)2);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(826)
					int tmp33 = tmp31->__get(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(826)
					int tmp34 = a16;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(826)
					int tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(826)
					int tmp36 = (int(tmp35) >> int((int)16));		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(826)
					hx::__ArrayImplRef(tmp29,tmp30) = tmp36;
				}
			}
		}
		HX_STACK_LINE(832)
		image->buffer->premultiplied = true;
		HX_STACK_LINE(833)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageDataUtil_obj,multiplyAlpha,(void))

Void ImageDataUtil_obj::resize( ::lime::graphics::Image image,int newWidth,int newHeight){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","resize",0x3b9e8e22,"lime.graphics.utils.ImageDataUtil.resize","lime/graphics/utils/ImageDataUtil.hx",838,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(newWidth,"newWidth")
		HX_STACK_ARG(newHeight,"newHeight")
		HX_STACK_LINE(840)
		::lime::graphics::ImageBuffer buffer = image->buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(841)
		bool tmp = (buffer->width == newWidth);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(841)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(841)
		if ((tmp)){
			HX_STACK_LINE(841)
			tmp1 = (buffer->height == newHeight);
		}
		else{
			HX_STACK_LINE(841)
			tmp1 = false;
		}
		HX_STACK_LINE(841)
		if ((tmp1)){
			HX_STACK_LINE(841)
			return null();
		}
		HX_STACK_LINE(842)
		int tmp2 = (newWidth * newHeight);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(842)
		int tmp3 = (tmp2 * (int)4);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(842)
		::lime::utils::UInt8Array tmp4 = ::lime::utils::UInt8Array_obj::__new(tmp3,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(842)
		int tmp5 = newWidth;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(842)
		int tmp6 = newHeight;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(842)
		::lime::graphics::ImageBuffer tmp7 = ::lime::graphics::ImageBuffer_obj::__new(tmp4,tmp5,tmp6,null(),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(842)
		::lime::graphics::ImageBuffer newBuffer = tmp7;		HX_STACK_VAR(newBuffer,"newBuffer");
		HX_STACK_LINE(845)
		bool tmp8 = ::lime::_system::System_obj::disableCFFI;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(845)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(845)
		if ((tmp9)){
			HX_STACK_LINE(845)
			::lime::graphics::Image tmp10 = image;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(845)
			::lime::graphics::ImageBuffer tmp11 = newBuffer;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(845)
			int tmp12 = newWidth;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(845)
			int tmp13 = newHeight;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(845)
			::lime::graphics::utils::ImageDataUtil_obj::lime_image_data_util_resize(tmp10,tmp11,tmp12,tmp13);
		}
		else{
			HX_STACK_LINE(849)
			int imageWidth = image->width;		HX_STACK_VAR(imageWidth,"imageWidth");
			HX_STACK_LINE(850)
			int imageHeight = image->height;		HX_STACK_VAR(imageHeight,"imageHeight");
			HX_STACK_LINE(852)
			::lime::utils::UInt8Array tmp10 = image->get_data();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(852)
			::lime::utils::UInt8Array data = tmp10;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(853)
			::lime::utils::UInt8Array newData = newBuffer->data;		HX_STACK_VAR(newData,"newData");
			HX_STACK_LINE(854)
			int sourceIndex;		HX_STACK_VAR(sourceIndex,"sourceIndex");
			HX_STACK_LINE(854)
			int sourceIndexX;		HX_STACK_VAR(sourceIndexX,"sourceIndexX");
			HX_STACK_LINE(854)
			int sourceIndexY;		HX_STACK_VAR(sourceIndexY,"sourceIndexY");
			HX_STACK_LINE(854)
			int sourceIndexXY;		HX_STACK_VAR(sourceIndexXY,"sourceIndexXY");
			HX_STACK_LINE(854)
			int index;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(855)
			int sourceX;		HX_STACK_VAR(sourceX,"sourceX");
			HX_STACK_LINE(855)
			int sourceY;		HX_STACK_VAR(sourceY,"sourceY");
			HX_STACK_LINE(856)
			Float u;		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(856)
			Float v;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(856)
			Float uRatio;		HX_STACK_VAR(uRatio,"uRatio");
			HX_STACK_LINE(856)
			Float vRatio;		HX_STACK_VAR(vRatio,"vRatio");
			HX_STACK_LINE(856)
			Float uOpposite;		HX_STACK_VAR(uOpposite,"uOpposite");
			HX_STACK_LINE(856)
			Float vOpposite;		HX_STACK_VAR(vOpposite,"vOpposite");
			HX_STACK_LINE(858)
			{
				HX_STACK_LINE(858)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(858)
				while((true)){
					HX_STACK_LINE(858)
					bool tmp11 = (_g < newHeight);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(858)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(858)
					if ((tmp12)){
						HX_STACK_LINE(858)
						break;
					}
					HX_STACK_LINE(858)
					int tmp13 = (_g)++;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(858)
					int y = tmp13;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(860)
					{
						HX_STACK_LINE(860)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(860)
						while((true)){
							HX_STACK_LINE(860)
							bool tmp14 = (_g1 < newWidth);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(860)
							bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(860)
							if ((tmp15)){
								HX_STACK_LINE(860)
								break;
							}
							HX_STACK_LINE(860)
							int tmp16 = (_g1)++;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(860)
							int x = tmp16;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(862)
							Float tmp17 = (x + ((Float)0.5));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(862)
							int tmp18 = newWidth;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(862)
							Float tmp19 = (Float(tmp17) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(862)
							int tmp20 = imageWidth;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(862)
							Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(862)
							Float tmp22 = (tmp21 - ((Float)0.5));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(862)
							u = tmp22;
							HX_STACK_LINE(863)
							Float tmp23 = (y + ((Float)0.5));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(863)
							int tmp24 = newHeight;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(863)
							Float tmp25 = (Float(tmp23) / Float(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(863)
							int tmp26 = imageHeight;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(863)
							Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(863)
							Float tmp28 = (tmp27 - ((Float)0.5));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(863)
							v = tmp28;
							HX_STACK_LINE(865)
							Float tmp29 = u;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(865)
							int tmp30 = ::Std_obj::_int(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(865)
							sourceX = tmp30;
							HX_STACK_LINE(866)
							Float tmp31 = v;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(866)
							int tmp32 = ::Std_obj::_int(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(866)
							sourceY = tmp32;
							HX_STACK_LINE(868)
							int tmp33 = (sourceY * imageWidth);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(868)
							int tmp34 = sourceX;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(868)
							int tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(868)
							int tmp36 = (tmp35 * (int)4);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(868)
							sourceIndex = tmp36;
							HX_STACK_LINE(869)
							int tmp37 = sourceX;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(869)
							int tmp38 = (imageWidth - (int)1);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(869)
							bool tmp39 = (tmp37 < tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(869)
							int tmp40;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(869)
							if ((tmp39)){
								HX_STACK_LINE(869)
								tmp40 = (sourceIndex + (int)4);
							}
							else{
								HX_STACK_LINE(869)
								tmp40 = sourceIndex;
							}
							HX_STACK_LINE(869)
							sourceIndexX = tmp40;
							HX_STACK_LINE(870)
							int tmp41 = sourceY;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(870)
							int tmp42 = (imageHeight - (int)1);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(870)
							bool tmp43 = (tmp41 < tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(870)
							int tmp44;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(870)
							if ((tmp43)){
								HX_STACK_LINE(870)
								int tmp45 = sourceIndex;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(870)
								int tmp46 = (imageWidth * (int)4);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(870)
								tmp44 = (tmp45 + tmp46);
							}
							else{
								HX_STACK_LINE(870)
								tmp44 = sourceIndex;
							}
							HX_STACK_LINE(870)
							sourceIndexY = tmp44;
							HX_STACK_LINE(871)
							bool tmp45 = (sourceIndexX != sourceIndex);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(871)
							int tmp46;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(871)
							if ((tmp45)){
								HX_STACK_LINE(871)
								tmp46 = (sourceIndexY + (int)4);
							}
							else{
								HX_STACK_LINE(871)
								tmp46 = sourceIndexY;
							}
							HX_STACK_LINE(871)
							sourceIndexXY = tmp46;
							HX_STACK_LINE(873)
							int tmp47 = (y * newWidth);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(873)
							int tmp48 = x;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(873)
							int tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(873)
							int tmp50 = (tmp49 * (int)4);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(873)
							index = tmp50;
							HX_STACK_LINE(875)
							Float tmp51 = (u - sourceX);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(875)
							uRatio = tmp51;
							HX_STACK_LINE(876)
							Float tmp52 = (v - sourceY);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(876)
							vRatio = tmp52;
							HX_STACK_LINE(877)
							Float tmp53 = ((int)1 - uRatio);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(877)
							uOpposite = tmp53;
							HX_STACK_LINE(878)
							Float tmp54 = ((int)1 - vRatio);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(878)
							vOpposite = tmp54;
							HX_STACK_LINE(880)
							int tmp55 = data->__get(sourceIndex);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(880)
							Float tmp56 = uOpposite;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(880)
							Float tmp57 = (tmp55 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(880)
							int tmp58 = data->__get(sourceIndexX);		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(880)
							Float tmp59 = uRatio;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(880)
							Float tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(880)
							Float tmp61 = (tmp57 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(880)
							Float tmp62 = vOpposite;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(880)
							Float tmp63 = (tmp61 * tmp62);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(880)
							int tmp64 = data->__get(sourceIndexY);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(880)
							Float tmp65 = uOpposite;		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(880)
							Float tmp66 = (tmp64 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(880)
							int tmp67 = data->__get(sourceIndexXY);		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(880)
							Float tmp68 = uRatio;		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(880)
							Float tmp69 = (tmp67 * tmp68);		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(880)
							Float tmp70 = (tmp66 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(880)
							Float tmp71 = vRatio;		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(880)
							Float tmp72 = (tmp70 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(880)
							Float tmp73 = (tmp63 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
							HX_STACK_LINE(880)
							int tmp74 = ::Std_obj::_int(tmp73);		HX_STACK_VAR(tmp74,"tmp74");
							HX_STACK_LINE(880)
							hx::__ArrayImplRef(newData,index) = tmp74;
							HX_STACK_LINE(881)
							::lime::utils::UInt8Array tmp75 = newData;		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(881)
							int tmp76 = (index + (int)1);		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(881)
							::lime::utils::UInt8Array tmp77 = data;		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(881)
							int tmp78 = (sourceIndex + (int)1);		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(881)
							int tmp79 = tmp77->__get(tmp78);		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(881)
							Float tmp80 = uOpposite;		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(881)
							Float tmp81 = (tmp79 * tmp80);		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(881)
							::lime::utils::UInt8Array tmp82 = data;		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(881)
							int tmp83 = (sourceIndexX + (int)1);		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(881)
							int tmp84 = tmp82->__get(tmp83);		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(881)
							Float tmp85 = uRatio;		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(881)
							Float tmp86 = (tmp84 * tmp85);		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(881)
							Float tmp87 = (tmp81 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
							HX_STACK_LINE(881)
							Float tmp88 = vOpposite;		HX_STACK_VAR(tmp88,"tmp88");
							HX_STACK_LINE(881)
							Float tmp89 = (tmp87 * tmp88);		HX_STACK_VAR(tmp89,"tmp89");
							HX_STACK_LINE(881)
							::lime::utils::UInt8Array tmp90 = data;		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(881)
							int tmp91 = (sourceIndexY + (int)1);		HX_STACK_VAR(tmp91,"tmp91");
							HX_STACK_LINE(881)
							int tmp92 = tmp90->__get(tmp91);		HX_STACK_VAR(tmp92,"tmp92");
							HX_STACK_LINE(881)
							Float tmp93 = uOpposite;		HX_STACK_VAR(tmp93,"tmp93");
							HX_STACK_LINE(881)
							Float tmp94 = (tmp92 * tmp93);		HX_STACK_VAR(tmp94,"tmp94");
							HX_STACK_LINE(881)
							::lime::utils::UInt8Array tmp95 = data;		HX_STACK_VAR(tmp95,"tmp95");
							HX_STACK_LINE(881)
							int tmp96 = (sourceIndexXY + (int)1);		HX_STACK_VAR(tmp96,"tmp96");
							HX_STACK_LINE(881)
							int tmp97 = tmp95->__get(tmp96);		HX_STACK_VAR(tmp97,"tmp97");
							HX_STACK_LINE(881)
							Float tmp98 = uRatio;		HX_STACK_VAR(tmp98,"tmp98");
							HX_STACK_LINE(881)
							Float tmp99 = (tmp97 * tmp98);		HX_STACK_VAR(tmp99,"tmp99");
							HX_STACK_LINE(881)
							Float tmp100 = (tmp94 + tmp99);		HX_STACK_VAR(tmp100,"tmp100");
							HX_STACK_LINE(881)
							Float tmp101 = vRatio;		HX_STACK_VAR(tmp101,"tmp101");
							HX_STACK_LINE(881)
							Float tmp102 = (tmp100 * tmp101);		HX_STACK_VAR(tmp102,"tmp102");
							HX_STACK_LINE(881)
							Float tmp103 = (tmp89 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
							HX_STACK_LINE(881)
							int tmp104 = ::Std_obj::_int(tmp103);		HX_STACK_VAR(tmp104,"tmp104");
							HX_STACK_LINE(881)
							hx::__ArrayImplRef(tmp75,tmp76) = tmp104;
							HX_STACK_LINE(882)
							::lime::utils::UInt8Array tmp105 = newData;		HX_STACK_VAR(tmp105,"tmp105");
							HX_STACK_LINE(882)
							int tmp106 = (index + (int)2);		HX_STACK_VAR(tmp106,"tmp106");
							HX_STACK_LINE(882)
							::lime::utils::UInt8Array tmp107 = data;		HX_STACK_VAR(tmp107,"tmp107");
							HX_STACK_LINE(882)
							int tmp108 = (sourceIndex + (int)2);		HX_STACK_VAR(tmp108,"tmp108");
							HX_STACK_LINE(882)
							int tmp109 = tmp107->__get(tmp108);		HX_STACK_VAR(tmp109,"tmp109");
							HX_STACK_LINE(882)
							Float tmp110 = uOpposite;		HX_STACK_VAR(tmp110,"tmp110");
							HX_STACK_LINE(882)
							Float tmp111 = (tmp109 * tmp110);		HX_STACK_VAR(tmp111,"tmp111");
							HX_STACK_LINE(882)
							::lime::utils::UInt8Array tmp112 = data;		HX_STACK_VAR(tmp112,"tmp112");
							HX_STACK_LINE(882)
							int tmp113 = (sourceIndexX + (int)2);		HX_STACK_VAR(tmp113,"tmp113");
							HX_STACK_LINE(882)
							int tmp114 = tmp112->__get(tmp113);		HX_STACK_VAR(tmp114,"tmp114");
							HX_STACK_LINE(882)
							Float tmp115 = uRatio;		HX_STACK_VAR(tmp115,"tmp115");
							HX_STACK_LINE(882)
							Float tmp116 = (tmp114 * tmp115);		HX_STACK_VAR(tmp116,"tmp116");
							HX_STACK_LINE(882)
							Float tmp117 = (tmp111 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
							HX_STACK_LINE(882)
							Float tmp118 = vOpposite;		HX_STACK_VAR(tmp118,"tmp118");
							HX_STACK_LINE(882)
							Float tmp119 = (tmp117 * tmp118);		HX_STACK_VAR(tmp119,"tmp119");
							HX_STACK_LINE(882)
							::lime::utils::UInt8Array tmp120 = data;		HX_STACK_VAR(tmp120,"tmp120");
							HX_STACK_LINE(882)
							int tmp121 = (sourceIndexY + (int)2);		HX_STACK_VAR(tmp121,"tmp121");
							HX_STACK_LINE(882)
							int tmp122 = tmp120->__get(tmp121);		HX_STACK_VAR(tmp122,"tmp122");
							HX_STACK_LINE(882)
							Float tmp123 = uOpposite;		HX_STACK_VAR(tmp123,"tmp123");
							HX_STACK_LINE(882)
							Float tmp124 = (tmp122 * tmp123);		HX_STACK_VAR(tmp124,"tmp124");
							HX_STACK_LINE(882)
							::lime::utils::UInt8Array tmp125 = data;		HX_STACK_VAR(tmp125,"tmp125");
							HX_STACK_LINE(882)
							int tmp126 = (sourceIndexXY + (int)2);		HX_STACK_VAR(tmp126,"tmp126");
							HX_STACK_LINE(882)
							int tmp127 = tmp125->__get(tmp126);		HX_STACK_VAR(tmp127,"tmp127");
							HX_STACK_LINE(882)
							Float tmp128 = uRatio;		HX_STACK_VAR(tmp128,"tmp128");
							HX_STACK_LINE(882)
							Float tmp129 = (tmp127 * tmp128);		HX_STACK_VAR(tmp129,"tmp129");
							HX_STACK_LINE(882)
							Float tmp130 = (tmp124 + tmp129);		HX_STACK_VAR(tmp130,"tmp130");
							HX_STACK_LINE(882)
							Float tmp131 = vRatio;		HX_STACK_VAR(tmp131,"tmp131");
							HX_STACK_LINE(882)
							Float tmp132 = (tmp130 * tmp131);		HX_STACK_VAR(tmp132,"tmp132");
							HX_STACK_LINE(882)
							Float tmp133 = (tmp119 + tmp132);		HX_STACK_VAR(tmp133,"tmp133");
							HX_STACK_LINE(882)
							int tmp134 = ::Std_obj::_int(tmp133);		HX_STACK_VAR(tmp134,"tmp134");
							HX_STACK_LINE(882)
							hx::__ArrayImplRef(tmp105,tmp106) = tmp134;
							HX_STACK_LINE(886)
							::lime::utils::UInt8Array tmp135 = data;		HX_STACK_VAR(tmp135,"tmp135");
							HX_STACK_LINE(886)
							int tmp136 = (sourceIndexX + (int)3);		HX_STACK_VAR(tmp136,"tmp136");
							HX_STACK_LINE(886)
							int tmp137 = tmp135->__get(tmp136);		HX_STACK_VAR(tmp137,"tmp137");
							HX_STACK_LINE(886)
							bool tmp138 = (tmp137 == (int)0);		HX_STACK_VAR(tmp138,"tmp138");
							HX_STACK_LINE(886)
							bool tmp139 = !(tmp138);		HX_STACK_VAR(tmp139,"tmp139");
							HX_STACK_LINE(886)
							bool tmp140 = tmp139;		HX_STACK_VAR(tmp140,"tmp140");
							HX_STACK_LINE(886)
							bool tmp141;		HX_STACK_VAR(tmp141,"tmp141");
							HX_STACK_LINE(886)
							if ((tmp140)){
								HX_STACK_LINE(886)
								::lime::utils::UInt8Array tmp142 = data;		HX_STACK_VAR(tmp142,"tmp142");
								HX_STACK_LINE(886)
								int tmp143 = (sourceIndexY + (int)3);		HX_STACK_VAR(tmp143,"tmp143");
								HX_STACK_LINE(886)
								int tmp144 = tmp143;		HX_STACK_VAR(tmp144,"tmp144");
								HX_STACK_LINE(886)
								int tmp145 = tmp144;		HX_STACK_VAR(tmp145,"tmp145");
								HX_STACK_LINE(886)
								int tmp146 = tmp142->__get(tmp145);		HX_STACK_VAR(tmp146,"tmp146");
								HX_STACK_LINE(886)
								int tmp147 = tmp146;		HX_STACK_VAR(tmp147,"tmp147");
								HX_STACK_LINE(886)
								int tmp148 = tmp147;		HX_STACK_VAR(tmp148,"tmp148");
								HX_STACK_LINE(886)
								tmp141 = (tmp148 == (int)0);
							}
							else{
								HX_STACK_LINE(886)
								tmp141 = true;
							}
							HX_STACK_LINE(886)
							bool tmp142 = !(tmp141);		HX_STACK_VAR(tmp142,"tmp142");
							HX_STACK_LINE(886)
							bool tmp143;		HX_STACK_VAR(tmp143,"tmp143");
							HX_STACK_LINE(886)
							if ((tmp142)){
								HX_STACK_LINE(886)
								::lime::utils::UInt8Array tmp144 = data;		HX_STACK_VAR(tmp144,"tmp144");
								HX_STACK_LINE(886)
								int tmp145 = (sourceIndexXY + (int)3);		HX_STACK_VAR(tmp145,"tmp145");
								HX_STACK_LINE(886)
								int tmp146 = tmp145;		HX_STACK_VAR(tmp146,"tmp146");
								HX_STACK_LINE(886)
								int tmp147 = tmp144->__get(tmp146);		HX_STACK_VAR(tmp147,"tmp147");
								HX_STACK_LINE(886)
								int tmp148 = tmp147;		HX_STACK_VAR(tmp148,"tmp148");
								HX_STACK_LINE(886)
								tmp143 = (tmp148 == (int)0);
							}
							else{
								HX_STACK_LINE(886)
								tmp143 = true;
							}
							HX_STACK_LINE(886)
							if ((tmp143)){
								HX_STACK_LINE(888)
								::lime::utils::UInt8Array tmp144 = newData;		HX_STACK_VAR(tmp144,"tmp144");
								HX_STACK_LINE(888)
								int tmp145 = (index + (int)3);		HX_STACK_VAR(tmp145,"tmp145");
								HX_STACK_LINE(888)
								hx::__ArrayImplRef(tmp144,tmp145) = (int)0;
							}
							else{
								HX_STACK_LINE(892)
								::lime::utils::UInt8Array tmp144 = newData;		HX_STACK_VAR(tmp144,"tmp144");
								HX_STACK_LINE(892)
								int tmp145 = (index + (int)3);		HX_STACK_VAR(tmp145,"tmp145");
								HX_STACK_LINE(892)
								::lime::utils::UInt8Array tmp146 = data;		HX_STACK_VAR(tmp146,"tmp146");
								HX_STACK_LINE(892)
								int tmp147 = (sourceIndex + (int)3);		HX_STACK_VAR(tmp147,"tmp147");
								HX_STACK_LINE(892)
								int tmp148 = tmp146->__get(tmp147);		HX_STACK_VAR(tmp148,"tmp148");
								HX_STACK_LINE(892)
								hx::__ArrayImplRef(tmp144,tmp145) = tmp148;
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(902)
		buffer->data = newBuffer->data;
		HX_STACK_LINE(903)
		buffer->width = newWidth;
		HX_STACK_LINE(904)
		buffer->height = newHeight;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,resize,(void))

Void ImageDataUtil_obj::resizeBuffer( ::lime::graphics::Image image,int newWidth,int newHeight){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","resizeBuffer",0x390004c2,"lime.graphics.utils.ImageDataUtil.resizeBuffer","lime/graphics/utils/ImageDataUtil.hx",909,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(newWidth,"newWidth")
		HX_STACK_ARG(newHeight,"newHeight")
		HX_STACK_LINE(911)
		::lime::graphics::ImageBuffer buffer = image->buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(912)
		::lime::utils::UInt8Array tmp = image->get_data();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(912)
		::lime::utils::UInt8Array data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(913)
		int tmp1 = (newWidth * newHeight);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(913)
		int tmp2 = (tmp1 * (int)4);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(913)
		::lime::utils::UInt8Array tmp3 = ::lime::utils::UInt8Array_obj::__new(tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(913)
		::lime::utils::UInt8Array newData = tmp3;		HX_STACK_VAR(newData,"newData");
		HX_STACK_LINE(914)
		int sourceIndex;		HX_STACK_VAR(sourceIndex,"sourceIndex");
		HX_STACK_LINE(914)
		int index;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(916)
		{
			HX_STACK_LINE(916)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(916)
			int _g = buffer->height;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(916)
			while((true)){
				HX_STACK_LINE(916)
				bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(916)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(916)
				if ((tmp5)){
					HX_STACK_LINE(916)
					break;
				}
				HX_STACK_LINE(916)
				int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(916)
				int y = tmp6;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(918)
				{
					HX_STACK_LINE(918)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(918)
					int _g2 = buffer->width;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(918)
					while((true)){
						HX_STACK_LINE(918)
						bool tmp7 = (_g3 < _g2);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(918)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(918)
						if ((tmp8)){
							HX_STACK_LINE(918)
							break;
						}
						HX_STACK_LINE(918)
						int tmp9 = (_g3)++;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(918)
						int x = tmp9;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(920)
						int tmp10 = (y * buffer->width);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(920)
						int tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(920)
						int tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(920)
						int tmp13 = (tmp12 * (int)4);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(920)
						sourceIndex = tmp13;
						HX_STACK_LINE(921)
						int tmp14 = (y * newWidth);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(921)
						int tmp15 = x;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(921)
						int tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(921)
						int tmp17 = (tmp16 * (int)4);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(921)
						index = tmp17;
						HX_STACK_LINE(923)
						int tmp18 = data->__get(sourceIndex);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(923)
						hx::__ArrayImplRef(newData,index) = tmp18;
						HX_STACK_LINE(924)
						::lime::utils::UInt8Array tmp19 = newData;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(924)
						int tmp20 = (index + (int)1);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(924)
						::lime::utils::UInt8Array tmp21 = data;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(924)
						int tmp22 = (sourceIndex + (int)1);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(924)
						int tmp23 = tmp21->__get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(924)
						hx::__ArrayImplRef(tmp19,tmp20) = tmp23;
						HX_STACK_LINE(925)
						::lime::utils::UInt8Array tmp24 = newData;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(925)
						int tmp25 = (index + (int)2);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(925)
						::lime::utils::UInt8Array tmp26 = data;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(925)
						int tmp27 = (sourceIndex + (int)2);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(925)
						int tmp28 = tmp26->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(925)
						hx::__ArrayImplRef(tmp24,tmp25) = tmp28;
						HX_STACK_LINE(926)
						::lime::utils::UInt8Array tmp29 = newData;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(926)
						int tmp30 = (index + (int)3);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(926)
						::lime::utils::UInt8Array tmp31 = data;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(926)
						int tmp32 = (sourceIndex + (int)3);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(926)
						int tmp33 = tmp31->__get(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(926)
						hx::__ArrayImplRef(tmp29,tmp30) = tmp33;
					}
				}
			}
		}
		HX_STACK_LINE(932)
		buffer->data = newData;
		HX_STACK_LINE(933)
		buffer->width = newWidth;
		HX_STACK_LINE(934)
		buffer->height = newHeight;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,resizeBuffer,(void))

Void ImageDataUtil_obj::setFormat( ::lime::graphics::Image image,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","setFormat",0xff73210b,"lime.graphics.utils.ImageDataUtil.setFormat","lime/graphics/utils/ImageDataUtil.hx",939,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(941)
		::lime::utils::UInt8Array tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(941)
		::lime::utils::UInt8Array data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(942)
		bool tmp1 = (data == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(942)
		if ((tmp1)){
			HX_STACK_LINE(942)
			return null();
		}
		HX_STACK_LINE(945)
		bool tmp2 = ::lime::_system::System_obj::disableCFFI;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(945)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(945)
		if ((tmp3)){
			HX_STACK_LINE(945)
			::lime::graphics::Image tmp4 = image;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(945)
			int tmp5 = format;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(945)
			::lime::graphics::utils::ImageDataUtil_obj::lime_image_data_util_set_format(tmp4,tmp5);
		}
		else{
			HX_STACK_LINE(949)
			int index;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(949)
			Dynamic a16;		HX_STACK_VAR(a16,"a16");
			HX_STACK_LINE(950)
			Float tmp4 = (Float(data->length) / Float((int)4));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(950)
			int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(950)
			int length = tmp5;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(951)
			int r1;		HX_STACK_VAR(r1,"r1");
			HX_STACK_LINE(951)
			int g1;		HX_STACK_VAR(g1,"g1");
			HX_STACK_LINE(951)
			int b1;		HX_STACK_VAR(b1,"b1");
			HX_STACK_LINE(951)
			int a1;		HX_STACK_VAR(a1,"a1");
			HX_STACK_LINE(951)
			int r2;		HX_STACK_VAR(r2,"r2");
			HX_STACK_LINE(951)
			int g2;		HX_STACK_VAR(g2,"g2");
			HX_STACK_LINE(951)
			int b2;		HX_STACK_VAR(b2,"b2");
			HX_STACK_LINE(951)
			int a2;		HX_STACK_VAR(a2,"a2");
			HX_STACK_LINE(952)
			int r;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(952)
			int g;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(952)
			int b;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(952)
			int a;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(954)
			{
				HX_STACK_LINE(954)
				int tmp6 = image->get_format();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(954)
				int _g = tmp6;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(954)
				int tmp7 = _g;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(954)
				switch( (int)(tmp7)){
					case (int)0: {
						HX_STACK_LINE(958)
						r1 = (int)0;
						HX_STACK_LINE(959)
						g1 = (int)1;
						HX_STACK_LINE(960)
						b1 = (int)2;
						HX_STACK_LINE(961)
						a1 = (int)3;
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(965)
						r1 = (int)1;
						HX_STACK_LINE(966)
						g1 = (int)2;
						HX_STACK_LINE(967)
						b1 = (int)3;
						HX_STACK_LINE(968)
						a1 = (int)0;
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(972)
						r1 = (int)2;
						HX_STACK_LINE(973)
						g1 = (int)1;
						HX_STACK_LINE(974)
						b1 = (int)0;
						HX_STACK_LINE(975)
						a1 = (int)3;
					}
					;break;
				}
			}
			HX_STACK_LINE(979)
			int tmp6 = format;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(979)
			switch( (int)(tmp6)){
				case (int)0: {
					HX_STACK_LINE(983)
					r2 = (int)0;
					HX_STACK_LINE(984)
					g2 = (int)1;
					HX_STACK_LINE(985)
					b2 = (int)2;
					HX_STACK_LINE(986)
					a2 = (int)3;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(990)
					r2 = (int)1;
					HX_STACK_LINE(991)
					g2 = (int)2;
					HX_STACK_LINE(992)
					b2 = (int)3;
					HX_STACK_LINE(993)
					a2 = (int)0;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(997)
					r2 = (int)2;
					HX_STACK_LINE(998)
					g2 = (int)1;
					HX_STACK_LINE(999)
					b2 = (int)0;
					HX_STACK_LINE(1000)
					a2 = (int)3;
				}
				;break;
			}
			HX_STACK_LINE(1004)
			{
				HX_STACK_LINE(1004)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1004)
				while((true)){
					HX_STACK_LINE(1004)
					bool tmp7 = (_g < length);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1004)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1004)
					if ((tmp8)){
						HX_STACK_LINE(1004)
						break;
					}
					HX_STACK_LINE(1004)
					int tmp9 = (_g)++;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1004)
					int i = tmp9;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1006)
					int tmp10 = (i * (int)4);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1006)
					index = tmp10;
					HX_STACK_LINE(1008)
					::lime::utils::UInt8Array tmp11 = data;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1008)
					int tmp12 = (index + r1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1008)
					int tmp13 = tmp11->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1008)
					r = tmp13;
					HX_STACK_LINE(1009)
					::lime::utils::UInt8Array tmp14 = data;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1009)
					int tmp15 = (index + g1);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1009)
					int tmp16 = tmp14->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1009)
					g = tmp16;
					HX_STACK_LINE(1010)
					::lime::utils::UInt8Array tmp17 = data;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1010)
					int tmp18 = (index + b1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1010)
					int tmp19 = tmp17->__get(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1010)
					b = tmp19;
					HX_STACK_LINE(1011)
					::lime::utils::UInt8Array tmp20 = data;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1011)
					int tmp21 = (index + a1);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1011)
					int tmp22 = tmp20->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1011)
					a = tmp22;
					HX_STACK_LINE(1013)
					::lime::utils::UInt8Array tmp23 = data;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1013)
					int tmp24 = (index + r2);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1013)
					int tmp25 = r;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1013)
					hx::__ArrayImplRef(tmp23,tmp24) = tmp25;
					HX_STACK_LINE(1014)
					::lime::utils::UInt8Array tmp26 = data;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1014)
					int tmp27 = (index + g2);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1014)
					int tmp28 = g;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1014)
					hx::__ArrayImplRef(tmp26,tmp27) = tmp28;
					HX_STACK_LINE(1015)
					::lime::utils::UInt8Array tmp29 = data;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1015)
					int tmp30 = (index + b2);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1015)
					int tmp31 = b;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1015)
					hx::__ArrayImplRef(tmp29,tmp30) = tmp31;
					HX_STACK_LINE(1016)
					::lime::utils::UInt8Array tmp32 = data;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1016)
					int tmp33 = (index + a2);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1016)
					int tmp34 = a;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1016)
					hx::__ArrayImplRef(tmp32,tmp33) = tmp34;
				}
			}
		}
		HX_STACK_LINE(1022)
		image->buffer->format = format;
		HX_STACK_LINE(1023)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ImageDataUtil_obj,setFormat,(void))

Void ImageDataUtil_obj::setPixel( ::lime::graphics::Image image,int x,int y,int color,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","setPixel",0x7a534b32,"lime.graphics.utils.ImageDataUtil.setPixel","lime/graphics/utils/ImageDataUtil.hx",1028,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(1030)
		::lime::utils::UInt8Array tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1030)
		::lime::utils::UInt8Array data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(1031)
		int tmp1 = (y + image->offsetY);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1031)
		int tmp2 = ((int)4 * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1031)
		int tmp3 = image->buffer->width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1031)
		int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1031)
		int tmp5 = (x + image->offsetX);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1031)
		int tmp6 = (tmp5 * (int)4);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1031)
		int tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1031)
		int offset = tmp7;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(1032)
		bool tmp8 = (format == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1032)
		if ((tmp8)){
			HX_STACK_LINE(1032)
			int tmp9 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1032)
			color = tmp9;
		}
		HX_STACK_LINE(1034)
		int tmp9 = (int(color) & int((int)16711680));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1034)
		int tmp10 = hx::UShr(tmp9,(int)16);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1034)
		hx::__ArrayImplRef(data,offset) = tmp10;
		HX_STACK_LINE(1035)
		::lime::utils::UInt8Array tmp11 = data;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1035)
		int tmp12 = (offset + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1035)
		int tmp13 = (int(color) & int((int)65280));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1035)
		int tmp14 = hx::UShr(tmp13,(int)8);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1035)
		hx::__ArrayImplRef(tmp11,tmp12) = tmp14;
		HX_STACK_LINE(1036)
		::lime::utils::UInt8Array tmp15 = data;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1036)
		int tmp16 = (offset + (int)2);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1036)
		int tmp17 = (int(color) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1036)
		hx::__ArrayImplRef(tmp15,tmp16) = tmp17;
		HX_STACK_LINE(1037)
		bool tmp18 = image->get_transparent();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1037)
		if ((tmp18)){
			HX_STACK_LINE(1037)
			::lime::utils::UInt8Array tmp19 = data;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1037)
			int tmp20 = (offset + (int)3);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1037)
			hx::__ArrayImplRef(tmp19,tmp20) = (int)255;
		}
		HX_STACK_LINE(1039)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageDataUtil_obj,setPixel,(void))

Void ImageDataUtil_obj::setPixel32( ::lime::graphics::Image image,int x,int y,int color,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","setPixel32",0x2e222851,"lime.graphics.utils.ImageDataUtil.setPixel32","lime/graphics/utils/ImageDataUtil.hx",1044,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(1046)
		::lime::utils::UInt8Array tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1046)
		::lime::utils::UInt8Array data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(1047)
		int tmp1 = (y + image->offsetY);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1047)
		int tmp2 = ((int)4 * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1047)
		int tmp3 = image->buffer->width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1047)
		int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1047)
		int tmp5 = (x + image->offsetX);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1047)
		int tmp6 = (tmp5 * (int)4);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1047)
		int tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1047)
		int offset = tmp7;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(1048)
		int a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(1048)
		int r;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(1048)
		int g;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(1048)
		int b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(1050)
		bool tmp8 = (format == (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1050)
		if ((tmp8)){
			HX_STACK_LINE(1052)
			bool tmp9 = image->get_transparent();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1052)
			int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1052)
			if ((tmp9)){
				HX_STACK_LINE(1052)
				int tmp11 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1052)
				tmp10 = (int(tmp11) & int((int)255));
			}
			else{
				HX_STACK_LINE(1052)
				tmp10 = (int)255;
			}
			HX_STACK_LINE(1052)
			a = tmp10;
			HX_STACK_LINE(1053)
			int tmp11 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1053)
			int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1053)
			r = tmp12;
			HX_STACK_LINE(1054)
			int tmp13 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1054)
			int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1054)
			g = tmp14;
			HX_STACK_LINE(1055)
			int tmp15 = (int(color) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1055)
			b = tmp15;
		}
		else{
			HX_STACK_LINE(1059)
			int tmp9 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1059)
			int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1059)
			r = tmp10;
			HX_STACK_LINE(1060)
			int tmp11 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1060)
			int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1060)
			g = tmp12;
			HX_STACK_LINE(1061)
			int tmp13 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1061)
			int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1061)
			b = tmp14;
			HX_STACK_LINE(1062)
			bool tmp15 = image->get_transparent();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1062)
			int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1062)
			if ((tmp15)){
				HX_STACK_LINE(1062)
				tmp16 = (int(color) & int((int)255));
			}
			else{
				HX_STACK_LINE(1062)
				tmp16 = (int)255;
			}
			HX_STACK_LINE(1062)
			a = tmp16;
		}
		HX_STACK_LINE(1066)
		bool tmp9 = image->get_transparent();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1066)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1066)
		if ((tmp9)){
			HX_STACK_LINE(1066)
			tmp10 = image->get_premultiplied();
		}
		else{
			HX_STACK_LINE(1066)
			tmp10 = false;
		}
		HX_STACK_LINE(1066)
		if ((tmp10)){
			HX_STACK_LINE(1068)
			Array< int > tmp11 = ::lime::graphics::utils::ImageDataUtil_obj::__alpha16;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1068)
			int tmp12 = a;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1068)
			int tmp13 = tmp11->__unsafe_get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1068)
			int a16 = tmp13;		HX_STACK_VAR(a16,"a16");
			HX_STACK_LINE(1069)
			int tmp14 = (r * a16);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1069)
			int tmp15 = (int(tmp14) >> int((int)16));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1069)
			hx::__ArrayImplRef(data,offset) = tmp15;
			HX_STACK_LINE(1070)
			::lime::utils::UInt8Array tmp16 = data;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1070)
			int tmp17 = (offset + (int)1);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1070)
			int tmp18 = (g * a16);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1070)
			int tmp19 = (int(tmp18) >> int((int)16));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1070)
			hx::__ArrayImplRef(tmp16,tmp17) = tmp19;
			HX_STACK_LINE(1071)
			::lime::utils::UInt8Array tmp20 = data;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1071)
			int tmp21 = (offset + (int)2);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1071)
			int tmp22 = (b * a16);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1071)
			int tmp23 = (int(tmp22) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1071)
			hx::__ArrayImplRef(tmp20,tmp21) = tmp23;
			HX_STACK_LINE(1072)
			::lime::utils::UInt8Array tmp24 = data;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1072)
			int tmp25 = (offset + (int)3);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1072)
			int tmp26 = a;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1072)
			hx::__ArrayImplRef(tmp24,tmp25) = tmp26;
		}
		else{
			HX_STACK_LINE(1076)
			int tmp11 = r;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1076)
			hx::__ArrayImplRef(data,offset) = tmp11;
			HX_STACK_LINE(1077)
			::lime::utils::UInt8Array tmp12 = data;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1077)
			int tmp13 = (offset + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1077)
			int tmp14 = g;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1077)
			hx::__ArrayImplRef(tmp12,tmp13) = tmp14;
			HX_STACK_LINE(1078)
			::lime::utils::UInt8Array tmp15 = data;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1078)
			int tmp16 = (offset + (int)2);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1078)
			int tmp17 = b;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1078)
			hx::__ArrayImplRef(tmp15,tmp16) = tmp17;
			HX_STACK_LINE(1079)
			::lime::utils::UInt8Array tmp18 = data;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1079)
			int tmp19 = (offset + (int)3);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1079)
			int tmp20 = a;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1079)
			hx::__ArrayImplRef(tmp18,tmp19) = tmp20;
		}
		HX_STACK_LINE(1083)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageDataUtil_obj,setPixel32,(void))

Void ImageDataUtil_obj::setPixels( ::lime::graphics::Image image,::lime::math::Rectangle rect,::lime::utils::ByteArray byteArray,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","setPixels",0x8e8e8101,"lime.graphics.utils.ImageDataUtil.setPixels","lime/graphics/utils/ImageDataUtil.hx",1088,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(byteArray,"byteArray")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(1090)
		::lime::utils::UInt8Array tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1090)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1090)
		if ((tmp1)){
			HX_STACK_LINE(1090)
			return null();
		}
		HX_STACK_LINE(1093)
		bool tmp2 = ::lime::_system::System_obj::disableCFFI;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1093)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1093)
		if ((tmp3)){
			HX_STACK_LINE(1093)
			::lime::graphics::Image tmp4 = image;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1093)
			::lime::math::Rectangle tmp5 = rect;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1093)
			::lime::utils::ByteArray tmp6 = byteArray;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1093)
			int tmp7 = format;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1093)
			::lime::graphics::utils::ImageDataUtil_obj::lime_image_data_util_set_pixels(tmp4,tmp5,tmp6,tmp7);
		}
		else{
			HX_STACK_LINE(1097)
			Float tmp4 = (rect->width * rect->height);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1097)
			int tmp5 = ::Math_obj::round(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1097)
			int len = tmp5;		HX_STACK_VAR(len,"len");
			HX_STACK_LINE(1110)
			::lime::utils::UInt8Array tmp6 = image->buffer->data;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1110)
			::lime::utils::UInt8Array data = tmp6;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(1111)
			int tmp7 = image->buffer->width;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1111)
			Float tmp8 = (rect->y + image->offsetX);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1111)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1111)
			Float tmp10 = (rect->x + image->offsetY);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1111)
			Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1111)
			int tmp12 = ::Math_obj::round(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1111)
			int offset = tmp12;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(1112)
			int tmp13 = (offset * (int)4);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1112)
			int pos = tmp13;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(1113)
			Float tmp14 = (rect->x + rect->width);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1113)
			int tmp15 = image->offsetX;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1113)
			Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1113)
			int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1113)
			int boundR = tmp17;		HX_STACK_VAR(boundR,"boundR");
			HX_STACK_LINE(1114)
			int tmp18 = image->buffer->width;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1114)
			int width = tmp18;		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(1115)
			int color;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(1117)
			bool tmp19 = (format == (int)1);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1117)
			if ((tmp19)){
				HX_STACK_LINE(1119)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1119)
				while((true)){
					HX_STACK_LINE(1119)
					bool tmp20 = (_g < len);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1119)
					bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1119)
					if ((tmp21)){
						HX_STACK_LINE(1119)
						break;
					}
					HX_STACK_LINE(1119)
					int tmp22 = (_g)++;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1119)
					int i = tmp22;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1121)
					int tmp23 = pos;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1121)
					int tmp24 = (width * (int)4);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1121)
					int tmp25 = hx::Mod(tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1121)
					int tmp26 = (boundR * (int)4);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1121)
					bool tmp27 = (tmp25 >= tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1121)
					if ((tmp27)){
						HX_STACK_LINE(1123)
						int tmp28 = (width - boundR);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1123)
						int tmp29 = (tmp28 * (int)4);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1123)
						hx::AddEq(pos,tmp29);
					}
					HX_STACK_LINE(1127)
					int tmp28 = byteArray->readUnsignedInt();		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1127)
					color = tmp28;
					HX_STACK_LINE(1129)
					::lime::utils::UInt8Array tmp29 = data;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1129)
					int tmp30 = (pos)++;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1129)
					int tmp31 = (int(color) & int((int)16711680));		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1129)
					int tmp32 = hx::UShr(tmp31,(int)16);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1129)
					hx::__ArrayImplRef(tmp29,tmp30) = tmp32;
					HX_STACK_LINE(1130)
					::lime::utils::UInt8Array tmp33 = data;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1130)
					int tmp34 = (pos)++;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1130)
					int tmp35 = (int(color) & int((int)65280));		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1130)
					int tmp36 = hx::UShr(tmp35,(int)8);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(1130)
					hx::__ArrayImplRef(tmp33,tmp34) = tmp36;
					HX_STACK_LINE(1131)
					::lime::utils::UInt8Array tmp37 = data;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(1131)
					int tmp38 = (pos)++;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(1131)
					int tmp39 = (int(color) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(1131)
					hx::__ArrayImplRef(tmp37,tmp38) = tmp39;
					HX_STACK_LINE(1132)
					::lime::utils::UInt8Array tmp40 = data;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(1132)
					int tmp41 = (pos)++;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(1132)
					int tmp42 = (int(color) & int((int)-16777216));		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(1132)
					int tmp43 = hx::UShr(tmp42,(int)24);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(1132)
					hx::__ArrayImplRef(tmp40,tmp41) = tmp43;
				}
			}
			else{
				HX_STACK_LINE(1138)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1138)
				while((true)){
					HX_STACK_LINE(1138)
					bool tmp20 = (_g < len);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1138)
					bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1138)
					if ((tmp21)){
						HX_STACK_LINE(1138)
						break;
					}
					HX_STACK_LINE(1138)
					int tmp22 = (_g)++;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1138)
					int i = tmp22;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1140)
					int tmp23 = pos;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1140)
					int tmp24 = (width * (int)4);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1140)
					int tmp25 = hx::Mod(tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1140)
					int tmp26 = (boundR * (int)4);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1140)
					bool tmp27 = (tmp25 >= tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1140)
					if ((tmp27)){
						HX_STACK_LINE(1142)
						int tmp28 = (width - boundR);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1142)
						int tmp29 = (tmp28 * (int)4);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1142)
						hx::AddEq(pos,tmp29);
					}
					HX_STACK_LINE(1146)
					int tmp28 = byteArray->readUnsignedInt();		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1146)
					color = tmp28;
					HX_STACK_LINE(1148)
					::lime::utils::UInt8Array tmp29 = data;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1148)
					int tmp30 = (pos)++;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1148)
					int tmp31 = (int(color) & int((int)-16777216));		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1148)
					int tmp32 = hx::UShr(tmp31,(int)24);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1148)
					hx::__ArrayImplRef(tmp29,tmp30) = tmp32;
					HX_STACK_LINE(1149)
					::lime::utils::UInt8Array tmp33 = data;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1149)
					int tmp34 = (pos)++;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1149)
					int tmp35 = (int(color) & int((int)16711680));		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1149)
					int tmp36 = hx::UShr(tmp35,(int)16);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(1149)
					hx::__ArrayImplRef(tmp33,tmp34) = tmp36;
					HX_STACK_LINE(1150)
					::lime::utils::UInt8Array tmp37 = data;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(1150)
					int tmp38 = (pos)++;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(1150)
					int tmp39 = (int(color) & int((int)65280));		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(1150)
					int tmp40 = hx::UShr(tmp39,(int)8);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(1150)
					hx::__ArrayImplRef(tmp37,tmp38) = tmp40;
					HX_STACK_LINE(1151)
					::lime::utils::UInt8Array tmp41 = data;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(1151)
					int tmp42 = (pos)++;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(1151)
					int tmp43 = (int(color) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(1151)
					hx::__ArrayImplRef(tmp41,tmp42) = tmp43;
				}
			}
		}
		HX_STACK_LINE(1159)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,setPixels,(void))

Void ImageDataUtil_obj::unmultiplyAlpha( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","unmultiplyAlpha",0xa6ce9eb3,"lime.graphics.utils.ImageDataUtil.unmultiplyAlpha","lime/graphics/utils/ImageDataUtil.hx",1164,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(1166)
		::lime::utils::UInt8Array tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1166)
		::lime::utils::UInt8Array data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(1167)
		bool tmp1 = (data == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1167)
		if ((tmp1)){
			HX_STACK_LINE(1167)
			return null();
		}
		HX_STACK_LINE(1170)
		bool tmp2 = ::lime::_system::System_obj::disableCFFI;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1170)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1170)
		if ((tmp3)){
			HX_STACK_LINE(1170)
			::lime::graphics::Image tmp4 = image;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1170)
			::lime::graphics::utils::ImageDataUtil_obj::lime_image_data_util_unmultiply_alpha(tmp4);
		}
		else{
			HX_STACK_LINE(1174)
			int index;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(1174)
			int a;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(1174)
			Float unmultiply;		HX_STACK_VAR(unmultiply,"unmultiply");
			HX_STACK_LINE(1175)
			Float tmp4 = (Float(data->length) / Float((int)4));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1175)
			int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1175)
			int length = tmp5;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(1177)
			{
				HX_STACK_LINE(1177)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1177)
				while((true)){
					HX_STACK_LINE(1177)
					bool tmp6 = (_g < length);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1177)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1177)
					if ((tmp7)){
						HX_STACK_LINE(1177)
						break;
					}
					HX_STACK_LINE(1177)
					int tmp8 = (_g)++;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1177)
					int i = tmp8;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1179)
					int tmp9 = (i * (int)4);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1179)
					index = tmp9;
					HX_STACK_LINE(1181)
					::lime::utils::UInt8Array tmp10 = data;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1181)
					int tmp11 = (index + (int)3);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1181)
					int tmp12 = tmp10->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1181)
					a = tmp12;
					HX_STACK_LINE(1183)
					bool tmp13 = (a != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1183)
					if ((tmp13)){
						HX_STACK_LINE(1185)
						Float tmp14 = (Float(((Float)255.0)) / Float(a));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1185)
						unmultiply = tmp14;
						HX_STACK_LINE(1187)
						int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1187)
						{
							HX_STACK_LINE(1187)
							int tmp16 = data->__get(index);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1187)
							Float tmp17 = unmultiply;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1187)
							Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1187)
							int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1187)
							int index1 = tmp19;		HX_STACK_VAR(index1,"index1");
							HX_STACK_LINE(1187)
							Array< int > tmp20 = ::lime::graphics::utils::ImageDataUtil_obj::__clamp;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1187)
							int tmp21 = index1;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1187)
							int tmp22 = tmp20->__unsafe_get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1187)
							tmp15 = tmp22;
						}
						HX_STACK_LINE(1187)
						hx::__ArrayImplRef(data,index) = tmp15;
						HX_STACK_LINE(1188)
						::lime::utils::UInt8Array tmp16 = data;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1188)
						int tmp17 = (index + (int)1);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1188)
						int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1188)
						{
							HX_STACK_LINE(1188)
							::lime::utils::UInt8Array tmp19 = data;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1188)
							int tmp20 = (index + (int)1);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1188)
							int tmp21 = tmp19->__get(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1188)
							Float tmp22 = unmultiply;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1188)
							Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1188)
							int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1188)
							int index1 = tmp24;		HX_STACK_VAR(index1,"index1");
							HX_STACK_LINE(1188)
							Array< int > tmp25 = ::lime::graphics::utils::ImageDataUtil_obj::__clamp;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1188)
							int tmp26 = index1;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1188)
							int tmp27 = tmp25->__unsafe_get(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1188)
							tmp18 = tmp27;
						}
						HX_STACK_LINE(1188)
						hx::__ArrayImplRef(tmp16,tmp17) = tmp18;
						HX_STACK_LINE(1189)
						::lime::utils::UInt8Array tmp19 = data;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1189)
						int tmp20 = (index + (int)2);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1189)
						int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1189)
						{
							HX_STACK_LINE(1189)
							::lime::utils::UInt8Array tmp22 = data;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1189)
							int tmp23 = (index + (int)2);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1189)
							int tmp24 = tmp22->__get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1189)
							Float tmp25 = unmultiply;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1189)
							Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1189)
							int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1189)
							int index1 = tmp27;		HX_STACK_VAR(index1,"index1");
							HX_STACK_LINE(1189)
							Array< int > tmp28 = ::lime::graphics::utils::ImageDataUtil_obj::__clamp;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1189)
							int tmp29 = index1;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1189)
							int tmp30 = tmp28->__unsafe_get(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1189)
							tmp21 = tmp30;
						}
						HX_STACK_LINE(1189)
						hx::__ArrayImplRef(tmp19,tmp20) = tmp21;
					}
				}
			}
		}
		HX_STACK_LINE(1197)
		image->buffer->premultiplied = false;
		HX_STACK_LINE(1198)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageDataUtil_obj,unmultiplyAlpha,(void))

Dynamic ImageDataUtil_obj::lime_image_data_util_color_transform;

Dynamic ImageDataUtil_obj::lime_image_data_util_copy_channel;

Dynamic ImageDataUtil_obj::lime_image_data_util_copy_pixels;

Dynamic ImageDataUtil_obj::lime_image_data_util_fill_rect;

Dynamic ImageDataUtil_obj::lime_image_data_util_flood_fill;

Dynamic ImageDataUtil_obj::lime_image_data_util_get_pixels;

Dynamic ImageDataUtil_obj::lime_image_data_util_merge;

Dynamic ImageDataUtil_obj::lime_image_data_util_multiply_alpha;

Dynamic ImageDataUtil_obj::lime_image_data_util_resize;

Dynamic ImageDataUtil_obj::lime_image_data_util_set_format;

Dynamic ImageDataUtil_obj::lime_image_data_util_set_pixels;

Dynamic ImageDataUtil_obj::lime_image_data_util_unmultiply_alpha;


ImageDataUtil_obj::ImageDataUtil_obj()
{
}

bool ImageDataUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"merge") ) { outValue = merge_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { outValue = resize_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__clamp") ) { outValue = __clamp; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fillRect") ) { outValue = fillRect_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getPixel") ) { outValue = getPixel_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setPixel") ) { outValue = setPixel_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__alpha16") ) { outValue = __alpha16; return true;  }
		if (HX_FIELD_EQ(inName,"floodFill") ) { outValue = floodFill_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getPixels") ) { outValue = getPixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setFormat") ) { outValue = setFormat_dyn(); return true;  }
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
		if (HX_FIELD_EQ(inName,"resizeBuffer") ) { outValue = resizeBuffer_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"multiplyAlpha") ) { outValue = multiplyAlpha_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { outValue = colorTransform_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"unmultiplyAlpha") ) { outValue = unmultiplyAlpha_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getColorBoundsRect") ) { outValue = getColorBoundsRect_dyn(); return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_merge") ) { outValue = lime_image_data_util_merge; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_resize") ) { outValue = lime_image_data_util_resize; return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_fill_rect") ) { outValue = lime_image_data_util_fill_rect; return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_flood_fill") ) { outValue = lime_image_data_util_flood_fill; return true;  }
		if (HX_FIELD_EQ(inName,"lime_image_data_util_get_pixels") ) { outValue = lime_image_data_util_get_pixels; return true;  }
		if (HX_FIELD_EQ(inName,"lime_image_data_util_set_format") ) { outValue = lime_image_data_util_set_format; return true;  }
		if (HX_FIELD_EQ(inName,"lime_image_data_util_set_pixels") ) { outValue = lime_image_data_util_set_pixels; return true;  }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_copy_pixels") ) { outValue = lime_image_data_util_copy_pixels; return true;  }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_copy_channel") ) { outValue = lime_image_data_util_copy_channel; return true;  }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_multiply_alpha") ) { outValue = lime_image_data_util_multiply_alpha; return true;  }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_color_transform") ) { outValue = lime_image_data_util_color_transform; return true;  }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_unmultiply_alpha") ) { outValue = lime_image_data_util_unmultiply_alpha; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< int >*/ ,(void *) &ImageDataUtil_obj::__alpha16,HX_HCSTRING("__alpha16","\xa3","\x36","\x64","\x33")},
	{hx::fsObject /*Array< int >*/ ,(void *) &ImageDataUtil_obj::__clamp,HX_HCSTRING("__clamp","\xdb","\xcb","\xb6","\xb2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ImageDataUtil_obj::lime_image_data_util_color_transform,HX_HCSTRING("lime_image_data_util_color_transform","\xba","\xcc","\x96","\x40")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ImageDataUtil_obj::lime_image_data_util_copy_channel,HX_HCSTRING("lime_image_data_util_copy_channel","\x4f","\x54","\x36","\xa5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ImageDataUtil_obj::lime_image_data_util_copy_pixels,HX_HCSTRING("lime_image_data_util_copy_pixels","\x21","\x51","\x7b","\xab")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ImageDataUtil_obj::lime_image_data_util_fill_rect,HX_HCSTRING("lime_image_data_util_fill_rect","\x8a","\x8c","\xa4","\x8e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ImageDataUtil_obj::lime_image_data_util_flood_fill,HX_HCSTRING("lime_image_data_util_flood_fill","\xba","\xe7","\x5b","\xf2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ImageDataUtil_obj::lime_image_data_util_get_pixels,HX_HCSTRING("lime_image_data_util_get_pixels","\xcc","\x3e","\xde","\x0c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ImageDataUtil_obj::lime_image_data_util_merge,HX_HCSTRING("lime_image_data_util_merge","\xa2","\xd2","\xb1","\xf7")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ImageDataUtil_obj::lime_image_data_util_multiply_alpha,HX_HCSTRING("lime_image_data_util_multiply_alpha","\x99","\x86","\xad","\x5d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ImageDataUtil_obj::lime_image_data_util_resize,HX_HCSTRING("lime_image_data_util_resize","\xca","\x16","\x5a","\xc4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ImageDataUtil_obj::lime_image_data_util_set_format,HX_HCSTRING("lime_image_data_util_set_format","\x4a","\x7d","\x40","\x81")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ImageDataUtil_obj::lime_image_data_util_set_pixels,HX_HCSTRING("lime_image_data_util_set_pixels","\x40","\xdd","\x5b","\x10")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ImageDataUtil_obj::lime_image_data_util_unmultiply_alpha,HX_HCSTRING("lime_image_data_util_unmultiply_alpha","\x32","\xd8","\x15","\x90")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::__alpha16,"__alpha16");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::__clamp,"__clamp");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_color_transform,"lime_image_data_util_color_transform");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_copy_channel,"lime_image_data_util_copy_channel");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_copy_pixels,"lime_image_data_util_copy_pixels");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_fill_rect,"lime_image_data_util_fill_rect");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_flood_fill,"lime_image_data_util_flood_fill");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_get_pixels,"lime_image_data_util_get_pixels");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_merge,"lime_image_data_util_merge");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_multiply_alpha,"lime_image_data_util_multiply_alpha");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_resize,"lime_image_data_util_resize");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_set_format,"lime_image_data_util_set_format");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_set_pixels,"lime_image_data_util_set_pixels");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_unmultiply_alpha,"lime_image_data_util_unmultiply_alpha");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::__alpha16,"__alpha16");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::__clamp,"__clamp");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_color_transform,"lime_image_data_util_color_transform");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_copy_channel,"lime_image_data_util_copy_channel");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_copy_pixels,"lime_image_data_util_copy_pixels");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_fill_rect,"lime_image_data_util_fill_rect");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_flood_fill,"lime_image_data_util_flood_fill");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_get_pixels,"lime_image_data_util_get_pixels");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_merge,"lime_image_data_util_merge");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_multiply_alpha,"lime_image_data_util_multiply_alpha");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_resize,"lime_image_data_util_resize");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_set_format,"lime_image_data_util_set_format");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_set_pixels,"lime_image_data_util_set_pixels");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::lime_image_data_util_unmultiply_alpha,"lime_image_data_util_unmultiply_alpha");
};

#endif

hx::Class ImageDataUtil_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__alpha16","\xa3","\x36","\x64","\x33"),
	HX_HCSTRING("__clamp","\xdb","\xcb","\xb6","\xb2"),
	HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),
	HX_HCSTRING("copyChannel","\x8e","\x7d","\xe6","\x22"),
	HX_HCSTRING("copyPixels","\xc2","\x54","\x6e","\x42"),
	HX_HCSTRING("fillRect","\x47","\x45","\xb9","\x6c"),
	HX_HCSTRING("floodFill","\x61","\x83","\x8a","\x59"),
	HX_HCSTRING("getColorBoundsRect","\x86","\xad","\xe8","\x80"),
	HX_HCSTRING("getPixel","\x10","\xd6","\x7a","\x22"),
	HX_HCSTRING("getPixel32","\xaf","\xa6","\x68","\xd7"),
	HX_HCSTRING("getPixels","\x63","\x78","\x00","\x09"),
	HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"),
	HX_HCSTRING("multiplyAlpha","\x9a","\xf2","\x1c","\x6b"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("resizeBuffer","\x14","\x7a","\xa2","\xb4"),
	HX_HCSTRING("setFormat","\x79","\x04","\x36","\x5d"),
	HX_HCSTRING("setPixel","\x84","\x2f","\xd8","\xd0"),
	HX_HCSTRING("setPixel32","\x23","\x45","\xe6","\xda"),
	HX_HCSTRING("setPixels","\x6f","\x64","\x51","\xec"),
	HX_HCSTRING("unmultiplyAlpha","\xa1","\xc8","\x96","\x28"),
	HX_HCSTRING("lime_image_data_util_color_transform","\xba","\xcc","\x96","\x40"),
	HX_HCSTRING("lime_image_data_util_copy_channel","\x4f","\x54","\x36","\xa5"),
	HX_HCSTRING("lime_image_data_util_copy_pixels","\x21","\x51","\x7b","\xab"),
	HX_HCSTRING("lime_image_data_util_fill_rect","\x8a","\x8c","\xa4","\x8e"),
	HX_HCSTRING("lime_image_data_util_flood_fill","\xba","\xe7","\x5b","\xf2"),
	HX_HCSTRING("lime_image_data_util_get_pixels","\xcc","\x3e","\xde","\x0c"),
	HX_HCSTRING("lime_image_data_util_merge","\xa2","\xd2","\xb1","\xf7"),
	HX_HCSTRING("lime_image_data_util_multiply_alpha","\x99","\x86","\xad","\x5d"),
	HX_HCSTRING("lime_image_data_util_resize","\xca","\x16","\x5a","\xc4"),
	HX_HCSTRING("lime_image_data_util_set_format","\x4a","\x7d","\x40","\x81"),
	HX_HCSTRING("lime_image_data_util_set_pixels","\x40","\xdd","\x5b","\x10"),
	HX_HCSTRING("lime_image_data_util_unmultiply_alpha","\x32","\xd8","\x15","\x90"),
	::String(null()) };

void ImageDataUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.utils.ImageDataUtil","\x80","\x72","\x23","\xf0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ImageDataUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ImageDataUtil_obj >;
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

void ImageDataUtil_obj::__boot()
{
	lime_image_data_util_color_transform= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_color_transform","\xba","\xcc","\x96","\x40"),(int)3,null());
	lime_image_data_util_copy_channel= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_copy_channel","\x4f","\x54","\x36","\xa5"),(int)-1,null());
	lime_image_data_util_copy_pixels= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_copy_pixels","\x21","\x51","\x7b","\xab"),(int)5,null());
	lime_image_data_util_fill_rect= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_fill_rect","\x8a","\x8c","\xa4","\x8e"),(int)3,null());
	lime_image_data_util_flood_fill= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_flood_fill","\xba","\xe7","\x5b","\xf2"),(int)4,null());
	lime_image_data_util_get_pixels= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_get_pixels","\xcc","\x3e","\xde","\x0c"),(int)3,null());
	lime_image_data_util_merge= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_merge","\xa2","\xd2","\xb1","\xf7"),(int)-1,null());
	lime_image_data_util_multiply_alpha= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_multiply_alpha","\x99","\x86","\xad","\x5d"),(int)1,null());
	lime_image_data_util_resize= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_resize","\xca","\x16","\x5a","\xc4"),(int)4,null());
	lime_image_data_util_set_format= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_set_format","\x4a","\x7d","\x40","\x81"),(int)2,null());
	lime_image_data_util_set_pixels= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_set_pixels","\x40","\xdd","\x5b","\x10"),(int)4,null());
	lime_image_data_util_unmultiply_alpha= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_unmultiply_alpha","\x32","\xd8","\x15","\x90"),(int)1,null());
}

} // end namespace lime
} // end namespace graphics
} // end namespace utils

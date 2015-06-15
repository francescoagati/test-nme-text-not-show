#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_CairoFont
#include <lime/graphics/cairo/CairoFont.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_CairoFontOptions
#include <lime/graphics/cairo/CairoFontOptions.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_
#include <lime/graphics/cairo/_CairoSurface/CairoSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_text_GlyphPosition
#include <lime/text/GlyphPosition.h>
#endif
#ifndef INCLUDED_lime_text_TextLayout
#include <lime/text/TextLayout.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoTextField
#include <openfl/_internal/renderer/cairo/CairoTextField.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormatAlign
#include <openfl/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormatRange
#include <openfl/text/TextFormatRange.h>
#endif
#ifndef INCLUDED_openfl_text_TextLineMetrics
#include <openfl/text/TextLineMetrics.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

Void CairoTextField_obj::__construct()
{
	return null();
}

//CairoTextField_obj::~CairoTextField_obj() { }

Dynamic CairoTextField_obj::__CreateEmpty() { return  new CairoTextField_obj; }
hx::ObjectPtr< CairoTextField_obj > CairoTextField_obj::__new()
{  hx::ObjectPtr< CairoTextField_obj > _result_ = new CairoTextField_obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoTextField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoTextField_obj > _result_ = new CairoTextField_obj();
	_result_->__construct();
	return _result_;}

int CairoTextField_obj::__utf8_endline_code;

::openfl::text::Font CairoTextField_obj::findFont( ::String name){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","findFont",0x0ba252d0,"openfl._internal.renderer.cairo.CairoTextField.findFont","openfl/_internal/renderer/cairo/CairoTextField.hx",32,0xfadfb778)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(36)
	{
		HX_STACK_LINE(36)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(36)
		Array< ::Dynamic > _g1 = ::openfl::text::Font_obj::__registeredFonts;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(36)
		while((true)){
			HX_STACK_LINE(36)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(36)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(36)
			if ((tmp1)){
				HX_STACK_LINE(36)
				break;
			}
			HX_STACK_LINE(36)
			::openfl::text::Font tmp2 = _g1->__get(_g).StaticCast< ::openfl::text::Font >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(36)
			::openfl::text::Font registeredFont = tmp2;		HX_STACK_VAR(registeredFont,"registeredFont");
			HX_STACK_LINE(36)
			++(_g);
			HX_STACK_LINE(38)
			bool tmp3 = (registeredFont == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(38)
			if ((tmp3)){
				HX_STACK_LINE(38)
				continue;
			}
			HX_STACK_LINE(40)
			bool tmp4 = (registeredFont->name == name);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(40)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(40)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(40)
			if ((tmp5)){
				HX_STACK_LINE(40)
				bool tmp7 = (registeredFont->__fontPath != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(40)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(40)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(40)
				if ((tmp9)){
					HX_STACK_LINE(40)
					bool tmp10 = (registeredFont->__fontPath == name);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(40)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(40)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(40)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(40)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(40)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(40)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(40)
					bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(40)
					bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(40)
					bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(40)
					if ((tmp19)){
						HX_STACK_LINE(40)
						::String tmp20 = registeredFont->__fontPath;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(40)
						::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(40)
						::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(40)
						::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(40)
						::String tmp24 = ::haxe::io::Path_obj::withoutDirectory(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(40)
						::String tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(40)
						::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(40)
						::String tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(40)
						::String tmp28 = name;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(40)
						tmp6 = (tmp27 == tmp28);
					}
					else{
						HX_STACK_LINE(40)
						tmp6 = true;
					}
				}
				else{
					HX_STACK_LINE(40)
					tmp6 = false;
				}
			}
			else{
				HX_STACK_LINE(40)
				tmp6 = true;
			}
			HX_STACK_LINE(40)
			if ((tmp6)){
				HX_STACK_LINE(42)
				::openfl::text::Font tmp7 = registeredFont;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(42)
				return tmp7;
			}
		}
	}
	HX_STACK_LINE(48)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	::openfl::text::Font tmp1 = ::openfl::text::Font_obj::fromFile(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	::openfl::text::Font font = tmp1;		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(50)
	bool tmp2 = (font != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(50)
	if ((tmp2)){
		HX_STACK_LINE(52)
		::openfl::text::Font tmp3 = font;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(52)
		::openfl::text::Font_obj::__registeredFonts->push(tmp3);
		HX_STACK_LINE(53)
		::openfl::text::Font tmp4 = font;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(53)
		return tmp4;
	}
	HX_STACK_LINE(59)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoTextField_obj,findFont,return )

::openfl::text::Font CairoTextField_obj::getFontInstance( ::openfl::text::TextFormat format){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","getFontInstance",0xc4376312,"openfl._internal.renderer.cairo.CairoTextField.getFontInstance","openfl/_internal/renderer/cairo/CairoTextField.hx",64,0xfadfb778)
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(68)
	::openfl::text::Font instance = null();		HX_STACK_VAR(instance,"instance");
	HX_STACK_LINE(69)
	Array< ::String > fontList = null();		HX_STACK_VAR(fontList,"fontList");
	HX_STACK_LINE(71)
	bool tmp = (format != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	if ((tmp)){
		HX_STACK_LINE(71)
		tmp1 = (format->font != null());
	}
	else{
		HX_STACK_LINE(71)
		tmp1 = false;
	}
	HX_STACK_LINE(71)
	if ((tmp1)){
		HX_STACK_LINE(73)
		::String tmp2 = format->font;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(73)
		::openfl::text::Font tmp3 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::findFont(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(73)
		instance = tmp3;
		HX_STACK_LINE(75)
		bool tmp4 = (instance != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(75)
		if ((tmp4)){
			HX_STACK_LINE(75)
			::openfl::text::Font tmp5 = instance;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(75)
			return tmp5;
		}
		HX_STACK_LINE(77)
		::String tmp5 = ::lime::_system::System_obj::get_fontsDirectory();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(77)
		::String systemFontDirectory = tmp5;		HX_STACK_VAR(systemFontDirectory,"systemFontDirectory");
		HX_STACK_LINE(79)
		{
			HX_STACK_LINE(79)
			::String _g = format->font;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(79)
			::String tmp6 = _g;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(79)
			::String _switch_1 = (tmp6);
			if (  ( _switch_1==HX_HCSTRING("_sans","\x32","\xa0","\x5e","\xff"))){
				HX_STACK_LINE(112)
				::String tmp7 = (systemFontDirectory + HX_HCSTRING("/freefont/FreeSans.ttf","\xfc","\x16","\x30","\xd3"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(112)
				::String tmp8 = (systemFontDirectory + HX_HCSTRING("/FreeSans.ttf","\xe6","\x20","\x6e","\xe0"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(112)
				fontList = Array_obj< ::String >::__new().Add(tmp7).Add(tmp8);
			}
			else if (  ( _switch_1==HX_HCSTRING("_serif","\xbe","\x66","\x15","\x76"))){
			}
			else if (  ( _switch_1==HX_HCSTRING("_typewriter","\x0c","\x5e","\x52","\x94"))){
				HX_STACK_LINE(154)
				::String tmp7 = (systemFontDirectory + HX_HCSTRING("/freefont/FreeMono.ttf","\xcc","\x96","\x93","\x74"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(154)
				::String tmp8 = (systemFontDirectory + HX_HCSTRING("/FreeMono.ttf","\xb6","\xa0","\xd1","\x81"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(154)
				fontList = Array_obj< ::String >::__new().Add(tmp7).Add(tmp8);
			}
			else  {
				HX_STACK_LINE(163)
				::String tmp7 = (systemFontDirectory + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(163)
				::String tmp8 = format->font;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(163)
				::String tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(163)
				fontList = Array_obj< ::String >::__new().Add(tmp9);
			}
;
;
		}
		HX_STACK_LINE(167)
		bool tmp6 = (fontList != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(167)
		if ((tmp6)){
			HX_STACK_LINE(169)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(169)
			while((true)){
				HX_STACK_LINE(169)
				bool tmp7 = (_g < fontList->length);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(169)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(169)
				if ((tmp8)){
					HX_STACK_LINE(169)
					break;
				}
				HX_STACK_LINE(169)
				::String tmp9 = fontList->__get(_g);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(169)
				::String font = tmp9;		HX_STACK_VAR(font,"font");
				HX_STACK_LINE(169)
				++(_g);
				HX_STACK_LINE(171)
				::String tmp10 = font;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(171)
				::openfl::text::Font tmp11 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::findFont(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(171)
				instance = tmp11;
				HX_STACK_LINE(173)
				bool tmp12 = (instance != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(173)
				if ((tmp12)){
					HX_STACK_LINE(173)
					::openfl::text::Font tmp13 = instance;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(173)
					return tmp13;
				}
			}
		}
		HX_STACK_LINE(179)
		::openfl::text::Font tmp7 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::findFont(HX_HCSTRING("_serif","\xbe","\x66","\x15","\x76"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(179)
		instance = tmp7;
		HX_STACK_LINE(181)
		bool tmp8 = (instance != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(181)
		if ((tmp8)){
			HX_STACK_LINE(181)
			::openfl::text::Font tmp9 = instance;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(181)
			return tmp9;
		}
	}
	HX_STACK_LINE(185)
	::String tmp2 = ::lime::_system::System_obj::get_fontsDirectory();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(185)
	::String systemFontDirectory = tmp2;		HX_STACK_VAR(systemFontDirectory,"systemFontDirectory");
	HX_STACK_LINE(216)
	::String tmp3 = (systemFontDirectory + HX_HCSTRING("/freefont/FreeSerif.ttf","\xa4","\xa6","\x9d","\x92"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(216)
	::String tmp4 = (systemFontDirectory + HX_HCSTRING("/FreeSerif.ttf","\x7a","\x49","\xa8","\x1b"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(216)
	fontList = Array_obj< ::String >::__new().Add(tmp3).Add(tmp4);
	HX_STACK_LINE(225)
	{
		HX_STACK_LINE(225)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(225)
		while((true)){
			HX_STACK_LINE(225)
			bool tmp5 = (_g < fontList->length);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(225)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(225)
			if ((tmp6)){
				HX_STACK_LINE(225)
				break;
			}
			HX_STACK_LINE(225)
			::String tmp7 = fontList->__get(_g);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(225)
			::String font = tmp7;		HX_STACK_VAR(font,"font");
			HX_STACK_LINE(225)
			++(_g);
			HX_STACK_LINE(227)
			::String tmp8 = font;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(227)
			::openfl::text::Font tmp9 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::findFont(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(227)
			instance = tmp9;
			HX_STACK_LINE(229)
			bool tmp10 = (instance != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(229)
			if ((tmp10)){
				HX_STACK_LINE(229)
				::openfl::text::Font tmp11 = instance;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(229)
				return tmp11;
			}
		}
	}
	HX_STACK_LINE(235)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoTextField_obj,getFontInstance,return )

int CairoTextField_obj::getLineBreaks( ::openfl::text::TextField textField){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","getLineBreaks",0x445de0f6,"openfl._internal.renderer.cairo.CairoTextField.getLineBreaks","openfl/_internal/renderer/cairo/CairoTextField.hx",240,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_LINE(244)
	int lines = (int)0;		HX_STACK_VAR(lines,"lines");
	HX_STACK_LINE(246)
	{
		HX_STACK_LINE(246)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(246)
		::String tmp = textField->get_text();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(246)
		int tmp1 = ::haxe::Utf8_obj::length(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(246)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(246)
		while((true)){
			HX_STACK_LINE(246)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(246)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(246)
			if ((tmp3)){
				HX_STACK_LINE(246)
				break;
			}
			HX_STACK_LINE(246)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(246)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(248)
			::String tmp5 = textField->get_text();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(248)
			int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(248)
			int tmp7 = ::haxe::Utf8_obj::charCodeAt(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(248)
			int _char = tmp7;		HX_STACK_VAR(_char,"char");
			HX_STACK_LINE(250)
			int tmp8 = _char;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(250)
			int tmp9 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::__utf8_endline_code;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(250)
			bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(250)
			if ((tmp10)){
				HX_STACK_LINE(252)
				(lines)++;
			}
		}
	}
	HX_STACK_LINE(258)
	int tmp = lines;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(258)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoTextField_obj,getLineBreaks,return )

Array< int > CairoTextField_obj::getLineBreakIndices( ::openfl::text::TextField textField){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","getLineBreakIndices",0x282713ca,"openfl._internal.renderer.cairo.CairoTextField.getLineBreakIndices","openfl/_internal/renderer/cairo/CairoTextField.hx",263,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_LINE(267)
	Array< int > breaks = Array_obj< int >::__new();		HX_STACK_VAR(breaks,"breaks");
	HX_STACK_LINE(269)
	{
		HX_STACK_LINE(269)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(269)
		::String tmp = textField->get_text();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(269)
		int tmp1 = ::haxe::Utf8_obj::length(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(269)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(269)
		while((true)){
			HX_STACK_LINE(269)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(269)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(269)
			if ((tmp3)){
				HX_STACK_LINE(269)
				break;
			}
			HX_STACK_LINE(269)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(269)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(271)
			{
				HX_STACK_LINE(273)
				::String tmp5 = textField->get_text();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(273)
				int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(273)
				int tmp7 = ::haxe::Utf8_obj::charCodeAt(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(273)
				int _char = tmp7;		HX_STACK_VAR(_char,"char");
				HX_STACK_LINE(275)
				int tmp8 = _char;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(275)
				int tmp9 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::__utf8_endline_code;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(275)
				bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(275)
				if ((tmp10)){
					HX_STACK_LINE(277)
					int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(277)
					breaks->push(tmp11);
				}
			}
		}
	}
	HX_STACK_LINE(285)
	return breaks;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoTextField_obj,getLineBreakIndices,return )

int CairoTextField_obj::getLineBreaksInRange( ::openfl::text::TextField textField,int i){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","getLineBreaksInRange",0x19c56d42,"openfl._internal.renderer.cairo.CairoTextField.getLineBreaksInRange","openfl/_internal/renderer/cairo/CairoTextField.hx",290,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(294)
	int lines = (int)0;		HX_STACK_VAR(lines,"lines");
	HX_STACK_LINE(296)
	int tmp = textField->__ranges->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(296)
	int tmp1 = i;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(296)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(296)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(296)
	if ((tmp2)){
		HX_STACK_LINE(296)
		tmp3 = (i >= (int)0);
	}
	else{
		HX_STACK_LINE(296)
		tmp3 = false;
	}
	HX_STACK_LINE(296)
	if ((tmp3)){
		HX_STACK_LINE(298)
		::openfl::text::TextFormatRange tmp4 = textField->__ranges->__get(i).StaticCast< ::openfl::text::TextFormatRange >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(298)
		::openfl::text::TextFormatRange range = tmp4;		HX_STACK_VAR(range,"range");
		HX_STACK_LINE(302)
		bool tmp5 = (range->start > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(302)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(302)
		if ((tmp5)){
			HX_STACK_LINE(302)
			int tmp7 = range->end;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(302)
			::String tmp8 = textField->get_text();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(302)
			::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(302)
			int tmp10 = tmp9.length;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(302)
			tmp6 = (tmp7 < tmp10);
		}
		else{
			HX_STACK_LINE(302)
			tmp6 = false;
		}
		HX_STACK_LINE(302)
		if ((tmp6)){
			HX_STACK_LINE(304)
			int _g1 = range->start;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(304)
			int tmp7 = (range->end + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(304)
			int _g = tmp7;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(304)
			while((true)){
				HX_STACK_LINE(304)
				bool tmp8 = (_g1 < _g);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(304)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(304)
				if ((tmp9)){
					HX_STACK_LINE(304)
					break;
				}
				HX_STACK_LINE(304)
				int tmp10 = (_g1)++;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(304)
				int j = tmp10;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(306)
				::String tmp11 = textField->get_text();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(306)
				int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(306)
				int tmp13 = ::haxe::Utf8_obj::charCodeAt(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(306)
				int _char = tmp13;		HX_STACK_VAR(_char,"char");
				HX_STACK_LINE(308)
				int tmp14 = _char;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(308)
				int tmp15 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::__utf8_endline_code;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(308)
				bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(308)
				if ((tmp16)){
					HX_STACK_LINE(310)
					(lines)++;
				}
			}
		}
	}
	HX_STACK_LINE(320)
	int tmp4 = lines;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(320)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,getLineBreaksInRange,return )

Array< int > CairoTextField_obj::getLineIndices( ::openfl::text::TextField textField,int line){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","getLineIndices",0x894cc6c5,"openfl._internal.renderer.cairo.CairoTextField.getLineIndices","openfl/_internal/renderer/cairo/CairoTextField.hx",325,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(line,"line")
	HX_STACK_LINE(329)
	::openfl::text::TextField tmp = textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(329)
	Array< int > breaks = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineBreakIndices(tmp);		HX_STACK_VAR(breaks,"breaks");
	HX_STACK_LINE(330)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(331)
	int first_char = (int)0;		HX_STACK_VAR(first_char,"first_char");
	HX_STACK_LINE(332)
	::String tmp1 = textField->get_text();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(332)
	int tmp2 = tmp1.length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(332)
	int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(332)
	int last_char = tmp3;		HX_STACK_VAR(last_char,"last_char");
	HX_STACK_LINE(334)
	{
		HX_STACK_LINE(334)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(334)
		while((true)){
			HX_STACK_LINE(334)
			bool tmp4 = (_g < breaks->length);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(334)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(334)
			if ((tmp5)){
				HX_STACK_LINE(334)
				break;
			}
			HX_STACK_LINE(334)
			int tmp6 = breaks->__get(_g);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(334)
			int br = tmp6;		HX_STACK_VAR(br,"br");
			HX_STACK_LINE(334)
			++(_g);
			HX_STACK_LINE(338)
			bool tmp7 = (i == line);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(338)
			if ((tmp7)){
				HX_STACK_LINE(342)
				int tmp8 = (br + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(342)
				first_char = tmp8;
				HX_STACK_LINE(346)
				int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(346)
				int tmp10 = (breaks->length - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(346)
				bool tmp11 = (tmp9 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(346)
				if ((tmp11)){
					HX_STACK_LINE(351)
					int tmp12 = (i + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(351)
					int tmp13 = breaks->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(351)
					int tmp14 = (tmp13 - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(351)
					last_char = tmp14;
				}
			}
			HX_STACK_LINE(357)
			(i)++;
		}
	}
	HX_STACK_LINE(361)
	return Array_obj< int >::__new().Add(first_char).Add(last_char);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,getLineIndices,return )

Float CairoTextField_obj::getLineMetric( ::openfl::text::TextField textField,int line,int metric){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","getLineMetric",0x380c6652,"openfl._internal.renderer.cairo.CairoTextField.getLineMetric","openfl/_internal/renderer/cairo/CairoTextField.hx",366,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(line,"line")
	HX_STACK_ARG(metric,"metric")
	HX_STACK_LINE(368)
	bool tmp = (textField->__ranges == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(368)
	if ((tmp)){
		HX_STACK_LINE(370)
		::openfl::text::TextField tmp1 = textField;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(370)
		int tmp2 = metric;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(370)
		Float tmp3 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetricSubRangesNull(tmp1,true,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(370)
		return tmp3;
	}
	else{
		HX_STACK_LINE(374)
		::openfl::text::TextField tmp1 = textField;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(374)
		int tmp2 = line;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(374)
		int tmp3 = metric;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(374)
		Float tmp4 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetricSubRangesNotNull(tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(374)
		return tmp4;
	}
	HX_STACK_LINE(368)
	return ((Float)0.);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoTextField_obj,getLineMetric,return )

Float CairoTextField_obj::getLineMetricSubRangesNotNull( ::openfl::text::TextField textField,int specificLine,int metric){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","getLineMetricSubRangesNotNull",0x4ef3fc96,"openfl._internal.renderer.cairo.CairoTextField.getLineMetricSubRangesNotNull","openfl/_internal/renderer/cairo/CairoTextField.hx",381,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(specificLine,"specificLine")
	HX_STACK_ARG(metric,"metric")
	HX_STACK_LINE(386)
	::openfl::text::TextField tmp = textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(386)
	int tmp1 = specificLine;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(386)
	Array< int > lineChars = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineIndices(tmp,tmp1);		HX_STACK_VAR(lineChars,"lineChars");
	HX_STACK_LINE(388)
	Float m = ((Float)0.0);		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(389)
	Float best_m = ((Float)0.0);		HX_STACK_VAR(best_m,"best_m");
	HX_STACK_LINE(391)
	{
		HX_STACK_LINE(391)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(391)
		Array< ::Dynamic > _g1 = textField->__ranges;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(391)
		while((true)){
			HX_STACK_LINE(391)
			bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(391)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(391)
			if ((tmp3)){
				HX_STACK_LINE(391)
				break;
			}
			HX_STACK_LINE(391)
			::openfl::text::TextFormatRange tmp4 = _g1->__get(_g).StaticCast< ::openfl::text::TextFormatRange >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(391)
			::openfl::text::TextFormatRange range = tmp4;		HX_STACK_VAR(range,"range");
			HX_STACK_LINE(391)
			++(_g);
			HX_STACK_LINE(393)
			int tmp5 = range->start;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(393)
			int tmp6 = lineChars->__get((int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(393)
			bool tmp7 = (tmp5 >= tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(393)
			if ((tmp7)){
				HX_STACK_LINE(395)
				::openfl::text::TextFormat tmp8 = range->format;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(395)
				::openfl::text::Font tmp9 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getFontInstance(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(395)
				::openfl::text::Font font = tmp9;		HX_STACK_VAR(font,"font");
				HX_STACK_LINE(397)
				bool tmp10 = (font != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(397)
				if ((tmp10)){
					HX_STACK_LINE(399)
					int tmp11 = metric;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(399)
					Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(399)
					switch( (int)(tmp11)){
						case (int)2: {
							HX_STACK_LINE(401)
							::openfl::text::TextField tmp13 = textField;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(401)
							int tmp14 = specificLine;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(401)
							Float tmp15 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetricSubRangesNotNull(tmp13,tmp14,(int)0);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(401)
							::openfl::text::TextField tmp16 = textField;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(401)
							int tmp17 = specificLine;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(401)
							Float tmp18 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetricSubRangesNotNull(tmp16,tmp17,(int)1);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(401)
							Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(401)
							::openfl::text::TextField tmp20 = textField;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(401)
							int tmp21 = specificLine;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(401)
							Float tmp22 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetricSubRangesNotNull(tmp20,tmp21,(int)3);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(401)
							tmp12 = (tmp19 + tmp22);
						}
						;break;
						case (int)0: {
							HX_STACK_LINE(402)
							int tmp13 = font->get_ascender();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(402)
							int tmp14 = font->get_unitsPerEM();		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(402)
							Float tmp15 = (Float(tmp13) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(402)
							Dynamic tmp16 = textField->__textFormat->size;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(402)
							tmp12 = (tmp15 * tmp16);
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(403)
							int tmp13 = font->get_descender();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(403)
							int tmp14 = font->get_unitsPerEM();		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(403)
							Float tmp15 = (Float(tmp13) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(403)
							Dynamic tmp16 = textField->__textFormat->size;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(403)
							Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(403)
							tmp12 = ::Math_obj::abs(tmp17);
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(404)
							tmp12 = textField->__textFormat->leading;
						}
						;break;
						default: {
							HX_STACK_LINE(405)
							tmp12 = (int)0;
						}
					}
					HX_STACK_LINE(399)
					m = tmp12;
				}
			}
			HX_STACK_LINE(413)
			bool tmp8 = (m > best_m);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(413)
			if ((tmp8)){
				HX_STACK_LINE(415)
				best_m = m;
			}
			HX_STACK_LINE(419)
			m = (int)0;
		}
	}
	HX_STACK_LINE(423)
	Float tmp2 = best_m;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(423)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoTextField_obj,getLineMetricSubRangesNotNull,return )

Float CairoTextField_obj::getLineMetricSubRangesNull( ::openfl::text::TextField textField,hx::Null< bool >  __o_singleLine,int metric){
bool singleLine = __o_singleLine.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","getLineMetricSubRangesNull",0xbb6659ab,"openfl._internal.renderer.cairo.CairoTextField.getLineMetricSubRangesNull","openfl/_internal/renderer/cairo/CairoTextField.hx",428,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(singleLine,"singleLine")
	HX_STACK_ARG(metric,"metric")
{
		HX_STACK_LINE(432)
		::openfl::text::TextFormat tmp = textField->__textFormat;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(432)
		::openfl::text::Font tmp1 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getFontInstance(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(432)
		::openfl::text::Font font = tmp1;		HX_STACK_VAR(font,"font");
		HX_STACK_LINE(434)
		bool tmp2 = (font != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(434)
		if ((tmp2)){
			HX_STACK_LINE(436)
			int tmp3 = metric;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(436)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(436)
			switch( (int)(tmp3)){
				case (int)2: {
					HX_STACK_LINE(438)
					::openfl::text::TextField tmp5 = textField;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(438)
					bool tmp6 = singleLine;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(438)
					Float tmp7 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetricSubRangesNull(tmp5,tmp6,(int)0);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(438)
					::openfl::text::TextField tmp8 = textField;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(438)
					bool tmp9 = singleLine;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(438)
					Float tmp10 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetricSubRangesNull(tmp8,tmp9,(int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(438)
					Float tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(438)
					::openfl::text::TextField tmp12 = textField;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(438)
					bool tmp13 = singleLine;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(438)
					Float tmp14 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetricSubRangesNull(tmp12,tmp13,(int)3);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(438)
					tmp4 = (tmp11 + tmp14);
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(439)
					int tmp5 = font->get_ascender();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(439)
					int tmp6 = font->get_unitsPerEM();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(439)
					Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(439)
					Dynamic tmp8 = textField->__textFormat->size;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(439)
					tmp4 = (tmp7 * tmp8);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(440)
					int tmp5 = font->get_descender();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(440)
					int tmp6 = font->get_unitsPerEM();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(440)
					Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(440)
					Dynamic tmp8 = textField->__textFormat->size;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(440)
					Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(440)
					tmp4 = ::Math_obj::abs(tmp9);
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(441)
					tmp4 = textField->__textFormat->leading;
				}
				;break;
				default: {
					HX_STACK_LINE(442)
					tmp4 = (int)0;
				}
			}
			HX_STACK_LINE(436)
			return tmp4;
		}
		HX_STACK_LINE(448)
		return (int)0;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoTextField_obj,getLineMetricSubRangesNull,return )

Float CairoTextField_obj::getLineWidth( ::openfl::text::TextField textField,int line){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","getLineWidth",0xbf1d7224,"openfl._internal.renderer.cairo.CairoTextField.getLineWidth","openfl/_internal/renderer/cairo/CairoTextField.hx",453,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(line,"line")
	HX_STACK_LINE(459)
	::openfl::text::TextField tmp = textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(459)
	Array< Float > measurements = ::openfl::_internal::renderer::cairo::CairoTextField_obj::measureTextSub(tmp,false);		HX_STACK_VAR(measurements,"measurements");
	HX_STACK_LINE(461)
	Float currWidth = ((Float)0.0);		HX_STACK_VAR(currWidth,"currWidth");
	HX_STACK_LINE(462)
	Float bestWidth = ((Float)0.0);		HX_STACK_VAR(bestWidth,"bestWidth");
	HX_STACK_LINE(464)
	::openfl::text::TextField tmp1 = textField;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(464)
	Array< int > linebreaks = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineBreakIndices(tmp1);		HX_STACK_VAR(linebreaks,"linebreaks");
	HX_STACK_LINE(465)
	int currLine = (int)0;		HX_STACK_VAR(currLine,"currLine");
	HX_STACK_LINE(467)
	{
		HX_STACK_LINE(467)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(467)
		int _g = measurements->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(467)
		while((true)){
			HX_STACK_LINE(467)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(467)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(467)
			if ((tmp3)){
				HX_STACK_LINE(467)
				break;
			}
			HX_STACK_LINE(467)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(467)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(469)
			Float tmp5 = measurements->__get(i);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(469)
			Float measure = tmp5;		HX_STACK_VAR(measure,"measure");
			HX_STACK_LINE(471)
			int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(471)
			int tmp7 = linebreaks->indexOf(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(471)
			bool tmp8 = (tmp7 != (int)-1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(471)
			if ((tmp8)){
				HX_STACK_LINE(473)
				bool tmp9 = (currLine == line);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(473)
				if ((tmp9)){
					HX_STACK_LINE(475)
					Float tmp10 = currWidth;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(475)
					return tmp10;
				}
				else{
					HX_STACK_LINE(477)
					int tmp10 = line;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(477)
					int tmp11 = (int)-1;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(477)
					bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(477)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(477)
					if ((tmp12)){
						HX_STACK_LINE(477)
						tmp13 = (currWidth > bestWidth);
					}
					else{
						HX_STACK_LINE(477)
						tmp13 = false;
					}
					HX_STACK_LINE(477)
					if ((tmp13)){
						HX_STACK_LINE(479)
						bestWidth = currWidth;
					}
				}
				HX_STACK_LINE(483)
				currWidth = (int)0;
				HX_STACK_LINE(484)
				(currLine)++;
			}
			else{
				HX_STACK_LINE(488)
				Float tmp9 = measurements->__get(i);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(488)
				hx::AddEq(currWidth,tmp9);
			}
		}
	}
	HX_STACK_LINE(494)
	bool tmp2 = (currLine == line);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(494)
	if ((tmp2)){
		HX_STACK_LINE(496)
		bestWidth = currWidth;
	}
	else{
		HX_STACK_LINE(498)
		int tmp3 = line;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(498)
		int tmp4 = (int)-1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(498)
		bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(498)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(498)
		if ((tmp5)){
			HX_STACK_LINE(498)
			tmp6 = (currWidth > bestWidth);
		}
		else{
			HX_STACK_LINE(498)
			tmp6 = false;
		}
		HX_STACK_LINE(498)
		if ((tmp6)){
			HX_STACK_LINE(500)
			bestWidth = currWidth;
		}
	}
	HX_STACK_LINE(504)
	Float tmp3 = bestWidth;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(504)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,getLineWidth,return )

Float CairoTextField_obj::getTextHeight( ::openfl::text::TextField textField){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","getTextHeight",0x933e6b82,"openfl._internal.renderer.cairo.CairoTextField.getTextHeight","openfl/_internal/renderer/cairo/CairoTextField.hx",515,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_LINE(520)
	Float th = ((Float)0.0);		HX_STACK_VAR(th,"th");
	HX_STACK_LINE(522)
	{
		HX_STACK_LINE(522)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(522)
		int tmp = textField->get_numLines();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(522)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(522)
		while((true)){
			HX_STACK_LINE(522)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(522)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(522)
			if ((tmp2)){
				HX_STACK_LINE(522)
				break;
			}
			HX_STACK_LINE(522)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(522)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(524)
			::openfl::text::TextField tmp4 = textField;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(524)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(524)
			Float tmp6 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetric(tmp4,tmp5,(int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(524)
			::openfl::text::TextField tmp7 = textField;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(524)
			int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(524)
			Float tmp9 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetric(tmp7,tmp8,(int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(524)
			Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(524)
			hx::AddEq(th,tmp10);
			HX_STACK_LINE(526)
			int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(526)
			int tmp12 = textField->get_numLines();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(526)
			int tmp13 = (tmp12 - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(526)
			bool tmp14 = (tmp11 != tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(526)
			if ((tmp14)){
				HX_STACK_LINE(528)
				::openfl::text::TextField tmp15 = textField;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(528)
				int tmp16 = i;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(528)
				Float tmp17 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineMetric(tmp15,tmp16,(int)3);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(528)
				hx::AddEq(th,tmp17);
			}
		}
	}
	HX_STACK_LINE(534)
	Float tmp = th;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(534)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoTextField_obj,getTextHeight,return )

Float CairoTextField_obj::getTextWidth( ::openfl::text::TextField textField,::String text){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","getTextWidth",0x110ffecb,"openfl._internal.renderer.cairo.CairoTextField.getTextWidth","openfl/_internal/renderer/cairo/CairoTextField.hx",541,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(text,"text")
	HX_STACK_LINE(541)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,getTextWidth,return )

Array< Float > CairoTextField_obj::measureText( ::openfl::text::TextField textField,hx::Null< bool >  __o_condense){
bool condense = __o_condense.Default(true);
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","measureText",0xdd449c03,"openfl._internal.renderer.cairo.CairoTextField.measureText","openfl/_internal/renderer/cairo/CairoTextField.hx",546,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(condense,"condense")
{
		HX_STACK_LINE(551)
		::openfl::text::TextField tmp = textField;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(551)
		bool tmp1 = condense;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(551)
		return ::openfl::_internal::renderer::cairo::CairoTextField_obj::measureTextSub(tmp,tmp1);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,measureText,return )

Array< Float > CairoTextField_obj::measureTextSub( ::openfl::text::TextField textField,bool condense){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","measureTextSub",0xe4bfe93d,"openfl._internal.renderer.cairo.CairoTextField.measureTextSub","openfl/_internal/renderer/cairo/CairoTextField.hx",556,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(condense,"condense")
	HX_STACK_LINE(560)
	bool tmp = (textField->__textLayout == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(560)
	if ((tmp)){
		HX_STACK_LINE(562)
		::lime::text::TextLayout tmp1 = ::lime::text::TextLayout_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(562)
		textField->__textLayout = tmp1;
	}
	HX_STACK_LINE(566)
	bool tmp1 = (textField->__ranges == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(566)
	if ((tmp1)){
		HX_STACK_LINE(568)
		::openfl::text::TextField tmp2 = textField;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(568)
		bool tmp3 = condense;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(568)
		return ::openfl::_internal::renderer::cairo::CairoTextField_obj::measureTextSubRangesNull(tmp2,tmp3);
	}
	else{
		HX_STACK_LINE(572)
		::openfl::text::TextField tmp2 = textField;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(572)
		bool tmp3 = condense;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(572)
		return ::openfl::_internal::renderer::cairo::CairoTextField_obj::measureTextSubRangesNotNull(tmp2,tmp3);
	}
	HX_STACK_LINE(576)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,measureTextSub,return )

Array< Float > CairoTextField_obj::measureTextSubRangesNotNull( ::openfl::text::TextField textField,bool condense){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","measureTextSubRangesNotNull",0xe93a6447,"openfl._internal.renderer.cairo.CairoTextField.measureTextSubRangesNotNull","openfl/_internal/renderer/cairo/CairoTextField.hx",581,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(condense,"condense")
	HX_STACK_LINE(585)
	Array< Float > measurements = Array_obj< Float >::__new();		HX_STACK_VAR(measurements,"measurements");
	HX_STACK_LINE(586)
	::lime::text::TextLayout textLayout = textField->__textLayout;		HX_STACK_VAR(textLayout,"textLayout");
	HX_STACK_LINE(588)
	{
		HX_STACK_LINE(588)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(588)
		Array< ::Dynamic > _g1 = textField->__ranges;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(588)
		while((true)){
			HX_STACK_LINE(588)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(588)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(588)
			if ((tmp1)){
				HX_STACK_LINE(588)
				break;
			}
			HX_STACK_LINE(588)
			::openfl::text::TextFormatRange tmp2 = _g1->__get(_g).StaticCast< ::openfl::text::TextFormatRange >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(588)
			::openfl::text::TextFormatRange range = tmp2;		HX_STACK_VAR(range,"range");
			HX_STACK_LINE(588)
			++(_g);
			HX_STACK_LINE(590)
			::openfl::text::TextFormat tmp3 = range->format;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(590)
			::openfl::text::Font tmp4 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getFontInstance(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(590)
			::openfl::text::Font font = tmp4;		HX_STACK_VAR(font,"font");
			HX_STACK_LINE(591)
			Float width = ((Float)0.0);		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(593)
			bool tmp5 = (font != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(593)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(593)
			if ((tmp5)){
				HX_STACK_LINE(593)
				Dynamic tmp7 = range->format->size;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(593)
				Dynamic tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(593)
				tmp6 = (tmp8 != null());
			}
			else{
				HX_STACK_LINE(593)
				tmp6 = false;
			}
			HX_STACK_LINE(593)
			if ((tmp6)){
				HX_STACK_LINE(595)
				textLayout->set_text(null());
				HX_STACK_LINE(596)
				::openfl::text::Font tmp7 = font;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(596)
				textLayout->set_font(tmp7);
				HX_STACK_LINE(597)
				Dynamic tmp8 = range->format->size;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(597)
				int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(597)
				textLayout->set_size(tmp9);
				HX_STACK_LINE(598)
				::String tmp10 = textField->get_text();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(598)
				int tmp11 = range->start;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(598)
				int tmp12 = range->end;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(598)
				::String tmp13 = tmp10.substring(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(598)
				textLayout->set_text(tmp13);
				HX_STACK_LINE(600)
				{
					HX_STACK_LINE(600)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(600)
					Array< ::Dynamic > _g3 = textLayout->get_positions();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(600)
					while((true)){
						HX_STACK_LINE(600)
						bool tmp14 = (_g2 < _g3->length);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(600)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(600)
						if ((tmp15)){
							HX_STACK_LINE(600)
							break;
						}
						HX_STACK_LINE(600)
						::lime::text::GlyphPosition tmp16 = _g3->__get(_g2).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(600)
						::lime::text::GlyphPosition position = tmp16;		HX_STACK_VAR(position,"position");
						HX_STACK_LINE(600)
						++(_g2);
						HX_STACK_LINE(602)
						bool tmp17 = condense;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(602)
						if ((tmp17)){
							HX_STACK_LINE(604)
							Float tmp18 = position->advance->x;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(604)
							hx::AddEq(width,tmp18);
						}
						else{
							HX_STACK_LINE(608)
							Float tmp18 = position->advance->x;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(608)
							measurements->push(tmp18);
						}
					}
				}
			}
			HX_STACK_LINE(616)
			bool tmp7 = condense;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(616)
			if ((tmp7)){
				HX_STACK_LINE(618)
				Float tmp8 = width;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(618)
				measurements->push(tmp8);
			}
		}
	}
	HX_STACK_LINE(624)
	return measurements;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,measureTextSubRangesNotNull,return )

Array< Float > CairoTextField_obj::measureTextSubRangesNull( ::openfl::text::TextField textField,bool condense){
	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","measureTextSubRangesNull",0xaf47a95a,"openfl._internal.renderer.cairo.CairoTextField.measureTextSubRangesNull","openfl/_internal/renderer/cairo/CairoTextField.hx",629,0xfadfb778)
	HX_STACK_ARG(textField,"textField")
	HX_STACK_ARG(condense,"condense")
	HX_STACK_LINE(633)
	::openfl::text::TextFormat tmp = textField->__textFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(633)
	::openfl::text::Font tmp1 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getFontInstance(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(633)
	::openfl::text::Font font = tmp1;		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(634)
	Float width = ((Float)0.0);		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(635)
	Array< Float > widths = Array_obj< Float >::__new();		HX_STACK_VAR(widths,"widths");
	HX_STACK_LINE(636)
	::lime::text::TextLayout textLayout = textField->__textLayout;		HX_STACK_VAR(textLayout,"textLayout");
	HX_STACK_LINE(638)
	bool tmp2 = (font != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(638)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(638)
	if ((tmp2)){
		HX_STACK_LINE(638)
		Dynamic tmp4 = textField->__textFormat->size;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(638)
		Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(638)
		tmp3 = (tmp5 != null());
	}
	else{
		HX_STACK_LINE(638)
		tmp3 = false;
	}
	HX_STACK_LINE(638)
	if ((tmp3)){
		HX_STACK_LINE(640)
		textLayout->set_text(null());
		HX_STACK_LINE(641)
		::openfl::text::Font tmp4 = font;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(641)
		textLayout->set_font(tmp4);
		HX_STACK_LINE(642)
		Dynamic tmp5 = textField->__textFormat->size;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(642)
		int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(642)
		textLayout->set_size(tmp6);
		HX_STACK_LINE(643)
		::String tmp7 = textField->__text;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(643)
		textLayout->set_text(tmp7);
		HX_STACK_LINE(645)
		{
			HX_STACK_LINE(645)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(645)
			Array< ::Dynamic > _g1 = textLayout->get_positions();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(645)
			while((true)){
				HX_STACK_LINE(645)
				bool tmp8 = (_g < _g1->length);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(645)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(645)
				if ((tmp9)){
					HX_STACK_LINE(645)
					break;
				}
				HX_STACK_LINE(645)
				::lime::text::GlyphPosition tmp10 = _g1->__get(_g).StaticCast< ::lime::text::GlyphPosition >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(645)
				::lime::text::GlyphPosition position = tmp10;		HX_STACK_VAR(position,"position");
				HX_STACK_LINE(645)
				++(_g);
				HX_STACK_LINE(647)
				bool tmp11 = condense;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(647)
				if ((tmp11)){
					HX_STACK_LINE(649)
					Float tmp12 = position->advance->x;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(649)
					hx::AddEq(width,tmp12);
				}
				else{
					HX_STACK_LINE(653)
					Float tmp12 = position->advance->x;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(653)
					widths->push(tmp12);
				}
			}
		}
	}
	HX_STACK_LINE(661)
	bool tmp4 = condense;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(661)
	if ((tmp4)){
		HX_STACK_LINE(663)
		Float tmp5 = width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(663)
		widths->push(tmp5);
	}
	HX_STACK_LINE(667)
	return widths;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,measureTextSubRangesNull,return )

Void CairoTextField_obj::render( ::openfl::text::TextField textField,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","render",0xabb9797e,"openfl._internal.renderer.cairo.CairoTextField.render","openfl/_internal/renderer/cairo/CairoTextField.hx",672,0xfadfb778)
		HX_STACK_ARG(textField,"textField")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(675)
		bool tmp = textField->__dirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(675)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(675)
		if ((tmp1)){
			HX_STACK_LINE(675)
			return null();
		}
		HX_STACK_LINE(677)
		::openfl::geom::Rectangle tmp2 = textField->getBounds(null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(677)
		::openfl::geom::Rectangle bounds = tmp2;		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(678)
		::openfl::text::TextFormat tmp3 = textField->getTextFormat(null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(678)
		::openfl::text::TextFormat format = tmp3;		HX_STACK_VAR(format,"format");
		HX_STACK_LINE(680)
		::openfl::display::Graphics graphics = textField->__graphics;		HX_STACK_VAR(graphics,"graphics");
		HX_STACK_LINE(681)
		::lime::graphics::cairo::Cairo cairo = graphics->__cairo;		HX_STACK_VAR(cairo,"cairo");
		HX_STACK_LINE(683)
		bool tmp4 = (cairo != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(683)
		if ((tmp4)){
			HX_STACK_LINE(685)
			Dynamic tmp5 = cairo->get_target();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(685)
			Dynamic surface = tmp5;		HX_STACK_VAR(surface,"surface");
			HX_STACK_LINE(687)
			Float tmp6 = bounds->width;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(687)
			int tmp7 = ::Math_obj::ceil(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(687)
			Dynamic tmp8 = surface;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(687)
			int tmp9 = ::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::get_width(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(687)
			bool tmp10 = (tmp7 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(687)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(687)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(687)
			if ((tmp11)){
				HX_STACK_LINE(687)
				Float tmp13 = bounds->height;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(687)
				Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(687)
				int tmp15 = ::Math_obj::ceil(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(687)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(687)
				Dynamic tmp17 = surface;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(687)
				Dynamic tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(687)
				int tmp19 = ::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::get_height(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(687)
				int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(687)
				tmp12 = (tmp16 != tmp20);
			}
			else{
				HX_STACK_LINE(687)
				tmp12 = true;
			}
			HX_STACK_LINE(687)
			if ((tmp12)){
				HX_STACK_LINE(689)
				cairo->destroy();
				HX_STACK_LINE(690)
				cairo = null();
			}
		}
		HX_STACK_LINE(696)
		bool tmp5 = (cairo == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(696)
		if ((tmp5)){
			HX_STACK_LINE(698)
			Float tmp6 = bounds->width;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(698)
			int tmp7 = ::Math_obj::ceil(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(698)
			Float tmp8 = bounds->height;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(698)
			int tmp9 = ::Math_obj::ceil(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(698)
			::openfl::display::BitmapData tmp10 = ::openfl::display::BitmapData_obj::__new(tmp7,tmp9,true,null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(698)
			::openfl::display::BitmapData bitmap = tmp10;		HX_STACK_VAR(bitmap,"bitmap");
			HX_STACK_LINE(699)
			::lime::graphics::Image tmp11 = bitmap->__image;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(699)
			Dynamic tmp12 = ::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::fromImage(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(699)
			Dynamic surface = tmp12;		HX_STACK_VAR(surface,"surface");
			HX_STACK_LINE(700)
			::lime::graphics::cairo::Cairo tmp13 = ::lime::graphics::cairo::Cairo_obj::__new(surface);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(700)
			graphics->__cairo = tmp13;
			HX_STACK_LINE(701)
			Dynamic tmp14 = surface;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(701)
			::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::destroy(tmp14);
			HX_STACK_LINE(703)
			bitmap->__bgra = true;
			HX_STACK_LINE(705)
			graphics->__bitmap = bitmap;
			HX_STACK_LINE(706)
			::openfl::geom::Rectangle tmp15 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,bounds->width,bounds->height);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(706)
			graphics->__bounds = tmp15;
			HX_STACK_LINE(708)
			cairo = graphics->__cairo;
			HX_STACK_LINE(710)
			::lime::graphics::cairo::CairoFontOptions tmp16 = ::lime::graphics::cairo::CairoFontOptions_obj::__new(null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(710)
			::lime::graphics::cairo::CairoFontOptions options = tmp16;		HX_STACK_VAR(options,"options");
			HX_STACK_LINE(711)
			options->set_hintStyle((int)4);
			HX_STACK_LINE(712)
			options->set_hintMetrics((int)2);
			HX_STACK_LINE(713)
			options->set_antialias((int)5);
			HX_STACK_LINE(714)
			::lime::graphics::cairo::CairoFontOptions tmp17 = options;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(714)
			cairo->setFontOptions(tmp17);
		}
		HX_STACK_LINE(718)
		::openfl::text::TextFormat tmp6 = format;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(718)
		::openfl::text::Font tmp7 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getFontInstance(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(718)
		::openfl::text::Font font = tmp7;		HX_STACK_VAR(font,"font");
		HX_STACK_LINE(720)
		bool tmp8 = (textField->__cairoFont != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(720)
		if ((tmp8)){
			HX_STACK_LINE(722)
			::lime::text::Font tmp9 = textField->__cairoFont->font;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(722)
			::openfl::text::Font tmp10 = font;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(722)
			bool tmp11 = (tmp9 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(722)
			if ((tmp11)){
				HX_STACK_LINE(724)
				textField->__cairoFont->destroy();
				HX_STACK_LINE(725)
				textField->__cairoFont = null();
			}
		}
		HX_STACK_LINE(731)
		bool tmp9 = (textField->__cairoFont == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(731)
		if ((tmp9)){
			HX_STACK_LINE(733)
			::lime::graphics::cairo::CairoFont tmp10 = ::lime::graphics::cairo::CairoFont_obj::__new(font);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(733)
			textField->__cairoFont = tmp10;
		}
		HX_STACK_LINE(737)
		::lime::graphics::cairo::CairoFont tmp10 = textField->__cairoFont;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(737)
		cairo->setFontFace(tmp10);
		HX_STACK_LINE(738)
		Float tmp11 = textField->get_width();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(738)
		int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(738)
		int tmp13 = (tmp12 - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(738)
		Float tmp14 = textField->get_height();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(738)
		int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(738)
		int tmp16 = (tmp15 - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(738)
		cairo->rectangle(((Float)0.5),((Float)0.5),tmp13,tmp16);
		HX_STACK_LINE(740)
		bool tmp17 = textField->background;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(740)
		bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(740)
		if ((tmp18)){
			HX_STACK_LINE(742)
			cairo->set_operator((int)1);
			HX_STACK_LINE(743)
			cairo->setSourceRGBA((int)1,(int)1,(int)1,(int)0);
			HX_STACK_LINE(744)
			cairo->paint();
			HX_STACK_LINE(745)
			cairo->set_operator((int)2);
		}
		else{
			HX_STACK_LINE(749)
			int color = textField->backgroundColor;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(750)
			int tmp19 = (int(color) & int((int)16711680));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(750)
			int tmp20 = hx::UShr(tmp19,(int)16);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(750)
			Float tmp21 = (Float(tmp20) / Float((int)255));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(750)
			Float r = tmp21;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(751)
			int tmp22 = (int(color) & int((int)65280));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(751)
			int tmp23 = hx::UShr(tmp22,(int)8);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(751)
			Float tmp24 = (Float(tmp23) / Float((int)255));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(751)
			Float g = tmp24;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(752)
			int tmp25 = (int(color) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(752)
			Float tmp26 = (Float(tmp25) / Float((int)255));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(752)
			Float b = tmp26;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(754)
			Float tmp27 = r;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(754)
			Float tmp28 = g;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(754)
			Float tmp29 = b;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(754)
			cairo->setSourceRGB(tmp27,tmp28,tmp29);
			HX_STACK_LINE(755)
			cairo->fillPreserve();
		}
		HX_STACK_LINE(759)
		bool tmp19 = textField->border;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(759)
		if ((tmp19)){
			HX_STACK_LINE(761)
			int color = textField->borderColor;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(762)
			int tmp20 = (int(color) & int((int)16711680));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(762)
			int tmp21 = hx::UShr(tmp20,(int)16);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(762)
			Float tmp22 = (Float(tmp21) / Float((int)255));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(762)
			Float r = tmp22;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(763)
			int tmp23 = (int(color) & int((int)65280));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(763)
			int tmp24 = hx::UShr(tmp23,(int)8);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(763)
			Float tmp25 = (Float(tmp24) / Float((int)255));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(763)
			Float g = tmp25;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(764)
			int tmp26 = (int(color) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(764)
			Float tmp27 = (Float(tmp26) / Float((int)255));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(764)
			Float b = tmp27;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(766)
			Float tmp28 = r;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(766)
			Float tmp29 = g;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(766)
			Float tmp30 = b;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(766)
			cairo->setSourceRGB(tmp28,tmp29,tmp30);
			HX_STACK_LINE(767)
			cairo->set_lineWidth((int)1);
			HX_STACK_LINE(768)
			cairo->stroke();
		}
		HX_STACK_LINE(772)
		bool tmp20 = (textField->__text != null());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(772)
		bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(772)
		if ((tmp20)){
			HX_STACK_LINE(772)
			tmp21 = (textField->__text != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(772)
			tmp21 = false;
		}
		HX_STACK_LINE(772)
		if ((tmp21)){
			HX_STACK_LINE(774)
			::String tmp22 = textField->get_text();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(774)
			::String text = tmp22;		HX_STACK_VAR(text,"text");
			HX_STACK_LINE(776)
			bool tmp23 = textField->displayAsPassword;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(776)
			if ((tmp23)){
				HX_STACK_LINE(778)
				int length = text.length;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(779)
				::String mask = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(mask,"mask");
				HX_STACK_LINE(781)
				{
					HX_STACK_LINE(781)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(781)
					while((true)){
						HX_STACK_LINE(781)
						bool tmp24 = (_g < length);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(781)
						bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(781)
						if ((tmp25)){
							HX_STACK_LINE(781)
							break;
						}
						HX_STACK_LINE(781)
						int tmp26 = (_g)++;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(781)
						int i = tmp26;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(783)
						hx::AddEq(mask,HX_HCSTRING("*","\x2a","\x00","\x00","\x00"));
					}
				}
				HX_STACK_LINE(787)
				text = mask;
			}
			HX_STACK_LINE(791)
			::openfl::text::TextField tmp24 = textField;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(791)
			Array< Float > measurements = ::openfl::_internal::renderer::cairo::CairoTextField_obj::measureText(tmp24,null());		HX_STACK_VAR(measurements,"measurements");
			HX_STACK_LINE(793)
			bool tmp25 = (textField->__ranges == null());		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(793)
			if ((tmp25)){
				HX_STACK_LINE(795)
				::openfl::text::TextField tmp26 = textField;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(795)
				::String tmp27 = text;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(795)
				::openfl::text::TextFormat tmp28 = textField->__textFormat;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(795)
				::openfl::geom::Rectangle tmp29 = bounds;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(795)
				::openfl::_internal::renderer::cairo::CairoTextField_obj::renderText(tmp26,tmp27,tmp28,(int)2,tmp29);
			}
			else{
				HX_STACK_LINE(799)
				int currentIndex = (int)0;		HX_STACK_VAR(currentIndex,"currentIndex");
				HX_STACK_LINE(800)
				::openfl::text::TextFormatRange range;		HX_STACK_VAR(range,"range");
				HX_STACK_LINE(801)
				Float offsetX = ((Float)2.0);		HX_STACK_VAR(offsetX,"offsetX");
				HX_STACK_LINE(803)
				{
					HX_STACK_LINE(803)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(803)
					int tmp26 = textField->__ranges->length;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(803)
					int _g = tmp26;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(803)
					while((true)){
						HX_STACK_LINE(803)
						bool tmp27 = (_g1 < _g);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(803)
						bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(803)
						if ((tmp28)){
							HX_STACK_LINE(803)
							break;
						}
						HX_STACK_LINE(803)
						int tmp29 = (_g1)++;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(803)
						int i = tmp29;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(805)
						::openfl::text::TextFormatRange tmp30 = textField->__ranges->__get(i).StaticCast< ::openfl::text::TextFormatRange >();		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(805)
						range = tmp30;
						HX_STACK_LINE(807)
						::openfl::text::TextField tmp31 = textField;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(807)
						int tmp32 = range->start;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(807)
						int tmp33 = range->end;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(807)
						::String tmp34 = text.substring(tmp32,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(807)
						::openfl::text::TextFormat tmp35 = range->format;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(807)
						Float tmp36 = offsetX;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(807)
						::openfl::geom::Rectangle tmp37 = bounds;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(807)
						::openfl::_internal::renderer::cairo::CairoTextField_obj::renderText(tmp31,tmp34,tmp35,tmp36,tmp37);
						HX_STACK_LINE(808)
						Float tmp38 = measurements->__get(i);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(808)
						hx::AddEq(offsetX,tmp38);
					}
				}
			}
		}
		HX_STACK_LINE(816)
		::lime::graphics::Image tmp22 = graphics->__bitmap->__image;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(816)
		tmp22->dirty = true;
		HX_STACK_LINE(817)
		textField->__dirty = false;
		HX_STACK_LINE(818)
		graphics->set___dirty(false);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,render,(void))

Void CairoTextField_obj::renderText( ::openfl::text::TextField textField,::String text,::openfl::text::TextFormat format,Float offsetX,::openfl::geom::Rectangle bounds){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoTextField","renderText",0xbcba094b,"openfl._internal.renderer.cairo.CairoTextField.renderText","openfl/_internal/renderer/cairo/CairoTextField.hx",825,0xfadfb778)
		HX_STACK_ARG(textField,"textField")
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(offsetX,"offsetX")
		HX_STACK_ARG(bounds,"bounds")
		HX_STACK_LINE(828)
		::openfl::text::TextFormat tmp = format;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(828)
		::openfl::text::Font tmp1 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getFontInstance(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(828)
		::openfl::text::Font font = tmp1;		HX_STACK_VAR(font,"font");
		HX_STACK_LINE(830)
		bool tmp2 = (font != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(830)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(830)
		if ((tmp2)){
			HX_STACK_LINE(830)
			tmp3 = (format->size != null());
		}
		else{
			HX_STACK_LINE(830)
			tmp3 = false;
		}
		HX_STACK_LINE(830)
		if ((tmp3)){
			HX_STACK_LINE(832)
			::openfl::display::Graphics graphics = textField->__graphics;		HX_STACK_VAR(graphics,"graphics");
			HX_STACK_LINE(833)
			::openfl::text::TextLineMetrics tmp4 = textField->getLineMetrics((int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(833)
			::openfl::text::TextLineMetrics tlm = tmp4;		HX_STACK_VAR(tlm,"tlm");
			HX_STACK_LINE(835)
			Float x = offsetX;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(836)
			Float tmp5 = ((int)2 + tlm->ascent);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(836)
			Float y = tmp5;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(837)
			Dynamic tmp6 = format->size;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(837)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(837)
			int size = tmp7;		HX_STACK_VAR(size,"size");
			HX_STACK_LINE(839)
			Array< ::String > lines = text.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(lines,"lines");
			HX_STACK_LINE(841)
			int line_i = (int)0;		HX_STACK_VAR(line_i,"line_i");
			HX_STACK_LINE(842)
			Float oldX = x;		HX_STACK_VAR(oldX,"oldX");
			HX_STACK_LINE(844)
			::lime::graphics::cairo::Cairo tmp8 = textField->__graphics->__cairo;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(844)
			::lime::graphics::cairo::Cairo cairo = tmp8;		HX_STACK_VAR(cairo,"cairo");
			HX_STACK_LINE(845)
			int tmp9 = size;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(845)
			cairo->setFontSize(tmp9);
			HX_STACK_LINE(847)
			Dynamic color = format->color;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(848)
			int tmp10 = (int(color) & int((int)16711680));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(848)
			int tmp11 = hx::UShr(tmp10,(int)16);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(848)
			Float tmp12 = (Float(tmp11) / Float((int)255));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(848)
			Float r = tmp12;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(849)
			int tmp13 = (int(color) & int((int)65280));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(849)
			int tmp14 = hx::UShr(tmp13,(int)8);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(849)
			Float tmp15 = (Float(tmp14) / Float((int)255));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(849)
			Float g = tmp15;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(850)
			int tmp16 = (int(color) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(850)
			Float tmp17 = (Float(tmp16) / Float((int)255));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(850)
			Float b = tmp17;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(852)
			Float tmp18 = r;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(852)
			Float tmp19 = g;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(852)
			Float tmp20 = b;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(852)
			cairo->setSourceRGB(tmp18,tmp19,tmp20);
			HX_STACK_LINE(854)
			{
				HX_STACK_LINE(854)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(854)
				while((true)){
					HX_STACK_LINE(854)
					bool tmp21 = (_g < lines->length);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(854)
					bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(854)
					if ((tmp22)){
						HX_STACK_LINE(854)
						break;
					}
					HX_STACK_LINE(854)
					::String tmp23 = lines->__get(_g);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(854)
					::String line = tmp23;		HX_STACK_VAR(line,"line");
					HX_STACK_LINE(854)
					++(_g);
					HX_STACK_LINE(856)
					int tmp24 = line_i;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(856)
					::openfl::text::TextLineMetrics tmp25 = textField->getLineMetrics(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(856)
					tlm = tmp25;
					HX_STACK_LINE(857)
					x = oldX;
					HX_STACK_LINE(859)
					Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(859)
					{
						HX_STACK_LINE(859)
						::openfl::text::TextFormatAlign _g1 = format->align;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(859)
						switch( (int)(_g1->__Index())){
							case (int)0: case (int)2: {
								HX_STACK_LINE(861)
								tmp26 = (int)0;
							}
							;break;
							case (int)3: {
								HX_STACK_LINE(862)
								Float tmp27 = textField->get_width();		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(862)
								Float tmp28 = (tmp27 - (int)4);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(862)
								::openfl::text::TextField tmp29 = textField;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(862)
								int tmp30 = line_i;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(862)
								Float tmp31 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineWidth(tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(862)
								Float tmp32 = (tmp28 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(862)
								tmp26 = (Float(tmp32) / Float((int)2));
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(863)
								Float tmp27 = textField->get_width();		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(863)
								Float tmp28 = (tmp27 - (int)4);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(863)
								::openfl::text::TextField tmp29 = textField;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(863)
								int tmp30 = line_i;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(863)
								Float tmp31 = ::openfl::_internal::renderer::cairo::CairoTextField_obj::getLineWidth(tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(863)
								tmp26 = (tmp28 - tmp31);
							}
							;break;
						}
					}
					HX_STACK_LINE(859)
					hx::AddEq(x,tmp26);
					HX_STACK_LINE(867)
					Float tmp27 = x;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(867)
					Float tmp28 = y;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(867)
					cairo->moveTo(tmp27,tmp28);
					HX_STACK_LINE(868)
					::String tmp29 = line;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(868)
					cairo->showText(tmp29);
					HX_STACK_LINE(870)
					Float tmp30 = tlm->height;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(870)
					int tmp31 = ::Math_obj::round(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(870)
					hx::AddEq(y,tmp31);
					HX_STACK_LINE(871)
					(line_i)++;
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(CairoTextField_obj,renderText,(void))


CairoTextField_obj::CairoTextField_obj()
{
}

bool CairoTextField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"findFont") ) { outValue = findFont_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderText") ) { outValue = renderText_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"measureText") ) { outValue = measureText_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getLineWidth") ) { outValue = getLineWidth_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getTextWidth") ) { outValue = getTextWidth_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getLineBreaks") ) { outValue = getLineBreaks_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getLineMetric") ) { outValue = getLineMetric_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getTextHeight") ) { outValue = getTextHeight_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getLineIndices") ) { outValue = getLineIndices_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"measureTextSub") ) { outValue = measureTextSub_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getFontInstance") ) { outValue = getFontInstance_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__utf8_endline_code") ) { outValue = __utf8_endline_code; return true;  }
		if (HX_FIELD_EQ(inName,"getLineBreakIndices") ) { outValue = getLineBreakIndices_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getLineBreaksInRange") ) { outValue = getLineBreaksInRange_dyn(); return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"measureTextSubRangesNull") ) { outValue = measureTextSubRangesNull_dyn(); return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getLineMetricSubRangesNull") ) { outValue = getLineMetricSubRangesNull_dyn(); return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"measureTextSubRangesNotNull") ) { outValue = measureTextSubRangesNotNull_dyn(); return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"getLineMetricSubRangesNotNull") ) { outValue = getLineMetricSubRangesNotNull_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &CairoTextField_obj::__utf8_endline_code,HX_HCSTRING("__utf8_endline_code","\x4b","\xc5","\x9e","\xb8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoTextField_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoTextField_obj::__utf8_endline_code,"__utf8_endline_code");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoTextField_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoTextField_obj::__utf8_endline_code,"__utf8_endline_code");
};

#endif

hx::Class CairoTextField_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__utf8_endline_code","\x4b","\xc5","\x9e","\xb8"),
	HX_HCSTRING("findFont","\xa8","\x6a","\x54","\x96"),
	HX_HCSTRING("getFontInstance","\x3a","\x76","\x96","\x9e"),
	HX_HCSTRING("getLineBreaks","\x1e","\x5a","\xce","\x46"),
	HX_HCSTRING("getLineBreakIndices","\xf2","\xda","\x12","\xc3"),
	HX_HCSTRING("getLineBreaksInRange","\x1a","\xe9","\x27","\x0d"),
	HX_HCSTRING("getLineIndices","\x9d","\x50","\x46","\xa9"),
	HX_HCSTRING("getLineMetric","\x7a","\xdf","\x7c","\x3a"),
	HX_HCSTRING("getLineMetricSubRangesNotNull","\xbe","\x45","\xbf","\xe5"),
	HX_HCSTRING("getLineMetricSubRangesNull","\x83","\x47","\x73","\x4a"),
	HX_HCSTRING("getLineWidth","\xfc","\x55","\xb4","\x20"),
	HX_HCSTRING("getTextHeight","\xaa","\xe4","\xae","\x95"),
	HX_HCSTRING("getTextWidth","\xa3","\xe2","\xa6","\x72"),
	HX_HCSTRING("measureText","\x2b","\xfb","\x80","\x50"),
	HX_HCSTRING("measureTextSub","\x15","\x73","\xb9","\x04"),
	HX_HCSTRING("measureTextSubRangesNotNull","\x6f","\x93","\x7d","\x85"),
	HX_HCSTRING("measureTextSubRangesNull","\x32","\xf1","\x90","\xa3"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("renderText","\x23","\xc7","\x03","\xea"),
	::String(null()) };

void CairoTextField_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.cairo.CairoTextField","\x46","\x1d","\x84","\xa5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoTextField_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoTextField_obj >;
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

void CairoTextField_obj::__boot()
{
	__utf8_endline_code= (int)10;
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo

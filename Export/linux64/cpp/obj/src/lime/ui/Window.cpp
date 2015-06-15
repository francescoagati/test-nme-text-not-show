#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeWindow
#include <lime/_backend/native/NativeWindow.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_Event
#include <lime/app/Event.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
namespace lime{
namespace ui{

Void Window_obj::__construct(Dynamic config)
{
HX_STACK_FRAME("lime.ui.Window","new",0xbff4f5c3,"lime.ui.Window.new","lime/ui/Window.hx",11,0x6ac7286d)
HX_STACK_THIS(this)
HX_STACK_ARG(config,"config")
{
	HX_STACK_LINE(48)
	this->onWindowRestore = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(47)
	this->onWindowResize = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(46)
	this->onWindowMove = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(45)
	this->onWindowMinimize = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(44)
	this->onWindowLeave = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(43)
	this->onWindowFullscreen = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(42)
	this->onWindowFocusOut = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(41)
	this->onWindowFocusIn = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(40)
	this->onWindowEnter = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(39)
	this->onWindowDeactivate = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(38)
	this->onWindowClose = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(37)
	this->onWindowActivate = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(36)
	this->onTouchStart = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(35)
	this->onTouchMove = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(34)
	this->onTouchEnd = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(33)
	this->onTextInput = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(32)
	this->onTextEdit = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(31)
	this->onMouseWheel = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(30)
	this->onMouseUp = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(29)
	this->onMouseMoveRelative = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(28)
	this->onMouseMove = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(27)
	this->onMouseDown = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(26)
	this->onKeyUp = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(25)
	this->onKeyDown = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(24)
	this->onGamepadDisconnect = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(23)
	this->onGamepadConnect = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(22)
	this->onGamepadButtonUp = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(21)
	this->onGamepadButtonDown = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(20)
	this->onGamepadAxisMove = ::lime::app::Event_obj::__new();
	HX_STACK_LINE(64)
	this->config = config;
	HX_STACK_LINE(66)
	this->__width = (int)0;
	HX_STACK_LINE(67)
	this->__height = (int)0;
	HX_STACK_LINE(68)
	this->__fullscreen = false;
	HX_STACK_LINE(69)
	this->__x = (int)0;
	HX_STACK_LINE(70)
	this->__y = (int)0;
	HX_STACK_LINE(72)
	bool tmp = (config != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	if ((tmp)){
		HX_STACK_LINE(76)
		Dynamic tmp1 = config;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(76)
		bool tmp2 = ::Reflect_obj::hasField(tmp1,HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(76)
		if ((tmp2)){
			HX_STACK_LINE(76)
			this->__width = config->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );
		}
		HX_STACK_LINE(77)
		Dynamic tmp3 = config;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(77)
		bool tmp4 = ::Reflect_obj::hasField(tmp3,HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(77)
		if ((tmp4)){
			HX_STACK_LINE(77)
			this->__height = config->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );
		}
		HX_STACK_LINE(78)
		Dynamic tmp5 = config;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(78)
		bool tmp6 = ::Reflect_obj::hasField(tmp5,HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(78)
		if ((tmp6)){
			HX_STACK_LINE(78)
			this->__fullscreen = config->__Field(HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9"), hx::paccDynamic );
		}
	}
	HX_STACK_LINE(82)
	::lime::_backend::native::NativeWindow tmp1 = ::lime::_backend::native::NativeWindow_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	this->backend = tmp1;
}
;
	return null();
}

//Window_obj::~Window_obj() { }

Dynamic Window_obj::__CreateEmpty() { return  new Window_obj; }
hx::ObjectPtr< Window_obj > Window_obj::__new(Dynamic config)
{  hx::ObjectPtr< Window_obj > _result_ = new Window_obj();
	_result_->__construct(config);
	return _result_;}

Dynamic Window_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Window_obj > _result_ = new Window_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Window_obj::close( ){
{
		HX_STACK_FRAME("lime.ui.Window","close",0x0ea29bdb,"lime.ui.Window.close","lime/ui/Window.hx",87,0x6ac7286d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(89)
		::lime::_backend::native::NativeWindow tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		tmp->close();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,close,(void))

Void Window_obj::create( ::lime::app::Application application){
{
		HX_STACK_FRAME("lime.ui.Window","create",0x2d638179,"lime.ui.Window.create","lime/ui/Window.hx",94,0x6ac7286d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(application,"application")
		HX_STACK_LINE(96)
		::lime::_backend::native::NativeWindow tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(96)
		::lime::app::Application tmp1 = application;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(96)
		tmp->create(tmp1);
		HX_STACK_LINE(98)
		::lime::graphics::Renderer tmp2 = this->currentRenderer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(98)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(98)
		if ((tmp3)){
			HX_STACK_LINE(100)
			::lime::graphics::Renderer tmp4 = this->currentRenderer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(100)
			tmp4->create();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,create,(void))

Void Window_obj::move( int x,int y){
{
		HX_STACK_FRAME("lime.ui.Window","move",0x35c0744e,"lime.ui.Window.move","lime/ui/Window.hx",107,0x6ac7286d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(109)
		::lime::_backend::native::NativeWindow tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(109)
		int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(109)
		int tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(109)
		tmp->move(tmp1,tmp2);
		HX_STACK_LINE(111)
		this->__x = x;
		HX_STACK_LINE(112)
		this->__y = y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,move,(void))

Void Window_obj::resize( int width,int height){
{
		HX_STACK_FRAME("lime.ui.Window","resize",0xb9cf7471,"lime.ui.Window.resize","lime/ui/Window.hx",117,0x6ac7286d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(119)
		::lime::_backend::native::NativeWindow tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(119)
		int tmp1 = width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(119)
		int tmp2 = height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(119)
		tmp->resize(tmp1,tmp2);
		HX_STACK_LINE(121)
		this->__width = width;
		HX_STACK_LINE(122)
		this->__height = height;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,resize,(void))

Void Window_obj::setIcon( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("lime.ui.Window","setIcon",0x837a3b1e,"lime.ui.Window.setIcon","lime/ui/Window.hx",127,0x6ac7286d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(129)
		bool tmp = (image == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(129)
		if ((tmp)){
			HX_STACK_LINE(131)
			return null();
		}
		HX_STACK_LINE(135)
		::lime::_backend::native::NativeWindow tmp1 = this->backend;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(135)
		::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(135)
		tmp1->setIcon(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,setIcon,(void))

bool Window_obj::get_enableTextEvents( ){
	HX_STACK_FRAME("lime.ui.Window","get_enableTextEvents",0xb1dee44f,"lime.ui.Window.get_enableTextEvents","lime/ui/Window.hx",147,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(149)
	::lime::_backend::native::NativeWindow tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(149)
	bool tmp1 = tmp->getEnableTextEvents();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(149)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_enableTextEvents,return )

bool Window_obj::set_enableTextEvents( bool value){
	HX_STACK_FRAME("lime.ui.Window","set_enableTextEvents",0x7e969bc3,"lime.ui.Window.set_enableTextEvents","lime/ui/Window.hx",154,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(156)
	::lime::_backend::native::NativeWindow tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(156)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(156)
	bool tmp2 = tmp->setEnableTextEvents(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(156)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_enableTextEvents,return )

bool Window_obj::get_fullscreen( ){
	HX_STACK_FRAME("lime.ui.Window","get_fullscreen",0x19882201,"lime.ui.Window.get_fullscreen","lime/ui/Window.hx",161,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(163)
	bool tmp = this->__fullscreen;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(163)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_fullscreen,return )

bool Window_obj::set_fullscreen( bool value){
	HX_STACK_FRAME("lime.ui.Window","set_fullscreen",0x39a80a75,"lime.ui.Window.set_fullscreen","lime/ui/Window.hx",168,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(170)
	::lime::_backend::native::NativeWindow tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(170)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(170)
	bool tmp2 = tmp->setFullscreen(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(170)
	bool tmp3 = this->__fullscreen = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(170)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_fullscreen,return )

int Window_obj::get_height( ){
	HX_STACK_FRAME("lime.ui.Window","get_height",0x425314ad,"lime.ui.Window.get_height","lime/ui/Window.hx",175,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(177)
	int tmp = this->__height;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(177)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_height,return )

int Window_obj::set_height( int value){
	HX_STACK_FRAME("lime.ui.Window","set_height",0x45d0b321,"lime.ui.Window.set_height","lime/ui/Window.hx",182,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(184)
	int tmp = this->__width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(184)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(184)
	this->resize(tmp,tmp1);
	HX_STACK_LINE(185)
	int tmp2 = this->__height;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(185)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_height,return )

bool Window_obj::get_minimized( ){
	HX_STACK_FRAME("lime.ui.Window","get_minimized",0xd866ae80,"lime.ui.Window.get_minimized","lime/ui/Window.hx",190,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	bool tmp = this->__minimized;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_minimized,return )

bool Window_obj::set_minimized( bool value){
	HX_STACK_FRAME("lime.ui.Window","set_minimized",0x1d6c908c,"lime.ui.Window.set_minimized","lime/ui/Window.hx",197,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(199)
	::lime::_backend::native::NativeWindow tmp = this->backend;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(199)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(199)
	bool tmp2 = tmp->setMinimized(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(199)
	bool tmp3 = this->__minimized = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(199)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_minimized,return )

int Window_obj::get_width( ){
	HX_STACK_FRAME("lime.ui.Window","get_width",0x6b63e400,"lime.ui.Window.get_width","lime/ui/Window.hx",204,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(206)
	int tmp = this->__width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(206)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_width,return )

int Window_obj::set_width( int value){
	HX_STACK_FRAME("lime.ui.Window","set_width",0x4eb4d00c,"lime.ui.Window.set_width","lime/ui/Window.hx",211,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(213)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(213)
	int tmp1 = this->__height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(213)
	this->resize(tmp,tmp1);
	HX_STACK_LINE(214)
	int tmp2 = this->__width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(214)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_width,return )

int Window_obj::get_x( ){
	HX_STACK_FRAME("lime.ui.Window","get_x",0x57a02972,"lime.ui.Window.get_x","lime/ui/Window.hx",219,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(221)
	int tmp = this->__x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(221)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_x,return )

int Window_obj::set_x( int value){
	HX_STACK_FRAME("lime.ui.Window","set_x",0x406f1f7e,"lime.ui.Window.set_x","lime/ui/Window.hx",226,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(228)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(228)
	int tmp1 = this->__y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(228)
	this->move(tmp,tmp1);
	HX_STACK_LINE(229)
	int tmp2 = this->__x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(229)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_x,return )

int Window_obj::get_y( ){
	HX_STACK_FRAME("lime.ui.Window","get_y",0x57a02973,"lime.ui.Window.get_y","lime/ui/Window.hx",234,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(236)
	int tmp = this->__y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(236)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_y,return )

int Window_obj::set_y( int value){
	HX_STACK_FRAME("lime.ui.Window","set_y",0x406f1f7f,"lime.ui.Window.set_y","lime/ui/Window.hx",241,0x6ac7286d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(243)
	int tmp = this->__x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(243)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(243)
	this->move(tmp,tmp1);
	HX_STACK_LINE(244)
	int tmp2 = this->__y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(244)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_y,return )


Window_obj::Window_obj()
{
}

void Window_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Window);
	HX_MARK_MEMBER_NAME(currentRenderer,"currentRenderer");
	HX_MARK_MEMBER_NAME(config,"config");
	HX_MARK_MEMBER_NAME(onGamepadAxisMove,"onGamepadAxisMove");
	HX_MARK_MEMBER_NAME(onGamepadButtonDown,"onGamepadButtonDown");
	HX_MARK_MEMBER_NAME(onGamepadButtonUp,"onGamepadButtonUp");
	HX_MARK_MEMBER_NAME(onGamepadConnect,"onGamepadConnect");
	HX_MARK_MEMBER_NAME(onGamepadDisconnect,"onGamepadDisconnect");
	HX_MARK_MEMBER_NAME(onKeyDown,"onKeyDown");
	HX_MARK_MEMBER_NAME(onKeyUp,"onKeyUp");
	HX_MARK_MEMBER_NAME(onMouseDown,"onMouseDown");
	HX_MARK_MEMBER_NAME(onMouseMove,"onMouseMove");
	HX_MARK_MEMBER_NAME(onMouseMoveRelative,"onMouseMoveRelative");
	HX_MARK_MEMBER_NAME(onMouseUp,"onMouseUp");
	HX_MARK_MEMBER_NAME(onMouseWheel,"onMouseWheel");
	HX_MARK_MEMBER_NAME(onTextEdit,"onTextEdit");
	HX_MARK_MEMBER_NAME(onTextInput,"onTextInput");
	HX_MARK_MEMBER_NAME(onTouchEnd,"onTouchEnd");
	HX_MARK_MEMBER_NAME(onTouchMove,"onTouchMove");
	HX_MARK_MEMBER_NAME(onTouchStart,"onTouchStart");
	HX_MARK_MEMBER_NAME(onWindowActivate,"onWindowActivate");
	HX_MARK_MEMBER_NAME(onWindowClose,"onWindowClose");
	HX_MARK_MEMBER_NAME(onWindowDeactivate,"onWindowDeactivate");
	HX_MARK_MEMBER_NAME(onWindowEnter,"onWindowEnter");
	HX_MARK_MEMBER_NAME(onWindowFocusIn,"onWindowFocusIn");
	HX_MARK_MEMBER_NAME(onWindowFocusOut,"onWindowFocusOut");
	HX_MARK_MEMBER_NAME(onWindowFullscreen,"onWindowFullscreen");
	HX_MARK_MEMBER_NAME(onWindowLeave,"onWindowLeave");
	HX_MARK_MEMBER_NAME(onWindowMinimize,"onWindowMinimize");
	HX_MARK_MEMBER_NAME(onWindowMove,"onWindowMove");
	HX_MARK_MEMBER_NAME(onWindowResize,"onWindowResize");
	HX_MARK_MEMBER_NAME(onWindowRestore,"onWindowRestore");
	HX_MARK_MEMBER_NAME(backend,"backend");
	HX_MARK_MEMBER_NAME(__fullscreen,"__fullscreen");
	HX_MARK_MEMBER_NAME(__height,"__height");
	HX_MARK_MEMBER_NAME(__minimized,"__minimized");
	HX_MARK_MEMBER_NAME(__width,"__width");
	HX_MARK_MEMBER_NAME(__x,"__x");
	HX_MARK_MEMBER_NAME(__y,"__y");
	HX_MARK_END_CLASS();
}

void Window_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentRenderer,"currentRenderer");
	HX_VISIT_MEMBER_NAME(config,"config");
	HX_VISIT_MEMBER_NAME(onGamepadAxisMove,"onGamepadAxisMove");
	HX_VISIT_MEMBER_NAME(onGamepadButtonDown,"onGamepadButtonDown");
	HX_VISIT_MEMBER_NAME(onGamepadButtonUp,"onGamepadButtonUp");
	HX_VISIT_MEMBER_NAME(onGamepadConnect,"onGamepadConnect");
	HX_VISIT_MEMBER_NAME(onGamepadDisconnect,"onGamepadDisconnect");
	HX_VISIT_MEMBER_NAME(onKeyDown,"onKeyDown");
	HX_VISIT_MEMBER_NAME(onKeyUp,"onKeyUp");
	HX_VISIT_MEMBER_NAME(onMouseDown,"onMouseDown");
	HX_VISIT_MEMBER_NAME(onMouseMove,"onMouseMove");
	HX_VISIT_MEMBER_NAME(onMouseMoveRelative,"onMouseMoveRelative");
	HX_VISIT_MEMBER_NAME(onMouseUp,"onMouseUp");
	HX_VISIT_MEMBER_NAME(onMouseWheel,"onMouseWheel");
	HX_VISIT_MEMBER_NAME(onTextEdit,"onTextEdit");
	HX_VISIT_MEMBER_NAME(onTextInput,"onTextInput");
	HX_VISIT_MEMBER_NAME(onTouchEnd,"onTouchEnd");
	HX_VISIT_MEMBER_NAME(onTouchMove,"onTouchMove");
	HX_VISIT_MEMBER_NAME(onTouchStart,"onTouchStart");
	HX_VISIT_MEMBER_NAME(onWindowActivate,"onWindowActivate");
	HX_VISIT_MEMBER_NAME(onWindowClose,"onWindowClose");
	HX_VISIT_MEMBER_NAME(onWindowDeactivate,"onWindowDeactivate");
	HX_VISIT_MEMBER_NAME(onWindowEnter,"onWindowEnter");
	HX_VISIT_MEMBER_NAME(onWindowFocusIn,"onWindowFocusIn");
	HX_VISIT_MEMBER_NAME(onWindowFocusOut,"onWindowFocusOut");
	HX_VISIT_MEMBER_NAME(onWindowFullscreen,"onWindowFullscreen");
	HX_VISIT_MEMBER_NAME(onWindowLeave,"onWindowLeave");
	HX_VISIT_MEMBER_NAME(onWindowMinimize,"onWindowMinimize");
	HX_VISIT_MEMBER_NAME(onWindowMove,"onWindowMove");
	HX_VISIT_MEMBER_NAME(onWindowResize,"onWindowResize");
	HX_VISIT_MEMBER_NAME(onWindowRestore,"onWindowRestore");
	HX_VISIT_MEMBER_NAME(backend,"backend");
	HX_VISIT_MEMBER_NAME(__fullscreen,"__fullscreen");
	HX_VISIT_MEMBER_NAME(__height,"__height");
	HX_VISIT_MEMBER_NAME(__minimized,"__minimized");
	HX_VISIT_MEMBER_NAME(__width,"__width");
	HX_VISIT_MEMBER_NAME(__x,"__x");
	HX_VISIT_MEMBER_NAME(__y,"__y");
}

Dynamic Window_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return get_y(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { return __x; }
		if (HX_FIELD_EQ(inName,"__y") ) { return __y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return get_width(); }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { return config; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return get_height(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp; }
		if (HX_FIELD_EQ(inName,"backend") ) { return backend; }
		if (HX_FIELD_EQ(inName,"__width") ) { return __width; }
		if (HX_FIELD_EQ(inName,"setIcon") ) { return setIcon_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__height") ) { return __height; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"minimized") ) { if (inCallProp == hx::paccAlways) return get_minimized(); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown; }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp; }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fullscreen") ) { if (inCallProp == hx::paccAlways) return get_fullscreen(); }
		if (HX_FIELD_EQ(inName,"onTextEdit") ) { return onTextEdit; }
		if (HX_FIELD_EQ(inName,"onTouchEnd") ) { return onTouchEnd; }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown; }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return onMouseMove; }
		if (HX_FIELD_EQ(inName,"onTextInput") ) { return onTextInput; }
		if (HX_FIELD_EQ(inName,"onTouchMove") ) { return onTouchMove; }
		if (HX_FIELD_EQ(inName,"__minimized") ) { return __minimized; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel; }
		if (HX_FIELD_EQ(inName,"onTouchStart") ) { return onTouchStart; }
		if (HX_FIELD_EQ(inName,"onWindowMove") ) { return onWindowMove; }
		if (HX_FIELD_EQ(inName,"__fullscreen") ) { return __fullscreen; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onWindowClose") ) { return onWindowClose; }
		if (HX_FIELD_EQ(inName,"onWindowEnter") ) { return onWindowEnter; }
		if (HX_FIELD_EQ(inName,"onWindowLeave") ) { return onWindowLeave; }
		if (HX_FIELD_EQ(inName,"get_minimized") ) { return get_minimized_dyn(); }
		if (HX_FIELD_EQ(inName,"set_minimized") ) { return set_minimized_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onWindowResize") ) { return onWindowResize; }
		if (HX_FIELD_EQ(inName,"get_fullscreen") ) { return get_fullscreen_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fullscreen") ) { return set_fullscreen_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"currentRenderer") ) { return currentRenderer; }
		if (HX_FIELD_EQ(inName,"onWindowFocusIn") ) { return onWindowFocusIn; }
		if (HX_FIELD_EQ(inName,"onWindowRestore") ) { return onWindowRestore; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"enableTextEvents") ) { if (inCallProp == hx::paccAlways) return get_enableTextEvents(); }
		if (HX_FIELD_EQ(inName,"onGamepadConnect") ) { return onGamepadConnect; }
		if (HX_FIELD_EQ(inName,"onWindowActivate") ) { return onWindowActivate; }
		if (HX_FIELD_EQ(inName,"onWindowFocusOut") ) { return onWindowFocusOut; }
		if (HX_FIELD_EQ(inName,"onWindowMinimize") ) { return onWindowMinimize; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onGamepadAxisMove") ) { return onGamepadAxisMove; }
		if (HX_FIELD_EQ(inName,"onGamepadButtonUp") ) { return onGamepadButtonUp; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onWindowDeactivate") ) { return onWindowDeactivate; }
		if (HX_FIELD_EQ(inName,"onWindowFullscreen") ) { return onWindowFullscreen; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onGamepadButtonDown") ) { return onGamepadButtonDown; }
		if (HX_FIELD_EQ(inName,"onGamepadDisconnect") ) { return onGamepadDisconnect; }
		if (HX_FIELD_EQ(inName,"onMouseMoveRelative") ) { return onMouseMoveRelative; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_enableTextEvents") ) { return get_enableTextEvents_dyn(); }
		if (HX_FIELD_EQ(inName,"set_enableTextEvents") ) { return set_enableTextEvents_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Window_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { __x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__y") ) { __y=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return set_width(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { config=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return set_height(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { onKeyUp=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backend") ) { backend=inValue.Cast< ::lime::_backend::native::NativeWindow >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__width") ) { __width=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__height") ) { __height=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"minimized") ) { if (inCallProp == hx::paccAlways) return set_minimized(inValue); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { onKeyDown=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { onMouseUp=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fullscreen") ) { if (inCallProp == hx::paccAlways) return set_fullscreen(inValue); }
		if (HX_FIELD_EQ(inName,"onTextEdit") ) { onTextEdit=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onTouchEnd") ) { onTouchEnd=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { onMouseDown=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { onMouseMove=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onTextInput") ) { onTextInput=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onTouchMove") ) { onTouchMove=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__minimized") ) { __minimized=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { onMouseWheel=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onTouchStart") ) { onTouchStart=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onWindowMove") ) { onWindowMove=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__fullscreen") ) { __fullscreen=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onWindowClose") ) { onWindowClose=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onWindowEnter") ) { onWindowEnter=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onWindowLeave") ) { onWindowLeave=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onWindowResize") ) { onWindowResize=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"currentRenderer") ) { currentRenderer=inValue.Cast< ::lime::graphics::Renderer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onWindowFocusIn") ) { onWindowFocusIn=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onWindowRestore") ) { onWindowRestore=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"enableTextEvents") ) { if (inCallProp == hx::paccAlways) return set_enableTextEvents(inValue); }
		if (HX_FIELD_EQ(inName,"onGamepadConnect") ) { onGamepadConnect=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onWindowActivate") ) { onWindowActivate=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onWindowFocusOut") ) { onWindowFocusOut=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onWindowMinimize") ) { onWindowMinimize=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onGamepadAxisMove") ) { onGamepadAxisMove=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onGamepadButtonUp") ) { onGamepadButtonUp=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onWindowDeactivate") ) { onWindowDeactivate=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onWindowFullscreen") ) { onWindowFullscreen=inValue.Cast< ::lime::app::Event >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onGamepadButtonDown") ) { onGamepadButtonDown=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onGamepadDisconnect") ) { onGamepadDisconnect=inValue.Cast< ::lime::app::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onMouseMoveRelative") ) { onMouseMoveRelative=inValue.Cast< ::lime::app::Event >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Window_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Window_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("currentRenderer","\x9c","\x7e","\x2d","\x87"));
	outFields->push(HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"));
	outFields->push(HX_HCSTRING("enableTextEvents","\x09","\xe4","\x09","\x6a"));
	outFields->push(HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("minimized","\x86","\xfb","\x9d","\x28"));
	outFields->push(HX_HCSTRING("onGamepadAxisMove","\xb4","\xf7","\xd4","\x24"));
	outFields->push(HX_HCSTRING("onGamepadButtonDown","\x56","\xeb","\xb6","\x87"));
	outFields->push(HX_HCSTRING("onGamepadButtonUp","\x4f","\xf4","\x12","\xf1"));
	outFields->push(HX_HCSTRING("onGamepadConnect","\xc8","\x56","\xd7","\xec"));
	outFields->push(HX_HCSTRING("onGamepadDisconnect","\x3e","\xe8","\x96","\x44"));
	outFields->push(HX_HCSTRING("onKeyDown","\x42","\x22","\xf2","\x73"));
	outFields->push(HX_HCSTRING("onKeyUp","\x3b","\x58","\x3c","\x75"));
	outFields->push(HX_HCSTRING("onMouseDown","\x08","\x94","\x05","\x11"));
	outFields->push(HX_HCSTRING("onMouseMove","\xb7","\x7e","\xf8","\x16"));
	outFields->push(HX_HCSTRING("onMouseMoveRelative","\xa3","\x06","\xbf","\x7a"));
	outFields->push(HX_HCSTRING("onMouseUp","\x81","\xac","\x1d","\x98"));
	outFields->push(HX_HCSTRING("onMouseWheel","\x35","\xca","\xca","\xbf"));
	outFields->push(HX_HCSTRING("onTextEdit","\x96","\xf1","\xc0","\x23"));
	outFields->push(HX_HCSTRING("onTextInput","\xfe","\x36","\x4e","\x79"));
	outFields->push(HX_HCSTRING("onTouchEnd","\x9b","\x99","\xc0","\xdd"));
	outFields->push(HX_HCSTRING("onTouchMove","\x51","\x55","\x10","\x30"));
	outFields->push(HX_HCSTRING("onTouchStart","\x22","\xfa","\xdf","\x55"));
	outFields->push(HX_HCSTRING("onWindowActivate","\x42","\xe9","\xdd","\xeb"));
	outFields->push(HX_HCSTRING("onWindowClose","\xc9","\xca","\x1f","\x9c"));
	outFields->push(HX_HCSTRING("onWindowDeactivate","\x83","\xeb","\x6c","\x8c"));
	outFields->push(HX_HCSTRING("onWindowEnter","\x29","\x20","\x43","\xc4"));
	outFields->push(HX_HCSTRING("onWindowFocusIn","\x2e","\x9f","\x1f","\x84"));
	outFields->push(HX_HCSTRING("onWindowFocusOut","\x25","\x3d","\x90","\x17"));
	outFields->push(HX_HCSTRING("onWindowFullscreen","\x8a","\xc9","\x1f","\x4a"));
	outFields->push(HX_HCSTRING("onWindowLeave","\x08","\xe8","\x0f","\xc6"));
	outFields->push(HX_HCSTRING("onWindowMinimize","\xad","\x0c","\xab","\x27"));
	outFields->push(HX_HCSTRING("onWindowMove","\x20","\xfd","\x7a","\xab"));
	outFields->push(HX_HCSTRING("onWindowResize","\xc3","\x55","\xdb","\xf9"));
	outFields->push(HX_HCSTRING("onWindowRestore","\x9f","\xc0","\x4c","\xad"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb"));
	outFields->push(HX_HCSTRING("__fullscreen","\x5b","\xb5","\x47","\x32"));
	outFields->push(HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa"));
	outFields->push(HX_HCSTRING("__minimized","\x66","\x44","\xca","\x56"));
	outFields->push(HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34"));
	outFields->push(HX_HCSTRING("__x","\x58","\x69","\x48","\x00"));
	outFields->push(HX_HCSTRING("__y","\x59","\x69","\x48","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::Renderer*/ ,(int)offsetof(Window_obj,currentRenderer),HX_HCSTRING("currentRenderer","\x9c","\x7e","\x2d","\x87")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Window_obj,config),HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onGamepadAxisMove),HX_HCSTRING("onGamepadAxisMove","\xb4","\xf7","\xd4","\x24")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onGamepadButtonDown),HX_HCSTRING("onGamepadButtonDown","\x56","\xeb","\xb6","\x87")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onGamepadButtonUp),HX_HCSTRING("onGamepadButtonUp","\x4f","\xf4","\x12","\xf1")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onGamepadConnect),HX_HCSTRING("onGamepadConnect","\xc8","\x56","\xd7","\xec")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onGamepadDisconnect),HX_HCSTRING("onGamepadDisconnect","\x3e","\xe8","\x96","\x44")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onKeyDown),HX_HCSTRING("onKeyDown","\x42","\x22","\xf2","\x73")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onKeyUp),HX_HCSTRING("onKeyUp","\x3b","\x58","\x3c","\x75")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onMouseDown),HX_HCSTRING("onMouseDown","\x08","\x94","\x05","\x11")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onMouseMove),HX_HCSTRING("onMouseMove","\xb7","\x7e","\xf8","\x16")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onMouseMoveRelative),HX_HCSTRING("onMouseMoveRelative","\xa3","\x06","\xbf","\x7a")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onMouseUp),HX_HCSTRING("onMouseUp","\x81","\xac","\x1d","\x98")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onMouseWheel),HX_HCSTRING("onMouseWheel","\x35","\xca","\xca","\xbf")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onTextEdit),HX_HCSTRING("onTextEdit","\x96","\xf1","\xc0","\x23")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onTextInput),HX_HCSTRING("onTextInput","\xfe","\x36","\x4e","\x79")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onTouchEnd),HX_HCSTRING("onTouchEnd","\x9b","\x99","\xc0","\xdd")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onTouchMove),HX_HCSTRING("onTouchMove","\x51","\x55","\x10","\x30")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onTouchStart),HX_HCSTRING("onTouchStart","\x22","\xfa","\xdf","\x55")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onWindowActivate),HX_HCSTRING("onWindowActivate","\x42","\xe9","\xdd","\xeb")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onWindowClose),HX_HCSTRING("onWindowClose","\xc9","\xca","\x1f","\x9c")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onWindowDeactivate),HX_HCSTRING("onWindowDeactivate","\x83","\xeb","\x6c","\x8c")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onWindowEnter),HX_HCSTRING("onWindowEnter","\x29","\x20","\x43","\xc4")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onWindowFocusIn),HX_HCSTRING("onWindowFocusIn","\x2e","\x9f","\x1f","\x84")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onWindowFocusOut),HX_HCSTRING("onWindowFocusOut","\x25","\x3d","\x90","\x17")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onWindowFullscreen),HX_HCSTRING("onWindowFullscreen","\x8a","\xc9","\x1f","\x4a")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onWindowLeave),HX_HCSTRING("onWindowLeave","\x08","\xe8","\x0f","\xc6")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onWindowMinimize),HX_HCSTRING("onWindowMinimize","\xad","\x0c","\xab","\x27")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onWindowMove),HX_HCSTRING("onWindowMove","\x20","\xfd","\x7a","\xab")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onWindowResize),HX_HCSTRING("onWindowResize","\xc3","\x55","\xdb","\xf9")},
	{hx::fsObject /*::lime::app::Event*/ ,(int)offsetof(Window_obj,onWindowRestore),HX_HCSTRING("onWindowRestore","\x9f","\xc0","\x4c","\xad")},
	{hx::fsObject /*::lime::_backend::native::NativeWindow*/ ,(int)offsetof(Window_obj,backend),HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb")},
	{hx::fsBool,(int)offsetof(Window_obj,__fullscreen),HX_HCSTRING("__fullscreen","\x5b","\xb5","\x47","\x32")},
	{hx::fsInt,(int)offsetof(Window_obj,__height),HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa")},
	{hx::fsBool,(int)offsetof(Window_obj,__minimized),HX_HCSTRING("__minimized","\x66","\x44","\xca","\x56")},
	{hx::fsInt,(int)offsetof(Window_obj,__width),HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34")},
	{hx::fsInt,(int)offsetof(Window_obj,__x),HX_HCSTRING("__x","\x58","\x69","\x48","\x00")},
	{hx::fsInt,(int)offsetof(Window_obj,__y),HX_HCSTRING("__y","\x59","\x69","\x48","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("currentRenderer","\x9c","\x7e","\x2d","\x87"),
	HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"),
	HX_HCSTRING("onGamepadAxisMove","\xb4","\xf7","\xd4","\x24"),
	HX_HCSTRING("onGamepadButtonDown","\x56","\xeb","\xb6","\x87"),
	HX_HCSTRING("onGamepadButtonUp","\x4f","\xf4","\x12","\xf1"),
	HX_HCSTRING("onGamepadConnect","\xc8","\x56","\xd7","\xec"),
	HX_HCSTRING("onGamepadDisconnect","\x3e","\xe8","\x96","\x44"),
	HX_HCSTRING("onKeyDown","\x42","\x22","\xf2","\x73"),
	HX_HCSTRING("onKeyUp","\x3b","\x58","\x3c","\x75"),
	HX_HCSTRING("onMouseDown","\x08","\x94","\x05","\x11"),
	HX_HCSTRING("onMouseMove","\xb7","\x7e","\xf8","\x16"),
	HX_HCSTRING("onMouseMoveRelative","\xa3","\x06","\xbf","\x7a"),
	HX_HCSTRING("onMouseUp","\x81","\xac","\x1d","\x98"),
	HX_HCSTRING("onMouseWheel","\x35","\xca","\xca","\xbf"),
	HX_HCSTRING("onTextEdit","\x96","\xf1","\xc0","\x23"),
	HX_HCSTRING("onTextInput","\xfe","\x36","\x4e","\x79"),
	HX_HCSTRING("onTouchEnd","\x9b","\x99","\xc0","\xdd"),
	HX_HCSTRING("onTouchMove","\x51","\x55","\x10","\x30"),
	HX_HCSTRING("onTouchStart","\x22","\xfa","\xdf","\x55"),
	HX_HCSTRING("onWindowActivate","\x42","\xe9","\xdd","\xeb"),
	HX_HCSTRING("onWindowClose","\xc9","\xca","\x1f","\x9c"),
	HX_HCSTRING("onWindowDeactivate","\x83","\xeb","\x6c","\x8c"),
	HX_HCSTRING("onWindowEnter","\x29","\x20","\x43","\xc4"),
	HX_HCSTRING("onWindowFocusIn","\x2e","\x9f","\x1f","\x84"),
	HX_HCSTRING("onWindowFocusOut","\x25","\x3d","\x90","\x17"),
	HX_HCSTRING("onWindowFullscreen","\x8a","\xc9","\x1f","\x4a"),
	HX_HCSTRING("onWindowLeave","\x08","\xe8","\x0f","\xc6"),
	HX_HCSTRING("onWindowMinimize","\xad","\x0c","\xab","\x27"),
	HX_HCSTRING("onWindowMove","\x20","\xfd","\x7a","\xab"),
	HX_HCSTRING("onWindowResize","\xc3","\x55","\xdb","\xf9"),
	HX_HCSTRING("onWindowRestore","\x9f","\xc0","\x4c","\xad"),
	HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb"),
	HX_HCSTRING("__fullscreen","\x5b","\xb5","\x47","\x32"),
	HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa"),
	HX_HCSTRING("__minimized","\x66","\x44","\xca","\x56"),
	HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34"),
	HX_HCSTRING("__x","\x58","\x69","\x48","\x00"),
	HX_HCSTRING("__y","\x59","\x69","\x48","\x00"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("setIcon","\x3b","\x28","\x37","\x0b"),
	HX_HCSTRING("get_enableTextEvents","\x12","\x49","\x74","\x88"),
	HX_HCSTRING("set_enableTextEvents","\x86","\x00","\x2c","\x55"),
	HX_HCSTRING("get_fullscreen","\x84","\xc2","\xa9","\x6f"),
	HX_HCSTRING("set_fullscreen","\xf8","\xaa","\xc9","\x8f"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_minimized","\x5d","\xcf","\x01","\xea"),
	HX_HCSTRING("set_minimized","\x69","\xb1","\x07","\x2f"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Window_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Window_obj::__mClass,"__mClass");
};

#endif

hx::Class Window_obj::__mClass;

void Window_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.ui.Window","\x51","\x58","\xb8","\xfe");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Window_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Window_obj >;
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
} // end namespace ui

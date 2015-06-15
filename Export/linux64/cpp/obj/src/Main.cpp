#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Slides
#include <Slides.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion_actuators_GenericActuator
#include <motion/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
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
#ifndef INCLUDED_openfl_display_StageAlign
#include <openfl/display/StageAlign.h>
#endif
#ifndef INCLUDED_openfl_display_StageScaleMode
#include <openfl/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
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

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",75,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(76)
	super::__construct();
	HX_STACK_LINE(77)
	::String tmp = ::openfl::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	Dynamic tmp1 = this->added_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(77)
	this->addEventListener(tmp,tmp1,null(),null(),null());
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Void Main_obj::resize( Dynamic e){
{
		HX_STACK_FRAME("Main","resize",0x39257969,"Main.resize","Main.hx",23,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(24)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		if ((tmp1)){
			HX_STACK_LINE(24)
			this->init();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,resize,(void))

Void Main_obj::init( ){
{
		HX_STACK_FRAME("Main","init",0xea732345,"Main.init","Main.hx",28,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		bool tmp = this->inited;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		if ((tmp)){
			HX_STACK_LINE(29)
			return null();
		}
		HX_STACK_LINE(30)
		this->inited = true;
		HX_STACK_LINE(32)
		::openfl::display::BitmapData tmp1 = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("assets/haxe.png","\xad","\xc2","\xea","\xec"),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(32)
		::openfl::display::BitmapData bitmapData = tmp1;		HX_STACK_VAR(bitmapData,"bitmapData");
		HX_STACK_LINE(33)
		::openfl::display::Bitmap tmp2 = ::openfl::display::Bitmap_obj::__new(bitmapData,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		::openfl::display::Bitmap bitmap = tmp2;		HX_STACK_VAR(bitmap,"bitmap");
		HX_STACK_LINE(37)
		bitmap->set_width((int)400);
		HX_STACK_LINE(38)
		bitmap->set_height((int)400);
		HX_STACK_LINE(39)
		bitmap->set_x((int)0);
		HX_STACK_LINE(40)
		bitmap->set_y((int)50);
		HX_STACK_LINE(41)
		bitmap->set_alpha(((Float).5));
		HX_STACK_LINE(44)
		::openfl::display::Bitmap tmp3 = bitmap;		HX_STACK_VAR(tmp3,"tmp3");
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",44,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , (int)1,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , (int)-560,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(44)
		Dynamic tmp4 = _Function_1_1::Block();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(44)
		::motion::actuators::GenericActuator tmp5 = ::motion::Actuate_obj::tween(tmp3,(int)3,tmp4,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(44)
		::motion::actuators::GenericActuator tmp6 = tmp5->repeat(null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(44)
		tmp6->reflect(null());
		HX_STACK_LINE(46)
		::Slides tmp7 = ::Slides_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(46)
		this->slides = tmp7;
		HX_STACK_LINE(49)
		::openfl::text::TextFormat tmp8 = ::openfl::text::TextFormat_obj::__new(HX_HCSTRING("Verdana","\xb3","\xc8","\x52","\x40"),(int)24,(int)16777215,true,null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(49)
		::openfl::text::TextFormat messageFormat = tmp8;		HX_STACK_VAR(messageFormat,"messageFormat");
		HX_STACK_LINE(50)
		messageFormat->align = ::openfl::text::TextFormatAlign_obj::LEFT;
		HX_STACK_LINE(52)
		::openfl::text::TextField tmp9 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(52)
		this->messageField = tmp9;
		HX_STACK_LINE(54)
		::openfl::text::TextField tmp10 = this->messageField;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(54)
		tmp10->set_width((int)800);
		HX_STACK_LINE(55)
		::openfl::text::TextField tmp11 = this->messageField;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(55)
		tmp11->set_height((int)200);
		HX_STACK_LINE(56)
		::openfl::text::TextField tmp12 = this->messageField;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(56)
		tmp12->set_x((int)100);
		HX_STACK_LINE(57)
		::openfl::text::TextField tmp13 = this->messageField;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(57)
		tmp13->set_y((int)150);
		HX_STACK_LINE(59)
		::openfl::text::TextField tmp14 = this->messageField;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(59)
		::openfl::text::TextFormat tmp15 = messageFormat;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(59)
		tmp14->set_defaultTextFormat(tmp15);
		HX_STACK_LINE(60)
		::openfl::text::TextField tmp16 = this->messageField;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(60)
		tmp16->set_selectable(false);
		HX_STACK_LINE(61)
		::openfl::text::TextField tmp17 = this->messageField;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(61)
		tmp17->set_text(HX_HCSTRING("HAXE\nTHE CROSS PLATFORM TOOLKIT","\x04","\x03","\x0b","\xc3"));
		HX_STACK_LINE(63)
		::openfl::display::Bitmap tmp18 = bitmap;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(63)
		this->addChild(tmp18);
		HX_STACK_LINE(64)
		::openfl::text::TextField tmp19 = this->messageField;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(64)
		this->addChild(tmp19);
		HX_STACK_LINE(69)
		::openfl::display::Stage tmp20 = this->stage;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(69)
		::String tmp21 = ::openfl::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(69)
		Dynamic tmp22 = this->onKeyDown_dyn();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(69)
		tmp20->addEventListener(tmp21,tmp22,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,init,(void))

Void Main_obj::onKeyDown( ::openfl::events::KeyboardEvent evt){
{
		HX_STACK_FRAME("Main","onKeyDown",0x547b59ed,"Main.onKeyDown","Main.hx",96,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(evt,"evt")
		HX_STACK_LINE(98)
		::openfl::text::TextField tmp = this->messageField;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(98)
		::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(98)
		{
			HX_STACK_LINE(98)
			int _g = evt->keyCode;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(98)
			int tmp2 = _g;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(98)
			switch( (int)(tmp2)){
				case (int)40: {
					HX_STACK_LINE(99)
					::Slides tmp3 = this->slides;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(99)
					tmp1 = tmp3->next();
				}
				;break;
				case (int)38: {
					HX_STACK_LINE(100)
					::Slides tmp3 = this->slides;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(100)
					tmp1 = tmp3->prev();
				}
				;break;
				default: {
					HX_STACK_LINE(101)
					::Slides tmp3 = this->slides;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(101)
					tmp1 = tmp3->get();
				}
			}
		}
		HX_STACK_LINE(98)
		tmp->set_text(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,onKeyDown,(void))

Void Main_obj::added( Dynamic e){
{
		HX_STACK_FRAME("Main","added",0x98771aeb,"Main.added","Main.hx",106,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(107)
		::String tmp = ::openfl::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		Dynamic tmp1 = this->added_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(107)
		this->removeEventListener(tmp,tmp1,null());
		HX_STACK_LINE(108)
		::openfl::display::Stage tmp2 = this->stage;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(108)
		::String tmp3 = ::openfl::events::Event_obj::RESIZE;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(108)
		Dynamic tmp4 = this->resize_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(108)
		tmp2->addEventListener(tmp3,tmp4,null(),null(),null());
		HX_STACK_LINE(112)
		this->init();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,added,(void))

Void Main_obj::main( ){
{
		HX_STACK_FRAME("Main","main",0xed0e206e,"Main.main","Main.hx",116,0x087e5c05)
		HX_STACK_LINE(118)
		::openfl::display::MovieClip tmp = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(118)
		tmp->stage->align = ::openfl::display::StageAlign_obj::TOP_LEFT;
		HX_STACK_LINE(119)
		::openfl::display::MovieClip tmp1 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(119)
		tmp1->stage->scaleMode = ::openfl::display::StageScaleMode_obj::NO_SCALE;
		HX_STACK_LINE(120)
		::openfl::display::MovieClip tmp2 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(120)
		::Main tmp3 = ::Main_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(120)
		tmp2->addChild(tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(inited,"inited");
	HX_MARK_MEMBER_NAME(messageField,"messageField");
	HX_MARK_MEMBER_NAME(slides,"slides");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(inited,"inited");
	HX_VISIT_MEMBER_NAME(messageField,"messageField");
	HX_VISIT_MEMBER_NAME(slides,"slides");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"added") ) { return added_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"inited") ) { return inited; }
		if (HX_FIELD_EQ(inName,"slides") ) { return slides; }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"messageField") ) { return messageField; }
	}
	return super::__Field(inName,inCallProp);
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true;  }
	}
	return false;
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"inited") ) { inited=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"slides") ) { slides=inValue.Cast< ::Slides >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"messageField") ) { messageField=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Main_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97"));
	outFields->push(HX_HCSTRING("messageField","\x73","\x7d","\x34","\x57"));
	outFields->push(HX_HCSTRING("slides","\x22","\xc6","\x04","\x70"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Main_obj,inited),HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(Main_obj,messageField),HX_HCSTRING("messageField","\x73","\x7d","\x34","\x57")},
	{hx::fsObject /*::Slides*/ ,(int)offsetof(Main_obj,slides),HX_HCSTRING("slides","\x22","\xc6","\x04","\x70")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("inited","\x6f","\x77","\x4c","\x97"),
	HX_HCSTRING("messageField","\x73","\x7d","\x34","\x57"),
	HX_HCSTRING("slides","\x22","\xc6","\x04","\x70"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("onKeyDown","\x42","\x22","\xf2","\x73"),
	HX_HCSTRING("added","\xc0","\xd4","\x43","\x1c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#endif

hx::Class Main_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("main","\x39","\x38","\x56","\x48"),
	::String(null()) };

void Main_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Main","\x59","\x64","\x2f","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &Main_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Main_obj >;
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


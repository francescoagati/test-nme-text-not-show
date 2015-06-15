#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_openfl_display_Loader
#include <openfl/display/Loader.h>
#endif
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
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
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_system_LoaderContext
#include <openfl/system/LoaderContext.h>
#endif
namespace openfl{
namespace display{

Void Loader_obj::__construct()
{
HX_STACK_FRAME("openfl.display.Loader","new",0x0b8c4b6f,"openfl.display.Loader.new","openfl/display/Loader.hx",177,0x7a569d9f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(179)
	super::__construct();
	HX_STACK_LINE(181)
	::openfl::display::LoaderInfo tmp = ::openfl::display::LoaderInfo_obj::create(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(181)
	this->contentLoaderInfo = tmp;
}
;
	return null();
}

//Loader_obj::~Loader_obj() { }

Dynamic Loader_obj::__CreateEmpty() { return  new Loader_obj; }
hx::ObjectPtr< Loader_obj > Loader_obj::__new()
{  hx::ObjectPtr< Loader_obj > _result_ = new Loader_obj();
	_result_->__construct();
	return _result_;}

Dynamic Loader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Loader_obj > _result_ = new Loader_obj();
	_result_->__construct();
	return _result_;}

Void Loader_obj::close( ){
{
		HX_STACK_FRAME("openfl.display.Loader","close",0xeefbb487,"openfl.display.Loader.close","openfl/display/Loader.hx",193,0x7a569d9f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(193)
		::openfl::Lib_obj::notImplemented(HX_HCSTRING("Loader.close","\x3d","\x15","\x0d","\x6a"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,close,(void))

Void Loader_obj::load( ::openfl::net::URLRequest request,::openfl::_system::LoaderContext context){
{
		HX_STACK_FRAME("openfl.display.Loader","load",0x0deacc37,"openfl.display.Loader.load","openfl/display/Loader.hx",359,0x7a569d9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(request,"request")
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(361)
		::String extension = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(extension,"extension");
		HX_STACK_LINE(362)
		Array< ::String > parts = request->url.split(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(parts,"parts");
		HX_STACK_LINE(364)
		bool tmp = (parts->length > (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(364)
		if ((tmp)){
			HX_STACK_LINE(366)
			int tmp1 = (parts->length - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(366)
			::String tmp2 = parts->__get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(366)
			::String tmp3 = tmp2.toLowerCase();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(366)
			extension = tmp3;
		}
		HX_STACK_LINE(370)
		int tmp1 = extension.indexOf(HX_HCSTRING("?","\x3f","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(370)
		bool tmp2 = (tmp1 != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(370)
		if ((tmp2)){
			HX_STACK_LINE(372)
			::String tmp3 = extension.split(HX_HCSTRING("?","\x3f","\x00","\x00","\x00"))->__get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(372)
			extension = tmp3;
		}
		HX_STACK_LINE(376)
		bool transparent = true;		HX_STACK_VAR(transparent,"transparent");
		HX_STACK_LINE(378)
		{
			HX_STACK_LINE(378)
			::openfl::display::LoaderInfo tmp3 = this->contentLoaderInfo;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(378)
			tmp3->url = request->url;
		}
		HX_STACK_LINE(380)
		bool tmp3 = (request->contentType == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(380)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(380)
		if ((tmp3)){
			HX_STACK_LINE(380)
			tmp4 = (request->contentType != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(380)
			tmp4 = false;
		}
		HX_STACK_LINE(380)
		if ((tmp4)){
			HX_STACK_LINE(384)
			::String tmp5 = extension;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(384)
			::String tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(384)
			::String _switch_1 = (tmp5);
			if (  ( _switch_1==HX_HCSTRING("swf","\x42","\xab","\x57","\x00"))){
				HX_STACK_LINE(386)
				tmp6 = HX_HCSTRING("application/x-shockwave-flash","\xea","\xf3","\x47","\x4a");
			}
			else if (  ( _switch_1==HX_HCSTRING("jpg","\xe1","\xd0","\x50","\x00")) ||  ( _switch_1==HX_HCSTRING("jpeg","\xa8","\xf2","\x65","\x46"))){
				HX_STACK_LINE(387)
				transparent = false;
				HX_STACK_LINE(387)
				tmp6 = HX_HCSTRING("image/jpeg","\x1c","\x8d","\xdb","\xce");
			}
			else if (  ( _switch_1==HX_HCSTRING("png","\xa9","\x5c","\x55","\x00"))){
				HX_STACK_LINE(388)
				tmp6 = HX_HCSTRING("image/png","\xb5","\xcc","\xc1","\x16");
			}
			else if (  ( _switch_1==HX_HCSTRING("gif","\x04","\x84","\x4e","\x00"))){
				HX_STACK_LINE(389)
				tmp6 = HX_HCSTRING("image/gif","\x10","\xf4","\xba","\x16");
			}
			else  {
				HX_STACK_LINE(390)
				tmp6 = HX_HCSTRING("application/x-www-form-urlencoded","\x9e","\x61","\x91","\xfa");
			}
;
;
			HX_STACK_LINE(384)
			::openfl::display::LoaderInfo tmp7 = this->contentLoaderInfo;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(384)
			tmp7->contentType = tmp6;
		}
		else{
			HX_STACK_LINE(398)
			::openfl::display::LoaderInfo tmp5 = this->contentLoaderInfo;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(398)
			tmp5->contentType = request->contentType;
		}
		HX_STACK_LINE(402)
		::String tmp5 = request->url;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(402)
		Dynamic tmp6 = this->BitmapData_onLoad_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(402)
		Dynamic tmp7 = this->BitmapData_onError_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(402)
		::openfl::display::BitmapData_obj::fromFile(tmp5,tmp6,tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,load,(void))

Void Loader_obj::loadBytes( ::lime::utils::ByteArray buffer){
{
		HX_STACK_FRAME("openfl.display.Loader","loadBytes",0x5dd804b4,"openfl.display.Loader.loadBytes","openfl/display/Loader.hx",493,0x7a569d9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(495)
		::lime::utils::ByteArray tmp = buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(495)
		Dynamic tmp1 = this->BitmapData_onLoad_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(495)
		::openfl::display::BitmapData_obj::fromBytes(tmp,null(),tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loadBytes,(void))

Void Loader_obj::unload( ){
{
		HX_STACK_FRAME("openfl.display.Loader","unload",0x847d3950,"openfl.display.Loader.unload","openfl/display/Loader.hx",523,0x7a569d9f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(525)
		int tmp = this->get_numChildren();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(525)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(525)
		if ((tmp1)){
			HX_STACK_LINE(527)
			while((true)){
				HX_STACK_LINE(527)
				int tmp2 = this->get_numChildren();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(527)
				bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(527)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(527)
				if ((tmp4)){
					HX_STACK_LINE(527)
					break;
				}
				HX_STACK_LINE(529)
				this->removeChildAt((int)0);
			}
			HX_STACK_LINE(533)
			this->content = null();
			HX_STACK_LINE(534)
			::openfl::display::LoaderInfo tmp2 = this->contentLoaderInfo;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(534)
			tmp2->url = null();
			HX_STACK_LINE(535)
			::openfl::display::LoaderInfo tmp3 = this->contentLoaderInfo;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(535)
			tmp3->contentType = null();
			HX_STACK_LINE(536)
			::openfl::display::LoaderInfo tmp4 = this->contentLoaderInfo;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(536)
			tmp4->content = null();
			HX_STACK_LINE(537)
			::openfl::display::LoaderInfo tmp5 = this->contentLoaderInfo;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(537)
			tmp5->bytesLoaded = (int)0;
			HX_STACK_LINE(538)
			::openfl::display::LoaderInfo tmp6 = this->contentLoaderInfo;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(538)
			tmp6->bytesTotal = (int)0;
			HX_STACK_LINE(539)
			::openfl::display::LoaderInfo tmp7 = this->contentLoaderInfo;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(539)
			tmp7->width = (int)0;
			HX_STACK_LINE(540)
			::openfl::display::LoaderInfo tmp8 = this->contentLoaderInfo;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(540)
			tmp8->height = (int)0;
			HX_STACK_LINE(542)
			::String tmp9 = ::openfl::events::Event_obj::UNLOAD;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(542)
			::openfl::events::Event tmp10 = ::openfl::events::Event_obj::__new(tmp9,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(542)
			::openfl::events::Event event = tmp10;		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(543)
			event->currentTarget = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(544)
			::openfl::events::Event tmp11 = event;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(544)
			this->dispatchEvent(tmp11);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,unload,(void))

Void Loader_obj::unloadAndStop( hx::Null< bool >  __o_gc){
bool gc = __o_gc.Default(true);
	HX_STACK_FRAME("openfl.display.Loader","unloadAndStop",0x25cb8709,"openfl.display.Loader.unloadAndStop","openfl/display/Loader.hx",581,0x7a569d9f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gc,"gc")
{
		HX_STACK_LINE(581)
		::openfl::Lib_obj::notImplemented(HX_HCSTRING("Loader.unloadAndStop","\xbf","\x8d","\xdd","\x18"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,unloadAndStop,(void))

Void Loader_obj::BitmapData_onLoad( ::openfl::display::BitmapData bitmapData){
{
		HX_STACK_FRAME("openfl.display.Loader","BitmapData_onLoad",0x9c5aef1a,"openfl.display.Loader.BitmapData_onLoad","openfl/display/Loader.hx",593,0x7a569d9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bitmapData,"bitmapData")
		HX_STACK_LINE(595)
		::openfl::display::Bitmap tmp = ::openfl::display::Bitmap_obj::__new(bitmapData,null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(595)
		::openfl::display::LoaderInfo tmp1 = this->contentLoaderInfo;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(595)
		tmp1->content = tmp;
		HX_STACK_LINE(596)
		::openfl::display::LoaderInfo tmp2 = this->contentLoaderInfo;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(596)
		this->content = tmp2->content;
		HX_STACK_LINE(597)
		::openfl::display::LoaderInfo tmp3 = this->contentLoaderInfo;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(597)
		::openfl::display::DisplayObject tmp4 = tmp3->content;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(597)
		this->addChild(tmp4);
		HX_STACK_LINE(599)
		::String tmp5 = ::openfl::events::Event_obj::COMPLETE;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(599)
		::openfl::events::Event tmp6 = ::openfl::events::Event_obj::__new(tmp5,null(),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(599)
		::openfl::events::Event event = tmp6;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(600)
		::openfl::display::LoaderInfo tmp7 = this->contentLoaderInfo;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(600)
		event->target = tmp7;
		HX_STACK_LINE(601)
		::openfl::display::LoaderInfo tmp8 = this->contentLoaderInfo;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(601)
		event->currentTarget = tmp8;
		HX_STACK_LINE(602)
		::openfl::display::LoaderInfo tmp9 = this->contentLoaderInfo;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(602)
		::openfl::events::Event tmp10 = event;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(602)
		tmp9->dispatchEvent(tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,BitmapData_onLoad,(void))

Void Loader_obj::BitmapData_onError( ){
{
		HX_STACK_FRAME("openfl.display.Loader","BitmapData_onError",0x2d70cc54,"openfl.display.Loader.BitmapData_onError","openfl/display/Loader.hx",607,0x7a569d9f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(609)
		::String tmp = ::openfl::events::IOErrorEvent_obj::IO_ERROR;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(609)
		::openfl::events::IOErrorEvent tmp1 = ::openfl::events::IOErrorEvent_obj::__new(tmp,null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(609)
		::openfl::events::IOErrorEvent event = tmp1;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(610)
		::openfl::display::LoaderInfo tmp2 = this->contentLoaderInfo;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(610)
		event->target = tmp2;
		HX_STACK_LINE(611)
		::openfl::display::LoaderInfo tmp3 = this->contentLoaderInfo;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(611)
		event->currentTarget = tmp3;
		HX_STACK_LINE(612)
		::openfl::display::LoaderInfo tmp4 = this->contentLoaderInfo;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(612)
		::openfl::events::IOErrorEvent tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(612)
		tmp4->dispatchEvent(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,BitmapData_onError,(void))


Loader_obj::Loader_obj()
{
}

void Loader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Loader);
	HX_MARK_MEMBER_NAME(content,"content");
	HX_MARK_MEMBER_NAME(contentLoaderInfo,"contentLoaderInfo");
	HX_MARK_MEMBER_NAME(mImage,"mImage");
	HX_MARK_MEMBER_NAME(mShape,"mShape");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Loader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(content,"content");
	HX_VISIT_MEMBER_NAME(contentLoaderInfo,"contentLoaderInfo");
	HX_VISIT_MEMBER_NAME(mImage,"mImage");
	HX_VISIT_MEMBER_NAME(mShape,"mShape");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Loader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mImage") ) { return mImage; }
		if (HX_FIELD_EQ(inName,"mShape") ) { return mShape; }
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { return content; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return loadBytes_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"unloadAndStop") ) { return unloadAndStop_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"contentLoaderInfo") ) { return contentLoaderInfo; }
		if (HX_FIELD_EQ(inName,"BitmapData_onLoad") ) { return BitmapData_onLoad_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"BitmapData_onError") ) { return BitmapData_onError_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Loader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"mImage") ) { mImage=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mShape") ) { mShape=inValue.Cast< ::openfl::display::Shape >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { content=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"contentLoaderInfo") ) { contentLoaderInfo=inValue.Cast< ::openfl::display::LoaderInfo >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Loader_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Loader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("content","\x39","\x8d","\x77","\x19"));
	outFields->push(HX_HCSTRING("contentLoaderInfo","\xba","\x64","\x65","\x14"));
	outFields->push(HX_HCSTRING("mImage","\xae","\xe3","\x7c","\xe5"));
	outFields->push(HX_HCSTRING("mShape","\x74","\xa7","\x30","\xa4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(Loader_obj,content),HX_HCSTRING("content","\x39","\x8d","\x77","\x19")},
	{hx::fsObject /*::openfl::display::LoaderInfo*/ ,(int)offsetof(Loader_obj,contentLoaderInfo),HX_HCSTRING("contentLoaderInfo","\xba","\x64","\x65","\x14")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(Loader_obj,mImage),HX_HCSTRING("mImage","\xae","\xe3","\x7c","\xe5")},
	{hx::fsObject /*::openfl::display::Shape*/ ,(int)offsetof(Loader_obj,mShape),HX_HCSTRING("mShape","\x74","\xa7","\x30","\xa4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("content","\x39","\x8d","\x77","\x19"),
	HX_HCSTRING("contentLoaderInfo","\xba","\x64","\x65","\x14"),
	HX_HCSTRING("mImage","\xae","\xe3","\x7c","\xe5"),
	HX_HCSTRING("mShape","\x74","\xa7","\x30","\xa4"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("loadBytes","\x65","\x54","\xcf","\xd8"),
	HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),
	HX_HCSTRING("unloadAndStop","\x3a","\x03","\x03","\x7a"),
	HX_HCSTRING("BitmapData_onLoad","\xcb","\xd7","\xa2","\xbe"),
	HX_HCSTRING("BitmapData_onError","\x83","\x7e","\x14","\x0a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Loader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Loader_obj::__mClass,"__mClass");
};

#endif

hx::Class Loader_obj::__mClass;

void Loader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Loader","\xfd","\x67","\xb0","\xe2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Loader_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Loader_obj >;
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

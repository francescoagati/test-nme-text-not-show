#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeRenderer
#include <lime/_backend/native/NativeRenderer.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeWindow
#include <lime/_backend/native/NativeWindow.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_
#include <lime/graphics/cairo/_CairoSurface/CairoSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
namespace lime{
namespace _backend{
namespace native{

Void NativeRenderer_obj::__construct(::lime::graphics::Renderer parent)
{
HX_STACK_FRAME("lime._backend.native.NativeRenderer","new",0x43f11223,"lime._backend.native.NativeRenderer.new","lime/_backend/native/NativeRenderer.hx",33,0x398cc96c)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
{
	HX_STACK_LINE(33)
	this->parent = parent;
}
;
	return null();
}

//NativeRenderer_obj::~NativeRenderer_obj() { }

Dynamic NativeRenderer_obj::__CreateEmpty() { return  new NativeRenderer_obj; }
hx::ObjectPtr< NativeRenderer_obj > NativeRenderer_obj::__new(::lime::graphics::Renderer parent)
{  hx::ObjectPtr< NativeRenderer_obj > _result_ = new NativeRenderer_obj();
	_result_->__construct(parent);
	return _result_;}

Dynamic NativeRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NativeRenderer_obj > _result_ = new NativeRenderer_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void NativeRenderer_obj::create( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeRenderer","create",0x10556119,"lime._backend.native.NativeRenderer.create","lime/_backend/native/NativeRenderer.hx",38,0x398cc96c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(40)
		::lime::graphics::Renderer tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		::lime::_backend::native::NativeWindow tmp1 = tmp->window->backend;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		Dynamic tmp2 = tmp1->handle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		Dynamic tmp3 = ::lime::_backend::native::NativeRenderer_obj::lime_renderer_create(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(40)
		this->handle = tmp3;
		HX_STACK_LINE(42)
		::lime::graphics::Renderer tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(42)
		Dynamic tmp5 = tmp4->window->config;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(42)
		this->useHardware = tmp5->__Field(HX_HCSTRING("hardware","\xa8","\xe2","\xd3","\x75"), hx::paccDynamic );
		HX_STACK_LINE(47)
		bool tmp6 = this->useHardware;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(47)
		if ((tmp6)){
			HX_STACK_LINE(49)
			::lime::graphics::GLRenderContext tmp7 = ::lime::graphics::GLRenderContext_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(49)
			::lime::graphics::RenderContext tmp8 = ::lime::graphics::RenderContext_obj::OPENGL(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(49)
			::lime::graphics::Renderer tmp9 = this->parent;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(49)
			tmp9->context = tmp8;
		}
		else{
			HX_STACK_LINE(54)
			this->render();
			HX_STACK_LINE(55)
			::lime::graphics::cairo::Cairo tmp7 = this->cairo;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(55)
			::lime::graphics::RenderContext tmp8 = ::lime::graphics::RenderContext_obj::CAIRO(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(55)
			::lime::graphics::Renderer tmp9 = this->parent;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(55)
			tmp9->context = tmp8;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeRenderer_obj,create,(void))

Void NativeRenderer_obj::dispatch( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeRenderer","dispatch",0xcbb24a17,"lime._backend.native.NativeRenderer.dispatch","lime/_backend/native/NativeRenderer.hx",64,0x398cc96c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeRenderer_obj,dispatch,(void))

Void NativeRenderer_obj::flip( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeRenderer","flip",0x29ba5b8a,"lime._backend.native.NativeRenderer.flip","lime/_backend/native/NativeRenderer.hx",71,0x398cc96c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		bool tmp = this->useHardware;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		if ((tmp1)){
			HX_STACK_LINE(76)
			::lime::graphics::cairo::Cairo tmp2 = this->cairo;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(76)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(76)
			if ((tmp3)){
				HX_STACK_LINE(78)
				Dynamic tmp4 = this->primarySurface;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(78)
				::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::flush(tmp4);
			}
			HX_STACK_LINE(82)
			Dynamic tmp4 = this->handle;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(82)
			::lime::_backend::native::NativeRenderer_obj::lime_renderer_unlock(tmp4);
		}
		HX_STACK_LINE(86)
		Dynamic tmp2 = this->handle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(86)
		::lime::_backend::native::NativeRenderer_obj::lime_renderer_flip(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeRenderer_obj,flip,(void))

Void NativeRenderer_obj::render( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeRenderer","render",0x996f6573,"lime._backend.native.NativeRenderer.render","lime/_backend/native/NativeRenderer.hx",91,0x398cc96c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(93)
		bool tmp = this->useHardware;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(93)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(93)
		if ((tmp1)){
			HX_STACK_LINE(96)
			Dynamic tmp2 = this->handle;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(96)
			Dynamic tmp3 = ::lime::_backend::native::NativeRenderer_obj::lime_renderer_lock(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(96)
			Dynamic lock = tmp3;		HX_STACK_VAR(lock,"lock");
			HX_STACK_LINE(98)
			Dynamic tmp4 = this->cacheLock;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(98)
			bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(98)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(98)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(98)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(98)
			if ((tmp7)){
				HX_STACK_LINE(98)
				Dynamic tmp9 = this->cacheLock;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(98)
				Dynamic tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(98)
				Dynamic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(98)
				tmp8 = (tmp11->__Field(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"), hx::paccDynamic ) != lock->__Field(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"), hx::paccDynamic ));
			}
			else{
				HX_STACK_LINE(98)
				tmp8 = true;
			}
			HX_STACK_LINE(98)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(98)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(98)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(98)
			if ((tmp10)){
				HX_STACK_LINE(98)
				Dynamic tmp12 = this->cacheLock;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(98)
				Dynamic tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(98)
				Dynamic tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(98)
				tmp11 = (tmp14->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ) != lock->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ));
			}
			else{
				HX_STACK_LINE(98)
				tmp11 = true;
			}
			HX_STACK_LINE(98)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(98)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(98)
			if ((tmp12)){
				HX_STACK_LINE(98)
				Dynamic tmp14 = this->cacheLock;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(98)
				Dynamic tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(98)
				tmp13 = (tmp15->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ) != lock->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ));
			}
			else{
				HX_STACK_LINE(98)
				tmp13 = true;
			}
			HX_STACK_LINE(98)
			if ((tmp13)){
				HX_STACK_LINE(100)
				Dynamic tmp14 = this->primarySurface;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(100)
				bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(100)
				if ((tmp15)){
					HX_STACK_LINE(101)
					Dynamic tmp16 = this->primarySurface;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(101)
					::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::destroy(tmp16);
				}
				HX_STACK_LINE(103)
				Dynamic tmp16 = lock->__Field(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(103)
				int tmp17 = lock->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(103)
				int tmp18 = lock->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(103)
				int tmp19 = lock->__Field(HX_HCSTRING("pitch","\xc0","\xbb","\xa0","\xc2"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(103)
				Dynamic tmp20 = ::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::createForData(tmp16,(int)0,tmp17,tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(103)
				this->primarySurface = tmp20;
				HX_STACK_LINE(105)
				::lime::graphics::cairo::Cairo tmp21 = this->cairo;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(105)
				bool tmp22 = (tmp21 != null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(105)
				if ((tmp22)){
					HX_STACK_LINE(107)
					::lime::graphics::cairo::Cairo tmp23 = this->cairo;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(107)
					Dynamic tmp24 = this->primarySurface;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(107)
					tmp23->recreate(tmp24);
				}
				else{
					HX_STACK_LINE(111)
					Dynamic tmp23 = this->primarySurface;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(111)
					::lime::graphics::cairo::Cairo tmp24 = ::lime::graphics::cairo::Cairo_obj::__new(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(111)
					this->cairo = tmp24;
				}
			}
			HX_STACK_LINE(118)
			this->cacheLock = lock;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeRenderer_obj,render,(void))

Dynamic NativeRenderer_obj::lime_renderer_create;

Dynamic NativeRenderer_obj::lime_renderer_flip;

Dynamic NativeRenderer_obj::lime_renderer_lock;

Dynamic NativeRenderer_obj::lime_renderer_unlock;


NativeRenderer_obj::NativeRenderer_obj()
{
}

void NativeRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NativeRenderer);
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(useHardware,"useHardware");
	HX_MARK_MEMBER_NAME(cacheLock,"cacheLock");
	HX_MARK_MEMBER_NAME(cairo,"cairo");
	HX_MARK_MEMBER_NAME(primarySurface,"primarySurface");
	HX_MARK_END_CLASS();
}

void NativeRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(useHardware,"useHardware");
	HX_VISIT_MEMBER_NAME(cacheLock,"cacheLock");
	HX_VISIT_MEMBER_NAME(cairo,"cairo");
	HX_VISIT_MEMBER_NAME(primarySurface,"primarySurface");
}

Dynamic NativeRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"flip") ) { return flip_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cairo") ) { return cairo; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dispatch") ) { return dispatch_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"cacheLock") ) { return cacheLock; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"useHardware") ) { return useHardware; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"primarySurface") ) { return primarySurface; }
	}
	return super::__Field(inName,inCallProp);
}

bool NativeRenderer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"lime_renderer_flip") ) { outValue = lime_renderer_flip; return true;  }
		if (HX_FIELD_EQ(inName,"lime_renderer_lock") ) { outValue = lime_renderer_lock; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_renderer_create") ) { outValue = lime_renderer_create; return true;  }
		if (HX_FIELD_EQ(inName,"lime_renderer_unlock") ) { outValue = lime_renderer_unlock; return true;  }
	}
	return false;
}

Dynamic NativeRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cairo") ) { cairo=inValue.Cast< ::lime::graphics::cairo::Cairo >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::lime::graphics::Renderer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"cacheLock") ) { cacheLock=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"useHardware") ) { useHardware=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"primarySurface") ) { primarySurface=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool NativeRenderer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"lime_renderer_flip") ) { lime_renderer_flip=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_renderer_lock") ) { lime_renderer_lock=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_renderer_create") ) { lime_renderer_create=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_renderer_unlock") ) { lime_renderer_unlock=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void NativeRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("useHardware","\x0f","\xea","\xde","\xcf"));
	outFields->push(HX_HCSTRING("cacheLock","\x4d","\xab","\x6c","\x43"));
	outFields->push(HX_HCSTRING("cairo","\x88","\x30","\x19","\x41"));
	outFields->push(HX_HCSTRING("primarySurface","\x8b","\xaa","\xee","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NativeRenderer_obj,handle),HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7")},
	{hx::fsObject /*::lime::graphics::Renderer*/ ,(int)offsetof(NativeRenderer_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsBool,(int)offsetof(NativeRenderer_obj,useHardware),HX_HCSTRING("useHardware","\x0f","\xea","\xde","\xcf")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NativeRenderer_obj,cacheLock),HX_HCSTRING("cacheLock","\x4d","\xab","\x6c","\x43")},
	{hx::fsObject /*::lime::graphics::cairo::Cairo*/ ,(int)offsetof(NativeRenderer_obj,cairo),HX_HCSTRING("cairo","\x88","\x30","\x19","\x41")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NativeRenderer_obj,primarySurface),HX_HCSTRING("primarySurface","\x8b","\xaa","\xee","\x10")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeRenderer_obj::lime_renderer_create,HX_HCSTRING("lime_renderer_create","\x4e","\xc5","\x81","\x91")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeRenderer_obj::lime_renderer_flip,HX_HCSTRING("lime_renderer_flip","\x7f","\xd8","\x55","\x6f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeRenderer_obj::lime_renderer_lock,HX_HCSTRING("lime_renderer_lock","\xbd","\x61","\x4f","\x73")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeRenderer_obj::lime_renderer_unlock,HX_HCSTRING("lime_renderer_unlock","\x16","\x01","\xff","\x7a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("useHardware","\x0f","\xea","\xde","\xcf"),
	HX_HCSTRING("cacheLock","\x4d","\xab","\x6c","\x43"),
	HX_HCSTRING("cairo","\x88","\x30","\x19","\x41"),
	HX_HCSTRING("primarySurface","\x8b","\xaa","\xee","\x10"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"),
	HX_HCSTRING("flip","\xad","\x12","\xbe","\x43"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::lime_renderer_create,"lime_renderer_create");
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::lime_renderer_flip,"lime_renderer_flip");
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::lime_renderer_lock,"lime_renderer_lock");
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::lime_renderer_unlock,"lime_renderer_unlock");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::lime_renderer_create,"lime_renderer_create");
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::lime_renderer_flip,"lime_renderer_flip");
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::lime_renderer_lock,"lime_renderer_lock");
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::lime_renderer_unlock,"lime_renderer_unlock");
};

#endif

hx::Class NativeRenderer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("lime_renderer_create","\x4e","\xc5","\x81","\x91"),
	HX_HCSTRING("lime_renderer_flip","\x7f","\xd8","\x55","\x6f"),
	HX_HCSTRING("lime_renderer_lock","\xbd","\x61","\x4f","\x73"),
	HX_HCSTRING("lime_renderer_unlock","\x16","\x01","\xff","\x7a"),
	::String(null()) };

void NativeRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native.NativeRenderer","\xb1","\xc4","\x96","\xae");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NativeRenderer_obj::__GetStatic;
	__mClass->mSetStaticField = &NativeRenderer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NativeRenderer_obj >;
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

void NativeRenderer_obj::__boot()
{
	lime_renderer_create= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_renderer_create","\x4e","\xc5","\x81","\x91"),(int)1,null());
	lime_renderer_flip= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_renderer_flip","\x7f","\xd8","\x55","\x6f"),(int)1,null());
	lime_renderer_lock= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_renderer_lock","\xbd","\x61","\x4f","\x73"),(int)1,null());
	lime_renderer_unlock= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_renderer_unlock","\x16","\x01","\xff","\x7a"),(int)1,null());
}

} // end namespace lime
} // end namespace _backend
} // end namespace native

#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoBitmap
#include <openfl/_internal/renderer/cairo/CairoBitmap.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

Void CairoBitmap_obj::__construct()
{
	return null();
}

//CairoBitmap_obj::~CairoBitmap_obj() { }

Dynamic CairoBitmap_obj::__CreateEmpty() { return  new CairoBitmap_obj; }
hx::ObjectPtr< CairoBitmap_obj > CairoBitmap_obj::__new()
{  hx::ObjectPtr< CairoBitmap_obj > _result_ = new CairoBitmap_obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoBitmap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoBitmap_obj > _result_ = new CairoBitmap_obj();
	_result_->__construct();
	return _result_;}

Void CairoBitmap_obj::render( ::openfl::display::Bitmap bitmap,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoBitmap","render",0xa19c46ee,"openfl._internal.renderer.cairo.CairoBitmap.render","openfl/_internal/renderer/cairo/CairoBitmap.hx",22,0x03302068)
		HX_STACK_ARG(bitmap,"bitmap")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(24)
		bool tmp = bitmap->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(24)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(24)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(24)
		if ((tmp3)){
			HX_STACK_LINE(24)
			tmp4 = (bitmap->__worldAlpha <= (int)0);
		}
		else{
			HX_STACK_LINE(24)
			tmp4 = true;
		}
		HX_STACK_LINE(24)
		if ((tmp4)){
			HX_STACK_LINE(24)
			return null();
		}
		HX_STACK_LINE(27)
		::lime::graphics::cairo::Cairo cairo = renderSession->cairo;		HX_STACK_VAR(cairo,"cairo");
		HX_STACK_LINE(29)
		bool tmp5 = (bitmap->bitmapData != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(29)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(29)
		if ((tmp5)){
			HX_STACK_LINE(29)
			tmp6 = bitmap->bitmapData->__isValid;
		}
		else{
			HX_STACK_LINE(29)
			tmp6 = false;
		}
		HX_STACK_LINE(29)
		if ((tmp6)){
			HX_STACK_LINE(31)
			bool tmp7 = (bitmap->__mask != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(31)
			if ((tmp7)){
				HX_STACK_LINE(33)
				::openfl::display::DisplayObject tmp8 = bitmap->__mask;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(33)
				renderSession->maskManager->pushMask(tmp8);
			}
			HX_STACK_LINE(40)
			::openfl::geom::Matrix transform = bitmap->__worldTransform;		HX_STACK_VAR(transform,"transform");
			HX_STACK_LINE(41)
			::openfl::geom::Rectangle tmp8 = bitmap->get_scrollRect();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(41)
			::openfl::geom::Rectangle scrollRect = tmp8;		HX_STACK_VAR(scrollRect,"scrollRect");
			HX_STACK_LINE(43)
			bool tmp9 = renderSession->roundPixels;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(43)
			if ((tmp9)){
				HX_STACK_LINE(45)
				::lime::math::Matrix3 tmp10 = transform->__toMatrix3();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(45)
				::lime::math::Matrix3 matrix = tmp10;		HX_STACK_VAR(matrix,"matrix");
				HX_STACK_LINE(46)
				Float tmp11 = matrix->tx;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(46)
				int tmp12 = ::Math_obj::round(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(46)
				matrix->tx = tmp12;
				HX_STACK_LINE(47)
				Float tmp13 = matrix->ty;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(47)
				int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(47)
				matrix->ty = tmp14;
				HX_STACK_LINE(48)
				::lime::math::Matrix3 tmp15 = matrix;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(48)
				cairo->set_matrix(tmp15);
			}
			else{
				HX_STACK_LINE(53)
				::lime::math::Matrix3 tmp10 = transform->__toMatrix3();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(53)
				cairo->set_matrix(tmp10);
			}
			HX_STACK_LINE(66)
			Dynamic tmp10 = bitmap->bitmapData->getSurface(null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(66)
			Dynamic surface = tmp10;		HX_STACK_VAR(surface,"surface");
			HX_STACK_LINE(68)
			bool tmp11 = (surface != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(68)
			if ((tmp11)){
				HX_STACK_LINE(70)
				Dynamic tmp12 = surface;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(70)
				cairo->setSourceSurface(tmp12,(int)0,(int)0);
				HX_STACK_LINE(72)
				bool tmp13 = (scrollRect != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(72)
				if ((tmp13)){
					HX_STACK_LINE(74)
					cairo->pushGroup();
					HX_STACK_LINE(75)
					Dynamic tmp14 = surface;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(75)
					cairo->setSourceSurface(tmp14,(int)0,(int)0);
					HX_STACK_LINE(76)
					cairo->newPath();
					HX_STACK_LINE(77)
					Float tmp15 = scrollRect->x;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(77)
					Float tmp16 = scrollRect->y;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(77)
					Float tmp17 = scrollRect->width;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(77)
					Float tmp18 = scrollRect->height;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(77)
					cairo->rectangle(tmp15,tmp16,tmp17,tmp18);
					HX_STACK_LINE(78)
					cairo->fill();
					HX_STACK_LINE(79)
					cairo->popGroupToSource();
				}
				HX_STACK_LINE(83)
				bool tmp14 = (bitmap->__worldAlpha == (int)1);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(83)
				if ((tmp14)){
					HX_STACK_LINE(85)
					cairo->paint();
				}
				else{
					HX_STACK_LINE(89)
					Float tmp15 = bitmap->__worldAlpha;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(89)
					cairo->paintWithAlpha(tmp15);
				}
			}
			HX_STACK_LINE(103)
			bool tmp12 = (bitmap->__mask != null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(103)
			if ((tmp12)){
				HX_STACK_LINE(105)
				renderSession->maskManager->popMask();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoBitmap_obj,render,(void))


CairoBitmap_obj::CairoBitmap_obj()
{
}

bool CairoBitmap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoBitmap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoBitmap_obj::__mClass,"__mClass");
};

#endif

hx::Class CairoBitmap_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

void CairoBitmap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.cairo.CairoBitmap","\xd6","\x01","\xc6","\x83");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoBitmap_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoBitmap_obj >;
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
} // end namespace cairo

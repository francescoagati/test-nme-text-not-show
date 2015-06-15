#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED__Slides_AListSlides_Impl_
#include <_Slides/AListSlides_Impl_.h>
#endif
namespace _Slides{

Void AListSlides_Impl__obj::__construct()
{
	return null();
}

//AListSlides_Impl__obj::~AListSlides_Impl__obj() { }

Dynamic AListSlides_Impl__obj::__CreateEmpty() { return  new AListSlides_Impl__obj; }
hx::ObjectPtr< AListSlides_Impl__obj > AListSlides_Impl__obj::__new()
{  hx::ObjectPtr< AListSlides_Impl__obj > _result_ = new AListSlides_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic AListSlides_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AListSlides_Impl__obj > _result_ = new AListSlides_Impl__obj();
	_result_->__construct();
	return _result_;}

Array< ::String > AListSlides_Impl__obj::_new( Array< ::String > list){
	HX_STACK_FRAME("_Slides.AListSlides_Impl_","_new",0xb2c95bbb,"_Slides.AListSlides_Impl_._new","Slides.hx",5,0x032a5dbc)
	HX_STACK_ARG(list,"list")
	HX_STACK_LINE(5)
	Array< ::String > tmp = list;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AListSlides_Impl__obj,_new,return )

Void AListSlides_Impl__obj::addSlide( Array< ::String > this1,::String slide){
{
		HX_STACK_FRAME("_Slides.AListSlides_Impl_","addSlide",0x677a66aa,"_Slides.AListSlides_Impl_.addSlide","Slides.hx",6,0x032a5dbc)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(slide,"slide")
		HX_STACK_LINE(8)
		::String tmp = slide;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(8)
		::String tmp1 = ::StringTools_obj::trim(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(8)
		this1->push(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AListSlides_Impl__obj,addSlide,(void))


AListSlides_Impl__obj::AListSlides_Impl__obj()
{
}

bool AListSlides_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addSlide") ) { outValue = addSlide_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AListSlides_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AListSlides_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class AListSlides_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("addSlide","\x50","\xeb","\x24","\xf8"),
	::String(null()) };

void AListSlides_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("_Slides.AListSlides_Impl_","\x54","\xb8","\x43","\xb6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AListSlides_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AListSlides_Impl__obj >;
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

} // end namespace _Slides

#ifndef INCLUDED__Slides_AListSlides_Impl_
#define INCLUDED__Slides_AListSlides_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(_Slides,AListSlides_Impl_)
namespace _Slides{


class HXCPP_CLASS_ATTRIBUTES  AListSlides_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AListSlides_Impl__obj OBJ_;
		AListSlides_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="_Slides.AListSlides_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AListSlides_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AListSlides_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("AListSlides_Impl_","\x21","\xf4","\xd0","\x0b"); }

		static Array< ::String > _new( Array< ::String > list);
		static Dynamic _new_dyn();

		static Void addSlide( Array< ::String > this1,::String slide);
		static Dynamic addSlide_dyn();

};

} // end namespace _Slides

#endif /* INCLUDED__Slides_AListSlides_Impl_ */ 

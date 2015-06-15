#ifndef INCLUDED_Slides
#define INCLUDED_Slides

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Slides)


class HXCPP_CLASS_ATTRIBUTES  Slides_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Slides_obj OBJ_;
		Slides_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="Slides")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Slides_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Slides_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		static void __init__();

		::String __ToString() const { return HX_HCSTRING("Slides","\x42","\x3a","\x99","\xa4"); }

		int index;
		virtual ::String next( );
		Dynamic next_dyn();

		virtual ::String prev( );
		Dynamic prev_dyn();

		virtual ::String get( );
		Dynamic get_dyn();

		static Array< ::String > slides;
		static Void populateSlides( );
		static Dynamic populateSlides_dyn();

};


#endif /* INCLUDED_Slides */ 

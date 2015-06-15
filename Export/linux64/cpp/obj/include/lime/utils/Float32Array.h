#ifndef INCLUDED_lime_utils_Float32Array
#define INCLUDED_lime_utils_Float32Array

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(lime,utils,Float32Array)
HX_DECLARE_CLASS2(lime,utils,IMemoryRange)
namespace lime{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  Float32Array_obj : public ::lime::utils::ArrayBufferView_obj{
	public:
		typedef ::lime::utils::ArrayBufferView_obj super;
		typedef Float32Array_obj OBJ_;
		Float32Array_obj();
		Void __construct(Dynamic bufferOrArray,hx::Null< int >  __o_start,Dynamic length);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="lime.utils.Float32Array")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Float32Array_obj > __new(Dynamic bufferOrArray,hx::Null< int >  __o_start,Dynamic length);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Float32Array_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Float32Array","\x7e","\x42","\x27","\x90"); }

		static void __boot();
		typedef Float __array_access;
		int length;
		virtual Void set( Dynamic bufferOrArray,hx::Null< int >  offset);
		Dynamic set_dyn();

		virtual ::lime::utils::Float32Array subarray( int start,Dynamic end);
		Dynamic subarray_dyn();

		virtual Float __get( int index);
		Dynamic __get_dyn();

		virtual Void __set( int index,Float value);
		Dynamic __set_dyn();

		static int BYTES_PER_ELEMENT;
};

} // end namespace lime
} // end namespace utils

#endif /* INCLUDED_lime_utils_Float32Array */ 

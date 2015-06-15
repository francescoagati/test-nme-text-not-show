#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_math__ColorMatrix_ColorMatrix_Impl_
#include <lime/math/_ColorMatrix/ColorMatrix_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_Float32Array
#include <lime/utils/Float32Array.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
namespace lime{
namespace math{
namespace _ColorMatrix{

Void ColorMatrix_Impl__obj::__construct()
{
	return null();
}

//ColorMatrix_Impl__obj::~ColorMatrix_Impl__obj() { }

Dynamic ColorMatrix_Impl__obj::__CreateEmpty() { return  new ColorMatrix_Impl__obj; }
hx::ObjectPtr< ColorMatrix_Impl__obj > ColorMatrix_Impl__obj::__new()
{  hx::ObjectPtr< ColorMatrix_Impl__obj > _result_ = new ColorMatrix_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic ColorMatrix_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColorMatrix_Impl__obj > _result_ = new ColorMatrix_Impl__obj();
	_result_->__construct();
	return _result_;}

Array< Float > ColorMatrix_Impl__obj::__identity;

::lime::utils::Float32Array ColorMatrix_Impl__obj::_new( ::lime::utils::Float32Array data){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","_new",0x66bc06c7,"lime.math._ColorMatrix.ColorMatrix_Impl_._new","lime/math/ColorMatrix.hx",27,0x337975c7)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(27)
	::lime::utils::Float32Array this1;		HX_STACK_VAR(this1,"this1");
	HX_STACK_LINE(29)
	bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	if ((tmp)){
		HX_STACK_LINE(29)
		tmp1 = (data->length == (int)20);
	}
	else{
		HX_STACK_LINE(29)
		tmp1 = false;
	}
	HX_STACK_LINE(29)
	if ((tmp1)){
		HX_STACK_LINE(31)
		this1 = data;
	}
	else{
		HX_STACK_LINE(35)
		::lime::utils::Float32Array tmp2 = ::lime::utils::Float32Array_obj::__new(::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::__identity,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		this1 = tmp2;
	}
	HX_STACK_LINE(27)
	::lime::utils::Float32Array tmp2 = this1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,_new,return )

::lime::utils::Float32Array ColorMatrix_Impl__obj::clone( ::lime::utils::Float32Array this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","clone",0xca195b37,"lime.math._ColorMatrix.ColorMatrix_Impl_.clone","lime/math/ColorMatrix.hx",42,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(44)
	::lime::utils::Float32Array tmp = ::lime::utils::Float32Array_obj::__new(this1,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	::lime::utils::Float32Array tmp1 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::_new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,clone,return )

Void ColorMatrix_Impl__obj::concat( ::lime::utils::Float32Array this1,::lime::utils::Float32Array second){
{
		HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","concat",0xc5989ffa,"lime.math._ColorMatrix.ColorMatrix_Impl_.concat","lime/math/ColorMatrix.hx",49,0x337975c7)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(second,"second")
		HX_STACK_LINE(51)
		{
			HX_STACK_LINE(51)
			::lime::utils::Float32Array _g = this1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(51)
			{
				HX_STACK_LINE(51)
				Float tmp = _g->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(51)
				Float tmp1 = second->__get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(51)
				Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(51)
				Float value = tmp2;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(51)
				Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(51)
				hx::__ArrayImplRef(_g,(int)0) = tmp3;
				HX_STACK_LINE(51)
				value;
			}
		}
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			::lime::utils::Float32Array _g = this1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(52)
			{
				HX_STACK_LINE(52)
				Float tmp = _g->__get((int)6);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(52)
				Float tmp1 = second->__get((int)6);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(52)
				Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(52)
				Float value = tmp2;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(52)
				Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(52)
				hx::__ArrayImplRef(_g,(int)6) = tmp3;
				HX_STACK_LINE(52)
				value;
			}
		}
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			::lime::utils::Float32Array _g = this1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(53)
			{
				HX_STACK_LINE(53)
				Float tmp = _g->__get((int)12);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(53)
				Float tmp1 = second->__get((int)12);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(53)
				Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(53)
				Float value = tmp2;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(53)
				Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(53)
				hx::__ArrayImplRef(_g,(int)12) = tmp3;
				HX_STACK_LINE(53)
				value;
			}
		}
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			::lime::utils::Float32Array _g = this1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(54)
			{
				HX_STACK_LINE(54)
				Float tmp = _g->__get((int)18);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(54)
				Float tmp1 = second->__get((int)18);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(54)
				Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(54)
				Float value = tmp2;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(54)
				Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(54)
				hx::__ArrayImplRef(_g,(int)18) = tmp3;
				HX_STACK_LINE(54)
				value;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,concat,(void))

Void ColorMatrix_Impl__obj::copyFrom( ::lime::utils::Float32Array this1,::lime::utils::Float32Array other){
{
		HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","copyFrom",0x3aa9a825,"lime.math._ColorMatrix.ColorMatrix_Impl_.copyFrom","lime/math/ColorMatrix.hx",59,0x337975c7)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(other,"other")
		HX_STACK_LINE(61)
		::lime::utils::Float32Array tmp = other;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(61)
		this1->set(tmp,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,copyFrom,(void))

Void ColorMatrix_Impl__obj::identity( ::lime::utils::Float32Array this1){
{
		HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","identity",0x2b77e1a4,"lime.math._ColorMatrix.ColorMatrix_Impl_.identity","lime/math/ColorMatrix.hx",66,0x337975c7)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(68)
		hx::__ArrayImplRef(this1,(int)0) = (int)1;
		HX_STACK_LINE(69)
		hx::__ArrayImplRef(this1,(int)1) = (int)0;
		HX_STACK_LINE(70)
		hx::__ArrayImplRef(this1,(int)2) = (int)0;
		HX_STACK_LINE(71)
		hx::__ArrayImplRef(this1,(int)3) = (int)0;
		HX_STACK_LINE(72)
		hx::__ArrayImplRef(this1,(int)4) = (int)0;
		HX_STACK_LINE(73)
		hx::__ArrayImplRef(this1,(int)5) = (int)0;
		HX_STACK_LINE(74)
		hx::__ArrayImplRef(this1,(int)6) = (int)1;
		HX_STACK_LINE(75)
		hx::__ArrayImplRef(this1,(int)7) = (int)0;
		HX_STACK_LINE(76)
		hx::__ArrayImplRef(this1,(int)8) = (int)0;
		HX_STACK_LINE(77)
		hx::__ArrayImplRef(this1,(int)9) = (int)0;
		HX_STACK_LINE(78)
		hx::__ArrayImplRef(this1,(int)10) = (int)0;
		HX_STACK_LINE(79)
		hx::__ArrayImplRef(this1,(int)11) = (int)0;
		HX_STACK_LINE(80)
		hx::__ArrayImplRef(this1,(int)12) = (int)1;
		HX_STACK_LINE(81)
		hx::__ArrayImplRef(this1,(int)13) = (int)0;
		HX_STACK_LINE(82)
		hx::__ArrayImplRef(this1,(int)14) = (int)0;
		HX_STACK_LINE(83)
		hx::__ArrayImplRef(this1,(int)15) = (int)0;
		HX_STACK_LINE(84)
		hx::__ArrayImplRef(this1,(int)16) = (int)0;
		HX_STACK_LINE(85)
		hx::__ArrayImplRef(this1,(int)17) = (int)0;
		HX_STACK_LINE(86)
		hx::__ArrayImplRef(this1,(int)18) = (int)1;
		HX_STACK_LINE(87)
		hx::__ArrayImplRef(this1,(int)19) = (int)0;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,identity,(void))

Dynamic ColorMatrix_Impl__obj::__toFlashColorTransform( ::lime::utils::Float32Array this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","__toFlashColorTransform",0x02badfd8,"lime.math._ColorMatrix.ColorMatrix_Impl_.__toFlashColorTransform","lime/math/ColorMatrix.hx",97,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(97)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,__toFlashColorTransform,return )

Float ColorMatrix_Impl__obj::get_alphaMultiplier( ::lime::utils::Float32Array this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get_alphaMultiplier",0xa15814f0,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_alphaMultiplier","lime/math/ColorMatrix.hx",110,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(112)
	Float tmp = this1->__get((int)18);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_alphaMultiplier,return )

Float ColorMatrix_Impl__obj::set_alphaMultiplier( ::lime::utils::Float32Array this1,Float value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set_alphaMultiplier",0xddf507fc,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_alphaMultiplier","lime/math/ColorMatrix.hx",117,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(119)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(119)
	hx::__ArrayImplRef(this1,(int)18) = tmp;
	HX_STACK_LINE(120)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(120)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_alphaMultiplier,return )

Float ColorMatrix_Impl__obj::get_alphaOffset( ::lime::utils::Float32Array this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get_alphaOffset",0xff81a182,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_alphaOffset","lime/math/ColorMatrix.hx",125,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(127)
	Float tmp = this1->__get((int)19);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(127)
	Float tmp1 = (tmp * (int)255);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(127)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_alphaOffset,return )

Float ColorMatrix_Impl__obj::set_alphaOffset( ::lime::utils::Float32Array this1,Float value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set_alphaOffset",0xfb4d1e8e,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_alphaOffset","lime/math/ColorMatrix.hx",132,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(134)
	Float tmp = (Float(value) / Float((int)255));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(134)
	hx::__ArrayImplRef(this1,(int)19) = tmp;
	HX_STACK_LINE(135)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(135)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_alphaOffset,return )

Float ColorMatrix_Impl__obj::get_blueMultiplier( ::lime::utils::Float32Array this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get_blueMultiplier",0x69726b6a,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_blueMultiplier","lime/math/ColorMatrix.hx",140,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(142)
	Float tmp = this1->__get((int)12);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(142)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_blueMultiplier,return )

Float ColorMatrix_Impl__obj::set_blueMultiplier( ::lime::utils::Float32Array this1,Float value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set_blueMultiplier",0x46219dde,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_blueMultiplier","lime/math/ColorMatrix.hx",147,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(149)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(149)
	hx::__ArrayImplRef(this1,(int)12) = tmp;
	HX_STACK_LINE(150)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(150)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_blueMultiplier,return )

Float ColorMatrix_Impl__obj::get_blueOffset( ::lime::utils::Float32Array this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get_blueOffset",0x2f5cb2fc,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_blueOffset","lime/math/ColorMatrix.hx",155,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(157)
	Float tmp = this1->__get((int)14);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	Float tmp1 = (tmp * (int)255);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(157)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_blueOffset,return )

Float ColorMatrix_Impl__obj::set_blueOffset( ::lime::utils::Float32Array this1,Float value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set_blueOffset",0x4f7c9b70,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_blueOffset","lime/math/ColorMatrix.hx",162,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(164)
	Float tmp = (Float(value) / Float((int)255));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(164)
	hx::__ArrayImplRef(this1,(int)14) = tmp;
	HX_STACK_LINE(165)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(165)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_blueOffset,return )

int ColorMatrix_Impl__obj::get_color( ::lime::utils::Float32Array this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get_color",0x1b460a94,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_color","lime/math/ColorMatrix.hx",170,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(172)
	Float tmp = this1->__get((int)4);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(172)
	Float tmp1 = (tmp * (int)255);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(172)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(172)
	int tmp3 = (int(tmp2) << int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(172)
	Float tmp4 = this1->__get((int)9);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(172)
	Float tmp5 = (tmp4 * (int)255);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(172)
	int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(172)
	int tmp7 = (int(tmp6) << int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(172)
	int tmp8 = (int(tmp3) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(172)
	Float tmp9 = this1->__get((int)14);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(172)
	Float tmp10 = (tmp9 * (int)255);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(172)
	int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(172)
	int tmp12 = (int(tmp8) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(172)
	return tmp12;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_color,return )

int ColorMatrix_Impl__obj::set_color( ::lime::utils::Float32Array this1,int value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set_color",0xfe96f6a0,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_color","lime/math/ColorMatrix.hx",177,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(179)
	{
		HX_STACK_LINE(179)
		int tmp = (int(value) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(179)
		int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(179)
		Float value1 = tmp1;		HX_STACK_VAR(value1,"value1");
		HX_STACK_LINE(179)
		Float tmp2 = (Float(value1) / Float((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(179)
		hx::__ArrayImplRef(this1,(int)4) = tmp2;
		HX_STACK_LINE(179)
		value1;
	}
	HX_STACK_LINE(180)
	{
		HX_STACK_LINE(180)
		int tmp = (int(value) >> int((int)8));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(180)
		int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(180)
		Float value1 = tmp1;		HX_STACK_VAR(value1,"value1");
		HX_STACK_LINE(180)
		Float tmp2 = (Float(value1) / Float((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(180)
		hx::__ArrayImplRef(this1,(int)9) = tmp2;
		HX_STACK_LINE(180)
		value1;
	}
	HX_STACK_LINE(181)
	{
		HX_STACK_LINE(181)
		int tmp = (int(value) & int((int)255));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(181)
		Float value1 = tmp;		HX_STACK_VAR(value1,"value1");
		HX_STACK_LINE(181)
		Float tmp1 = (Float(value1) / Float((int)255));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(181)
		hx::__ArrayImplRef(this1,(int)14) = tmp1;
		HX_STACK_LINE(181)
		value1;
	}
	HX_STACK_LINE(183)
	{
		HX_STACK_LINE(183)
		hx::__ArrayImplRef(this1,(int)0) = (int)0;
		HX_STACK_LINE(183)
		(int)0;
	}
	HX_STACK_LINE(184)
	{
		HX_STACK_LINE(184)
		hx::__ArrayImplRef(this1,(int)6) = (int)0;
		HX_STACK_LINE(184)
		(int)0;
	}
	HX_STACK_LINE(185)
	{
		HX_STACK_LINE(185)
		hx::__ArrayImplRef(this1,(int)12) = (int)0;
		HX_STACK_LINE(185)
		(int)0;
	}
	HX_STACK_LINE(187)
	::lime::utils::Float32Array tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(187)
	int tmp1 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::get_color(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(187)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_color,return )

Float ColorMatrix_Impl__obj::get_greenMultiplier( ::lime::utils::Float32Array this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get_greenMultiplier",0x76158c95,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_greenMultiplier","lime/math/ColorMatrix.hx",192,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(194)
	Float tmp = this1->__get((int)6);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(194)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_greenMultiplier,return )

Float ColorMatrix_Impl__obj::set_greenMultiplier( ::lime::utils::Float32Array this1,Float value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set_greenMultiplier",0xb2b27fa1,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_greenMultiplier","lime/math/ColorMatrix.hx",199,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(201)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(201)
	hx::__ArrayImplRef(this1,(int)6) = tmp;
	HX_STACK_LINE(202)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(202)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_greenMultiplier,return )

Float ColorMatrix_Impl__obj::get_greenOffset( ::lime::utils::Float32Array this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get_greenOffset",0xe71722a7,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_greenOffset","lime/math/ColorMatrix.hx",207,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(209)
	Float tmp = this1->__get((int)9);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(209)
	Float tmp1 = (tmp * (int)255);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(209)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_greenOffset,return )

Float ColorMatrix_Impl__obj::set_greenOffset( ::lime::utils::Float32Array this1,Float value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set_greenOffset",0xe2e29fb3,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_greenOffset","lime/math/ColorMatrix.hx",214,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(216)
	Float tmp = (Float(value) / Float((int)255));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(216)
	hx::__ArrayImplRef(this1,(int)9) = tmp;
	HX_STACK_LINE(217)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(217)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_greenOffset,return )

Float ColorMatrix_Impl__obj::get_redMultiplier( ::lime::utils::Float32Array this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get_redMultiplier",0x58c9a663,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_redMultiplier","lime/math/ColorMatrix.hx",222,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(224)
	Float tmp = this1->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(224)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_redMultiplier,return )

Float ColorMatrix_Impl__obj::set_redMultiplier( ::lime::utils::Float32Array this1,Float value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set_redMultiplier",0x7c377e6f,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_redMultiplier","lime/math/ColorMatrix.hx",229,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(231)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(231)
	hx::__ArrayImplRef(this1,(int)0) = tmp;
	HX_STACK_LINE(232)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(232)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_redMultiplier,return )

Float ColorMatrix_Impl__obj::get_redOffset( ::lime::utils::Float32Array this1){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get_redOffset",0xd26abd75,"lime.math._ColorMatrix.ColorMatrix_Impl_.get_redOffset","lime/math/ColorMatrix.hx",237,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(239)
	Float tmp = this1->__get((int)4);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(239)
	Float tmp1 = (tmp * (int)255);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(239)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorMatrix_Impl__obj,get_redOffset,return )

Float ColorMatrix_Impl__obj::set_redOffset( ::lime::utils::Float32Array this1,Float value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set_redOffset",0x17709f81,"lime.math._ColorMatrix.ColorMatrix_Impl_.set_redOffset","lime/math/ColorMatrix.hx",244,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(246)
	Float tmp = (Float(value) / Float((int)255));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(246)
	hx::__ArrayImplRef(this1,(int)4) = tmp;
	HX_STACK_LINE(247)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(247)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,set_redOffset,return )

Float ColorMatrix_Impl__obj::get( ::lime::utils::Float32Array this1,int index){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","get",0xe0573df0,"lime.math._ColorMatrix.ColorMatrix_Impl_.get","lime/math/ColorMatrix.hx",252,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(254)
	Float tmp = this1->__get(index);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(254)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ColorMatrix_Impl__obj,get,return )

Float ColorMatrix_Impl__obj::set( ::lime::utils::Float32Array this1,int index,Float value){
	HX_STACK_FRAME("lime.math._ColorMatrix.ColorMatrix_Impl_","set",0xe06058fc,"lime.math._ColorMatrix.ColorMatrix_Impl_.set","lime/math/ColorMatrix.hx",259,0x337975c7)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(261)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(261)
	hx::__ArrayImplRef(this1,index) = tmp;
	HX_STACK_LINE(262)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(262)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ColorMatrix_Impl__obj,set,return )


ColorMatrix_Impl__obj::ColorMatrix_Impl__obj()
{
}

bool ColorMatrix_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { outValue = clone_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { outValue = concat_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { outValue = copyFrom_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"identity") ) { outValue = identity_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_color") ) { outValue = get_color_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_color") ) { outValue = set_color_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_redOffset") ) { outValue = get_redOffset_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_redOffset") ) { outValue = set_redOffset_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_blueOffset") ) { outValue = get_blueOffset_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_blueOffset") ) { outValue = set_blueOffset_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_alphaOffset") ) { outValue = get_alphaOffset_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_alphaOffset") ) { outValue = set_alphaOffset_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_greenOffset") ) { outValue = get_greenOffset_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_greenOffset") ) { outValue = set_greenOffset_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_redMultiplier") ) { outValue = get_redMultiplier_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_redMultiplier") ) { outValue = set_redMultiplier_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_blueMultiplier") ) { outValue = get_blueMultiplier_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_blueMultiplier") ) { outValue = set_blueMultiplier_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_alphaMultiplier") ) { outValue = get_alphaMultiplier_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_alphaMultiplier") ) { outValue = set_alphaMultiplier_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_greenMultiplier") ) { outValue = get_greenMultiplier_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_greenMultiplier") ) { outValue = set_greenMultiplier_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__toFlashColorTransform") ) { outValue = __toFlashColorTransform_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(void *) &ColorMatrix_Impl__obj::__identity,HX_HCSTRING("__identity","\x5e","\xb8","\x67","\x5c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorMatrix_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ColorMatrix_Impl__obj::__identity,"__identity");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorMatrix_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ColorMatrix_Impl__obj::__identity,"__identity");
};

#endif

hx::Class ColorMatrix_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__identity","\x5e","\xb8","\x67","\x5c"),
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("identity","\x3e","\x45","\x2f","\xb9"),
	HX_HCSTRING("__toFlashColorTransform","\x7e","\x99","\xc3","\xed"),
	HX_HCSTRING("get_alphaMultiplier","\x96","\x83","\x8d","\x25"),
	HX_HCSTRING("set_alphaMultiplier","\xa2","\x76","\x2a","\x62"),
	HX_HCSTRING("get_alphaOffset","\x28","\x45","\x25","\x91"),
	HX_HCSTRING("set_alphaOffset","\x34","\xc2","\xf0","\x8c"),
	HX_HCSTRING("get_blueMultiplier","\x84","\x13","\x30","\x6b"),
	HX_HCSTRING("set_blueMultiplier","\xf8","\x45","\xdf","\x47"),
	HX_HCSTRING("get_blueOffset","\x16","\xc6","\x29","\x31"),
	HX_HCSTRING("set_blueOffset","\x8a","\xae","\x49","\x51"),
	HX_HCSTRING("get_color","\xba","\xcd","\x05","\x8e"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("get_greenMultiplier","\x3b","\xfb","\x4a","\xfa"),
	HX_HCSTRING("set_greenMultiplier","\x47","\xee","\xe7","\x36"),
	HX_HCSTRING("get_greenOffset","\x4d","\xc6","\xba","\x78"),
	HX_HCSTRING("set_greenOffset","\x59","\x43","\x86","\x74"),
	HX_HCSTRING("get_redMultiplier","\x89","\xff","\x59","\x55"),
	HX_HCSTRING("set_redMultiplier","\x95","\xd7","\xc7","\x78"),
	HX_HCSTRING("get_redOffset","\x9b","\x0b","\x02","\x15"),
	HX_HCSTRING("set_redOffset","\xa7","\xed","\x07","\x5a"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

void ColorMatrix_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.math._ColorMatrix.ColorMatrix_Impl_","\xc8","\xe8","\xe8","\x0e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ColorMatrix_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ColorMatrix_Impl__obj >;
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

void ColorMatrix_Impl__obj::__boot()
{
	__identity= Array_obj< Float >::__new().Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0));
}

} // end namespace lime
} // end namespace math
} // end namespace _ColorMatrix

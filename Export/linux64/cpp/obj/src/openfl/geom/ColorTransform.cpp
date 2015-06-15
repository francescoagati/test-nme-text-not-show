#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
namespace openfl{
namespace geom{

Void ColorTransform_obj::__construct(hx::Null< Float >  __o_redMultiplier,hx::Null< Float >  __o_greenMultiplier,hx::Null< Float >  __o_blueMultiplier,hx::Null< Float >  __o_alphaMultiplier,hx::Null< Float >  __o_redOffset,hx::Null< Float >  __o_greenOffset,hx::Null< Float >  __o_blueOffset,hx::Null< Float >  __o_alphaOffset)
{
HX_STACK_FRAME("openfl.geom.ColorTransform","new",0x35d8b8af,"openfl.geom.ColorTransform.new","openfl/geom/ColorTransform.hx",142,0x850de941)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_redMultiplier,"redMultiplier")
HX_STACK_ARG(__o_greenMultiplier,"greenMultiplier")
HX_STACK_ARG(__o_blueMultiplier,"blueMultiplier")
HX_STACK_ARG(__o_alphaMultiplier,"alphaMultiplier")
HX_STACK_ARG(__o_redOffset,"redOffset")
HX_STACK_ARG(__o_greenOffset,"greenOffset")
HX_STACK_ARG(__o_blueOffset,"blueOffset")
HX_STACK_ARG(__o_alphaOffset,"alphaOffset")
Float redMultiplier = __o_redMultiplier.Default(1);
Float greenMultiplier = __o_greenMultiplier.Default(1);
Float blueMultiplier = __o_blueMultiplier.Default(1);
Float alphaMultiplier = __o_alphaMultiplier.Default(1);
Float redOffset = __o_redOffset.Default(0);
Float greenOffset = __o_greenOffset.Default(0);
Float blueOffset = __o_blueOffset.Default(0);
Float alphaOffset = __o_alphaOffset.Default(0);
{
	HX_STACK_LINE(144)
	this->redMultiplier = redMultiplier;
	HX_STACK_LINE(145)
	this->greenMultiplier = greenMultiplier;
	HX_STACK_LINE(146)
	this->blueMultiplier = blueMultiplier;
	HX_STACK_LINE(147)
	this->alphaMultiplier = alphaMultiplier;
	HX_STACK_LINE(148)
	this->redOffset = redOffset;
	HX_STACK_LINE(149)
	this->greenOffset = greenOffset;
	HX_STACK_LINE(150)
	this->blueOffset = blueOffset;
	HX_STACK_LINE(151)
	this->alphaOffset = alphaOffset;
}
;
	return null();
}

//ColorTransform_obj::~ColorTransform_obj() { }

Dynamic ColorTransform_obj::__CreateEmpty() { return  new ColorTransform_obj; }
hx::ObjectPtr< ColorTransform_obj > ColorTransform_obj::__new(hx::Null< Float >  __o_redMultiplier,hx::Null< Float >  __o_greenMultiplier,hx::Null< Float >  __o_blueMultiplier,hx::Null< Float >  __o_alphaMultiplier,hx::Null< Float >  __o_redOffset,hx::Null< Float >  __o_greenOffset,hx::Null< Float >  __o_blueOffset,hx::Null< Float >  __o_alphaOffset)
{  hx::ObjectPtr< ColorTransform_obj > _result_ = new ColorTransform_obj();
	_result_->__construct(__o_redMultiplier,__o_greenMultiplier,__o_blueMultiplier,__o_alphaMultiplier,__o_redOffset,__o_greenOffset,__o_blueOffset,__o_alphaOffset);
	return _result_;}

Dynamic ColorTransform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColorTransform_obj > _result_ = new ColorTransform_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _result_;}

Void ColorTransform_obj::concat( ::openfl::geom::ColorTransform second){
{
		HX_STACK_FRAME("openfl.geom.ColorTransform","concat",0x6a83fc25,"openfl.geom.ColorTransform.concat","openfl/geom/ColorTransform.hx",167,0x850de941)
		HX_STACK_THIS(this)
		HX_STACK_ARG(second,"second")
		HX_STACK_LINE(169)
		hx::AddEq(this->redMultiplier,second->redMultiplier);
		HX_STACK_LINE(170)
		hx::AddEq(this->greenMultiplier,second->greenMultiplier);
		HX_STACK_LINE(171)
		hx::AddEq(this->blueMultiplier,second->blueMultiplier);
		HX_STACK_LINE(172)
		hx::AddEq(this->alphaMultiplier,second->alphaMultiplier);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,concat,(void))

Void ColorTransform_obj::__combine( ::openfl::geom::ColorTransform ct){
{
		HX_STACK_FRAME("openfl.geom.ColorTransform","__combine",0x74bf08ee,"openfl.geom.ColorTransform.__combine","openfl/geom/ColorTransform.hx",177,0x850de941)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ct,"ct")
		HX_STACK_LINE(178)
		hx::MultEq(this->redMultiplier,ct->redMultiplier);
		HX_STACK_LINE(179)
		hx::MultEq(this->greenMultiplier,ct->greenMultiplier);
		HX_STACK_LINE(180)
		hx::MultEq(this->blueMultiplier,ct->blueMultiplier);
		HX_STACK_LINE(181)
		hx::MultEq(this->alphaMultiplier,ct->alphaMultiplier);
		HX_STACK_LINE(183)
		hx::AddEq(this->redOffset,ct->redOffset);
		HX_STACK_LINE(184)
		hx::AddEq(this->greenOffset,ct->greenOffset);
		HX_STACK_LINE(185)
		hx::AddEq(this->blueOffset,ct->blueOffset);
		HX_STACK_LINE(186)
		hx::AddEq(this->alphaOffset,ct->alphaOffset);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,__combine,(void))

bool ColorTransform_obj::__equals( ::openfl::geom::ColorTransform ct,Dynamic __o_skipAlphaMultiplier){
Dynamic skipAlphaMultiplier = __o_skipAlphaMultiplier.Default(false);
	HX_STACK_FRAME("openfl.geom.ColorTransform","__equals",0x1605f2b0,"openfl.geom.ColorTransform.__equals","openfl/geom/ColorTransform.hx",191,0x850de941)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ct,"ct")
	HX_STACK_ARG(skipAlphaMultiplier,"skipAlphaMultiplier")
{
		HX_STACK_LINE(192)
		bool tmp = (ct != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(192)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(192)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(192)
		if ((tmp1)){
			HX_STACK_LINE(193)
			Float tmp3 = this->redMultiplier;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(193)
			Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(193)
			Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(193)
			Float tmp6 = ct->redMultiplier;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(193)
			tmp2 = (tmp5 == tmp6);
		}
		else{
			HX_STACK_LINE(192)
			tmp2 = false;
		}
		HX_STACK_LINE(192)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(192)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(192)
		if ((tmp3)){
			HX_STACK_LINE(194)
			Float tmp5 = this->greenMultiplier;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(194)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(194)
			Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(194)
			Float tmp8 = ct->greenMultiplier;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(194)
			tmp4 = (tmp7 == tmp8);
		}
		else{
			HX_STACK_LINE(192)
			tmp4 = false;
		}
		HX_STACK_LINE(192)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(192)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(192)
		if ((tmp5)){
			HX_STACK_LINE(195)
			Float tmp7 = this->blueMultiplier;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(195)
			Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(195)
			Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(195)
			Float tmp10 = ct->blueMultiplier;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(195)
			tmp6 = (tmp9 == tmp10);
		}
		else{
			HX_STACK_LINE(192)
			tmp6 = false;
		}
		HX_STACK_LINE(192)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(192)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(192)
		if ((tmp7)){
			HX_STACK_LINE(196)
			Dynamic tmp9 = skipAlphaMultiplier;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(196)
			Dynamic tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(196)
			Dynamic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(196)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(196)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(196)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(196)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(196)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(196)
			if ((tmp16)){
				HX_STACK_LINE(196)
				Float tmp17 = this->alphaMultiplier;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(196)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(196)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(196)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(196)
				Float tmp21 = ct->alphaMultiplier;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(196)
				tmp8 = (tmp20 == tmp21);
			}
			else{
				HX_STACK_LINE(196)
				tmp8 = true;
			}
		}
		else{
			HX_STACK_LINE(192)
			tmp8 = false;
		}
		HX_STACK_LINE(192)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(192)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(192)
		if ((tmp9)){
			HX_STACK_LINE(198)
			Float tmp11 = this->redOffset;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(198)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(198)
			Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(198)
			Float tmp14 = ct->redOffset;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(198)
			tmp10 = (tmp13 == tmp14);
		}
		else{
			HX_STACK_LINE(192)
			tmp10 = false;
		}
		HX_STACK_LINE(192)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(192)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(192)
		if ((tmp11)){
			HX_STACK_LINE(199)
			Float tmp13 = this->greenOffset;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(199)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(199)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(199)
			Float tmp16 = ct->greenOffset;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(199)
			tmp12 = (tmp15 == tmp16);
		}
		else{
			HX_STACK_LINE(192)
			tmp12 = false;
		}
		HX_STACK_LINE(192)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(192)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(192)
		if ((tmp13)){
			HX_STACK_LINE(200)
			Float tmp15 = this->blueOffset;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(200)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(200)
			Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(200)
			Float tmp18 = ct->blueOffset;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(200)
			tmp14 = (tmp17 == tmp18);
		}
		else{
			HX_STACK_LINE(192)
			tmp14 = false;
		}
		HX_STACK_LINE(192)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(192)
		if ((tmp14)){
			HX_STACK_LINE(201)
			Float tmp16 = this->alphaOffset;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(201)
			Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(201)
			Float tmp18 = ct->alphaOffset;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(201)
			tmp15 = (tmp17 == tmp18);
		}
		else{
			HX_STACK_LINE(192)
			tmp15 = false;
		}
		HX_STACK_LINE(192)
		return tmp15;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(ColorTransform_obj,__equals,return )

::openfl::geom::ColorTransform ColorTransform_obj::__clone( ){
	HX_STACK_FRAME("openfl.geom.ColorTransform","__clone",0x6d82280c,"openfl.geom.ColorTransform.__clone","openfl/geom/ColorTransform.hx",206,0x850de941)
	HX_STACK_THIS(this)
	HX_STACK_LINE(207)
	Float tmp = this->redMultiplier;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(207)
	Float tmp1 = this->greenMultiplier;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(207)
	Float tmp2 = this->blueMultiplier;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(207)
	Float tmp3 = this->alphaMultiplier;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(207)
	Float tmp4 = this->redOffset;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(207)
	Float tmp5 = this->greenOffset;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(207)
	Float tmp6 = this->blueOffset;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(207)
	Float tmp7 = this->alphaOffset;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(207)
	::openfl::geom::ColorTransform tmp8 = ::openfl::geom::ColorTransform_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(207)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,__clone,return )

int ColorTransform_obj::get_color( ){
	HX_STACK_FRAME("openfl.geom.ColorTransform","get_color",0x07485b49,"openfl.geom.ColorTransform.get_color","openfl/geom/ColorTransform.hx",216,0x850de941)
	HX_STACK_THIS(this)
	HX_STACK_LINE(218)
	Float tmp = this->redOffset;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(218)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(218)
	int tmp2 = (int(tmp1) << int((int)16));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(218)
	Float tmp3 = this->greenOffset;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(218)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(218)
	int tmp5 = (int(tmp4) << int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(218)
	int tmp6 = (int(tmp2) | int(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(218)
	Float tmp7 = this->blueOffset;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(218)
	int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(218)
	int tmp9 = (int(tmp6) | int(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(218)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,get_color,return )

int ColorTransform_obj::set_color( int value){
	HX_STACK_FRAME("openfl.geom.ColorTransform","set_color",0xea994755,"openfl.geom.ColorTransform.set_color","openfl/geom/ColorTransform.hx",223,0x850de941)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(225)
	int tmp = (int(value) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(225)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(225)
	this->redOffset = tmp1;
	HX_STACK_LINE(226)
	int tmp2 = (int(value) >> int((int)8));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(226)
	int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(226)
	this->greenOffset = tmp3;
	HX_STACK_LINE(227)
	int tmp4 = (int(value) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(227)
	this->blueOffset = tmp4;
	HX_STACK_LINE(229)
	this->redMultiplier = (int)0;
	HX_STACK_LINE(230)
	this->greenMultiplier = (int)0;
	HX_STACK_LINE(231)
	this->blueMultiplier = (int)0;
	HX_STACK_LINE(233)
	int tmp5 = this->get_color();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(233)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,set_color,return )

::lime::utils::Float32Array ColorTransform_obj::__toLimeColorMatrix( ){
	HX_STACK_FRAME("openfl.geom.ColorTransform","__toLimeColorMatrix",0x55c98ae3,"openfl.geom.ColorTransform.__toLimeColorMatrix","openfl/geom/ColorTransform.hx",238,0x850de941)
	HX_STACK_THIS(this)
	HX_STACK_LINE(240)
	Float tmp = this->redMultiplier;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(240)
	Float tmp1 = this->redOffset;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(240)
	Float tmp2 = (Float(tmp1) / Float((int)255));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(240)
	Float tmp3 = this->greenMultiplier;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(240)
	Float tmp4 = this->greenOffset;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(240)
	Float tmp5 = (Float(tmp4) / Float((int)255));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(240)
	Float tmp6 = this->blueMultiplier;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(240)
	Float tmp7 = this->blueOffset;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(240)
	Float tmp8 = (Float(tmp7) / Float((int)255));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(240)
	Float tmp9 = this->alphaMultiplier;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(240)
	Float tmp10 = this->alphaOffset;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(240)
	Float tmp11 = (Float(tmp10) / Float((int)255));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(240)
	::lime::utils::Float32Array tmp12 = ::lime::utils::Float32Array_obj::__new(Array_obj< Float >::__new().Add(tmp).Add((int)0).Add((int)0).Add((int)0).Add(tmp2).Add((int)0).Add(tmp3).Add((int)0).Add((int)0).Add(tmp5).Add((int)0).Add((int)0).Add(tmp6).Add((int)0).Add(tmp8).Add((int)0).Add((int)0).Add((int)0).Add(tmp9).Add(tmp11),null(),null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(240)
	::lime::utils::Float32Array tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(240)
	return tmp13;
}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,__toLimeColorMatrix,return )


ColorTransform_obj::ColorTransform_obj()
{
}

Dynamic ColorTransform_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return get_color(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { return concat_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__clone") ) { return __clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__equals") ) { return __equals_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"redOffset") ) { return redOffset; }
		if (HX_FIELD_EQ(inName,"__combine") ) { return __combine_dyn(); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blueOffset") ) { return blueOffset; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"alphaOffset") ) { return alphaOffset; }
		if (HX_FIELD_EQ(inName,"greenOffset") ) { return greenOffset; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"redMultiplier") ) { return redMultiplier; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"blueMultiplier") ) { return blueMultiplier; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"alphaMultiplier") ) { return alphaMultiplier; }
		if (HX_FIELD_EQ(inName,"greenMultiplier") ) { return greenMultiplier; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__toLimeColorMatrix") ) { return __toLimeColorMatrix_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ColorTransform_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return set_color(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"redOffset") ) { redOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blueOffset") ) { blueOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"alphaOffset") ) { alphaOffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"greenOffset") ) { greenOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"redMultiplier") ) { redMultiplier=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"blueMultiplier") ) { blueMultiplier=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"alphaMultiplier") ) { alphaMultiplier=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"greenMultiplier") ) { greenMultiplier=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ColorTransform_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ColorTransform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("alphaMultiplier","\x7f","\xb4","\x82","\x9a"));
	outFields->push(HX_HCSTRING("alphaOffset","\x91","\x8d","\x43","\xd0"));
	outFields->push(HX_HCSTRING("blueMultiplier","\xbb","\x32","\x96","\xcf"));
	outFields->push(HX_HCSTRING("blueOffset","\xcd","\x3d","\x34","\xbb"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("greenMultiplier","\x24","\x2c","\x40","\x6f"));
	outFields->push(HX_HCSTRING("greenOffset","\xb6","\x0e","\xd9","\xb7"));
	outFields->push(HX_HCSTRING("redMultiplier","\x32","\xf4","\xe9","\x4e"));
	outFields->push(HX_HCSTRING("redOffset","\xc4","\x37","\x9e","\x53"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,alphaMultiplier),HX_HCSTRING("alphaMultiplier","\x7f","\xb4","\x82","\x9a")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,alphaOffset),HX_HCSTRING("alphaOffset","\x91","\x8d","\x43","\xd0")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,blueMultiplier),HX_HCSTRING("blueMultiplier","\xbb","\x32","\x96","\xcf")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,blueOffset),HX_HCSTRING("blueOffset","\xcd","\x3d","\x34","\xbb")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,greenMultiplier),HX_HCSTRING("greenMultiplier","\x24","\x2c","\x40","\x6f")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,greenOffset),HX_HCSTRING("greenOffset","\xb6","\x0e","\xd9","\xb7")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,redMultiplier),HX_HCSTRING("redMultiplier","\x32","\xf4","\xe9","\x4e")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,redOffset),HX_HCSTRING("redOffset","\xc4","\x37","\x9e","\x53")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("alphaMultiplier","\x7f","\xb4","\x82","\x9a"),
	HX_HCSTRING("alphaOffset","\x91","\x8d","\x43","\xd0"),
	HX_HCSTRING("blueMultiplier","\xbb","\x32","\x96","\xcf"),
	HX_HCSTRING("blueOffset","\xcd","\x3d","\x34","\xbb"),
	HX_HCSTRING("greenMultiplier","\x24","\x2c","\x40","\x6f"),
	HX_HCSTRING("greenOffset","\xb6","\x0e","\xd9","\xb7"),
	HX_HCSTRING("redMultiplier","\x32","\xf4","\xe9","\x4e"),
	HX_HCSTRING("redOffset","\xc4","\x37","\x9e","\x53"),
	HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"),
	HX_HCSTRING("__combine","\x5f","\x7b","\x7c","\xfb"),
	HX_HCSTRING("__equals","\x5f","\x59","\x22","\x68"),
	HX_HCSTRING("__clone","\x3d","\x6c","\xc1","\xb2"),
	HX_HCSTRING("get_color","\xba","\xcd","\x05","\x8e"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("__toLimeColorMatrix","\x94","\xd4","\xb6","\x78"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorTransform_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorTransform_obj::__mClass,"__mClass");
};

#endif

hx::Class ColorTransform_obj::__mClass;

void ColorTransform_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.geom.ColorTransform","\x3d","\x35","\x6d","\x80");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ColorTransform_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ColorTransform_obj >;
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
} // end namespace geom

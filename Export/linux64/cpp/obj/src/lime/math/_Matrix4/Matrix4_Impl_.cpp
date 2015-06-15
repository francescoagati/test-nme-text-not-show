#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_math_Vector4
#include <lime/math/Vector4.h>
#endif
#ifndef INCLUDED_lime_math__Matrix4_Matrix4_Impl_
#include <lime/math/_Matrix4/Matrix4_Impl_.h>
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
namespace _Matrix4{

Void Matrix4_Impl__obj::__construct()
{
	return null();
}

//Matrix4_Impl__obj::~Matrix4_Impl__obj() { }

Dynamic Matrix4_Impl__obj::__CreateEmpty() { return  new Matrix4_Impl__obj; }
hx::ObjectPtr< Matrix4_Impl__obj > Matrix4_Impl__obj::__new()
{  hx::ObjectPtr< Matrix4_Impl__obj > _result_ = new Matrix4_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Matrix4_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Matrix4_Impl__obj > _result_ = new Matrix4_Impl__obj();
	_result_->__construct();
	return _result_;}

Array< Float > Matrix4_Impl__obj::__identity;

::lime::utils::Float32Array Matrix4_Impl__obj::_new( ::lime::utils::Float32Array data){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","_new",0x84b003e9,"lime.math._Matrix4.Matrix4_Impl_._new","lime/math/Matrix4.hx",16,0xeb65dbd8)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(16)
	::lime::utils::Float32Array this1;		HX_STACK_VAR(this1,"this1");
	HX_STACK_LINE(18)
	bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(18)
	if ((tmp)){
		HX_STACK_LINE(18)
		tmp1 = (data->length == (int)16);
	}
	else{
		HX_STACK_LINE(18)
		tmp1 = false;
	}
	HX_STACK_LINE(18)
	if ((tmp1)){
		HX_STACK_LINE(20)
		this1 = data;
	}
	else{
		HX_STACK_LINE(24)
		::lime::utils::Float32Array tmp2 = ::lime::utils::Float32Array_obj::__new(::lime::math::_Matrix4::Matrix4_Impl__obj::__identity,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(24)
		this1 = tmp2;
	}
	HX_STACK_LINE(16)
	::lime::utils::Float32Array tmp2 = this1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(16)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,_new,return )

Void Matrix4_Impl__obj::append( ::lime::utils::Float32Array this1,::lime::utils::Float32Array lhs){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","append",0x0e638262,"lime.math._Matrix4.Matrix4_Impl_.append","lime/math/Matrix4.hx",31,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(lhs,"lhs")
		HX_STACK_LINE(33)
		Float tmp = this1->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		Float m111 = tmp;		HX_STACK_VAR(m111,"m111");
		HX_STACK_LINE(33)
		Float tmp1 = this1->__get((int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		Float m121 = tmp1;		HX_STACK_VAR(m121,"m121");
		HX_STACK_LINE(33)
		Float tmp2 = this1->__get((int)8);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		Float m131 = tmp2;		HX_STACK_VAR(m131,"m131");
		HX_STACK_LINE(33)
		Float tmp3 = this1->__get((int)12);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(33)
		Float m141 = tmp3;		HX_STACK_VAR(m141,"m141");
		HX_STACK_LINE(34)
		Float tmp4 = this1->__get((int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(34)
		Float m112 = tmp4;		HX_STACK_VAR(m112,"m112");
		HX_STACK_LINE(34)
		Float tmp5 = this1->__get((int)5);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(34)
		Float m122 = tmp5;		HX_STACK_VAR(m122,"m122");
		HX_STACK_LINE(34)
		Float tmp6 = this1->__get((int)9);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(34)
		Float m132 = tmp6;		HX_STACK_VAR(m132,"m132");
		HX_STACK_LINE(34)
		Float tmp7 = this1->__get((int)13);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(34)
		Float m142 = tmp7;		HX_STACK_VAR(m142,"m142");
		HX_STACK_LINE(35)
		Float tmp8 = this1->__get((int)2);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(35)
		Float m113 = tmp8;		HX_STACK_VAR(m113,"m113");
		HX_STACK_LINE(35)
		Float tmp9 = this1->__get((int)6);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(35)
		Float m123 = tmp9;		HX_STACK_VAR(m123,"m123");
		HX_STACK_LINE(35)
		Float tmp10 = this1->__get((int)10);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(35)
		Float m133 = tmp10;		HX_STACK_VAR(m133,"m133");
		HX_STACK_LINE(35)
		Float tmp11 = this1->__get((int)14);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(35)
		Float m143 = tmp11;		HX_STACK_VAR(m143,"m143");
		HX_STACK_LINE(36)
		Float tmp12 = this1->__get((int)3);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(36)
		Float m114 = tmp12;		HX_STACK_VAR(m114,"m114");
		HX_STACK_LINE(36)
		Float tmp13 = this1->__get((int)7);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(36)
		Float m124 = tmp13;		HX_STACK_VAR(m124,"m124");
		HX_STACK_LINE(36)
		Float tmp14 = this1->__get((int)11);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(36)
		Float m134 = tmp14;		HX_STACK_VAR(m134,"m134");
		HX_STACK_LINE(36)
		Float tmp15 = this1->__get((int)15);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(36)
		Float m144 = tmp15;		HX_STACK_VAR(m144,"m144");
		HX_STACK_LINE(37)
		::lime::utils::Float32Array tmp16 = lhs;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(37)
		Float tmp17 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp16,(int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(37)
		Float m211 = tmp17;		HX_STACK_VAR(m211,"m211");
		HX_STACK_LINE(37)
		::lime::utils::Float32Array tmp18 = lhs;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(37)
		Float tmp19 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp18,(int)4);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(37)
		Float m221 = tmp19;		HX_STACK_VAR(m221,"m221");
		HX_STACK_LINE(37)
		::lime::utils::Float32Array tmp20 = lhs;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(37)
		Float tmp21 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp20,(int)8);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(37)
		Float m231 = tmp21;		HX_STACK_VAR(m231,"m231");
		HX_STACK_LINE(37)
		::lime::utils::Float32Array tmp22 = lhs;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(37)
		Float tmp23 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp22,(int)12);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(37)
		Float m241 = tmp23;		HX_STACK_VAR(m241,"m241");
		HX_STACK_LINE(38)
		::lime::utils::Float32Array tmp24 = lhs;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(38)
		Float tmp25 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp24,(int)1);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(38)
		Float m212 = tmp25;		HX_STACK_VAR(m212,"m212");
		HX_STACK_LINE(38)
		::lime::utils::Float32Array tmp26 = lhs;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(38)
		Float tmp27 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp26,(int)5);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(38)
		Float m222 = tmp27;		HX_STACK_VAR(m222,"m222");
		HX_STACK_LINE(38)
		::lime::utils::Float32Array tmp28 = lhs;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(38)
		Float tmp29 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp28,(int)9);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(38)
		Float m232 = tmp29;		HX_STACK_VAR(m232,"m232");
		HX_STACK_LINE(38)
		::lime::utils::Float32Array tmp30 = lhs;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(38)
		Float tmp31 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp30,(int)13);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(38)
		Float m242 = tmp31;		HX_STACK_VAR(m242,"m242");
		HX_STACK_LINE(39)
		::lime::utils::Float32Array tmp32 = lhs;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(39)
		Float tmp33 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp32,(int)2);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(39)
		Float m213 = tmp33;		HX_STACK_VAR(m213,"m213");
		HX_STACK_LINE(39)
		::lime::utils::Float32Array tmp34 = lhs;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(39)
		Float tmp35 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp34,(int)6);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(39)
		Float m223 = tmp35;		HX_STACK_VAR(m223,"m223");
		HX_STACK_LINE(39)
		::lime::utils::Float32Array tmp36 = lhs;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(39)
		Float tmp37 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp36,(int)10);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(39)
		Float m233 = tmp37;		HX_STACK_VAR(m233,"m233");
		HX_STACK_LINE(39)
		::lime::utils::Float32Array tmp38 = lhs;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(39)
		Float tmp39 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp38,(int)14);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(39)
		Float m243 = tmp39;		HX_STACK_VAR(m243,"m243");
		HX_STACK_LINE(40)
		::lime::utils::Float32Array tmp40 = lhs;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(40)
		Float tmp41 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp40,(int)3);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(40)
		Float m214 = tmp41;		HX_STACK_VAR(m214,"m214");
		HX_STACK_LINE(40)
		::lime::utils::Float32Array tmp42 = lhs;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(40)
		Float tmp43 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp42,(int)7);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(40)
		Float m224 = tmp43;		HX_STACK_VAR(m224,"m224");
		HX_STACK_LINE(40)
		::lime::utils::Float32Array tmp44 = lhs;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(40)
		Float tmp45 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp44,(int)11);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(40)
		Float m234 = tmp45;		HX_STACK_VAR(m234,"m234");
		HX_STACK_LINE(40)
		::lime::utils::Float32Array tmp46 = lhs;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(40)
		Float tmp47 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp46,(int)15);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(40)
		Float m244 = tmp47;		HX_STACK_VAR(m244,"m244");
		HX_STACK_LINE(42)
		Float tmp48 = (m111 * m211);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(42)
		Float tmp49 = (m112 * m221);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(42)
		Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(42)
		Float tmp51 = (m113 * m231);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(42)
		Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(42)
		Float tmp53 = (m114 * m241);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(42)
		Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(42)
		hx::__ArrayImplRef(this1,(int)0) = tmp54;
		HX_STACK_LINE(43)
		Float tmp55 = (m111 * m212);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(43)
		Float tmp56 = (m112 * m222);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(43)
		Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(43)
		Float tmp58 = (m113 * m232);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(43)
		Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(43)
		Float tmp60 = (m114 * m242);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(43)
		Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(43)
		hx::__ArrayImplRef(this1,(int)1) = tmp61;
		HX_STACK_LINE(44)
		Float tmp62 = (m111 * m213);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(44)
		Float tmp63 = (m112 * m223);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(44)
		Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(44)
		Float tmp65 = (m113 * m233);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(44)
		Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(44)
		Float tmp67 = (m114 * m243);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(44)
		Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(44)
		hx::__ArrayImplRef(this1,(int)2) = tmp68;
		HX_STACK_LINE(45)
		Float tmp69 = (m111 * m214);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(45)
		Float tmp70 = (m112 * m224);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(45)
		Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(45)
		Float tmp72 = (m113 * m234);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(45)
		Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(45)
		Float tmp74 = (m114 * m244);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(45)
		Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(45)
		hx::__ArrayImplRef(this1,(int)3) = tmp75;
		HX_STACK_LINE(47)
		Float tmp76 = (m121 * m211);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(47)
		Float tmp77 = (m122 * m221);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(47)
		Float tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(47)
		Float tmp79 = (m123 * m231);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(47)
		Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(47)
		Float tmp81 = (m124 * m241);		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(47)
		Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(47)
		hx::__ArrayImplRef(this1,(int)4) = tmp82;
		HX_STACK_LINE(48)
		Float tmp83 = (m121 * m212);		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(48)
		Float tmp84 = (m122 * m222);		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(48)
		Float tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(48)
		Float tmp86 = (m123 * m232);		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(48)
		Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(48)
		Float tmp88 = (m124 * m242);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(48)
		Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(48)
		hx::__ArrayImplRef(this1,(int)5) = tmp89;
		HX_STACK_LINE(49)
		Float tmp90 = (m121 * m213);		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(49)
		Float tmp91 = (m122 * m223);		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(49)
		Float tmp92 = (tmp90 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(49)
		Float tmp93 = (m123 * m233);		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(49)
		Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(49)
		Float tmp95 = (m124 * m243);		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(49)
		Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(49)
		hx::__ArrayImplRef(this1,(int)6) = tmp96;
		HX_STACK_LINE(50)
		Float tmp97 = (m121 * m214);		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(50)
		Float tmp98 = (m122 * m224);		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(50)
		Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(50)
		Float tmp100 = (m123 * m234);		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(50)
		Float tmp101 = (tmp99 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(50)
		Float tmp102 = (m124 * m244);		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(50)
		Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(50)
		hx::__ArrayImplRef(this1,(int)7) = tmp103;
		HX_STACK_LINE(52)
		Float tmp104 = (m131 * m211);		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(52)
		Float tmp105 = (m132 * m221);		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(52)
		Float tmp106 = (tmp104 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(52)
		Float tmp107 = (m133 * m231);		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(52)
		Float tmp108 = (tmp106 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(52)
		Float tmp109 = (m134 * m241);		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(52)
		Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(52)
		hx::__ArrayImplRef(this1,(int)8) = tmp110;
		HX_STACK_LINE(53)
		Float tmp111 = (m131 * m212);		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(53)
		Float tmp112 = (m132 * m222);		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(53)
		Float tmp113 = (tmp111 + tmp112);		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(53)
		Float tmp114 = (m133 * m232);		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(53)
		Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(53)
		Float tmp116 = (m134 * m242);		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(53)
		Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(53)
		hx::__ArrayImplRef(this1,(int)9) = tmp117;
		HX_STACK_LINE(54)
		Float tmp118 = (m131 * m213);		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(54)
		Float tmp119 = (m132 * m223);		HX_STACK_VAR(tmp119,"tmp119");
		HX_STACK_LINE(54)
		Float tmp120 = (tmp118 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
		HX_STACK_LINE(54)
		Float tmp121 = (m133 * m233);		HX_STACK_VAR(tmp121,"tmp121");
		HX_STACK_LINE(54)
		Float tmp122 = (tmp120 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
		HX_STACK_LINE(54)
		Float tmp123 = (m134 * m243);		HX_STACK_VAR(tmp123,"tmp123");
		HX_STACK_LINE(54)
		Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
		HX_STACK_LINE(54)
		hx::__ArrayImplRef(this1,(int)10) = tmp124;
		HX_STACK_LINE(55)
		Float tmp125 = (m131 * m214);		HX_STACK_VAR(tmp125,"tmp125");
		HX_STACK_LINE(55)
		Float tmp126 = (m132 * m224);		HX_STACK_VAR(tmp126,"tmp126");
		HX_STACK_LINE(55)
		Float tmp127 = (tmp125 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
		HX_STACK_LINE(55)
		Float tmp128 = (m133 * m234);		HX_STACK_VAR(tmp128,"tmp128");
		HX_STACK_LINE(55)
		Float tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
		HX_STACK_LINE(55)
		Float tmp130 = (m134 * m244);		HX_STACK_VAR(tmp130,"tmp130");
		HX_STACK_LINE(55)
		Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
		HX_STACK_LINE(55)
		hx::__ArrayImplRef(this1,(int)11) = tmp131;
		HX_STACK_LINE(57)
		Float tmp132 = (m141 * m211);		HX_STACK_VAR(tmp132,"tmp132");
		HX_STACK_LINE(57)
		Float tmp133 = (m142 * m221);		HX_STACK_VAR(tmp133,"tmp133");
		HX_STACK_LINE(57)
		Float tmp134 = (tmp132 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
		HX_STACK_LINE(57)
		Float tmp135 = (m143 * m231);		HX_STACK_VAR(tmp135,"tmp135");
		HX_STACK_LINE(57)
		Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
		HX_STACK_LINE(57)
		Float tmp137 = (m144 * m241);		HX_STACK_VAR(tmp137,"tmp137");
		HX_STACK_LINE(57)
		Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
		HX_STACK_LINE(57)
		hx::__ArrayImplRef(this1,(int)12) = tmp138;
		HX_STACK_LINE(58)
		Float tmp139 = (m141 * m212);		HX_STACK_VAR(tmp139,"tmp139");
		HX_STACK_LINE(58)
		Float tmp140 = (m142 * m222);		HX_STACK_VAR(tmp140,"tmp140");
		HX_STACK_LINE(58)
		Float tmp141 = (tmp139 + tmp140);		HX_STACK_VAR(tmp141,"tmp141");
		HX_STACK_LINE(58)
		Float tmp142 = (m143 * m232);		HX_STACK_VAR(tmp142,"tmp142");
		HX_STACK_LINE(58)
		Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
		HX_STACK_LINE(58)
		Float tmp144 = (m144 * m242);		HX_STACK_VAR(tmp144,"tmp144");
		HX_STACK_LINE(58)
		Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
		HX_STACK_LINE(58)
		hx::__ArrayImplRef(this1,(int)13) = tmp145;
		HX_STACK_LINE(59)
		Float tmp146 = (m141 * m213);		HX_STACK_VAR(tmp146,"tmp146");
		HX_STACK_LINE(59)
		Float tmp147 = (m142 * m223);		HX_STACK_VAR(tmp147,"tmp147");
		HX_STACK_LINE(59)
		Float tmp148 = (tmp146 + tmp147);		HX_STACK_VAR(tmp148,"tmp148");
		HX_STACK_LINE(59)
		Float tmp149 = (m143 * m233);		HX_STACK_VAR(tmp149,"tmp149");
		HX_STACK_LINE(59)
		Float tmp150 = (tmp148 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
		HX_STACK_LINE(59)
		Float tmp151 = (m144 * m243);		HX_STACK_VAR(tmp151,"tmp151");
		HX_STACK_LINE(59)
		Float tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
		HX_STACK_LINE(59)
		hx::__ArrayImplRef(this1,(int)14) = tmp152;
		HX_STACK_LINE(60)
		Float tmp153 = (m141 * m214);		HX_STACK_VAR(tmp153,"tmp153");
		HX_STACK_LINE(60)
		Float tmp154 = (m142 * m224);		HX_STACK_VAR(tmp154,"tmp154");
		HX_STACK_LINE(60)
		Float tmp155 = (tmp153 + tmp154);		HX_STACK_VAR(tmp155,"tmp155");
		HX_STACK_LINE(60)
		Float tmp156 = (m143 * m234);		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(60)
		Float tmp157 = (tmp155 + tmp156);		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(60)
		Float tmp158 = (m144 * m244);		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(60)
		Float tmp159 = (tmp157 + tmp158);		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(60)
		hx::__ArrayImplRef(this1,(int)15) = tmp159;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,append,(void))

Void Matrix4_Impl__obj::appendRotation( ::lime::utils::Float32Array this1,Float degrees,::lime::math::Vector4 axis,::lime::math::Vector4 pivotPoint){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","appendRotation",0xe357adc0,"lime.math._Matrix4.Matrix4_Impl_.appendRotation","lime/math/Matrix4.hx",65,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(degrees,"degrees")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(pivotPoint,"pivotPoint")
		HX_STACK_LINE(67)
		Float tmp = axis->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		Float tmp1 = axis->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(67)
		Float tmp2 = axis->z;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(67)
		Float tmp3 = degrees;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(67)
		::lime::utils::Float32Array tmp4 = ::lime::math::_Matrix4::Matrix4_Impl__obj::getAxisRotation(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(67)
		::lime::utils::Float32Array m = tmp4;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(69)
		bool tmp5 = (pivotPoint != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(69)
		if ((tmp5)){
			HX_STACK_LINE(71)
			::lime::math::Vector4 p = pivotPoint;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(72)
			::lime::utils::Float32Array tmp6 = m;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(72)
			Float tmp7 = p->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(72)
			Float tmp8 = p->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(72)
			Float tmp9 = p->z;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(72)
			::lime::math::_Matrix4::Matrix4_Impl__obj::appendTranslation(tmp6,tmp7,tmp8,tmp9);
		}
		HX_STACK_LINE(76)
		::lime::utils::Float32Array tmp6 = this1;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(76)
		::lime::utils::Float32Array tmp7 = m;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(76)
		::lime::math::_Matrix4::Matrix4_Impl__obj::append(tmp6,tmp7);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,appendRotation,(void))

Void Matrix4_Impl__obj::appendScale( ::lime::utils::Float32Array this1,Float xScale,Float yScale,Float zScale){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","appendScale",0x8a9ad8c8,"lime.math._Matrix4.Matrix4_Impl_.appendScale","lime/math/Matrix4.hx",81,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(xScale,"xScale")
		HX_STACK_ARG(yScale,"yScale")
		HX_STACK_ARG(zScale,"zScale")
		HX_STACK_LINE(83)
		::lime::utils::Float32Array tmp = this1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		::lime::utils::Float32Array tmp1 = ::lime::utils::Float32Array_obj::__new(Array_obj< Float >::__new().Add(xScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(yScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(zScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		::lime::utils::Float32Array tmp2 = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(83)
		::lime::math::_Matrix4::Matrix4_Impl__obj::append(tmp,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,appendScale,(void))

Void Matrix4_Impl__obj::appendTranslation( ::lime::utils::Float32Array this1,Float x,Float y,Float z){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","appendTranslation",0xe6447daf,"lime.math._Matrix4.Matrix4_Impl_.appendTranslation","lime/math/Matrix4.hx",88,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(90)
		Float tmp = this1->__get((int)12);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(90)
		Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(90)
		hx::__ArrayImplRef(this1,(int)12) = tmp2;
		HX_STACK_LINE(91)
		Float tmp3 = this1->__get((int)13);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(91)
		Float tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(91)
		Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(91)
		hx::__ArrayImplRef(this1,(int)13) = tmp5;
		HX_STACK_LINE(92)
		Float tmp6 = this1->__get((int)14);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(92)
		Float tmp7 = z;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(92)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(92)
		hx::__ArrayImplRef(this1,(int)14) = tmp8;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,appendTranslation,(void))

::lime::utils::Float32Array Matrix4_Impl__obj::clone( ::lime::utils::Float32Array this1){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","clone",0xe1a2dbd5,"lime.math._Matrix4.Matrix4_Impl_.clone","lime/math/Matrix4.hx",97,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(99)
	::lime::utils::Float32Array tmp = ::lime::utils::Float32Array_obj::__new(this1,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	::lime::utils::Float32Array tmp1 = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(99)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,clone,return )

Void Matrix4_Impl__obj::copyColumnFrom( ::lime::utils::Float32Array this1,int column,::lime::math::Vector4 vector){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","copyColumnFrom",0x5224fffd,"lime.math._Matrix4.Matrix4_Impl_.copyColumnFrom","lime/math/Matrix4.hx",104,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(column,"column")
		HX_STACK_ARG(vector,"vector")
		HX_STACK_LINE(106)
		int tmp = column;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(106)
		switch( (int)(tmp)){
			case (int)0: {
				HX_STACK_LINE(109)
				Float tmp1 = vector->x;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(109)
				hx::__ArrayImplRef(this1,(int)0) = tmp1;
				HX_STACK_LINE(110)
				Float tmp2 = vector->y;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(110)
				hx::__ArrayImplRef(this1,(int)1) = tmp2;
				HX_STACK_LINE(111)
				Float tmp3 = vector->z;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(111)
				hx::__ArrayImplRef(this1,(int)2) = tmp3;
				HX_STACK_LINE(112)
				Float tmp4 = vector->w;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(112)
				hx::__ArrayImplRef(this1,(int)3) = tmp4;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(114)
				Float tmp1 = vector->x;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(114)
				hx::__ArrayImplRef(this1,(int)4) = tmp1;
				HX_STACK_LINE(115)
				Float tmp2 = vector->y;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(115)
				hx::__ArrayImplRef(this1,(int)5) = tmp2;
				HX_STACK_LINE(116)
				Float tmp3 = vector->z;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(116)
				hx::__ArrayImplRef(this1,(int)6) = tmp3;
				HX_STACK_LINE(117)
				Float tmp4 = vector->w;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(117)
				hx::__ArrayImplRef(this1,(int)7) = tmp4;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(119)
				Float tmp1 = vector->x;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(119)
				hx::__ArrayImplRef(this1,(int)8) = tmp1;
				HX_STACK_LINE(120)
				Float tmp2 = vector->y;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(120)
				hx::__ArrayImplRef(this1,(int)9) = tmp2;
				HX_STACK_LINE(121)
				Float tmp3 = vector->z;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(121)
				hx::__ArrayImplRef(this1,(int)10) = tmp3;
				HX_STACK_LINE(122)
				Float tmp4 = vector->w;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(122)
				hx::__ArrayImplRef(this1,(int)11) = tmp4;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(124)
				Float tmp1 = vector->x;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(124)
				hx::__ArrayImplRef(this1,(int)12) = tmp1;
				HX_STACK_LINE(125)
				Float tmp2 = vector->y;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(125)
				hx::__ArrayImplRef(this1,(int)13) = tmp2;
				HX_STACK_LINE(126)
				Float tmp3 = vector->z;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(126)
				hx::__ArrayImplRef(this1,(int)14) = tmp3;
				HX_STACK_LINE(127)
				Float tmp4 = vector->w;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(127)
				hx::__ArrayImplRef(this1,(int)15) = tmp4;
			}
			;break;
			default: {
				HX_STACK_LINE(129)
				::String tmp1 = (HX_HCSTRING("Error, Column ","\xce","\x33","\xbf","\x79") + column);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(129)
				::String tmp2 = (tmp1 + HX_HCSTRING(" out of bounds [0, ..., 3]","\x2f","\x8b","\x46","\x17"));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(129)
				HX_STACK_DO_THROW(tmp2);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,copyColumnFrom,(void))

Void Matrix4_Impl__obj::copyColumnTo( ::lime::utils::Float32Array this1,int column,::lime::math::Vector4 vector){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","copyColumnTo",0xcc64e54e,"lime.math._Matrix4.Matrix4_Impl_.copyColumnTo","lime/math/Matrix4.hx",136,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(column,"column")
		HX_STACK_ARG(vector,"vector")
		HX_STACK_LINE(138)
		int tmp = column;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(138)
		switch( (int)(tmp)){
			case (int)0: {
				HX_STACK_LINE(141)
				Float tmp1 = this1->__get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(141)
				vector->x = tmp1;
				HX_STACK_LINE(142)
				Float tmp2 = this1->__get((int)1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(142)
				vector->y = tmp2;
				HX_STACK_LINE(143)
				Float tmp3 = this1->__get((int)2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(143)
				vector->z = tmp3;
				HX_STACK_LINE(144)
				Float tmp4 = this1->__get((int)3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(144)
				vector->w = tmp4;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(146)
				Float tmp1 = this1->__get((int)4);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(146)
				vector->x = tmp1;
				HX_STACK_LINE(147)
				Float tmp2 = this1->__get((int)5);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(147)
				vector->y = tmp2;
				HX_STACK_LINE(148)
				Float tmp3 = this1->__get((int)6);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(148)
				vector->z = tmp3;
				HX_STACK_LINE(149)
				Float tmp4 = this1->__get((int)7);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(149)
				vector->w = tmp4;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(151)
				Float tmp1 = this1->__get((int)8);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(151)
				vector->x = tmp1;
				HX_STACK_LINE(152)
				Float tmp2 = this1->__get((int)9);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(152)
				vector->y = tmp2;
				HX_STACK_LINE(153)
				Float tmp3 = this1->__get((int)10);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(153)
				vector->z = tmp3;
				HX_STACK_LINE(154)
				Float tmp4 = this1->__get((int)11);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(154)
				vector->w = tmp4;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(156)
				Float tmp1 = this1->__get((int)12);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(156)
				vector->x = tmp1;
				HX_STACK_LINE(157)
				Float tmp2 = this1->__get((int)13);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(157)
				vector->y = tmp2;
				HX_STACK_LINE(158)
				Float tmp3 = this1->__get((int)14);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(158)
				vector->z = tmp3;
				HX_STACK_LINE(159)
				Float tmp4 = this1->__get((int)15);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(159)
				vector->w = tmp4;
			}
			;break;
			default: {
				HX_STACK_LINE(161)
				::String tmp1 = (HX_HCSTRING("Error, Column ","\xce","\x33","\xbf","\x79") + column);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(161)
				::String tmp2 = (tmp1 + HX_HCSTRING(" out of bounds [0, ..., 3]","\x2f","\x8b","\x46","\x17"));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(161)
				HX_STACK_DO_THROW(tmp2);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,copyColumnTo,(void))

Void Matrix4_Impl__obj::copyFrom( ::lime::utils::Float32Array this1,::lime::utils::Float32Array other){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","copyFrom",0xc27fde47,"lime.math._Matrix4.Matrix4_Impl_.copyFrom","lime/math/Matrix4.hx",168,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(other,"other")
		HX_STACK_LINE(170)
		::lime::utils::Float32Array tmp = other;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(170)
		this1->set(tmp,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,copyFrom,(void))

Void Matrix4_Impl__obj::copythisFrom( ::lime::utils::Float32Array this1,::lime::utils::Float32Array array,hx::Null< int >  __o_index,hx::Null< bool >  __o_transposeValues){
int index = __o_index.Default(0);
bool transposeValues = __o_transposeValues.Default(false);
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","copythisFrom",0x28530e25,"lime.math._Matrix4.Matrix4_Impl_.copythisFrom","lime/math/Matrix4.hx",174,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(transposeValues,"transposeValues")
{
		HX_STACK_LINE(176)
		bool tmp = transposeValues;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(176)
		if ((tmp)){
			HX_STACK_LINE(177)
			::lime::utils::Float32Array tmp1 = this1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(177)
			::lime::math::_Matrix4::Matrix4_Impl__obj::transpose(tmp1);
		}
		HX_STACK_LINE(179)
		int tmp1 = (array->length - index);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(179)
		int l = tmp1;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(180)
		{
			HX_STACK_LINE(180)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(180)
			while((true)){
				HX_STACK_LINE(180)
				bool tmp2 = (_g < l);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(180)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(180)
				if ((tmp3)){
					HX_STACK_LINE(180)
					break;
				}
				HX_STACK_LINE(180)
				int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(180)
				int c = tmp4;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(181)
				::lime::utils::Float32Array tmp5 = array;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(181)
				int tmp6 = (c + index);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(181)
				int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(181)
				Float tmp8 = tmp5->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(181)
				hx::__ArrayImplRef(this1,c) = tmp8;
			}
		}
		HX_STACK_LINE(183)
		bool tmp2 = transposeValues;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(183)
		if ((tmp2)){
			HX_STACK_LINE(184)
			::lime::utils::Float32Array tmp3 = this1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(184)
			::lime::math::_Matrix4::Matrix4_Impl__obj::transpose(tmp3);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,copythisFrom,(void))

Void Matrix4_Impl__obj::copythisTo( ::lime::utils::Float32Array this1,::lime::utils::Float32Array array,hx::Null< int >  __o_index,hx::Null< bool >  __o_transposeValues){
int index = __o_index.Default(0);
bool transposeValues = __o_transposeValues.Default(false);
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","copythisTo",0xe75f9976,"lime.math._Matrix4.Matrix4_Impl_.copythisTo","lime/math/Matrix4.hx",189,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(transposeValues,"transposeValues")
{
		HX_STACK_LINE(191)
		bool tmp = transposeValues;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(191)
		if ((tmp)){
			HX_STACK_LINE(192)
			::lime::utils::Float32Array tmp1 = this1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(192)
			::lime::math::_Matrix4::Matrix4_Impl__obj::transpose(tmp1);
		}
		HX_STACK_LINE(194)
		int l = this1->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(195)
		{
			HX_STACK_LINE(195)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(195)
			while((true)){
				HX_STACK_LINE(195)
				bool tmp1 = (_g < l);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(195)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(195)
				if ((tmp2)){
					HX_STACK_LINE(195)
					break;
				}
				HX_STACK_LINE(195)
				int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(195)
				int c = tmp3;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(196)
				::lime::utils::Float32Array tmp4 = array;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(196)
				int tmp5 = (c + index);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(196)
				int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(196)
				Float tmp7 = this1->__get(c);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(196)
				hx::__ArrayImplRef(tmp4,tmp6) = tmp7;
			}
		}
		HX_STACK_LINE(198)
		bool tmp1 = transposeValues;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(198)
		if ((tmp1)){
			HX_STACK_LINE(199)
			::lime::utils::Float32Array tmp2 = this1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(199)
			::lime::math::_Matrix4::Matrix4_Impl__obj::transpose(tmp2);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,copythisTo,(void))

Void Matrix4_Impl__obj::copyRowFrom( ::lime::utils::Float32Array this1,int row,::lime::math::Vector4 vector){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","copyRowFrom",0xc4e0b7e7,"lime.math._Matrix4.Matrix4_Impl_.copyRowFrom","lime/math/Matrix4.hx",204,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(row,"row")
		HX_STACK_ARG(vector,"vector")
		HX_STACK_LINE(206)
		int tmp = row;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(206)
		switch( (int)(tmp)){
			case (int)0: {
				HX_STACK_LINE(209)
				Float tmp1 = vector->x;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(209)
				hx::__ArrayImplRef(this1,(int)0) = tmp1;
				HX_STACK_LINE(210)
				Float tmp2 = vector->y;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(210)
				hx::__ArrayImplRef(this1,(int)4) = tmp2;
				HX_STACK_LINE(211)
				Float tmp3 = vector->z;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(211)
				hx::__ArrayImplRef(this1,(int)8) = tmp3;
				HX_STACK_LINE(212)
				Float tmp4 = vector->w;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(212)
				hx::__ArrayImplRef(this1,(int)12) = tmp4;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(215)
				Float tmp1 = vector->x;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(215)
				hx::__ArrayImplRef(this1,(int)1) = tmp1;
				HX_STACK_LINE(216)
				Float tmp2 = vector->y;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(216)
				hx::__ArrayImplRef(this1,(int)5) = tmp2;
				HX_STACK_LINE(217)
				Float tmp3 = vector->z;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(217)
				hx::__ArrayImplRef(this1,(int)9) = tmp3;
				HX_STACK_LINE(218)
				Float tmp4 = vector->w;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(218)
				hx::__ArrayImplRef(this1,(int)13) = tmp4;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(221)
				Float tmp1 = vector->x;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(221)
				hx::__ArrayImplRef(this1,(int)2) = tmp1;
				HX_STACK_LINE(222)
				Float tmp2 = vector->y;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(222)
				hx::__ArrayImplRef(this1,(int)6) = tmp2;
				HX_STACK_LINE(223)
				Float tmp3 = vector->z;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(223)
				hx::__ArrayImplRef(this1,(int)10) = tmp3;
				HX_STACK_LINE(224)
				Float tmp4 = vector->w;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(224)
				hx::__ArrayImplRef(this1,(int)14) = tmp4;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(227)
				Float tmp1 = vector->x;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(227)
				hx::__ArrayImplRef(this1,(int)3) = tmp1;
				HX_STACK_LINE(228)
				Float tmp2 = vector->y;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(228)
				hx::__ArrayImplRef(this1,(int)7) = tmp2;
				HX_STACK_LINE(229)
				Float tmp3 = vector->z;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(229)
				hx::__ArrayImplRef(this1,(int)11) = tmp3;
				HX_STACK_LINE(230)
				Float tmp4 = vector->w;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(230)
				hx::__ArrayImplRef(this1,(int)15) = tmp4;
			}
			;break;
			default: {
				HX_STACK_LINE(233)
				Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(233)
				{
					HX_STACK_LINE(233)
					int _int = row;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(233)
					bool tmp2 = (_int < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(233)
					if ((tmp2)){
						HX_STACK_LINE(233)
						tmp1 = (((Float)4294967296.0) + _int);
					}
					else{
						HX_STACK_LINE(233)
						tmp1 = (_int + ((Float)0.0));
					}
				}
				HX_STACK_LINE(233)
				::String tmp2 = ::Std_obj::string(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(233)
				::String tmp3 = (HX_HCSTRING("Error, Row ","\x02","\xfb","\x19","\xd9") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(233)
				::String tmp4 = (tmp3 + HX_HCSTRING(" out of bounds [0, ..., 3]","\x2f","\x8b","\x46","\x17"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(233)
				HX_STACK_DO_THROW(tmp4);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,copyRowFrom,(void))

::lime::utils::Float32Array Matrix4_Impl__obj::create2D( Float x,Float y,hx::Null< Float >  __o_scale,hx::Null< Float >  __o_rotation){
Float scale = __o_scale.Default(1);
Float rotation = __o_rotation.Default(0);
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","create2D",0x26131c56,"lime.math._Matrix4.Matrix4_Impl_.create2D","lime/math/Matrix4.hx",240,0xeb65dbd8)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(scale,"scale")
	HX_STACK_ARG(rotation,"rotation")
{
		HX_STACK_LINE(242)
		Float tmp = rotation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(242)
		Float tmp1 = ::Math_obj::PI;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(242)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(242)
		Float tmp3 = (Float(tmp2) / Float(((Float)180.0)));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(242)
		Float theta = tmp3;		HX_STACK_VAR(theta,"theta");
		HX_STACK_LINE(243)
		Float tmp4 = theta;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(243)
		Float tmp5 = ::Math_obj::cos(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(243)
		Float c = tmp5;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(244)
		Float tmp6 = theta;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(244)
		Float tmp7 = ::Math_obj::sin(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(244)
		Float s = tmp7;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(247)
		Float tmp8 = (c * scale);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(247)
		Float tmp9 = s;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(247)
		Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(247)
		Float tmp11 = scale;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(247)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(248)
		Float tmp13 = (s * scale);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(248)
		Float tmp14 = (c * scale);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(250)
		Float tmp15 = x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(250)
		Float tmp16 = y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(246)
		::lime::utils::Float32Array tmp17 = ::lime::utils::Float32Array_obj::__new(Array_obj< Float >::__new().Add(tmp8).Add(tmp12).Add((int)0).Add((int)0).Add(tmp13).Add(tmp14).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add(tmp15).Add(tmp16).Add((int)0).Add((int)1),null(),null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(246)
		::lime::utils::Float32Array tmp18 = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(246)
		return tmp18;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,create2D,return )

::lime::utils::Float32Array Matrix4_Impl__obj::createABCD( Float a,Float b,Float c,Float d,Float tx,Float ty){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","createABCD",0x303c4746,"lime.math._Matrix4.Matrix4_Impl_.createABCD","lime/math/Matrix4.hx",256,0xeb65dbd8)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_ARG(tx,"tx")
	HX_STACK_ARG(ty,"ty")
	HX_STACK_LINE(258)
	::lime::utils::Float32Array tmp = ::lime::utils::Float32Array_obj::__new(Array_obj< Float >::__new().Add(a).Add(b).Add((int)0).Add((int)0).Add(c).Add(d).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add(tx).Add(ty).Add((int)0).Add((int)1),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(258)
	::lime::utils::Float32Array tmp1 = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(258)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Matrix4_Impl__obj,createABCD,return )

::lime::utils::Float32Array Matrix4_Impl__obj::createOrtho( Float x0,Float x1,Float y0,Float y1,Float zNear,Float zFar){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","createOrtho",0x33fdc114,"lime.math._Matrix4.Matrix4_Impl_.createOrtho","lime/math/Matrix4.hx",268,0xeb65dbd8)
	HX_STACK_ARG(x0,"x0")
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y0,"y0")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(zNear,"zNear")
	HX_STACK_ARG(zFar,"zFar")
	HX_STACK_LINE(270)
	Float tmp = (x1 - x0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(270)
	Float tmp1 = (Float(((Float)1.0)) / Float(tmp));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(270)
	Float sx = tmp1;		HX_STACK_VAR(sx,"sx");
	HX_STACK_LINE(271)
	Float tmp2 = (y1 - y0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(271)
	Float tmp3 = (Float(((Float)1.0)) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(271)
	Float sy = tmp3;		HX_STACK_VAR(sy,"sy");
	HX_STACK_LINE(272)
	Float tmp4 = (zFar - zNear);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(272)
	Float tmp5 = (Float(((Float)1.0)) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(272)
	Float sz = tmp5;		HX_STACK_VAR(sz,"sz");
	HX_STACK_LINE(275)
	Float tmp6 = (((Float)2.0) * sx);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(276)
	Float tmp7 = (((Float)2.0) * sy);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(277)
	Float tmp8 = ((Float)-2.);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(277)
	Float tmp9 = sz;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(277)
	Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(278)
	Float tmp11 = (x0 + x1);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(278)
	Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(278)
	Float tmp13 = sx;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(278)
	Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(278)
	Float tmp15 = (y0 + y1);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(278)
	Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(278)
	Float tmp17 = sy;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(278)
	Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(278)
	Float tmp19 = (zNear + zFar);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(278)
	Float tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(278)
	Float tmp21 = sz;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(278)
	Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(274)
	::lime::utils::Float32Array tmp23 = ::lime::utils::Float32Array_obj::__new(Array_obj< Float >::__new().Add(tmp6).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add(tmp7).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add(tmp10).Add((int)0).Add(tmp14).Add(tmp18).Add(tmp22).Add((int)1),null(),null());		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(274)
	::lime::utils::Float32Array tmp24 = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(274)
	return tmp24;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Matrix4_Impl__obj,createOrtho,return )

Void Matrix4_Impl__obj::copyRowTo( ::lime::utils::Float32Array this1,int row,::lime::math::Vector4 vector){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","copyRowTo",0x543beeb8,"lime.math._Matrix4.Matrix4_Impl_.copyRowTo","lime/math/Matrix4.hx",284,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(row,"row")
		HX_STACK_ARG(vector,"vector")
		HX_STACK_LINE(286)
		int tmp = row;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(286)
		switch( (int)(tmp)){
			case (int)0: {
				HX_STACK_LINE(289)
				Float tmp1 = this1->__get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(289)
				vector->x = tmp1;
				HX_STACK_LINE(290)
				Float tmp2 = this1->__get((int)4);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(290)
				vector->y = tmp2;
				HX_STACK_LINE(291)
				Float tmp3 = this1->__get((int)8);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(291)
				vector->z = tmp3;
				HX_STACK_LINE(292)
				Float tmp4 = this1->__get((int)12);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(292)
				vector->w = tmp4;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(295)
				Float tmp1 = this1->__get((int)1);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(295)
				vector->x = tmp1;
				HX_STACK_LINE(296)
				Float tmp2 = this1->__get((int)5);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(296)
				vector->y = tmp2;
				HX_STACK_LINE(297)
				Float tmp3 = this1->__get((int)9);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(297)
				vector->z = tmp3;
				HX_STACK_LINE(298)
				Float tmp4 = this1->__get((int)13);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(298)
				vector->w = tmp4;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(301)
				Float tmp1 = this1->__get((int)2);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(301)
				vector->x = tmp1;
				HX_STACK_LINE(302)
				Float tmp2 = this1->__get((int)6);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(302)
				vector->y = tmp2;
				HX_STACK_LINE(303)
				Float tmp3 = this1->__get((int)10);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(303)
				vector->z = tmp3;
				HX_STACK_LINE(304)
				Float tmp4 = this1->__get((int)14);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(304)
				vector->w = tmp4;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(307)
				Float tmp1 = this1->__get((int)3);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(307)
				vector->x = tmp1;
				HX_STACK_LINE(308)
				Float tmp2 = this1->__get((int)7);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(308)
				vector->y = tmp2;
				HX_STACK_LINE(309)
				Float tmp3 = this1->__get((int)11);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(309)
				vector->z = tmp3;
				HX_STACK_LINE(310)
				Float tmp4 = this1->__get((int)15);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(310)
				vector->w = tmp4;
			}
			;break;
			default: {
				HX_STACK_LINE(313)
				::String tmp1 = (HX_HCSTRING("Error, Row ","\x02","\xfb","\x19","\xd9") + row);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(313)
				::String tmp2 = (tmp1 + HX_HCSTRING(" out of bounds [0, ..., 3]","\x2f","\x8b","\x46","\x17"));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(313)
				HX_STACK_DO_THROW(tmp2);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,copyRowTo,(void))

Void Matrix4_Impl__obj::copyToMatrix4( ::lime::utils::Float32Array this1,::lime::utils::Float32Array other){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","copyToMatrix4",0x1032009b,"lime.math._Matrix4.Matrix4_Impl_.copyToMatrix4","lime/math/Matrix4.hx",320,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(other,"other")
		HX_STACK_LINE(322)
		::lime::utils::Float32Array tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(322)
		tmp = hx::TCast< ::lime::utils::Float32Array >::cast(other);
		HX_STACK_LINE(322)
		::lime::utils::Float32Array tmp1 = this1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(322)
		tmp->set(tmp1,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,copyToMatrix4,(void))

::lime::math::Vector4 Matrix4_Impl__obj::deltaTransformVector( ::lime::utils::Float32Array this1,::lime::math::Vector4 v){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","deltaTransformVector",0x66f080bf,"lime.math._Matrix4.Matrix4_Impl_.deltaTransformVector","lime/math/Matrix4.hx",426,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(428)
	Float x = v->x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(428)
	Float y = v->y;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(428)
	Float z = v->z;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(431)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(431)
	Float tmp1 = this1->__get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(431)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(431)
	Float tmp3 = y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(431)
	Float tmp4 = this1->__get((int)4);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(431)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(431)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(431)
	Float tmp7 = z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(431)
	Float tmp8 = this1->__get((int)8);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(431)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(431)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(431)
	Float tmp11 = this1->__get((int)3);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(431)
	Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(432)
	Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(432)
	Float tmp14 = this1->__get((int)1);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(432)
	Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(432)
	Float tmp16 = y;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(432)
	Float tmp17 = this1->__get((int)5);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(432)
	Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(432)
	Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(432)
	Float tmp20 = z;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(432)
	Float tmp21 = this1->__get((int)9);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(432)
	Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(432)
	Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(432)
	Float tmp24 = this1->__get((int)7);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(432)
	Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(433)
	Float tmp26 = x;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(433)
	Float tmp27 = this1->__get((int)2);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(433)
	Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(433)
	Float tmp29 = y;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(433)
	Float tmp30 = this1->__get((int)6);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(433)
	Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(433)
	Float tmp32 = (tmp28 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(433)
	Float tmp33 = z;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(433)
	Float tmp34 = this1->__get((int)10);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(433)
	Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(433)
	Float tmp36 = (tmp32 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(433)
	Float tmp37 = this1->__get((int)11);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(433)
	Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(430)
	::lime::math::Vector4 tmp39 = ::lime::math::Vector4_obj::__new(tmp12,tmp25,tmp38,(int)0);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(430)
	return tmp39;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,deltaTransformVector,return )

Void Matrix4_Impl__obj::identity( ::lime::utils::Float32Array this1){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","identity",0xb34e17c6,"lime.math._Matrix4.Matrix4_Impl_.identity","lime/math/Matrix4.hx",439,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(441)
		hx::__ArrayImplRef(this1,(int)0) = (int)1;
		HX_STACK_LINE(442)
		hx::__ArrayImplRef(this1,(int)1) = (int)0;
		HX_STACK_LINE(443)
		hx::__ArrayImplRef(this1,(int)2) = (int)0;
		HX_STACK_LINE(444)
		hx::__ArrayImplRef(this1,(int)3) = (int)0;
		HX_STACK_LINE(445)
		hx::__ArrayImplRef(this1,(int)4) = (int)0;
		HX_STACK_LINE(446)
		hx::__ArrayImplRef(this1,(int)5) = (int)1;
		HX_STACK_LINE(447)
		hx::__ArrayImplRef(this1,(int)6) = (int)0;
		HX_STACK_LINE(448)
		hx::__ArrayImplRef(this1,(int)7) = (int)0;
		HX_STACK_LINE(449)
		hx::__ArrayImplRef(this1,(int)8) = (int)0;
		HX_STACK_LINE(450)
		hx::__ArrayImplRef(this1,(int)9) = (int)0;
		HX_STACK_LINE(451)
		hx::__ArrayImplRef(this1,(int)10) = (int)1;
		HX_STACK_LINE(452)
		hx::__ArrayImplRef(this1,(int)11) = (int)0;
		HX_STACK_LINE(453)
		hx::__ArrayImplRef(this1,(int)12) = (int)0;
		HX_STACK_LINE(454)
		hx::__ArrayImplRef(this1,(int)13) = (int)0;
		HX_STACK_LINE(455)
		hx::__ArrayImplRef(this1,(int)14) = (int)0;
		HX_STACK_LINE(456)
		hx::__ArrayImplRef(this1,(int)15) = (int)1;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,identity,(void))

::lime::utils::Float32Array Matrix4_Impl__obj::interpolate( ::lime::utils::Float32Array thisMat,::lime::utils::Float32Array toMat,Float percent){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","interpolate",0xf4884739,"lime.math._Matrix4.Matrix4_Impl_.interpolate","lime/math/Matrix4.hx",461,0xeb65dbd8)
	HX_STACK_ARG(thisMat,"thisMat")
	HX_STACK_ARG(toMat,"toMat")
	HX_STACK_ARG(percent,"percent")
	HX_STACK_LINE(463)
	::lime::utils::Float32Array tmp = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(463)
	::lime::utils::Float32Array m = tmp;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(465)
	{
		HX_STACK_LINE(465)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(465)
		while((true)){
			HX_STACK_LINE(465)
			bool tmp1 = (_g < (int)16);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(465)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(465)
			if ((tmp2)){
				HX_STACK_LINE(465)
				break;
			}
			HX_STACK_LINE(465)
			int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(465)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(467)
			::lime::utils::Float32Array tmp4 = m;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(467)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(467)
			::lime::utils::Float32Array tmp6 = thisMat;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(467)
			int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(467)
			Float tmp8 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(467)
			::lime::utils::Float32Array tmp9 = toMat;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(467)
			int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(467)
			Float tmp11 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(467)
			::lime::utils::Float32Array tmp12 = thisMat;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(467)
			int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(467)
			Float tmp14 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(467)
			Float tmp15 = (tmp11 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(467)
			Float tmp16 = percent;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(467)
			Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(467)
			Float tmp18 = (tmp8 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(467)
			::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp4,tmp5,tmp18);
		}
	}
	HX_STACK_LINE(471)
	::lime::utils::Float32Array tmp1 = m;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(471)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,interpolate,return )

Void Matrix4_Impl__obj::interpolateTo( ::lime::utils::Float32Array this1,::lime::utils::Float32Array toMat,Float percent){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","interpolateTo",0x5c939114,"lime.math._Matrix4.Matrix4_Impl_.interpolateTo","lime/math/Matrix4.hx",478,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(toMat,"toMat")
		HX_STACK_ARG(percent,"percent")
		HX_STACK_LINE(478)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(478)
		while((true)){
			HX_STACK_LINE(478)
			bool tmp = (_g < (int)16);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(478)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(478)
			if ((tmp1)){
				HX_STACK_LINE(478)
				break;
			}
			HX_STACK_LINE(478)
			int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(478)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(480)
			Float tmp3 = this1->__get(i);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(480)
			::lime::utils::Float32Array tmp4 = toMat;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(480)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(480)
			Float tmp6 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(480)
			Float tmp7 = this1->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(480)
			Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(480)
			Float tmp9 = percent;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(480)
			Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(480)
			Float tmp11 = (tmp3 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(480)
			hx::__ArrayImplRef(this1,i) = tmp11;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,interpolateTo,(void))

bool Matrix4_Impl__obj::invert( ::lime::utils::Float32Array this1){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","invert",0x1e68879e,"lime.math._Matrix4.Matrix4_Impl_.invert","lime/math/Matrix4.hx",487,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(489)
	::lime::utils::Float32Array tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(489)
	Float tmp1 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get_determinant(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(489)
	Float d = tmp1;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(490)
	Float tmp2 = d;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(490)
	Float tmp3 = ::Math_obj::abs(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(490)
	bool tmp4 = (tmp3 > ((Float)0.00000000001));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(490)
	bool invertable = tmp4;		HX_STACK_VAR(invertable,"invertable");
	HX_STACK_LINE(492)
	bool tmp5 = invertable;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(492)
	if ((tmp5)){
		HX_STACK_LINE(494)
		Float tmp6 = (Float((int)1) / Float(d));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(494)
		d = tmp6;
		HX_STACK_LINE(496)
		Float tmp7 = this1->__get((int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(496)
		Float m11 = tmp7;		HX_STACK_VAR(m11,"m11");
		HX_STACK_LINE(496)
		Float tmp8 = this1->__get((int)4);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(496)
		Float m21 = tmp8;		HX_STACK_VAR(m21,"m21");
		HX_STACK_LINE(496)
		Float tmp9 = this1->__get((int)8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(496)
		Float m31 = tmp9;		HX_STACK_VAR(m31,"m31");
		HX_STACK_LINE(496)
		Float tmp10 = this1->__get((int)12);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(496)
		Float m41 = tmp10;		HX_STACK_VAR(m41,"m41");
		HX_STACK_LINE(497)
		Float tmp11 = this1->__get((int)1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(497)
		Float m12 = tmp11;		HX_STACK_VAR(m12,"m12");
		HX_STACK_LINE(497)
		Float tmp12 = this1->__get((int)5);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(497)
		Float m22 = tmp12;		HX_STACK_VAR(m22,"m22");
		HX_STACK_LINE(497)
		Float tmp13 = this1->__get((int)9);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(497)
		Float m32 = tmp13;		HX_STACK_VAR(m32,"m32");
		HX_STACK_LINE(497)
		Float tmp14 = this1->__get((int)13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(497)
		Float m42 = tmp14;		HX_STACK_VAR(m42,"m42");
		HX_STACK_LINE(498)
		Float tmp15 = this1->__get((int)2);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(498)
		Float m13 = tmp15;		HX_STACK_VAR(m13,"m13");
		HX_STACK_LINE(498)
		Float tmp16 = this1->__get((int)6);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(498)
		Float m23 = tmp16;		HX_STACK_VAR(m23,"m23");
		HX_STACK_LINE(498)
		Float tmp17 = this1->__get((int)10);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(498)
		Float m33 = tmp17;		HX_STACK_VAR(m33,"m33");
		HX_STACK_LINE(498)
		Float tmp18 = this1->__get((int)14);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(498)
		Float m43 = tmp18;		HX_STACK_VAR(m43,"m43");
		HX_STACK_LINE(499)
		Float tmp19 = this1->__get((int)3);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(499)
		Float m14 = tmp19;		HX_STACK_VAR(m14,"m14");
		HX_STACK_LINE(499)
		Float tmp20 = this1->__get((int)7);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(499)
		Float m24 = tmp20;		HX_STACK_VAR(m24,"m24");
		HX_STACK_LINE(499)
		Float tmp21 = this1->__get((int)11);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(499)
		Float m34 = tmp21;		HX_STACK_VAR(m34,"m34");
		HX_STACK_LINE(499)
		Float tmp22 = this1->__get((int)15);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(499)
		Float m44 = tmp22;		HX_STACK_VAR(m44,"m44");
		HX_STACK_LINE(501)
		Float tmp23 = d;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(501)
		Float tmp24 = m22;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(501)
		Float tmp25 = (m33 * m44);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(501)
		Float tmp26 = (m43 * m34);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(501)
		Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(501)
		Float tmp28 = (tmp24 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(501)
		Float tmp29 = m32;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(501)
		Float tmp30 = (m23 * m44);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(501)
		Float tmp31 = (m43 * m24);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(501)
		Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(501)
		Float tmp33 = (tmp29 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(501)
		Float tmp34 = (tmp28 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(501)
		Float tmp35 = m42;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(501)
		Float tmp36 = (m23 * m34);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(501)
		Float tmp37 = (m33 * m24);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(501)
		Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(501)
		Float tmp39 = (tmp35 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(501)
		Float tmp40 = (tmp34 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(501)
		Float tmp41 = (tmp23 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(501)
		hx::__ArrayImplRef(this1,(int)0) = tmp41;
		HX_STACK_LINE(502)
		Float tmp42 = d;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(502)
		Float tmp43 = -(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(502)
		Float tmp44 = m12;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(502)
		Float tmp45 = (m33 * m44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(502)
		Float tmp46 = (m43 * m34);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(502)
		Float tmp47 = (tmp45 - tmp46);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(502)
		Float tmp48 = (tmp44 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(502)
		Float tmp49 = m32;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(502)
		Float tmp50 = (m13 * m44);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(502)
		Float tmp51 = (m43 * m14);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(502)
		Float tmp52 = (tmp50 - tmp51);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(502)
		Float tmp53 = (tmp49 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(502)
		Float tmp54 = (tmp48 - tmp53);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(502)
		Float tmp55 = m42;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(502)
		Float tmp56 = (m13 * m34);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(502)
		Float tmp57 = (m33 * m14);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(502)
		Float tmp58 = (tmp56 - tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(502)
		Float tmp59 = (tmp55 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(502)
		Float tmp60 = (tmp54 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(502)
		Float tmp61 = (tmp43 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(502)
		hx::__ArrayImplRef(this1,(int)1) = tmp61;
		HX_STACK_LINE(503)
		Float tmp62 = d;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(503)
		Float tmp63 = m12;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(503)
		Float tmp64 = (m23 * m44);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(503)
		Float tmp65 = (m43 * m24);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(503)
		Float tmp66 = (tmp64 - tmp65);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(503)
		Float tmp67 = (tmp63 * tmp66);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(503)
		Float tmp68 = m22;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(503)
		Float tmp69 = (m13 * m44);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(503)
		Float tmp70 = (m43 * m14);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(503)
		Float tmp71 = (tmp69 - tmp70);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(503)
		Float tmp72 = (tmp68 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(503)
		Float tmp73 = (tmp67 - tmp72);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(503)
		Float tmp74 = m42;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(503)
		Float tmp75 = (m13 * m24);		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(503)
		Float tmp76 = (m23 * m14);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(503)
		Float tmp77 = (tmp75 - tmp76);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(503)
		Float tmp78 = (tmp74 * tmp77);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(503)
		Float tmp79 = (tmp73 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(503)
		Float tmp80 = (tmp62 * tmp79);		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(503)
		hx::__ArrayImplRef(this1,(int)2) = tmp80;
		HX_STACK_LINE(504)
		Float tmp81 = d;		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(504)
		Float tmp82 = -(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(504)
		Float tmp83 = m12;		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(504)
		Float tmp84 = (m23 * m34);		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(504)
		Float tmp85 = (m33 * m24);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(504)
		Float tmp86 = (tmp84 - tmp85);		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(504)
		Float tmp87 = (tmp83 * tmp86);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(504)
		Float tmp88 = m22;		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(504)
		Float tmp89 = (m13 * m34);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(504)
		Float tmp90 = (m33 * m14);		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(504)
		Float tmp91 = (tmp89 - tmp90);		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(504)
		Float tmp92 = (tmp88 * tmp91);		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(504)
		Float tmp93 = (tmp87 - tmp92);		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(504)
		Float tmp94 = m32;		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(504)
		Float tmp95 = (m13 * m24);		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(504)
		Float tmp96 = (m23 * m14);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(504)
		Float tmp97 = (tmp95 - tmp96);		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(504)
		Float tmp98 = (tmp94 * tmp97);		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(504)
		Float tmp99 = (tmp93 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(504)
		Float tmp100 = (tmp82 * tmp99);		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(504)
		hx::__ArrayImplRef(this1,(int)3) = tmp100;
		HX_STACK_LINE(505)
		Float tmp101 = d;		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(505)
		Float tmp102 = -(tmp101);		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(505)
		Float tmp103 = m21;		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(505)
		Float tmp104 = (m33 * m44);		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(505)
		Float tmp105 = (m43 * m34);		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(505)
		Float tmp106 = (tmp104 - tmp105);		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(505)
		Float tmp107 = (tmp103 * tmp106);		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(505)
		Float tmp108 = m31;		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(505)
		Float tmp109 = (m23 * m44);		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(505)
		Float tmp110 = (m43 * m24);		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(505)
		Float tmp111 = (tmp109 - tmp110);		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(505)
		Float tmp112 = (tmp108 * tmp111);		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(505)
		Float tmp113 = (tmp107 - tmp112);		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(505)
		Float tmp114 = m41;		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(505)
		Float tmp115 = (m23 * m34);		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(505)
		Float tmp116 = (m33 * m24);		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(505)
		Float tmp117 = (tmp115 - tmp116);		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(505)
		Float tmp118 = (tmp114 * tmp117);		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(505)
		Float tmp119 = (tmp113 + tmp118);		HX_STACK_VAR(tmp119,"tmp119");
		HX_STACK_LINE(505)
		Float tmp120 = (tmp102 * tmp119);		HX_STACK_VAR(tmp120,"tmp120");
		HX_STACK_LINE(505)
		hx::__ArrayImplRef(this1,(int)4) = tmp120;
		HX_STACK_LINE(506)
		Float tmp121 = d;		HX_STACK_VAR(tmp121,"tmp121");
		HX_STACK_LINE(506)
		Float tmp122 = m11;		HX_STACK_VAR(tmp122,"tmp122");
		HX_STACK_LINE(506)
		Float tmp123 = (m33 * m44);		HX_STACK_VAR(tmp123,"tmp123");
		HX_STACK_LINE(506)
		Float tmp124 = (m43 * m34);		HX_STACK_VAR(tmp124,"tmp124");
		HX_STACK_LINE(506)
		Float tmp125 = (tmp123 - tmp124);		HX_STACK_VAR(tmp125,"tmp125");
		HX_STACK_LINE(506)
		Float tmp126 = (tmp122 * tmp125);		HX_STACK_VAR(tmp126,"tmp126");
		HX_STACK_LINE(506)
		Float tmp127 = m31;		HX_STACK_VAR(tmp127,"tmp127");
		HX_STACK_LINE(506)
		Float tmp128 = (m13 * m44);		HX_STACK_VAR(tmp128,"tmp128");
		HX_STACK_LINE(506)
		Float tmp129 = (m43 * m14);		HX_STACK_VAR(tmp129,"tmp129");
		HX_STACK_LINE(506)
		Float tmp130 = (tmp128 - tmp129);		HX_STACK_VAR(tmp130,"tmp130");
		HX_STACK_LINE(506)
		Float tmp131 = (tmp127 * tmp130);		HX_STACK_VAR(tmp131,"tmp131");
		HX_STACK_LINE(506)
		Float tmp132 = (tmp126 - tmp131);		HX_STACK_VAR(tmp132,"tmp132");
		HX_STACK_LINE(506)
		Float tmp133 = m41;		HX_STACK_VAR(tmp133,"tmp133");
		HX_STACK_LINE(506)
		Float tmp134 = (m13 * m34);		HX_STACK_VAR(tmp134,"tmp134");
		HX_STACK_LINE(506)
		Float tmp135 = (m33 * m14);		HX_STACK_VAR(tmp135,"tmp135");
		HX_STACK_LINE(506)
		Float tmp136 = (tmp134 - tmp135);		HX_STACK_VAR(tmp136,"tmp136");
		HX_STACK_LINE(506)
		Float tmp137 = (tmp133 * tmp136);		HX_STACK_VAR(tmp137,"tmp137");
		HX_STACK_LINE(506)
		Float tmp138 = (tmp132 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
		HX_STACK_LINE(506)
		Float tmp139 = (tmp121 * tmp138);		HX_STACK_VAR(tmp139,"tmp139");
		HX_STACK_LINE(506)
		hx::__ArrayImplRef(this1,(int)5) = tmp139;
		HX_STACK_LINE(507)
		Float tmp140 = d;		HX_STACK_VAR(tmp140,"tmp140");
		HX_STACK_LINE(507)
		Float tmp141 = -(tmp140);		HX_STACK_VAR(tmp141,"tmp141");
		HX_STACK_LINE(507)
		Float tmp142 = m11;		HX_STACK_VAR(tmp142,"tmp142");
		HX_STACK_LINE(507)
		Float tmp143 = (m23 * m44);		HX_STACK_VAR(tmp143,"tmp143");
		HX_STACK_LINE(507)
		Float tmp144 = (m43 * m24);		HX_STACK_VAR(tmp144,"tmp144");
		HX_STACK_LINE(507)
		Float tmp145 = (tmp143 - tmp144);		HX_STACK_VAR(tmp145,"tmp145");
		HX_STACK_LINE(507)
		Float tmp146 = (tmp142 * tmp145);		HX_STACK_VAR(tmp146,"tmp146");
		HX_STACK_LINE(507)
		Float tmp147 = m21;		HX_STACK_VAR(tmp147,"tmp147");
		HX_STACK_LINE(507)
		Float tmp148 = (m13 * m44);		HX_STACK_VAR(tmp148,"tmp148");
		HX_STACK_LINE(507)
		Float tmp149 = (m43 * m14);		HX_STACK_VAR(tmp149,"tmp149");
		HX_STACK_LINE(507)
		Float tmp150 = (tmp148 - tmp149);		HX_STACK_VAR(tmp150,"tmp150");
		HX_STACK_LINE(507)
		Float tmp151 = (tmp147 * tmp150);		HX_STACK_VAR(tmp151,"tmp151");
		HX_STACK_LINE(507)
		Float tmp152 = (tmp146 - tmp151);		HX_STACK_VAR(tmp152,"tmp152");
		HX_STACK_LINE(507)
		Float tmp153 = m41;		HX_STACK_VAR(tmp153,"tmp153");
		HX_STACK_LINE(507)
		Float tmp154 = (m13 * m24);		HX_STACK_VAR(tmp154,"tmp154");
		HX_STACK_LINE(507)
		Float tmp155 = (m23 * m14);		HX_STACK_VAR(tmp155,"tmp155");
		HX_STACK_LINE(507)
		Float tmp156 = (tmp154 - tmp155);		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(507)
		Float tmp157 = (tmp153 * tmp156);		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(507)
		Float tmp158 = (tmp152 + tmp157);		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(507)
		Float tmp159 = (tmp141 * tmp158);		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(507)
		hx::__ArrayImplRef(this1,(int)6) = tmp159;
		HX_STACK_LINE(508)
		Float tmp160 = d;		HX_STACK_VAR(tmp160,"tmp160");
		HX_STACK_LINE(508)
		Float tmp161 = m11;		HX_STACK_VAR(tmp161,"tmp161");
		HX_STACK_LINE(508)
		Float tmp162 = (m23 * m34);		HX_STACK_VAR(tmp162,"tmp162");
		HX_STACK_LINE(508)
		Float tmp163 = (m33 * m24);		HX_STACK_VAR(tmp163,"tmp163");
		HX_STACK_LINE(508)
		Float tmp164 = (tmp162 - tmp163);		HX_STACK_VAR(tmp164,"tmp164");
		HX_STACK_LINE(508)
		Float tmp165 = (tmp161 * tmp164);		HX_STACK_VAR(tmp165,"tmp165");
		HX_STACK_LINE(508)
		Float tmp166 = m21;		HX_STACK_VAR(tmp166,"tmp166");
		HX_STACK_LINE(508)
		Float tmp167 = (m13 * m34);		HX_STACK_VAR(tmp167,"tmp167");
		HX_STACK_LINE(508)
		Float tmp168 = (m33 * m14);		HX_STACK_VAR(tmp168,"tmp168");
		HX_STACK_LINE(508)
		Float tmp169 = (tmp167 - tmp168);		HX_STACK_VAR(tmp169,"tmp169");
		HX_STACK_LINE(508)
		Float tmp170 = (tmp166 * tmp169);		HX_STACK_VAR(tmp170,"tmp170");
		HX_STACK_LINE(508)
		Float tmp171 = (tmp165 - tmp170);		HX_STACK_VAR(tmp171,"tmp171");
		HX_STACK_LINE(508)
		Float tmp172 = m31;		HX_STACK_VAR(tmp172,"tmp172");
		HX_STACK_LINE(508)
		Float tmp173 = (m13 * m24);		HX_STACK_VAR(tmp173,"tmp173");
		HX_STACK_LINE(508)
		Float tmp174 = (m23 * m14);		HX_STACK_VAR(tmp174,"tmp174");
		HX_STACK_LINE(508)
		Float tmp175 = (tmp173 - tmp174);		HX_STACK_VAR(tmp175,"tmp175");
		HX_STACK_LINE(508)
		Float tmp176 = (tmp172 * tmp175);		HX_STACK_VAR(tmp176,"tmp176");
		HX_STACK_LINE(508)
		Float tmp177 = (tmp171 + tmp176);		HX_STACK_VAR(tmp177,"tmp177");
		HX_STACK_LINE(508)
		Float tmp178 = (tmp160 * tmp177);		HX_STACK_VAR(tmp178,"tmp178");
		HX_STACK_LINE(508)
		hx::__ArrayImplRef(this1,(int)7) = tmp178;
		HX_STACK_LINE(509)
		Float tmp179 = d;		HX_STACK_VAR(tmp179,"tmp179");
		HX_STACK_LINE(509)
		Float tmp180 = m21;		HX_STACK_VAR(tmp180,"tmp180");
		HX_STACK_LINE(509)
		Float tmp181 = (m32 * m44);		HX_STACK_VAR(tmp181,"tmp181");
		HX_STACK_LINE(509)
		Float tmp182 = (m42 * m34);		HX_STACK_VAR(tmp182,"tmp182");
		HX_STACK_LINE(509)
		Float tmp183 = (tmp181 - tmp182);		HX_STACK_VAR(tmp183,"tmp183");
		HX_STACK_LINE(509)
		Float tmp184 = (tmp180 * tmp183);		HX_STACK_VAR(tmp184,"tmp184");
		HX_STACK_LINE(509)
		Float tmp185 = m31;		HX_STACK_VAR(tmp185,"tmp185");
		HX_STACK_LINE(509)
		Float tmp186 = (m22 * m44);		HX_STACK_VAR(tmp186,"tmp186");
		HX_STACK_LINE(509)
		Float tmp187 = (m42 * m24);		HX_STACK_VAR(tmp187,"tmp187");
		HX_STACK_LINE(509)
		Float tmp188 = (tmp186 - tmp187);		HX_STACK_VAR(tmp188,"tmp188");
		HX_STACK_LINE(509)
		Float tmp189 = (tmp185 * tmp188);		HX_STACK_VAR(tmp189,"tmp189");
		HX_STACK_LINE(509)
		Float tmp190 = (tmp184 - tmp189);		HX_STACK_VAR(tmp190,"tmp190");
		HX_STACK_LINE(509)
		Float tmp191 = m41;		HX_STACK_VAR(tmp191,"tmp191");
		HX_STACK_LINE(509)
		Float tmp192 = (m22 * m34);		HX_STACK_VAR(tmp192,"tmp192");
		HX_STACK_LINE(509)
		Float tmp193 = (m32 * m24);		HX_STACK_VAR(tmp193,"tmp193");
		HX_STACK_LINE(509)
		Float tmp194 = (tmp192 - tmp193);		HX_STACK_VAR(tmp194,"tmp194");
		HX_STACK_LINE(509)
		Float tmp195 = (tmp191 * tmp194);		HX_STACK_VAR(tmp195,"tmp195");
		HX_STACK_LINE(509)
		Float tmp196 = (tmp190 + tmp195);		HX_STACK_VAR(tmp196,"tmp196");
		HX_STACK_LINE(509)
		Float tmp197 = (tmp179 * tmp196);		HX_STACK_VAR(tmp197,"tmp197");
		HX_STACK_LINE(509)
		hx::__ArrayImplRef(this1,(int)8) = tmp197;
		HX_STACK_LINE(510)
		Float tmp198 = d;		HX_STACK_VAR(tmp198,"tmp198");
		HX_STACK_LINE(510)
		Float tmp199 = -(tmp198);		HX_STACK_VAR(tmp199,"tmp199");
		HX_STACK_LINE(510)
		Float tmp200 = m11;		HX_STACK_VAR(tmp200,"tmp200");
		HX_STACK_LINE(510)
		Float tmp201 = (m32 * m44);		HX_STACK_VAR(tmp201,"tmp201");
		HX_STACK_LINE(510)
		Float tmp202 = (m42 * m34);		HX_STACK_VAR(tmp202,"tmp202");
		HX_STACK_LINE(510)
		Float tmp203 = (tmp201 - tmp202);		HX_STACK_VAR(tmp203,"tmp203");
		HX_STACK_LINE(510)
		Float tmp204 = (tmp200 * tmp203);		HX_STACK_VAR(tmp204,"tmp204");
		HX_STACK_LINE(510)
		Float tmp205 = m31;		HX_STACK_VAR(tmp205,"tmp205");
		HX_STACK_LINE(510)
		Float tmp206 = (m12 * m44);		HX_STACK_VAR(tmp206,"tmp206");
		HX_STACK_LINE(510)
		Float tmp207 = (m42 * m14);		HX_STACK_VAR(tmp207,"tmp207");
		HX_STACK_LINE(510)
		Float tmp208 = (tmp206 - tmp207);		HX_STACK_VAR(tmp208,"tmp208");
		HX_STACK_LINE(510)
		Float tmp209 = (tmp205 * tmp208);		HX_STACK_VAR(tmp209,"tmp209");
		HX_STACK_LINE(510)
		Float tmp210 = (tmp204 - tmp209);		HX_STACK_VAR(tmp210,"tmp210");
		HX_STACK_LINE(510)
		Float tmp211 = m41;		HX_STACK_VAR(tmp211,"tmp211");
		HX_STACK_LINE(510)
		Float tmp212 = (m12 * m34);		HX_STACK_VAR(tmp212,"tmp212");
		HX_STACK_LINE(510)
		Float tmp213 = (m32 * m14);		HX_STACK_VAR(tmp213,"tmp213");
		HX_STACK_LINE(510)
		Float tmp214 = (tmp212 - tmp213);		HX_STACK_VAR(tmp214,"tmp214");
		HX_STACK_LINE(510)
		Float tmp215 = (tmp211 * tmp214);		HX_STACK_VAR(tmp215,"tmp215");
		HX_STACK_LINE(510)
		Float tmp216 = (tmp210 + tmp215);		HX_STACK_VAR(tmp216,"tmp216");
		HX_STACK_LINE(510)
		Float tmp217 = (tmp199 * tmp216);		HX_STACK_VAR(tmp217,"tmp217");
		HX_STACK_LINE(510)
		hx::__ArrayImplRef(this1,(int)9) = tmp217;
		HX_STACK_LINE(511)
		Float tmp218 = d;		HX_STACK_VAR(tmp218,"tmp218");
		HX_STACK_LINE(511)
		Float tmp219 = m11;		HX_STACK_VAR(tmp219,"tmp219");
		HX_STACK_LINE(511)
		Float tmp220 = (m22 * m44);		HX_STACK_VAR(tmp220,"tmp220");
		HX_STACK_LINE(511)
		Float tmp221 = (m42 * m24);		HX_STACK_VAR(tmp221,"tmp221");
		HX_STACK_LINE(511)
		Float tmp222 = (tmp220 - tmp221);		HX_STACK_VAR(tmp222,"tmp222");
		HX_STACK_LINE(511)
		Float tmp223 = (tmp219 * tmp222);		HX_STACK_VAR(tmp223,"tmp223");
		HX_STACK_LINE(511)
		Float tmp224 = m21;		HX_STACK_VAR(tmp224,"tmp224");
		HX_STACK_LINE(511)
		Float tmp225 = (m12 * m44);		HX_STACK_VAR(tmp225,"tmp225");
		HX_STACK_LINE(511)
		Float tmp226 = (m42 * m14);		HX_STACK_VAR(tmp226,"tmp226");
		HX_STACK_LINE(511)
		Float tmp227 = (tmp225 - tmp226);		HX_STACK_VAR(tmp227,"tmp227");
		HX_STACK_LINE(511)
		Float tmp228 = (tmp224 * tmp227);		HX_STACK_VAR(tmp228,"tmp228");
		HX_STACK_LINE(511)
		Float tmp229 = (tmp223 - tmp228);		HX_STACK_VAR(tmp229,"tmp229");
		HX_STACK_LINE(511)
		Float tmp230 = m41;		HX_STACK_VAR(tmp230,"tmp230");
		HX_STACK_LINE(511)
		Float tmp231 = (m12 * m24);		HX_STACK_VAR(tmp231,"tmp231");
		HX_STACK_LINE(511)
		Float tmp232 = (m22 * m14);		HX_STACK_VAR(tmp232,"tmp232");
		HX_STACK_LINE(511)
		Float tmp233 = (tmp231 - tmp232);		HX_STACK_VAR(tmp233,"tmp233");
		HX_STACK_LINE(511)
		Float tmp234 = (tmp230 * tmp233);		HX_STACK_VAR(tmp234,"tmp234");
		HX_STACK_LINE(511)
		Float tmp235 = (tmp229 + tmp234);		HX_STACK_VAR(tmp235,"tmp235");
		HX_STACK_LINE(511)
		Float tmp236 = (tmp218 * tmp235);		HX_STACK_VAR(tmp236,"tmp236");
		HX_STACK_LINE(511)
		hx::__ArrayImplRef(this1,(int)10) = tmp236;
		HX_STACK_LINE(512)
		Float tmp237 = d;		HX_STACK_VAR(tmp237,"tmp237");
		HX_STACK_LINE(512)
		Float tmp238 = -(tmp237);		HX_STACK_VAR(tmp238,"tmp238");
		HX_STACK_LINE(512)
		Float tmp239 = m11;		HX_STACK_VAR(tmp239,"tmp239");
		HX_STACK_LINE(512)
		Float tmp240 = (m22 * m34);		HX_STACK_VAR(tmp240,"tmp240");
		HX_STACK_LINE(512)
		Float tmp241 = (m32 * m24);		HX_STACK_VAR(tmp241,"tmp241");
		HX_STACK_LINE(512)
		Float tmp242 = (tmp240 - tmp241);		HX_STACK_VAR(tmp242,"tmp242");
		HX_STACK_LINE(512)
		Float tmp243 = (tmp239 * tmp242);		HX_STACK_VAR(tmp243,"tmp243");
		HX_STACK_LINE(512)
		Float tmp244 = m21;		HX_STACK_VAR(tmp244,"tmp244");
		HX_STACK_LINE(512)
		Float tmp245 = (m12 * m34);		HX_STACK_VAR(tmp245,"tmp245");
		HX_STACK_LINE(512)
		Float tmp246 = (m32 * m14);		HX_STACK_VAR(tmp246,"tmp246");
		HX_STACK_LINE(512)
		Float tmp247 = (tmp245 - tmp246);		HX_STACK_VAR(tmp247,"tmp247");
		HX_STACK_LINE(512)
		Float tmp248 = (tmp244 * tmp247);		HX_STACK_VAR(tmp248,"tmp248");
		HX_STACK_LINE(512)
		Float tmp249 = (tmp243 - tmp248);		HX_STACK_VAR(tmp249,"tmp249");
		HX_STACK_LINE(512)
		Float tmp250 = m31;		HX_STACK_VAR(tmp250,"tmp250");
		HX_STACK_LINE(512)
		Float tmp251 = (m12 * m24);		HX_STACK_VAR(tmp251,"tmp251");
		HX_STACK_LINE(512)
		Float tmp252 = (m22 * m14);		HX_STACK_VAR(tmp252,"tmp252");
		HX_STACK_LINE(512)
		Float tmp253 = (tmp251 - tmp252);		HX_STACK_VAR(tmp253,"tmp253");
		HX_STACK_LINE(512)
		Float tmp254 = (tmp250 * tmp253);		HX_STACK_VAR(tmp254,"tmp254");
		HX_STACK_LINE(512)
		Float tmp255 = (tmp249 + tmp254);		HX_STACK_VAR(tmp255,"tmp255");
		HX_STACK_LINE(512)
		Float tmp256 = (tmp238 * tmp255);		HX_STACK_VAR(tmp256,"tmp256");
		HX_STACK_LINE(512)
		hx::__ArrayImplRef(this1,(int)11) = tmp256;
		HX_STACK_LINE(513)
		Float tmp257 = d;		HX_STACK_VAR(tmp257,"tmp257");
		HX_STACK_LINE(513)
		Float tmp258 = -(tmp257);		HX_STACK_VAR(tmp258,"tmp258");
		HX_STACK_LINE(513)
		Float tmp259 = m21;		HX_STACK_VAR(tmp259,"tmp259");
		HX_STACK_LINE(513)
		Float tmp260 = (m32 * m43);		HX_STACK_VAR(tmp260,"tmp260");
		HX_STACK_LINE(513)
		Float tmp261 = (m42 * m33);		HX_STACK_VAR(tmp261,"tmp261");
		HX_STACK_LINE(513)
		Float tmp262 = (tmp260 - tmp261);		HX_STACK_VAR(tmp262,"tmp262");
		HX_STACK_LINE(513)
		Float tmp263 = (tmp259 * tmp262);		HX_STACK_VAR(tmp263,"tmp263");
		HX_STACK_LINE(513)
		Float tmp264 = m31;		HX_STACK_VAR(tmp264,"tmp264");
		HX_STACK_LINE(513)
		Float tmp265 = (m22 * m43);		HX_STACK_VAR(tmp265,"tmp265");
		HX_STACK_LINE(513)
		Float tmp266 = (m42 * m23);		HX_STACK_VAR(tmp266,"tmp266");
		HX_STACK_LINE(513)
		Float tmp267 = (tmp265 - tmp266);		HX_STACK_VAR(tmp267,"tmp267");
		HX_STACK_LINE(513)
		Float tmp268 = (tmp264 * tmp267);		HX_STACK_VAR(tmp268,"tmp268");
		HX_STACK_LINE(513)
		Float tmp269 = (tmp263 - tmp268);		HX_STACK_VAR(tmp269,"tmp269");
		HX_STACK_LINE(513)
		Float tmp270 = m41;		HX_STACK_VAR(tmp270,"tmp270");
		HX_STACK_LINE(513)
		Float tmp271 = (m22 * m33);		HX_STACK_VAR(tmp271,"tmp271");
		HX_STACK_LINE(513)
		Float tmp272 = (m32 * m23);		HX_STACK_VAR(tmp272,"tmp272");
		HX_STACK_LINE(513)
		Float tmp273 = (tmp271 - tmp272);		HX_STACK_VAR(tmp273,"tmp273");
		HX_STACK_LINE(513)
		Float tmp274 = (tmp270 * tmp273);		HX_STACK_VAR(tmp274,"tmp274");
		HX_STACK_LINE(513)
		Float tmp275 = (tmp269 + tmp274);		HX_STACK_VAR(tmp275,"tmp275");
		HX_STACK_LINE(513)
		Float tmp276 = (tmp258 * tmp275);		HX_STACK_VAR(tmp276,"tmp276");
		HX_STACK_LINE(513)
		hx::__ArrayImplRef(this1,(int)12) = tmp276;
		HX_STACK_LINE(514)
		Float tmp277 = d;		HX_STACK_VAR(tmp277,"tmp277");
		HX_STACK_LINE(514)
		Float tmp278 = m11;		HX_STACK_VAR(tmp278,"tmp278");
		HX_STACK_LINE(514)
		Float tmp279 = (m32 * m43);		HX_STACK_VAR(tmp279,"tmp279");
		HX_STACK_LINE(514)
		Float tmp280 = (m42 * m33);		HX_STACK_VAR(tmp280,"tmp280");
		HX_STACK_LINE(514)
		Float tmp281 = (tmp279 - tmp280);		HX_STACK_VAR(tmp281,"tmp281");
		HX_STACK_LINE(514)
		Float tmp282 = (tmp278 * tmp281);		HX_STACK_VAR(tmp282,"tmp282");
		HX_STACK_LINE(514)
		Float tmp283 = m31;		HX_STACK_VAR(tmp283,"tmp283");
		HX_STACK_LINE(514)
		Float tmp284 = (m12 * m43);		HX_STACK_VAR(tmp284,"tmp284");
		HX_STACK_LINE(514)
		Float tmp285 = (m42 * m13);		HX_STACK_VAR(tmp285,"tmp285");
		HX_STACK_LINE(514)
		Float tmp286 = (tmp284 - tmp285);		HX_STACK_VAR(tmp286,"tmp286");
		HX_STACK_LINE(514)
		Float tmp287 = (tmp283 * tmp286);		HX_STACK_VAR(tmp287,"tmp287");
		HX_STACK_LINE(514)
		Float tmp288 = (tmp282 - tmp287);		HX_STACK_VAR(tmp288,"tmp288");
		HX_STACK_LINE(514)
		Float tmp289 = m41;		HX_STACK_VAR(tmp289,"tmp289");
		HX_STACK_LINE(514)
		Float tmp290 = (m12 * m33);		HX_STACK_VAR(tmp290,"tmp290");
		HX_STACK_LINE(514)
		Float tmp291 = (m32 * m13);		HX_STACK_VAR(tmp291,"tmp291");
		HX_STACK_LINE(514)
		Float tmp292 = (tmp290 - tmp291);		HX_STACK_VAR(tmp292,"tmp292");
		HX_STACK_LINE(514)
		Float tmp293 = (tmp289 * tmp292);		HX_STACK_VAR(tmp293,"tmp293");
		HX_STACK_LINE(514)
		Float tmp294 = (tmp288 + tmp293);		HX_STACK_VAR(tmp294,"tmp294");
		HX_STACK_LINE(514)
		Float tmp295 = (tmp277 * tmp294);		HX_STACK_VAR(tmp295,"tmp295");
		HX_STACK_LINE(514)
		hx::__ArrayImplRef(this1,(int)13) = tmp295;
		HX_STACK_LINE(515)
		Float tmp296 = d;		HX_STACK_VAR(tmp296,"tmp296");
		HX_STACK_LINE(515)
		Float tmp297 = -(tmp296);		HX_STACK_VAR(tmp297,"tmp297");
		HX_STACK_LINE(515)
		Float tmp298 = m11;		HX_STACK_VAR(tmp298,"tmp298");
		HX_STACK_LINE(515)
		Float tmp299 = (m22 * m43);		HX_STACK_VAR(tmp299,"tmp299");
		HX_STACK_LINE(515)
		Float tmp300 = (m42 * m23);		HX_STACK_VAR(tmp300,"tmp300");
		HX_STACK_LINE(515)
		Float tmp301 = (tmp299 - tmp300);		HX_STACK_VAR(tmp301,"tmp301");
		HX_STACK_LINE(515)
		Float tmp302 = (tmp298 * tmp301);		HX_STACK_VAR(tmp302,"tmp302");
		HX_STACK_LINE(515)
		Float tmp303 = m21;		HX_STACK_VAR(tmp303,"tmp303");
		HX_STACK_LINE(515)
		Float tmp304 = (m12 * m43);		HX_STACK_VAR(tmp304,"tmp304");
		HX_STACK_LINE(515)
		Float tmp305 = (m42 * m13);		HX_STACK_VAR(tmp305,"tmp305");
		HX_STACK_LINE(515)
		Float tmp306 = (tmp304 - tmp305);		HX_STACK_VAR(tmp306,"tmp306");
		HX_STACK_LINE(515)
		Float tmp307 = (tmp303 * tmp306);		HX_STACK_VAR(tmp307,"tmp307");
		HX_STACK_LINE(515)
		Float tmp308 = (tmp302 - tmp307);		HX_STACK_VAR(tmp308,"tmp308");
		HX_STACK_LINE(515)
		Float tmp309 = m41;		HX_STACK_VAR(tmp309,"tmp309");
		HX_STACK_LINE(515)
		Float tmp310 = (m12 * m23);		HX_STACK_VAR(tmp310,"tmp310");
		HX_STACK_LINE(515)
		Float tmp311 = (m22 * m13);		HX_STACK_VAR(tmp311,"tmp311");
		HX_STACK_LINE(515)
		Float tmp312 = (tmp310 - tmp311);		HX_STACK_VAR(tmp312,"tmp312");
		HX_STACK_LINE(515)
		Float tmp313 = (tmp309 * tmp312);		HX_STACK_VAR(tmp313,"tmp313");
		HX_STACK_LINE(515)
		Float tmp314 = (tmp308 + tmp313);		HX_STACK_VAR(tmp314,"tmp314");
		HX_STACK_LINE(515)
		Float tmp315 = (tmp297 * tmp314);		HX_STACK_VAR(tmp315,"tmp315");
		HX_STACK_LINE(515)
		hx::__ArrayImplRef(this1,(int)14) = tmp315;
		HX_STACK_LINE(516)
		Float tmp316 = d;		HX_STACK_VAR(tmp316,"tmp316");
		HX_STACK_LINE(516)
		Float tmp317 = m11;		HX_STACK_VAR(tmp317,"tmp317");
		HX_STACK_LINE(516)
		Float tmp318 = (m22 * m33);		HX_STACK_VAR(tmp318,"tmp318");
		HX_STACK_LINE(516)
		Float tmp319 = (m32 * m23);		HX_STACK_VAR(tmp319,"tmp319");
		HX_STACK_LINE(516)
		Float tmp320 = (tmp318 - tmp319);		HX_STACK_VAR(tmp320,"tmp320");
		HX_STACK_LINE(516)
		Float tmp321 = (tmp317 * tmp320);		HX_STACK_VAR(tmp321,"tmp321");
		HX_STACK_LINE(516)
		Float tmp322 = m21;		HX_STACK_VAR(tmp322,"tmp322");
		HX_STACK_LINE(516)
		Float tmp323 = (m12 * m33);		HX_STACK_VAR(tmp323,"tmp323");
		HX_STACK_LINE(516)
		Float tmp324 = (m32 * m13);		HX_STACK_VAR(tmp324,"tmp324");
		HX_STACK_LINE(516)
		Float tmp325 = (tmp323 - tmp324);		HX_STACK_VAR(tmp325,"tmp325");
		HX_STACK_LINE(516)
		Float tmp326 = (tmp322 * tmp325);		HX_STACK_VAR(tmp326,"tmp326");
		HX_STACK_LINE(516)
		Float tmp327 = (tmp321 - tmp326);		HX_STACK_VAR(tmp327,"tmp327");
		HX_STACK_LINE(516)
		Float tmp328 = m31;		HX_STACK_VAR(tmp328,"tmp328");
		HX_STACK_LINE(516)
		Float tmp329 = (m12 * m23);		HX_STACK_VAR(tmp329,"tmp329");
		HX_STACK_LINE(516)
		Float tmp330 = (m22 * m13);		HX_STACK_VAR(tmp330,"tmp330");
		HX_STACK_LINE(516)
		Float tmp331 = (tmp329 - tmp330);		HX_STACK_VAR(tmp331,"tmp331");
		HX_STACK_LINE(516)
		Float tmp332 = (tmp328 * tmp331);		HX_STACK_VAR(tmp332,"tmp332");
		HX_STACK_LINE(516)
		Float tmp333 = (tmp327 + tmp332);		HX_STACK_VAR(tmp333,"tmp333");
		HX_STACK_LINE(516)
		Float tmp334 = (tmp316 * tmp333);		HX_STACK_VAR(tmp334,"tmp334");
		HX_STACK_LINE(516)
		hx::__ArrayImplRef(this1,(int)15) = tmp334;
	}
	HX_STACK_LINE(520)
	bool tmp6 = invertable;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(520)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,invert,return )

Void Matrix4_Impl__obj::pointAt( ::lime::utils::Float32Array this1,::lime::math::Vector4 pos,::lime::math::Vector4 at,::lime::math::Vector4 up){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","pointAt",0x903e77db,"lime.math._Matrix4.Matrix4_Impl_.pointAt","lime/math/Matrix4.hx",525,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(at,"at")
		HX_STACK_ARG(up,"up")
		HX_STACK_LINE(527)
		bool tmp = (at == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(527)
		if ((tmp)){
			HX_STACK_LINE(529)
			::lime::math::Vector4 tmp1 = ::lime::math::Vector4_obj::__new((int)0,(int)0,(int)-1,null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(529)
			at = tmp1;
		}
		HX_STACK_LINE(533)
		bool tmp1 = (up == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(533)
		if ((tmp1)){
			HX_STACK_LINE(535)
			::lime::math::Vector4 tmp2 = ::lime::math::Vector4_obj::__new((int)0,(int)-1,(int)0,null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(535)
			up = tmp2;
		}
		HX_STACK_LINE(539)
		Float tmp2 = (at->x - pos->x);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(539)
		Float tmp3 = (at->y - pos->y);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(539)
		Float tmp4 = (at->z - pos->z);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(539)
		::lime::math::Vector4 tmp5 = ::lime::math::Vector4_obj::__new(tmp2,tmp3,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(539)
		::lime::math::Vector4 dir = tmp5;		HX_STACK_VAR(dir,"dir");
		HX_STACK_LINE(540)
		::lime::math::Vector4 tmp6 = ::lime::math::Vector4_obj::__new(up->x,up->y,up->z,up->w);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(540)
		::lime::math::Vector4 vup = tmp6;		HX_STACK_VAR(vup,"vup");
		HX_STACK_LINE(541)
		::lime::math::Vector4 right;		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(543)
		{
			HX_STACK_LINE(543)
			Float tmp7 = (dir->x * dir->x);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(543)
			Float tmp8 = (dir->y * dir->y);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(543)
			Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(543)
			Float tmp10 = (dir->z * dir->z);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(543)
			Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(543)
			Float tmp12 = ::Math_obj::sqrt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(543)
			Float l = tmp12;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(543)
			bool tmp13 = (l != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(543)
			if ((tmp13)){
				HX_STACK_LINE(543)
				hx::DivEq(dir->x,l);
				HX_STACK_LINE(543)
				hx::DivEq(dir->y,l);
				HX_STACK_LINE(543)
				hx::DivEq(dir->z,l);
			}
			HX_STACK_LINE(543)
			l;
		}
		HX_STACK_LINE(544)
		{
			HX_STACK_LINE(544)
			Float tmp7 = (vup->x * vup->x);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(544)
			Float tmp8 = (vup->y * vup->y);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(544)
			Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(544)
			Float tmp10 = (vup->z * vup->z);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(544)
			Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(544)
			Float tmp12 = ::Math_obj::sqrt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(544)
			Float l = tmp12;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(544)
			bool tmp13 = (l != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(544)
			if ((tmp13)){
				HX_STACK_LINE(544)
				hx::DivEq(vup->x,l);
				HX_STACK_LINE(544)
				hx::DivEq(vup->y,l);
				HX_STACK_LINE(544)
				hx::DivEq(vup->z,l);
			}
			HX_STACK_LINE(544)
			l;
		}
		HX_STACK_LINE(546)
		::lime::math::Vector4 tmp7 = ::lime::math::Vector4_obj::__new(dir->x,dir->y,dir->z,dir->w);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(546)
		::lime::math::Vector4 dir2 = tmp7;		HX_STACK_VAR(dir2,"dir2");
		HX_STACK_LINE(547)
		{
			HX_STACK_LINE(547)
			Float tmp8 = (vup->x * dir->x);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(547)
			Float tmp9 = (vup->y * dir->y);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(547)
			Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(547)
			Float tmp11 = (vup->z * dir->z);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(547)
			Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(547)
			Float s = tmp12;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(547)
			hx::MultEq(dir2->x,s);
			HX_STACK_LINE(547)
			hx::MultEq(dir2->y,s);
			HX_STACK_LINE(547)
			hx::MultEq(dir2->z,s);
		}
		HX_STACK_LINE(549)
		Float tmp8 = (vup->x - dir2->x);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(549)
		Float tmp9 = (vup->y - dir2->y);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(549)
		Float tmp10 = (vup->z - dir2->z);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(549)
		::lime::math::Vector4 tmp11 = ::lime::math::Vector4_obj::__new(tmp8,tmp9,tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(549)
		vup = tmp11;
		HX_STACK_LINE(551)
		Float tmp12 = (vup->x * vup->x);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(551)
		Float tmp13 = (vup->y * vup->y);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(551)
		Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(551)
		Float tmp15 = (vup->z * vup->z);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(551)
		Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(551)
		Float tmp17 = ::Math_obj::sqrt(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(551)
		bool tmp18 = (tmp17 > (int)0);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(551)
		if ((tmp18)){
			HX_STACK_LINE(553)
			Float tmp19 = (vup->x * vup->x);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(553)
			Float tmp20 = (vup->y * vup->y);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(553)
			Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(553)
			Float tmp22 = (vup->z * vup->z);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(553)
			Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(553)
			Float tmp24 = ::Math_obj::sqrt(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(553)
			Float l = tmp24;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(553)
			bool tmp25 = (l != (int)0);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(553)
			if ((tmp25)){
				HX_STACK_LINE(553)
				hx::DivEq(vup->x,l);
				HX_STACK_LINE(553)
				hx::DivEq(vup->y,l);
				HX_STACK_LINE(553)
				hx::DivEq(vup->z,l);
			}
			HX_STACK_LINE(553)
			l;
		}
		else{
			HX_STACK_LINE(557)
			bool tmp19 = (dir->x != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(557)
			if ((tmp19)){
				HX_STACK_LINE(559)
				Float tmp20 = dir->y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(559)
				Float tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(559)
				Float tmp22 = dir->x;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(559)
				::lime::math::Vector4 tmp23 = ::lime::math::Vector4_obj::__new(tmp21,tmp22,(int)0,null());		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(559)
				vup = tmp23;
			}
			else{
				HX_STACK_LINE(563)
				::lime::math::Vector4 tmp20 = ::lime::math::Vector4_obj::__new((int)1,(int)0,(int)0,null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(563)
				vup = tmp20;
			}
		}
		HX_STACK_LINE(569)
		Float tmp19 = (vup->y * dir->z);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(569)
		Float tmp20 = (vup->z * dir->y);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(569)
		Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(569)
		Float tmp22 = (vup->z * dir->x);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(569)
		Float tmp23 = (vup->x * dir->z);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(569)
		Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(569)
		Float tmp25 = (vup->x * dir->y);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(569)
		Float tmp26 = (vup->y * dir->x);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(569)
		Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(569)
		::lime::math::Vector4 tmp28 = ::lime::math::Vector4_obj::__new(tmp21,tmp24,tmp27,(int)1);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(569)
		right = tmp28;
		HX_STACK_LINE(570)
		{
			HX_STACK_LINE(570)
			Float tmp29 = (right->x * right->x);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(570)
			Float tmp30 = (right->y * right->y);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(570)
			Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(570)
			Float tmp32 = (right->z * right->z);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(570)
			Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(570)
			Float tmp34 = ::Math_obj::sqrt(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(570)
			Float l = tmp34;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(570)
			bool tmp35 = (l != (int)0);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(570)
			if ((tmp35)){
				HX_STACK_LINE(570)
				hx::DivEq(right->x,l);
				HX_STACK_LINE(570)
				hx::DivEq(right->y,l);
				HX_STACK_LINE(570)
				hx::DivEq(right->z,l);
			}
			HX_STACK_LINE(570)
			l;
		}
		HX_STACK_LINE(572)
		Float tmp29 = right->x;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(572)
		hx::__ArrayImplRef(this1,(int)0) = tmp29;
		HX_STACK_LINE(573)
		Float tmp30 = right->y;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(573)
		hx::__ArrayImplRef(this1,(int)4) = tmp30;
		HX_STACK_LINE(574)
		Float tmp31 = right->z;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(574)
		hx::__ArrayImplRef(this1,(int)8) = tmp31;
		HX_STACK_LINE(575)
		hx::__ArrayImplRef(this1,(int)12) = ((Float)0.0);
		HX_STACK_LINE(576)
		Float tmp32 = vup->x;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(576)
		hx::__ArrayImplRef(this1,(int)1) = tmp32;
		HX_STACK_LINE(577)
		Float tmp33 = vup->y;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(577)
		hx::__ArrayImplRef(this1,(int)5) = tmp33;
		HX_STACK_LINE(578)
		Float tmp34 = vup->z;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(578)
		hx::__ArrayImplRef(this1,(int)9) = tmp34;
		HX_STACK_LINE(579)
		hx::__ArrayImplRef(this1,(int)13) = ((Float)0.0);
		HX_STACK_LINE(580)
		Float tmp35 = dir->x;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(580)
		hx::__ArrayImplRef(this1,(int)2) = tmp35;
		HX_STACK_LINE(581)
		Float tmp36 = dir->y;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(581)
		hx::__ArrayImplRef(this1,(int)6) = tmp36;
		HX_STACK_LINE(582)
		Float tmp37 = dir->z;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(582)
		hx::__ArrayImplRef(this1,(int)10) = tmp37;
		HX_STACK_LINE(583)
		hx::__ArrayImplRef(this1,(int)14) = ((Float)0.0);
		HX_STACK_LINE(584)
		Float tmp38 = pos->x;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(584)
		hx::__ArrayImplRef(this1,(int)3) = tmp38;
		HX_STACK_LINE(585)
		Float tmp39 = pos->y;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(585)
		hx::__ArrayImplRef(this1,(int)7) = tmp39;
		HX_STACK_LINE(586)
		Float tmp40 = pos->z;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(586)
		hx::__ArrayImplRef(this1,(int)11) = tmp40;
		HX_STACK_LINE(587)
		hx::__ArrayImplRef(this1,(int)15) = ((Float)1.0);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,pointAt,(void))

Void Matrix4_Impl__obj::prepend( ::lime::utils::Float32Array this1,::lime::utils::Float32Array rhs){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","prepend",0x76fd6d86,"lime.math._Matrix4.Matrix4_Impl_.prepend","lime/math/Matrix4.hx",592,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(rhs,"rhs")
		HX_STACK_LINE(594)
		::lime::utils::Float32Array tmp = rhs;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(594)
		Float tmp1 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp,(int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(594)
		Float m111 = tmp1;		HX_STACK_VAR(m111,"m111");
		HX_STACK_LINE(594)
		::lime::utils::Float32Array tmp2 = rhs;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(594)
		Float tmp3 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp2,(int)4);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(594)
		Float m121 = tmp3;		HX_STACK_VAR(m121,"m121");
		HX_STACK_LINE(594)
		::lime::utils::Float32Array tmp4 = rhs;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(594)
		Float tmp5 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp4,(int)8);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(594)
		Float m131 = tmp5;		HX_STACK_VAR(m131,"m131");
		HX_STACK_LINE(594)
		::lime::utils::Float32Array tmp6 = rhs;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(594)
		Float tmp7 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp6,(int)12);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(594)
		Float m141 = tmp7;		HX_STACK_VAR(m141,"m141");
		HX_STACK_LINE(595)
		::lime::utils::Float32Array tmp8 = rhs;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(595)
		Float tmp9 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp8,(int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(595)
		Float m112 = tmp9;		HX_STACK_VAR(m112,"m112");
		HX_STACK_LINE(595)
		::lime::utils::Float32Array tmp10 = rhs;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(595)
		Float tmp11 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp10,(int)5);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(595)
		Float m122 = tmp11;		HX_STACK_VAR(m122,"m122");
		HX_STACK_LINE(595)
		::lime::utils::Float32Array tmp12 = rhs;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(595)
		Float tmp13 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp12,(int)9);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(595)
		Float m132 = tmp13;		HX_STACK_VAR(m132,"m132");
		HX_STACK_LINE(595)
		::lime::utils::Float32Array tmp14 = rhs;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(595)
		Float tmp15 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp14,(int)13);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(595)
		Float m142 = tmp15;		HX_STACK_VAR(m142,"m142");
		HX_STACK_LINE(596)
		::lime::utils::Float32Array tmp16 = rhs;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(596)
		Float tmp17 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp16,(int)2);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(596)
		Float m113 = tmp17;		HX_STACK_VAR(m113,"m113");
		HX_STACK_LINE(596)
		::lime::utils::Float32Array tmp18 = rhs;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(596)
		Float tmp19 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp18,(int)6);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(596)
		Float m123 = tmp19;		HX_STACK_VAR(m123,"m123");
		HX_STACK_LINE(596)
		::lime::utils::Float32Array tmp20 = rhs;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(596)
		Float tmp21 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp20,(int)10);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(596)
		Float m133 = tmp21;		HX_STACK_VAR(m133,"m133");
		HX_STACK_LINE(596)
		::lime::utils::Float32Array tmp22 = rhs;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(596)
		Float tmp23 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp22,(int)14);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(596)
		Float m143 = tmp23;		HX_STACK_VAR(m143,"m143");
		HX_STACK_LINE(597)
		::lime::utils::Float32Array tmp24 = rhs;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(597)
		Float tmp25 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp24,(int)3);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(597)
		Float m114 = tmp25;		HX_STACK_VAR(m114,"m114");
		HX_STACK_LINE(597)
		::lime::utils::Float32Array tmp26 = rhs;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(597)
		Float tmp27 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp26,(int)7);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(597)
		Float m124 = tmp27;		HX_STACK_VAR(m124,"m124");
		HX_STACK_LINE(597)
		::lime::utils::Float32Array tmp28 = rhs;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(597)
		Float tmp29 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp28,(int)11);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(597)
		Float m134 = tmp29;		HX_STACK_VAR(m134,"m134");
		HX_STACK_LINE(597)
		::lime::utils::Float32Array tmp30 = rhs;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(597)
		Float tmp31 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(tmp30,(int)15);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(597)
		Float m144 = tmp31;		HX_STACK_VAR(m144,"m144");
		HX_STACK_LINE(598)
		Float tmp32 = this1->__get((int)0);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(598)
		Float m211 = tmp32;		HX_STACK_VAR(m211,"m211");
		HX_STACK_LINE(598)
		Float tmp33 = this1->__get((int)4);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(598)
		Float m221 = tmp33;		HX_STACK_VAR(m221,"m221");
		HX_STACK_LINE(598)
		Float tmp34 = this1->__get((int)8);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(598)
		Float m231 = tmp34;		HX_STACK_VAR(m231,"m231");
		HX_STACK_LINE(598)
		Float tmp35 = this1->__get((int)12);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(598)
		Float m241 = tmp35;		HX_STACK_VAR(m241,"m241");
		HX_STACK_LINE(599)
		Float tmp36 = this1->__get((int)1);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(599)
		Float m212 = tmp36;		HX_STACK_VAR(m212,"m212");
		HX_STACK_LINE(599)
		Float tmp37 = this1->__get((int)5);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(599)
		Float m222 = tmp37;		HX_STACK_VAR(m222,"m222");
		HX_STACK_LINE(599)
		Float tmp38 = this1->__get((int)9);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(599)
		Float m232 = tmp38;		HX_STACK_VAR(m232,"m232");
		HX_STACK_LINE(599)
		Float tmp39 = this1->__get((int)13);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(599)
		Float m242 = tmp39;		HX_STACK_VAR(m242,"m242");
		HX_STACK_LINE(600)
		Float tmp40 = this1->__get((int)2);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(600)
		Float m213 = tmp40;		HX_STACK_VAR(m213,"m213");
		HX_STACK_LINE(600)
		Float tmp41 = this1->__get((int)6);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(600)
		Float m223 = tmp41;		HX_STACK_VAR(m223,"m223");
		HX_STACK_LINE(600)
		Float tmp42 = this1->__get((int)10);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(600)
		Float m233 = tmp42;		HX_STACK_VAR(m233,"m233");
		HX_STACK_LINE(600)
		Float tmp43 = this1->__get((int)14);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(600)
		Float m243 = tmp43;		HX_STACK_VAR(m243,"m243");
		HX_STACK_LINE(601)
		Float tmp44 = this1->__get((int)3);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(601)
		Float m214 = tmp44;		HX_STACK_VAR(m214,"m214");
		HX_STACK_LINE(601)
		Float tmp45 = this1->__get((int)7);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(601)
		Float m224 = tmp45;		HX_STACK_VAR(m224,"m224");
		HX_STACK_LINE(601)
		Float tmp46 = this1->__get((int)11);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(601)
		Float m234 = tmp46;		HX_STACK_VAR(m234,"m234");
		HX_STACK_LINE(601)
		Float tmp47 = this1->__get((int)15);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(601)
		Float m244 = tmp47;		HX_STACK_VAR(m244,"m244");
		HX_STACK_LINE(603)
		Float tmp48 = (m111 * m211);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(603)
		Float tmp49 = (m112 * m221);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(603)
		Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(603)
		Float tmp51 = (m113 * m231);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(603)
		Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(603)
		Float tmp53 = (m114 * m241);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(603)
		Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(603)
		hx::__ArrayImplRef(this1,(int)0) = tmp54;
		HX_STACK_LINE(604)
		Float tmp55 = (m111 * m212);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(604)
		Float tmp56 = (m112 * m222);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(604)
		Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(604)
		Float tmp58 = (m113 * m232);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(604)
		Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(604)
		Float tmp60 = (m114 * m242);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(604)
		Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(604)
		hx::__ArrayImplRef(this1,(int)1) = tmp61;
		HX_STACK_LINE(605)
		Float tmp62 = (m111 * m213);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(605)
		Float tmp63 = (m112 * m223);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(605)
		Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(605)
		Float tmp65 = (m113 * m233);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(605)
		Float tmp66 = (tmp64 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(605)
		Float tmp67 = (m114 * m243);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(605)
		Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(605)
		hx::__ArrayImplRef(this1,(int)2) = tmp68;
		HX_STACK_LINE(606)
		Float tmp69 = (m111 * m214);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(606)
		Float tmp70 = (m112 * m224);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(606)
		Float tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(606)
		Float tmp72 = (m113 * m234);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(606)
		Float tmp73 = (tmp71 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(606)
		Float tmp74 = (m114 * m244);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(606)
		Float tmp75 = (tmp73 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(606)
		hx::__ArrayImplRef(this1,(int)3) = tmp75;
		HX_STACK_LINE(608)
		Float tmp76 = (m121 * m211);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(608)
		Float tmp77 = (m122 * m221);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(608)
		Float tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(608)
		Float tmp79 = (m123 * m231);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(608)
		Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(608)
		Float tmp81 = (m124 * m241);		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(608)
		Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(608)
		hx::__ArrayImplRef(this1,(int)4) = tmp82;
		HX_STACK_LINE(609)
		Float tmp83 = (m121 * m212);		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(609)
		Float tmp84 = (m122 * m222);		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(609)
		Float tmp85 = (tmp83 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(609)
		Float tmp86 = (m123 * m232);		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(609)
		Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(609)
		Float tmp88 = (m124 * m242);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(609)
		Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(609)
		hx::__ArrayImplRef(this1,(int)5) = tmp89;
		HX_STACK_LINE(610)
		Float tmp90 = (m121 * m213);		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(610)
		Float tmp91 = (m122 * m223);		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(610)
		Float tmp92 = (tmp90 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(610)
		Float tmp93 = (m123 * m233);		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(610)
		Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(610)
		Float tmp95 = (m124 * m243);		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(610)
		Float tmp96 = (tmp94 + tmp95);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(610)
		hx::__ArrayImplRef(this1,(int)6) = tmp96;
		HX_STACK_LINE(611)
		Float tmp97 = (m121 * m214);		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(611)
		Float tmp98 = (m122 * m224);		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(611)
		Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(611)
		Float tmp100 = (m123 * m234);		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(611)
		Float tmp101 = (tmp99 + tmp100);		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(611)
		Float tmp102 = (m124 * m244);		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(611)
		Float tmp103 = (tmp101 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(611)
		hx::__ArrayImplRef(this1,(int)7) = tmp103;
		HX_STACK_LINE(613)
		Float tmp104 = (m131 * m211);		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(613)
		Float tmp105 = (m132 * m221);		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(613)
		Float tmp106 = (tmp104 + tmp105);		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(613)
		Float tmp107 = (m133 * m231);		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(613)
		Float tmp108 = (tmp106 + tmp107);		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(613)
		Float tmp109 = (m134 * m241);		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(613)
		Float tmp110 = (tmp108 + tmp109);		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(613)
		hx::__ArrayImplRef(this1,(int)8) = tmp110;
		HX_STACK_LINE(614)
		Float tmp111 = (m131 * m212);		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(614)
		Float tmp112 = (m132 * m222);		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(614)
		Float tmp113 = (tmp111 + tmp112);		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(614)
		Float tmp114 = (m133 * m232);		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(614)
		Float tmp115 = (tmp113 + tmp114);		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(614)
		Float tmp116 = (m134 * m242);		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(614)
		Float tmp117 = (tmp115 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(614)
		hx::__ArrayImplRef(this1,(int)9) = tmp117;
		HX_STACK_LINE(615)
		Float tmp118 = (m131 * m213);		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(615)
		Float tmp119 = (m132 * m223);		HX_STACK_VAR(tmp119,"tmp119");
		HX_STACK_LINE(615)
		Float tmp120 = (tmp118 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
		HX_STACK_LINE(615)
		Float tmp121 = (m133 * m233);		HX_STACK_VAR(tmp121,"tmp121");
		HX_STACK_LINE(615)
		Float tmp122 = (tmp120 + tmp121);		HX_STACK_VAR(tmp122,"tmp122");
		HX_STACK_LINE(615)
		Float tmp123 = (m134 * m243);		HX_STACK_VAR(tmp123,"tmp123");
		HX_STACK_LINE(615)
		Float tmp124 = (tmp122 + tmp123);		HX_STACK_VAR(tmp124,"tmp124");
		HX_STACK_LINE(615)
		hx::__ArrayImplRef(this1,(int)10) = tmp124;
		HX_STACK_LINE(616)
		Float tmp125 = (m131 * m214);		HX_STACK_VAR(tmp125,"tmp125");
		HX_STACK_LINE(616)
		Float tmp126 = (m132 * m224);		HX_STACK_VAR(tmp126,"tmp126");
		HX_STACK_LINE(616)
		Float tmp127 = (tmp125 + tmp126);		HX_STACK_VAR(tmp127,"tmp127");
		HX_STACK_LINE(616)
		Float tmp128 = (m133 * m234);		HX_STACK_VAR(tmp128,"tmp128");
		HX_STACK_LINE(616)
		Float tmp129 = (tmp127 + tmp128);		HX_STACK_VAR(tmp129,"tmp129");
		HX_STACK_LINE(616)
		Float tmp130 = (m134 * m244);		HX_STACK_VAR(tmp130,"tmp130");
		HX_STACK_LINE(616)
		Float tmp131 = (tmp129 + tmp130);		HX_STACK_VAR(tmp131,"tmp131");
		HX_STACK_LINE(616)
		hx::__ArrayImplRef(this1,(int)11) = tmp131;
		HX_STACK_LINE(618)
		Float tmp132 = (m141 * m211);		HX_STACK_VAR(tmp132,"tmp132");
		HX_STACK_LINE(618)
		Float tmp133 = (m142 * m221);		HX_STACK_VAR(tmp133,"tmp133");
		HX_STACK_LINE(618)
		Float tmp134 = (tmp132 + tmp133);		HX_STACK_VAR(tmp134,"tmp134");
		HX_STACK_LINE(618)
		Float tmp135 = (m143 * m231);		HX_STACK_VAR(tmp135,"tmp135");
		HX_STACK_LINE(618)
		Float tmp136 = (tmp134 + tmp135);		HX_STACK_VAR(tmp136,"tmp136");
		HX_STACK_LINE(618)
		Float tmp137 = (m144 * m241);		HX_STACK_VAR(tmp137,"tmp137");
		HX_STACK_LINE(618)
		Float tmp138 = (tmp136 + tmp137);		HX_STACK_VAR(tmp138,"tmp138");
		HX_STACK_LINE(618)
		hx::__ArrayImplRef(this1,(int)12) = tmp138;
		HX_STACK_LINE(619)
		Float tmp139 = (m141 * m212);		HX_STACK_VAR(tmp139,"tmp139");
		HX_STACK_LINE(619)
		Float tmp140 = (m142 * m222);		HX_STACK_VAR(tmp140,"tmp140");
		HX_STACK_LINE(619)
		Float tmp141 = (tmp139 + tmp140);		HX_STACK_VAR(tmp141,"tmp141");
		HX_STACK_LINE(619)
		Float tmp142 = (m143 * m232);		HX_STACK_VAR(tmp142,"tmp142");
		HX_STACK_LINE(619)
		Float tmp143 = (tmp141 + tmp142);		HX_STACK_VAR(tmp143,"tmp143");
		HX_STACK_LINE(619)
		Float tmp144 = (m144 * m242);		HX_STACK_VAR(tmp144,"tmp144");
		HX_STACK_LINE(619)
		Float tmp145 = (tmp143 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
		HX_STACK_LINE(619)
		hx::__ArrayImplRef(this1,(int)13) = tmp145;
		HX_STACK_LINE(620)
		Float tmp146 = (m141 * m213);		HX_STACK_VAR(tmp146,"tmp146");
		HX_STACK_LINE(620)
		Float tmp147 = (m142 * m223);		HX_STACK_VAR(tmp147,"tmp147");
		HX_STACK_LINE(620)
		Float tmp148 = (tmp146 + tmp147);		HX_STACK_VAR(tmp148,"tmp148");
		HX_STACK_LINE(620)
		Float tmp149 = (m143 * m233);		HX_STACK_VAR(tmp149,"tmp149");
		HX_STACK_LINE(620)
		Float tmp150 = (tmp148 + tmp149);		HX_STACK_VAR(tmp150,"tmp150");
		HX_STACK_LINE(620)
		Float tmp151 = (m144 * m243);		HX_STACK_VAR(tmp151,"tmp151");
		HX_STACK_LINE(620)
		Float tmp152 = (tmp150 + tmp151);		HX_STACK_VAR(tmp152,"tmp152");
		HX_STACK_LINE(620)
		hx::__ArrayImplRef(this1,(int)14) = tmp152;
		HX_STACK_LINE(621)
		Float tmp153 = (m141 * m214);		HX_STACK_VAR(tmp153,"tmp153");
		HX_STACK_LINE(621)
		Float tmp154 = (m142 * m224);		HX_STACK_VAR(tmp154,"tmp154");
		HX_STACK_LINE(621)
		Float tmp155 = (tmp153 + tmp154);		HX_STACK_VAR(tmp155,"tmp155");
		HX_STACK_LINE(621)
		Float tmp156 = (m143 * m234);		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(621)
		Float tmp157 = (tmp155 + tmp156);		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(621)
		Float tmp158 = (m144 * m244);		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(621)
		Float tmp159 = (tmp157 + tmp158);		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(621)
		hx::__ArrayImplRef(this1,(int)15) = tmp159;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,prepend,(void))

Void Matrix4_Impl__obj::prependRotation( ::lime::utils::Float32Array this1,Float degrees,::lime::math::Vector4 axis,::lime::math::Vector4 pivotPoint){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","prependRotation",0x52475ce4,"lime.math._Matrix4.Matrix4_Impl_.prependRotation","lime/math/Matrix4.hx",626,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(degrees,"degrees")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(pivotPoint,"pivotPoint")
		HX_STACK_LINE(628)
		Float tmp = axis->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(628)
		Float tmp1 = axis->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(628)
		Float tmp2 = axis->z;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(628)
		Float tmp3 = degrees;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(628)
		::lime::utils::Float32Array tmp4 = ::lime::math::_Matrix4::Matrix4_Impl__obj::getAxisRotation(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(628)
		::lime::utils::Float32Array m = tmp4;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(630)
		bool tmp5 = (pivotPoint != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(630)
		if ((tmp5)){
			HX_STACK_LINE(632)
			::lime::math::Vector4 p = pivotPoint;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(633)
			::lime::utils::Float32Array tmp6 = m;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(633)
			Float tmp7 = p->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(633)
			Float tmp8 = p->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(633)
			Float tmp9 = p->z;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(633)
			::lime::math::_Matrix4::Matrix4_Impl__obj::appendTranslation(tmp6,tmp7,tmp8,tmp9);
		}
		HX_STACK_LINE(637)
		::lime::utils::Float32Array tmp6 = this1;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(637)
		::lime::utils::Float32Array tmp7 = m;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(637)
		::lime::math::_Matrix4::Matrix4_Impl__obj::prepend(tmp6,tmp7);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,prependRotation,(void))

Void Matrix4_Impl__obj::prependScale( ::lime::utils::Float32Array this1,Float xScale,Float yScale,Float zScale){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","prependScale",0x9a060b24,"lime.math._Matrix4.Matrix4_Impl_.prependScale","lime/math/Matrix4.hx",642,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(xScale,"xScale")
		HX_STACK_ARG(yScale,"yScale")
		HX_STACK_ARG(zScale,"zScale")
		HX_STACK_LINE(644)
		::lime::utils::Float32Array tmp = this1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(644)
		::lime::utils::Float32Array tmp1 = ::lime::utils::Float32Array_obj::__new(Array_obj< Float >::__new().Add(xScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(yScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(zScale).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(644)
		::lime::utils::Float32Array tmp2 = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(644)
		::lime::math::_Matrix4::Matrix4_Impl__obj::prepend(tmp,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,prependScale,(void))

Void Matrix4_Impl__obj::prependTranslation( ::lime::utils::Float32Array this1,Float x,Float y,Float z){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","prependTranslation",0xfad7dd0b,"lime.math._Matrix4.Matrix4_Impl_.prependTranslation","lime/math/Matrix4.hx",649,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(651)
		::lime::utils::Float32Array tmp = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(651)
		::lime::utils::Float32Array m = tmp;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(652)
		::lime::utils::Float32Array tmp1 = m;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(652)
		::lime::math::Vector4 tmp2 = ::lime::math::Vector4_obj::__new(x,y,z,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(652)
		::lime::math::_Matrix4::Matrix4_Impl__obj::set_position(tmp1,tmp2);
		HX_STACK_LINE(653)
		::lime::utils::Float32Array tmp3 = this1;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(653)
		::lime::utils::Float32Array tmp4 = m;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(653)
		::lime::math::_Matrix4::Matrix4_Impl__obj::prepend(tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,prependTranslation,(void))

::lime::math::Vector4 Matrix4_Impl__obj::transformVector( ::lime::utils::Float32Array this1,::lime::math::Vector4 v){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","transformVector",0x3cbf39c7,"lime.math._Matrix4.Matrix4_Impl_.transformVector","lime/math/Matrix4.hx",742,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(744)
	Float x = v->x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(744)
	Float y = v->y;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(744)
	Float z = v->z;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(747)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(747)
	Float tmp1 = this1->__get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(747)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(747)
	Float tmp3 = y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(747)
	Float tmp4 = this1->__get((int)4);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(747)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(747)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(747)
	Float tmp7 = z;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(747)
	Float tmp8 = this1->__get((int)8);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(747)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(747)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(747)
	Float tmp11 = this1->__get((int)12);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(747)
	Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(748)
	Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(748)
	Float tmp14 = this1->__get((int)1);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(748)
	Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(748)
	Float tmp16 = y;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(748)
	Float tmp17 = this1->__get((int)5);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(748)
	Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(748)
	Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(748)
	Float tmp20 = z;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(748)
	Float tmp21 = this1->__get((int)9);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(748)
	Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(748)
	Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(748)
	Float tmp24 = this1->__get((int)13);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(748)
	Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(749)
	Float tmp26 = x;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(749)
	Float tmp27 = this1->__get((int)2);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(749)
	Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(749)
	Float tmp29 = y;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(749)
	Float tmp30 = this1->__get((int)6);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(749)
	Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(749)
	Float tmp32 = (tmp28 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(749)
	Float tmp33 = z;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(749)
	Float tmp34 = this1->__get((int)10);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(749)
	Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(749)
	Float tmp36 = (tmp32 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(749)
	Float tmp37 = this1->__get((int)14);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(749)
	Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(750)
	Float tmp39 = x;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(750)
	Float tmp40 = this1->__get((int)3);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(750)
	Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(750)
	Float tmp42 = y;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(750)
	Float tmp43 = this1->__get((int)7);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(750)
	Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(750)
	Float tmp45 = (tmp41 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(750)
	Float tmp46 = z;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(750)
	Float tmp47 = this1->__get((int)11);		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(750)
	Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(750)
	Float tmp49 = (tmp45 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(750)
	Float tmp50 = this1->__get((int)15);		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(750)
	Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(746)
	::lime::math::Vector4 tmp52 = ::lime::math::Vector4_obj::__new(tmp12,tmp25,tmp38,tmp51);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(746)
	return tmp52;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,transformVector,return )

Void Matrix4_Impl__obj::transformVectors( ::lime::utils::Float32Array this1,::lime::utils::Float32Array ain,::lime::utils::Float32Array aout){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","transformVectors",0xea9354cc,"lime.math._Matrix4.Matrix4_Impl_.transformVectors","lime/math/Matrix4.hx",755,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(ain,"ain")
		HX_STACK_ARG(aout,"aout")
		HX_STACK_LINE(757)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(759)
		while((true)){
			HX_STACK_LINE(759)
			int tmp = (i + (int)3);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(759)
			int tmp1 = ain->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(759)
			bool tmp2 = (tmp <= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(759)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(759)
			if ((tmp3)){
				HX_STACK_LINE(759)
				break;
			}
			HX_STACK_LINE(761)
			Float tmp4 = ain->__get(i);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(761)
			Float x = tmp4;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(761)
			::lime::utils::Float32Array tmp5 = ain;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(761)
			int tmp6 = (i + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(761)
			Float tmp7 = tmp5->__get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(761)
			Float y = tmp7;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(761)
			::lime::utils::Float32Array tmp8 = ain;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(761)
			int tmp9 = (i + (int)2);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(761)
			Float tmp10 = tmp8->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(761)
			Float z = tmp10;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(763)
			Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(763)
			Float tmp12 = this1->__get((int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(763)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(763)
			Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(763)
			Float tmp15 = this1->__get((int)4);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(763)
			Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(763)
			Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(763)
			Float tmp18 = z;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(763)
			Float tmp19 = this1->__get((int)8);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(763)
			Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(763)
			Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(763)
			Float tmp22 = this1->__get((int)12);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(763)
			Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(763)
			hx::__ArrayImplRef(aout,i) = tmp23;
			HX_STACK_LINE(764)
			::lime::utils::Float32Array tmp24 = aout;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(764)
			int tmp25 = (i + (int)1);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(764)
			Float tmp26 = x;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(764)
			Float tmp27 = this1->__get((int)1);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(764)
			Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(764)
			Float tmp29 = y;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(764)
			Float tmp30 = this1->__get((int)5);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(764)
			Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(764)
			Float tmp32 = (tmp28 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(764)
			Float tmp33 = z;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(764)
			Float tmp34 = this1->__get((int)9);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(764)
			Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(764)
			Float tmp36 = (tmp32 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(764)
			Float tmp37 = this1->__get((int)13);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(764)
			Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(764)
			hx::__ArrayImplRef(tmp24,tmp25) = tmp38;
			HX_STACK_LINE(765)
			::lime::utils::Float32Array tmp39 = aout;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(765)
			int tmp40 = (i + (int)2);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(765)
			Float tmp41 = x;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(765)
			Float tmp42 = this1->__get((int)2);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(765)
			Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(765)
			Float tmp44 = y;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(765)
			Float tmp45 = this1->__get((int)6);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(765)
			Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(765)
			Float tmp47 = (tmp43 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(765)
			Float tmp48 = z;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(765)
			Float tmp49 = this1->__get((int)10);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(765)
			Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(765)
			Float tmp51 = (tmp47 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(765)
			Float tmp52 = this1->__get((int)14);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(765)
			Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(765)
			hx::__ArrayImplRef(tmp39,tmp40) = tmp53;
			HX_STACK_LINE(767)
			hx::AddEq(i,(int)3);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,transformVectors,(void))

Void Matrix4_Impl__obj::transpose( ::lime::utils::Float32Array this1){
{
		HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","transpose",0x2d08b4f1,"lime.math._Matrix4.Matrix4_Impl_.transpose","lime/math/Matrix4.hx",774,0xeb65dbd8)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(776)
		::lime::utils::Float32Array tmp = ::lime::utils::Float32Array_obj::__new(this1,null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(776)
		::lime::utils::Float32Array othis = tmp;		HX_STACK_VAR(othis,"othis");
		HX_STACK_LINE(777)
		Float tmp1 = othis->__get((int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(777)
		hx::__ArrayImplRef(this1,(int)1) = tmp1;
		HX_STACK_LINE(778)
		Float tmp2 = othis->__get((int)8);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(778)
		hx::__ArrayImplRef(this1,(int)2) = tmp2;
		HX_STACK_LINE(779)
		Float tmp3 = othis->__get((int)12);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(779)
		hx::__ArrayImplRef(this1,(int)3) = tmp3;
		HX_STACK_LINE(780)
		Float tmp4 = othis->__get((int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(780)
		hx::__ArrayImplRef(this1,(int)4) = tmp4;
		HX_STACK_LINE(781)
		Float tmp5 = othis->__get((int)9);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(781)
		hx::__ArrayImplRef(this1,(int)6) = tmp5;
		HX_STACK_LINE(782)
		Float tmp6 = othis->__get((int)13);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(782)
		hx::__ArrayImplRef(this1,(int)7) = tmp6;
		HX_STACK_LINE(783)
		Float tmp7 = othis->__get((int)2);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(783)
		hx::__ArrayImplRef(this1,(int)8) = tmp7;
		HX_STACK_LINE(784)
		Float tmp8 = othis->__get((int)6);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(784)
		hx::__ArrayImplRef(this1,(int)9) = tmp8;
		HX_STACK_LINE(785)
		Float tmp9 = othis->__get((int)14);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(785)
		hx::__ArrayImplRef(this1,(int)11) = tmp9;
		HX_STACK_LINE(786)
		Float tmp10 = othis->__get((int)3);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(786)
		hx::__ArrayImplRef(this1,(int)12) = tmp10;
		HX_STACK_LINE(787)
		Float tmp11 = othis->__get((int)7);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(787)
		hx::__ArrayImplRef(this1,(int)13) = tmp11;
		HX_STACK_LINE(788)
		Float tmp12 = othis->__get((int)11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(788)
		hx::__ArrayImplRef(this1,(int)14) = tmp12;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,transpose,(void))

::lime::utils::Float32Array Matrix4_Impl__obj::getAxisRotation( Float x,Float y,Float z,Float degrees){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","getAxisRotation",0x61f6832d,"lime.math._Matrix4.Matrix4_Impl_.getAxisRotation","lime/math/Matrix4.hx",792,0xeb65dbd8)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(z,"z")
	HX_STACK_ARG(degrees,"degrees")
	HX_STACK_LINE(794)
	::lime::utils::Float32Array tmp = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(794)
	::lime::utils::Float32Array m = tmp;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(796)
	::lime::math::Vector4 tmp1 = ::lime::math::Vector4_obj::__new(x,y,z,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(796)
	::lime::math::Vector4 a1 = tmp1;		HX_STACK_VAR(a1,"a1");
	HX_STACK_LINE(797)
	Float tmp2 = degrees;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(797)
	Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(797)
	Float tmp4 = ::Math_obj::PI;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(797)
	Float tmp5 = (Float(tmp4) / Float((int)180));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(797)
	Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(797)
	Float rad = tmp6;		HX_STACK_VAR(rad,"rad");
	HX_STACK_LINE(798)
	Float tmp7 = rad;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(798)
	Float tmp8 = ::Math_obj::cos(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(798)
	Float c = tmp8;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(799)
	Float tmp9 = rad;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(799)
	Float tmp10 = ::Math_obj::sin(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(799)
	Float s = tmp10;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(800)
	Float tmp11 = (((Float)1.0) - c);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(800)
	Float t = tmp11;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(802)
	::lime::utils::Float32Array tmp12 = m;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(802)
	Float tmp13 = c;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(802)
	Float tmp14 = (a1->x * a1->x);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(802)
	Float tmp15 = t;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(802)
	Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(802)
	Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(802)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp12,(int)0,tmp17);
	HX_STACK_LINE(803)
	::lime::utils::Float32Array tmp18 = m;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(803)
	Float tmp19 = c;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(803)
	Float tmp20 = (a1->y * a1->y);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(803)
	Float tmp21 = t;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(803)
	Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(803)
	Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(803)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp18,(int)5,tmp23);
	HX_STACK_LINE(804)
	::lime::utils::Float32Array tmp24 = m;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(804)
	Float tmp25 = c;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(804)
	Float tmp26 = (a1->z * a1->z);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(804)
	Float tmp27 = t;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(804)
	Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(804)
	Float tmp29 = (tmp25 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(804)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp24,(int)10,tmp29);
	HX_STACK_LINE(806)
	Float tmp30 = (a1->x * a1->y);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(806)
	Float tmp31 = t;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(806)
	Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(806)
	Float tmp110 = tmp32;		HX_STACK_VAR(tmp110,"tmp110");
	HX_STACK_LINE(807)
	Float tmp33 = (a1->z * s);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(807)
	Float tmp210 = tmp33;		HX_STACK_VAR(tmp210,"tmp210");
	HX_STACK_LINE(808)
	::lime::utils::Float32Array tmp34 = m;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(808)
	Float tmp35 = (tmp110 + tmp210);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(808)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp34,(int)4,tmp35);
	HX_STACK_LINE(809)
	::lime::utils::Float32Array tmp36 = m;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(809)
	Float tmp37 = (tmp110 - tmp210);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(809)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp36,(int)1,tmp37);
	HX_STACK_LINE(810)
	Float tmp38 = (a1->x * a1->z);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(810)
	Float tmp39 = t;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(810)
	Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(810)
	tmp110 = tmp40;
	HX_STACK_LINE(811)
	Float tmp41 = (a1->y * s);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(811)
	tmp210 = tmp41;
	HX_STACK_LINE(812)
	::lime::utils::Float32Array tmp42 = m;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(812)
	Float tmp43 = (tmp110 - tmp210);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(812)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp42,(int)8,tmp43);
	HX_STACK_LINE(813)
	::lime::utils::Float32Array tmp44 = m;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(813)
	Float tmp45 = (tmp110 + tmp210);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(813)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp44,(int)2,tmp45);
	HX_STACK_LINE(814)
	Float tmp46 = (a1->y * a1->z);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(814)
	Float tmp47 = t;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(814)
	Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(814)
	tmp110 = tmp48;
	HX_STACK_LINE(815)
	Float tmp49 = (a1->x * s);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(815)
	tmp210 = tmp49;
	HX_STACK_LINE(816)
	::lime::utils::Float32Array tmp50 = m;		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(816)
	Float tmp51 = (tmp110 + tmp210);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(816)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp50,(int)9,tmp51);
	HX_STACK_LINE(817)
	::lime::utils::Float32Array tmp52 = m;		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(817)
	Float tmp53 = (tmp110 - tmp210);		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(817)
	::lime::math::_Matrix4::Matrix4_Impl__obj::set(tmp52,(int)6,tmp53);
	HX_STACK_LINE(819)
	::lime::utils::Float32Array tmp54 = m;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(819)
	return tmp54;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix4_Impl__obj,getAxisRotation,return )

Float Matrix4_Impl__obj::get_determinant( ::lime::utils::Float32Array this1){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","get_determinant",0x5d0323a4,"lime.math._Matrix4.Matrix4_Impl_.get_determinant","lime/math/Matrix4.hx",831,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(833)
	Float tmp = this1->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(833)
	Float tmp1 = this1->__get((int)5);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(833)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(833)
	Float tmp3 = this1->__get((int)4);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(833)
	Float tmp4 = this1->__get((int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(833)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(833)
	Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(833)
	Float tmp7 = this1->__get((int)10);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(833)
	Float tmp8 = this1->__get((int)15);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(833)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(833)
	Float tmp10 = this1->__get((int)14);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(833)
	Float tmp11 = this1->__get((int)11);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(833)
	Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(833)
	Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(833)
	Float tmp14 = (tmp6 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(834)
	Float tmp15 = this1->__get((int)0);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(834)
	Float tmp16 = this1->__get((int)9);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(834)
	Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(834)
	Float tmp18 = this1->__get((int)8);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(834)
	Float tmp19 = this1->__get((int)1);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(834)
	Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(834)
	Float tmp21 = (tmp17 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(834)
	Float tmp22 = this1->__get((int)6);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(834)
	Float tmp23 = this1->__get((int)15);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(834)
	Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(834)
	Float tmp25 = this1->__get((int)14);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(834)
	Float tmp26 = this1->__get((int)7);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(834)
	Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(834)
	Float tmp28 = (tmp24 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(834)
	Float tmp29 = (tmp21 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(833)
	Float tmp30 = (tmp14 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(835)
	Float tmp31 = this1->__get((int)0);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(835)
	Float tmp32 = this1->__get((int)13);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(835)
	Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(835)
	Float tmp34 = this1->__get((int)12);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(835)
	Float tmp35 = this1->__get((int)1);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(835)
	Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(835)
	Float tmp37 = (tmp33 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(835)
	Float tmp38 = this1->__get((int)6);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(835)
	Float tmp39 = this1->__get((int)11);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(835)
	Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(835)
	Float tmp41 = this1->__get((int)10);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(835)
	Float tmp42 = this1->__get((int)7);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(835)
	Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(835)
	Float tmp44 = (tmp40 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(835)
	Float tmp45 = (tmp37 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(833)
	Float tmp46 = (tmp30 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(836)
	Float tmp47 = this1->__get((int)4);		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(836)
	Float tmp48 = this1->__get((int)9);		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(836)
	Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(836)
	Float tmp50 = this1->__get((int)8);		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(836)
	Float tmp51 = this1->__get((int)5);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(836)
	Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(836)
	Float tmp53 = (tmp49 - tmp52);		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(836)
	Float tmp54 = this1->__get((int)2);		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(836)
	Float tmp55 = this1->__get((int)15);		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(836)
	Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(836)
	Float tmp57 = this1->__get((int)14);		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(836)
	Float tmp58 = this1->__get((int)3);		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(836)
	Float tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(836)
	Float tmp60 = (tmp56 - tmp59);		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(836)
	Float tmp61 = (tmp53 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(833)
	Float tmp62 = (tmp46 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(837)
	Float tmp63 = this1->__get((int)4);		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(837)
	Float tmp64 = this1->__get((int)13);		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(837)
	Float tmp65 = (tmp63 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(837)
	Float tmp66 = this1->__get((int)12);		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(837)
	Float tmp67 = this1->__get((int)5);		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(837)
	Float tmp68 = (tmp66 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(837)
	Float tmp69 = (tmp65 - tmp68);		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(837)
	Float tmp70 = this1->__get((int)2);		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(837)
	Float tmp71 = this1->__get((int)11);		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(837)
	Float tmp72 = (tmp70 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(837)
	Float tmp73 = this1->__get((int)10);		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(837)
	Float tmp74 = this1->__get((int)3);		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(837)
	Float tmp75 = (tmp73 * tmp74);		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(837)
	Float tmp76 = (tmp72 - tmp75);		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(837)
	Float tmp77 = (tmp69 * tmp76);		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(833)
	Float tmp78 = (tmp62 - tmp77);		HX_STACK_VAR(tmp78,"tmp78");
	HX_STACK_LINE(838)
	Float tmp79 = this1->__get((int)8);		HX_STACK_VAR(tmp79,"tmp79");
	HX_STACK_LINE(838)
	Float tmp80 = this1->__get((int)13);		HX_STACK_VAR(tmp80,"tmp80");
	HX_STACK_LINE(838)
	Float tmp81 = (tmp79 * tmp80);		HX_STACK_VAR(tmp81,"tmp81");
	HX_STACK_LINE(838)
	Float tmp82 = this1->__get((int)12);		HX_STACK_VAR(tmp82,"tmp82");
	HX_STACK_LINE(838)
	Float tmp83 = this1->__get((int)9);		HX_STACK_VAR(tmp83,"tmp83");
	HX_STACK_LINE(838)
	Float tmp84 = (tmp82 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
	HX_STACK_LINE(838)
	Float tmp85 = (tmp81 - tmp84);		HX_STACK_VAR(tmp85,"tmp85");
	HX_STACK_LINE(838)
	Float tmp86 = this1->__get((int)2);		HX_STACK_VAR(tmp86,"tmp86");
	HX_STACK_LINE(838)
	Float tmp87 = this1->__get((int)7);		HX_STACK_VAR(tmp87,"tmp87");
	HX_STACK_LINE(838)
	Float tmp88 = (tmp86 * tmp87);		HX_STACK_VAR(tmp88,"tmp88");
	HX_STACK_LINE(838)
	Float tmp89 = this1->__get((int)6);		HX_STACK_VAR(tmp89,"tmp89");
	HX_STACK_LINE(838)
	Float tmp90 = this1->__get((int)3);		HX_STACK_VAR(tmp90,"tmp90");
	HX_STACK_LINE(838)
	Float tmp91 = (tmp89 * tmp90);		HX_STACK_VAR(tmp91,"tmp91");
	HX_STACK_LINE(838)
	Float tmp92 = (tmp88 - tmp91);		HX_STACK_VAR(tmp92,"tmp92");
	HX_STACK_LINE(838)
	Float tmp93 = (tmp85 * tmp92);		HX_STACK_VAR(tmp93,"tmp93");
	HX_STACK_LINE(833)
	Float tmp94 = (tmp78 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
	HX_STACK_LINE(833)
	Float tmp95 = tmp94;		HX_STACK_VAR(tmp95,"tmp95");
	HX_STACK_LINE(833)
	return tmp95;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,get_determinant,return )

::lime::math::Vector4 Matrix4_Impl__obj::get_position( ::lime::utils::Float32Array this1){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","get_position",0x55830b3a,"lime.math._Matrix4.Matrix4_Impl_.get_position","lime/math/Matrix4.hx",843,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(845)
	Float tmp = this1->__get((int)12);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(845)
	Float tmp1 = this1->__get((int)13);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(845)
	Float tmp2 = this1->__get((int)14);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(845)
	::lime::math::Vector4 tmp3 = ::lime::math::Vector4_obj::__new(tmp,tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(845)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Matrix4_Impl__obj,get_position,return )

::lime::math::Vector4 Matrix4_Impl__obj::set_position( ::lime::utils::Float32Array this1,::lime::math::Vector4 val){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","set_position",0x6a7c2eae,"lime.math._Matrix4.Matrix4_Impl_.set_position","lime/math/Matrix4.hx",850,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(852)
	Float tmp = val->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(852)
	hx::__ArrayImplRef(this1,(int)12) = tmp;
	HX_STACK_LINE(853)
	Float tmp1 = val->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(853)
	hx::__ArrayImplRef(this1,(int)13) = tmp1;
	HX_STACK_LINE(854)
	Float tmp2 = val->z;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(854)
	hx::__ArrayImplRef(this1,(int)14) = tmp2;
	HX_STACK_LINE(855)
	::lime::math::Vector4 tmp3 = val;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(855)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,set_position,return )

Float Matrix4_Impl__obj::get( ::lime::utils::Float32Array this1,int index){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","get",0x10b0bb0e,"lime.math._Matrix4.Matrix4_Impl_.get","lime/math/Matrix4.hx",860,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(862)
	Float tmp = this1->__get(index);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(862)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Matrix4_Impl__obj,get,return )

Float Matrix4_Impl__obj::set( ::lime::utils::Float32Array this1,int index,Float value){
	HX_STACK_FRAME("lime.math._Matrix4.Matrix4_Impl_","set",0x10b9d61a,"lime.math._Matrix4.Matrix4_Impl_.set","lime/math/Matrix4.hx",867,0xeb65dbd8)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(869)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(869)
	hx::__ArrayImplRef(this1,index) = tmp;
	HX_STACK_LINE(870)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(870)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix4_Impl__obj,set,return )


Matrix4_Impl__obj::Matrix4_Impl__obj()
{
}

bool Matrix4_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"append") ) { outValue = append_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"invert") ) { outValue = invert_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pointAt") ) { outValue = pointAt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"prepend") ) { outValue = prepend_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { outValue = copyFrom_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"create2D") ) { outValue = create2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"identity") ) { outValue = identity_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copyRowTo") ) { outValue = copyRowTo_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"transpose") ) { outValue = transpose_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"copythisTo") ) { outValue = copythisTo_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createABCD") ) { outValue = createABCD_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"appendScale") ) { outValue = appendScale_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"copyRowFrom") ) { outValue = copyRowFrom_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createOrtho") ) { outValue = createOrtho_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"interpolate") ) { outValue = interpolate_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"copyColumnTo") ) { outValue = copyColumnTo_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"copythisFrom") ) { outValue = copythisFrom_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"prependScale") ) { outValue = prependScale_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_position") ) { outValue = get_position_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_position") ) { outValue = set_position_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"copyToMatrix4") ) { outValue = copyToMatrix4_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"interpolateTo") ) { outValue = interpolateTo_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"appendRotation") ) { outValue = appendRotation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"copyColumnFrom") ) { outValue = copyColumnFrom_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"prependRotation") ) { outValue = prependRotation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"transformVector") ) { outValue = transformVector_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getAxisRotation") ) { outValue = getAxisRotation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_determinant") ) { outValue = get_determinant_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"transformVectors") ) { outValue = transformVectors_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"appendTranslation") ) { outValue = appendTranslation_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"prependTranslation") ) { outValue = prependTranslation_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"deltaTransformVector") ) { outValue = deltaTransformVector_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(void *) &Matrix4_Impl__obj::__identity,HX_HCSTRING("__identity","\x5e","\xb8","\x67","\x5c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix4_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Matrix4_Impl__obj::__identity,"__identity");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix4_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Matrix4_Impl__obj::__identity,"__identity");
};

#endif

hx::Class Matrix4_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__identity","\x5e","\xb8","\x67","\x5c"),
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("append","\xda","\xe1","\xd3","\x8f"),
	HX_HCSTRING("appendRotation","\x38","\x45","\xe8","\xcb"),
	HX_HCSTRING("appendScale","\x50","\x66","\x45","\xb5"),
	HX_HCSTRING("appendTranslation","\x37","\xe1","\x3d","\xd6"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("copyColumnFrom","\x75","\x97","\xb5","\x3a"),
	HX_HCSTRING("copyColumnTo","\xc6","\x2e","\xf6","\xf6"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("copythisFrom","\x9d","\x57","\xe4","\x52"),
	HX_HCSTRING("copythisTo","\xee","\x14","\x01","\x0a"),
	HX_HCSTRING("copyRowFrom","\x6f","\x45","\x8b","\xef"),
	HX_HCSTRING("create2D","\xce","\x49","\xf4","\x2b"),
	HX_HCSTRING("createABCD","\xbe","\xc2","\xdd","\x52"),
	HX_HCSTRING("createOrtho","\x9c","\x4e","\xa8","\x5e"),
	HX_HCSTRING("copyRowTo","\x40","\x8a","\x62","\x73"),
	HX_HCSTRING("copyToMatrix4","\x23","\x00","\xc1","\x24"),
	HX_HCSTRING("deltaTransformVector","\x37","\x02","\x9c","\xc2"),
	HX_HCSTRING("identity","\x3e","\x45","\x2f","\xb9"),
	HX_HCSTRING("interpolate","\xc1","\xd4","\x32","\x1f"),
	HX_HCSTRING("interpolateTo","\x9c","\x90","\x22","\x71"),
	HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f"),
	HX_HCSTRING("pointAt","\x63","\xa1","\x21","\x51"),
	HX_HCSTRING("prepend","\x0e","\x97","\xe0","\x37"),
	HX_HCSTRING("prependRotation","\x6c","\x4e","\x3b","\xe8"),
	HX_HCSTRING("prependScale","\x9c","\x54","\x97","\xc4"),
	HX_HCSTRING("prependTranslation","\x83","\x90","\x15","\x05"),
	HX_HCSTRING("transformVector","\x4f","\x2b","\xb3","\xd2"),
	HX_HCSTRING("transformVectors","\x44","\xba","\x12","\x8a"),
	HX_HCSTRING("transpose","\x79","\x50","\x2f","\x4c"),
	HX_HCSTRING("getAxisRotation","\xb5","\x74","\xea","\xf7"),
	HX_HCSTRING("get_determinant","\x2c","\x15","\xf7","\xf2"),
	HX_HCSTRING("get_position","\xb2","\x54","\x14","\x80"),
	HX_HCSTRING("set_position","\x26","\x78","\x0d","\x95"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

void Matrix4_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.math._Matrix4.Matrix4_Impl_","\xe6","\xfe","\xf9","\xcb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Matrix4_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Matrix4_Impl__obj >;
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

void Matrix4_Impl__obj::__boot()
{
	__identity= Array_obj< Float >::__new().Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)1.0));
}

} // end namespace lime
} // end namespace math
} // end namespace _Matrix4

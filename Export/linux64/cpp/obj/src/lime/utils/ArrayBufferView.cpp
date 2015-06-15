#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
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
namespace lime{
namespace utils{

Void ArrayBufferView_obj::__construct(Dynamic lengthOrBuffer,hx::Null< int >  __o_byteOffset,Dynamic length)
{
HX_STACK_FRAME("lime.utils.ArrayBufferView","new",0xa2471efa,"lime.utils.ArrayBufferView.new","lime/utils/ArrayBufferView.hx",27,0xb543acf8)
HX_STACK_THIS(this)
HX_STACK_ARG(lengthOrBuffer,"lengthOrBuffer")
HX_STACK_ARG(__o_byteOffset,"byteOffset")
HX_STACK_ARG(length,"length")
int byteOffset = __o_byteOffset.Default(0);
{
	HX_STACK_LINE(29)
	Dynamic tmp = lengthOrBuffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::Int >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	if ((tmp1)){
		HX_STACK_LINE(31)
		Float tmp2 = ((Float)(lengthOrBuffer));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(31)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(31)
		this->byteLength = tmp3;
		HX_STACK_LINE(32)
		this->byteOffset = (int)0;
		HX_STACK_LINE(34)
		int tmp4 = this->byteLength;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(34)
		::lime::utils::ByteArray tmp5 = ::lime::utils::ByteArray_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(34)
		this->buffer = tmp5;
	}
	else{
		HX_STACK_LINE(43)
		this->buffer = ((::lime::utils::ByteArray)(lengthOrBuffer));
		HX_STACK_LINE(45)
		::lime::utils::ByteArray tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(45)
		if ((tmp3)){
			HX_STACK_LINE(47)
			HX_STACK_DO_THROW(HX_HCSTRING("Invalid input buffer","\x3f","\x39","\x2d","\x2c"));
		}
		HX_STACK_LINE(51)
		this->byteOffset = byteOffset;
		HX_STACK_LINE(53)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			::lime::utils::ByteArray tmp5 = this->buffer;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(53)
			int b = tmp5->length;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(53)
			bool tmp6 = (byteOffset < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(53)
			bool aNeg = tmp6;		HX_STACK_VAR(aNeg,"aNeg");
			HX_STACK_LINE(53)
			bool tmp7 = (b < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(53)
			bool bNeg = tmp7;		HX_STACK_VAR(bNeg,"bNeg");
			HX_STACK_LINE(53)
			bool tmp8 = (aNeg != bNeg);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(53)
			if ((tmp8)){
				HX_STACK_LINE(53)
				tmp4 = aNeg;
			}
			else{
				HX_STACK_LINE(53)
				tmp4 = (byteOffset > b);
			}
		}
		HX_STACK_LINE(53)
		if ((tmp4)){
			HX_STACK_LINE(55)
			HX_STACK_DO_THROW(HX_HCSTRING("Invalid starting position","\x80","\xe7","\xc8","\x7a"));
		}
		HX_STACK_LINE(59)
		bool tmp5 = (length == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(59)
		if ((tmp5)){
			HX_STACK_LINE(61)
			::lime::utils::ByteArray tmp6 = this->buffer;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(61)
			int tmp7 = tmp6->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(61)
			int tmp8 = byteOffset;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(61)
			int tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(61)
			this->byteLength = tmp9;
		}
		else{
			HX_STACK_LINE(65)
			this->byteLength = length;
			HX_STACK_LINE(67)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(67)
			{
				HX_STACK_LINE(67)
				int tmp7 = this->byteLength;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(67)
				int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(67)
				int tmp9 = byteOffset;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(67)
				int tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(67)
				int a = tmp10;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(67)
				::lime::utils::ByteArray tmp11 = this->buffer;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(67)
				int b = tmp11->length;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(67)
				bool tmp12 = (a < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(67)
				bool aNeg = tmp12;		HX_STACK_VAR(aNeg,"aNeg");
				HX_STACK_LINE(67)
				bool tmp13 = (b < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(67)
				bool bNeg = tmp13;		HX_STACK_VAR(bNeg,"bNeg");
				HX_STACK_LINE(67)
				bool tmp14 = (aNeg != bNeg);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(67)
				if ((tmp14)){
					HX_STACK_LINE(67)
					tmp6 = aNeg;
				}
				else{
					HX_STACK_LINE(67)
					tmp6 = (a > b);
				}
			}
			HX_STACK_LINE(67)
			if ((tmp6)){
				HX_STACK_LINE(69)
				HX_STACK_DO_THROW(HX_HCSTRING("Invalid buffer length","\xfd","\x68","\x79","\x28"));
			}
		}
	}
	HX_STACK_LINE(80)
	{
		HX_STACK_LINE(80)
		bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(80)
		::lime::utils::ByteArray tmp3 = this->buffer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(80)
		tmp3->littleEndian = tmp2;
		HX_STACK_LINE(80)
		false;
	}
	HX_STACK_LINE(84)
	::lime::utils::ByteArray tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(84)
	this->bytes = tmp2->b;
}
;
	return null();
}

//ArrayBufferView_obj::~ArrayBufferView_obj() { }

Dynamic ArrayBufferView_obj::__CreateEmpty() { return  new ArrayBufferView_obj; }
hx::ObjectPtr< ArrayBufferView_obj > ArrayBufferView_obj::__new(Dynamic lengthOrBuffer,hx::Null< int >  __o_byteOffset,Dynamic length)
{  hx::ObjectPtr< ArrayBufferView_obj > _result_ = new ArrayBufferView_obj();
	_result_->__construct(lengthOrBuffer,__o_byteOffset,length);
	return _result_;}

Dynamic ArrayBufferView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArrayBufferView_obj > _result_ = new ArrayBufferView_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

hx::Object *ArrayBufferView_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::lime::utils::IMemoryRange_obj)) return operator ::lime::utils::IMemoryRange_obj *();
	return super::__ToInterface(inType);
}

ArrayBufferView_obj::operator ::lime::utils::IMemoryRange_obj *()
	{ return new ::lime::utils::IMemoryRange_delegate_< ArrayBufferView_obj >(this); }
::lime::utils::ByteArray ArrayBufferView_obj::getByteBuffer( ){
	HX_STACK_FRAME("lime.utils.ArrayBufferView","getByteBuffer",0xff38f578,"lime.utils.ArrayBufferView.getByteBuffer","lime/utils/ArrayBufferView.hx",90,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(92)
	::lime::utils::ByteArray tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ArrayBufferView_obj,getByteBuffer,return )

Float ArrayBufferView_obj::getFloat32( int position){
	HX_STACK_FRAME("lime.utils.ArrayBufferView","getFloat32",0xd2f52feb,"lime.utils.ArrayBufferView.getFloat32","lime/utils/ArrayBufferView.hx",97,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_LINE(100)
	Float tmp = ::__hxcpp_memory_get_float(this->bytes,(position + this->byteOffset));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,getFloat32,return )

int ArrayBufferView_obj::getInt8( int position){
	HX_STACK_FRAME("lime.utils.ArrayBufferView","getInt8",0x1ca597b9,"lime.utils.ArrayBufferView.getInt8","lime/utils/ArrayBufferView.hx",109,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_LINE(112)
	int tmp = ::__hxcpp_memory_get_byte(this->bytes,(position + this->byteOffset));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,getInt8,return )

int ArrayBufferView_obj::getInt16( int position){
	HX_STACK_FRAME("lime.utils.ArrayBufferView","getInt16",0xf43f2444,"lime.utils.ArrayBufferView.getInt16","lime/utils/ArrayBufferView.hx",121,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_LINE(124)
	int tmp = ::__hxcpp_memory_get_i16(this->bytes,(position + this->byteOffset));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(124)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,getInt16,return )

int ArrayBufferView_obj::getInt32( int position){
	HX_STACK_FRAME("lime.utils.ArrayBufferView","getInt32",0xf43f25fe,"lime.utils.ArrayBufferView.getInt32","lime/utils/ArrayBufferView.hx",133,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_LINE(136)
	int tmp = ::__hxcpp_memory_get_i32(this->bytes,(position + this->byteOffset));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(136)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,getInt32,return )

int ArrayBufferView_obj::getLength( ){
	HX_STACK_FRAME("lime.utils.ArrayBufferView","getLength",0xc3a95c36,"lime.utils.ArrayBufferView.getLength","lime/utils/ArrayBufferView.hx",145,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(147)
	int tmp = this->byteLength;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(147)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ArrayBufferView_obj,getLength,return )

int ArrayBufferView_obj::getStart( ){
	HX_STACK_FRAME("lime.utils.ArrayBufferView","getStart",0xba2a0712,"lime.utils.ArrayBufferView.getStart","lime/utils/ArrayBufferView.hx",152,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(154)
	int tmp = this->byteOffset;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(154)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ArrayBufferView_obj,getStart,return )

int ArrayBufferView_obj::getUInt8( int position){
	HX_STACK_FRAME("lime.utils.ArrayBufferView","getUInt8",0xc494e22e,"lime.utils.ArrayBufferView.getUInt8","lime/utils/ArrayBufferView.hx",159,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_LINE(162)
	int tmp = ::__hxcpp_memory_get_byte(this->bytes,(position + this->byteOffset));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(162)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,getUInt8,return )

int ArrayBufferView_obj::getUInt16( int position){
	HX_STACK_FRAME("lime.utils.ArrayBufferView","getUInt16",0x3db1002f,"lime.utils.ArrayBufferView.getUInt16","lime/utils/ArrayBufferView.hx",171,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_LINE(174)
	int tmp = ::__hxcpp_memory_get_ui16(this->bytes,(position + this->byteOffset));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(174)
	int tmp1 = (int(tmp) & int((int)65535));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(174)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,getUInt16,return )

int ArrayBufferView_obj::getUInt32( int position){
	HX_STACK_FRAME("lime.utils.ArrayBufferView","getUInt32",0x3db101e9,"lime.utils.ArrayBufferView.getUInt32","lime/utils/ArrayBufferView.hx",183,0xb543acf8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_LINE(186)
	int tmp = ::__hxcpp_memory_get_ui32(this->bytes,(position + this->byteOffset));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(186)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,getUInt32,return )

Void ArrayBufferView_obj::setFloat32( int position,Float value){
{
		HX_STACK_FRAME("lime.utils.ArrayBufferView","setFloat32",0xd672ce5f,"lime.utils.ArrayBufferView.setFloat32","lime/utils/ArrayBufferView.hx",198,0xb543acf8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(198)
		::__hxcpp_memory_set_float(this->bytes,(position + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,setFloat32,(void))

Void ArrayBufferView_obj::setInt8( int position,int value){
{
		HX_STACK_FRAME("lime.utils.ArrayBufferView","setInt8",0x0fa728c5,"lime.utils.ArrayBufferView.setInt8","lime/utils/ArrayBufferView.hx",210,0xb543acf8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(210)
		::__hxcpp_memory_set_byte(this->bytes,(position + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,setInt8,(void))

Void ArrayBufferView_obj::setInt16( int position,int value){
{
		HX_STACK_FRAME("lime.utils.ArrayBufferView","setInt16",0xa29c7db8,"lime.utils.ArrayBufferView.setInt16","lime/utils/ArrayBufferView.hx",222,0xb543acf8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(222)
		::__hxcpp_memory_set_i16(this->bytes,(position + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,setInt16,(void))

Void ArrayBufferView_obj::setInt32( int position,int value){
{
		HX_STACK_FRAME("lime.utils.ArrayBufferView","setInt32",0xa29c7f72,"lime.utils.ArrayBufferView.setInt32","lime/utils/ArrayBufferView.hx",234,0xb543acf8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(234)
		::__hxcpp_memory_set_i32(this->bytes,(position + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,setInt32,(void))

Void ArrayBufferView_obj::setUInt8( int position,int value){
{
		HX_STACK_FRAME("lime.utils.ArrayBufferView","setUInt8",0x72f23ba2,"lime.utils.ArrayBufferView.setUInt8","lime/utils/ArrayBufferView.hx",246,0xb543acf8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(246)
		::__hxcpp_memory_set_byte(this->bytes,(position + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,setUInt8,(void))

Void ArrayBufferView_obj::setUInt16( int position,int value){
{
		HX_STACK_FRAME("lime.utils.ArrayBufferView","setUInt16",0x2101ec3b,"lime.utils.ArrayBufferView.setUInt16","lime/utils/ArrayBufferView.hx",259,0xb543acf8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(259)
		::__hxcpp_memory_set_ui16(this->bytes,(position + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,setUInt16,(void))

Void ArrayBufferView_obj::setUInt32( int position,int value){
{
		HX_STACK_FRAME("lime.utils.ArrayBufferView","setUInt32",0x2101edf5,"lime.utils.ArrayBufferView.setUInt32","lime/utils/ArrayBufferView.hx",272,0xb543acf8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(272)
		::__hxcpp_memory_set_ui32(this->bytes,(position + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,setUInt32,(void))


ArrayBufferView_obj::ArrayBufferView_obj()
{
}

void ArrayBufferView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrayBufferView);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(byteOffset,"byteOffset");
	HX_MARK_MEMBER_NAME(byteLength,"byteLength");
	HX_MARK_MEMBER_NAME(bytes,"bytes");
	HX_MARK_END_CLASS();
}

void ArrayBufferView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(byteOffset,"byteOffset");
	HX_VISIT_MEMBER_NAME(byteLength,"byteLength");
	HX_VISIT_MEMBER_NAME(bytes,"bytes");
}

Dynamic ArrayBufferView_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { return bytes; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getInt8") ) { return getInt8_dyn(); }
		if (HX_FIELD_EQ(inName,"setInt8") ) { return setInt8_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getInt16") ) { return getInt16_dyn(); }
		if (HX_FIELD_EQ(inName,"getInt32") ) { return getInt32_dyn(); }
		if (HX_FIELD_EQ(inName,"getStart") ) { return getStart_dyn(); }
		if (HX_FIELD_EQ(inName,"getUInt8") ) { return getUInt8_dyn(); }
		if (HX_FIELD_EQ(inName,"setInt16") ) { return setInt16_dyn(); }
		if (HX_FIELD_EQ(inName,"setInt32") ) { return setInt32_dyn(); }
		if (HX_FIELD_EQ(inName,"setUInt8") ) { return setUInt8_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getLength") ) { return getLength_dyn(); }
		if (HX_FIELD_EQ(inName,"getUInt16") ) { return getUInt16_dyn(); }
		if (HX_FIELD_EQ(inName,"getUInt32") ) { return getUInt32_dyn(); }
		if (HX_FIELD_EQ(inName,"setUInt16") ) { return setUInt16_dyn(); }
		if (HX_FIELD_EQ(inName,"setUInt32") ) { return setUInt32_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteOffset") ) { return byteOffset; }
		if (HX_FIELD_EQ(inName,"byteLength") ) { return byteLength; }
		if (HX_FIELD_EQ(inName,"getFloat32") ) { return getFloat32_dyn(); }
		if (HX_FIELD_EQ(inName,"setFloat32") ) { return setFloat32_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getByteBuffer") ) { return getByteBuffer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ArrayBufferView_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { bytes=inValue.Cast< Array< unsigned char > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::lime::utils::ByteArray >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteOffset") ) { byteOffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"byteLength") ) { byteLength=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ArrayBufferView_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ArrayBufferView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"));
	outFields->push(HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38"));
	outFields->push(HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77"));
	outFields->push(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::utils::ByteArray*/ ,(int)offsetof(ArrayBufferView_obj,buffer),HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{hx::fsInt,(int)offsetof(ArrayBufferView_obj,byteOffset),HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38")},
	{hx::fsInt,(int)offsetof(ArrayBufferView_obj,byteLength),HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77")},
	{hx::fsObject /*Array< unsigned char >*/ ,(int)offsetof(ArrayBufferView_obj,bytes),HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38"),
	HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77"),
	HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"),
	HX_HCSTRING("getByteBuffer","\x5e","\xa2","\x0b","\x05"),
	HX_HCSTRING("getFloat32","\x45","\x17","\x6a","\x39"),
	HX_HCSTRING("getInt8","\x1f","\xf4","\x3d","\x18"),
	HX_HCSTRING("getInt16","\x1e","\xa1","\xf7","\x1d"),
	HX_HCSTRING("getInt32","\xd8","\xa2","\xf7","\x1d"),
	HX_HCSTRING("getLength","\x1c","\x1e","\x5e","\x1b"),
	HX_HCSTRING("getStart","\xec","\x83","\xe2","\xe3"),
	HX_HCSTRING("getUInt8","\x08","\x5f","\x4d","\xee"),
	HX_HCSTRING("getUInt16","\x15","\xc2","\x65","\x95"),
	HX_HCSTRING("getUInt32","\xcf","\xc3","\x65","\x95"),
	HX_HCSTRING("setFloat32","\xb9","\xb5","\xe7","\x3c"),
	HX_HCSTRING("setInt8","\x2b","\x85","\x3f","\x0b"),
	HX_HCSTRING("setInt16","\x92","\xfa","\x54","\xcc"),
	HX_HCSTRING("setInt32","\x4c","\xfc","\x54","\xcc"),
	HX_HCSTRING("setUInt8","\x7c","\xb8","\xaa","\x9c"),
	HX_HCSTRING("setUInt16","\x21","\xae","\xb6","\x78"),
	HX_HCSTRING("setUInt32","\xdb","\xaf","\xb6","\x78"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrayBufferView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrayBufferView_obj::__mClass,"__mClass");
};

#endif

hx::Class ArrayBufferView_obj::__mClass;

void ArrayBufferView_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.ArrayBufferView","\x08","\xda","\x61","\xc9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ArrayBufferView_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ArrayBufferView_obj >;
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

} // end namespace lime
} // end namespace utils

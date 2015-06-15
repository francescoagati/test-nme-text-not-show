#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_zip_Compress
#include <haxe/zip/Compress.h>
#endif
#ifndef INCLUDED_haxe_zip_Uncompress
#include <haxe/zip/Uncompress.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_CompressionAlgorithm
#include <lime/utils/CompressionAlgorithm.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
namespace lime{
namespace utils{

Void ByteArray_obj::__construct(hx::Null< int >  __o_size)
{
HX_STACK_FRAME("lime.utils.ByteArray","new",0x0dbc8bed,"lime.utils.ByteArray.new","lime/utils/ByteArray.hx",34,0x2063a1e5)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_size,"size")
int size = __o_size.Default(0);
{
	HX_STACK_LINE(46)
	this->littleEndian = false;
	HX_STACK_LINE(45)
	this->allocated = (int)0;
	HX_STACK_LINE(43)
	this->position = (int)0;
	HX_STACK_LINE(130)
	this->length = (int)0;
	HX_STACK_LINE(131)
	bool tmp = (size > (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(131)
	if ((tmp)){
		HX_STACK_LINE(138)
		Array< unsigned char > data = Array_obj< unsigned char >::__new();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(140)
		int tmp1 = size;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(140)
		data->__SetSizeExact(tmp1);
		HX_STACK_LINE(144)
		int tmp2 = size;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(144)
		super::__construct(tmp2,data);
	}
}
;
	return null();
}

//ByteArray_obj::~ByteArray_obj() { }

Dynamic ByteArray_obj::__CreateEmpty() { return  new ByteArray_obj; }
hx::ObjectPtr< ByteArray_obj > ByteArray_obj::__new(hx::Null< int >  __o_size)
{  hx::ObjectPtr< ByteArray_obj > _result_ = new ByteArray_obj();
	_result_->__construct(__o_size);
	return _result_;}

Dynamic ByteArray_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ByteArray_obj > _result_ = new ByteArray_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *ByteArray_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::lime::utils::IMemoryRange_obj)) return operator ::lime::utils::IMemoryRange_obj *();
	if (inType==typeid( ::lime::utils::IDataInput_obj)) return operator ::lime::utils::IDataInput_obj *();
	return super::__ToInterface(inType);
}

ByteArray_obj::operator ::lime::utils::IMemoryRange_obj *()
	{ return new ::lime::utils::IMemoryRange_delegate_< ByteArray_obj >(this); }
ByteArray_obj::operator ::lime::utils::IDataInput_obj *()
	{ return new ::lime::utils::IDataInput_delegate_< ByteArray_obj >(this); }
void ByteArray_obj::__init__() {
HX_STACK_FRAME("lime.utils.ByteArray","__init__",0xb5df22a3,"lime.utils.ByteArray.__init__","lime/utils/ByteArray.hx",58,0x2063a1e5)
{

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 1; }
	::lime::utils::ByteArray run(int length){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","lime/utils/ByteArray.hx",60,0x2063a1e5)
		HX_STACK_ARG(length,"length")
		{
			HX_STACK_LINE(60)
			::lime::utils::ByteArray tmp = ::lime::utils::ByteArray_obj::__new(length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(60)
			return tmp;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(60)
	Dynamic factory =  Dynamic(new _Function_1_1());		HX_STACK_VAR(factory,"factory");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
	int __ArgCount() const { return 2; }
	Void run(::lime::utils::ByteArray bytes,int length){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","lime/utils/ByteArray.hx",67,0x2063a1e5)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(length,"length")
		{
			HX_STACK_LINE(69)
			bool tmp = (length > (int)0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(69)
			if ((tmp)){
				HX_STACK_LINE(70)
				int tmp1 = (length - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(70)
				bytes->__Field(HX_HCSTRING("ensureElem","\x6d","\xb1","\x2a","\x1e"), hx::paccDynamic )(tmp1,true);
			}
			HX_STACK_LINE(71)
			bytes->__FieldRef(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")) = length;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(67)
	Dynamic resize =  Dynamic(new _Function_1_2());		HX_STACK_VAR(resize,"resize");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_3)
	int __ArgCount() const { return 1; }
	Array< unsigned char > run(::lime::utils::ByteArray bytes){
		HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","lime/utils/ByteArray.hx",105,0x2063a1e5)
		HX_STACK_ARG(bytes,"bytes")
		{
			HX_STACK_LINE(105)
			bool tmp = (bytes == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(105)
			if ((tmp)){
				HX_STACK_LINE(105)
				return null();
			}
			else{
				HX_STACK_LINE(105)
				return bytes->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic );
			}
			HX_STACK_LINE(105)
			return null();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(105)
	Dynamic bytes =  Dynamic(new _Function_1_3());		HX_STACK_VAR(bytes,"bytes");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_4)
	int __ArgCount() const { return 1; }
	int run(::lime::utils::ByteArray bytes1){
		HX_STACK_FRAME("*","_Function_1_4",0x5200ed3a,"*._Function_1_4","lime/utils/ByteArray.hx",106,0x2063a1e5)
		HX_STACK_ARG(bytes1,"bytes1")
		{
			HX_STACK_LINE(106)
			bool tmp = (bytes1 == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(106)
			int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(106)
			if ((tmp)){
				HX_STACK_LINE(106)
				tmp1 = (int)0;
			}
			else{
				HX_STACK_LINE(106)
				tmp1 = bytes1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
			}
			HX_STACK_LINE(106)
			return tmp1;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(106)
	Dynamic slen =  Dynamic(new _Function_1_4());		HX_STACK_VAR(slen,"slen");
	HX_STACK_LINE(110)
	Dynamic tmp = ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_byte_array_init","\x63","\x0d","\xc5","\x78"),(int)4,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(110)
	Dynamic init = tmp;		HX_STACK_VAR(init,"init");
	HX_STACK_LINE(111)
	bool tmp1 = (init != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(111)
	if ((tmp1)){
		HX_STACK_LINE(111)
		Dynamic tmp2 = factory;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(111)
		Dynamic tmp3 = slen;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(111)
		Dynamic tmp4 = resize;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(111)
		Dynamic tmp5 = bytes;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(111)
		init(tmp2,tmp3,tmp4,tmp5);
	}
}
}

::String ByteArray_obj::asString( ){
	HX_STACK_FRAME("lime.utils.ByteArray","asString",0x166978b6,"lime.utils.ByteArray.asString","lime/utils/ByteArray.hx",154,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(156)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(156)
	::String tmp1 = this->readUTFBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(156)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,asString,return )

Void ByteArray_obj::checkData( int length){
{
		HX_STACK_FRAME("lime.utils.ByteArray","checkData",0xb6bc825f,"lime.utils.ByteArray.checkData","lime/utils/ByteArray.hx",163,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(length,"length")
		HX_STACK_LINE(165)
		int tmp = length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(165)
		int tmp1 = this->position;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(165)
		int tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(165)
		int tmp3 = this->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(165)
		bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(165)
		if ((tmp4)){
			HX_STACK_LINE(167)
			this->ThrowEOFi();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,checkData,(void))

Void ByteArray_obj::clear( ){
{
		HX_STACK_FRAME("lime.utils.ByteArray","clear",0x0e13ea5a,"lime.utils.ByteArray.clear","lime/utils/ByteArray.hx",175,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(177)
		this->length = (int)0;
		HX_STACK_LINE(178)
		this->position = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,clear,(void))

Void ByteArray_obj::compress( ::lime::utils::CompressionAlgorithm algorithm){
{
		HX_STACK_FRAME("lime.utils.ByteArray","compress",0xfa228cf5,"lime.utils.ByteArray.compress","lime/utils/ByteArray.hx",183,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(algorithm,"algorithm")
		HX_STACK_LINE(189)
		::lime::utils::ByteArray src = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(src,"src");
		HX_STACK_LINE(192)
		bool tmp = (algorithm == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(192)
		if ((tmp)){
			HX_STACK_LINE(194)
			algorithm = ::lime::utils::CompressionAlgorithm_obj::ZLIB;
		}
		HX_STACK_LINE(198)
		::haxe::io::Bytes result;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(200)
		bool tmp1 = (algorithm == ::lime::utils::CompressionAlgorithm_obj::LZMA);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(200)
		if ((tmp1)){
			HX_STACK_LINE(202)
			::haxe::io::Bytes tmp2 = ::haxe::io::Bytes_obj::ofData(::lime::utils::ByteArray_obj::lime_lzma_encode(src->b));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(202)
			result = tmp2;
		}
		else{
			HX_STACK_LINE(206)
			bool tmp2 = (algorithm != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(206)
			int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(206)
			if ((tmp2)){
				HX_STACK_LINE(206)
				switch( (int)(algorithm->__Index())){
					case (int)0: {
						HX_STACK_LINE(208)
						tmp3 = (int)-15;
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(209)
						tmp3 = (int)31;
					}
					;break;
					default: {
						HX_STACK_LINE(210)
						tmp3 = (int)15;
					}
				}
			}
			else{
				HX_STACK_LINE(210)
				tmp3 = (int)15;
			}
			HX_STACK_LINE(206)
			int windowBits = tmp3;		HX_STACK_VAR(windowBits,"windowBits");
			HX_STACK_LINE(217)
			::lime::utils::ByteArray tmp4 = src;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(217)
			::haxe::io::Bytes tmp5 = ::haxe::zip::Compress_obj::run(tmp4,(int)8);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(217)
			result = tmp5;
		}
		HX_STACK_LINE(222)
		this->b = result->b;
		HX_STACK_LINE(223)
		this->length = result->length;
		HX_STACK_LINE(224)
		int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(224)
		this->position = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,compress,(void))

Void ByteArray_obj::deflate( ){
{
		HX_STACK_FRAME("lime.utils.ByteArray","deflate",0xa25c1178,"lime.utils.ByteArray.deflate","lime/utils/ByteArray.hx",235,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(235)
		this->compress(::lime::utils::CompressionAlgorithm_obj::DEFLATE);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,deflate,(void))

Void ByteArray_obj::ensureElem( int size,bool updateLength){
{
		HX_STACK_FRAME("lime.utils.ByteArray","ensureElem",0x67e83180,"lime.utils.ByteArray.ensureElem","lime/utils/ByteArray.hx",241,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(size,"size")
		HX_STACK_ARG(updateLength,"updateLength")
		HX_STACK_LINE(243)
		int tmp = (size + (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(243)
		int len = tmp;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(256)
		bool tmp1 = (this->b == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(256)
		if ((tmp1)){
			HX_STACK_LINE(257)
			this->b = Array_obj< unsigned char >::__new();
		}
		HX_STACK_LINE(259)
		int tmp2 = this->b->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(259)
		int tmp3 = len;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(259)
		bool tmp4 = (tmp2 < tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(259)
		if ((tmp4)){
			HX_STACK_LINE(261)
			int tmp5 = len;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(261)
			this->b->__SetSize(tmp5);
		}
		HX_STACK_LINE(266)
		bool tmp5 = updateLength;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(266)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(266)
		if ((tmp5)){
			HX_STACK_LINE(266)
			int tmp7 = this->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(266)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(266)
			int tmp9 = len;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(266)
			tmp6 = (tmp8 < tmp9);
		}
		else{
			HX_STACK_LINE(266)
			tmp6 = false;
		}
		HX_STACK_LINE(266)
		if ((tmp6)){
			HX_STACK_LINE(268)
			this->length = len;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,ensureElem,(void))

int ByteArray_obj::getLength( ){
	HX_STACK_FRAME("lime.utils.ByteArray","getLength",0x3bd78169,"lime.utils.ByteArray.getLength","lime/utils/ByteArray.hx",295,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(295)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(295)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,getLength,return )

::lime::utils::ByteArray ByteArray_obj::getByteBuffer( ){
	HX_STACK_FRAME("lime.utils.ByteArray","getByteBuffer",0x574d302b,"lime.utils.ByteArray.getByteBuffer","lime/utils/ByteArray.hx",296,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(296)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,getByteBuffer,return )

int ByteArray_obj::getStart( ){
	HX_STACK_FRAME("lime.utils.ByteArray","getStart",0x5a45c93f,"lime.utils.ByteArray.getStart","lime/utils/ByteArray.hx",297,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(297)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,getStart,return )

Void ByteArray_obj::inflate( ){
{
		HX_STACK_FRAME("lime.utils.ByteArray","inflate",0x0b7da294,"lime.utils.ByteArray.inflate","lime/utils/ByteArray.hx",303,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(303)
		this->uncompress(::lime::utils::CompressionAlgorithm_obj::DEFLATE);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,inflate,(void))

bool ByteArray_obj::readBoolean( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readBoolean",0x0cfd0e7f,"lime.utils.ByteArray.readBoolean","lime/utils/ByteArray.hx",308,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(313)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(313)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(313)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(313)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(313)
	if ((tmp2)){
		HX_STACK_LINE(313)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(313)
		{
			HX_STACK_LINE(313)
			int tmp5 = (this->position)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(313)
			int pos = tmp5;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(313)
			tmp4 = this->b->__get(pos);
		}
		HX_STACK_LINE(313)
		tmp3 = (tmp4 != (int)0);
	}
	else{
		HX_STACK_LINE(313)
		int tmp4 = this->ThrowEOFi();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(313)
		tmp3 = (tmp4 != (int)0);
	}
	HX_STACK_LINE(313)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readBoolean,return )

int ByteArray_obj::readByte( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readByte",0xdf7e3ed1,"lime.utils.ByteArray.readByte","lime/utils/ByteArray.hx",319,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(325)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(325)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(325)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(325)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(325)
	if ((tmp2)){
		HX_STACK_LINE(325)
		int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(325)
		int pos = tmp4;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(325)
		tmp3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(325)
		tmp3 = this->ThrowEOFi();
	}
	HX_STACK_LINE(325)
	int val = tmp3;		HX_STACK_VAR(val,"val");
	HX_STACK_LINE(326)
	int tmp4 = (int(val) & int((int)128));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(326)
	bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(326)
	int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(326)
	if ((tmp5)){
		HX_STACK_LINE(326)
		tmp6 = (val - (int)256);
	}
	else{
		HX_STACK_LINE(326)
		tmp6 = val;
	}
	HX_STACK_LINE(326)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readByte,return )

Void ByteArray_obj::readBytes( ::lime::utils::ByteArray bytes,hx::Null< int >  __o_offset,hx::Null< int >  __o_length){
int offset = __o_offset.Default(0);
int length = __o_length.Default(0);
	HX_STACK_FRAME("lime.utils.ByteArray","readBytes",0xaef8b882,"lime.utils.ByteArray.readBytes","lime/utils/ByteArray.hx",332,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(length,"length")
{
		HX_STACK_LINE(354)
		bool tmp = (length == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(354)
		if ((tmp)){
			HX_STACK_LINE(354)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(354)
			int tmp2 = this->position;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(354)
			int tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(354)
			length = tmp3;
		}
		HX_STACK_LINE(355)
		int tmp1 = this->position;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(355)
		int tmp2 = length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(355)
		int tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(355)
		int tmp4 = this->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(355)
		bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(355)
		if ((tmp5)){
			HX_STACK_LINE(355)
			this->ThrowEOFi();
		}
		HX_STACK_LINE(357)
		int tmp6 = bytes->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(357)
		int tmp7 = (offset + length);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(357)
		bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(357)
		if ((tmp8)){
			HX_STACK_LINE(359)
			int tmp9 = (offset + length);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(359)
			int tmp10 = (tmp9 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(359)
			bytes->ensureElem(tmp10,true);
		}
		HX_STACK_LINE(366)
		Array< unsigned char > b1 = this->b;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(367)
		Array< unsigned char > b2 = bytes->b;		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(368)
		int tmp9 = this->position;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(368)
		int p = tmp9;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(369)
		{
			HX_STACK_LINE(369)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(369)
			while((true)){
				HX_STACK_LINE(369)
				bool tmp10 = (_g < length);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(369)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(369)
				if ((tmp11)){
					HX_STACK_LINE(369)
					break;
				}
				HX_STACK_LINE(369)
				int tmp12 = (_g)++;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(369)
				int i = tmp12;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(369)
				int tmp13 = (offset + i);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(369)
				int tmp14 = (p + i);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(369)
				unsigned char tmp15 = b1->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(369)
				b2[tmp13] = tmp15;
			}
		}
		HX_STACK_LINE(372)
		hx::AddEq(this->position,length);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ByteArray_obj,readBytes,(void))

Float ByteArray_obj::readDouble( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readDouble",0x76048f1a,"lime.utils.ByteArray.readDouble","lime/utils/ByteArray.hx",379,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(386)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(386)
	int tmp1 = (tmp + (int)8);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(386)
	int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(386)
	bool tmp3 = (tmp1 > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(386)
	if ((tmp3)){
		HX_STACK_LINE(386)
		this->ThrowEOFi();
	}
	HX_STACK_LINE(387)
	hx::AddEq(this->position,(int)8);
	HX_STACK_LINE(388)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(388)
	{
		HX_STACK_LINE(388)
		int tmp5 = this->position;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(388)
		int tmp6 = (tmp5 - (int)8);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(388)
		int pos = tmp6;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(388)
		bool tmp7 = (pos < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(388)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(388)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(388)
		if ((tmp8)){
			HX_STACK_LINE(388)
			int tmp10 = (pos + (int)8);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(388)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(388)
			int tmp12 = this->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(388)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(388)
			tmp9 = (tmp11 > tmp13);
		}
		else{
			HX_STACK_LINE(388)
			tmp9 = true;
		}
		HX_STACK_LINE(388)
		if ((tmp9)){
			HX_STACK_LINE(388)
			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
		}
		HX_STACK_LINE(388)
		tmp4 = ::__hxcpp_memory_get_double(this->b,pos);
	}
	HX_STACK_LINE(388)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readDouble,return )

Float ByteArray_obj::readFloat( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readFloat",0xf3f775b3,"lime.utils.ByteArray.readFloat","lime/utils/ByteArray.hx",407,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(414)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(414)
	int tmp1 = (tmp + (int)4);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(414)
	int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(414)
	bool tmp3 = (tmp1 > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(414)
	if ((tmp3)){
		HX_STACK_LINE(414)
		this->ThrowEOFi();
	}
	HX_STACK_LINE(415)
	hx::AddEq(this->position,(int)4);
	HX_STACK_LINE(416)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(416)
	{
		HX_STACK_LINE(416)
		int tmp5 = this->position;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(416)
		int tmp6 = (tmp5 - (int)4);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(416)
		int pos = tmp6;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(416)
		bool tmp7 = (pos < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(416)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(416)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(416)
		if ((tmp8)){
			HX_STACK_LINE(416)
			int tmp10 = (pos + (int)4);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(416)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(416)
			int tmp12 = this->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(416)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(416)
			tmp9 = (tmp11 > tmp13);
		}
		else{
			HX_STACK_LINE(416)
			tmp9 = true;
		}
		HX_STACK_LINE(416)
		if ((tmp9)){
			HX_STACK_LINE(416)
			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
		}
		HX_STACK_LINE(416)
		tmp4 = ::__hxcpp_memory_get_float(this->b,pos);
	}
	HX_STACK_LINE(416)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readFloat,return )

int ByteArray_obj::readInt( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readInt",0x022bb946,"lime.utils.ByteArray.readInt","lime/utils/ByteArray.hx",422,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(429)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(429)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(429)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(429)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(429)
	if ((tmp2)){
		HX_STACK_LINE(429)
		int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(429)
		int pos = tmp4;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(429)
		tmp3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(429)
		tmp3 = this->ThrowEOFi();
	}
	HX_STACK_LINE(429)
	int ch1 = tmp3;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(430)
	int tmp4 = this->position;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(430)
	int tmp5 = this->length;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(430)
	bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(430)
	int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(430)
	if ((tmp6)){
		HX_STACK_LINE(430)
		int tmp8 = (this->position)++;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(430)
		int pos = tmp8;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(430)
		tmp7 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(430)
		tmp7 = this->ThrowEOFi();
	}
	HX_STACK_LINE(430)
	int ch2 = tmp7;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(431)
	int tmp8 = this->position;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(431)
	int tmp9 = this->length;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(431)
	bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(431)
	int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(431)
	if ((tmp10)){
		HX_STACK_LINE(431)
		int tmp12 = (this->position)++;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(431)
		int pos = tmp12;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(431)
		tmp11 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(431)
		tmp11 = this->ThrowEOFi();
	}
	HX_STACK_LINE(431)
	int ch3 = tmp11;		HX_STACK_VAR(ch3,"ch3");
	HX_STACK_LINE(432)
	int tmp12 = this->position;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(432)
	int tmp13 = this->length;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(432)
	bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(432)
	int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(432)
	if ((tmp14)){
		HX_STACK_LINE(432)
		int tmp16 = (this->position)++;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(432)
		int pos = tmp16;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(432)
		tmp15 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(432)
		tmp15 = this->ThrowEOFi();
	}
	HX_STACK_LINE(432)
	int ch4 = tmp15;		HX_STACK_VAR(ch4,"ch4");
	HX_STACK_LINE(433)
	bool tmp16 = this->littleEndian;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(433)
	int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(433)
	if ((tmp16)){
		HX_STACK_LINE(433)
		int tmp18 = (int(ch4) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(433)
		int tmp19 = (int(ch3) << int((int)16));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(433)
		int tmp20 = (int(tmp18) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(433)
		int tmp21 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(433)
		int tmp22 = (int(tmp20) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(433)
		int tmp23 = ch1;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(433)
		tmp17 = (int(tmp22) | int(tmp23));
	}
	else{
		HX_STACK_LINE(433)
		int tmp18 = (int(ch1) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(433)
		int tmp19 = (int(ch2) << int((int)16));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(433)
		int tmp20 = (int(tmp18) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(433)
		int tmp21 = (int(ch3) << int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(433)
		int tmp22 = (int(tmp20) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(433)
		int tmp23 = ch4;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(433)
		tmp17 = (int(tmp22) | int(tmp23));
	}
	HX_STACK_LINE(433)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readInt,return )

::String ByteArray_obj::readMultiByte( int length,::String charSet){
	HX_STACK_FRAME("lime.utils.ByteArray","readMultiByte",0x680b0db8,"lime.utils.ByteArray.readMultiByte","lime/utils/ByteArray.hx",439,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(charSet,"charSet")
	HX_STACK_LINE(441)
	int tmp = length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(441)
	::String tmp1 = this->readUTFBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(441)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,readMultiByte,return )

int ByteArray_obj::readShort( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readShort",0x6d883493,"lime.utils.ByteArray.readShort","lime/utils/ByteArray.hx",446,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(453)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(453)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(453)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(453)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(453)
	if ((tmp2)){
		HX_STACK_LINE(453)
		int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(453)
		int pos = tmp4;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(453)
		tmp3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(453)
		tmp3 = this->ThrowEOFi();
	}
	HX_STACK_LINE(453)
	int ch1 = tmp3;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(454)
	int tmp4 = this->position;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(454)
	int tmp5 = this->length;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(454)
	bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(454)
	int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(454)
	if ((tmp6)){
		HX_STACK_LINE(454)
		int tmp8 = (this->position)++;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(454)
		int pos = tmp8;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(454)
		tmp7 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(454)
		tmp7 = this->ThrowEOFi();
	}
	HX_STACK_LINE(454)
	int ch2 = tmp7;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(455)
	bool tmp8 = this->littleEndian;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(455)
	int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(455)
	if ((tmp8)){
		HX_STACK_LINE(455)
		int tmp10 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(455)
		int tmp11 = ch1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(455)
		tmp9 = (int(tmp10) | int(tmp11));
	}
	else{
		HX_STACK_LINE(455)
		int tmp10 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(455)
		int tmp11 = ch2;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(455)
		tmp9 = (int(tmp10) | int(tmp11));
	}
	HX_STACK_LINE(455)
	int val = tmp9;		HX_STACK_VAR(val,"val");
	HX_STACK_LINE(456)
	int tmp10 = (int(val) & int((int)32768));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(456)
	bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(456)
	int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(456)
	if ((tmp11)){
		HX_STACK_LINE(456)
		tmp12 = (val - (int)65536);
	}
	else{
		HX_STACK_LINE(456)
		tmp12 = val;
	}
	HX_STACK_LINE(456)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readShort,return )

int ByteArray_obj::readUnsignedByte( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readUnsignedByte",0x22c35b66,"lime.utils.ByteArray.readUnsignedByte","lime/utils/ByteArray.hx",462,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(468)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(468)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(468)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(468)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(468)
	if ((tmp2)){
		HX_STACK_LINE(468)
		int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(468)
		int pos = tmp4;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(468)
		tmp3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(468)
		tmp3 = this->ThrowEOFi();
	}
	HX_STACK_LINE(468)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUnsignedByte,return )

int ByteArray_obj::readUnsignedInt( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readUnsignedInt",0x956a0651,"lime.utils.ByteArray.readUnsignedInt","lime/utils/ByteArray.hx",474,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(481)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(481)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(481)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(481)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(481)
	if ((tmp2)){
		HX_STACK_LINE(481)
		int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(481)
		int pos = tmp4;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(481)
		tmp3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(481)
		tmp3 = this->ThrowEOFi();
	}
	HX_STACK_LINE(481)
	int ch1 = tmp3;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(482)
	int tmp4 = this->position;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(482)
	int tmp5 = this->length;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(482)
	bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(482)
	int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(482)
	if ((tmp6)){
		HX_STACK_LINE(482)
		int tmp8 = (this->position)++;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(482)
		int pos = tmp8;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(482)
		tmp7 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(482)
		tmp7 = this->ThrowEOFi();
	}
	HX_STACK_LINE(482)
	int ch2 = tmp7;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(483)
	int tmp8 = this->position;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(483)
	int tmp9 = this->length;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(483)
	bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(483)
	int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(483)
	if ((tmp10)){
		HX_STACK_LINE(483)
		int tmp12 = (this->position)++;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(483)
		int pos = tmp12;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(483)
		tmp11 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(483)
		tmp11 = this->ThrowEOFi();
	}
	HX_STACK_LINE(483)
	int ch3 = tmp11;		HX_STACK_VAR(ch3,"ch3");
	HX_STACK_LINE(484)
	int tmp12 = this->position;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(484)
	int tmp13 = this->length;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(484)
	bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(484)
	int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(484)
	if ((tmp14)){
		HX_STACK_LINE(484)
		int tmp16 = (this->position)++;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(484)
		int pos = tmp16;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(484)
		tmp15 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(484)
		tmp15 = this->ThrowEOFi();
	}
	HX_STACK_LINE(484)
	int ch4 = tmp15;		HX_STACK_VAR(ch4,"ch4");
	HX_STACK_LINE(485)
	bool tmp16 = this->littleEndian;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(485)
	int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(485)
	if ((tmp16)){
		HX_STACK_LINE(485)
		int tmp18 = (int(ch4) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(485)
		int tmp19 = (int(ch3) << int((int)16));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(485)
		int tmp20 = (int(tmp18) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(485)
		int tmp21 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(485)
		int tmp22 = (int(tmp20) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(485)
		int tmp23 = ch1;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(485)
		tmp17 = (int(tmp22) | int(tmp23));
	}
	else{
		HX_STACK_LINE(485)
		int tmp18 = (int(ch1) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(485)
		int tmp19 = (int(ch2) << int((int)16));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(485)
		int tmp20 = (int(tmp18) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(485)
		int tmp21 = (int(ch3) << int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(485)
		int tmp22 = (int(tmp20) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(485)
		int tmp23 = ch4;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(485)
		tmp17 = (int(tmp22) | int(tmp23));
	}
	HX_STACK_LINE(485)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUnsignedInt,return )

int ByteArray_obj::readUnsignedShort( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readUnsignedShort",0x06bc1a5e,"lime.utils.ByteArray.readUnsignedShort","lime/utils/ByteArray.hx",491,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(498)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(498)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(498)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(498)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(498)
	if ((tmp2)){
		HX_STACK_LINE(498)
		int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(498)
		int pos = tmp4;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(498)
		tmp3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(498)
		tmp3 = this->ThrowEOFi();
	}
	HX_STACK_LINE(498)
	int ch1 = tmp3;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(499)
	int tmp4 = this->position;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(499)
	int tmp5 = this->length;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(499)
	bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(499)
	int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(499)
	if ((tmp6)){
		HX_STACK_LINE(499)
		int tmp8 = (this->position)++;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(499)
		int pos = tmp8;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(499)
		tmp7 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(499)
		tmp7 = this->ThrowEOFi();
	}
	HX_STACK_LINE(499)
	int ch2 = tmp7;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(500)
	bool tmp8 = this->littleEndian;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(500)
	int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(500)
	if ((tmp8)){
		HX_STACK_LINE(500)
		int tmp10 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(500)
		int tmp11 = ch1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(500)
		tmp9 = (tmp10 + tmp11);
	}
	else{
		HX_STACK_LINE(500)
		int tmp10 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(500)
		int tmp11 = ch2;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(500)
		tmp9 = (int(tmp10) | int(tmp11));
	}
	HX_STACK_LINE(500)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUnsignedShort,return )

::String ByteArray_obj::readUTF( ){
	HX_STACK_FRAME("lime.utils.ByteArray","readUTF",0x0234bd7e,"lime.utils.ByteArray.readUTF","lime/utils/ByteArray.hx",506,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(508)
	int tmp = this->readUnsignedShort();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(508)
	int bytesCount = tmp;		HX_STACK_VAR(bytesCount,"bytesCount");
	HX_STACK_LINE(509)
	int tmp1 = bytesCount;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(509)
	::String tmp2 = this->readUTFBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(509)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUTF,return )

::String ByteArray_obj::readUTFBytes( int len){
	HX_STACK_FRAME("lime.utils.ByteArray","readUTFBytes",0xa63b120d,"lime.utils.ByteArray.readUTFBytes","lime/utils/ByteArray.hx",514,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(555)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(555)
	int tmp1 = len;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(555)
	int tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(555)
	int tmp3 = this->length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(555)
	bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(555)
	if ((tmp4)){
		HX_STACK_LINE(557)
		this->ThrowEOFi();
	}
	HX_STACK_LINE(561)
	int tmp5 = this->position;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(561)
	int p = tmp5;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(562)
	hx::AddEq(this->position,len);
	HX_STACK_LINE(572)
	::String result = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(573)
	bool tmp6 = (this->b != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(573)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(573)
	if ((tmp6)){
		HX_STACK_LINE(573)
		tmp7 = (len > (int)0);
	}
	else{
		HX_STACK_LINE(573)
		tmp7 = false;
	}
	HX_STACK_LINE(573)
	if ((tmp7)){
		HX_STACK_LINE(574)
		::__hxcpp_string_of_bytes(this->b,result,p,len);
	}
	HX_STACK_LINE(576)
	::String tmp8 = result;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(576)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,readUTFBytes,return )

Void ByteArray_obj::setLength( int length){
{
		HX_STACK_FRAME("lime.utils.ByteArray","setLength",0x1f286d75,"lime.utils.ByteArray.setLength","lime/utils/ByteArray.hx",589,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(length,"length")
		HX_STACK_LINE(591)
		bool tmp = (length > (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(591)
		if ((tmp)){
			HX_STACK_LINE(592)
			int tmp1 = (length - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(592)
			this->ensureElem(tmp1,false);
		}
		HX_STACK_LINE(593)
		this->length = length;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,setLength,(void))

::lime::utils::ByteArray ByteArray_obj::slice( int begin,Dynamic inEnd){
	HX_STACK_FRAME("lime.utils.ByteArray","slice",0x44803d1f,"lime.utils.ByteArray.slice","lime/utils/ByteArray.hx",600,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(inEnd,"inEnd")
	HX_STACK_LINE(602)
	bool tmp = (begin < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(602)
	if ((tmp)){
		HX_STACK_LINE(604)
		int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(604)
		hx::AddEq(begin,tmp1);
		HX_STACK_LINE(605)
		bool tmp2 = (begin < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(605)
		if ((tmp2)){
			HX_STACK_LINE(606)
			begin = (int)0;
		}
	}
	HX_STACK_LINE(610)
	bool tmp1 = (inEnd == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(610)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(610)
	if ((tmp1)){
		HX_STACK_LINE(610)
		tmp2 = this->length;
	}
	else{
		HX_STACK_LINE(610)
		tmp2 = inEnd;
	}
	HX_STACK_LINE(610)
	int end = tmp2;		HX_STACK_VAR(end,"end");
	HX_STACK_LINE(612)
	bool tmp3 = (end < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(612)
	if ((tmp3)){
		HX_STACK_LINE(614)
		int tmp4 = this->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(614)
		hx::AddEq(end,tmp4);
		HX_STACK_LINE(616)
		bool tmp5 = (end < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(616)
		if ((tmp5)){
			HX_STACK_LINE(617)
			end = (int)0;
		}
	}
	HX_STACK_LINE(621)
	bool tmp4 = (begin >= end);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(621)
	if ((tmp4)){
		HX_STACK_LINE(622)
		::lime::utils::ByteArray tmp5 = ::lime::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(622)
		return tmp5;
	}
	HX_STACK_LINE(624)
	int tmp5 = (end - begin);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(624)
	::lime::utils::ByteArray tmp6 = ::lime::utils::ByteArray_obj::__new(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(624)
	::lime::utils::ByteArray result = tmp6;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(626)
	int tmp7 = this->position;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(626)
	int opos = tmp7;		HX_STACK_VAR(opos,"opos");
	HX_STACK_LINE(627)
	int tmp8 = begin;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(627)
	int tmp9 = (end - begin);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(627)
	result->blit((int)0,hx::ObjectPtr<OBJ_>(this),tmp8,tmp9);
	HX_STACK_LINE(629)
	::lime::utils::ByteArray tmp10 = result;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(629)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,slice,return )

int ByteArray_obj::ThrowEOFi( ){
	HX_STACK_FRAME("lime.utils.ByteArray","ThrowEOFi",0x2ce113a0,"lime.utils.ByteArray.ThrowEOFi","lime/utils/ByteArray.hx",636,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(638)
	HX_STACK_DO_THROW(HX_HCSTRING("new EOFError();","\x4e","\x2c","\xa3","\xf0"));
	HX_STACK_LINE(639)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,ThrowEOFi,return )

::String ByteArray_obj::toString( ){
	HX_STACK_FRAME("lime.utils.ByteArray","toString",0xaed215ff,"lime.utils.ByteArray.toString","lime/utils/ByteArray.hx",645,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(647)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(647)
	int cachePosition = tmp;		HX_STACK_VAR(cachePosition,"cachePosition");
	HX_STACK_LINE(648)
	this->position = (int)0;
	HX_STACK_LINE(649)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(649)
	::String tmp2 = this->readUTFBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(649)
	::String value = tmp2;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(650)
	this->position = cachePosition;
	HX_STACK_LINE(651)
	::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(651)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,toString,return )

Void ByteArray_obj::uncompress( ::lime::utils::CompressionAlgorithm algorithm){
{
		HX_STACK_FRAME("lime.utils.ByteArray","uncompress",0x5340af0e,"lime.utils.ByteArray.uncompress","lime/utils/ByteArray.hx",656,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(algorithm,"algorithm")
		HX_STACK_LINE(672)
		bool tmp = (algorithm == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(672)
		if ((tmp)){
			HX_STACK_LINE(672)
			algorithm = ::lime::utils::CompressionAlgorithm_obj::GZIP;
		}
		HX_STACK_LINE(677)
		::lime::utils::ByteArray src = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(src,"src");
		HX_STACK_LINE(680)
		::haxe::io::Bytes result;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(682)
		bool tmp1 = (algorithm == ::lime::utils::CompressionAlgorithm_obj::LZMA);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(682)
		if ((tmp1)){
			HX_STACK_LINE(684)
			::haxe::io::Bytes tmp2 = ::haxe::io::Bytes_obj::ofData(::lime::utils::ByteArray_obj::lime_lzma_decode(src->b));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(684)
			result = tmp2;
		}
		else{
			HX_STACK_LINE(688)
			bool tmp2 = (algorithm != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(688)
			int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(688)
			if ((tmp2)){
				HX_STACK_LINE(688)
				switch( (int)(algorithm->__Index())){
					case (int)0: {
						HX_STACK_LINE(689)
						tmp3 = (int)-15;
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(690)
						tmp3 = (int)31;
					}
					;break;
					default: {
						HX_STACK_LINE(691)
						tmp3 = (int)15;
					}
				}
			}
			else{
				HX_STACK_LINE(691)
				tmp3 = (int)15;
			}
			HX_STACK_LINE(688)
			int windowBits = tmp3;		HX_STACK_VAR(windowBits,"windowBits");
			HX_STACK_LINE(697)
			::lime::utils::ByteArray tmp4 = src;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(697)
			::haxe::io::Bytes tmp5 = ::haxe::zip::Uncompress_obj::run(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(697)
			result = tmp5;
		}
		HX_STACK_LINE(702)
		this->b = result->b;
		HX_STACK_LINE(703)
		this->length = result->length;
		HX_STACK_LINE(704)
		this->position = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,uncompress,(void))

Void ByteArray_obj::write_uncheck( int byte){
{
		HX_STACK_FRAME("lime.utils.ByteArray","write_uncheck",0xb8315afc,"lime.utils.ByteArray.write_uncheck","lime/utils/ByteArray.hx",714,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(byte,"byte")
		HX_STACK_LINE(718)
		int tmp = (this->position)++;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(718)
		int tmp1 = byte;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(718)
		this->b->__unsafe_set(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,write_uncheck,(void))

Void ByteArray_obj::writeBoolean( bool value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeBoolean",0x97597a5c,"lime.utils.ByteArray.writeBoolean","lime/utils/ByteArray.hx",729,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(731)
		bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(731)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(731)
		if ((tmp)){
			HX_STACK_LINE(731)
			tmp1 = (int)1;
		}
		else{
			HX_STACK_LINE(731)
			tmp1 = (int)0;
		}
		HX_STACK_LINE(731)
		this->writeByte(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeBoolean,(void))

Void ByteArray_obj::writeByte( int value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeByte",0x6a5076d4,"lime.utils.ByteArray.writeByte","lime/utils/ByteArray.hx",736,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(744)
		int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(744)
		this->ensureElem(tmp,true);
		HX_STACK_LINE(748)
		int tmp1 = (this->position)++;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(748)
		unsigned char tmp2 = (int(value) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(748)
		this->b[tmp1] = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeByte,(void))

Void ByteArray_obj::writeBytes( ::haxe::io::Bytes bytes,hx::Null< int >  __o_offset,hx::Null< int >  __o_length){
int offset = __o_offset.Default(0);
int length = __o_length.Default(0);
	HX_STACK_FRAME("lime.utils.ByteArray","writeBytes",0x9c17831f,"lime.utils.ByteArray.writeBytes","lime/utils/ByteArray.hx",755,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(length,"length")
{
		HX_STACK_LINE(757)
		bool tmp = (bytes->length == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(757)
		if ((tmp)){
			HX_STACK_LINE(757)
			return null();
		}
		HX_STACK_LINE(765)
		bool tmp1 = (length == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(765)
		if ((tmp1)){
			HX_STACK_LINE(765)
			int tmp2 = (bytes->length - offset);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(765)
			length = tmp2;
		}
		HX_STACK_LINE(766)
		int tmp2 = this->position;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(766)
		int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(766)
		int tmp4 = length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(766)
		int tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(766)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(766)
		int tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(766)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(766)
		this->ensureElem(tmp8,true);
		HX_STACK_LINE(767)
		int tmp9 = this->position;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(767)
		int opos = tmp9;		HX_STACK_VAR(opos,"opos");
		HX_STACK_LINE(768)
		int tmp10 = this->position;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(768)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(768)
		int tmp12 = length;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(768)
		int tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(768)
		this->position = tmp13;
		HX_STACK_LINE(769)
		int tmp14 = opos;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(769)
		::haxe::io::Bytes tmp15 = bytes;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(769)
		int tmp16 = offset;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(769)
		int tmp17 = length;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(769)
		this->blit(tmp14,tmp15,tmp16,tmp17);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ByteArray_obj,writeBytes,(void))

Void ByteArray_obj::writeDouble( Float x){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeDouble",0x03d70ddd,"lime.utils.ByteArray.writeDouble","lime/utils/ByteArray.hx",775,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(782)
		int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(782)
		int tmp1 = (tmp + (int)7);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(782)
		this->ensureElem(tmp1,true);
		HX_STACK_LINE(783)
		int tmp2 = this->position;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(783)
		Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(783)
		this->setDouble(tmp2,tmp3);
		HX_STACK_LINE(784)
		hx::AddEq(this->position,(int)8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeDouble,(void))

Void ByteArray_obj::writeFile( ::String path){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeFile",0x6ce92648,"lime.utils.ByteArray.writeFile","lime/utils/ByteArray.hx",790,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_LINE(796)
		::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(796)
		::lime::utils::ByteArray_obj::lime_byte_array_overwrite_file(tmp,hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeFile,(void))

Void ByteArray_obj::writeFloat( Float x){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeFloat",0xe1164050,"lime.utils.ByteArray.writeFloat","lime/utils/ByteArray.hx",803,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(810)
		int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(810)
		int tmp1 = (tmp + (int)3);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(810)
		this->ensureElem(tmp1,true);
		HX_STACK_LINE(811)
		int tmp2 = this->position;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(811)
		Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(811)
		this->setFloat(tmp2,tmp3);
		HX_STACK_LINE(812)
		hx::AddEq(this->position,(int)4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeFloat,(void))

Void ByteArray_obj::writeInt( int value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeInt",0x9a53b2a3,"lime.utils.ByteArray.writeInt","lime/utils/ByteArray.hx",818,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(825)
		int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(825)
		int tmp1 = (tmp + (int)3);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(825)
		this->ensureElem(tmp1,true);
		HX_STACK_LINE(827)
		bool tmp2 = this->littleEndian;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(827)
		if ((tmp2)){
			HX_STACK_LINE(829)
			{
				HX_STACK_LINE(829)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(829)
				int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(829)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(830)
			{
				HX_STACK_LINE(830)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(830)
				int tmp4 = (int(value) >> int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(830)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(831)
			{
				HX_STACK_LINE(831)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(831)
				int tmp4 = (int(value) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(831)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(832)
			{
				HX_STACK_LINE(832)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(832)
				int tmp4 = (int(value) >> int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(832)
				this->b->__unsafe_set(tmp3,tmp4);
			}
		}
		else{
			HX_STACK_LINE(836)
			{
				HX_STACK_LINE(836)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(836)
				int tmp4 = (int(value) >> int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(836)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(837)
			{
				HX_STACK_LINE(837)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(837)
				int tmp4 = (int(value) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(837)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(838)
			{
				HX_STACK_LINE(838)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(838)
				int tmp4 = (int(value) >> int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(838)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(839)
			{
				HX_STACK_LINE(839)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(839)
				int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(839)
				this->b->__unsafe_set(tmp3,tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeInt,(void))

Void ByteArray_obj::writeShort( int value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeShort",0x5aa6ff30,"lime.utils.ByteArray.writeShort","lime/utils/ByteArray.hx",847,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(854)
		int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(854)
		int tmp1 = (tmp + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(854)
		this->ensureElem(tmp1,true);
		HX_STACK_LINE(856)
		bool tmp2 = this->littleEndian;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(856)
		if ((tmp2)){
			HX_STACK_LINE(858)
			{
				HX_STACK_LINE(858)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(858)
				int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(858)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(859)
			{
				HX_STACK_LINE(859)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(859)
				int tmp4 = (int(value) >> int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(859)
				this->b->__unsafe_set(tmp3,tmp4);
			}
		}
		else{
			HX_STACK_LINE(863)
			{
				HX_STACK_LINE(863)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(863)
				int tmp4 = (int(value) >> int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(863)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(864)
			{
				HX_STACK_LINE(864)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(864)
				int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(864)
				this->b->__unsafe_set(tmp3,tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeShort,(void))

Void ByteArray_obj::writeUnsignedInt( int value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeUnsignedInt",0x9d6624ae,"lime.utils.ByteArray.writeUnsignedInt","lime/utils/ByteArray.hx",873,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(880)
		int tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(880)
		this->writeInt(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUnsignedInt,(void))

Void ByteArray_obj::writeUnsignedShort( int value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeUnsignedShort",0x1cc249fb,"lime.utils.ByteArray.writeUnsignedShort","lime/utils/ByteArray.hx",886,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(893)
		int tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(893)
		this->writeShort(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUnsignedShort,(void))

Void ByteArray_obj::writeUTF( ::String value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeUTF",0x9a5cb6db,"lime.utils.ByteArray.writeUTF","lime/utils/ByteArray.hx",899,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(908)
		::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(908)
		::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(908)
		::haxe::io::Bytes bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(910)
		int tmp2 = bytes->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(910)
		this->writeShort(tmp2);
		HX_STACK_LINE(911)
		::haxe::io::Bytes tmp3 = bytes;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(911)
		this->writeBytes(tmp3,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUTF,(void))

Void ByteArray_obj::writeUTFBytes( ::String value){
{
		HX_STACK_FRAME("lime.utils.ByteArray","writeUTFBytes",0x2cbd0790,"lime.utils.ByteArray.writeUTFBytes","lime/utils/ByteArray.hx",917,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(954)
		::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(954)
		::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(954)
		::haxe::io::Bytes bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(956)
		::haxe::io::Bytes tmp2 = bytes;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(956)
		this->writeBytes(tmp2,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUTFBytes,(void))

Void ByteArray_obj::__fromBytes( ::haxe::io::Bytes bytes){
{
		HX_STACK_FRAME("lime.utils.ByteArray","__fromBytes",0xdc5fcc0e,"lime.utils.ByteArray.__fromBytes","lime/utils/ByteArray.hx",962,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_LINE(969)
		this->b = bytes->b;
		HX_STACK_LINE(970)
		this->length = bytes->length;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,__fromBytes,(void))

int ByteArray_obj::__get( int pos){
	HX_STACK_FRAME("lime.utils.ByteArray","__get",0xb7e35a43,"lime.utils.ByteArray.__get","lime/utils/ByteArray.hx",979,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(987)
	int tmp = this->b->__get(pos);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(987)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,__get,return )

Dynamic ByteArray_obj::__getNativePointer( ){
	HX_STACK_FRAME("lime.utils.ByteArray","__getNativePointer",0x110c17a3,"lime.utils.ByteArray.__getNativePointer","lime/utils/ByteArray.hx",1006,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1008)
	Dynamic tmp = ::lime::utils::ByteArray_obj::lime_byte_array_get_native_pointer(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1008)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,__getNativePointer,return )

Void ByteArray_obj::__set( int pos,int v){
{
		HX_STACK_FRAME("lime.utils.ByteArray","__set",0xb7ec754f,"lime.utils.ByteArray.__set","lime/utils/ByteArray.hx",1085,0x2063a1e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1092)
		int tmp = v;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1092)
		this->b[pos] = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,__set,(void))

bool ByteArray_obj::get_bigEndian( ){
	HX_STACK_FRAME("lime.utils.ByteArray","get_bigEndian",0x3400371f,"lime.utils.ByteArray.get_bigEndian","lime/utils/ByteArray.hx",1109,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1109)
	bool tmp = this->littleEndian;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1109)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1109)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_bigEndian,return )

bool ByteArray_obj::set_bigEndian( bool value){
	HX_STACK_FRAME("lime.utils.ByteArray","set_bigEndian",0x7906192b,"lime.utils.ByteArray.set_bigEndian","lime/utils/ByteArray.hx",1110,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1110)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1110)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1110)
	this->littleEndian = tmp1;
	HX_STACK_LINE(1110)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1110)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,set_bigEndian,return )

int ByteArray_obj::get_bytesAvailable( ){
	HX_STACK_FRAME("lime.utils.ByteArray","get_bytesAvailable",0x625f77ba,"lime.utils.ByteArray.get_bytesAvailable","lime/utils/ByteArray.hx",1114,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1116)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1116)
	int tmp1 = this->position;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1116)
	int tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1116)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_bytesAvailable,return )

int ByteArray_obj::get_byteLength( ){
	HX_STACK_FRAME("lime.utils.ByteArray","get_byteLength",0x941c2bea,"lime.utils.ByteArray.get_byteLength","lime/utils/ByteArray.hx",1122,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1124)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1124)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_byteLength,return )

::String ByteArray_obj::get_endian( ){
	HX_STACK_FRAME("lime.utils.ByteArray","get_endian",0x34cd8877,"lime.utils.ByteArray.get_endian","lime/utils/ByteArray.hx",1130,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1132)
	bool tmp = this->littleEndian;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1132)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1132)
	if ((tmp)){
		HX_STACK_LINE(1132)
		tmp1 = HX_HCSTRING("littleEndian","\x31","\x2e","\x7b","\x07");
	}
	else{
		HX_STACK_LINE(1132)
		tmp1 = HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20");
	}
	HX_STACK_LINE(1132)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_endian,return )

::String ByteArray_obj::set_endian( ::String endian){
	HX_STACK_FRAME("lime.utils.ByteArray","set_endian",0x384b26eb,"lime.utils.ByteArray.set_endian","lime/utils/ByteArray.hx",1137,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(endian,"endian")
	HX_STACK_LINE(1139)
	bool tmp = (endian == HX_HCSTRING("littleEndian","\x31","\x2e","\x7b","\x07"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1139)
	this->littleEndian = tmp;
	HX_STACK_LINE(1140)
	::String tmp1 = endian;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1140)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,set_endian,return )

int ByteArray_obj::set_length( int value){
	HX_STACK_FRAME("lime.utils.ByteArray","set_length",0xdcca2336,"lime.utils.ByteArray.set_length","lime/utils/ByteArray.hx",1145,0x2063a1e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1154)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1154)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,set_length,return )

::lime::utils::ByteArray ByteArray_obj::fromBytes( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("lime.utils.ByteArray","fromBytes",0x929a55ee,"lime.utils.ByteArray.fromBytes","lime/utils/ByteArray.hx",285,0x2063a1e5)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(287)
	::lime::utils::ByteArray tmp = ::lime::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(287)
	::lime::utils::ByteArray result = tmp;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(288)
	{
		HX_STACK_LINE(288)
		result->b = bytes->b;
		HX_STACK_LINE(288)
		result->length = bytes->length;
	}
	HX_STACK_LINE(289)
	::lime::utils::ByteArray tmp1 = result;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(289)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,fromBytes,return )

::lime::utils::ByteArray ByteArray_obj::readFile( ::String path){
	HX_STACK_FRAME("lime.utils.ByteArray","readFile",0xe216ee45,"lime.utils.ByteArray.readFile","lime/utils/ByteArray.hx",394,0x2063a1e5)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(401)
	::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(401)
	::lime::utils::ByteArray tmp1 = ::lime::utils::ByteArray_obj::lime_byte_array_read_file(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(401)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,readFile,return )

Dynamic ByteArray_obj::lime_byte_array_get_native_pointer;

Dynamic ByteArray_obj::lime_byte_array_overwrite_file;

Dynamic ByteArray_obj::lime_byte_array_read_file;

Dynamic ByteArray_obj::lime_lzma_decode;

Dynamic ByteArray_obj::lime_lzma_encode;


ByteArray_obj::ByteArray_obj()
{
}

Dynamic ByteArray_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"slice") ) { return slice_dyn(); }
		if (HX_FIELD_EQ(inName,"__get") ) { return __get_dyn(); }
		if (HX_FIELD_EQ(inName,"__set") ) { return __set_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"endian") ) { if (inCallProp == hx::paccAlways) return get_endian(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"deflate") ) { return deflate_dyn(); }
		if (HX_FIELD_EQ(inName,"inflate") ) { return inflate_dyn(); }
		if (HX_FIELD_EQ(inName,"readInt") ) { return readInt_dyn(); }
		if (HX_FIELD_EQ(inName,"readUTF") ) { return readUTF_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		if (HX_FIELD_EQ(inName,"asString") ) { return asString_dyn(); }
		if (HX_FIELD_EQ(inName,"compress") ) { return compress_dyn(); }
		if (HX_FIELD_EQ(inName,"getStart") ) { return getStart_dyn(); }
		if (HX_FIELD_EQ(inName,"readByte") ) { return readByte_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"writeInt") ) { return writeInt_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUTF") ) { return writeUTF_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allocated") ) { return allocated; }
		if (HX_FIELD_EQ(inName,"bigEndian") ) { if (inCallProp == hx::paccAlways) return get_bigEndian(); }
		if (HX_FIELD_EQ(inName,"checkData") ) { return checkData_dyn(); }
		if (HX_FIELD_EQ(inName,"getLength") ) { return getLength_dyn(); }
		if (HX_FIELD_EQ(inName,"readBytes") ) { return readBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"readFloat") ) { return readFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"readShort") ) { return readShort_dyn(); }
		if (HX_FIELD_EQ(inName,"setLength") ) { return setLength_dyn(); }
		if (HX_FIELD_EQ(inName,"ThrowEOFi") ) { return ThrowEOFi_dyn(); }
		if (HX_FIELD_EQ(inName,"writeByte") ) { return writeByte_dyn(); }
		if (HX_FIELD_EQ(inName,"writeFile") ) { return writeFile_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteLength") ) { return inCallProp == hx::paccAlways ? get_byteLength() : byteLength; }
		if (HX_FIELD_EQ(inName,"ensureElem") ) { return ensureElem_dyn(); }
		if (HX_FIELD_EQ(inName,"readDouble") ) { return readDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"uncompress") ) { return uncompress_dyn(); }
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return writeBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"writeFloat") ) { return writeFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"writeShort") ) { return writeShort_dyn(); }
		if (HX_FIELD_EQ(inName,"get_endian") ) { return get_endian_dyn(); }
		if (HX_FIELD_EQ(inName,"set_endian") ) { return set_endian_dyn(); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return set_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"readBoolean") ) { return readBoolean_dyn(); }
		if (HX_FIELD_EQ(inName,"writeDouble") ) { return writeDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return __fromBytes_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"littleEndian") ) { return littleEndian; }
		if (HX_FIELD_EQ(inName,"readUTFBytes") ) { return readUTFBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"writeBoolean") ) { return writeBoolean_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getByteBuffer") ) { return getByteBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"readMultiByte") ) { return readMultiByte_dyn(); }
		if (HX_FIELD_EQ(inName,"write_uncheck") ) { return write_uncheck_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUTFBytes") ) { return writeUTFBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bigEndian") ) { return get_bigEndian_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bigEndian") ) { return set_bigEndian_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bytesAvailable") ) { return inCallProp == hx::paccAlways ? get_bytesAvailable() : bytesAvailable; }
		if (HX_FIELD_EQ(inName,"objectEncoding") ) { return objectEncoding; }
		if (HX_FIELD_EQ(inName,"get_byteLength") ) { return get_byteLength_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"readUnsignedInt") ) { return readUnsignedInt_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"readUnsignedByte") ) { return readUnsignedByte_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUnsignedInt") ) { return writeUnsignedInt_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"readUnsignedShort") ) { return readUnsignedShort_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"writeUnsignedShort") ) { return writeUnsignedShort_dyn(); }
		if (HX_FIELD_EQ(inName,"__getNativePointer") ) { return __getNativePointer_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bytesAvailable") ) { return get_bytesAvailable_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ByteArray_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"readFile") ) { outValue = readFile_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_lzma_decode") ) { outValue = lime_lzma_decode; return true;  }
		if (HX_FIELD_EQ(inName,"lime_lzma_encode") ) { outValue = lime_lzma_encode; return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_byte_array_read_file") ) { outValue = lime_byte_array_read_file; return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_byte_array_overwrite_file") ) { outValue = lime_byte_array_overwrite_file; return true;  }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_byte_array_get_native_pointer") ) { outValue = lime_byte_array_get_native_pointer; return true;  }
	}
	return false;
}

Dynamic ByteArray_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"endian") ) { if (inCallProp == hx::paccAlways) return set_endian(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allocated") ) { allocated=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bigEndian") ) { if (inCallProp == hx::paccAlways) return set_bigEndian(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteLength") ) { byteLength=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"littleEndian") ) { littleEndian=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bytesAvailable") ) { bytesAvailable=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"objectEncoding") ) { objectEncoding=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ByteArray_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"lime_lzma_decode") ) { lime_lzma_decode=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_lzma_encode") ) { lime_lzma_encode=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_byte_array_read_file") ) { lime_byte_array_read_file=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_byte_array_overwrite_file") ) { lime_byte_array_overwrite_file=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_byte_array_get_native_pointer") ) { lime_byte_array_get_native_pointer=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void ByteArray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bytesAvailable","\xde","\x4b","\x9d","\x9b"));
	outFields->push(HX_HCSTRING("endian","\x9b","\x98","\x88","\xfa"));
	outFields->push(HX_HCSTRING("objectEncoding","\xb2","\x1e","\x15","\x2a"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("allocated","\x07","\x93","\x8d","\x3c"));
	outFields->push(HX_HCSTRING("littleEndian","\x31","\x2e","\x7b","\x07"));
	outFields->push(HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20"));
	outFields->push(HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ByteArray_obj,bytesAvailable),HX_HCSTRING("bytesAvailable","\xde","\x4b","\x9d","\x9b")},
	{hx::fsInt,(int)offsetof(ByteArray_obj,objectEncoding),HX_HCSTRING("objectEncoding","\xb2","\x1e","\x15","\x2a")},
	{hx::fsInt,(int)offsetof(ByteArray_obj,position),HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")},
	{hx::fsInt,(int)offsetof(ByteArray_obj,allocated),HX_HCSTRING("allocated","\x07","\x93","\x8d","\x3c")},
	{hx::fsBool,(int)offsetof(ByteArray_obj,littleEndian),HX_HCSTRING("littleEndian","\x31","\x2e","\x7b","\x07")},
	{hx::fsInt,(int)offsetof(ByteArray_obj,byteLength),HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &ByteArray_obj::lime_byte_array_get_native_pointer,HX_HCSTRING("lime_byte_array_get_native_pointer","\x31","\xd1","\xd0","\x83")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ByteArray_obj::lime_byte_array_overwrite_file,HX_HCSTRING("lime_byte_array_overwrite_file","\x83","\x8f","\x35","\xd0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ByteArray_obj::lime_byte_array_read_file,HX_HCSTRING("lime_byte_array_read_file","\x12","\xa8","\x42","\x82")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ByteArray_obj::lime_lzma_decode,HX_HCSTRING("lime_lzma_decode","\x41","\x52","\xeb","\x43")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ByteArray_obj::lime_lzma_encode,HX_HCSTRING("lime_lzma_encode","\x29","\xe7","\xe1","\xd8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bytesAvailable","\xde","\x4b","\x9d","\x9b"),
	HX_HCSTRING("objectEncoding","\xb2","\x1e","\x15","\x2a"),
	HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"),
	HX_HCSTRING("allocated","\x07","\x93","\x8d","\x3c"),
	HX_HCSTRING("littleEndian","\x31","\x2e","\x7b","\x07"),
	HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77"),
	HX_HCSTRING("asString","\x63","\x33","\x06","\xa0"),
	HX_HCSTRING("checkData","\x12","\x1f","\x43","\x96"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("compress","\xa2","\x47","\xbf","\x83"),
	HX_HCSTRING("deflate","\x6b","\x0b","\xfa","\xa2"),
	HX_HCSTRING("ensureElem","\x6d","\xb1","\x2a","\x1e"),
	HX_HCSTRING("getLength","\x1c","\x1e","\x5e","\x1b"),
	HX_HCSTRING("getByteBuffer","\x5e","\xa2","\x0b","\x05"),
	HX_HCSTRING("getStart","\xec","\x83","\xe2","\xe3"),
	HX_HCSTRING("inflate","\x87","\x9c","\x1b","\x0c"),
	HX_HCSTRING("readBoolean","\xf2","\x7d","\xea","\xd0"),
	HX_HCSTRING("readByte","\x7e","\xf9","\x1a","\x69"),
	HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"),
	HX_HCSTRING("readDouble","\x07","\x0f","\x47","\x2c"),
	HX_HCSTRING("readFloat","\x66","\x12","\x7e","\xd3"),
	HX_HCSTRING("readInt","\x39","\xb3","\xc9","\x02"),
	HX_HCSTRING("readMultiByte","\xeb","\x7f","\xc9","\x15"),
	HX_HCSTRING("readShort","\x46","\xd1","\x0e","\x4d"),
	HX_HCSTRING("readUnsignedByte","\x13","\x0b","\xce","\x9b"),
	HX_HCSTRING("readUnsignedInt","\x44","\xab","\x4f","\x05"),
	HX_HCSTRING("readUnsignedShort","\x11","\x22","\x0b","\x77"),
	HX_HCSTRING("readUTF","\x71","\xb7","\xd2","\x02"),
	HX_HCSTRING("readUTFBytes","\x3a","\x27","\x0f","\x52"),
	HX_HCSTRING("setLength","\x28","\x0a","\xaf","\xfe"),
	HX_HCSTRING("slice","\x52","\xc4","\xc7","\x7e"),
	HX_HCSTRING("ThrowEOFi","\x53","\xb0","\x67","\x0c"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("uncompress","\xfb","\x2e","\x83","\x09"),
	HX_HCSTRING("write_uncheck","\x2f","\xcd","\xef","\x65"),
	HX_HCSTRING("writeBoolean","\x89","\x8f","\x2d","\x43"),
	HX_HCSTRING("writeByte","\x87","\x13","\xd7","\x49"),
	HX_HCSTRING("writeBytes","\x0c","\x03","\x5a","\x52"),
	HX_HCSTRING("writeDouble","\x50","\x7d","\xc4","\xc7"),
	HX_HCSTRING("writeFile","\xfb","\xc2","\x6f","\x4c"),
	HX_HCSTRING("writeFloat","\x3d","\xc0","\x58","\x97"),
	HX_HCSTRING("writeInt","\x50","\x6d","\xf0","\x23"),
	HX_HCSTRING("writeShort","\x1d","\x7f","\xe9","\x10"),
	HX_HCSTRING("writeUnsignedInt","\x5b","\xd4","\x70","\x16"),
	HX_HCSTRING("writeUnsignedShort","\xe8","\xfe","\x99","\xf1"),
	HX_HCSTRING("writeUTF","\x88","\x71","\xf9","\x23"),
	HX_HCSTRING("writeUTFBytes","\xc3","\x79","\x7b","\xda"),
	HX_HCSTRING("__fromBytes","\x81","\x3b","\x4d","\xa0"),
	HX_HCSTRING("__get","\x76","\xe1","\x2a","\xf2"),
	HX_HCSTRING("__getNativePointer","\x90","\xcc","\xe3","\xe5"),
	HX_HCSTRING("__set","\x82","\xfc","\x33","\xf2"),
	HX_HCSTRING("get_bigEndian","\x52","\xa9","\xbe","\xe1"),
	HX_HCSTRING("set_bigEndian","\x5e","\x8b","\xc4","\x26"),
	HX_HCSTRING("get_bytesAvailable","\xa7","\x2c","\x37","\x37"),
	HX_HCSTRING("get_byteLength","\x57","\xa6","\x01","\xed"),
	HX_HCSTRING("get_endian","\x64","\x08","\x10","\xeb"),
	HX_HCSTRING("set_endian","\xd8","\xa6","\x8d","\xee"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ByteArray_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ByteArray_obj::lime_byte_array_get_native_pointer,"lime_byte_array_get_native_pointer");
	HX_MARK_MEMBER_NAME(ByteArray_obj::lime_byte_array_overwrite_file,"lime_byte_array_overwrite_file");
	HX_MARK_MEMBER_NAME(ByteArray_obj::lime_byte_array_read_file,"lime_byte_array_read_file");
	HX_MARK_MEMBER_NAME(ByteArray_obj::lime_lzma_decode,"lime_lzma_decode");
	HX_MARK_MEMBER_NAME(ByteArray_obj::lime_lzma_encode,"lime_lzma_encode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ByteArray_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::lime_byte_array_get_native_pointer,"lime_byte_array_get_native_pointer");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::lime_byte_array_overwrite_file,"lime_byte_array_overwrite_file");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::lime_byte_array_read_file,"lime_byte_array_read_file");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::lime_lzma_decode,"lime_lzma_decode");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::lime_lzma_encode,"lime_lzma_encode");
};

#endif

hx::Class ByteArray_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("readFile","\xf2","\xa8","\xb3","\x6b"),
	HX_HCSTRING("lime_byte_array_get_native_pointer","\x31","\xd1","\xd0","\x83"),
	HX_HCSTRING("lime_byte_array_overwrite_file","\x83","\x8f","\x35","\xd0"),
	HX_HCSTRING("lime_byte_array_read_file","\x12","\xa8","\x42","\x82"),
	HX_HCSTRING("lime_lzma_decode","\x41","\x52","\xeb","\x43"),
	HX_HCSTRING("lime_lzma_encode","\x29","\xe7","\xe1","\xd8"),
	::String(null()) };

void ByteArray_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.ByteArray","\x7b","\x11","\x5b","\x03");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ByteArray_obj::__GetStatic;
	__mClass->mSetStaticField = &ByteArray_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ByteArray_obj >;
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

void ByteArray_obj::__boot()
{
	lime_byte_array_get_native_pointer= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_byte_array_get_native_pointer","\x31","\xd1","\xd0","\x83"),(int)1,null());
	lime_byte_array_overwrite_file= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_byte_array_overwrite_file","\x83","\x8f","\x35","\xd0"),(int)2,null());
	lime_byte_array_read_file= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_byte_array_read_file","\x12","\xa8","\x42","\x82"),(int)1,null());
	lime_lzma_decode= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_lzma_decode","\x41","\x52","\xeb","\x43"),(int)1,null());
	lime_lzma_encode= ::lime::_system::System_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_lzma_encode","\x29","\xe7","\xe1","\xd8"),(int)1,null());
}

} // end namespace lime
} // end namespace utils

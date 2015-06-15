#include <hxcpp.h>

#ifndef INCLUDED_Slides
#include <Slides.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif

Void Slides_obj::__construct()
{
HX_STACK_FRAME("Slides","new",0xc1ec2434,"Slides.new","Slides.hx",23,0x032a5dbc)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(23)
	this->index = (int)0;
}
;
	return null();
}

//Slides_obj::~Slides_obj() { }

Dynamic Slides_obj::__CreateEmpty() { return  new Slides_obj; }
hx::ObjectPtr< Slides_obj > Slides_obj::__new()
{  hx::ObjectPtr< Slides_obj > _result_ = new Slides_obj();
	_result_->__construct();
	return _result_;}

Dynamic Slides_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Slides_obj > _result_ = new Slides_obj();
	_result_->__construct();
	return _result_;}

void Slides_obj::__init__() {
HX_STACK_FRAME("Slides","__init__",0x197f28fc,"Slides.__init__","Slides.hx",18,0x032a5dbc)
{
	HX_STACK_LINE(18)
	::Slides_obj::populateSlides();
}
}

::String Slides_obj::next( ){
	HX_STACK_FRAME("Slides","next",0xecb38a9f,"Slides.next","Slides.hx",26,0x032a5dbc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(27)
	int tmp = this->index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	int tmp1 = ::Slides_obj::slides->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	int tmp2 = (tmp1 - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	bool tmp3 = (tmp <= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(27)
	if ((tmp3)){
		HX_STACK_LINE(27)
		++(this->index);
	}
	else{
		HX_STACK_LINE(27)
		int tmp4 = ::Slides_obj::slides->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(27)
		int tmp5 = (tmp4 - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(27)
		this->index = tmp5;
	}
	HX_STACK_LINE(28)
	::String tmp4 = this->get();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(28)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Slides_obj,next,return )

::String Slides_obj::prev( ){
	HX_STACK_FRAME("Slides","prev",0xee0fc49f,"Slides.prev","Slides.hx",32,0x032a5dbc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(33)
	int tmp = this->index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	bool tmp1 = (tmp >= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	if ((tmp1)){
		HX_STACK_LINE(33)
		--(this->index);
	}
	else{
		HX_STACK_LINE(33)
		this->index = (int)0;
	}
	HX_STACK_LINE(34)
	::String tmp2 = this->get();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Slides_obj,prev,return )

::String Slides_obj::get( ){
	HX_STACK_FRAME("Slides","get",0xc1e6d46a,"Slides.get","Slides.hx",38,0x032a5dbc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(39)
	Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	int tmp1 = this->index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	::String tmp2 = tmp->__get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(39)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Slides_obj,get,return )

Array< ::String > Slides_obj::slides;

Void Slides_obj::populateSlides( ){
{
		HX_STACK_FRAME("Slides","populateSlides",0x907b5958,"Slides.populateSlides","Slides.hx",42,0x032a5dbc)
		HX_STACK_LINE(43)
		::Slides_obj::slides = Array_obj< ::String >::__new();
		HX_STACK_LINE(45)
		{
			HX_STACK_LINE(45)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(45)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\nHAXE\nTHE CROSS LANGUAGE TOOLKIT\n      ","\x8b","\x7c","\x53","\x05"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(45)
			tmp->push(tmp1);
		}
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(50)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\nCreato nel 2005\nda\nNicolas Canasse\n      ","\x60","\x4f","\x0e","\x4c"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(50)
			tmp->push(tmp1);
		}
		HX_STACK_LINE(56)
		{
			HX_STACK_LINE(56)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(56)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\nOOP\nModello a oggetto simile a java\nClassi,interface,metodi statici...\n      ","\x4b","\x54","\xcd","\x09"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(56)
			tmp->push(tmp1);
		}
		HX_STACK_LINE(62)
		{
			HX_STACK_LINE(62)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(62)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\nSINTASSI C LIKE\nSintassi simile a c+,java,javascript...\n      ","\xeb","\x75","\xad","\xcd"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(62)
			tmp->push(tmp1);
		}
		HX_STACK_LINE(67)
		{
			HX_STACK_LINE(67)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(67)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\nOOP\nModello a oggetti simile a java\nClassi,interface,metodi statici...\n      ","\x45","\x1a","\xd4","\x5d"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(67)
			tmp->push(tmp1);
		}
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(73)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\nCLOSURE\nFunzioni anonime e closure\n      ","\xa0","\x50","\xe2","\x70"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(73)
			tmp->push(tmp1);
		}
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(78)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\nSTRING INTERPOLATION\ncome in php\n'$x + $y'\n      ","\x2e","\xa6","\xf7","\x21"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(78)
			tmp->push(tmp1);
		}
		HX_STACK_LINE(85)
		{
			HX_STACK_LINE(85)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(85)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\nSTRICTLY TYPED\nType System statico\ncon Type Inference\n      ","\xc5","\xfe","\x54","\xf9"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(85)
			tmp->push(tmp1);
		}
		HX_STACK_LINE(91)
		{
			HX_STACK_LINE(91)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(91)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\nDYNAMICS\noggetti dinamici\nsenza type checking\n      ","\x3e","\x71","\x90","\xba"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(91)
			tmp->push(tmp1);
		}
		HX_STACK_LINE(97)
		{
			HX_STACK_LINE(97)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(97)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\nEXTERNS\npermettono di mappare librerie esterne\ncon il type system\n      ","\x41","\x0e","\xa3","\xd8"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(97)
			tmp->push(tmp1);
		}
		HX_STACK_LINE(104)
		{
			HX_STACK_LINE(104)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(104)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\nTYPES\nsupporta tipi\ntramite typedef (simile alle strutture in c)\ne tipi anonimi\n      ","\x22","\xe7","\x42","\x9d"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(104)
			tmp->push(tmp1);
		}
		HX_STACK_LINE(111)
		{
			HX_STACK_LINE(111)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(111)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\nABSTRACT TYPES\nDefinizione di tipi astratti\nesistenti solo a compile type\n      ","\x97","\xe3","\x79","\xb6"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(111)
			tmp->push(tmp1);
		}
		HX_STACK_LINE(118)
		{
			HX_STACK_LINE(118)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(118)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\nABSTRACT TYPES\nOperator Overloading, Array Access,\nMethod forwarding, Implicit Cast\n      ","\x52","\xe3","\x00","\x08"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(118)
			tmp->push(tmp1);
		}
		HX_STACK_LINE(124)
		{
			HX_STACK_LINE(124)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(124)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\nSTATIC ESTENSION\nEstende gli oggetti a compile time\nsenza bisogno di ereditariet\xc3""\xa0""\n      ","\x96","\xdf","\x9c","\x71"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(124)
			tmp->push(tmp1);
		}
		HX_STACK_LINE(130)
		{
			HX_STACK_LINE(130)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(130)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\nINLINE\ninlining di funzioni e costruttori\npermette maggiori prestazioni\n      ","\xc6","\x72","\x8e","\xe2"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(130)
			tmp->push(tmp1);
		}
		HX_STACK_LINE(136)
		{
			HX_STACK_LINE(136)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(136)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\nMACRO SYSTEM\nPermette di generare codice\na compile time\nutile per scrivere dsl\n      ","\xe9","\xd8","\xbf","\xea"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(136)
			tmp->push(tmp1);
		}
		HX_STACK_LINE(143)
		{
			HX_STACK_LINE(143)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(143)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\nMACRO SYSTEM\nsi integra con il type system\nil compilatore controlla\nla validit\xc3""\xa0"" del codice\n      ","\x0c","\xae","\xb2","\x11"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(143)
			tmp->push(tmp1);
		}
		HX_STACK_LINE(150)
		{
			HX_STACK_LINE(150)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(150)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\nSTANDARD CORE LIBRARY\nSimili a core java e javascript\n      ","\xac","\xbb","\x7f","\x7c"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(150)
			tmp->push(tmp1);
		}
		HX_STACK_LINE(155)
		{
			HX_STACK_LINE(155)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(155)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\nXML e JSON\nnella core library\n      ","\x46","\x34","\x4b","\xaa"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(155)
			tmp->push(tmp1);
		}
		HX_STACK_LINE(160)
		{
			HX_STACK_LINE(160)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(160)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\nREMOTING \nRPC per comunicazione simile a SOAP\n      ","\xd6","\x3a","\x76","\x2b"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(160)
			tmp->push(tmp1);
		}
		HX_STACK_LINE(165)
		{
			HX_STACK_LINE(165)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(165)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\nREFLECTION\nPer ispezionare a runtime gli oggetti\n      ","\x4b","\x42","\xb7","\x47"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(165)
			tmp->push(tmp1);
		}
		HX_STACK_LINE(170)
		{
			HX_STACK_LINE(170)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(170)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\nMETADATA\nSimile alle annotations java\n      ","\xd4","\xdf","\x25","\x02"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(170)
			tmp->push(tmp1);
		}
		HX_STACK_LINE(176)
		{
			HX_STACK_LINE(176)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(176)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\nNEKO\nla VM in cui viene eseguito\nil codice Haxe compilato\nin byte code\n      ","\xe9","\xd4","\xcd","\x5d"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(176)
			tmp->push(tmp1);
		}
		HX_STACK_LINE(183)
		{
			HX_STACK_LINE(183)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(183)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\nNEKO\nutile per eseguirlo serve side\noppure....\n      ","\x03","\xc8","\x9f","\xa0"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(183)
			tmp->push(tmp1);
		}
		HX_STACK_LINE(189)
		{
			HX_STACK_LINE(189)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(189)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\nHAXE\nPu\xc3""\xb2"" compilare anche in....\n      ","\xa8","\x2b","\x31","\x19"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(189)
			tmp->push(tmp1);
		}
		HX_STACK_LINE(194)
		{
			HX_STACK_LINE(194)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(194)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\n1. NEKO\n      ","\x16","\x63","\xfb","\x4d"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(194)
			tmp->push(tmp1);
		}
		HX_STACK_LINE(198)
		{
			HX_STACK_LINE(198)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(198)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\n2. JAVASCRIPT\n      ","\xa3","\xc7","\xbf","\x99"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(198)
			tmp->push(tmp1);
		}
		HX_STACK_LINE(202)
		{
			HX_STACK_LINE(202)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(202)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\n3. FLASH\n      ","\xd5","\x75","\x48","\xa0"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(202)
			tmp->push(tmp1);
		}
		HX_STACK_LINE(206)
		{
			HX_STACK_LINE(206)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(206)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\n4. PHP\n      ","\xce","\x79","\x54","\xea"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(206)
			tmp->push(tmp1);
		}
		HX_STACK_LINE(209)
		{
			HX_STACK_LINE(209)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(209)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\n5. C++\n      ","\x64","\x7d","\xa9","\x42"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(209)
			tmp->push(tmp1);
		}
		HX_STACK_LINE(213)
		{
			HX_STACK_LINE(213)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(213)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\n6. JAVA\n       ","\x16","\x74","\x6d","\x86"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(213)
			tmp->push(tmp1);
		}
		HX_STACK_LINE(217)
		{
			HX_STACK_LINE(217)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(217)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\n7. C#\n       ","\xf5","\xae","\xf6","\x69"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(217)
			tmp->push(tmp1);
		}
		HX_STACK_LINE(221)
		{
			HX_STACK_LINE(221)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(221)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\n8. PYTHON\n       ","\x12","\x10","\x7a","\x07"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(221)
			tmp->push(tmp1);
		}
		HX_STACK_LINE(225)
		{
			HX_STACK_LINE(225)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(225)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\n9. LUA (experimental)\n       ","\xd8","\x17","\x1c","\xce"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(225)
			tmp->push(tmp1);
		}
		HX_STACK_LINE(229)
		{
			HX_STACK_LINE(229)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(229)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\n10. RUBY (experimental)\n       ","\x3a","\xb9","\x63","\xc3"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(229)
			tmp->push(tmp1);
		}
		HX_STACK_LINE(232)
		{
			HX_STACK_LINE(232)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(232)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\n11. SWIFT (work in progress...)\n       ","\x29","\x33","\xe1","\xae"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(232)
			tmp->push(tmp1);
		}
		HX_STACK_LINE(236)
		{
			HX_STACK_LINE(236)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(236)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\nHAXE\npermette di scrivere codice\nclient side,server side e\nmobile/desktop nativo\n       ","\x32","\x4a","\x20","\x5a"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(236)
			tmp->push(tmp1);
		}
		HX_STACK_LINE(244)
		{
			HX_STACK_LINE(244)
			Array< ::String > tmp = ::Slides_obj::slides;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(244)
			::String tmp1 = ::StringTools_obj::trim(HX_HCSTRING("\nHAXE\nUtilizzato soprattutto\nper scrivere giochi compilati\nin HTML5, FLASH e\nMOBILE/DESKTOP/CONSOLE\n       ","\xde","\xf7","\x72","\x7e"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(244)
			tmp->push(tmp1);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Slides_obj,populateSlides,(void))


Slides_obj::Slides_obj()
{
}

Dynamic Slides_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		if (HX_FIELD_EQ(inName,"prev") ) { return prev_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
	}
	return super::__Field(inName,inCallProp);
}

bool Slides_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"slides") ) { outValue = slides; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"populateSlides") ) { outValue = populateSlides_dyn(); return true;  }
	}
	return false;
}

Dynamic Slides_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Slides_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"slides") ) { slides=ioValue.Cast< Array< ::String > >(); return true; }
	}
	return false;
}

void Slides_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Slides_obj,index),HX_HCSTRING("index","\x12","\x9b","\x14","\xbe")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(void *) &Slides_obj::slides,HX_HCSTRING("slides","\x22","\xc6","\x04","\x70")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Slides_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Slides_obj::slides,"slides");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Slides_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Slides_obj::slides,"slides");
};

#endif

hx::Class Slides_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("slides","\x22","\xc6","\x04","\x70"),
	HX_HCSTRING("populateSlides","\xac","\x04","\x02","\x18"),
	::String(null()) };

void Slides_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Slides","\x42","\x3a","\x99","\xa4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Slides_obj::__GetStatic;
	__mClass->mSetStaticField = &Slides_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Slides_obj >;
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


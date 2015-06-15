#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLBuffer
#include <lime/graphics/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_Float32Array
#include <lime/utils/Float32Array.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_lime_utils_UInt16Array
#include <lime/utils/UInt16Array.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BucketDataType
#include <openfl/_internal/renderer/opengl/utils/BucketDataType.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLBucket
#include <openfl/_internal/renderer/opengl/utils/GLBucket.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLBucketData
#include <openfl/_internal/renderer/opengl/utils/GLBucketData.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexArray
#include <openfl/_internal/renderer/opengl/utils/VertexArray.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexAttribute
#include <openfl/_internal/renderer/opengl/utils/VertexAttribute.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void GLBucketData_obj::__construct(::lime::graphics::GLRenderContext gl)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLBucketData","new",0x4b51a26c,"openfl._internal.renderer.opengl.utils.GLBucketData.new","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1492,0xd295150c)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
{
	HX_STACK_LINE(1512)
	this->available = false;
	HX_STACK_LINE(1510)
	this->rawIndices = false;
	HX_STACK_LINE(1505)
	this->stride = (int)0;
	HX_STACK_LINE(1504)
	this->rawVerts = false;
	HX_STACK_LINE(1502)
	this->lastVertsSize = (int)0;
	HX_STACK_LINE(1498)
	this->glStart = (int)0;
	HX_STACK_LINE(1497)
	this->glLength = (int)0;
	HX_STACK_LINE(1517)
	this->gl = gl;
	HX_STACK_LINE(1518)
	this->drawMode = gl->TRIANGLE_STRIP;
	HX_STACK_LINE(1519)
	this->verts = Array_obj< Float >::__new();
	HX_STACK_LINE(1520)
	this->indices = Array_obj< int >::__new();
	HX_STACK_LINE(1521)
	::openfl::_internal::renderer::opengl::utils::VertexArray tmp = ::openfl::_internal::renderer::opengl::utils::VertexArray_obj::__new(Array_obj< ::Dynamic >::__new(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1521)
	this->vertexArray = tmp;
}
;
	return null();
}

//GLBucketData_obj::~GLBucketData_obj() { }

Dynamic GLBucketData_obj::__CreateEmpty() { return  new GLBucketData_obj; }
hx::ObjectPtr< GLBucketData_obj > GLBucketData_obj::__new(::lime::graphics::GLRenderContext gl)
{  hx::ObjectPtr< GLBucketData_obj > _result_ = new GLBucketData_obj();
	_result_->__construct(gl);
	return _result_;}

Dynamic GLBucketData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLBucketData_obj > _result_ = new GLBucketData_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void GLBucketData_obj::reset( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLBucketData","reset",0x4a67b6db,"openfl._internal.renderer.opengl.utils.GLBucketData.reset","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1524,0xd295150c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1525)
		this->available = true;
		HX_STACK_LINE(1526)
		this->verts = Array_obj< Float >::__new();
		HX_STACK_LINE(1527)
		this->indices = Array_obj< int >::__new();
		HX_STACK_LINE(1528)
		this->glLength = (int)0;
		HX_STACK_LINE(1529)
		this->glStart = (int)0;
		HX_STACK_LINE(1530)
		this->stride = (int)0;
		HX_STACK_LINE(1531)
		this->rawVerts = false;
		HX_STACK_LINE(1532)
		this->rawIndices = false;
		HX_STACK_LINE(1533)
		::lime::graphics::GLRenderContext tmp = this->gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1533)
		this->drawMode = tmp->TRIANGLE_STRIP;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GLBucketData_obj,reset,(void))

Void GLBucketData_obj::upload( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.GLBucketData","upload",0x5439c775,"openfl._internal.renderer.opengl.utils.GLBucketData.upload","openfl/_internal/renderer/opengl/utils/GraphicsRenderer.hx",1536,0xd295150c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1539)
		bool tmp = this->rawVerts;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1539)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1539)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1539)
		if ((tmp1)){
			HX_STACK_LINE(1539)
			::lime::utils::Float32Array tmp3 = this->glVerts;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1539)
			::lime::utils::Float32Array tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1539)
			::lime::utils::Float32Array tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1539)
			tmp2 = (tmp5 != null());
		}
		else{
			HX_STACK_LINE(1539)
			tmp2 = false;
		}
		HX_STACK_LINE(1539)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1539)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1539)
		if ((tmp3)){
			HX_STACK_LINE(1539)
			::lime::utils::Float32Array tmp5 = this->glVerts;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1539)
			::lime::utils::Float32Array tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1539)
			::lime::utils::Float32Array tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1539)
			int tmp8 = tmp7->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1539)
			tmp4 = (tmp8 > (int)0);
		}
		else{
			HX_STACK_LINE(1539)
			tmp4 = false;
		}
		HX_STACK_LINE(1539)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1539)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1539)
		if ((tmp5)){
			HX_STACK_LINE(1539)
			int tmp7 = this->verts->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1539)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1539)
			tmp6 = (tmp8 > (int)0);
		}
		else{
			HX_STACK_LINE(1539)
			tmp6 = true;
		}
		HX_STACK_LINE(1539)
		if ((tmp6)){
			HX_STACK_LINE(1541)
			bool tmp7 = this->rawVerts;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1541)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1541)
			if ((tmp8)){
				HX_STACK_LINE(1541)
				::lime::utils::Float32Array tmp9 = ::lime::utils::Float32Array_obj::__new(this->verts,null(),null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1541)
				this->glVerts = tmp9;
			}
			HX_STACK_LINE(1543)
			::lime::utils::Float32Array tmp9 = this->glVerts;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1543)
			::openfl::_internal::renderer::opengl::utils::VertexArray tmp10 = this->vertexArray;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1543)
			tmp10->buffer = tmp9->buffer;
			HX_STACK_LINE(1545)
			::lime::utils::Float32Array tmp11 = this->glVerts;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1545)
			int tmp12 = tmp11->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1545)
			int tmp13 = this->lastVertsSize;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1545)
			bool tmp14 = (tmp12 <= tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1545)
			if ((tmp14)){
				HX_STACK_LINE(1546)
				{
					HX_STACK_LINE(1546)
					::openfl::_internal::renderer::opengl::utils::VertexArray tmp15 = this->vertexArray;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1546)
					::openfl::_internal::renderer::opengl::utils::VertexArray _this = tmp15;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1546)
					{
						HX_STACK_LINE(1546)
						::lime::graphics::opengl::GLBuffer buffer = _this->glBuffer;		HX_STACK_VAR(buffer,"buffer");
						HX_STACK_LINE(1546)
						{
							HX_STACK_LINE(1546)
							int tmp16 = _this->gl->ARRAY_BUFFER;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1546)
							bool tmp17 = (buffer == null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1546)
							int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1546)
							if ((tmp17)){
								HX_STACK_LINE(1546)
								tmp18 = (int)0;
							}
							else{
								HX_STACK_LINE(1546)
								tmp18 = buffer->id;
							}
							HX_STACK_LINE(1546)
							::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(tmp16,tmp18);
						}
					}
				}
				HX_STACK_LINE(1547)
				int tmp15 = this->glLength;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1547)
				int tmp16 = (tmp15 * (int)4);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1547)
				int tmp17 = this->stride;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1547)
				int tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1547)
				int end = tmp18;		HX_STACK_VAR(end,"end");
				HX_STACK_LINE(1548)
				int tmp19 = this->glLength;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1548)
				bool tmp20 = (tmp19 > (int)0);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1548)
				bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1548)
				if ((tmp20)){
					HX_STACK_LINE(1548)
					int tmp22 = this->lastVertsSize;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1548)
					int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1548)
					int tmp24 = end;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1548)
					tmp21 = (tmp23 > tmp24);
				}
				else{
					HX_STACK_LINE(1548)
					tmp21 = false;
				}
				HX_STACK_LINE(1548)
				if ((tmp21)){
					HX_STACK_LINE(1549)
					::lime::utils::Float32Array tmp22 = this->glVerts;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1549)
					int tmp23 = end;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1549)
					::lime::utils::Float32Array tmp24 = tmp22->subarray((int)0,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1549)
					::lime::utils::Float32Array view = tmp24;		HX_STACK_VAR(view,"view");
					HX_STACK_LINE(1550)
					::openfl::_internal::renderer::opengl::utils::VertexArray tmp25 = this->vertexArray;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1550)
					::lime::utils::Float32Array tmp26 = view;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1550)
					tmp25->upload(tmp26);
				}
				else{
					HX_STACK_LINE(1552)
					::openfl::_internal::renderer::opengl::utils::VertexArray tmp22 = this->vertexArray;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1552)
					::lime::utils::Float32Array tmp23 = this->glVerts;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1552)
					tmp22->upload(tmp23);
				}
			}
			else{
				HX_STACK_LINE(1555)
				::openfl::_internal::renderer::opengl::utils::VertexArray tmp15 = this->vertexArray;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1555)
				::lime::graphics::GLRenderContext tmp16 = this->gl;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1555)
				::lime::utils::Float32Array tmp17 = this->glVerts;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1555)
				tmp15->setContext(tmp16,tmp17);
				HX_STACK_LINE(1556)
				::lime::utils::Float32Array tmp18 = this->glVerts;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1556)
				this->lastVertsSize = tmp18->length;
			}
		}
		HX_STACK_LINE(1562)
		int tmp7 = this->glLength;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1562)
		bool tmp8 = (tmp7 == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1562)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1562)
		if ((tmp8)){
			HX_STACK_LINE(1562)
			bool tmp10 = this->rawIndices;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1562)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1562)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1562)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1562)
			bool tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1562)
			if ((tmp14)){
				HX_STACK_LINE(1562)
				::lime::utils::UInt16Array tmp15 = this->glIndices;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1562)
				::lime::utils::UInt16Array tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1562)
				::lime::utils::UInt16Array tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1562)
				::lime::utils::UInt16Array tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1562)
				bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1562)
				tmp13 = tmp19;
			}
			else{
				HX_STACK_LINE(1562)
				tmp13 = false;
			}
			HX_STACK_LINE(1562)
			bool tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1562)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1562)
			bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1562)
			if ((tmp17)){
				HX_STACK_LINE(1562)
				::lime::utils::UInt16Array tmp18 = this->glIndices;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1562)
				::lime::utils::UInt16Array tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1562)
				::lime::utils::UInt16Array tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1562)
				::lime::utils::UInt16Array tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1562)
				int tmp22 = tmp21->length;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1562)
				bool tmp23 = (tmp22 > (int)0);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1562)
				tmp16 = tmp23;
			}
			else{
				HX_STACK_LINE(1562)
				tmp16 = false;
			}
			HX_STACK_LINE(1562)
			bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1562)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1562)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1562)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1562)
			if ((tmp21)){
				HX_STACK_LINE(1562)
				int tmp22 = this->indices->length;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1562)
				int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1562)
				int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1562)
				tmp9 = (tmp24 > (int)0);
			}
			else{
				HX_STACK_LINE(1562)
				tmp9 = true;
			}
		}
		else{
			HX_STACK_LINE(1562)
			tmp9 = false;
		}
		HX_STACK_LINE(1562)
		if ((tmp9)){
			HX_STACK_LINE(1564)
			::lime::graphics::opengl::GLBuffer tmp10 = this->indexBuffer;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1564)
			bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1564)
			if ((tmp11)){
				HX_STACK_LINE(1565)
				int tmp12 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1565)
				Dynamic tmp13 = ::lime::graphics::opengl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1565)
				::lime::graphics::opengl::GLBuffer tmp14 = ::lime::graphics::opengl::GLBuffer_obj::__new(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1565)
				this->indexBuffer = tmp14;
			}
			HX_STACK_LINE(1568)
			bool tmp12 = this->rawIndices;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1568)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1568)
			if ((tmp13)){
				HX_STACK_LINE(1568)
				::lime::utils::UInt16Array tmp14 = ::lime::utils::UInt16Array_obj::__new(this->indices,null(),null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1568)
				this->glIndices = tmp14;
			}
			HX_STACK_LINE(1569)
			{
				HX_STACK_LINE(1569)
				::lime::graphics::opengl::GLBuffer tmp14 = this->indexBuffer;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1569)
				::lime::graphics::opengl::GLBuffer buffer = tmp14;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(1569)
				{
					HX_STACK_LINE(1569)
					::lime::graphics::GLRenderContext tmp15 = this->gl;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1569)
					int tmp16 = tmp15->ELEMENT_ARRAY_BUFFER;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1569)
					bool tmp17 = (buffer == null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1569)
					int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1569)
					if ((tmp17)){
						HX_STACK_LINE(1569)
						tmp18 = (int)0;
					}
					else{
						HX_STACK_LINE(1569)
						tmp18 = buffer->id;
					}
					HX_STACK_LINE(1569)
					::lime::graphics::opengl::GL_obj::lime_gl_bind_buffer(tmp16,tmp18);
				}
			}
			HX_STACK_LINE(1570)
			{
				HX_STACK_LINE(1570)
				::lime::utils::UInt16Array tmp14 = this->glIndices;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1570)
				::lime::utils::ArrayBufferView data = tmp14;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(1570)
				{
					HX_STACK_LINE(1570)
					::lime::graphics::GLRenderContext tmp15 = this->gl;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1570)
					int tmp16 = tmp15->ELEMENT_ARRAY_BUFFER;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1570)
					::lime::utils::ByteArray tmp17 = data->getByteBuffer();		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1570)
					int tmp18 = data->getStart();		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1570)
					int tmp19 = data->getLength();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1570)
					::lime::graphics::GLRenderContext tmp20 = this->gl;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1570)
					int tmp21 = tmp20->STREAM_DRAW;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1570)
					::lime::graphics::opengl::GL_obj::lime_gl_buffer_data(tmp16,tmp17,tmp18,tmp19,tmp21);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GLBucketData_obj,upload,(void))


GLBucketData_obj::GLBucketData_obj()
{
}

void GLBucketData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLBucketData);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(drawMode,"drawMode");
	HX_MARK_MEMBER_NAME(glLength,"glLength");
	HX_MARK_MEMBER_NAME(glStart,"glStart");
	HX_MARK_MEMBER_NAME(vertexArray,"vertexArray");
	HX_MARK_MEMBER_NAME(glVerts,"glVerts");
	HX_MARK_MEMBER_NAME(lastVertsSize,"lastVertsSize");
	HX_MARK_MEMBER_NAME(verts,"verts");
	HX_MARK_MEMBER_NAME(rawVerts,"rawVerts");
	HX_MARK_MEMBER_NAME(stride,"stride");
	HX_MARK_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_MARK_MEMBER_NAME(glIndices,"glIndices");
	HX_MARK_MEMBER_NAME(indices,"indices");
	HX_MARK_MEMBER_NAME(rawIndices,"rawIndices");
	HX_MARK_MEMBER_NAME(available,"available");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_END_CLASS();
}

void GLBucketData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(drawMode,"drawMode");
	HX_VISIT_MEMBER_NAME(glLength,"glLength");
	HX_VISIT_MEMBER_NAME(glStart,"glStart");
	HX_VISIT_MEMBER_NAME(vertexArray,"vertexArray");
	HX_VISIT_MEMBER_NAME(glVerts,"glVerts");
	HX_VISIT_MEMBER_NAME(lastVertsSize,"lastVertsSize");
	HX_VISIT_MEMBER_NAME(verts,"verts");
	HX_VISIT_MEMBER_NAME(rawVerts,"rawVerts");
	HX_VISIT_MEMBER_NAME(stride,"stride");
	HX_VISIT_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_VISIT_MEMBER_NAME(glIndices,"glIndices");
	HX_VISIT_MEMBER_NAME(indices,"indices");
	HX_VISIT_MEMBER_NAME(rawIndices,"rawIndices");
	HX_VISIT_MEMBER_NAME(available,"available");
	HX_VISIT_MEMBER_NAME(parent,"parent");
}

Dynamic GLBucketData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"verts") ) { return verts; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stride") ) { return stride; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"upload") ) { return upload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"glStart") ) { return glStart; }
		if (HX_FIELD_EQ(inName,"glVerts") ) { return glVerts; }
		if (HX_FIELD_EQ(inName,"indices") ) { return indices; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawMode") ) { return drawMode; }
		if (HX_FIELD_EQ(inName,"glLength") ) { return glLength; }
		if (HX_FIELD_EQ(inName,"rawVerts") ) { return rawVerts; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"glIndices") ) { return glIndices; }
		if (HX_FIELD_EQ(inName,"available") ) { return available; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rawIndices") ) { return rawIndices; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vertexArray") ) { return vertexArray; }
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { return indexBuffer; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lastVertsSize") ) { return lastVertsSize; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLBucketData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::BucketDataType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"verts") ) { verts=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stride") ) { stride=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::GLBucket >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"glStart") ) { glStart=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"glVerts") ) { glVerts=inValue.Cast< ::lime::utils::Float32Array >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indices") ) { indices=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawMode") ) { drawMode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"glLength") ) { glLength=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rawVerts") ) { rawVerts=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"glIndices") ) { glIndices=inValue.Cast< ::lime::utils::UInt16Array >(); return inValue; }
		if (HX_FIELD_EQ(inName,"available") ) { available=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rawIndices") ) { rawIndices=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vertexArray") ) { vertexArray=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::VertexArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { indexBuffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lastVertsSize") ) { lastVertsSize=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GLBucketData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void GLBucketData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("drawMode","\x87","\x7d","\xca","\x5c"));
	outFields->push(HX_HCSTRING("glLength","\xeb","\x0c","\xf6","\x61"));
	outFields->push(HX_HCSTRING("glStart","\xfd","\xa3","\xe6","\x00"));
	outFields->push(HX_HCSTRING("vertexArray","\x95","\x37","\xcb","\x39"));
	outFields->push(HX_HCSTRING("glVerts","\x3d","\x16","\x3d","\xb1"));
	outFields->push(HX_HCSTRING("lastVertsSize","\x4d","\x87","\x9c","\x1e"));
	outFields->push(HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"));
	outFields->push(HX_HCSTRING("rawVerts","\x9a","\x17","\x20","\x96"));
	outFields->push(HX_HCSTRING("stride","\x19","\x20","\x30","\x11"));
	outFields->push(HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5"));
	outFields->push(HX_HCSTRING("glIndices","\x82","\xd3","\x0e","\xb1"));
	outFields->push(HX_HCSTRING("indices","\x27","\x47","\x54","\xe3"));
	outFields->push(HX_HCSTRING("rawIndices","\x1f","\xa6","\xba","\xd5"));
	outFields->push(HX_HCSTRING("available","\xc9","\x59","\x83","\x77"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::BucketDataType*/ ,(int)offsetof(GLBucketData_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(GLBucketData_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsInt,(int)offsetof(GLBucketData_obj,drawMode),HX_HCSTRING("drawMode","\x87","\x7d","\xca","\x5c")},
	{hx::fsInt,(int)offsetof(GLBucketData_obj,glLength),HX_HCSTRING("glLength","\xeb","\x0c","\xf6","\x61")},
	{hx::fsInt,(int)offsetof(GLBucketData_obj,glStart),HX_HCSTRING("glStart","\xfd","\xa3","\xe6","\x00")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::VertexArray*/ ,(int)offsetof(GLBucketData_obj,vertexArray),HX_HCSTRING("vertexArray","\x95","\x37","\xcb","\x39")},
	{hx::fsObject /*::lime::utils::Float32Array*/ ,(int)offsetof(GLBucketData_obj,glVerts),HX_HCSTRING("glVerts","\x3d","\x16","\x3d","\xb1")},
	{hx::fsInt,(int)offsetof(GLBucketData_obj,lastVertsSize),HX_HCSTRING("lastVertsSize","\x4d","\x87","\x9c","\x1e")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(GLBucketData_obj,verts),HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34")},
	{hx::fsBool,(int)offsetof(GLBucketData_obj,rawVerts),HX_HCSTRING("rawVerts","\x9a","\x17","\x20","\x96")},
	{hx::fsInt,(int)offsetof(GLBucketData_obj,stride),HX_HCSTRING("stride","\x19","\x20","\x30","\x11")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(GLBucketData_obj,indexBuffer),HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5")},
	{hx::fsObject /*::lime::utils::UInt16Array*/ ,(int)offsetof(GLBucketData_obj,glIndices),HX_HCSTRING("glIndices","\x82","\xd3","\x0e","\xb1")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(GLBucketData_obj,indices),HX_HCSTRING("indices","\x27","\x47","\x54","\xe3")},
	{hx::fsBool,(int)offsetof(GLBucketData_obj,rawIndices),HX_HCSTRING("rawIndices","\x1f","\xa6","\xba","\xd5")},
	{hx::fsBool,(int)offsetof(GLBucketData_obj,available),HX_HCSTRING("available","\xc9","\x59","\x83","\x77")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::GLBucket*/ ,(int)offsetof(GLBucketData_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("drawMode","\x87","\x7d","\xca","\x5c"),
	HX_HCSTRING("glLength","\xeb","\x0c","\xf6","\x61"),
	HX_HCSTRING("glStart","\xfd","\xa3","\xe6","\x00"),
	HX_HCSTRING("vertexArray","\x95","\x37","\xcb","\x39"),
	HX_HCSTRING("glVerts","\x3d","\x16","\x3d","\xb1"),
	HX_HCSTRING("lastVertsSize","\x4d","\x87","\x9c","\x1e"),
	HX_HCSTRING("verts","\xa2","\xe6","\x61","\x34"),
	HX_HCSTRING("rawVerts","\x9a","\x17","\x20","\x96"),
	HX_HCSTRING("stride","\x19","\x20","\x30","\x11"),
	HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5"),
	HX_HCSTRING("glIndices","\x82","\xd3","\x0e","\xb1"),
	HX_HCSTRING("indices","\x27","\x47","\x54","\xe3"),
	HX_HCSTRING("rawIndices","\x1f","\xa6","\xba","\xd5"),
	HX_HCSTRING("available","\xc9","\x59","\x83","\x77"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("upload","\x01","\xca","\x59","\x8c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLBucketData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLBucketData_obj::__mClass,"__mClass");
};

#endif

hx::Class GLBucketData_obj::__mClass;

void GLBucketData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.utils.GLBucketData","\x7a","\x3c","\x65","\x4c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &GLBucketData_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLBucketData_obj >;
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
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils

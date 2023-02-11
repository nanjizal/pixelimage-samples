// Generated by Haxe 4.3.0-rc.1+
#ifndef INCLUDED_pixelimage_triangleGML_contour_TriangleSoftShape
#define INCLUDED_pixelimage_triangleGML_contour_TriangleSoftShape

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_pixelimage_triangleGML_coreShape_BasicShape
#include <pixelimage/triangleGML/coreShape/BasicShape.h>
#endif
HX_DECLARE_CLASS1(pixelimage,ImageStruct)
HX_DECLARE_CLASS3(pixelimage,triangleGML,contour,TriangleSoftShape)
HX_DECLARE_CLASS3(pixelimage,triangleGML,coreShape,BasicShape)
HX_DECLARE_CLASS3(pixelimage,triangleGML,coreShape,GroupShape)
HX_DECLARE_CLASS3(pixelimage,triangleGML,coreShape,ShapeInterface)

namespace pixelimage{
namespace triangleGML{
namespace contour{


class HXCPP_CLASS_ATTRIBUTES TriangleSoftShape_obj : public ::pixelimage::triangleGML::coreShape::BasicShape_obj
{
	public:
		typedef ::pixelimage::triangleGML::coreShape::BasicShape_obj super;
		typedef TriangleSoftShape_obj OBJ_;
		TriangleSoftShape_obj();

	public:
		enum { _hx_ClassId = 0x3a8a04ba };

		void __construct(::hx::Null< Float >  __o_opacity,::hx::Null< bool >  __o_visibility,::hx::Null< int >  __o_strokeColor,::hx::Null< Float >  __o_aX,::hx::Null< Float >  __o_aY,::hx::Null< Float >  __o_bX,::hx::Null< Float >  __o_bY,::hx::Null< Float >  __o_cX,::hx::Null< Float >  __o_cY,::hx::Null< Float >  __o_soft3,::hx::Null< bool >  __o_softAB,::hx::Null< bool >  __o_softBC,::hx::Null< bool >  __o_softCA);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="pixelimage.triangleGML.contour.TriangleSoftShape")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"pixelimage.triangleGML.contour.TriangleSoftShape"); }
		static ::hx::ObjectPtr< TriangleSoftShape_obj > __new(::hx::Null< Float >  __o_opacity,::hx::Null< bool >  __o_visibility,::hx::Null< int >  __o_strokeColor,::hx::Null< Float >  __o_aX,::hx::Null< Float >  __o_aY,::hx::Null< Float >  __o_bX,::hx::Null< Float >  __o_bY,::hx::Null< Float >  __o_cX,::hx::Null< Float >  __o_cY,::hx::Null< Float >  __o_soft3,::hx::Null< bool >  __o_softAB,::hx::Null< bool >  __o_softBC,::hx::Null< bool >  __o_softCA);
		static ::hx::ObjectPtr< TriangleSoftShape_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_opacity,::hx::Null< bool >  __o_visibility,::hx::Null< int >  __o_strokeColor,::hx::Null< Float >  __o_aX,::hx::Null< Float >  __o_aY,::hx::Null< Float >  __o_bX,::hx::Null< Float >  __o_bY,::hx::Null< Float >  __o_cX,::hx::Null< Float >  __o_cY,::hx::Null< Float >  __o_soft3,::hx::Null< bool >  __o_softAB,::hx::Null< bool >  __o_softBC,::hx::Null< bool >  __o_softCA);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TriangleSoftShape_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TriangleSoftShape",cf,ed,a7,65); }

		Float aX;
		Float aY;
		Float bX;
		Float bY;
		Float cX;
		Float cY;
		Float soft3;
		bool softAB;
		bool softBC;
		bool softCA;
		void setParameter(::String name,::String value);

		::pixelimage::ImageStruct render(::pixelimage::ImageStruct pixelShape);

};

} // end namespace pixelimage
} // end namespace triangleGML
} // end namespace contour

#endif /* INCLUDED_pixelimage_triangleGML_contour_TriangleSoftShape */ 
// Generated by Haxe 4.3.0-rc.1+
#ifndef INCLUDED_pixelimage_triangleGML_contour_QuadCurveShape
#define INCLUDED_pixelimage_triangleGML_contour_QuadCurveShape

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_pixelimage_triangleGML_coreShape_FillShape
#include <pixelimage/triangleGML/coreShape/FillShape.h>
#endif
HX_DECLARE_CLASS1(pixelimage,ImageStruct)
HX_DECLARE_CLASS3(pixelimage,triangleGML,contour,QuadCurveShape)
HX_DECLARE_CLASS3(pixelimage,triangleGML,coreShape,BasicShape)
HX_DECLARE_CLASS3(pixelimage,triangleGML,coreShape,FillShape)
HX_DECLARE_CLASS3(pixelimage,triangleGML,coreShape,GroupShape)
HX_DECLARE_CLASS3(pixelimage,triangleGML,coreShape,ShapeInterface)

namespace pixelimage{
namespace triangleGML{
namespace contour{


class HXCPP_CLASS_ATTRIBUTES QuadCurveShape_obj : public ::pixelimage::triangleGML::coreShape::FillShape_obj
{
	public:
		typedef ::pixelimage::triangleGML::coreShape::FillShape_obj super;
		typedef QuadCurveShape_obj OBJ_;
		QuadCurveShape_obj();

	public:
		enum { _hx_ClassId = 0x700c1a8a };

		void __construct(::hx::Null< Float >  __o_opacity,::hx::Null< bool >  __o_visibility,::hx::Null< int >  __o_strokeColor,::hx::Null< Float >  __o_strokeWidth,::Array< ::String > strokeDashGapArray,::hx::Null< int >  __o_fill,::hx::Null< bool >  __o_thru,::hx::Null< Float >  __o_x1,::hx::Null< Float >  __o_y1,::hx::Null< Float >  __o_x2,::hx::Null< Float >  __o_y2,::hx::Null< Float >  __o_x3,::hx::Null< Float >  __o_y3);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="pixelimage.triangleGML.contour.QuadCurveShape")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"pixelimage.triangleGML.contour.QuadCurveShape"); }
		static ::hx::ObjectPtr< QuadCurveShape_obj > __new(::hx::Null< Float >  __o_opacity,::hx::Null< bool >  __o_visibility,::hx::Null< int >  __o_strokeColor,::hx::Null< Float >  __o_strokeWidth,::Array< ::String > strokeDashGapArray,::hx::Null< int >  __o_fill,::hx::Null< bool >  __o_thru,::hx::Null< Float >  __o_x1,::hx::Null< Float >  __o_y1,::hx::Null< Float >  __o_x2,::hx::Null< Float >  __o_y2,::hx::Null< Float >  __o_x3,::hx::Null< Float >  __o_y3);
		static ::hx::ObjectPtr< QuadCurveShape_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_opacity,::hx::Null< bool >  __o_visibility,::hx::Null< int >  __o_strokeColor,::hx::Null< Float >  __o_strokeWidth,::Array< ::String > strokeDashGapArray,::hx::Null< int >  __o_fill,::hx::Null< bool >  __o_thru,::hx::Null< Float >  __o_x1,::hx::Null< Float >  __o_y1,::hx::Null< Float >  __o_x2,::hx::Null< Float >  __o_y2,::hx::Null< Float >  __o_x3,::hx::Null< Float >  __o_y3);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~QuadCurveShape_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("QuadCurveShape",b9,db,be,8a); }

		Float x1;
		Float y1;
		Float x2;
		Float y2;
		Float x3;
		Float y3;
		bool thru;
		void setParameter(::String name,::String value);

		::pixelimage::ImageStruct render(::pixelimage::ImageStruct pixelShape);

};

} // end namespace pixelimage
} // end namespace triangleGML
} // end namespace contour

#endif /* INCLUDED_pixelimage_triangleGML_contour_QuadCurveShape */ 
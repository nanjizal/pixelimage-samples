// Generated by Haxe 4.3.0-rc.1+
#ifndef INCLUDED_pixelimage_triangleGML_gradientContour_LineGradient
#define INCLUDED_pixelimage_triangleGML_gradientContour_LineGradient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_pixelimage_triangleGML_coreShape_BasicGradient
#include <pixelimage/triangleGML/coreShape/BasicGradient.h>
#endif
HX_DECLARE_CLASS1(pixelimage,ImageStruct)
HX_DECLARE_CLASS3(pixelimage,triangleGML,coreShape,BasicGradient)
HX_DECLARE_CLASS3(pixelimage,triangleGML,coreShape,GroupShape)
HX_DECLARE_CLASS3(pixelimage,triangleGML,coreShape,ShapeInterface)
HX_DECLARE_CLASS3(pixelimage,triangleGML,gradientContour,LineGradient)

namespace pixelimage{
namespace triangleGML{
namespace gradientContour{


class HXCPP_CLASS_ATTRIBUTES LineGradient_obj : public ::pixelimage::triangleGML::coreShape::BasicGradient_obj
{
	public:
		typedef ::pixelimage::triangleGML::coreShape::BasicGradient_obj super;
		typedef LineGradient_obj OBJ_;
		LineGradient_obj();

	public:
		enum { _hx_ClassId = 0x2250a209 };

		void __construct(::hx::Null< Float >  __o_opacity,::hx::Null< bool >  __o_visibility,::hx::Null< Float >  __o_x1,::hx::Null< Float >  __o_y1,::hx::Null< Float >  __o_x2,::hx::Null< Float >  __o_y2,::hx::Null< int >  __o_colorA,::hx::Null< int >  __o_colorB,::hx::Null< int >  __o_colorC,::hx::Null< int >  __o_colorD,::hx::Null< Float >  __o_strokeWidth);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="pixelimage.triangleGML.gradientContour.LineGradient")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"pixelimage.triangleGML.gradientContour.LineGradient"); }
		static ::hx::ObjectPtr< LineGradient_obj > __new(::hx::Null< Float >  __o_opacity,::hx::Null< bool >  __o_visibility,::hx::Null< Float >  __o_x1,::hx::Null< Float >  __o_y1,::hx::Null< Float >  __o_x2,::hx::Null< Float >  __o_y2,::hx::Null< int >  __o_colorA,::hx::Null< int >  __o_colorB,::hx::Null< int >  __o_colorC,::hx::Null< int >  __o_colorD,::hx::Null< Float >  __o_strokeWidth);
		static ::hx::ObjectPtr< LineGradient_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_opacity,::hx::Null< bool >  __o_visibility,::hx::Null< Float >  __o_x1,::hx::Null< Float >  __o_y1,::hx::Null< Float >  __o_x2,::hx::Null< Float >  __o_y2,::hx::Null< int >  __o_colorA,::hx::Null< int >  __o_colorB,::hx::Null< int >  __o_colorC,::hx::Null< int >  __o_colorD,::hx::Null< Float >  __o_strokeWidth);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LineGradient_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LineGradient",24,6e,3d,3d); }

		Float x1;
		Float y1;
		Float x2;
		Float y2;
		Float strokeWidth;
		void setParameter(::String name,::String value);

		::pixelimage::ImageStruct render(::pixelimage::ImageStruct pixelShape);

};

} // end namespace pixelimage
} // end namespace triangleGML
} // end namespace gradientContour

#endif /* INCLUDED_pixelimage_triangleGML_gradientContour_LineGradient */ 
// Generated by Haxe 4.3.0-rc.1+
#ifndef INCLUDED_pixelimage_triangleGML_gradient_ArrowThickGradient
#define INCLUDED_pixelimage_triangleGML_gradient_ArrowThickGradient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_pixelimage_triangleGML_coreShape_FillShape
#include <pixelimage/triangleGML/coreShape/FillShape.h>
#endif
HX_DECLARE_CLASS1(pixelimage,ImageStruct)
HX_DECLARE_CLASS3(pixelimage,triangleGML,coreShape,BasicShape)
HX_DECLARE_CLASS3(pixelimage,triangleGML,coreShape,FillShape)
HX_DECLARE_CLASS3(pixelimage,triangleGML,coreShape,GroupShape)
HX_DECLARE_CLASS3(pixelimage,triangleGML,coreShape,ShapeInterface)
HX_DECLARE_CLASS3(pixelimage,triangleGML,gradient,ArrowThickGradient)

namespace pixelimage{
namespace triangleGML{
namespace gradient{


class HXCPP_CLASS_ATTRIBUTES ArrowThickGradient_obj : public ::pixelimage::triangleGML::coreShape::FillShape_obj
{
	public:
		typedef ::pixelimage::triangleGML::coreShape::FillShape_obj super;
		typedef ArrowThickGradient_obj OBJ_;
		ArrowThickGradient_obj();

	public:
		enum { _hx_ClassId = 0x5d13791d };

		void __construct(::hx::Null< Float >  __o_opacity,::hx::Null< bool >  __o_visibility,::hx::Null< int >  __o_strokeTopColor,::hx::Null< int >  __o_strokeBottomColor,::hx::Null< Float >  __o_strokeWidth,::Array< ::String > strokeDashGapArray,::hx::Null< bool >  __o_both,::hx::Null< bool >  __o_flare,::hx::Null< bool >  __o_reverseFlare,::hx::Null< Float >  __o_x1,::hx::Null< Float >  __o_y1,::hx::Null< Float >  __o_x2,::hx::Null< Float >  __o_y2,::hx::Null< Float >  __o_arrowWidth,::hx::Null< Float >  __o_arrowHeight);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="pixelimage.triangleGML.gradient.ArrowThickGradient")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"pixelimage.triangleGML.gradient.ArrowThickGradient"); }
		static ::hx::ObjectPtr< ArrowThickGradient_obj > __new(::hx::Null< Float >  __o_opacity,::hx::Null< bool >  __o_visibility,::hx::Null< int >  __o_strokeTopColor,::hx::Null< int >  __o_strokeBottomColor,::hx::Null< Float >  __o_strokeWidth,::Array< ::String > strokeDashGapArray,::hx::Null< bool >  __o_both,::hx::Null< bool >  __o_flare,::hx::Null< bool >  __o_reverseFlare,::hx::Null< Float >  __o_x1,::hx::Null< Float >  __o_y1,::hx::Null< Float >  __o_x2,::hx::Null< Float >  __o_y2,::hx::Null< Float >  __o_arrowWidth,::hx::Null< Float >  __o_arrowHeight);
		static ::hx::ObjectPtr< ArrowThickGradient_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_opacity,::hx::Null< bool >  __o_visibility,::hx::Null< int >  __o_strokeTopColor,::hx::Null< int >  __o_strokeBottomColor,::hx::Null< Float >  __o_strokeWidth,::Array< ::String > strokeDashGapArray,::hx::Null< bool >  __o_both,::hx::Null< bool >  __o_flare,::hx::Null< bool >  __o_reverseFlare,::hx::Null< Float >  __o_x1,::hx::Null< Float >  __o_y1,::hx::Null< Float >  __o_x2,::hx::Null< Float >  __o_y2,::hx::Null< Float >  __o_arrowWidth,::hx::Null< Float >  __o_arrowHeight);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ArrowThickGradient_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ArrowThickGradient",04,6a,dd,c6); }

		Float x1;
		Float y1;
		Float x2;
		Float y2;
		bool both;
		bool flare;
		bool reverseFlare;
		Float arrowWidth;
		Float arrowHeight;
		int strokeTopColor;
		int strokeBottomColor;
		void setParameter(::String name,::String value);

		::pixelimage::ImageStruct render(::pixelimage::ImageStruct pixelShape);

};

} // end namespace pixelimage
} // end namespace triangleGML
} // end namespace gradient

#endif /* INCLUDED_pixelimage_triangleGML_gradient_ArrowThickGradient */ 
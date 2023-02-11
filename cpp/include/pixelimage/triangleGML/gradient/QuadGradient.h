// Generated by Haxe 4.3.0-rc.1+
#ifndef INCLUDED_pixelimage_triangleGML_gradient_QuadGradient
#define INCLUDED_pixelimage_triangleGML_gradient_QuadGradient

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
HX_DECLARE_CLASS3(pixelimage,triangleGML,gradient,QuadGradient)

namespace pixelimage{
namespace triangleGML{
namespace gradient{


class HXCPP_CLASS_ATTRIBUTES QuadGradient_obj : public ::pixelimage::triangleGML::coreShape::BasicGradient_obj
{
	public:
		typedef ::pixelimage::triangleGML::coreShape::BasicGradient_obj super;
		typedef QuadGradient_obj OBJ_;
		QuadGradient_obj();

	public:
		enum { _hx_ClassId = 0x5d356050 };

		void __construct(::hx::Null< Float >  __o_opacity,::hx::Null< bool >  __o_visibility,::hx::Null< Float >  __o_x1,::hx::Null< Float >  __o_y1,::hx::Null< int >  __o_color1,::hx::Null< Float >  __o_x2,::hx::Null< Float >  __o_y2,::hx::Null< int >  __o_color2,::hx::Null< Float >  __o_x3,::hx::Null< Float >  __o_y3,::hx::Null< int >  __o_color3,::hx::Null< Float >  __o_x4,::hx::Null< Float >  __o_y4,::hx::Null< int >  __o_color4);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="pixelimage.triangleGML.gradient.QuadGradient")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"pixelimage.triangleGML.gradient.QuadGradient"); }
		static ::hx::ObjectPtr< QuadGradient_obj > __new(::hx::Null< Float >  __o_opacity,::hx::Null< bool >  __o_visibility,::hx::Null< Float >  __o_x1,::hx::Null< Float >  __o_y1,::hx::Null< int >  __o_color1,::hx::Null< Float >  __o_x2,::hx::Null< Float >  __o_y2,::hx::Null< int >  __o_color2,::hx::Null< Float >  __o_x3,::hx::Null< Float >  __o_y3,::hx::Null< int >  __o_color3,::hx::Null< Float >  __o_x4,::hx::Null< Float >  __o_y4,::hx::Null< int >  __o_color4);
		static ::hx::ObjectPtr< QuadGradient_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_opacity,::hx::Null< bool >  __o_visibility,::hx::Null< Float >  __o_x1,::hx::Null< Float >  __o_y1,::hx::Null< int >  __o_color1,::hx::Null< Float >  __o_x2,::hx::Null< Float >  __o_y2,::hx::Null< int >  __o_color2,::hx::Null< Float >  __o_x3,::hx::Null< Float >  __o_y3,::hx::Null< int >  __o_color3,::hx::Null< Float >  __o_x4,::hx::Null< Float >  __o_y4,::hx::Null< int >  __o_color4);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~QuadGradient_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("QuadGradient",f7,19,ae,f9); }

		Float x1;
		Float y1;
		Float x2;
		Float y2;
		Float x3;
		Float y3;
		Float x4;
		Float y4;
		void setParameter(::String name,::String value);

		::pixelimage::ImageStruct render(::pixelimage::ImageStruct pixelShape);

};

} // end namespace pixelimage
} // end namespace triangleGML
} // end namespace gradient

#endif /* INCLUDED_pixelimage_triangleGML_gradient_QuadGradient */ 
// Generated by Haxe 4.3.0-rc.1+
#ifndef INCLUDED_pixelimage_triangleGML_patternShape_QuadrilateralPattern
#define INCLUDED_pixelimage_triangleGML_patternShape_QuadrilateralPattern

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_pixelimage_triangleGML_coreShape_PatternShape
#include <pixelimage/triangleGML/coreShape/PatternShape.h>
#endif
HX_DECLARE_CLASS1(pixelimage,ImageStruct)
HX_DECLARE_CLASS3(pixelimage,triangleGML,coreShape,BasicShape)
HX_DECLARE_CLASS3(pixelimage,triangleGML,coreShape,GroupShape)
HX_DECLARE_CLASS3(pixelimage,triangleGML,coreShape,PatternShape)
HX_DECLARE_CLASS3(pixelimage,triangleGML,coreShape,ShapeInterface)
HX_DECLARE_CLASS3(pixelimage,triangleGML,patternShape,QuadrilateralPattern)

namespace pixelimage{
namespace triangleGML{
namespace patternShape{


class HXCPP_CLASS_ATTRIBUTES QuadrilateralPattern_obj : public ::pixelimage::triangleGML::coreShape::PatternShape_obj
{
	public:
		typedef ::pixelimage::triangleGML::coreShape::PatternShape_obj super;
		typedef QuadrilateralPattern_obj OBJ_;
		QuadrilateralPattern_obj();

	public:
		enum { _hx_ClassId = 0x648a46d1 };

		void __construct(::hx::Null< Float >  __o_opacity,::hx::Null< bool >  __o_visibility,::hx::Null< int >  __o_strokeColor,::hx::Null< Float >  __o_strokeWidth,::Array< ::String > strokeDashGapArray,::hx::Null< int >  __o_strokeColor0,::hx::Null< int >  __o_strokeColor1,::hx::Null< int >  __o_fillColor0,::hx::Null< int >  __o_fillColor1,::Array< bool > strokePatternFill, ::Dynamic strokePatternWidth, ::Dynamic strokePatternHeight,::hx::Null< bool >  __o_strokePatternAcross,::hx::Null< int >  __o_strokePatternScale,::Array< bool > fillPatternFill,::hx::Null< int >  __o_fillPatternWidth,::hx::Null< int >  __o_fillPatternHeight,::hx::Null< bool >  __o_fillPatternAcross,::hx::Null< int >  __o_fillPatternScale,::hx::Null< Float >  __o_x1,::hx::Null< Float >  __o_y1,::hx::Null< Float >  __o_x2,::hx::Null< Float >  __o_y2,::hx::Null< Float >  __o_x3,::hx::Null< Float >  __o_y3,::hx::Null< Float >  __o_x4,::hx::Null< Float >  __o_y4);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="pixelimage.triangleGML.patternShape.QuadrilateralPattern")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"pixelimage.triangleGML.patternShape.QuadrilateralPattern"); }
		static ::hx::ObjectPtr< QuadrilateralPattern_obj > __new(::hx::Null< Float >  __o_opacity,::hx::Null< bool >  __o_visibility,::hx::Null< int >  __o_strokeColor,::hx::Null< Float >  __o_strokeWidth,::Array< ::String > strokeDashGapArray,::hx::Null< int >  __o_strokeColor0,::hx::Null< int >  __o_strokeColor1,::hx::Null< int >  __o_fillColor0,::hx::Null< int >  __o_fillColor1,::Array< bool > strokePatternFill, ::Dynamic strokePatternWidth, ::Dynamic strokePatternHeight,::hx::Null< bool >  __o_strokePatternAcross,::hx::Null< int >  __o_strokePatternScale,::Array< bool > fillPatternFill,::hx::Null< int >  __o_fillPatternWidth,::hx::Null< int >  __o_fillPatternHeight,::hx::Null< bool >  __o_fillPatternAcross,::hx::Null< int >  __o_fillPatternScale,::hx::Null< Float >  __o_x1,::hx::Null< Float >  __o_y1,::hx::Null< Float >  __o_x2,::hx::Null< Float >  __o_y2,::hx::Null< Float >  __o_x3,::hx::Null< Float >  __o_y3,::hx::Null< Float >  __o_x4,::hx::Null< Float >  __o_y4);
		static ::hx::ObjectPtr< QuadrilateralPattern_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_opacity,::hx::Null< bool >  __o_visibility,::hx::Null< int >  __o_strokeColor,::hx::Null< Float >  __o_strokeWidth,::Array< ::String > strokeDashGapArray,::hx::Null< int >  __o_strokeColor0,::hx::Null< int >  __o_strokeColor1,::hx::Null< int >  __o_fillColor0,::hx::Null< int >  __o_fillColor1,::Array< bool > strokePatternFill, ::Dynamic strokePatternWidth, ::Dynamic strokePatternHeight,::hx::Null< bool >  __o_strokePatternAcross,::hx::Null< int >  __o_strokePatternScale,::Array< bool > fillPatternFill,::hx::Null< int >  __o_fillPatternWidth,::hx::Null< int >  __o_fillPatternHeight,::hx::Null< bool >  __o_fillPatternAcross,::hx::Null< int >  __o_fillPatternScale,::hx::Null< Float >  __o_x1,::hx::Null< Float >  __o_y1,::hx::Null< Float >  __o_x2,::hx::Null< Float >  __o_y2,::hx::Null< Float >  __o_x3,::hx::Null< Float >  __o_y3,::hx::Null< Float >  __o_x4,::hx::Null< Float >  __o_y4);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~QuadrilateralPattern_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("QuadrilateralPattern",77,ed,d3,62); }

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
} // end namespace patternShape

#endif /* INCLUDED_pixelimage_triangleGML_patternShape_QuadrilateralPattern */ 
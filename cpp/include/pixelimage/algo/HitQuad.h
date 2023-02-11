// Generated by Haxe 4.3.0-rc.1+
#ifndef INCLUDED_pixelimage_algo_HitQuad
#define INCLUDED_pixelimage_algo_HitQuad

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_pixelimage_algo_IhitObj
#include <pixelimage/algo/IhitObj.h>
#endif
HX_DECLARE_CLASS2(pixelimage,algo,HitQuad)
HX_DECLARE_CLASS2(pixelimage,algo,HitTri)
HX_DECLARE_CLASS2(pixelimage,algo,IhitObj)
HX_DECLARE_CLASS2(pixelimage,iter,IntIterStart)

namespace pixelimage{
namespace algo{


class HXCPP_CLASS_ATTRIBUTES HitQuad_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef HitQuad_obj OBJ_;
		HitQuad_obj();

	public:
		enum { _hx_ClassId = 0x6e50f6ea };

		void __construct(Float ax,Float ay,Float bx,Float by,Float cx,Float cy,Float dx,Float dy,::hx::Null< bool >  __o_preCalculated);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="pixelimage.algo.HitQuad")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"pixelimage.algo.HitQuad"); }
		static ::hx::ObjectPtr< HitQuad_obj > __new(Float ax,Float ay,Float bx,Float by,Float cx,Float cy,Float dx,Float dy,::hx::Null< bool >  __o_preCalculated);
		static ::hx::ObjectPtr< HitQuad_obj > __alloc(::hx::Ctx *_hx_ctx,Float ax,Float ay,Float bx,Float by,Float cx,Float cy,Float dx,Float dy,::hx::Null< bool >  __o_preCalculated);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HitQuad_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("HitQuad",9a,f8,e0,ad); }

		Float ax;
		Float ay;
		Float bx;
		Float by;
		Float cx;
		Float cy;
		Float dx;
		Float dy;
		::pixelimage::algo::HitTri triABD;
		::pixelimage::algo::HitTri triBCD;
		::pixelimage::iter::IntIterStart xIter4;
		::pixelimage::iter::IntIterStart yIter4;
};

} // end namespace pixelimage
} // end namespace algo

#endif /* INCLUDED_pixelimage_algo_HitQuad */ 
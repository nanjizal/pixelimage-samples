// Generated by Haxe 4.3.0-rc.1+
#ifndef INCLUDED_pixelimage_triangleGML_coreShape__TriangleGML_TriangleGML_Fields_
#define INCLUDED_pixelimage_triangleGML_coreShape__TriangleGML_TriangleGML_Fields_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(pixelimage,triangleGML,coreShape,ShapeInterface)
HX_DECLARE_CLASS4(pixelimage,triangleGML,coreShape,_TriangleGML,TriangleGML_Fields_)

namespace pixelimage{
namespace triangleGML{
namespace coreShape{
namespace _TriangleGML{


class HXCPP_CLASS_ATTRIBUTES TriangleGML_Fields__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TriangleGML_Fields__obj OBJ_;
		TriangleGML_Fields__obj();

	public:
		enum { _hx_ClassId = 0x45c489ad };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="pixelimage.triangleGML.coreShape._TriangleGML.TriangleGML_Fields_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"pixelimage.triangleGML.coreShape._TriangleGML.TriangleGML_Fields_"); }

		inline static ::hx::ObjectPtr< TriangleGML_Fields__obj > __new() {
			::hx::ObjectPtr< TriangleGML_Fields__obj > __this = new TriangleGML_Fields__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< TriangleGML_Fields__obj > __alloc(::hx::Ctx *_hx_ctx) {
			TriangleGML_Fields__obj *__this = (TriangleGML_Fields__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TriangleGML_Fields__obj), false, "pixelimage.triangleGML.coreShape._TriangleGML.TriangleGML_Fields_"));
			*(void **)__this = TriangleGML_Fields__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TriangleGML_Fields__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TriangleGML_Fields_",a5,b4,9a,f4); }

		static ::Dynamic getTriangleGML(::String nodeName);
		static ::Dynamic getTriangleGML_dyn();

};

} // end namespace pixelimage
} // end namespace triangleGML
} // end namespace coreShape
} // end namespace _TriangleGML

#endif /* INCLUDED_pixelimage_triangleGML_coreShape__TriangleGML_TriangleGML_Fields_ */ 
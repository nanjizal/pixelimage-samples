// Generated by Haxe 4.3.0-rc.1+
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_justPath_ILinePathContext
#include <justPath/ILinePathContext.h>
#endif
#ifndef INCLUDED_pixelimage_ImageStruct
#include <pixelimage/ImageStruct.h>
#endif
#ifndef INCLUDED_pixelimage_draw_DrawShapeHelper
#include <pixelimage/draw/DrawShapeHelper.h>
#endif
#ifndef INCLUDED_pixelimage_triangleGML_contour_PolyLineShape
#include <pixelimage/triangleGML/contour/PolyLineShape.h>
#endif
#ifndef INCLUDED_pixelimage_triangleGML_coreShape_BasicShape
#include <pixelimage/triangleGML/coreShape/BasicShape.h>
#endif
#ifndef INCLUDED_pixelimage_triangleGML_coreShape_FillShape
#include <pixelimage/triangleGML/coreShape/FillShape.h>
#endif
#ifndef INCLUDED_pixelimage_triangleGML_coreShape_GroupShape
#include <pixelimage/triangleGML/coreShape/GroupShape.h>
#endif
#ifndef INCLUDED_pixelimage_triangleGML_coreShape_ShapeInterface
#include <pixelimage/triangleGML/coreShape/ShapeInterface.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2e7489b79bbe7f5a_19_new,"pixelimage.triangleGML.contour.PolyLineShape","new",0x80062b76,"pixelimage.triangleGML.contour.PolyLineShape.new","pixelimage/triangleGML/contour/PolyLineShape.hx",19,0x8e13ba3d)
HX_LOCAL_STACK_FRAME(_hx_pos_2e7489b79bbe7f5a_24_setParameter,"pixelimage.triangleGML.contour.PolyLineShape","setParameter",0x661087d1,"pixelimage.triangleGML.contour.PolyLineShape.setParameter","pixelimage/triangleGML/contour/PolyLineShape.hx",24,0x8e13ba3d)
HX_LOCAL_STACK_FRAME(_hx_pos_2e7489b79bbe7f5a_32_render,"pixelimage.triangleGML.contour.PolyLineShape","render",0x15aca200,"pixelimage.triangleGML.contour.PolyLineShape.render","pixelimage/triangleGML/contour/PolyLineShape.hx",32,0x8e13ba3d)
namespace pixelimage{
namespace triangleGML{
namespace contour{

void PolyLineShape_obj::__construct(::hx::Null< Float >  __o_opacity,::hx::Null< bool >  __o_visibility,::hx::Null< int >  __o_strokeColor,::hx::Null< Float >  __o_strokeWidth,::Array< ::String > strokeDashGapArray,::hx::Null< int >  __o_fill,::Array< Float > points){
            		Float opacity = __o_opacity.Default(((Float)1.));
            		bool visibility = __o_visibility.Default(true);
            		int strokeColor = __o_strokeColor.Default(0);
            		Float strokeWidth = __o_strokeWidth.Default(((Float)1.));
            		int fill = __o_fill.Default(0);
            	HX_STACKFRAME(&_hx_pos_2e7489b79bbe7f5a_19_new)
HXLINE(  20)		super::__construct(opacity,visibility,strokeColor,strokeWidth,strokeDashGapArray,fill);
HXLINE(  21)		this->points = points;
            	}

Dynamic PolyLineShape_obj::__CreateEmpty() { return new PolyLineShape_obj; }

void *PolyLineShape_obj::_hx_vtable = 0;

Dynamic PolyLineShape_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PolyLineShape_obj > _hx_result = new PolyLineShape_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool PolyLineShape_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x24e92cfb) {
		if (inClassId<=(int)0x2091632c) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2091632c;
		} else {
			return inClassId==(int)0x24e92cfb;
		}
	} else {
		return inClassId==(int)0x389f4e25 || inClassId==(int)0x610ab4d0;
	}
}

void PolyLineShape_obj::setParameter(::String name,::String value){
            	HX_STACKFRAME(&_hx_pos_2e7489b79bbe7f5a_24_setParameter)
HXDLIN(  24)		if ((name == HX_("points",23,12,2e,f7))) {
HXLINE(  26)			value = value.split(HX_("[",5b,00,00,00))->__get(1).split(HX_("]",5d,00,00,00))->__get(0);
HXLINE(  27)			::Array< Float > _g = ::Array_obj< Float >::__new(0);
HXDLIN(  27)			{
HXLINE(  27)				int _g1 = 0;
HXDLIN(  27)				::Array< ::String > _g2 = value.split(HX_(",",2c,00,00,00));
HXDLIN(  27)				while((_g1 < _g2->length)){
HXLINE(  27)					::String n = _g2->__get(_g1);
HXDLIN(  27)					_g1 = (_g1 + 1);
HXDLIN(  27)					_g->push(::Std_obj::parseFloat(n));
            				}
            			}
HXDLIN(  27)			this->points = _g;
            		}
            		else {
HXLINE(  29)			this->super::setParameter(name,value);
            		}
            	}


::pixelimage::ImageStruct PolyLineShape_obj::render(::pixelimage::ImageStruct pixelShape){
            	HX_GC_STACKFRAME(&_hx_pos_2e7489b79bbe7f5a_32_render)
HXLINE(  33)		{
HXLINE(  34)			::pixelimage::draw::DrawShapeHelper drawing = ::pixelimage::draw::DrawShapeHelper_obj::__alloc( HX_CTX ,pixelShape,this->strokeWidth,this->strokeColor,null(),null(),null(),null());
HXLINE(  35)			int l = this->points->length;
HXLINE(  36)			if ((l < 4)) {
HXLINE(  36)				return pixelShape;
            			}
HXLINE(  37)			if ((::hx::Mod(l,2) != 0)) {
HXLINE(  37)				return pixelShape;
            			}
HXLINE(  38)			int i = 0;
HXLINE(  39)			Float x = ((Float)0.);
HXLINE(  40)			Float y = ((Float)0.);
HXLINE(  41)			x = this->points->__get(i);
HXLINE(  42)			i = (i + 1);
HXLINE(  43)			y = this->points->__get(i);
HXLINE(  44)			i = (i + 1);
HXLINE(  45)			drawing->moveTo(x,y);
HXLINE(  46)			while((i < l)){
HXLINE(  47)				x = this->points->__get(i);
HXLINE(  48)				i = (i + 1);
HXLINE(  49)				y = this->points->__get(i);
HXLINE(  50)				i = (i + 1);
HXLINE(  51)				drawing->lineTo(x,y);
            			}
            		}
HXLINE(  54)		return this->super::render(pixelShape);
            	}



::hx::ObjectPtr< PolyLineShape_obj > PolyLineShape_obj::__new(::hx::Null< Float >  __o_opacity,::hx::Null< bool >  __o_visibility,::hx::Null< int >  __o_strokeColor,::hx::Null< Float >  __o_strokeWidth,::Array< ::String > strokeDashGapArray,::hx::Null< int >  __o_fill,::Array< Float > points) {
	::hx::ObjectPtr< PolyLineShape_obj > __this = new PolyLineShape_obj();
	__this->__construct(__o_opacity,__o_visibility,__o_strokeColor,__o_strokeWidth,strokeDashGapArray,__o_fill,points);
	return __this;
}

::hx::ObjectPtr< PolyLineShape_obj > PolyLineShape_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_opacity,::hx::Null< bool >  __o_visibility,::hx::Null< int >  __o_strokeColor,::hx::Null< Float >  __o_strokeWidth,::Array< ::String > strokeDashGapArray,::hx::Null< int >  __o_fill,::Array< Float > points) {
	PolyLineShape_obj *__this = (PolyLineShape_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PolyLineShape_obj), true, "pixelimage.triangleGML.contour.PolyLineShape"));
	*(void **)__this = PolyLineShape_obj::_hx_vtable;
	__this->__construct(__o_opacity,__o_visibility,__o_strokeColor,__o_strokeWidth,strokeDashGapArray,__o_fill,points);
	return __this;
}

PolyLineShape_obj::PolyLineShape_obj()
{
}

void PolyLineShape_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PolyLineShape);
	HX_MARK_MEMBER_NAME(points,"points");
	::pixelimage::triangleGML::coreShape::BasicShape_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PolyLineShape_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(points,"points");
	::pixelimage::triangleGML::coreShape::BasicShape_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PolyLineShape_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { return ::hx::Val( points ); }
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setParameter") ) { return ::hx::Val( setParameter_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PolyLineShape_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { points=inValue.Cast< ::Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PolyLineShape_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("points",23,12,2e,f7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PolyLineShape_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(PolyLineShape_obj,points),HX_("points",23,12,2e,f7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PolyLineShape_obj_sStaticStorageInfo = 0;
#endif

static ::String PolyLineShape_obj_sMemberFields[] = {
	HX_("points",23,12,2e,f7),
	HX_("setParameter",a7,f5,ff,6c),
	HX_("render",56,6b,29,05),
	::String(null()) };

::hx::Class PolyLineShape_obj::__mClass;

void PolyLineShape_obj::__register()
{
	PolyLineShape_obj _hx_dummy;
	PolyLineShape_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("pixelimage.triangleGML.contour.PolyLineShape",84,f8,09,c8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PolyLineShape_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PolyLineShape_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PolyLineShape_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PolyLineShape_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace pixelimage
} // end namespace triangleGML
} // end namespace contour
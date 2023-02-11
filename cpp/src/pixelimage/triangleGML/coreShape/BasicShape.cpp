// Generated by Haxe 4.3.0-rc.1+
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_pixelimage_triangleGML_coreShape_BasicShape
#include <pixelimage/triangleGML/coreShape/BasicShape.h>
#endif
#ifndef INCLUDED_pixelimage_triangleGML_coreShape_GroupShape
#include <pixelimage/triangleGML/coreShape/GroupShape.h>
#endif
#ifndef INCLUDED_pixelimage_triangleGML_coreShape_ShapeInterface
#include <pixelimage/triangleGML/coreShape/ShapeInterface.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4de593953c665956_30_new,"pixelimage.triangleGML.coreShape.BasicShape","new",0xae065a9a,"pixelimage.triangleGML.coreShape.BasicShape.new","pixelimage/triangleGML/coreShape/BasicShape.hx",30,0xa40bbc33)
HX_LOCAL_STACK_FRAME(_hx_pos_4de593953c665956_38_setParameter,"pixelimage.triangleGML.coreShape.BasicShape","setParameter",0x2e8b542d,"pixelimage.triangleGML.coreShape.BasicShape.setParameter","pixelimage/triangleGML/coreShape/BasicShape.hx",38,0xa40bbc33)
namespace pixelimage{
namespace triangleGML{
namespace coreShape{

void BasicShape_obj::__construct(::hx::Null< Float >  __o_opacity,::hx::Null< bool >  __o_visibility,::hx::Null< int >  __o_strokeColor,::hx::Null< Float >  __o_strokeWidth,::Array< ::String > strokeDashGapArray){
            		Float opacity = __o_opacity.Default(((Float)1.));
            		bool visibility = __o_visibility.Default(true);
            		int strokeColor = __o_strokeColor.Default(0);
            		Float strokeWidth = __o_strokeWidth.Default(((Float)1.));
            	HX_STACKFRAME(&_hx_pos_4de593953c665956_30_new)
HXLINE(  31)		super::__construct(opacity,visibility);
HXLINE(  32)		this->strokeColor = strokeColor;
HXLINE(  33)		this->strokeWidth = strokeWidth;
HXLINE(  34)		this->strokeDashGapArray = strokeDashGapArray;
            	}

Dynamic BasicShape_obj::__CreateEmpty() { return new BasicShape_obj; }

void *BasicShape_obj::_hx_vtable = 0;

Dynamic BasicShape_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BasicShape_obj > _hx_result = new BasicShape_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool BasicShape_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2091632c) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2091632c;
	} else {
		return inClassId==(int)0x24e92cfb;
	}
}

void BasicShape_obj::setParameter(::String name,::String value){
            	HX_STACKFRAME(&_hx_pos_4de593953c665956_38_setParameter)
HXDLIN(  38)		::String _hx_switch_0 = name;
            		if (  (_hx_switch_0==HX_("strokeColor",8b,b2,16,63)) ){
HXLINE(  40)			this->strokeColor = ( (int)(::Std_obj::parseInt(value)) );
HXDLIN(  40)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("strokeDashGapArray",ed,97,4a,47)) ){
HXLINE(  44)			this->strokeDashGapArray = null();
HXDLIN(  44)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("strokeWidth",2e,f7,1c,e3)) ){
HXLINE(  42)			this->strokeWidth = ::Std_obj::parseFloat(value);
HXDLIN(  42)			goto _hx_goto_1;
            		}
            		/* default */{
HXLINE(  46)			this->super::setParameter(name,value);
            		}
            		_hx_goto_1:;
            	}



::hx::ObjectPtr< BasicShape_obj > BasicShape_obj::__new(::hx::Null< Float >  __o_opacity,::hx::Null< bool >  __o_visibility,::hx::Null< int >  __o_strokeColor,::hx::Null< Float >  __o_strokeWidth,::Array< ::String > strokeDashGapArray) {
	::hx::ObjectPtr< BasicShape_obj > __this = new BasicShape_obj();
	__this->__construct(__o_opacity,__o_visibility,__o_strokeColor,__o_strokeWidth,strokeDashGapArray);
	return __this;
}

::hx::ObjectPtr< BasicShape_obj > BasicShape_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_opacity,::hx::Null< bool >  __o_visibility,::hx::Null< int >  __o_strokeColor,::hx::Null< Float >  __o_strokeWidth,::Array< ::String > strokeDashGapArray) {
	BasicShape_obj *__this = (BasicShape_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BasicShape_obj), true, "pixelimage.triangleGML.coreShape.BasicShape"));
	*(void **)__this = BasicShape_obj::_hx_vtable;
	__this->__construct(__o_opacity,__o_visibility,__o_strokeColor,__o_strokeWidth,strokeDashGapArray);
	return __this;
}

BasicShape_obj::BasicShape_obj()
{
}

void BasicShape_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BasicShape);
	HX_MARK_MEMBER_NAME(strokeColor,"strokeColor");
	HX_MARK_MEMBER_NAME(strokeWidth,"strokeWidth");
	HX_MARK_MEMBER_NAME(strokeDashGapArray,"strokeDashGapArray");
	::pixelimage::triangleGML::coreShape::GroupShape_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BasicShape_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(strokeColor,"strokeColor");
	HX_VISIT_MEMBER_NAME(strokeWidth,"strokeWidth");
	HX_VISIT_MEMBER_NAME(strokeDashGapArray,"strokeDashGapArray");
	::pixelimage::triangleGML::coreShape::GroupShape_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BasicShape_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"strokeColor") ) { return ::hx::Val( strokeColor ); }
		if (HX_FIELD_EQ(inName,"strokeWidth") ) { return ::hx::Val( strokeWidth ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setParameter") ) { return ::hx::Val( setParameter_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"strokeDashGapArray") ) { return ::hx::Val( strokeDashGapArray ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BasicShape_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"strokeColor") ) { strokeColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"strokeWidth") ) { strokeWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"strokeDashGapArray") ) { strokeDashGapArray=inValue.Cast< ::Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BasicShape_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("strokeColor",8b,b2,16,63));
	outFields->push(HX_("strokeWidth",2e,f7,1c,e3));
	outFields->push(HX_("strokeDashGapArray",ed,97,4a,47));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BasicShape_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(BasicShape_obj,strokeColor),HX_("strokeColor",8b,b2,16,63)},
	{::hx::fsFloat,(int)offsetof(BasicShape_obj,strokeWidth),HX_("strokeWidth",2e,f7,1c,e3)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(BasicShape_obj,strokeDashGapArray),HX_("strokeDashGapArray",ed,97,4a,47)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BasicShape_obj_sStaticStorageInfo = 0;
#endif

static ::String BasicShape_obj_sMemberFields[] = {
	HX_("strokeColor",8b,b2,16,63),
	HX_("strokeWidth",2e,f7,1c,e3),
	HX_("strokeDashGapArray",ed,97,4a,47),
	HX_("setParameter",a7,f5,ff,6c),
	::String(null()) };

::hx::Class BasicShape_obj::__mClass;

void BasicShape_obj::__register()
{
	BasicShape_obj _hx_dummy;
	BasicShape_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("pixelimage.triangleGML.coreShape.BasicShape",a8,c5,b2,a2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BasicShape_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BasicShape_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BasicShape_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BasicShape_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace pixelimage
} // end namespace triangleGML
} // end namespace coreShape
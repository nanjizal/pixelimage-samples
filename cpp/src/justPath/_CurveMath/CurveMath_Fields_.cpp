// Generated by Haxe 4.3.0-rc.1+
#include <hxcpp.h>

#ifndef INCLUDED_justPath__CurveMath_CurveMath_Fields_
#include <justPath/_CurveMath/CurveMath_Fields_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_5449cf63ed2fb2d7_8_boot,"justPath._CurveMath.CurveMath_Fields_","boot",0x518400bb,"justPath._CurveMath.CurveMath_Fields_.boot","justPath/CurveMath.hx",8,0xa55d7f45)
namespace justPath{
namespace _CurveMath{

void CurveMath_Fields__obj::__construct() { }

Dynamic CurveMath_Fields__obj::__CreateEmpty() { return new CurveMath_Fields__obj; }

void *CurveMath_Fields__obj::_hx_vtable = 0;

Dynamic CurveMath_Fields__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CurveMath_Fields__obj > _hx_result = new CurveMath_Fields__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CurveMath_Fields__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x405c1971;
}

Float CurveMath_Fields__obj::quadStep;


CurveMath_Fields__obj::CurveMath_Fields__obj()
{
}

bool CurveMath_Fields__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"quadStep") ) { outValue = ( quadStep ); return true; }
	}
	return false;
}

bool CurveMath_Fields__obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"quadStep") ) { quadStep=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CurveMath_Fields__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo CurveMath_Fields__obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &CurveMath_Fields__obj::quadStep,HX_("quadStep",b3,bb,78,d4)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void CurveMath_Fields__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CurveMath_Fields__obj::quadStep,"quadStep");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CurveMath_Fields__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CurveMath_Fields__obj::quadStep,"quadStep");
};

#endif

::hx::Class CurveMath_Fields__obj::__mClass;

static ::String CurveMath_Fields__obj_sStaticFields[] = {
	HX_("quadStep",b3,bb,78,d4),
	::String(null())
};

void CurveMath_Fields__obj::__register()
{
	CurveMath_Fields__obj _hx_dummy;
	CurveMath_Fields__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("justPath._CurveMath.CurveMath_Fields_",85,30,6f,c8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CurveMath_Fields__obj::__GetStatic;
	__mClass->mSetStaticField = &CurveMath_Fields__obj::__SetStatic;
	__mClass->mMarkFunc = CurveMath_Fields__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CurveMath_Fields__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CurveMath_Fields__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CurveMath_Fields__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CurveMath_Fields__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CurveMath_Fields__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CurveMath_Fields__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_5449cf63ed2fb2d7_8_boot)
HXDLIN(   8)		quadStep = ((Float)0.03);
            	}
}

} // end namespace justPath
} // end namespace _CurveMath
// Generated by Haxe 4.3.0-rc.1+
#include <hxcpp.h>

#ifndef INCLUDED_pixelimage_pixel__TwoGrad_TwoGrad_
#include <pixelimage/pixel/_TwoGrad/TwoGrad_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_114d0df6c0282180_8_new,"pixelimage.pixel._TwoGrad.TwoGrad_","new",0xd065f5e9,"pixelimage.pixel._TwoGrad.TwoGrad_.new","pixelimage/pixel/TwoGrad.hx",8,0x5a3e6f47)
namespace pixelimage{
namespace pixel{
namespace _TwoGrad{

void TwoGrad__obj::__construct(int colorClock,int colorAnti){
            	HX_STACKFRAME(&_hx_pos_114d0df6c0282180_8_new)
HXLINE(   9)		this->colorClock = colorClock;
HXLINE(  10)		this->colorAnti = colorAnti;
            	}

Dynamic TwoGrad__obj::__CreateEmpty() { return new TwoGrad__obj; }

void *TwoGrad__obj::_hx_vtable = 0;

Dynamic TwoGrad__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TwoGrad__obj > _hx_result = new TwoGrad__obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TwoGrad__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x159386f1;
}


TwoGrad__obj::TwoGrad__obj()
{
}

::hx::Val TwoGrad__obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"colorAnti") ) { return ::hx::Val( colorAnti ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"colorClock") ) { return ::hx::Val( colorClock ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TwoGrad__obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"colorAnti") ) { colorAnti=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"colorClock") ) { colorClock=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TwoGrad__obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("colorClock",6b,21,cf,6c));
	outFields->push(HX_("colorAnti",a5,1a,df,1b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TwoGrad__obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(TwoGrad__obj,colorClock),HX_("colorClock",6b,21,cf,6c)},
	{::hx::fsInt,(int)offsetof(TwoGrad__obj,colorAnti),HX_("colorAnti",a5,1a,df,1b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TwoGrad__obj_sStaticStorageInfo = 0;
#endif

static ::String TwoGrad__obj_sMemberFields[] = {
	HX_("colorClock",6b,21,cf,6c),
	HX_("colorAnti",a5,1a,df,1b),
	::String(null()) };

::hx::Class TwoGrad__obj::__mClass;

void TwoGrad__obj::__register()
{
	TwoGrad__obj _hx_dummy;
	TwoGrad__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("pixelimage.pixel._TwoGrad.TwoGrad_",77,cd,10,c0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TwoGrad__obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TwoGrad__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TwoGrad__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TwoGrad__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace pixelimage
} // end namespace pixel
} // end namespace _TwoGrad
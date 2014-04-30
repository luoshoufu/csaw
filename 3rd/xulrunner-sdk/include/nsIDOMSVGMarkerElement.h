/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /builds/slave/rel-m-rel-xr-osx64-bld/build/dom/interfaces/svg/nsIDOMSVGMarkerElement.idl
 */

#ifndef __gen_nsIDOMSVGMarkerElement_h__
#define __gen_nsIDOMSVGMarkerElement_h__


#ifndef __gen_nsIDOMSVGElement_h__
#include "nsIDOMSVGElement.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMSVGAnimatedLength; /* forward declaration */

class nsIDOMSVGAnimatedEnumeration; /* forward declaration */

class nsIDOMSVGAngle; /* forward declaration */

class nsIDOMSVGAnimatedAngle; /* forward declaration */

class nsIDOMSVGAnimatedRect; /* forward declaration */

class nsIDOMSVGMatrix; /* forward declaration */


/* starting interface:    nsIDOMSVGMarkerElement */
#define NS_IDOMSVGMARKERELEMENT_IID_STR "12e79be1-eac1-49b8-b644-d617445ae2b1"

#define NS_IDOMSVGMARKERELEMENT_IID \
  {0x12e79be1, 0xeac1, 0x49b8, \
    { 0xb6, 0x44, 0xd6, 0x17, 0x44, 0x5a, 0xe2, 0xb1 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSVGMarkerElement : public nsIDOMSVGElement {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSVGMARKERELEMENT_IID)

  enum { SVG_MARKERUNITS_UNKNOWN = 0U };

  enum { SVG_MARKERUNITS_USERSPACEONUSE = 1U };

  enum { SVG_MARKERUNITS_STROKEWIDTH = 2U };

  enum { SVG_MARKER_ORIENT_UNKNOWN = 0U };

  enum { SVG_MARKER_ORIENT_AUTO = 1U };

  enum { SVG_MARKER_ORIENT_ANGLE = 2U };

  /* readonly attribute nsIDOMSVGAnimatedLength refX; */
  NS_SCRIPTABLE NS_IMETHOD GetRefX(nsIDOMSVGAnimatedLength * *aRefX) = 0;

  /* readonly attribute nsIDOMSVGAnimatedLength refY; */
  NS_SCRIPTABLE NS_IMETHOD GetRefY(nsIDOMSVGAnimatedLength * *aRefY) = 0;

  /* readonly attribute nsIDOMSVGAnimatedEnumeration markerUnits; */
  NS_SCRIPTABLE NS_IMETHOD GetMarkerUnits(nsIDOMSVGAnimatedEnumeration * *aMarkerUnits) = 0;

  /* readonly attribute nsIDOMSVGAnimatedLength markerWidth; */
  NS_SCRIPTABLE NS_IMETHOD GetMarkerWidth(nsIDOMSVGAnimatedLength * *aMarkerWidth) = 0;

  /* readonly attribute nsIDOMSVGAnimatedLength markerHeight; */
  NS_SCRIPTABLE NS_IMETHOD GetMarkerHeight(nsIDOMSVGAnimatedLength * *aMarkerHeight) = 0;

  /* readonly attribute nsIDOMSVGAnimatedEnumeration orientType; */
  NS_SCRIPTABLE NS_IMETHOD GetOrientType(nsIDOMSVGAnimatedEnumeration * *aOrientType) = 0;

  /* readonly attribute nsIDOMSVGAnimatedAngle orientAngle; */
  NS_SCRIPTABLE NS_IMETHOD GetOrientAngle(nsIDOMSVGAnimatedAngle * *aOrientAngle) = 0;

  /* void setOrientToAuto (); */
  NS_SCRIPTABLE NS_IMETHOD SetOrientToAuto(void) = 0;

  /* void setOrientToAngle (in nsIDOMSVGAngle angle); */
  NS_SCRIPTABLE NS_IMETHOD SetOrientToAngle(nsIDOMSVGAngle *angle) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSVGMarkerElement, NS_IDOMSVGMARKERELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSVGMARKERELEMENT \
  NS_SCRIPTABLE NS_IMETHOD GetRefX(nsIDOMSVGAnimatedLength * *aRefX); \
  NS_SCRIPTABLE NS_IMETHOD GetRefY(nsIDOMSVGAnimatedLength * *aRefY); \
  NS_SCRIPTABLE NS_IMETHOD GetMarkerUnits(nsIDOMSVGAnimatedEnumeration * *aMarkerUnits); \
  NS_SCRIPTABLE NS_IMETHOD GetMarkerWidth(nsIDOMSVGAnimatedLength * *aMarkerWidth); \
  NS_SCRIPTABLE NS_IMETHOD GetMarkerHeight(nsIDOMSVGAnimatedLength * *aMarkerHeight); \
  NS_SCRIPTABLE NS_IMETHOD GetOrientType(nsIDOMSVGAnimatedEnumeration * *aOrientType); \
  NS_SCRIPTABLE NS_IMETHOD GetOrientAngle(nsIDOMSVGAnimatedAngle * *aOrientAngle); \
  NS_SCRIPTABLE NS_IMETHOD SetOrientToAuto(void); \
  NS_SCRIPTABLE NS_IMETHOD SetOrientToAngle(nsIDOMSVGAngle *angle); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSVGMARKERELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetRefX(nsIDOMSVGAnimatedLength * *aRefX) { return _to GetRefX(aRefX); } \
  NS_SCRIPTABLE NS_IMETHOD GetRefY(nsIDOMSVGAnimatedLength * *aRefY) { return _to GetRefY(aRefY); } \
  NS_SCRIPTABLE NS_IMETHOD GetMarkerUnits(nsIDOMSVGAnimatedEnumeration * *aMarkerUnits) { return _to GetMarkerUnits(aMarkerUnits); } \
  NS_SCRIPTABLE NS_IMETHOD GetMarkerWidth(nsIDOMSVGAnimatedLength * *aMarkerWidth) { return _to GetMarkerWidth(aMarkerWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetMarkerHeight(nsIDOMSVGAnimatedLength * *aMarkerHeight) { return _to GetMarkerHeight(aMarkerHeight); } \
  NS_SCRIPTABLE NS_IMETHOD GetOrientType(nsIDOMSVGAnimatedEnumeration * *aOrientType) { return _to GetOrientType(aOrientType); } \
  NS_SCRIPTABLE NS_IMETHOD GetOrientAngle(nsIDOMSVGAnimatedAngle * *aOrientAngle) { return _to GetOrientAngle(aOrientAngle); } \
  NS_SCRIPTABLE NS_IMETHOD SetOrientToAuto(void) { return _to SetOrientToAuto(); } \
  NS_SCRIPTABLE NS_IMETHOD SetOrientToAngle(nsIDOMSVGAngle *angle) { return _to SetOrientToAngle(angle); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSVGMARKERELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetRefX(nsIDOMSVGAnimatedLength * *aRefX) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRefX(aRefX); } \
  NS_SCRIPTABLE NS_IMETHOD GetRefY(nsIDOMSVGAnimatedLength * *aRefY) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRefY(aRefY); } \
  NS_SCRIPTABLE NS_IMETHOD GetMarkerUnits(nsIDOMSVGAnimatedEnumeration * *aMarkerUnits) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMarkerUnits(aMarkerUnits); } \
  NS_SCRIPTABLE NS_IMETHOD GetMarkerWidth(nsIDOMSVGAnimatedLength * *aMarkerWidth) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMarkerWidth(aMarkerWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetMarkerHeight(nsIDOMSVGAnimatedLength * *aMarkerHeight) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMarkerHeight(aMarkerHeight); } \
  NS_SCRIPTABLE NS_IMETHOD GetOrientType(nsIDOMSVGAnimatedEnumeration * *aOrientType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOrientType(aOrientType); } \
  NS_SCRIPTABLE NS_IMETHOD GetOrientAngle(nsIDOMSVGAnimatedAngle * *aOrientAngle) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOrientAngle(aOrientAngle); } \
  NS_SCRIPTABLE NS_IMETHOD SetOrientToAuto(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOrientToAuto(); } \
  NS_SCRIPTABLE NS_IMETHOD SetOrientToAngle(nsIDOMSVGAngle *angle) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOrientToAngle(angle); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSVGMarkerElement : public nsIDOMSVGMarkerElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSVGMARKERELEMENT

  nsDOMSVGMarkerElement();

private:
  ~nsDOMSVGMarkerElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSVGMarkerElement, nsIDOMSVGMarkerElement)

nsDOMSVGMarkerElement::nsDOMSVGMarkerElement()
{
  /* member initializers and constructor code */
}

nsDOMSVGMarkerElement::~nsDOMSVGMarkerElement()
{
  /* destructor code */
}

/* readonly attribute nsIDOMSVGAnimatedLength refX; */
NS_IMETHODIMP nsDOMSVGMarkerElement::GetRefX(nsIDOMSVGAnimatedLength * *aRefX)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedLength refY; */
NS_IMETHODIMP nsDOMSVGMarkerElement::GetRefY(nsIDOMSVGAnimatedLength * *aRefY)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedEnumeration markerUnits; */
NS_IMETHODIMP nsDOMSVGMarkerElement::GetMarkerUnits(nsIDOMSVGAnimatedEnumeration * *aMarkerUnits)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedLength markerWidth; */
NS_IMETHODIMP nsDOMSVGMarkerElement::GetMarkerWidth(nsIDOMSVGAnimatedLength * *aMarkerWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedLength markerHeight; */
NS_IMETHODIMP nsDOMSVGMarkerElement::GetMarkerHeight(nsIDOMSVGAnimatedLength * *aMarkerHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedEnumeration orientType; */
NS_IMETHODIMP nsDOMSVGMarkerElement::GetOrientType(nsIDOMSVGAnimatedEnumeration * *aOrientType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedAngle orientAngle; */
NS_IMETHODIMP nsDOMSVGMarkerElement::GetOrientAngle(nsIDOMSVGAnimatedAngle * *aOrientAngle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setOrientToAuto (); */
NS_IMETHODIMP nsDOMSVGMarkerElement::SetOrientToAuto()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setOrientToAngle (in nsIDOMSVGAngle angle); */
NS_IMETHODIMP nsDOMSVGMarkerElement::SetOrientToAngle(nsIDOMSVGAngle *angle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMSVGMarkerElement_h__ */
/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /builds/slave/rel-m-rel-xr-osx64-bld/build/dom/interfaces/html/nsIDOMHTMLStyleElement.idl
 */

#ifndef __gen_nsIDOMHTMLStyleElement_h__
#define __gen_nsIDOMHTMLStyleElement_h__


#ifndef __gen_nsIDOMHTMLElement_h__
#include "nsIDOMHTMLElement.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMHTMLStyleElement */
#define NS_IDOMHTMLSTYLEELEMENT_IID_STR "675aff34-07c5-491f-b92f-ccaf616ef8b3"

#define NS_IDOMHTMLSTYLEELEMENT_IID \
  {0x675aff34, 0x07c5, 0x491f, \
    { 0xb9, 0x2f, 0xcc, 0xaf, 0x61, 0x6e, 0xf8, 0xb3 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMHTMLStyleElement : public nsIDOMHTMLElement {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMHTMLSTYLEELEMENT_IID)

  /* attribute boolean disabled; */
  NS_SCRIPTABLE NS_IMETHOD GetDisabled(PRBool *aDisabled) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDisabled(PRBool aDisabled) = 0;

  /* attribute DOMString media; */
  NS_SCRIPTABLE NS_IMETHOD GetMedia(nsAString & aMedia) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMedia(const nsAString & aMedia) = 0;

  /* attribute DOMString type; */
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetType(const nsAString & aType) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMHTMLStyleElement, NS_IDOMHTMLSTYLEELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMHTMLSTYLEELEMENT \
  NS_SCRIPTABLE NS_IMETHOD GetDisabled(PRBool *aDisabled); \
  NS_SCRIPTABLE NS_IMETHOD SetDisabled(PRBool aDisabled); \
  NS_SCRIPTABLE NS_IMETHOD GetMedia(nsAString & aMedia); \
  NS_SCRIPTABLE NS_IMETHOD SetMedia(const nsAString & aMedia); \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType); \
  NS_SCRIPTABLE NS_IMETHOD SetType(const nsAString & aType); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMHTMLSTYLEELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetDisabled(PRBool *aDisabled) { return _to GetDisabled(aDisabled); } \
  NS_SCRIPTABLE NS_IMETHOD SetDisabled(PRBool aDisabled) { return _to SetDisabled(aDisabled); } \
  NS_SCRIPTABLE NS_IMETHOD GetMedia(nsAString & aMedia) { return _to GetMedia(aMedia); } \
  NS_SCRIPTABLE NS_IMETHOD SetMedia(const nsAString & aMedia) { return _to SetMedia(aMedia); } \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) { return _to GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD SetType(const nsAString & aType) { return _to SetType(aType); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMHTMLSTYLEELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetDisabled(PRBool *aDisabled) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDisabled(aDisabled); } \
  NS_SCRIPTABLE NS_IMETHOD SetDisabled(PRBool aDisabled) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDisabled(aDisabled); } \
  NS_SCRIPTABLE NS_IMETHOD GetMedia(nsAString & aMedia) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMedia(aMedia); } \
  NS_SCRIPTABLE NS_IMETHOD SetMedia(const nsAString & aMedia) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMedia(aMedia); } \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD SetType(const nsAString & aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetType(aType); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMHTMLStyleElement : public nsIDOMHTMLStyleElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMHTMLSTYLEELEMENT

  nsDOMHTMLStyleElement();

private:
  ~nsDOMHTMLStyleElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMHTMLStyleElement, nsIDOMHTMLStyleElement)

nsDOMHTMLStyleElement::nsDOMHTMLStyleElement()
{
  /* member initializers and constructor code */
}

nsDOMHTMLStyleElement::~nsDOMHTMLStyleElement()
{
  /* destructor code */
}

/* attribute boolean disabled; */
NS_IMETHODIMP nsDOMHTMLStyleElement::GetDisabled(PRBool *aDisabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLStyleElement::SetDisabled(PRBool aDisabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString media; */
NS_IMETHODIMP nsDOMHTMLStyleElement::GetMedia(nsAString & aMedia)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLStyleElement::SetMedia(const nsAString & aMedia)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString type; */
NS_IMETHODIMP nsDOMHTMLStyleElement::GetType(nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLStyleElement::SetType(const nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMHTMLStyleElement_h__ */
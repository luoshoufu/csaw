/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /builds/slave/rel-m-rel-xr-osx64-bld/build/dom/interfaces/svg/nsIDOMSVGTextElement.idl
 */

#ifndef __gen_nsIDOMSVGTextElement_h__
#define __gen_nsIDOMSVGTextElement_h__


#ifndef __gen_nsIDOMSVGTextPositionElem_h__
#include "nsIDOMSVGTextPositionElem.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMSVGTextElement */
#define NS_IDOMSVGTEXTELEMENT_IID_STR "774d0445-e3c9-46c4-a1ac-347a6d34a308"

#define NS_IDOMSVGTEXTELEMENT_IID \
  {0x774d0445, 0xe3c9, 0x46c4, \
    { 0xa1, 0xac, 0x34, 0x7a, 0x6d, 0x34, 0xa3, 0x08 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSVGTextElement : public nsIDOMSVGTextPositioningElement {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSVGTEXTELEMENT_IID)

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSVGTextElement, NS_IDOMSVGTEXTELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSVGTEXTELEMENT \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSVGTEXTELEMENT(_to) \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSVGTEXTELEMENT(_to) \
  /* no methods! */

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSVGTextElement : public nsIDOMSVGTextElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSVGTEXTELEMENT

  nsDOMSVGTextElement();

private:
  ~nsDOMSVGTextElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSVGTextElement, nsIDOMSVGTextElement)

nsDOMSVGTextElement::nsDOMSVGTextElement()
{
  /* member initializers and constructor code */
}

nsDOMSVGTextElement::~nsDOMSVGTextElement()
{
  /* destructor code */
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMSVGTextElement_h__ */
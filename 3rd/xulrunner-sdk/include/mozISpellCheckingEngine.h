/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /builds/slave/rel-m-rel-xr-osx64-bld/build/extensions/spellcheck/idl/mozISpellCheckingEngine.idl
 */

#ifndef __gen_mozISpellCheckingEngine_h__
#define __gen_mozISpellCheckingEngine_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIFile; /* forward declaration */

class mozIPersonalDictionary; /* forward declaration */


/* starting interface:    mozISpellCheckingEngine */
#define MOZISPELLCHECKINGENGINE_IID_STR "6eb307d6-3567-481a-971a-feb666b8ae72"

#define MOZISPELLCHECKINGENGINE_IID \
  {0x6eb307d6, 0x3567, 0x481a, \
    { 0x97, 0x1a, 0xfe, 0xb6, 0x66, 0xb8, 0xae, 0x72 }}

class NS_NO_VTABLE NS_SCRIPTABLE mozISpellCheckingEngine : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(MOZISPELLCHECKINGENGINE_IID)

  /* attribute wstring dictionary; */
  NS_SCRIPTABLE NS_IMETHOD GetDictionary(PRUnichar * *aDictionary) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDictionary(const PRUnichar * aDictionary) = 0;

  /* readonly attribute wstring language; */
  NS_SCRIPTABLE NS_IMETHOD GetLanguage(PRUnichar * *aLanguage) = 0;

  /* readonly attribute boolean providesPersonalDictionary; */
  NS_SCRIPTABLE NS_IMETHOD GetProvidesPersonalDictionary(PRBool *aProvidesPersonalDictionary) = 0;

  /* readonly attribute boolean providesWordUtils; */
  NS_SCRIPTABLE NS_IMETHOD GetProvidesWordUtils(PRBool *aProvidesWordUtils) = 0;

  /* readonly attribute wstring name; */
  NS_SCRIPTABLE NS_IMETHOD GetName(PRUnichar * *aName) = 0;

  /* readonly attribute wstring copyright; */
  NS_SCRIPTABLE NS_IMETHOD GetCopyright(PRUnichar * *aCopyright) = 0;

  /* attribute mozIPersonalDictionary personalDictionary; */
  NS_SCRIPTABLE NS_IMETHOD GetPersonalDictionary(mozIPersonalDictionary * *aPersonalDictionary) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetPersonalDictionary(mozIPersonalDictionary *aPersonalDictionary) = 0;

  /* void getDictionaryList ([array, size_is (count)] out wstring dictionaries, out PRUint32 count); */
  NS_SCRIPTABLE NS_IMETHOD GetDictionaryList(PRUnichar * **dictionaries NS_OUTPARAM, PRUint32 *count NS_OUTPARAM) = 0;

  /* boolean check (in wstring word); */
  NS_SCRIPTABLE NS_IMETHOD Check(const PRUnichar * word, PRBool *_retval NS_OUTPARAM) = 0;

  /* void suggest (in wstring word, [array, size_is (count)] out wstring suggestions, out PRUint32 count); */
  NS_SCRIPTABLE NS_IMETHOD Suggest(const PRUnichar * word, PRUnichar * **suggestions NS_OUTPARAM, PRUint32 *count NS_OUTPARAM) = 0;

  /* void loadDictionariesFromDir (in nsIFile dir); */
  NS_SCRIPTABLE NS_IMETHOD LoadDictionariesFromDir(nsIFile *dir) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(mozISpellCheckingEngine, MOZISPELLCHECKINGENGINE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_MOZISPELLCHECKINGENGINE \
  NS_SCRIPTABLE NS_IMETHOD GetDictionary(PRUnichar * *aDictionary); \
  NS_SCRIPTABLE NS_IMETHOD SetDictionary(const PRUnichar * aDictionary); \
  NS_SCRIPTABLE NS_IMETHOD GetLanguage(PRUnichar * *aLanguage); \
  NS_SCRIPTABLE NS_IMETHOD GetProvidesPersonalDictionary(PRBool *aProvidesPersonalDictionary); \
  NS_SCRIPTABLE NS_IMETHOD GetProvidesWordUtils(PRBool *aProvidesWordUtils); \
  NS_SCRIPTABLE NS_IMETHOD GetName(PRUnichar * *aName); \
  NS_SCRIPTABLE NS_IMETHOD GetCopyright(PRUnichar * *aCopyright); \
  NS_SCRIPTABLE NS_IMETHOD GetPersonalDictionary(mozIPersonalDictionary * *aPersonalDictionary); \
  NS_SCRIPTABLE NS_IMETHOD SetPersonalDictionary(mozIPersonalDictionary *aPersonalDictionary); \
  NS_SCRIPTABLE NS_IMETHOD GetDictionaryList(PRUnichar * **dictionaries NS_OUTPARAM, PRUint32 *count NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Check(const PRUnichar * word, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Suggest(const PRUnichar * word, PRUnichar * **suggestions NS_OUTPARAM, PRUint32 *count NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD LoadDictionariesFromDir(nsIFile *dir); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_MOZISPELLCHECKINGENGINE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetDictionary(PRUnichar * *aDictionary) { return _to GetDictionary(aDictionary); } \
  NS_SCRIPTABLE NS_IMETHOD SetDictionary(const PRUnichar * aDictionary) { return _to SetDictionary(aDictionary); } \
  NS_SCRIPTABLE NS_IMETHOD GetLanguage(PRUnichar * *aLanguage) { return _to GetLanguage(aLanguage); } \
  NS_SCRIPTABLE NS_IMETHOD GetProvidesPersonalDictionary(PRBool *aProvidesPersonalDictionary) { return _to GetProvidesPersonalDictionary(aProvidesPersonalDictionary); } \
  NS_SCRIPTABLE NS_IMETHOD GetProvidesWordUtils(PRBool *aProvidesWordUtils) { return _to GetProvidesWordUtils(aProvidesWordUtils); } \
  NS_SCRIPTABLE NS_IMETHOD GetName(PRUnichar * *aName) { return _to GetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetCopyright(PRUnichar * *aCopyright) { return _to GetCopyright(aCopyright); } \
  NS_SCRIPTABLE NS_IMETHOD GetPersonalDictionary(mozIPersonalDictionary * *aPersonalDictionary) { return _to GetPersonalDictionary(aPersonalDictionary); } \
  NS_SCRIPTABLE NS_IMETHOD SetPersonalDictionary(mozIPersonalDictionary *aPersonalDictionary) { return _to SetPersonalDictionary(aPersonalDictionary); } \
  NS_SCRIPTABLE NS_IMETHOD GetDictionaryList(PRUnichar * **dictionaries NS_OUTPARAM, PRUint32 *count NS_OUTPARAM) { return _to GetDictionaryList(dictionaries, count); } \
  NS_SCRIPTABLE NS_IMETHOD Check(const PRUnichar * word, PRBool *_retval NS_OUTPARAM) { return _to Check(word, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Suggest(const PRUnichar * word, PRUnichar * **suggestions NS_OUTPARAM, PRUint32 *count NS_OUTPARAM) { return _to Suggest(word, suggestions, count); } \
  NS_SCRIPTABLE NS_IMETHOD LoadDictionariesFromDir(nsIFile *dir) { return _to LoadDictionariesFromDir(dir); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_MOZISPELLCHECKINGENGINE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetDictionary(PRUnichar * *aDictionary) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDictionary(aDictionary); } \
  NS_SCRIPTABLE NS_IMETHOD SetDictionary(const PRUnichar * aDictionary) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDictionary(aDictionary); } \
  NS_SCRIPTABLE NS_IMETHOD GetLanguage(PRUnichar * *aLanguage) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLanguage(aLanguage); } \
  NS_SCRIPTABLE NS_IMETHOD GetProvidesPersonalDictionary(PRBool *aProvidesPersonalDictionary) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProvidesPersonalDictionary(aProvidesPersonalDictionary); } \
  NS_SCRIPTABLE NS_IMETHOD GetProvidesWordUtils(PRBool *aProvidesWordUtils) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProvidesWordUtils(aProvidesWordUtils); } \
  NS_SCRIPTABLE NS_IMETHOD GetName(PRUnichar * *aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetCopyright(PRUnichar * *aCopyright) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCopyright(aCopyright); } \
  NS_SCRIPTABLE NS_IMETHOD GetPersonalDictionary(mozIPersonalDictionary * *aPersonalDictionary) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPersonalDictionary(aPersonalDictionary); } \
  NS_SCRIPTABLE NS_IMETHOD SetPersonalDictionary(mozIPersonalDictionary *aPersonalDictionary) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPersonalDictionary(aPersonalDictionary); } \
  NS_SCRIPTABLE NS_IMETHOD GetDictionaryList(PRUnichar * **dictionaries NS_OUTPARAM, PRUint32 *count NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDictionaryList(dictionaries, count); } \
  NS_SCRIPTABLE NS_IMETHOD Check(const PRUnichar * word, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Check(word, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Suggest(const PRUnichar * word, PRUnichar * **suggestions NS_OUTPARAM, PRUint32 *count NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Suggest(word, suggestions, count); } \
  NS_SCRIPTABLE NS_IMETHOD LoadDictionariesFromDir(nsIFile *dir) { return !_to ? NS_ERROR_NULL_POINTER : _to->LoadDictionariesFromDir(dir); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public mozISpellCheckingEngine
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_MOZISPELLCHECKINGENGINE

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, mozISpellCheckingEngine)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute wstring dictionary; */
NS_IMETHODIMP _MYCLASS_::GetDictionary(PRUnichar * *aDictionary)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetDictionary(const PRUnichar * aDictionary)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute wstring language; */
NS_IMETHODIMP _MYCLASS_::GetLanguage(PRUnichar * *aLanguage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean providesPersonalDictionary; */
NS_IMETHODIMP _MYCLASS_::GetProvidesPersonalDictionary(PRBool *aProvidesPersonalDictionary)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean providesWordUtils; */
NS_IMETHODIMP _MYCLASS_::GetProvidesWordUtils(PRBool *aProvidesWordUtils)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute wstring name; */
NS_IMETHODIMP _MYCLASS_::GetName(PRUnichar * *aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute wstring copyright; */
NS_IMETHODIMP _MYCLASS_::GetCopyright(PRUnichar * *aCopyright)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute mozIPersonalDictionary personalDictionary; */
NS_IMETHODIMP _MYCLASS_::GetPersonalDictionary(mozIPersonalDictionary * *aPersonalDictionary)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetPersonalDictionary(mozIPersonalDictionary *aPersonalDictionary)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getDictionaryList ([array, size_is (count)] out wstring dictionaries, out PRUint32 count); */
NS_IMETHODIMP _MYCLASS_::GetDictionaryList(PRUnichar * **dictionaries NS_OUTPARAM, PRUint32 *count NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean check (in wstring word); */
NS_IMETHODIMP _MYCLASS_::Check(const PRUnichar * word, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void suggest (in wstring word, [array, size_is (count)] out wstring suggestions, out PRUint32 count); */
NS_IMETHODIMP _MYCLASS_::Suggest(const PRUnichar * word, PRUnichar * **suggestions NS_OUTPARAM, PRUint32 *count NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void loadDictionariesFromDir (in nsIFile dir); */
NS_IMETHODIMP _MYCLASS_::LoadDictionariesFromDir(nsIFile *dir)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define DICTIONARY_SEARCH_DIRECTORY "DictD"
#define DICTIONARY_SEARCH_DIRECTORY_LIST "DictDL"

#endif /* __gen_mozISpellCheckingEngine_h__ */

// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_aelfred2_JAXPFactory__
#define __gnu_xml_aelfred2_JAXPFactory__

#pragma interface

#include <javax/xml/parsers/SAXParserFactory.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace aelfred2
      {
          class JAXPFactory;
      }
    }
  }
  namespace javax
  {
    namespace xml
    {
      namespace parsers
      {
          class SAXParser;
      }
    }
  }
}

class gnu::xml::aelfred2::JAXPFactory : public ::javax::xml::parsers::SAXParserFactory
{

public:
  JAXPFactory();
  ::javax::xml::parsers::SAXParser * newSAXParser();
  void setFeature(::java::lang::String *, jboolean);
  jboolean getFeature(::java::lang::String *);
private:
  ::java::util::Hashtable * __attribute__((aligned(__alignof__( ::javax::xml::parsers::SAXParserFactory)))) flags;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_aelfred2_JAXPFactory__

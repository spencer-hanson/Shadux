
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_stub_java_rmi__Remote_Stub__
#define __org_omg_stub_java_rmi__Remote_Stub__

#pragma interface

#include <javax/rmi/CORBA/Stub.h>
#include <gcj/array.h>

extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace stub
      {
        namespace java
        {
          namespace rmi
          {
              class _Remote_Stub;
          }
        }
      }
    }
  }
}

class org::omg::stub::java::rmi::_Remote_Stub : public ::javax::rmi::CORBA::Stub
{

public:
  _Remote_Stub();
  JArray< ::java::lang::String * > * _ids();
private:
  static const jlong serialVersionUID = -1967190271952680697LL;
public:
  static ::java::lang::Class class$;
};

#endif // __org_omg_stub_java_rmi__Remote_Stub__

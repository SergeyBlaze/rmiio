// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.

#include "RemoteInputStream.hh"
#include <omniORB4/IOP_S.h>
#include <omniORB4/IOP_C.h>
#include <omniORB4/callDescriptor.h>
#include <omniORB4/callHandle.h>
#include <omniORB4/objTracker.h>


OMNI_USING_NAMESPACE(omni)

static const char* _0RL_library_version = omniORB_4_1;



com::healthmarketscience::rmiio::RemoteInputStream_ptr com::healthmarketscience::rmiio::RemoteInputStream_Helper::_nil() {
  return ::com::healthmarketscience::rmiio::RemoteInputStream::_nil();
}

CORBA::Boolean com::healthmarketscience::rmiio::RemoteInputStream_Helper::is_nil(::com::healthmarketscience::rmiio::RemoteInputStream_ptr p) {
  return CORBA::is_nil(p);

}

void com::healthmarketscience::rmiio::RemoteInputStream_Helper::release(::com::healthmarketscience::rmiio::RemoteInputStream_ptr p) {
  CORBA::release(p);
}

void com::healthmarketscience::rmiio::RemoteInputStream_Helper::marshalObjRef(::com::healthmarketscience::rmiio::RemoteInputStream_ptr obj, cdrStream& s) {
  ::com::healthmarketscience::rmiio::RemoteInputStream::_marshalObjRef(obj, s);
}

com::healthmarketscience::rmiio::RemoteInputStream_ptr com::healthmarketscience::rmiio::RemoteInputStream_Helper::unmarshalObjRef(cdrStream& s) {
  return ::com::healthmarketscience::rmiio::RemoteInputStream::_unmarshalObjRef(s);
}

void com::healthmarketscience::rmiio::RemoteInputStream_Helper::duplicate(::com::healthmarketscience::rmiio::RemoteInputStream_ptr obj) {
  if( obj && !obj->_NP_is_nil() )  omni::duplicateObjRef(obj);
}

com::healthmarketscience::rmiio::RemoteInputStream_ptr
com::healthmarketscience::rmiio::RemoteInputStream::_duplicate(::com::healthmarketscience::rmiio::RemoteInputStream_ptr obj)
{
  if( obj && !obj->_NP_is_nil() )  omni::duplicateObjRef(obj);
  return obj;
}

com::healthmarketscience::rmiio::RemoteInputStream_ptr
com::healthmarketscience::rmiio::RemoteInputStream::_narrow(CORBA::Object_ptr obj)
{
  if( !obj || obj->_NP_is_nil() || obj->_NP_is_pseudo() ) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_realNarrow(_PD_repoId);
  return e ? e : _nil();
}


com::healthmarketscience::rmiio::RemoteInputStream_ptr
com::healthmarketscience::rmiio::RemoteInputStream::_unchecked_narrow(CORBA::Object_ptr obj)
{
  if( !obj || obj->_NP_is_nil() || obj->_NP_is_pseudo() ) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_uncheckedNarrow(_PD_repoId);
  return e ? e : _nil();
}

com::healthmarketscience::rmiio::RemoteInputStream_ptr
com::healthmarketscience::rmiio::RemoteInputStream::_nil()
{
#ifdef OMNI_UNLOADABLE_STUBS
  static _objref_RemoteInputStream _the_nil_obj;
  return &_the_nil_obj;
#else
  static _objref_RemoteInputStream* _the_nil_ptr = 0;
  if( !_the_nil_ptr ) {
    omni::nilRefLock().lock();
    if( !_the_nil_ptr ) {
      _the_nil_ptr = new _objref_RemoteInputStream;
      registerNilCorbaObject(_the_nil_ptr);
    }
    omni::nilRefLock().unlock();
  }
  return _the_nil_ptr;
#endif
}

const char* com::healthmarketscience::rmiio::RemoteInputStream::_PD_repoId = "RMI:com.healthmarketscience.rmiio.RemoteInputStream:0000000000000000";


com::healthmarketscience::rmiio::_objref_RemoteInputStream::~_objref_RemoteInputStream() {
  
}


com::healthmarketscience::rmiio::_objref_RemoteInputStream::_objref_RemoteInputStream(omniIOR* ior, omniIdentity* id) :
   omniObjRef(::com::healthmarketscience::rmiio::RemoteInputStream::_PD_repoId, ior, id, 1)
   
   
{
  _PR_setobj(this);
}

void*
com::healthmarketscience::rmiio::_objref_RemoteInputStream::_ptrToObjRef(const char* id)
{
  if( id == ::com::healthmarketscience::rmiio::RemoteInputStream::_PD_repoId )
    return (::com::healthmarketscience::rmiio::RemoteInputStream_ptr) this;
  
  if( id == ::CORBA::Object::_PD_repoId )
    return (::CORBA::Object_ptr) this;

  if( omni::strMatch(id, ::com::healthmarketscience::rmiio::RemoteInputStream::_PD_repoId) )
    return (::com::healthmarketscience::rmiio::RemoteInputStream_ptr) this;
  
  if( omni::strMatch(id, ::CORBA::Object::_PD_repoId) )
    return (::CORBA::Object_ptr) this;

  return 0;
}

// Proxy call descriptor class. Mangled signature:
//  _cboolean_e_cjava_mio_mIOEx
class _0RL_cd_64C0C193E753CEE2_00000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_64C0C193E753CEE2_00000000(LocalCallFn lcfn,const char* op_,size_t oplen,_CORBA_Boolean upcall=0):
     omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 1, upcall)
  {
    
  }
  
  
  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  void userException(cdrStream&,_OMNI_NS(IOP_C)*,const char*);
  static const char* const _user_exns[];

  CORBA::Boolean result;
};

void _0RL_cd_64C0C193E753CEE2_00000000::marshalReturnedValues(cdrStream& _n)
{
  _n.marshalBoolean(result);

}

void _0RL_cd_64C0C193E753CEE2_00000000::unmarshalReturnedValues(cdrStream& _n)
{
  result = _n.unmarshalBoolean();

}

const char* const _0RL_cd_64C0C193E753CEE2_00000000::_user_exns[] = {
  java::io::IOEx::_PD_repoId
};

void _0RL_cd_64C0C193E753CEE2_00000000::userException(cdrStream& s, _OMNI_NS(IOP_C)* iop_client, const char* repoId)
{
  if ( omni::strMatch(repoId, java::io::IOEx::_PD_repoId) ) {
    java::io::IOEx _ex;
    _ex <<= s;
    if (iop_client) iop_client->RequestCompleted();
    throw _ex;
  }


  else {
    if (iop_client) iop_client->RequestCompleted(1);
    OMNIORB_THROW(UNKNOWN,UNKNOWN_UserException,
                  (CORBA::CompletionStatus)s.completion());
  }
}

// Local call call-back function.
static void
_0RL_lcfn_64C0C193E753CEE2_10000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_64C0C193E753CEE2_00000000* tcd = (_0RL_cd_64C0C193E753CEE2_00000000*)cd;
  com::healthmarketscience::rmiio::_impl_RemoteInputStream* impl = (com::healthmarketscience::rmiio::_impl_RemoteInputStream*) svnt->_ptrToInterface(com::healthmarketscience::rmiio::RemoteInputStream::_PD_repoId);
#ifdef HAS_Cplusplus_catch_exception_by_base
  tcd->result = impl->usingGZIPCompression();
#else
  if (!cd->is_upcall())
    tcd->result = impl->usingGZIPCompression();
  else {
    try {
      tcd->result = impl->usingGZIPCompression();
    }
    catch(java::io::IOEx& ex) {
      throw omniORB::StubUserException(ex._NP_duplicate());
    }


  }
#endif


}

CORBA::Boolean com::healthmarketscience::rmiio::_objref_RemoteInputStream::usingGZIPCompression()
{
  _0RL_cd_64C0C193E753CEE2_00000000 _call_desc(_0RL_lcfn_64C0C193E753CEE2_10000000, "usingGZIPCompression", 21);


  _invoke(_call_desc);
  return _call_desc.result;


}
// Proxy call descriptor class. Mangled signature:
//  _clong_e_cjava_mio_mIOEx
class _0RL_cd_64C0C193E753CEE2_20000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_64C0C193E753CEE2_20000000(LocalCallFn lcfn,const char* op_,size_t oplen,_CORBA_Boolean upcall=0):
     omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 1, upcall)
  {
    
  }
  
  
  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  void userException(cdrStream&,_OMNI_NS(IOP_C)*,const char*);
  static const char* const _user_exns[];

  CORBA::Long result;
};

void _0RL_cd_64C0C193E753CEE2_20000000::marshalReturnedValues(cdrStream& _n)
{
  result >>= _n;

}

void _0RL_cd_64C0C193E753CEE2_20000000::unmarshalReturnedValues(cdrStream& _n)
{
  (CORBA::Long&)result <<= _n;

}

const char* const _0RL_cd_64C0C193E753CEE2_20000000::_user_exns[] = {
  java::io::IOEx::_PD_repoId
};

void _0RL_cd_64C0C193E753CEE2_20000000::userException(cdrStream& s, _OMNI_NS(IOP_C)* iop_client, const char* repoId)
{
  if ( omni::strMatch(repoId, java::io::IOEx::_PD_repoId) ) {
    java::io::IOEx _ex;
    _ex <<= s;
    if (iop_client) iop_client->RequestCompleted();
    throw _ex;
  }


  else {
    if (iop_client) iop_client->RequestCompleted(1);
    OMNIORB_THROW(UNKNOWN,UNKNOWN_UserException,
                  (CORBA::CompletionStatus)s.completion());
  }
}

// Local call call-back function.
static void
_0RL_lcfn_64C0C193E753CEE2_30000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_64C0C193E753CEE2_20000000* tcd = (_0RL_cd_64C0C193E753CEE2_20000000*)cd;
  com::healthmarketscience::rmiio::_impl_RemoteInputStream* impl = (com::healthmarketscience::rmiio::_impl_RemoteInputStream*) svnt->_ptrToInterface(com::healthmarketscience::rmiio::RemoteInputStream::_PD_repoId);
#ifdef HAS_Cplusplus_catch_exception_by_base
  tcd->result = impl->available();
#else
  if (!cd->is_upcall())
    tcd->result = impl->available();
  else {
    try {
      tcd->result = impl->available();
    }
    catch(java::io::IOEx& ex) {
      throw omniORB::StubUserException(ex._NP_duplicate());
    }


  }
#endif


}

CORBA::Long com::healthmarketscience::rmiio::_objref_RemoteInputStream::available()
{
  _0RL_cd_64C0C193E753CEE2_20000000 _call_desc(_0RL_lcfn_64C0C193E753CEE2_30000000, "available", 10);


  _invoke(_call_desc);
  return _call_desc.result;


}
// Proxy call descriptor class. Mangled signature:
//  void_i_cboolean_e_cjava_mio_mIOEx
class _0RL_cd_64C0C193E753CEE2_40000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_64C0C193E753CEE2_40000000(LocalCallFn lcfn,const char* op_,size_t oplen,_CORBA_Boolean upcall=0):
     omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 1, upcall)
  {
    
  }
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

    
  void userException(cdrStream&,_OMNI_NS(IOP_C)*,const char*);
  static const char* const _user_exns[];

  CORBA::Boolean arg_0;
};

void _0RL_cd_64C0C193E753CEE2_40000000::marshalArguments(cdrStream& _n)
{
  _n.marshalBoolean(arg_0);

}

void _0RL_cd_64C0C193E753CEE2_40000000::unmarshalArguments(cdrStream& _n)
{
  arg_0 = _n.unmarshalBoolean();

}

const char* const _0RL_cd_64C0C193E753CEE2_40000000::_user_exns[] = {
  java::io::IOEx::_PD_repoId
};

void _0RL_cd_64C0C193E753CEE2_40000000::userException(cdrStream& s, _OMNI_NS(IOP_C)* iop_client, const char* repoId)
{
  if ( omni::strMatch(repoId, java::io::IOEx::_PD_repoId) ) {
    java::io::IOEx _ex;
    _ex <<= s;
    if (iop_client) iop_client->RequestCompleted();
    throw _ex;
  }


  else {
    if (iop_client) iop_client->RequestCompleted(1);
    OMNIORB_THROW(UNKNOWN,UNKNOWN_UserException,
                  (CORBA::CompletionStatus)s.completion());
  }
}

// Local call call-back function.
static void
_0RL_lcfn_64C0C193E753CEE2_50000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_64C0C193E753CEE2_40000000* tcd = (_0RL_cd_64C0C193E753CEE2_40000000*)cd;
  com::healthmarketscience::rmiio::_impl_RemoteInputStream* impl = (com::healthmarketscience::rmiio::_impl_RemoteInputStream*) svnt->_ptrToInterface(com::healthmarketscience::rmiio::RemoteInputStream::_PD_repoId);
#ifdef HAS_Cplusplus_catch_exception_by_base
  impl->close(tcd->arg_0);
#else
  if (!cd->is_upcall())
    impl->close(tcd->arg_0);
  else {
    try {
      impl->close(tcd->arg_0);
    }
    catch(java::io::IOEx& ex) {
      throw omniORB::StubUserException(ex._NP_duplicate());
    }


  }
#endif


}

void com::healthmarketscience::rmiio::_objref_RemoteInputStream::close(CORBA::Boolean readSuccess)
{
  _0RL_cd_64C0C193E753CEE2_40000000 _call_desc(_0RL_lcfn_64C0C193E753CEE2_50000000, "close", 6);
  _call_desc.arg_0 = readSuccess;

  _invoke(_call_desc);



}
// Proxy call descriptor class. Mangled signature:
//  _corg_momg_mboxedRMI_mseq1__octet_i_clong_e_cjava_mio_mIOEx
class _0RL_cd_64C0C193E753CEE2_60000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_64C0C193E753CEE2_60000000(LocalCallFn lcfn,const char* op_,size_t oplen,_CORBA_Boolean upcall=0):
     omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 1, upcall)
  {
    containsValues(1);
  }
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  void userException(cdrStream&,_OMNI_NS(IOP_C)*,const char*);
  static const char* const _user_exns[];

  CORBA::Long arg_0;
  org::omg::boxedRMI::seq1_octet_var result;
};

void _0RL_cd_64C0C193E753CEE2_60000000::marshalArguments(cdrStream& _n)
{
  arg_0 >>= _n;

}

void _0RL_cd_64C0C193E753CEE2_60000000::unmarshalArguments(cdrStream& _n)
{
  (CORBA::Long&)arg_0 <<= _n;

}

void _0RL_cd_64C0C193E753CEE2_60000000::marshalReturnedValues(cdrStream& _n)
{
  org::omg::boxedRMI::seq1_octet::_NP_marshal(result,_n);

}

void _0RL_cd_64C0C193E753CEE2_60000000::unmarshalReturnedValues(cdrStream& _n)
{
  result = org::omg::boxedRMI::seq1_octet::_NP_unmarshal(_n);

}

const char* const _0RL_cd_64C0C193E753CEE2_60000000::_user_exns[] = {
  java::io::IOEx::_PD_repoId
};

void _0RL_cd_64C0C193E753CEE2_60000000::userException(cdrStream& s, _OMNI_NS(IOP_C)* iop_client, const char* repoId)
{
  if ( omni::strMatch(repoId, java::io::IOEx::_PD_repoId) ) {
    java::io::IOEx _ex;
    _ex <<= s;
    if (iop_client) iop_client->RequestCompleted();
    throw _ex;
  }


  else {
    if (iop_client) iop_client->RequestCompleted(1);
    OMNIORB_THROW(UNKNOWN,UNKNOWN_UserException,
                  (CORBA::CompletionStatus)s.completion());
  }
}

// Local call call-back function.
static void
_0RL_lcfn_64C0C193E753CEE2_70000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_64C0C193E753CEE2_60000000* tcd = (_0RL_cd_64C0C193E753CEE2_60000000*)cd;
  com::healthmarketscience::rmiio::_impl_RemoteInputStream* impl = (com::healthmarketscience::rmiio::_impl_RemoteInputStream*) svnt->_ptrToInterface(com::healthmarketscience::rmiio::RemoteInputStream::_PD_repoId);
#ifdef HAS_Cplusplus_catch_exception_by_base
  tcd->result = impl->readPacket(tcd->arg_0);
#else
  if (!cd->is_upcall())
    tcd->result = impl->readPacket(tcd->arg_0);
  else {
    try {
      tcd->result = impl->readPacket(tcd->arg_0);
    }
    catch(java::io::IOEx& ex) {
      throw omniORB::StubUserException(ex._NP_duplicate());
    }


  }
#endif


}

org::omg::boxedRMI::seq1_octet* com::healthmarketscience::rmiio::_objref_RemoteInputStream::readPacket(CORBA::Long packetId)
{
  _0RL_cd_64C0C193E753CEE2_60000000 _call_desc(_0RL_lcfn_64C0C193E753CEE2_70000000, "readPacket", 11);
  _call_desc.arg_0 = packetId;

  _invoke(_call_desc);
  return _call_desc.result._retn();


}
// Proxy call descriptor class. Mangled signature:
//  _clonglong_i_clonglong_i_clong_e_cjava_mio_mIOEx
class _0RL_cd_64C0C193E753CEE2_80000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_64C0C193E753CEE2_80000000(LocalCallFn lcfn,const char* op_,size_t oplen,_CORBA_Boolean upcall=0):
     omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 1, upcall)
  {
    
  }
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  void userException(cdrStream&,_OMNI_NS(IOP_C)*,const char*);
  static const char* const _user_exns[];

  CORBA::LongLong arg_0;
  CORBA::Long arg_1;
  CORBA::LongLong result;
};

void _0RL_cd_64C0C193E753CEE2_80000000::marshalArguments(cdrStream& _n)
{
  arg_0 >>= _n;
  arg_1 >>= _n;

}

void _0RL_cd_64C0C193E753CEE2_80000000::unmarshalArguments(cdrStream& _n)
{
  (CORBA::LongLong&)arg_0 <<= _n;
  (CORBA::Long&)arg_1 <<= _n;

}

void _0RL_cd_64C0C193E753CEE2_80000000::marshalReturnedValues(cdrStream& _n)
{
  result >>= _n;

}

void _0RL_cd_64C0C193E753CEE2_80000000::unmarshalReturnedValues(cdrStream& _n)
{
  (CORBA::LongLong&)result <<= _n;

}

const char* const _0RL_cd_64C0C193E753CEE2_80000000::_user_exns[] = {
  java::io::IOEx::_PD_repoId
};

void _0RL_cd_64C0C193E753CEE2_80000000::userException(cdrStream& s, _OMNI_NS(IOP_C)* iop_client, const char* repoId)
{
  if ( omni::strMatch(repoId, java::io::IOEx::_PD_repoId) ) {
    java::io::IOEx _ex;
    _ex <<= s;
    if (iop_client) iop_client->RequestCompleted();
    throw _ex;
  }


  else {
    if (iop_client) iop_client->RequestCompleted(1);
    OMNIORB_THROW(UNKNOWN,UNKNOWN_UserException,
                  (CORBA::CompletionStatus)s.completion());
  }
}

// Local call call-back function.
static void
_0RL_lcfn_64C0C193E753CEE2_90000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_64C0C193E753CEE2_80000000* tcd = (_0RL_cd_64C0C193E753CEE2_80000000*)cd;
  com::healthmarketscience::rmiio::_impl_RemoteInputStream* impl = (com::healthmarketscience::rmiio::_impl_RemoteInputStream*) svnt->_ptrToInterface(com::healthmarketscience::rmiio::RemoteInputStream::_PD_repoId);
#ifdef HAS_Cplusplus_catch_exception_by_base
  tcd->result = impl->skip(tcd->arg_0, tcd->arg_1);
#else
  if (!cd->is_upcall())
    tcd->result = impl->skip(tcd->arg_0, tcd->arg_1);
  else {
    try {
      tcd->result = impl->skip(tcd->arg_0, tcd->arg_1);
    }
    catch(java::io::IOEx& ex) {
      throw omniORB::StubUserException(ex._NP_duplicate());
    }


  }
#endif


}

CORBA::LongLong com::healthmarketscience::rmiio::_objref_RemoteInputStream::skip(CORBA::LongLong n, CORBA::Long skipId)
{
  _0RL_cd_64C0C193E753CEE2_80000000 _call_desc(_0RL_lcfn_64C0C193E753CEE2_90000000, "skip", 5);
  _call_desc.arg_0 = n;
  _call_desc.arg_1 = skipId;

  _invoke(_call_desc);
  return _call_desc.result;


}
com::healthmarketscience::rmiio::_pof_RemoteInputStream::~_pof_RemoteInputStream() {}


omniObjRef*
com::healthmarketscience::rmiio::_pof_RemoteInputStream::newObjRef(omniIOR* ior, omniIdentity* id)
{
  return new ::com::healthmarketscience::rmiio::_objref_RemoteInputStream(ior, id);
}


CORBA::Boolean
com::healthmarketscience::rmiio::_pof_RemoteInputStream::is_a(const char* id) const
{
  if( omni::ptrStrMatch(id, ::com::healthmarketscience::rmiio::RemoteInputStream::_PD_repoId) )
    return 1;
  
  return 0;
}

const com::healthmarketscience::rmiio::_pof_RemoteInputStream _the_pof_com_mhealthmarketscience_mrmiio_mRemoteInputStream;

com::healthmarketscience::rmiio::_impl_RemoteInputStream::~_impl_RemoteInputStream() {}


CORBA::Boolean
com::healthmarketscience::rmiio::_impl_RemoteInputStream::_dispatch(omniCallHandle& _handle)
{
  const char* op = _handle.operation_name();

  if( omni::strMatch(op, "usingGZIPCompression") ) {

    _0RL_cd_64C0C193E753CEE2_00000000 _call_desc(_0RL_lcfn_64C0C193E753CEE2_10000000, "usingGZIPCompression", 21, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "available") ) {

    _0RL_cd_64C0C193E753CEE2_20000000 _call_desc(_0RL_lcfn_64C0C193E753CEE2_30000000, "available", 10, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "close") ) {

    _0RL_cd_64C0C193E753CEE2_40000000 _call_desc(_0RL_lcfn_64C0C193E753CEE2_50000000, "close", 6, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "readPacket") ) {

    _0RL_cd_64C0C193E753CEE2_60000000 _call_desc(_0RL_lcfn_64C0C193E753CEE2_70000000, "readPacket", 11, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "skip") ) {

    _0RL_cd_64C0C193E753CEE2_80000000 _call_desc(_0RL_lcfn_64C0C193E753CEE2_90000000, "skip", 5, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }


  return 0;
}

void*
com::healthmarketscience::rmiio::_impl_RemoteInputStream::_ptrToInterface(const char* id)
{
  if( id == ::com::healthmarketscience::rmiio::RemoteInputStream::_PD_repoId )
    return (::com::healthmarketscience::rmiio::_impl_RemoteInputStream*) this;
  
  if( id == ::CORBA::Object::_PD_repoId )
    return (void*) 1;

  if( omni::strMatch(id, ::com::healthmarketscience::rmiio::RemoteInputStream::_PD_repoId) )
    return (::com::healthmarketscience::rmiio::_impl_RemoteInputStream*) this;
  
  if( omni::strMatch(id, ::CORBA::Object::_PD_repoId) )
    return (void*) 1;
  return 0;
}

const char*
com::healthmarketscience::rmiio::_impl_RemoteInputStream::_mostDerivedRepoId()
{
  return ::com::healthmarketscience::rmiio::RemoteInputStream::_PD_repoId;
}

POA_com::healthmarketscience::rmiio::RemoteInputStream::~RemoteInputStream() {}


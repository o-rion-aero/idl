// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.2a_p11
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// c:\opendds-3.10-win32-debug\ace_wrappers\tao\tao_idl\be\be_codegen.cpp:376


#include "idl_clientC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Struct_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Struct_Field.h"
#include "tao/CDR.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"

#if !defined (__ACE_INLINE__)
#include "idl_clientC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// c:\opendds-3.10-win32-debug\ace_wrappers\tao\tao_idl\be\be_visitor_typecode\struct_typecode.cpp:88

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const 
    _tao_fields_IDL_Client_Pilot_Simulator_AircraftSituation[] =
      {
        { "position", &_tc_Vector3 },
        { "rotation", &_tc_Vector3 },
        { "simulatorId", &CORBA::_tc_long },
        { "speed", &CORBA::_tc_float }
      };
  
static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_IDL_Client_Pilot_Simulator_AircraftSituation (
  ::CORBA::tk_struct,
  "IDL:IDL/Client/Pilot/Simulator/AircraftSituation:1.0",
  "AircraftSituation",
  _tao_fields_IDL_Client_Pilot_Simulator_AircraftSituation,
  4);


namespace IDL
{
  
  namespace Client
  {
    
    namespace Pilot
    {
      
      namespace Simulator
      {
        ::CORBA::TypeCode_ptr const _tc_AircraftSituation =
          &_tao_tc_IDL_Client_Pilot_Simulator_AircraftSituation;
      }
    }
  }
}

// TAO_IDL - Generated from
// c:\opendds-3.10-win32-debug\ace_wrappers\tao\tao_idl\be\be_visitor_structure\structure_cs.cpp:59

void
IDL::Client::Pilot::Simulator::AircraftSituation::_tao_any_destructor (
    void *_tao_void_pointer)
{
  AircraftSituation *_tao_tmp_pointer =
    static_cast<AircraftSituation *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from
// c:\opendds-3.10-win32-debug\ace_wrappers\tao\tao_idl\be\be_visitor_structure\any_op_cs.cpp:46



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace IDL
{
  
  namespace Client
  {
    
    namespace Pilot
    {
      
      namespace Simulator
      {
        /// Copying insertion.
        void operator<<= (
            ::CORBA::Any &_tao_any,
            const ::IDL::Client::Pilot::Simulator::AircraftSituation &_tao_elem)
        {
          TAO::Any_Dual_Impl_T< ::IDL::Client::Pilot::Simulator::AircraftSituation>::insert_copy (
              _tao_any,
              ::IDL::Client::Pilot::Simulator::AircraftSituation::_tao_any_destructor,
              ::IDL::Client::Pilot::Simulator::_tc_AircraftSituation,
              _tao_elem);
      }

      /// Non-copying insertion.
      void operator<<= (
          ::CORBA::Any &_tao_any, ::
          IDL::Client::Pilot::Simulator::AircraftSituation *_tao_elem)
      {
        TAO::Any_Dual_Impl_T< ::IDL::Client::Pilot::Simulator::AircraftSituation>::insert (
            _tao_any,
            ::IDL::Client::Pilot::Simulator::AircraftSituation::_tao_any_destructor,
            ::IDL::Client::Pilot::Simulator::_tc_AircraftSituation,
            _tao_elem);
      }

      /// Extraction to non-const pointer (deprecated).
      ::CORBA::Boolean operator>>= (
          const ::CORBA::Any &_tao_any,
          ::IDL::Client::Pilot::Simulator::AircraftSituation *&_tao_elem)
      {
        return _tao_any >>= const_cast<
            const ::IDL::Client::Pilot::Simulator::AircraftSituation *&> (
            _tao_elem);
      }

      /// Extraction to const pointer.
      ::CORBA::Boolean operator>>= (
          const ::CORBA::Any &_tao_any,
          const ::IDL::Client::Pilot::Simulator::AircraftSituation *&_tao_elem)
      {
        return
          TAO::Any_Dual_Impl_T< ::IDL::Client::Pilot::Simulator::AircraftSituation>::extract (
              _tao_any,
              ::IDL::Client::Pilot::Simulator::AircraftSituation::_tao_any_destructor,
              ::IDL::Client::Pilot::Simulator::_tc_AircraftSituation,
              _tao_elem
            );
      }
    }
  }
}
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

/// Copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  const IDL::Client::Pilot::Simulator::AircraftSituation &_tao_elem)
{
  TAO::Any_Dual_Impl_T<IDL::Client::Pilot::Simulator::AircraftSituation>::insert_copy (
    _tao_any,
    IDL::Client::Pilot::Simulator::AircraftSituation::_tao_any_destructor,
    IDL::Client::Pilot::Simulator::_tc_AircraftSituation,
    _tao_elem);
}

/// Non-copying insertion.
void operator<<= (
  ::CORBA::Any &_tao_any,
  IDL::Client::Pilot::Simulator::AircraftSituation *_tao_elem)
{
  TAO::Any_Dual_Impl_T<IDL::Client::Pilot::Simulator::AircraftSituation>::insert (
    _tao_any,
    IDL::Client::Pilot::Simulator::AircraftSituation::_tao_any_destructor,
    IDL::Client::Pilot::Simulator::_tc_AircraftSituation,
    _tao_elem);
}

/// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  IDL::Client::Pilot::Simulator::AircraftSituation *&_tao_elem)
{
  return _tao_any >>= const_cast<
      const IDL::Client::Pilot::Simulator::AircraftSituation *&> (
      _tao_elem);
}

/// Extraction to const pointer.
::CORBA::Boolean operator>>= (
  const ::CORBA::Any &_tao_any,
  const IDL::Client::Pilot::Simulator::AircraftSituation *&_tao_elem)
{
  return
    TAO::Any_Dual_Impl_T<IDL::Client::Pilot::Simulator::AircraftSituation>::extract (
      _tao_any,
      IDL::Client::Pilot::Simulator::AircraftSituation::_tao_any_destructor,
      IDL::Client::Pilot::Simulator::_tc_AircraftSituation,
      _tao_elem);
}
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// c:\opendds-3.10-win32-debug\ace_wrappers\tao\tao_idl\be\be_visitor_structure\cdr_op_cs.cpp:52

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const IDL::Client::Pilot::Simulator::AircraftSituation &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.position) &&
    (strm << _tao_aggregate.rotation) &&
    (strm << _tao_aggregate.simulatorId) &&
    (strm << _tao_aggregate.speed);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    IDL::Client::Pilot::Simulator::AircraftSituation &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.position) &&
    (strm >> _tao_aggregate.rotation) &&
    (strm >> _tao_aggregate.simulatorId) &&
    (strm >> _tao_aggregate.speed);
}

TAO_END_VERSIONED_NAMESPACE_DECL



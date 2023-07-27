// This file has been generated by Py++.

#include "cbase.h"



#include "__convenience.pypp.hpp"

#include "__call_policies.pypp.hpp"

#include "cbase.h"

#include "srcpy_srcbuiltins.h"

#include "srcpy_srcbuiltins_converters.h"

#include "srcpy.h"

#include "tier0/memdbgon.h"

namespace bp = boost::python;

static boost::python::tuple GetColor_5697770b5e791413a33cc9b5367a16b8( ::Color const & inst ){
    int _r2;
    int _g2;
    int _b2;
    int _a2;
    inst.GetColor(_r2, _g2, _b2, _a2);
    return bp::make_tuple( _r2, _g2, _b2, _a2 );
}

PyTypeObject *g_PyKeyValuesType = NULL;

BOOST_PYTHON_MODULE(srcbuiltins){
    bp::docstring_options doc_options( true, true, false );

    { //::CGlobalVarsBase
        typedef bp::class_< CGlobalVarsBase > CGlobalVarsBase_exposer_t;
        CGlobalVarsBase_exposer_t CGlobalVarsBase_exposer = CGlobalVarsBase_exposer_t( "CGlobalVarsBase", bp::init< bool >(( bp::arg("bIsClient") )) );
        bp::scope CGlobalVarsBase_scope( CGlobalVarsBase_exposer );
        bp::implicitly_convertible< bool, CGlobalVarsBase >();
        { //::CGlobalVarsBase::GetNetworkBase
        
            typedef int ( ::CGlobalVarsBase::*GetNetworkBase_function_type)( int,int ) ;
            
            CGlobalVarsBase_exposer.def( 
                "GetNetworkBase"
                , GetNetworkBase_function_type( &::CGlobalVarsBase::GetNetworkBase )
                , ( bp::arg("nTick"), bp::arg("nEntity") ) );
        
        }
        { //::CGlobalVarsBase::IsClient
        
            typedef bool ( ::CGlobalVarsBase::*IsClient_function_type)(  ) const;
            
            CGlobalVarsBase_exposer.def( 
                "IsClient"
                , IsClient_function_type( &::CGlobalVarsBase::IsClient ) );
        
        }
        CGlobalVarsBase_exposer.def_readwrite( "absoluteframetime", &CGlobalVarsBase::absoluteframetime );
        CGlobalVarsBase_exposer.def_readwrite( "curtime", &CGlobalVarsBase::curtime );
        CGlobalVarsBase_exposer.def_readwrite( "framecount", &CGlobalVarsBase::framecount );
        CGlobalVarsBase_exposer.def_readwrite( "frametime", &CGlobalVarsBase::frametime );
        CGlobalVarsBase_exposer.def_readwrite( "interpolation_amount", &CGlobalVarsBase::interpolation_amount );
        CGlobalVarsBase_exposer.def_readwrite( "interval_per_tick", &CGlobalVarsBase::interval_per_tick );
        CGlobalVarsBase_exposer.def_readwrite( "maxClients", &CGlobalVarsBase::maxClients );
        CGlobalVarsBase_exposer.def_readwrite( "network_protocol", &CGlobalVarsBase::network_protocol );
        CGlobalVarsBase_exposer.def_readwrite( "realtime", &CGlobalVarsBase::realtime );
        CGlobalVarsBase_exposer.def_readwrite( "simTicksThisFrame", &CGlobalVarsBase::simTicksThisFrame );
        CGlobalVarsBase_exposer.def_readwrite( "tickcount", &CGlobalVarsBase::tickcount );
    }

    { //::CGlobalVars
        typedef bp::class_< CGlobalVars, bp::bases< CGlobalVarsBase > > CGlobalVars_exposer_t;
        CGlobalVars_exposer_t CGlobalVars_exposer = CGlobalVars_exposer_t( "CGlobalVars", bp::init< bool >(( bp::arg("bIsClient") )) );
        bp::scope CGlobalVars_scope( CGlobalVars_exposer );
        bp::implicitly_convertible< bool, CGlobalVars >();
        CGlobalVars_exposer.def_readwrite( "bMapLoadFailed", &CGlobalVars::bMapLoadFailed );
        CGlobalVars_exposer.def_readwrite( "coop", &CGlobalVars::coop );
        CGlobalVars_exposer.def_readwrite( "deathmatch", &CGlobalVars::deathmatch );
        CGlobalVars_exposer.def_readwrite( "eLoadType", &CGlobalVars::eLoadType );
        CGlobalVars_exposer.def_readwrite( "mapname", &CGlobalVars::mapname );
        CGlobalVars_exposer.def_readwrite( "mapversion", &CGlobalVars::mapversion );
        CGlobalVars_exposer.def_readwrite( "maxEntities", &CGlobalVars::maxEntities );
        CGlobalVars_exposer.def_readwrite( "serverCount", &CGlobalVars::serverCount );
        CGlobalVars_exposer.def_readwrite( "startspot", &CGlobalVars::startspot );
        CGlobalVars_exposer.def_readwrite( "teamplay", &CGlobalVars::teamplay );
    }

    { //::Color
        typedef bp::class_< Color > Color_exposer_t;
        Color_exposer_t Color_exposer = Color_exposer_t( "Color", bp::init< >() );
        bp::scope Color_scope( Color_exposer );
        Color_exposer.def( bp::init< int, int, int >(( bp::arg("_r"), bp::arg("_g"), bp::arg("_b") )) );
        Color_exposer.def( bp::init< int, int, int, int >(( bp::arg("_r"), bp::arg("_g"), bp::arg("_b"), bp::arg("_a") )) );
        { //::Color::GetColor
        
            typedef boost::python::tuple ( *GetColor_function_type )( ::Color const & );
            
            Color_exposer.def( 
                "GetColor"
                , GetColor_function_type( &GetColor_5697770b5e791413a33cc9b5367a16b8 )
                , ( bp::arg("inst") ) );
        
        }
        { //::Color::GetRawColor
        
            typedef int ( ::Color::*GetRawColor_function_type)(  ) const;
            
            Color_exposer.def( 
                "GetRawColor"
                , GetRawColor_function_type( &::Color::GetRawColor ) );
        
        }
        { //::Color::SetColor
        
            typedef void ( ::Color::*SetColor_function_type)( int,int,int,int ) ;
            
            Color_exposer.def( 
                "SetColor"
                , SetColor_function_type( &::Color::SetColor )
                , ( bp::arg("_r"), bp::arg("_g"), bp::arg("_b"), bp::arg("_a")=(int)(0) ) );
        
        }
        { //::Color::SetRawColor
        
            typedef void ( ::Color::*SetRawColor_function_type)( int ) ;
            
            Color_exposer.def( 
                "SetRawColor"
                , SetRawColor_function_type( &::Color::SetRawColor )
                , ( bp::arg("color32") ) );
        
        }
        { //::Color::a
        
            typedef int ( ::Color::*a_function_type)(  ) const;
            
            Color_exposer.def( 
                "a"
                , a_function_type( &::Color::a ) );
        
        }
        { //::Color::b
        
            typedef int ( ::Color::*b_function_type)(  ) const;
            
            Color_exposer.def( 
                "b"
                , b_function_type( &::Color::b ) );
        
        }
        { //::Color::g
        
            typedef int ( ::Color::*g_function_type)(  ) const;
            
            Color_exposer.def( 
                "g"
                , g_function_type( &::Color::g ) );
        
        }
        Color_exposer.def( bp::self != bp::self );
        Color_exposer.def( bp::self == bp::self );
        { //::Color::operator[]
        
            typedef unsigned char & ( ::Color::*__getitem___function_type)( int ) ;
            
            Color_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::Color::operator[] )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        { //::Color::operator[]
        
            typedef unsigned char const & ( ::Color::*__getitem___function_type)( int ) const;
            
            Color_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::Color::operator[] )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::Color::r
        
            typedef int ( ::Color::*r_function_type)(  ) const;
            
            Color_exposer.def( 
                "r"
                , r_function_type( &::Color::r ) );
        
        }
    }

    { //::KeyValues
        typedef bp::class_< KeyValues, boost::noncopyable > RealKeyValues_exposer_t;
        RealKeyValues_exposer_t RealKeyValues_exposer = RealKeyValues_exposer_t( "RealKeyValues", bp::no_init );
        bp::scope RealKeyValues_scope( RealKeyValues_exposer );
        bp::enum_< KeyValues::types_t>("types_t")
            .value("TYPE_NONE", KeyValues::TYPE_NONE)
            .value("TYPE_STRING", KeyValues::TYPE_STRING)
            .value("TYPE_INT", KeyValues::TYPE_INT)
            .value("TYPE_FLOAT", KeyValues::TYPE_FLOAT)
            .value("TYPE_PTR", KeyValues::TYPE_PTR)
            .value("TYPE_WSTRING", KeyValues::TYPE_WSTRING)
            .value("TYPE_COLOR", KeyValues::TYPE_COLOR)
            .value("TYPE_UINT64", KeyValues::TYPE_UINT64)
            .value("TYPE_NUMTYPES", KeyValues::TYPE_NUMTYPES)
            .export_values()
            ;
    }

    { //::PyKeyValues
        typedef bp::class_< PyKeyValues > KeyValues_exposer_t;
        KeyValues_exposer_t KeyValues_exposer = KeyValues_exposer_t( "KeyValues", bp::init< KeyValues const * >(( bp::arg("pKV") )) );
        bp::scope KeyValues_scope( KeyValues_exposer );
        bp::enum_< PyKeyValues::pytypes_t>("pytypes_t")
            .value("TYPE_NONE", PyKeyValues::TYPE_NONE)
            .value("TYPE_STRING", PyKeyValues::TYPE_STRING)
            .value("TYPE_INT", PyKeyValues::TYPE_INT)
            .value("TYPE_FLOAT", PyKeyValues::TYPE_FLOAT)
            .value("TYPE_PTR", PyKeyValues::TYPE_PTR)
            .value("TYPE_WSTRING", PyKeyValues::TYPE_WSTRING)
            .value("TYPE_COLOR", PyKeyValues::TYPE_COLOR)
            .value("TYPE_UINT64", PyKeyValues::TYPE_UINT64)
            .value("TYPE_NUMTYPES", PyKeyValues::TYPE_NUMTYPES)
            .export_values()
            ;
        bp::implicitly_convertible< KeyValues const *, PyKeyValues >();
        KeyValues_exposer.def( bp::init< PyKeyValues const & >(( bp::arg("src") )) );
        KeyValues_exposer.def( bp::init< char const * >(( bp::arg("setName") )) );
        bp::implicitly_convertible< char const *, PyKeyValues >();
        KeyValues_exposer.def( bp::init< char const *, char const *, char const * >(( bp::arg("setName"), bp::arg("firstKey"), bp::arg("firstValue") )) );
        KeyValues_exposer.def( bp::init< char const *, char const *, int >(( bp::arg("setName"), bp::arg("firstKey"), bp::arg("firstValue") )) );
        KeyValues_exposer.def( bp::init< char const *, char const *, char const *, char const *, char const * >(( bp::arg("setName"), bp::arg("firstKey"), bp::arg("firstValue"), bp::arg("secondKey"), bp::arg("secondValue") )) );
        KeyValues_exposer.def( bp::init< char const *, char const *, int, char const *, int >(( bp::arg("setName"), bp::arg("firstKey"), bp::arg("firstValue"), bp::arg("secondKey"), bp::arg("secondValue") )) );
        { //::PyKeyValues::AddSubKey
        
            typedef void ( ::PyKeyValues::*AddSubKey_function_type)( ::KeyValues * ) ;
            
            KeyValues_exposer.def( 
                "AddSubKey"
                , AddSubKey_function_type( &::PyKeyValues::AddSubKey )
                , ( bp::arg("pSubkey") ) );
        
        }
        { //::PyKeyValues::ChainKeyValue
        
            typedef void ( ::PyKeyValues::*ChainKeyValue_function_type)( ::KeyValues * ) ;
            
            KeyValues_exposer.def( 
                "ChainKeyValue"
                , ChainKeyValue_function_type( &::PyKeyValues::ChainKeyValue )
                , ( bp::arg("pChain") ) );
        
        }
        { //::PyKeyValues::Clear
        
            typedef void ( ::PyKeyValues::*Clear_function_type)(  ) ;
            
            KeyValues_exposer.def( 
                "Clear"
                , Clear_function_type( &::PyKeyValues::Clear ) );
        
        }
        { //::PyKeyValues::CreateNewKey
        
            typedef ::KeyValues * ( ::PyKeyValues::*CreateNewKey_function_type)(  ) ;
            
            KeyValues_exposer.def( 
                "CreateNewKey"
                , CreateNewKey_function_type( &::PyKeyValues::CreateNewKey )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::PyKeyValues::FindKey
        
            typedef ::KeyValues * ( ::PyKeyValues::*FindKey_function_type)( char const *,bool ) ;
            
            KeyValues_exposer.def( 
                "FindKey"
                , FindKey_function_type( &::PyKeyValues::FindKey )
                , ( bp::arg("keyName"), bp::arg("bCreate")=(bool)(false) )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::PyKeyValues::FindKey
        
            typedef ::KeyValues * ( ::PyKeyValues::*FindKey_function_type)( int ) const;
            
            KeyValues_exposer.def( 
                "FindKey"
                , FindKey_function_type( &::PyKeyValues::FindKey )
                , ( bp::arg("keySymbol") )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::PyKeyValues::GetBool
        
            typedef bool ( ::PyKeyValues::*GetBool_function_type)( char const *,bool ) ;
            
            KeyValues_exposer.def( 
                "GetBool"
                , GetBool_function_type( &::PyKeyValues::GetBool )
                , ( bp::arg("keyName")=bp::object(), bp::arg("defaultValue")=(bool)(false) ) );
        
        }
        { //::PyKeyValues::GetBool
        
            typedef bool ( ::PyKeyValues::*GetBool_function_type)( int,bool ) ;
            
            KeyValues_exposer.def( 
                "GetBool"
                , GetBool_function_type( &::PyKeyValues::GetBool )
                , ( bp::arg("keySymbol"), bp::arg("defaultValue")=(bool)(false) ) );
        
        }
        { //::PyKeyValues::GetColor
        
            typedef ::Color ( ::PyKeyValues::*GetColor_function_type)( char const * ) ;
            
            KeyValues_exposer.def( 
                "GetColor"
                , GetColor_function_type( &::PyKeyValues::GetColor )
                , ( bp::arg("keyName")=bp::object() ) );
        
        }
        { //::PyKeyValues::GetColor
        
            typedef ::Color ( ::PyKeyValues::*GetColor_function_type)( int ) ;
            
            KeyValues_exposer.def( 
                "GetColor"
                , GetColor_function_type( &::PyKeyValues::GetColor )
                , ( bp::arg("keySymbol") ) );
        
        }
        { //::PyKeyValues::GetDataType
        
            typedef ::KeyValues::types_t ( ::PyKeyValues::*GetDataType_function_type)( char const * ) ;
            
            KeyValues_exposer.def( 
                "GetDataType"
                , GetDataType_function_type( &::PyKeyValues::GetDataType )
                , ( bp::arg("keyName")=bp::object() ) );
        
        }
        { //::PyKeyValues::GetFirstSubKey
        
            typedef ::KeyValues * ( ::PyKeyValues::*GetFirstSubKey_function_type)(  ) ;
            
            KeyValues_exposer.def( 
                "GetFirstSubKey"
                , GetFirstSubKey_function_type( &::PyKeyValues::GetFirstSubKey )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::PyKeyValues::GetFirstTrueSubKey
        
            typedef ::KeyValues * ( ::PyKeyValues::*GetFirstTrueSubKey_function_type)(  ) ;
            
            KeyValues_exposer.def( 
                "GetFirstTrueSubKey"
                , GetFirstTrueSubKey_function_type( &::PyKeyValues::GetFirstTrueSubKey )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::PyKeyValues::GetFirstValue
        
            typedef ::KeyValues * ( ::PyKeyValues::*GetFirstValue_function_type)(  ) ;
            
            KeyValues_exposer.def( 
                "GetFirstValue"
                , GetFirstValue_function_type( &::PyKeyValues::GetFirstValue )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::PyKeyValues::GetFloat
        
            typedef float ( ::PyKeyValues::*GetFloat_function_type)( char const *,float ) ;
            
            KeyValues_exposer.def( 
                "GetFloat"
                , GetFloat_function_type( &::PyKeyValues::GetFloat )
                , ( bp::arg("keyName")=bp::object(), bp::arg("defaultValue")=0.F ) );
        
        }
        { //::PyKeyValues::GetFloat
        
            typedef float ( ::PyKeyValues::*GetFloat_function_type)( int,float ) ;
            
            KeyValues_exposer.def( 
                "GetFloat"
                , GetFloat_function_type( &::PyKeyValues::GetFloat )
                , ( bp::arg("keySymbol"), bp::arg("defaultValue")=0.F ) );
        
        }
        { //::PyKeyValues::GetInt
        
            typedef int ( ::PyKeyValues::*GetInt_function_type)( char const *,int ) ;
            
            KeyValues_exposer.def( 
                "GetInt"
                , GetInt_function_type( &::PyKeyValues::GetInt )
                , ( bp::arg("keyName")=bp::object(), bp::arg("defaultValue")=(int)(0) ) );
        
        }
        { //::PyKeyValues::GetInt
        
            typedef int ( ::PyKeyValues::*GetInt_function_type)( int,int ) ;
            
            KeyValues_exposer.def( 
                "GetInt"
                , GetInt_function_type( &::PyKeyValues::GetInt )
                , ( bp::arg("keySymbol"), bp::arg("defaultValue")=(int)(0) ) );
        
        }
        { //::PyKeyValues::GetName
        
            typedef char const * ( ::PyKeyValues::*GetName_function_type)(  ) const;
            
            KeyValues_exposer.def( 
                "GetName"
                , GetName_function_type( &::PyKeyValues::GetName ) );
        
        }
        { //::PyKeyValues::GetNameSymbol
        
            typedef int ( ::PyKeyValues::*GetNameSymbol_function_type)(  ) ;
            
            KeyValues_exposer.def( 
                "GetNameSymbol"
                , GetNameSymbol_function_type( &::PyKeyValues::GetNameSymbol ) );
        
        }
        { //::PyKeyValues::GetNextKey
        
            typedef ::KeyValues * ( ::PyKeyValues::*GetNextKey_function_type)(  ) ;
            
            KeyValues_exposer.def( 
                "GetNextKey"
                , GetNextKey_function_type( &::PyKeyValues::GetNextKey )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::PyKeyValues::GetNextTrueSubKey
        
            typedef ::KeyValues * ( ::PyKeyValues::*GetNextTrueSubKey_function_type)(  ) ;
            
            KeyValues_exposer.def( 
                "GetNextTrueSubKey"
                , GetNextTrueSubKey_function_type( &::PyKeyValues::GetNextTrueSubKey )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::PyKeyValues::GetNextValue
        
            typedef ::KeyValues * ( ::PyKeyValues::*GetNextValue_function_type)(  ) ;
            
            KeyValues_exposer.def( 
                "GetNextValue"
                , GetNextValue_function_type( &::PyKeyValues::GetNextValue )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::PyKeyValues::GetRawKeyValues
        
            typedef ::KeyValues * ( ::PyKeyValues::*__GetRawKeyValues_function_type)(  ) const;
            
            KeyValues_exposer.def( 
                "__GetRawKeyValues"
                , __GetRawKeyValues_function_type( &::PyKeyValues::GetRawKeyValues )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::PyKeyValues::GetString
        
            typedef char const * ( ::PyKeyValues::*GetString_function_type)( char const *,char const * ) ;
            
            KeyValues_exposer.def( 
                "GetString"
                , GetString_function_type( &::PyKeyValues::GetString )
                , ( bp::arg("keyName")=bp::object(), bp::arg("defaultValue")="" ) );
        
        }
        { //::PyKeyValues::GetString
        
            typedef char const * ( ::PyKeyValues::*GetString_function_type)( int,char const * ) ;
            
            KeyValues_exposer.def( 
                "GetString"
                , GetString_function_type( &::PyKeyValues::GetString )
                , ( bp::arg("keySymbol"), bp::arg("defaultValue")="" ) );
        
        }
        { //::PyKeyValues::GetUint64
        
            typedef ::uint64 ( ::PyKeyValues::*GetUint64_function_type)( char const *,::uint64 ) ;
            
            KeyValues_exposer.def( 
                "GetUint64"
                , GetUint64_function_type( &::PyKeyValues::GetUint64 )
                , ( bp::arg("keyName")=bp::object(), bp::arg("defaultValue")=(::uint64)(0) ) );
        
        }
        { //::PyKeyValues::IsEmpty
        
            typedef bool ( ::PyKeyValues::*IsEmpty_function_type)( char const * ) ;
            
            KeyValues_exposer.def( 
                "IsEmpty"
                , IsEmpty_function_type( &::PyKeyValues::IsEmpty )
                , ( bp::arg("keyName")=bp::object() ) );
        
        }
        { //::PyKeyValues::IsEmpty
        
            typedef bool ( ::PyKeyValues::*IsEmpty_function_type)( int ) ;
            
            KeyValues_exposer.def( 
                "IsEmpty"
                , IsEmpty_function_type( &::PyKeyValues::IsEmpty )
                , ( bp::arg("keySymbol") ) );
        
        }
        { //::PyKeyValues::RemoveSubKey
        
            typedef void ( ::PyKeyValues::*RemoveSubKey_function_type)( ::KeyValues * ) ;
            
            KeyValues_exposer.def( 
                "RemoveSubKey"
                , RemoveSubKey_function_type( &::PyKeyValues::RemoveSubKey )
                , ( bp::arg("subKey") ) );
        
        }
        { //::PyKeyValues::SetBool
        
            typedef void ( ::PyKeyValues::*SetBool_function_type)( char const *,bool ) ;
            
            KeyValues_exposer.def( 
                "SetBool"
                , SetBool_function_type( &::PyKeyValues::SetBool )
                , ( bp::arg("keyName"), bp::arg("value") ) );
        
        }
        { //::PyKeyValues::SetColor
        
            typedef void ( ::PyKeyValues::*SetColor_function_type)( char const *,::Color ) ;
            
            KeyValues_exposer.def( 
                "SetColor"
                , SetColor_function_type( &::PyKeyValues::SetColor )
                , ( bp::arg("keyName"), bp::arg("value") ) );
        
        }
        { //::PyKeyValues::SetFloat
        
            typedef void ( ::PyKeyValues::*SetFloat_function_type)( char const *,float ) ;
            
            KeyValues_exposer.def( 
                "SetFloat"
                , SetFloat_function_type( &::PyKeyValues::SetFloat )
                , ( bp::arg("keyName"), bp::arg("value") ) );
        
        }
        { //::PyKeyValues::SetInt
        
            typedef void ( ::PyKeyValues::*SetInt_function_type)( char const *,int ) ;
            
            KeyValues_exposer.def( 
                "SetInt"
                , SetInt_function_type( &::PyKeyValues::SetInt )
                , ( bp::arg("keyName"), bp::arg("value") ) );
        
        }
        { //::PyKeyValues::SetName
        
            typedef void ( ::PyKeyValues::*SetName_function_type)( char const * ) ;
            
            KeyValues_exposer.def( 
                "SetName"
                , SetName_function_type( &::PyKeyValues::SetName )
                , ( bp::arg("setName") ) );
        
        }
        { //::PyKeyValues::SetNextKey
        
            typedef void ( ::PyKeyValues::*SetNextKey_function_type)( ::KeyValues * ) ;
            
            KeyValues_exposer.def( 
                "SetNextKey"
                , SetNextKey_function_type( &::PyKeyValues::SetNextKey )
                , ( bp::arg("pDat") ) );
        
        }
        { //::PyKeyValues::SetString
        
            typedef void ( ::PyKeyValues::*SetString_function_type)( char const *,char const * ) ;
            
            KeyValues_exposer.def( 
                "SetString"
                , SetString_function_type( &::PyKeyValues::SetString )
                , ( bp::arg("keyName"), bp::arg("value") ) );
        
        }
        { //::PyKeyValues::SetStringValue
        
            typedef void ( ::PyKeyValues::*SetStringValue_function_type)( char const * ) ;
            
            KeyValues_exposer.def( 
                "SetStringValue"
                , SetStringValue_function_type( &::PyKeyValues::SetStringValue )
                , ( bp::arg("strValue") ) );
        
        }
        { //::PyKeyValues::SetUint64
        
            typedef void ( ::PyKeyValues::*SetUint64_function_type)( char const *,::uint64 ) ;
            
            KeyValues_exposer.def( 
                "SetUint64"
                , SetUint64_function_type( &::PyKeyValues::SetUint64 )
                , ( bp::arg("keyName"), bp::arg("value") ) );
        
        }
        { //::PyKeyValues::deleteThis
        
            typedef void ( ::PyKeyValues::*deleteThis_function_type)(  ) ;
            
            KeyValues_exposer.def( 
                "deleteThis"
                , deleteThis_function_type( &::PyKeyValues::deleteThis ) );
        
        }
        g_PyKeyValuesType = (PyTypeObject *)KeyValues_exposer.ptr();
    }

    { //::SrcPyStdErr
        typedef bp::class_< SrcPyStdErr > SrcPyStdErr_exposer_t;
        SrcPyStdErr_exposer_t SrcPyStdErr_exposer = SrcPyStdErr_exposer_t( "SrcPyStdErr" );
        bp::scope SrcPyStdErr_scope( SrcPyStdErr_exposer );
        { //::SrcPyStdErr::flush
        
            typedef void ( ::SrcPyStdErr::*flush_function_type)(  ) ;
            
            SrcPyStdErr_exposer.def( 
                "flush"
                , flush_function_type( &::SrcPyStdErr::flush ) );
        
        }
        { //::SrcPyStdErr::write
        
            typedef void ( ::SrcPyStdErr::*write_function_type)( char const * ) ;
            
            SrcPyStdErr_exposer.def( 
                "write"
                , write_function_type( &::SrcPyStdErr::write )
                , ( bp::arg("msg") ) );
        
        }
        { //property "encoding"[fget=::SrcPyStdErr::encoding]
        
            typedef char const * ( ::SrcPyStdErr::*fget)(  ) ;
            
            SrcPyStdErr_exposer.add_property( 
                "encoding"
                , fget( &::SrcPyStdErr::encoding ) );
        
        }
    }

    { //::SrcPyStdOut
        typedef bp::class_< SrcPyStdOut > SrcPyStdOut_exposer_t;
        SrcPyStdOut_exposer_t SrcPyStdOut_exposer = SrcPyStdOut_exposer_t( "SrcPyStdOut" );
        bp::scope SrcPyStdOut_scope( SrcPyStdOut_exposer );
        { //::SrcPyStdOut::flush
        
            typedef void ( ::SrcPyStdOut::*flush_function_type)(  ) ;
            
            SrcPyStdOut_exposer.def( 
                "flush"
                , flush_function_type( &::SrcPyStdOut::flush ) );
        
        }
        { //::SrcPyStdOut::write
        
            typedef void ( ::SrcPyStdOut::*write_function_type)( char const * ) ;
            
            SrcPyStdOut_exposer.def( 
                "write"
                , write_function_type( &::SrcPyStdOut::write )
                , ( bp::arg("msg") ) );
        
        }
        { //property "encoding"[fget=::SrcPyStdOut::encoding]
        
            typedef char const * ( ::SrcPyStdOut::*fget)(  ) ;
            
            SrcPyStdOut_exposer.add_property( 
                "encoding"
                , fget( &::SrcPyStdOut::encoding ) );
        
        }
    }

    bp::class_< color32_s >( "color32" )    
        .def( bp::self != bp::self )    
        .def_readwrite( "a", &color32_s::a )    
        .def_readwrite( "b", &color32_s::b )    
        .def_readwrite( "g", &color32_s::g )    
        .def_readwrite( "r", &color32_s::r );

    { //::GetRegisteredPerFrameMethods
    
        typedef ::boost::python::list ( *GetRegisteredPerFrameMethods_function_type )(  );
        
        bp::def( 
            "GetRegisteredPerFrameMethods"
            , GetRegisteredPerFrameMethods_function_type( &::GetRegisteredPerFrameMethods ) );
    
    }

    { //::GetRegisteredTickMethods
    
        typedef ::boost::python::list ( *GetRegisteredTickMethods_function_type )(  );
        
        bp::def( 
            "GetRegisteredTickMethods"
            , GetRegisteredTickMethods_function_type( &::GetRegisteredTickMethods ) );
    
    }

    { //::IsPerFrameMethodRegistered
    
        typedef bool ( *IsPerFrameMethodRegistered_function_type )( ::boost::python::api::object );
        
        bp::def( 
            "IsPerFrameMethodRegistered"
            , IsPerFrameMethodRegistered_function_type( &::IsPerFrameMethodRegistered )
            , ( bp::arg("method") ) );
    
    }

    { //::IsSolid
    
        typedef bool ( *IsSolid_function_type )( ::SolidType_t,int );
        
        bp::def( 
            "IsSolid"
            , IsSolid_function_type( &::IsSolid )
            , ( bp::arg("solidType"), bp::arg("nSolidFlags") ) );
    
    }

    { //::IsTickMethodRegistered
    
        typedef bool ( *IsTickMethodRegistered_function_type )( ::boost::python::api::object );
        
        bp::def( 
            "IsTickMethodRegistered"
            , IsTickMethodRegistered_function_type( &::IsTickMethodRegistered )
            , ( bp::arg("method") ) );
    
    }

    { //::KeyValuesDumpAsDevMsg
    
        typedef bool ( *KeyValuesDumpAsDevMsg_function_type )( ::KeyValues *,int,int );
        
        bp::def( 
            "KeyValuesDumpAsDevMsg"
            , KeyValuesDumpAsDevMsg_function_type( &::KeyValuesDumpAsDevMsg )
            , ( bp::arg("pKeyValues"), bp::arg("nIndentLevel")=(int)(0), bp::arg("nDeveloperLevel")=(int)(1) ) );
    
    }

    { //::PyCOM_TimestampedLog
    
        typedef void ( *COM_TimestampedLog_function_type )( char const * );
        
        bp::def( 
            "COM_TimestampedLog"
            , COM_TimestampedLog_function_type( &::PyCOM_TimestampedLog )
            , ( bp::arg("msg") ) );
    
    }

    { //::PyDictToKeyValues
    
        typedef ::KeyValues * ( *DictToKeyValues_function_type )( ::boost::python::api::object,char const *,bool );
        
        bp::def( 
            "DictToKeyValues"
            , DictToKeyValues_function_type( &::PyDictToKeyValues )
            , ( bp::arg("d"), bp::arg("name")=bp::object(), bp::arg("keys_sorted")=(bool)(false) )
            , bp::return_value_policy< bp::return_by_value >() );
    
    }

    { //::PyKeyValuesToDict
    
        typedef ::boost::python::dict ( *KeyValuesToDict_function_type )( ::KeyValues const * );
        
        bp::def( 
            "KeyValuesToDict"
            , KeyValuesToDict_function_type( &::PyKeyValuesToDict )
            , ( bp::arg("pKV") ) );
    
    }

    { //::PyKeyValuesToDictFromFile
    
        typedef ::boost::python::api::object ( *KeyValuesToDictFromFile_function_type )( char const * );
        
        bp::def( 
            "KeyValuesToDictFromFile"
            , KeyValuesToDictFromFile_function_type( &::PyKeyValuesToDictFromFile )
            , ( bp::arg("pFileName") ) );
    
    }

    { //::PyReadKeyValuesFromFile
    
        typedef ::boost::python::api::object ( *ReadKeyValuesFromFile_function_type )( char const *,char const * );
        
        bp::def( 
            "ReadKeyValuesFromFile"
            , ReadKeyValuesFromFile_function_type( &::PyReadKeyValuesFromFile )
            , ( bp::arg("filename"), bp::arg("pathid")=bp::object() ) );
    
    }

    { //::PyWriteKeyValuesToFile
    
        typedef bool ( *WriteKeyValuesToFile_function_type )( ::KeyValues *,char const *,char const * );
        
        bp::def( 
            "WriteKeyValuesToFile"
            , WriteKeyValuesToFile_function_type( &::PyWriteKeyValuesToFile )
            , ( bp::arg("pKV"), bp::arg("filename"), bp::arg("pathid")=bp::object() ) );
    
    }

    { //::RegisterPerFrameMethod
    
        typedef void ( *RegisterPerFrameMethod_function_type )( ::boost::python::api::object );
        
        bp::def( 
            "RegisterPerFrameMethod"
            , RegisterPerFrameMethod_function_type( &::RegisterPerFrameMethod )
            , ( bp::arg("method") ) );
    
    }

    { //::RegisterTickMethod
    
        typedef void ( *RegisterTickMethod_function_type )( ::boost::python::api::object,float,bool,bool );
        
        bp::def( 
            "RegisterTickMethod"
            , RegisterTickMethod_function_type( &::RegisterTickMethod )
            , ( bp::arg("method"), bp::arg("ticksignal"), bp::arg("looped")=(bool)(true), bp::arg("userealtime")=(bool)(false) ) );
    
    }

    { //::SrcPyDevMsg
    
        typedef void ( *DevMsg_function_type )( int,char const * );
        
        bp::def( 
            "DevMsg"
            , DevMsg_function_type( &::SrcPyDevMsg )
            , ( bp::arg("level"), bp::arg("msg") ) );
    
    }

    { //::SrcPyMsg
    
        typedef void ( *Msg_function_type )( char const * );
        
        bp::def( 
            "Msg"
            , Msg_function_type( &::SrcPyMsg )
            , ( bp::arg("msg") ) );
    
    }

    { //::SrcPyWarning
    
        typedef void ( *PrintWarning_function_type )( char const * );
        
        bp::def( 
            "PrintWarning"
            , PrintWarning_function_type( &::SrcPyWarning )
            , ( bp::arg("msg") ) );
    
    }

    { //::UnregisterPerFrameMethod
    
        typedef void ( *UnregisterPerFrameMethod_function_type )( ::boost::python::api::object );
        
        bp::def( 
            "UnregisterPerFrameMethod"
            , UnregisterPerFrameMethod_function_type( &::UnregisterPerFrameMethod )
            , ( bp::arg("method") ) );
    
    }

    ptr_keyvalues_to_py_keyvalues();

    keyvalues_to_py_keyvalues();

    py_keyvalues_to_keyvalues();

    bp::to_python_converter<
    	string_t,
    	string_t_to_python_str>();

    python_str_to_string_t();

    wchar_t_to_python_str();

    ptr_wchar_t_to_python_str();

    python_str_to_wchar_t();

    python_unicode_to_ptr_const_wchar_t();

    { //::UnregisterTickMethod
    
        typedef void ( *UnregisterTickMethod_function_type )( ::boost::python::api::object );
        
        bp::def( 
            "UnregisterTickMethod"
            , UnregisterTickMethod_function_type( &::UnregisterTickMethod )
            , ( bp::arg("method") ) );
    
    }
}
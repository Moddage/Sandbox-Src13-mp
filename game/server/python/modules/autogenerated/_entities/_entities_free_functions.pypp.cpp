// This file has been generated by Py++.

#include "cbase.h"
// This file has been generated by Py++.

#include "cbase.h"
#include "npcevent.h"
#include "srcpy_entities.h"
#include "bone_setup.h"
#include "baseprojectile.h"
#include "basegrenade_shared.h"
#include "SkyCamera.h"
#include "ai_basenpc.h"
#include "modelentities.h"
#include "basetoggle.h"
#include "triggers.h"
#include "AI_Criteria.h"
#include "saverestore.h"
#include "saverestoretypes.h"
#include "vcollide_parse.h"
#include "iservervehicle.h"
#include "gib.h"
#include "spark.h"
#include "filters.h"
#include "EntityFlame.h"
#include "player_resource.h"
#include "props.h"
#include "physics_prop_ragdoll.h"
#include "nav_area.h"
#include "tier0/valve_minmax_off.h"
#include "srcpy.h"
#include "tier0/valve_minmax_on.h"
#include "tier0/memdbgon.h"
#include "_entities_free_functions.pypp.hpp"

namespace bp = boost::python;

void _entities_register_free_functions(){

    { //::CreateEntityByName
    
        typedef ::CBaseEntity * ( *CreateEntityByName_function_type )( char const *,int );
        
        bp::def( 
            "CreateEntityByName"
            , CreateEntityByName_function_type( &::CreateEntityByName )
            , ( bp::arg("className"), bp::arg("iForceEdictIndex")=(int)(-1) )
            , bp::return_value_policy< bp::return_by_value >() );
    
    }

    { //::CreateRagGib
    
        typedef ::CBaseEntity * ( *CreateRagGib_function_type )( char const *,::Vector const &,::QAngle const &,::Vector const &,float,bool );
        
        bp::def( 
            "CreateRagGib"
            , CreateRagGib_function_type( &::CreateRagGib )
            , ( bp::arg("szModel"), bp::arg("vecOrigin"), bp::arg("vecAngles"), bp::arg("vecForce"), bp::arg("flFadeTime")=0., bp::arg("bShouldIgnite")=(bool)(false) )
            , bp::return_value_policy< bp::return_by_value >() );
    
    }

    { //::DispatchSpawn
    
        typedef int ( *DispatchSpawn_function_type )( ::CBaseEntity * );
        
        bp::def( 
            "DispatchSpawn"
            , DispatchSpawn_function_type( &::DispatchSpawn )
            , ( bp::arg("pEntity") ) );
    
    }

    { //::DoSpark
    
        typedef void ( *DoSpark_function_type )( ::CBaseEntity *,::Vector const &,int,int,bool,::Vector const & );
        
        bp::def( 
            "DoSpark"
            , DoSpark_function_type( &::DoSpark )
            , ( bp::arg("ent"), bp::arg("location"), bp::arg("nMagnitude"), bp::arg("nTrailLength"), bp::arg("bPlaySound"), bp::arg("vecDir") ) );
    
    }

    { //::PropBreakablePrecacheAll
    
        typedef int ( *PropBreakablePrecacheAll_function_type )( ::string_t );
        
        bp::def( 
            "PropBreakablePrecacheAll"
            , PropBreakablePrecacheAll_function_type( &::PropBreakablePrecacheAll )
            , ( bp::arg("modelName") ) );
    
    }

    { //::RadiusDamage
    
        typedef void ( *RadiusDamage_function_type )( ::CTakeDamageInfo const &,::Vector const &,float,int,::CBaseEntity * );
        
        bp::def( 
            "RadiusDamage"
            , RadiusDamage_function_type( &::RadiusDamage )
            , ( bp::arg("info"), bp::arg("vecSrc"), bp::arg("flRadius"), bp::arg("iClassIgnore"), bp::arg("pEntityIgnore") ) );
    
    }

}


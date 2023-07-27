// This file has been generated by Py++.

#include "cbase.h"
#ifdef CLIENT_DLL
#include "vprof.h"

#include "tier0/valve_minmax_off.h"

#include "srcpy.h"

#include "tier0/valve_minmax_on.h"

#include "tier0/memdbgon.h"

namespace bp = boost::python;

BOOST_PYTHON_MODULE(vprof){
    bp::docstring_options doc_options( true, true, false );

    bp::class_< CVProfile >( "CVProfile", bp::init< >() )    
        .def( 
            "AtRoot"
            , (bool ( ::CVProfile::* )(  )const)( &::CVProfile::AtRoot ) )    
        .def( 
            "BudgetGroupNameToBudgetGroupID"
            , (int ( ::CVProfile::* )( ::tchar const * ))( &::CVProfile::BudgetGroupNameToBudgetGroupID )
            , ( bp::arg("pBudgetGroupName") ) )    
        .def( 
            "BudgetGroupNameToBudgetGroupID"
            , (int ( ::CVProfile::* )( ::tchar const *,int ))( &::CVProfile::BudgetGroupNameToBudgetGroupID )
            , ( bp::arg("pBudgetGroupName"), bp::arg("budgetFlagsToORIn") ) )    
        .def( 
            "BudgetGroupNameToBudgetGroupIDNoCreate"
            , (int ( ::CVProfile::* )( ::tchar const * ))( &::CVProfile::BudgetGroupNameToBudgetGroupIDNoCreate )
            , ( bp::arg("pBudgetGroupName") ) )    
        .def( 
            "DisableVTuneGroup"
            , (void ( ::CVProfile::* )(  ))( &::CVProfile::DisableVTuneGroup ) )    
        .def( 
            "EnableVTuneGroup"
            , (void ( ::CVProfile::* )( ::tchar const * ))( &::CVProfile::EnableVTuneGroup )
            , ( bp::arg("pGroupName") ) )    
        .def( 
            "EnterScope"
            , (void ( ::CVProfile::* )( ::tchar const *,int,::tchar const *,bool ))( &::CVProfile::EnterScope )
            , ( bp::arg("pszName"), bp::arg("detailLevel"), bp::arg("pBudgetGroupName"), bp::arg("bAssertAccounted") ) )    
        .def( 
            "EnterScope"
            , (void ( ::CVProfile::* )( ::tchar const *,int,::tchar const *,bool,int ))( &::CVProfile::EnterScope )
            , ( bp::arg("pszName"), bp::arg("detailLevel"), bp::arg("pBudgetGroupName"), bp::arg("bAssertAccounted"), bp::arg("budgetFlags") ) )    
        .def( 
            "ExitScope"
            , (void ( ::CVProfile::* )(  ))( &::CVProfile::ExitScope ) )    
        .def( 
            "GetBudgetGroupFlags"
            , (int ( ::CVProfile::* )( int )const)( &::CVProfile::GetBudgetGroupFlags )
            , ( bp::arg("budgetGroupID") ) )    
        .def( 
            "GetBudgetGroupName"
            , (::tchar const * ( ::CVProfile::* )( int ))( &::CVProfile::GetBudgetGroupName )
            , ( bp::arg("budgetGroupID") ) )    
        .def( 
            "GetCounterGroup"
            , (::CounterGroup_t ( ::CVProfile::* )( int )const)( &::CVProfile::GetCounterGroup )
            , ( bp::arg("index") ) )    
        .def( 
            "GetCounterName"
            , (::tchar const * ( ::CVProfile::* )( int )const)( &::CVProfile::GetCounterName )
            , ( bp::arg("index") ) )    
        .def( 
            "GetCounterValue"
            , (int ( ::CVProfile::* )( int )const)( &::CVProfile::GetCounterValue )
            , ( bp::arg("index") ) )    
        .def( 
            "GetDetailLevel"
            , (int ( ::CVProfile::* )(  )const)( &::CVProfile::GetDetailLevel ) )    
        .def( 
            "GetNumBudgetGroups"
            , (int ( ::CVProfile::* )(  ))( &::CVProfile::GetNumBudgetGroups ) )    
        .def( 
            "GetNumCounters"
            , (int ( ::CVProfile::* )(  )const)( &::CVProfile::GetNumCounters ) )    
        .def( 
            "GetPeakFrameTime"
            , (double ( ::CVProfile::* )(  ))( &::CVProfile::GetPeakFrameTime ) )    
        .def( 
            "GetTargetThreadId"
            , (unsigned int ( ::CVProfile::* )(  ))( &::CVProfile::GetTargetThreadId ) )    
        .def( 
            "GetTimeLastFrame"
            , (double ( ::CVProfile::* )(  ))( &::CVProfile::GetTimeLastFrame ) )    
        .def( 
            "GetTotalTimeSampled"
            , (double ( ::CVProfile::* )(  ))( &::CVProfile::GetTotalTimeSampled ) )    
        .def( 
            "HideBudgetGroup"
            , (void ( ::CVProfile::* )( int,bool ))( &::CVProfile::HideBudgetGroup )
            , ( bp::arg("budgetGroupID"), bp::arg("bHide")=(bool)(true) ) )    
        .def( 
            "HideBudgetGroup"
            , (void ( ::CVProfile::* )( char const *,bool ))( &::CVProfile::HideBudgetGroup )
            , ( bp::arg("pszName"), bp::arg("bHide")=(bool)(true) ) )    
        .def( 
            "InTargetThread"
            , (bool ( ::CVProfile::* )(  ))( &::CVProfile::InTargetThread ) )    
        .def( 
            "IsEnabled"
            , (bool ( ::CVProfile::* )(  )const)( &::CVProfile::IsEnabled ) )    
        .def( 
            "MarkFrame"
            , (void ( ::CVProfile::* )(  ))( &::CVProfile::MarkFrame ) )    
        .def( 
            "NumFramesSampled"
            , (int ( ::CVProfile::* )(  ))( &::CVProfile::NumFramesSampled ) )    
        .def( 
            "OutputReport"
            , (void ( ::CVProfile::* )( int,::tchar const *,int ))( &::CVProfile::OutputReport )
            , ( bp::arg("type")=int(::VProfReportType_t::VPRT_FULL), bp::arg("pszStartNode")=bp::object(), bp::arg("budgetGroupID")=(int)(-1) ) )    
        .def( 
            "PMEEnable"
            , (void ( ::CVProfile::* )( bool ))( &::CVProfile::PMEEnable )
            , ( bp::arg("bEnable") ) )    
        .def( 
            "PMEInitialized"
            , (void ( ::CVProfile::* )( bool ))( &::CVProfile::PMEInitialized )
            , ( bp::arg("bInit") ) )    
        .def( 
            "Pause"
            , (void ( ::CVProfile::* )(  ))( &::CVProfile::Pause ) )    
        .def( 
            "PopGroup"
            , (void ( ::CVProfile::* )(  ))( &::CVProfile::PopGroup ) )    
        .def( 
            "PushGroup"
            , (void ( ::CVProfile::* )( int ))( &::CVProfile::PushGroup )
            , ( bp::arg("nGroupID") ) )    
        .def( 
            "Reset"
            , (void ( ::CVProfile::* )(  ))( &::CVProfile::Reset ) )    
        .def( 
            "ResetCounters"
            , (void ( ::CVProfile::* )( ::CounterGroup_t ))( &::CVProfile::ResetCounters )
            , ( bp::arg("eCounterGroup") ) )    
        .def( 
            "ResetPeaks"
            , (void ( ::CVProfile::* )(  ))( &::CVProfile::ResetPeaks ) )    
        .def( 
            "Resume"
            , (void ( ::CVProfile::* )(  ))( &::CVProfile::Resume ) )    
        .def( 
            "SetTargetThreadId"
            , (void ( ::CVProfile::* )( unsigned int ))( &::CVProfile::SetTargetThreadId )
            , ( bp::arg("id") ) )    
        .def( 
            "Start"
            , (void ( ::CVProfile::* )(  ))( &::CVProfile::Start ) )    
        .def( 
            "Stop"
            , (void ( ::CVProfile::* )(  ))( &::CVProfile::Stop ) )    
        .def( 
            "Term"
            , (void ( ::CVProfile::* )(  ))( &::CVProfile::Term ) )    
        .def( 
            "UsePME"
            , (bool ( ::CVProfile::* )(  ))( &::CVProfile::UsePME ) );

    bp::scope().attr("vprofcurrentprofilee") = bp::object( boost::ref( g_VProfCurrentProfile ) );
}
#else
#include "vprof.h"

#include "tier0/valve_minmax_off.h"

#include "srcpy.h"

#include "tier0/valve_minmax_on.h"

#include "tier0/memdbgon.h"

namespace bp = boost::python;

BOOST_PYTHON_MODULE(vprof){
    bp::docstring_options doc_options( true, true, false );

    bp::class_< CVProfile >( "CVProfile", bp::init< >() )    
        .def( 
            "AtRoot"
            , (bool ( ::CVProfile::* )(  )const)( &::CVProfile::AtRoot ) )    
        .def( 
            "BudgetGroupNameToBudgetGroupID"
            , (int ( ::CVProfile::* )( ::tchar const * ))( &::CVProfile::BudgetGroupNameToBudgetGroupID )
            , ( bp::arg("pBudgetGroupName") ) )    
        .def( 
            "BudgetGroupNameToBudgetGroupID"
            , (int ( ::CVProfile::* )( ::tchar const *,int ))( &::CVProfile::BudgetGroupNameToBudgetGroupID )
            , ( bp::arg("pBudgetGroupName"), bp::arg("budgetFlagsToORIn") ) )    
        .def( 
            "BudgetGroupNameToBudgetGroupIDNoCreate"
            , (int ( ::CVProfile::* )( ::tchar const * ))( &::CVProfile::BudgetGroupNameToBudgetGroupIDNoCreate )
            , ( bp::arg("pBudgetGroupName") ) )    
        .def( 
            "DisableVTuneGroup"
            , (void ( ::CVProfile::* )(  ))( &::CVProfile::DisableVTuneGroup ) )    
        .def( 
            "EnableVTuneGroup"
            , (void ( ::CVProfile::* )( ::tchar const * ))( &::CVProfile::EnableVTuneGroup )
            , ( bp::arg("pGroupName") ) )    
        .def( 
            "EnterScope"
            , (void ( ::CVProfile::* )( ::tchar const *,int,::tchar const *,bool ))( &::CVProfile::EnterScope )
            , ( bp::arg("pszName"), bp::arg("detailLevel"), bp::arg("pBudgetGroupName"), bp::arg("bAssertAccounted") ) )    
        .def( 
            "EnterScope"
            , (void ( ::CVProfile::* )( ::tchar const *,int,::tchar const *,bool,int ))( &::CVProfile::EnterScope )
            , ( bp::arg("pszName"), bp::arg("detailLevel"), bp::arg("pBudgetGroupName"), bp::arg("bAssertAccounted"), bp::arg("budgetFlags") ) )    
        .def( 
            "ExitScope"
            , (void ( ::CVProfile::* )(  ))( &::CVProfile::ExitScope ) )    
        .def( 
            "GetBudgetGroupFlags"
            , (int ( ::CVProfile::* )( int )const)( &::CVProfile::GetBudgetGroupFlags )
            , ( bp::arg("budgetGroupID") ) )    
        .def( 
            "GetBudgetGroupName"
            , (::tchar const * ( ::CVProfile::* )( int ))( &::CVProfile::GetBudgetGroupName )
            , ( bp::arg("budgetGroupID") ) )    
        .def( 
            "GetCounterGroup"
            , (::CounterGroup_t ( ::CVProfile::* )( int )const)( &::CVProfile::GetCounterGroup )
            , ( bp::arg("index") ) )    
        .def( 
            "GetCounterName"
            , (::tchar const * ( ::CVProfile::* )( int )const)( &::CVProfile::GetCounterName )
            , ( bp::arg("index") ) )    
        .def( 
            "GetCounterValue"
            , (int ( ::CVProfile::* )( int )const)( &::CVProfile::GetCounterValue )
            , ( bp::arg("index") ) )    
        .def( 
            "GetDetailLevel"
            , (int ( ::CVProfile::* )(  )const)( &::CVProfile::GetDetailLevel ) )    
        .def( 
            "GetNumBudgetGroups"
            , (int ( ::CVProfile::* )(  ))( &::CVProfile::GetNumBudgetGroups ) )    
        .def( 
            "GetNumCounters"
            , (int ( ::CVProfile::* )(  )const)( &::CVProfile::GetNumCounters ) )    
        .def( 
            "GetPeakFrameTime"
            , (double ( ::CVProfile::* )(  ))( &::CVProfile::GetPeakFrameTime ) )    
        .def( 
            "GetTargetThreadId"
            , (unsigned int ( ::CVProfile::* )(  ))( &::CVProfile::GetTargetThreadId ) )    
        .def( 
            "GetTimeLastFrame"
            , (double ( ::CVProfile::* )(  ))( &::CVProfile::GetTimeLastFrame ) )    
        .def( 
            "GetTotalTimeSampled"
            , (double ( ::CVProfile::* )(  ))( &::CVProfile::GetTotalTimeSampled ) )    
        .def( 
            "HideBudgetGroup"
            , (void ( ::CVProfile::* )( int,bool ))( &::CVProfile::HideBudgetGroup )
            , ( bp::arg("budgetGroupID"), bp::arg("bHide")=(bool)(true) ) )    
        .def( 
            "HideBudgetGroup"
            , (void ( ::CVProfile::* )( char const *,bool ))( &::CVProfile::HideBudgetGroup )
            , ( bp::arg("pszName"), bp::arg("bHide")=(bool)(true) ) )    
        .def( 
            "InTargetThread"
            , (bool ( ::CVProfile::* )(  ))( &::CVProfile::InTargetThread ) )    
        .def( 
            "IsEnabled"
            , (bool ( ::CVProfile::* )(  )const)( &::CVProfile::IsEnabled ) )    
        .def( 
            "MarkFrame"
            , (void ( ::CVProfile::* )(  ))( &::CVProfile::MarkFrame ) )    
        .def( 
            "NumFramesSampled"
            , (int ( ::CVProfile::* )(  ))( &::CVProfile::NumFramesSampled ) )    
        .def( 
            "OutputReport"
            , (void ( ::CVProfile::* )( int,::tchar const *,int ))( &::CVProfile::OutputReport )
            , ( bp::arg("type")=int(::VProfReportType_t::VPRT_FULL), bp::arg("pszStartNode")=bp::object(), bp::arg("budgetGroupID")=(int)(-1) ) )    
        .def( 
            "PMEEnable"
            , (void ( ::CVProfile::* )( bool ))( &::CVProfile::PMEEnable )
            , ( bp::arg("bEnable") ) )    
        .def( 
            "PMEInitialized"
            , (void ( ::CVProfile::* )( bool ))( &::CVProfile::PMEInitialized )
            , ( bp::arg("bInit") ) )    
        .def( 
            "Pause"
            , (void ( ::CVProfile::* )(  ))( &::CVProfile::Pause ) )    
        .def( 
            "PopGroup"
            , (void ( ::CVProfile::* )(  ))( &::CVProfile::PopGroup ) )    
        .def( 
            "PushGroup"
            , (void ( ::CVProfile::* )( int ))( &::CVProfile::PushGroup )
            , ( bp::arg("nGroupID") ) )    
        .def( 
            "Reset"
            , (void ( ::CVProfile::* )(  ))( &::CVProfile::Reset ) )    
        .def( 
            "ResetCounters"
            , (void ( ::CVProfile::* )( ::CounterGroup_t ))( &::CVProfile::ResetCounters )
            , ( bp::arg("eCounterGroup") ) )    
        .def( 
            "ResetPeaks"
            , (void ( ::CVProfile::* )(  ))( &::CVProfile::ResetPeaks ) )    
        .def( 
            "Resume"
            , (void ( ::CVProfile::* )(  ))( &::CVProfile::Resume ) )    
        .def( 
            "SetTargetThreadId"
            , (void ( ::CVProfile::* )( unsigned int ))( &::CVProfile::SetTargetThreadId )
            , ( bp::arg("id") ) )    
        .def( 
            "Start"
            , (void ( ::CVProfile::* )(  ))( &::CVProfile::Start ) )    
        .def( 
            "Stop"
            , (void ( ::CVProfile::* )(  ))( &::CVProfile::Stop ) )    
        .def( 
            "Term"
            , (void ( ::CVProfile::* )(  ))( &::CVProfile::Term ) )    
        .def( 
            "UsePME"
            , (bool ( ::CVProfile::* )(  ))( &::CVProfile::UsePME ) );

    bp::scope().attr("vprofcurrentprofilee") = bp::object( boost::ref( g_VProfCurrentProfile ) );
}
#endif


//====== Copyright � Sandern Corporation, All rights reserved. ===========//
//
// Purpose: Safely wrap boost/python.hpp for usage in source engine code
//
// $NoKeywords: $
//=============================================================================//

#ifndef VGUI_BOOST_PYTHON_H
#define VGUI_BOOST_PYTHON_H
#ifdef _WIN32
#pragma once
#endif

#include "tier0/valve_minmax_off.h"

#if defined(_WIN32)
// Ignore warnings in pyhash.h about "default constructor could not be generated"
#pragma warning(disable:4510)
#pragma warning(disable:4610)
#endif // _WIN32

#include <boost/python.hpp>

//#include "minmax.h"
#ifndef min
#define min(a,b)  (((a) < (b)) ? (a) : (b))
#endif
#ifndef max
#define max(a,b)  (((a) > (b)) ? (a) : (b))
#endif

#ifdef _DEBUG
	// boost redefines _DEBUG to an empty define
	// This will result in a compile error when doing "#if _DEBUG"
	#undef _DEBUG
	#define _DEBUG 1
#endif // _DEBUG

#endif // VGUI_BOOST_PYTHON_H

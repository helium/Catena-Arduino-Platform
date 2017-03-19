/* CatenaSamd21.cpp	Sun Mar 19 2017 17:17:58 tmm */

/*

Module:  CatenaSamd21.cpp

Function:
	Miscellaneous methods for CatenaSamd21.

Version:
	V0.5.0	Sun Mar 19 2017 17:17:58 tmm	Edit level 1

Copyright notice:
	This file copyright (C) 2017 by

		MCCI Corporation
		3520 Krums Corners Road
		Ithaca, NY  14850

	An unpublished work.  All rights reserved.
	
	This file is proprietary information, and may not be disclosed or
	copied without the prior permission of MCCI Corporation.
 
Author:
	Terry Moore, MCCI Corporation	March 2017

Revision history:
   0.5.0  Sun Mar 19 2017 17:17:58  tmm
	Module created.

*/

#include "CatenaSamd21.h"

using namespace McciCatena;

/* public virtual */
bool
CatenaSamd21::cSerialReady::isReady() const
	{
	return (!! ::Serial);
	}

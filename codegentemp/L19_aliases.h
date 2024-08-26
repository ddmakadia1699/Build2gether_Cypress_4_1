/*******************************************************************************
* File Name: L19.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_L19_ALIASES_H) /* Pins L19_ALIASES_H */
#define CY_PINS_L19_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define L19_0			(L19__0__PC)
#define L19_0_PS		(L19__0__PS)
#define L19_0_PC		(L19__0__PC)
#define L19_0_DR		(L19__0__DR)
#define L19_0_SHIFT	(L19__0__SHIFT)
#define L19_0_INTR	((uint16)((uint16)0x0003u << (L19__0__SHIFT*2u)))

#define L19_INTR_ALL	 ((uint16)(L19_0_INTR))


#endif /* End Pins L19_ALIASES_H */


/* [] END OF FILE */

/** @file     Rte_Type.h
  * 
  * @brief    RTE type definitions
  * 
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  * 
  * @note     Generated by ETAS GmbH  RTA-RTE v5.8.4  (R4.0 backend version: v7.8.7 (Build 46772))
  */

#ifndef RTE_TYPE_H
#define RTE_TYPE_H

#include "Rte.h"
#include "Rte_Cfg.h"

/*******************************************************
 ***
 *** Forward Declarations
 ***
 *******************************************************/

struct Rte_CDS_ECU_ABS;
struct Rte_CDS_Sensor_comp;
struct Rte_CDS_Status_printf;

/*******************************************************
 ***
 *** Types
 ***
 *******************************************************/

/* Information: No typedef for ImplementationDataType boolean because the SwBaseType.nativeDeclaration is empty. */

/* Information: No typedef for ImplementationDataType float32 because the SwBaseType.nativeDeclaration is empty. */

/* Information: No typedef for ImplementationDataType float64 because the SwBaseType.nativeDeclaration is empty. */

/* Information: No typedef for ImplementationDataType sint16 because the SwBaseType.nativeDeclaration is empty. */

/* Information: No typedef for ImplementationDataType sint32 because the SwBaseType.nativeDeclaration is empty. */

/* Information: No typedef for ImplementationDataType sint64 because the SwBaseType.nativeDeclaration is empty. */

/* Information: No typedef for ImplementationDataType sint8 because the SwBaseType.nativeDeclaration is empty. */

/* Information: No typedef for ImplementationDataType uint32 because the SwBaseType.nativeDeclaration is empty. */

/* Information: No typedef for ImplementationDataType uint64 because the SwBaseType.nativeDeclaration is empty. */

/* Information: No typedef for ImplementationDataType uint8 because the SwBaseType.nativeDeclaration is empty. */

typedef struct {
   uint8           cs_data;
   Rte_QCmnRefType clientQueue;
} Rte_CPT_ECU_ABS_P_toSensor_cs_toSensor_QEType;

typedef struct {
   uint8 cs_data;
} Rte_CPT_ECU_ABS_P_toSensor_cs_toSensor_RtnQEType;

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Sensor_comp_CS_IF_toSensor_cs_toSensor) (VAR(uint8, AUTOMATIC) cs_data);

typedef P2FUNC(VAR(uint8, AUTOMATIC), RTE_CODE, Rte_DReadFP_Status_printf_SR_IF_toStatus_sr_toStatus) (void);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_ResultFP_Sensor_comp_CS_IF_toSensor_cs_toSensor) (CONSTP2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) cs_data);

typedef CONSTP2CONST(struct Rte_CDS_ECU_ABS,AUTOMATIC,RTE_CONST) Rte_SelfType_ECU_ABS;

typedef CONSTP2CONST(struct Rte_CDS_Sensor_comp,AUTOMATIC,RTE_CONST) Rte_SelfType_Sensor_comp;

typedef CONSTP2CONST(struct Rte_CDS_Status_printf,AUTOMATIC,RTE_CONST) Rte_SelfType_Status_printf;

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_WriteFP_Sensor_comp_SR_IF_toStatus_sr_toStatus) (VAR(uint8, AUTOMATIC) data);

#endif /* !RTE_TYPE_H */

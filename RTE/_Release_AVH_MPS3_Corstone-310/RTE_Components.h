/*
 * CSOLUTION generated file: DO NOT EDIT!
 * Generated by: csolution version 2.0.0-dev3
 *
 * Project: 'microspeech.Release+AVH_MPS3_Corstone-310' 
 * Target:  'Release+AVH_MPS3_Corstone-310' 
 */

#ifndef RTE_COMPONENTS_H
#define RTE_COMPONENTS_H


/*
 * Define the Device Header File: 
 */
#define CMSIS_device_header "SSE310MPS3.h"

/* ARM::CMSIS Driver:USART:1.0.0 */
#define RTE_Drivers_USART
/* ARM::CMSIS-View:Event Recorder:Semihosting:1.5.2 */
#define RTE_CMSIS_View_EventRecorder
        #define RTE_CMSIS_View_EventRecorder_DAP
        #define RTE_CMSIS_View_EventRecorder_Semihosting
/* ARM::CMSIS:RTOS2:Keil RTX5:Source:5.5.4 */
#define RTE_CMSIS_RTOS2                 /* CMSIS-RTOS2 */
        #define RTE_CMSIS_RTOS2_RTX5            /* CMSIS-RTOS2 Keil RTX5 */
        #define RTE_CMSIS_RTOS2_RTX5_SOURCE     /* CMSIS-RTOS2 Keil RTX5 Source */
/* Keil::CMSIS Driver:Ethernet:ETH_LAN91C111:1.0.0 */
#define RTE_Drivers_ETH_LAN91C111       /* Driver ETH_LAN91C111 */
/* tensorflow::Data Exchange:Serialization:flatbuffers:tensorflow:1.22.5-rc4 */
#define RTE_DataExchange_Serialization_flatbuffers     /* flatbuffers */
/* tensorflow::Data Processing:Math:gemmlowp fixed-point:tensorflow:1.22.5-rc4 */
#define RTE_DataExchange_Math_gemmlowp     /* gemmlowp */
/* tensorflow::Data Processing:Math:kissfft:tensorflow:1.22.5-rc4 */
#define RTE_DataExchange_Math_kissfft     /* kissfft */
/* tensorflow::Data Processing:Math:ruy:tensorflow:1.22.5-rc4 */
#define RTE_DataProcessing_Math_ruy     /* ruy */
/* tensorflow::Machine Learning:TensorFlow:Kernel:CMSIS-NN:1.22.5-rc4 */
#define RTE_ML_TF_LITE     /* TF */


#endif /* RTE_COMPONENTS_H */

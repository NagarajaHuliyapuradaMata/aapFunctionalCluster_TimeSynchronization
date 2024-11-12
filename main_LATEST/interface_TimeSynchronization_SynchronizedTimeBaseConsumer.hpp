#pragma once
/******************************************************************************/
/* File   : interface_TimeSynchronization_SynchronizedTimeBaseConsumer.hpp    */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef uint8 SynchronizedTimeBaseStatus;

class interface_TimeSynchronization_SynchronizedTimeBaseConsumer{
   public:
/*
      virtual void                       GetCurrentTime                               (void) = 0;
*/
      virtual void                       GetRateDeviation                             (void) = 0;
      virtual SynchronizedTimeBaseStatus GetTimeWithStatus                            (void) = 0;
      virtual void                       RegisterStatusChangeNotifier                 (void) = 0;
      virtual void                       RegisterSynchronizationStateChangeNotifier   (void) = 0;
      virtual void                       RegisterTimeLeapNotifier                     (void) = 0;
      virtual void                       RegisterTimePrecisionMeasurementNotifier     (void) = 0;
/*
      virtual void                       RegisterTimeValidationNotification           (void) = 0;
*/
      virtual void                       UnregisterStatusChangeNotifier               (void) = 0;
      virtual void                       UnregisterSynchronizationStateChangeNotifier (void) = 0;
      virtual void                       UnregisterTimeLeapNotifier                   (void) = 0;
      virtual void                       UnregisterTimePrecisionMeasurementNotifier   (void) = 0;
/*
      virtual void                       UnregisterTimeValidationNotification         (void) = 0;
*/
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

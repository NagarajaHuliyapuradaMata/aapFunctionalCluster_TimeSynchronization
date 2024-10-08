/******************************************************************************/
/* File   : aapFunctionalCluster_TimeSynchronization.cpp                      */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "interface_TimeSynchronization_SynchronizedTimeBaseProvider.hpp"
#include "interface_TimeSynchronization_OffsetTimeBaseProvider.hpp"
#include "interface_TimeSynchronization_SynchronizedTimeBaseConsumer.hpp"
#include "interface_TimeSynchronization_SynchronizedTimeBaseStatus.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class aapFunctionalCluster_TimeSynchronization:
      public interface_TimeSynchronization_SynchronizedTimeBaseProvider
   ,  public interface_TimeSynchronization_OffsetTimeBaseProvider
   ,  public interface_TimeSynchronization_SynchronizedTimeBaseConsumer
   ,  public interface_TimeSynchronization_SynchronizedTimeBaseStatus
{
   public:
      void                       GetCurrentTime                               (void);
      void                       GetRateCorrection                            (void);
      void                       GetUserData                                  (void);
      void                       RegisterTimeValidationNotification           (void);
      void                       SetRateCorrection                            (void);
      void                       SetTime                                      (void);
      void                       SetUserData                                  (void);
      void                       UnregisterTimeValidationNotification         (void);
      void                       UpdateTime                                   (void);
/*
      void                       GetCurrentTime                               (void);
      void                       GetRateCorrection                            (void);
      void                       GetUserData                                  (void);
      void                       RegisterTimeValidationNotification           (void);
*/
      void                       SetOffsetTime                                (void);
/*
      void                       SetRateCorrection                            (void);
      void                       SetUserData                                  (void);
      void                       UnregisterTimeValidationNotification         (void);
*/
/*
      void                       GetCurrentTime                               (void);
*/
      void                       GetRateDeviation                             (void);
      SynchronizedTimeBaseStatus GetTimeWithStatus                            (void);
      void                       RegisterStatusChangeNotifier                 (void);
      void                       RegisterSynchronizationStateChangeNotifier   (void);
      void                       RegisterTimeLeapNotifier                     (void);
      void                       RegisterTimePrecisionMeasurementNotifier     (void);
/*
      void                       RegisterTimeValidationNotification           (void);
*/
      void                       UnregisterStatusChangeNotifier               (void);
      void                       UnregisterSynchronizationStateChangeNotifier (void);
      void                       UnregisterTimeLeapNotifier                   (void);
      void                       UnregisterTimePrecisionMeasurementNotifier   (void);
/*
      void                       UnregisterTimeValidationNotification         (void);
*/

      void                       GetCreationTime                              (void);
      void                       GetLeapJump                                  (void);
      void                       GetSynchronizationStatus                     (void);
/*
      void                       GetUserData                                  (void);
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
void aapFunctionalCluster_TimeSynchronization::GetCurrentTime(void){
}

void aapFunctionalCluster_TimeSynchronization::GetRateCorrection(void){
}

void aapFunctionalCluster_TimeSynchronization::GetUserData(void){
}

void aapFunctionalCluster_TimeSynchronization::RegisterTimeValidationNotification(void){
}

void aapFunctionalCluster_TimeSynchronization::SetRateCorrection(void){
}

void aapFunctionalCluster_TimeSynchronization::SetTime(void){
}

void aapFunctionalCluster_TimeSynchronization::SetUserData(void){
}

void aapFunctionalCluster_TimeSynchronization::UnregisterTimeValidationNotification(void){
}

void aapFunctionalCluster_TimeSynchronization::UpdateTime(void){
}

/*
void aapFunctionalCluster_TimeSynchronization::GetCurrentTime(void){
}

void aapFunctionalCluster_TimeSynchronization::GetRateCorrection(void){
}

void aapFunctionalCluster_TimeSynchronization::GetUserData(void){
}

void aapFunctionalCluster_TimeSynchronization::RegisterTimeValidationNotification(void){
}
*/

void aapFunctionalCluster_TimeSynchronization::SetOffsetTime(void){
}

/*
void aapFunctionalCluster_TimeSynchronization::SetRateCorrection(void){
}

void aapFunctionalCluster_TimeSynchronization::SetUserData(void){
}

void aapFunctionalCluster_TimeSynchronization::UnregisterTimeValidationNotification(void){
}
*/

/*
void aapFunctionalCluster_TimeSynchronization::GetCurrentTime(void){}
*/

void aapFunctionalCluster_TimeSynchronization::GetRateDeviation(void){
}

SynchronizedTimeBaseStatus aapFunctionalCluster_TimeSynchronization::GetTimeWithStatus(void){
   return 0;
}

void aapFunctionalCluster_TimeSynchronization::RegisterStatusChangeNotifier(void){
}

void aapFunctionalCluster_TimeSynchronization::RegisterSynchronizationStateChangeNotifier(void){
}

void aapFunctionalCluster_TimeSynchronization::RegisterTimeLeapNotifier(void){
}

void aapFunctionalCluster_TimeSynchronization::RegisterTimePrecisionMeasurementNotifier(void){
}

/*
void aapFunctionalCluster_TimeSynchronization::RegisterTimeValidationNotification(void){
}
*/

void aapFunctionalCluster_TimeSynchronization::UnregisterStatusChangeNotifier(void){
}

void aapFunctionalCluster_TimeSynchronization::UnregisterSynchronizationStateChangeNotifier(void){
}

void aapFunctionalCluster_TimeSynchronization::UnregisterTimeLeapNotifier(void){
}

void aapFunctionalCluster_TimeSynchronization::UnregisterTimePrecisionMeasurementNotifier(void){
}

/*
void aapFunctionalCluster_TimeSynchronization::UnregisterTimeValidationNotification(void){
}
*/

void aapFunctionalCluster_TimeSynchronization::GetCreationTime(void){
}

void aapFunctionalCluster_TimeSynchronization::GetLeapJump(void){
}

void aapFunctionalCluster_TimeSynchronization::GetSynchronizationStatus(void){
}

/*
void aapFunctionalCluster_TimeSynchronization::GetUserData(void){
}
*/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

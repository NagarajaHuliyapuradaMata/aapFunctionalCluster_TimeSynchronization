#pragma once
/******************************************************************************/
/* File   : interface_TimeSynchronization_OffsetTimeBaseProvider.hpp          */
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
class interface_TimeSynchronization_OffsetTimeBaseProvider{
   public:
/*
      virtual void GetCurrentTime                       (void) = 0;
      virtual void GetRateCorrection                    (void) = 0;
      virtual void GetUserData                          (void) = 0;
      virtual void RegisterTimeValidationNotification   (void) = 0;
*/
      virtual void SetOffsetTime                        (void) = 0;
/*
      virtual void SetRateCorrection                    (void) = 0;
      virtual void SetUserData                          (void) = 0;
      virtual void UnregisterTimeValidationNotification (void) = 0;
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

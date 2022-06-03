/*
 * Code generation for system model 'DZ_DSMC'
 * For more details, see corresponding source file DZ_DSMC.c
 *
 */

#ifndef RTW_HEADER_DZ_DSMC_h_
#define RTW_HEADER_DZ_DSMC_h_
#include <cmath>
#include <cstring>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "DZ_DSMC_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "model_reference_types.h"

/* Child system includes */
#include "Motor_and_Driver.h"
#include "rt_nonfinite.h"

/* Block signals for model 'DZ_DSMC' */
struct B_DZ_DSMC_T {
  real32_T UnitDelay;                  /* '<Root>/Unit Delay' */
  real32_T Gain3;                      /* '<S3>/Gain3' */
  real32_T Angle;                      /* '<S3>/Model' */
  real32_T Speed;                      /* '<S3>/Model' */
  real32_T Current;                    /* '<S3>/Model' */
  real32_T Angle_g;                    /* '<S3>/Model' */
  real32_T Speed_e;                    /* '<S3>/Model' */
  real32_T Torque;                     /* '<S3>/Model' */
};

/* Block states (default storage) for model 'DZ_DSMC' */
struct DW_DZ_DSMC_T {
  real_T k;                            /* '<Root>/MATLAB Function5' */
  real32_T UnitDelay_DSTATE;           /* '<Root>/Unit Delay' */
  real32_T TappedDelay_X[10];          /* '<Root>/Tapped Delay' */
  real32_T UnitDelay1_DSTATE[2];       /* '<S3>/Unit Delay1' */
  real32_T RateTransition1_Buffer[2];  /* '<S3>/Rate Transition1' */
};

/* Parameters (default storage) */
struct P_DZ_DSMC_T_ {
  real32_T MATLABFunction5_C[2];       /* Mask Parameter: MATLABFunction5_C
                                        * Referenced by: '<Root>/MATLAB Function5'
                                        */
  real32_T MATLABFunction5_Gam[2];     /* Mask Parameter: MATLABFunction5_Gam
                                        * Referenced by: '<Root>/MATLAB Function5'
                                        */
  real32_T MATLABFunction5_Phi[4];     /* Mask Parameter: MATLABFunction5_Phi
                                        * Referenced by: '<Root>/MATLAB Function5'
                                        */
  real32_T MATLABFunction5_Ts;         /* Mask Parameter: MATLABFunction5_Ts
                                        * Referenced by: '<Root>/MATLAB Function5'
                                        */
  real32_T MATLABFunction5_del;        /* Mask Parameter: MATLABFunction5_del
                                        * Referenced by: '<Root>/MATLAB Function5'
                                        */
  real32_T MATLABFunction5_eta;        /* Mask Parameter: MATLABFunction5_eta
                                        * Referenced by: '<Root>/MATLAB Function5'
                                        */
  real32_T MATLABFunction5_qT;         /* Mask Parameter: MATLABFunction5_qT
                                        * Referenced by: '<Root>/MATLAB Function5'
                                        */
  real32_T TappedDelay_vinit;          /* Mask Parameter: TappedDelay_vinit
                                        * Referenced by: '<Root>/Tapped Delay'
                                        */
  real32_T MATLABFunction5_vphi;       /* Mask Parameter: MATLABFunction5_vphi
                                        * Referenced by: '<Root>/MATLAB Function5'
                                        */
  real32_T MATLABFunction5_xiT;        /* Mask Parameter: MATLABFunction5_xiT
                                        * Referenced by: '<Root>/MATLAB Function5'
                                        */
  uint8_T MATLABFunction5_gamm;        /* Mask Parameter: MATLABFunction5_gamm
                                        * Referenced by: '<Root>/MATLAB Function5'
                                        */
  uint8_T MATLABFunction5_n;           /* Mask Parameter: MATLABFunction5_n
                                        * Referenced by: '<Root>/MATLAB Function5'
                                        */
  real32_T UnitDelay_InitialCondition;
                               /* Computed Parameter: UnitDelay_InitialCondition
                                * Referenced by: '<Root>/Unit Delay'
                                */
  real32_T UnitDelay1_InitialCondition;
                              /* Computed Parameter: UnitDelay1_InitialCondition
                               * Referenced by: '<S3>/Unit Delay1'
                               */
  real32_T CGamma_Gain;                /* Expression: single(C*Gam)
                                        * Referenced by: '<Root>/C*Gamma'
                                        */
  real32_T CPhi_Gain[2];               /* Expression: single(C*Phi)
                                        * Referenced by: '<Root>/C*Phi'
                                        */
  real32_T Gain2_Gain;                 /* Expression: single(30/pi)
                                        * Referenced by: '<S3>/Gain2'
                                        */
  real32_T Gain3_Gain;                 /* Expression: single(pi/30)
                                        * Referenced by: '<S3>/Gain3'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_DZ_DSMC_T {
  const char_T **errorStatus;
  const rtTimingBridge *timingBridge;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    int_T mdlref_GlobalTID[5];
  } Timing;
};

/* Model block global parameters (default storage) */
extern real_T rtP_x520886_ICont;       /* Variable: x520886_ICont
                                        * Referenced by: '<S3>/Model'
                                        */
extern real_T rtP_x607325_RotIner;     /* Variable: x607325_RotIner
                                        * Referenced by: '<S3>/Model'
                                        */
extern real_T rtP_x607325_RotOmgMax;   /* Variable: x607325_RotOmgMax
                                        * Referenced by: '<S3>/Model'
                                        */
extern real_T rtP_x607325_Torq;        /* Variable: x607325_Torq
                                        * Referenced by: '<S3>/Model'
                                        */
extern real_T rtP_x607325_TorqConst;   /* Variable: x607325_TorqConst
                                        * Referenced by: '<S3>/Model'
                                        */
extern real_T rtP_x607325_VNom;        /* Variable: x607325_VNom
                                        * Referenced by: '<S3>/Model'
                                        */
extern real32_T rtP_x28_000006_reduction;/* Variable: x28_000006_reduction
                                          * Referenced by: '<S3>/Model'
                                          */
extern P_DZ_DSMC_T DZ_DSMC_rtP;

/* Class declaration for model DZ_DSMC */
class DZ_DSMCModelClass
{
  /* public data and function members */
 public:
  /* model initialize function */
  void initialize();

  /* Initial conditions function */
  void init();

  /* model terminate function */
  void terminate();

  /* Copy Constructor */
  DZ_DSMCModelClass(DZ_DSMCModelClass const&) =delete;

  /* Assignment Operator */
  DZ_DSMCModelClass& operator= (DZ_DSMCModelClass const&) & = delete;

  /* Real-Time Model get method */
  RT_MODEL_DZ_DSMC_T * getRTM();

  /* member function to initialize Real-Time model */
  void initializeRTM(const rtTimingBridge *timingBridge, int_T mdlref_TID0,
                     int_T mdlref_TID1, int_T mdlref_TID2, int_T mdlref_TID3,
                     int_T mdlref_TID4);

  /*member function to setup error status pointer */
  void setErrorStatusPointer(const char_T **rt_errorStatus);

  /* model step function */
  void step(const real32_T rtu_Ref[2], const real32_T *rtu_Dis, real32_T
            rty_State[2]);

  /* Reset function */
  void reset();

  /* Constructor */
  DZ_DSMCModelClass();

  /* Destructor */
  ~DZ_DSMCModelClass();

  /* private data and function members */
 private:
  /* Block signals */
  B_DZ_DSMC_T DZ_DSMC_B;

  /* Block states */
  DW_DZ_DSMC_T DZ_DSMC_DW;

  /* Tunable parameters */
  static P_DZ_DSMC_T DZ_DSMC_rtP;

  /* Private member function to set up the global timing engine */
  void setupGlobalTimingEngine(const rtTimingBridge *timingBridge, int_T
    mdlref_TID0, int_T mdlref_TID1, int_T mdlref_TID2, int_T mdlref_TID3, int_T
    mdlref_TID4);

  /* model instance variable for '<S3>/Model' */
  Motor_and_DriverModelClass ModelMDLOBJ1;

  /* Real-Time Model */
  RT_MODEL_DZ_DSMC_T DZ_DSMC_M;
};

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<S3>/Rate Transition' : Eliminated since input and output rates are identical
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'DZ_DSMC'
 * '<S1>'   : 'DZ_DSMC/MATLAB Function5'
 * '<S2>'   : 'DZ_DSMC/Variant Subsystem2'
 * '<S3>'   : 'DZ_DSMC/Variant Subsystem2/High-fidelity model'
 */
#endif                                 /* RTW_HEADER_DZ_DSMC_h_ */

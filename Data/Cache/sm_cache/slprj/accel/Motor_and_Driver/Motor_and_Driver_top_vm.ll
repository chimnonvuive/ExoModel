; ModuleID = 'test'
source_filename = "test"
target datalayout = "e-m:w-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"

define void @Motor_and_Driver_CGInitializeSizes(i8* %S_0) {
Motor_and_Driver_CGInitializeSizes_entry:
  %tmp_ = alloca [4 x i32], align 4
  call void @Motor_and_Driver_Checksum([4 x i32]* nonnull %tmp_)
  %0 = getelementptr inbounds [4 x i32], [4 x i32]* %tmp_, i64 0, i64 0
  %tmp__el = load i32, i32* %0, align 4
  call void @vm_ssSetChecksumVal(i8* %S_0, i32 0, i32 %tmp__el)
  %1 = getelementptr inbounds [4 x i32], [4 x i32]* %tmp_, i64 0, i64 1
  %tmp__el3 = load i32, i32* %1, align 4
  call void @vm_ssSetChecksumVal(i8* %S_0, i32 1, i32 %tmp__el3)
  %2 = getelementptr inbounds [4 x i32], [4 x i32]* %tmp_, i64 0, i64 2
  %tmp__el5 = load i32, i32* %2, align 4
  call void @vm_ssSetChecksumVal(i8* %S_0, i32 2, i32 %tmp__el5)
  %3 = getelementptr inbounds [4 x i32], [4 x i32]* %tmp_, i64 0, i64 3
  %tmp__el7 = load i32, i32* %3, align 4
  call void @vm_ssSetChecksumVal(i8* %S_0, i32 3, i32 %tmp__el7)
  call void @vm_blockIOSizeCheck(i8* %S_0, i32 560)
  call void @vm_dworkSizeCheck(i8* %S_0, i32 456)
  ret void
}

define void @Motor_and_Driver_Checksum([4 x i32]* %y) {
Motor_and_Driver_Checksum_entry:
  %0 = getelementptr inbounds [4 x i32], [4 x i32]* %y, i64 0, i64 0
  store i32 1147704203, i32* %0, align 1
  %1 = getelementptr inbounds [4 x i32], [4 x i32]* %y, i64 0, i64 1
  store i32 582566327, i32* %1, align 1
  %2 = getelementptr inbounds [4 x i32], [4 x i32]* %y, i64 0, i64 2
  store i32 1246468682, i32* %2, align 1
  %3 = getelementptr inbounds [4 x i32], [4 x i32]* %y, i64 0, i64 3
  store i32 359998621, i32* %3, align 1
  ret void
}

declare void @vm_ssSetChecksumVal(i8*, i32, i32)

declare void @vm_blockIOSizeCheck(i8*, i32)

declare void @vm_dworkSizeCheck(i8*, i32)

define void @Enable(i8* %S) {
Enable_entry:
  %0 = call i8* @vm_ssGetModelRtp(i8* %S)
  %1 = call i8* @vm__ssGetModelBlockIO(i8* %S)
  call void @vm_ssCallAccelRunBlock(i8* %S, i32 2, i32 0, i32 139)
  %2 = call i8 @vm_getHasError(i8* %S)
  ret void
}

declare i8* @vm_ssGetModelRtp(i8*)

declare i8* @vm__ssGetModelBlockIO(i8*)

declare void @vm_ssCallAccelRunBlock(i8*, i32, i32, i32)

declare i8 @vm_getHasError(i8*)

define void @Update0(i8* %S) {
Update0_entry:
  %0 = call i32 @vm_ssIsSampleHit(i8* %S, i32 3, i32 0)
  %1 = call i32 @vm_ssIsSampleHit(i8* %S, i32 1, i32 0)
  %2 = call i32 @vm_ssIsSampleHit(i8* %S, i32 2, i32 0)
  %3 = call i8* @vm_ssGetRootDWork(i8* %S)
  %4 = call i8* @vm_ssGetModelRtp(i8* %S)
  %5 = call i8* @vm__ssGetModelBlockIO(i8* %S)
  %6 = icmp eq i32 %2, 0
  br i1 %6, label %false, label %true

true:                                             ; preds = %Update0_entry
  %7 = getelementptr inbounds i8, i8* %5, i64 288
  %8 = bitcast i8* %7 to i64*
  %_rtB__Saturation90 = load i64, i64* %8, align 1
  %9 = getelementptr inbounds i8, i8* %3, i64 160
  %10 = bitcast i8* %9 to [2 x double]*
  %11 = getelementptr inbounds i8, i8* %3, i64 444
  %_rtDW__RateTransition3_ActiveBufIdx = load i8, i8* %11, align 1
  %12 = icmp eq i8 %_rtDW__RateTransition3_ActiveBufIdx, 0
  %13 = zext i1 %12 to i64
  %14 = getelementptr inbounds [2 x double], [2 x double]* %10, i64 0, i64 %13
  %15 = bitcast double* %14 to i64*
  store i64 %_rtB__Saturation90, i64* %15, align 1
  %_rtDW__RateTransition3_ActiveBufIdx23 = load i8, i8* %11, align 1
  %16 = icmp eq i8 %_rtDW__RateTransition3_ActiveBufIdx23, 0
  %17 = zext i1 %16 to i8
  store i8 %17, i8* %11, align 1
  br label %false

false:                                            ; preds = %Update0_entry, %true
  %18 = icmp eq i32 %1, 0
  br i1 %18, label %false2, label %true1

true1:                                            ; preds = %false
  %19 = getelementptr inbounds i8, i8* %5, i64 544
  %20 = bitcast i8* %19 to i32*
  %_rtB__DataTypeConversion_g89 = load i32, i32* %20, align 1
  %21 = getelementptr inbounds i8, i8* %3, i64 392
  %22 = bitcast i8* %21 to i32*
  store i32 %_rtB__DataTypeConversion_g89, i32* %22, align 1
  %23 = getelementptr inbounds i8, i8* %4, i64 72
  %24 = bitcast i8* %23 to double*
  %_rtP__Integrator_gainval = load double, double* %24, align 1
  %25 = getelementptr inbounds i8, i8* %5, i64 216
  %26 = bitcast i8* %25 to double*
  %_rtB__Switch = load double, double* %26, align 1
  %tmp0 = fmul double %_rtP__Integrator_gainval, %_rtB__Switch
  %27 = bitcast i8* %3 to double*
  %_rtDW__Integrator_DSTATE = load double, double* %27, align 1
  %tmp1 = fadd double %tmp0, %_rtDW__Integrator_DSTATE
  store double %tmp1, double* %27, align 1
  call void @vm_ssCallAccelRunBlock(i8* %S, i32 3, i32 14, i32 105)
  %28 = call i8 @vm_getHasError(i8* %S)
  %29 = and i8 %28, 1
  %30 = icmp eq i8 %29, 0
  br i1 %30, label %false2, label %true3

false2:                                           ; preds = %true1, %false
  %31 = icmp eq i32 %0, 0
  br i1 %31, label %false5, label %true4

true3:                                            ; preds = %true1, %false5, %false10
  ret void

true4:                                            ; preds = %false2
  %32 = getelementptr inbounds i8, i8* %3, i64 192
  %33 = bitcast i8* %32 to double*
  store double 0.000000e+00, double* %33, align 1
  %34 = getelementptr inbounds i8, i8* %5, i64 320
  %35 = bitcast i8* %34 to i64*
  %_rtB__DataTypeConversion88 = load i64, i64* %35, align 1
  %36 = getelementptr inbounds i8, i8* %3, i64 200
  %37 = bitcast i8* %36 to i64*
  store i64 %_rtB__DataTypeConversion88, i64* %37, align 1
  %38 = getelementptr inbounds i8, i8* %3, i64 208
  %39 = bitcast i8* %38 to double*
  store double 0.000000e+00, double* %39, align 1
  br label %false5

false5:                                           ; preds = %false2, %true4
  br i1 %6, label %true3, label %true6

true6:                                            ; preds = %false5
  %40 = getelementptr inbounds i8, i8* %5, i64 548
  %41 = bitcast i8* %40 to i32*
  %_rtB__RateTransition282 = load i32, i32* %41, align 1
  %42 = getelementptr inbounds i8, i8* %3, i64 396
  %43 = bitcast i8* %42 to i32*
  store i32 %_rtB__RateTransition282, i32* %43, align 1
  %44 = getelementptr inbounds i8, i8* %4, i64 160
  %45 = bitcast i8* %44 to double*
  %_rtP__DiscreteTimeIntegrator1_gainval = load double, double* %45, align 1
  %46 = getelementptr inbounds i8, i8* %5, i64 456
  %47 = bitcast i8* %46 to double*
  %_rtB__omgHatk = load double, double* %47, align 1
  %tmp2 = fmul double %_rtP__DiscreteTimeIntegrator1_gainval, %_rtB__omgHatk
  %48 = getelementptr inbounds i8, i8* %3, i64 120
  %49 = bitcast i8* %48 to double*
  %_rtDW__DiscreteTimeIntegrator1_DSTATE = load double, double* %49, align 1
  %tmp3 = fadd double %tmp2, %_rtDW__DiscreteTimeIntegrator1_DSTATE
  store double %tmp3, double* %49, align 1
  %50 = getelementptr inbounds i8, i8* %4, i64 176
  %51 = bitcast i8* %50 to double*
  %_rtP__DiscreteTimeIntegrator_gainval = load double, double* %51, align 1
  %52 = getelementptr inbounds i8, i8* %5, i64 304
  %53 = bitcast i8* %52 to double*
  %_rtB__Product = load double, double* %53, align 1
  %tmp4 = fmul double %_rtP__DiscreteTimeIntegrator_gainval, %_rtB__Product
  %54 = getelementptr inbounds i8, i8* %3, i64 128
  %55 = bitcast i8* %54 to double*
  %_rtDW__DiscreteTimeIntegrator_DSTATE = load double, double* %55, align 1
  %tmp5 = fadd double %tmp4, %_rtDW__DiscreteTimeIntegrator_DSTATE
  store double %tmp5, double* %55, align 1
  %56 = getelementptr inbounds i8, i8* %4, i64 192
  %57 = bitcast i8* %56 to double*
  %_rtP__DiscreteTimeIntegrator_UpperSat = load double, double* %57, align 1
  %58 = fcmp ult double %tmp5, %_rtP__DiscreteTimeIntegrator_UpperSat
  %59 = bitcast double %_rtP__DiscreteTimeIntegrator_UpperSat to i64
  br i1 %58, label %false8, label %true7

true7:                                            ; preds = %true6
  %60 = bitcast i8* %56 to i64*
  %61 = bitcast i8* %54 to i64*
  store i64 %59, i64* %61, align 1
  br label %false10

false8:                                           ; preds = %true6
  %62 = getelementptr inbounds i8, i8* %4, i64 200
  %63 = bitcast i8* %62 to double*
  %_rtP__DiscreteTimeIntegrator_LowerSat = load double, double* %63, align 1
  %64 = fcmp ugt double %tmp5, %_rtP__DiscreteTimeIntegrator_LowerSat
  %65 = bitcast double %_rtP__DiscreteTimeIntegrator_LowerSat to i64
  br i1 %64, label %false10, label %true9

true9:                                            ; preds = %false8
  %66 = bitcast i8* %62 to i64*
  %67 = bitcast i8* %54 to i64*
  store i64 %65, i64* %67, align 1
  br label %false10

false10:                                          ; preds = %false8, %true7, %true9
  %68 = getelementptr inbounds i8, i8* %5, i64 312
  %69 = bitcast i8* %68 to i64*
  %_rtB__Saturation_f83 = load i64, i64* %69, align 1
  %70 = getelementptr inbounds i8, i8* %3, i64 136
  %71 = bitcast i8* %70 to i64*
  store i64 %_rtB__Saturation_f83, i64* %71, align 1
  %72 = getelementptr inbounds i8, i8* %4, i64 216
  %73 = bitcast i8* %72 to double*
  %_rtP__DiscreteTimeIntegrator_gainval_b = load double, double* %73, align 1
  %74 = getelementptr inbounds i8, i8* %5, i64 296
  %75 = bitcast i8* %74 to double*
  %_rtB__Switch_l = load double, double* %75, align 1
  %tmp6 = fmul double %_rtP__DiscreteTimeIntegrator_gainval_b, %_rtB__Switch_l
  %76 = getelementptr inbounds i8, i8* %3, i64 144
  %77 = bitcast i8* %76 to double*
  %_rtDW__DiscreteTimeIntegrator_DSTATE_d = load double, double* %77, align 1
  %tmp7 = fadd double %tmp6, %_rtDW__DiscreteTimeIntegrator_DSTATE_d
  store double %tmp7, double* %77, align 1
  %78 = getelementptr inbounds i8, i8* %5, i64 280
  %79 = bitcast i8* %78 to i64*
  %_rtB__I_ctrl84 = load i64, i64* %79, align 1
  %80 = getelementptr inbounds i8, i8* %3, i64 152
  %81 = bitcast i8* %80 to i64*
  store i64 %_rtB__I_ctrl84, i64* %81, align 1
  %82 = getelementptr inbounds i8, i8* %5, i64 556
  %_rtB__AND = load i8, i8* %82, align 1
  %83 = getelementptr inbounds i8, i8* %3, i64 454
  store i8 %_rtB__AND, i8* %83, align 1
  %84 = bitcast i8* %46 to i64*
  %_rtB__omgHatk7685 = load i64, i64* %84, align 1
  %85 = getelementptr inbounds i8, i8* %3, i64 216
  %86 = bitcast i8* %85 to [2 x double]*
  %87 = getelementptr inbounds i8, i8* %3, i64 449
  %_rtDW__RateTransition_ActiveBufIdx = load i8, i8* %87, align 1
  %88 = icmp eq i8 %_rtDW__RateTransition_ActiveBufIdx, 0
  %89 = zext i1 %88 to i64
  %90 = getelementptr inbounds [2 x double], [2 x double]* %86, i64 0, i64 %89
  %91 = bitcast double* %90 to i64*
  store i64 %_rtB__omgHatk7685, i64* %91, align 1
  %_rtDW__RateTransition_ActiveBufIdx80 = load i8, i8* %87, align 1
  %92 = icmp eq i8 %_rtDW__RateTransition_ActiveBufIdx80, 0
  %93 = zext i1 %92 to i8
  store i8 %93, i8* %87, align 1
  br label %true3
}

declare i32 @vm_ssIsSampleHit(i8*, i32, i32)

declare i8* @vm_ssGetRootDWork(i8*)

define void @Outputs1(i8* %S, i32 %controlPortIdx) {
Outputs1_entry:
  %0 = call i8* @vm_ssGetModelRtp(i8* %S)
  %1 = call i8* @vm__ssGetModelBlockIO(i8* %S)
  %2 = getelementptr inbounds i8, i8* %0, i64 328
  %3 = bitcast i8* %2 to double*
  %_rtP__Constant_Value_n = load double, double* %3, align 1
  %tmp0 = fmul double %_rtP__Constant_Value_n, 0x3EB0C6F7A0B5ED8D
  %4 = getelementptr inbounds i8, i8* %1, i64 360
  %5 = bitcast i8* %4 to double*
  store double %tmp0, double* %5, align 1
  %6 = getelementptr inbounds i8, i8* %0, i64 336
  %7 = bitcast i8* %6 to double*
  %_rtP__Constant_Value_f = load double, double* %7, align 1
  %tmp1 = fmul double %_rtP__Constant_Value_f, 1.000000e-03
  %8 = getelementptr inbounds i8, i8* %1, i64 368
  %9 = bitcast i8* %8 to double*
  store double %tmp1, double* %9, align 1
  %10 = getelementptr inbounds i8, i8* %0, i64 344
  %11 = bitcast i8* %10 to double*
  %_rtP__Constant_Value_h = load double, double* %11, align 1
  %tmp2 = fmul double %_rtP__Constant_Value_h, 0x3EB0C6F7A0B5ED8D
  %12 = getelementptr inbounds i8, i8* %1, i64 376
  %13 = bitcast i8* %12 to double*
  store double %tmp2, double* %13, align 1
  %14 = getelementptr inbounds i8, i8* %0, i64 352
  %15 = bitcast i8* %14 to double*
  %_rtP__Constant_Value_fv = load double, double* %15, align 1
  %tmp3 = fmul double %_rtP__Constant_Value_fv, 0x3EB0C6F7A0B5ED8D
  %16 = getelementptr inbounds i8, i8* %1, i64 384
  %17 = bitcast i8* %16 to double*
  store double %tmp3, double* %17, align 1
  %18 = getelementptr inbounds i8, i8* %0, i64 360
  %19 = bitcast i8* %18 to i64*
  %_rtP__Constant_Value_m35 = load i64, i64* %19, align 1
  %20 = getelementptr inbounds i8, i8* %1, i64 392
  %21 = bitcast i8* %20 to i64*
  store i64 %_rtP__Constant_Value_m35, i64* %21, align 1
  %22 = getelementptr inbounds i8, i8* %0, i64 376
  %23 = bitcast i8* %22 to double*
  %_rtP__Gain_Gain_p = load double, double* %23, align 1
  %24 = getelementptr inbounds i8, i8* %0, i64 368
  %25 = bitcast i8* %24 to double*
  %_rtP__J_EPOS4_Value = load double, double* %25, align 1
  %tmp4 = fmul double %_rtP__Gain_Gain_p, %_rtP__J_EPOS4_Value
  %tmp5 = fmul double %tmp4, 0x3E7AD7F29ABCAF48
  %26 = getelementptr inbounds i8, i8* %1, i64 400
  %27 = bitcast i8* %26 to double*
  store double %tmp5, double* %27, align 1
  %28 = getelementptr inbounds i8, i8* %0, i64 384
  %29 = bitcast i8* %28 to double*
  %_rtP__k_mEPOS4_Value = load double, double* %29, align 1
  %tmp6 = fmul double %_rtP__k_mEPOS4_Value, 0x3EB0C6F7A0B5ED8D
  %30 = getelementptr inbounds i8, i8* %1, i64 408
  %31 = bitcast i8* %30 to double*
  store double %tmp6, double* %31, align 1
  %32 = getelementptr inbounds i8, i8* %0, i64 400
  %33 = bitcast i8* %32 to double*
  %_rtP__Gain_Gain_g = load double, double* %33, align 1
  %34 = getelementptr inbounds i8, i8* %0, i64 392
  %35 = bitcast i8* %34 to double*
  %_rtP__r_EPOS4_Value = load double, double* %35, align 1
  %tmp7 = fmul double %_rtP__Gain_Gain_g, %_rtP__r_EPOS4_Value
  %tmp8 = fmul double %tmp7, 0x3EE406BD54405703
  %36 = getelementptr inbounds i8, i8* %1, i64 416
  %37 = bitcast i8* %36 to double*
  store double %tmp8, double* %37, align 1
  %38 = getelementptr inbounds i8, i8* %0, i64 408
  %39 = bitcast i8* %38 to double*
  %_rtP__Constant_Value_hb = load double, double* %39, align 1
  %40 = getelementptr inbounds i8, i8* %0, i64 416
  %41 = bitcast i8* %40 to double*
  %_rtP__Constant1_Value_d = load double, double* %41, align 1
  %tmp9 = fadd double %_rtP__Constant_Value_hb, %_rtP__Constant1_Value_d
  %42 = getelementptr inbounds i8, i8* %0, i64 424
  %43 = bitcast i8* %42 to double*
  %_rtP__Gain1_Gain = load double, double* %43, align 1
  %tmp10 = fmul double %tmp9, %_rtP__Gain1_Gain
  %44 = getelementptr inbounds i8, i8* %1, i64 424
  %45 = bitcast i8* %44 to double*
  store double %tmp10, double* %45, align 1
  %46 = getelementptr inbounds i8, i8* %0, i64 432
  %47 = bitcast i8* %46 to double*
  %_rtP__Constant_Value_fr = load double, double* %47, align 1
  %tmp11 = fmul double %_rtP__Constant_Value_fr, 1.000000e-03
  %48 = getelementptr inbounds i8, i8* %1, i64 432
  %49 = bitcast i8* %48 to double*
  store double %tmp11, double* %49, align 1
  %50 = getelementptr inbounds i8, i8* %0, i64 440
  %51 = bitcast i8* %50 to double*
  %_rtP__Constant1_Value_c = load double, double* %51, align 1
  %tmp12 = fmul double %_rtP__Constant1_Value_c, 0x3EE406BD54405703
  %52 = getelementptr inbounds i8, i8* %1, i64 440
  %53 = bitcast i8* %52 to double*
  store double %tmp12, double* %53, align 1
  %54 = getelementptr inbounds i8, i8* %0, i64 448
  %55 = bitcast i8* %54 to double*
  %_rtP__Constant_Value_g = load double, double* %55, align 1
  %tmp13 = fmul double %_rtP__Constant_Value_g, 1.000000e-03
  %56 = getelementptr inbounds i8, i8* %1, i64 448
  %57 = bitcast i8* %56 to double*
  store double %tmp13, double* %57, align 1
  %58 = bitcast i8* %0 to i64*
  %_rtP__Zero_Value36 = load i64, i64* %58, align 1
  %59 = getelementptr inbounds i8, i8* %1, i64 480
  %60 = bitcast i8* %59 to i64*
  store i64 %_rtP__Zero_Value36, i64* %60, align 1
  %61 = getelementptr inbounds i8, i8* %0, i64 24
  %62 = bitcast i8* %61 to i64*
  %_rtP__Constant_Value37 = load i64, i64* %62, align 1
  %63 = getelementptr inbounds i8, i8* %1, i64 472
  %64 = bitcast i8* %63 to i64*
  store i64 %_rtP__Constant_Value37, i64* %64, align 1
  ret void
}

define void @Outputs0(i8* %S) {
Outputs0_entry:
  %0 = call i32 @vm_ssIsSampleHit(i8* %S, i32 3, i32 0)
  %1 = call i32 @vm_ssIsSampleHit(i8* %S, i32 2, i32 0)
  %2 = call i32 @vm_ssIsSampleHit(i8* %S, i32 1, i32 0)
  %3 = call i8* @vm_ssGetRootDWork(i8* %S)
  %4 = call i8* @vm_ssGetModelRtp(i8* %S)
  %5 = call i8* @vm__ssGetModelBlockIO(i8* %S)
  %6 = call i8* @vm_ssGetU(i8* %S)
  %7 = icmp eq i32 %2, 0
  br i1 %7, label %false, label %true

true:                                             ; preds = %Outputs0_entry
  %8 = getelementptr inbounds i8, i8* %3, i64 160
  %9 = bitcast i8* %8 to [2 x double]*
  %10 = getelementptr inbounds i8, i8* %3, i64 444
  %_rtDW__RateTransition3_ActiveBufIdx = load i8, i8* %10, align 1
  %11 = sext i8 %_rtDW__RateTransition3_ActiveBufIdx to i64
  %12 = getelementptr inbounds [2 x double], [2 x double]* %9, i64 0, i64 %11
  %_rtDW__RateTransition3_Buffer_el = load double, double* %12, align 1
  %13 = getelementptr inbounds i8, i8* %3, i64 392
  %14 = bitcast i8* %13 to float*
  %_rtDW__UnitDelay1_DSTATE = load float, float* %14, align 1
  %15 = fpext float %_rtDW__UnitDelay1_DSTATE to double
  %tmp0 = fsub double %_rtDW__RateTransition3_Buffer_el, %15
  %16 = getelementptr inbounds i8, i8* %5, i64 360
  %17 = bitcast i8* %16 to double*
  %_rtB__UnitConversion = load double, double* %17, align 1
  %tmp1 = fmul double %_rtB__UnitConversion, %tmp0
  %18 = bitcast i8* %3 to double*
  %_rtDW__Integrator_DSTATE = load double, double* %18, align 1
  %tmp2 = fadd double %_rtDW__Integrator_DSTATE, %tmp1
  %19 = getelementptr inbounds i8, i8* %4, i64 88
  %20 = bitcast i8* %19 to double*
  %_rtP__Saturation_UpperSat = load double, double* %20, align 1
  %21 = fcmp ogt double %tmp2, %_rtP__Saturation_UpperSat
  %22 = bitcast double %_rtP__Saturation_UpperSat to i64
  br i1 %21, label %true5, label %false6

false:                                            ; preds = %Outputs0_entry, %false30
  %23 = icmp eq i32 %1, 0
  br i1 %23, label %false32, label %true31

true5:                                            ; preds = %true
  %24 = bitcast i8* %19 to i64*
  %25 = getelementptr inbounds i8, i8* %5, i64 32
  %26 = bitcast i8* %25 to i64*
  store i64 %22, i64* %26, align 1
  br label %merge

false6:                                           ; preds = %true
  %27 = getelementptr inbounds i8, i8* %4, i64 96
  %28 = bitcast i8* %27 to double*
  %_rtP__Saturation_LowerSat = load double, double* %28, align 1
  %29 = fcmp olt double %tmp2, %_rtP__Saturation_LowerSat
  %30 = bitcast double %_rtP__Saturation_LowerSat to i64
  br i1 %29, label %true7, label %false8

true7:                                            ; preds = %false6
  %31 = bitcast i8* %27 to i64*
  %32 = getelementptr inbounds i8, i8* %5, i64 32
  %33 = bitcast i8* %32 to i64*
  store i64 %30, i64* %33, align 1
  br label %merge

false8:                                           ; preds = %false6
  %34 = getelementptr inbounds i8, i8* %5, i64 32
  %35 = bitcast i8* %34 to double*
  store double %tmp2, double* %35, align 1
  br label %merge

true9:                                            ; preds = %merge
  %36 = getelementptr inbounds i8, i8* %5, i64 480
  %37 = bitcast i8* %36 to i64*
  %_rtB__Zero435 = load i64, i64* %37, align 1
  %38 = getelementptr inbounds i8, i8* %5, i64 72
  %39 = bitcast i8* %38 to i64*
  store i64 %_rtB__Zero435, i64* %39, align 1
  %40 = getelementptr inbounds i8, i8* %3, i64 451
  call void @vm_srUpdateBC(i8* nonnull %40)
  br label %merge74

false10:                                          ; preds = %merge
  %41 = getelementptr inbounds i8, i8* %4, i64 16
  %42 = bitcast i8* %41 to double*
  %_rtP__Gain_Gain = load double, double* %42, align 1
  %tmp3 = fmul double %_rtP__Gain_Gain, %_rtB__Merge118
  store double %tmp3, double* %323, align 1
  %43 = getelementptr inbounds i8, i8* %5, i64 472
  %44 = bitcast i8* %43 to i64*
  %_rtB__Constant_i423 = load i64, i64* %44, align 1
  %45 = getelementptr inbounds i8, i8* %5, i64 72
  %46 = bitcast i8* %45 to i64*
  store i64 %_rtB__Constant_i423, i64* %46, align 1
  %47 = getelementptr inbounds i8, i8* %3, i64 450
  call void @vm_srUpdateBC(i8* nonnull %47)
  br label %merge74

true13:                                           ; preds = %false73, %false15, %false14, %merge74, %false34, %false72, %false71, %false70, %false69, %false68, %false67, %false66, %false65, %true64, %false63
  ret void

false14:                                          ; preds = %merge74
  call void @vm_ssCallAccelRunBlock(i8* %S, i32 3, i32 15, i32 104)
  %48 = call i8 @vm_getHasError(i8* %S)
  %49 = and i8 %48, 1
  %50 = icmp eq i8 %49, 0
  br i1 %50, label %false15, label %true13

false15:                                          ; preds = %false14
  %51 = getelementptr inbounds i8, i8* %5, i64 504
  %52 = bitcast i8* %51 to double*
  %_rtB__OUTPUT_1_0_el = load double, double* %52, align 1
  %53 = fptrunc double %_rtB__OUTPUT_1_0_el to float
  %54 = getelementptr inbounds i8, i8* %5, i64 536
  %55 = bitcast i8* %54 to float*
  store float %53, float* %55, align 1
  %56 = getelementptr inbounds i8, i8* %4, i64 120
  %57 = bitcast i8* %56 to double*
  %_rtP__GAIN_Gain = load double, double* %57, align 1
  %58 = getelementptr inbounds i8, i8* %5, i64 512
  %59 = bitcast i8* %58 to double*
  %_rtB__OUTPUT_1_0_el169 = load double, double* %59, align 1
  %tmp4 = fmul double %_rtP__GAIN_Gain, %_rtB__OUTPUT_1_0_el169
  %60 = fptrunc double %tmp4 to float
  %61 = getelementptr inbounds i8, i8* %5, i64 540
  %62 = bitcast i8* %61 to float*
  store float %60, float* %62, align 1
  %63 = getelementptr inbounds i8, i8* %5, i64 528
  %64 = bitcast i8* %63 to double*
  %_rtB__OUTPUT_1_0_el172 = load double, double* %64, align 1
  %65 = fptrunc double %_rtB__OUTPUT_1_0_el172 to float
  %66 = getelementptr inbounds i8, i8* %5, i64 544
  %67 = bitcast i8* %66 to float*
  store float %65, float* %67, align 1
  %68 = bitcast i8* %54 to i32*
  %69 = bitcast float %53 to i32
  %70 = bitcast i8* %5 to i32*
  store i32 %69, i32* %70, align 1
  %71 = bitcast i8* %61 to i32*
  %72 = bitcast float %60 to i32
  %73 = getelementptr inbounds i8, i8* %5, i64 4
  %74 = bitcast i8* %73 to i32*
  store i32 %72, i32* %74, align 1
  %75 = bitcast i8* %66 to i32*
  %76 = bitcast float %65 to i32
  %77 = getelementptr inbounds i8, i8* %5, i64 8
  %78 = bitcast i8* %77 to i32*
  store i32 %76, i32* %78, align 1
  call void @vm_ssCallAccelRunBlock(i8* %S, i32 3, i32 21, i32 104)
  %79 = call i8 @vm_getHasError(i8* %S)
  %80 = and i8 %79, 1
  %81 = icmp eq i8 %80, 0
  br i1 %81, label %false16, label %true13

false16:                                          ; preds = %false15
  %82 = getelementptr inbounds i8, i8* %4, i64 144
  %83 = bitcast i8* %82 to double*
  %_rtP__DeadZone_End = load double, double* %83, align 1
  %84 = fcmp ogt double %tmp2, %_rtP__DeadZone_End
  br i1 %84, label %true17, label %false18

true17:                                           ; preds = %false16
  %tmp6 = fsub double %tmp2, %_rtP__DeadZone_End
  br label %merge75

false18:                                          ; preds = %false16
  %85 = getelementptr inbounds i8, i8* %4, i64 136
  %86 = bitcast i8* %85 to double*
  %_rtP__DeadZone_Start = load double, double* %86, align 1
  %87 = fcmp ult double %tmp2, %_rtP__DeadZone_Start
  br i1 %87, label %false20, label %merge75

false20:                                          ; preds = %false18
  %tmp5 = fsub double %tmp2, %_rtP__DeadZone_Start
  br label %merge75

false22:                                          ; preds = %merge75
  %88 = call double @muDoubleScalarRem(double %371, double 2.560000e+02)
  br label %merge76

false24:                                          ; preds = %merge76
  %89 = call double @muDoubleScalarRem(double %375, double 2.560000e+02)
  br label %merge77

true29:                                           ; preds = %merge77
  store double 0.000000e+00, double* %370, align 1
  br label %false30

false30:                                          ; preds = %true29, %merge77
  %90 = getelementptr inbounds i8, i8* %3, i64 400
  %91 = bitcast i8* %90 to [2 x float]*
  %92 = getelementptr inbounds i8, i8* %3, i64 446
  %_rtDW__RateTransition1_semaphoreTaken = load i8, i8* %92, align 1
  %93 = icmp eq i8 %_rtDW__RateTransition1_semaphoreTaken, 0
  %94 = zext i1 %93 to i64
  %95 = getelementptr inbounds [2 x float], [2 x float]* %91, i64 0, i64 %94
  store float %_rtDW__UnitDelay1_DSTATE, float* %95, align 1
  %_rtDW__RateTransition1_semaphoreTaken217 = load i8, i8* %92, align 1
  %96 = icmp eq i8 %_rtDW__RateTransition1_semaphoreTaken217, 0
  %97 = zext i1 %96 to i8
  %98 = getelementptr inbounds i8, i8* %3, i64 445
  store i8 %97, i8* %98, align 1
  br label %false

true31:                                           ; preds = %false
  %99 = getelementptr inbounds i8, i8* %3, i64 445
  %_rtDW__RateTransition1_ActiveBufIdx = load i8, i8* %99, align 1
  %100 = getelementptr inbounds i8, i8* %3, i64 446
  store i8 %_rtDW__RateTransition1_ActiveBufIdx, i8* %100, align 1
  %101 = getelementptr inbounds i8, i8* %3, i64 400
  %102 = bitcast i8* %101 to [2 x float]*
  %103 = sext i8 %_rtDW__RateTransition1_ActiveBufIdx to i64
  %104 = getelementptr inbounds [2 x float], [2 x float]* %102, i64 0, i64 %103
  %_rtDW__RateTransition1_Buffer_el = load float, float* %104, align 1
  %105 = fpext float %_rtDW__RateTransition1_Buffer_el to double
  %106 = icmp eq i32 %0, 0
  br i1 %106, label %false34, label %true33

false32:                                          ; preds = %false, %false35
  %rtb_control_error_a_.0 = phi double [ %tmp13, %false35 ], [ undef, %false ]
  %rtb_DataTypeConversion_.0 = phi double [ %105, %false35 ], [ undef, %false ]
  br i1 %7, label %false37, label %true36

true33:                                           ; preds = %true31
  %107 = getelementptr inbounds i8, i8* %3, i64 192
  %108 = bitcast i8* %107 to i64*
  %_rtDW__RateTransition_Buffer0_el420 = load i64, i64* %108, align 1
  %109 = getelementptr inbounds i8, i8* %5, i64 224
  %110 = bitcast i8* %109 to i64*
  store i64 %_rtDW__RateTransition_Buffer0_el420, i64* %110, align 1
  %111 = getelementptr inbounds i8, i8* %3, i64 200
  %112 = bitcast i8* %111 to i64*
  %_rtDW__RateTransition_Buffer0_el232421 = load i64, i64* %112, align 1
  %113 = getelementptr inbounds i8, i8* %5, i64 232
  %114 = bitcast i8* %113 to i64*
  store i64 %_rtDW__RateTransition_Buffer0_el232421, i64* %114, align 1
  %115 = getelementptr inbounds i8, i8* %3, i64 208
  %116 = bitcast i8* %115 to i64*
  %_rtDW__RateTransition_Buffer0_el235422 = load i64, i64* %116, align 1
  %117 = getelementptr inbounds i8, i8* %5, i64 240
  %118 = bitcast i8* %117 to i64*
  store i64 %_rtDW__RateTransition_Buffer0_el235422, i64* %118, align 1
  br label %false34

false34:                                          ; preds = %true31, %true33
  %119 = getelementptr inbounds i8, i8* %3, i64 396
  %120 = bitcast i8* %119 to float*
  %_rtDW__UnitDelay_DSTATE_j = load float, float* %120, align 1
  %121 = fpext float %_rtDW__UnitDelay_DSTATE_j to double
  %122 = getelementptr inbounds i8, i8* %5, i64 248
  %123 = bitcast i8* %122 to double*
  store double %121, double* %123, align 1
  %124 = getelementptr inbounds i8, i8* %3, i64 120
  %125 = bitcast i8* %124 to i64*
  %_rtDW__DiscreteTimeIntegrator1_DSTATE417 = load i64, i64* %125, align 1
  %126 = getelementptr inbounds i8, i8* %5, i64 256
  %127 = bitcast i8* %126 to i64*
  store i64 %_rtDW__DiscreteTimeIntegrator1_DSTATE417, i64* %127, align 1
  %128 = getelementptr inbounds i8, i8* %3, i64 128
  %129 = bitcast i8* %128 to i64*
  %_rtDW__DiscreteTimeIntegrator_DSTATE418 = load i64, i64* %129, align 1
  %130 = getelementptr inbounds i8, i8* %5, i64 264
  %131 = bitcast i8* %130 to i64*
  store i64 %_rtDW__DiscreteTimeIntegrator_DSTATE418, i64* %131, align 1
  %132 = getelementptr inbounds i8, i8* %3, i64 136
  %133 = bitcast i8* %132 to i64*
  %_rtDW__UnitDelay_DSTATE419 = load i64, i64* %133, align 1
  %134 = getelementptr inbounds i8, i8* %5, i64 272
  %135 = bitcast i8* %134 to i64*
  store i64 %_rtDW__UnitDelay_DSTATE419, i64* %135, align 1
  call void @vm_ssCallAccelRunBlock(i8* %S, i32 2, i32 0, i32 104)
  %136 = call i8 @vm_getHasError(i8* %S)
  %137 = and i8 %136, 1
  %138 = icmp eq i8 %137, 0
  br i1 %138, label %false35, label %true13

false35:                                          ; preds = %false34
  %139 = getelementptr inbounds i8, i8* %5, i64 232
  %140 = bitcast i8* %139 to double*
  %_rtB__RateTransition_el = load double, double* %140, align 1
  %141 = getelementptr inbounds i8, i8* %5, i64 456
  %142 = bitcast i8* %141 to double*
  %_rtB__omgHatk = load double, double* %142, align 1
  %tmp13 = fsub double %_rtB__RateTransition_el, %_rtB__omgHatk
  br label %false32

true36:                                           ; preds = %false32
  %143 = bitcast i8* %5 to i32*
  %_rtB__BusCreator_Angle416 = load i32, i32* %143, align 1
  %144 = getelementptr inbounds i8, i8* %3, i64 408
  %145 = bitcast i8* %144 to [2 x float]*
  %146 = getelementptr inbounds i8, i8* %3, i64 448
  %_rtDW__RateTransition2_semaphoreTaken = load i8, i8* %146, align 1
  %147 = icmp eq i8 %_rtDW__RateTransition2_semaphoreTaken, 0
  %148 = zext i1 %147 to i64
  %149 = getelementptr inbounds [2 x float], [2 x float]* %145, i64 0, i64 %148
  %150 = bitcast float* %149 to i32*
  store i32 %_rtB__BusCreator_Angle416, i32* %150, align 1
  %_rtDW__RateTransition2_semaphoreTaken255 = load i8, i8* %146, align 1
  %151 = icmp eq i8 %_rtDW__RateTransition2_semaphoreTaken255, 0
  %152 = zext i1 %151 to i8
  %153 = getelementptr inbounds i8, i8* %3, i64 447
  store i8 %152, i8* %153, align 1
  br label %false37

false37:                                          ; preds = %false32, %true36
  br i1 %23, label %false39, label %true38

true38:                                           ; preds = %false37
  %154 = getelementptr inbounds i8, i8* %3, i64 447
  %_rtDW__RateTransition2_ActiveBufIdx = load i8, i8* %154, align 1
  %155 = getelementptr inbounds i8, i8* %3, i64 448
  store i8 %_rtDW__RateTransition2_ActiveBufIdx, i8* %155, align 1
  %156 = getelementptr inbounds i8, i8* %3, i64 408
  %157 = bitcast i8* %156 to [2 x float]*
  %158 = sext i8 %_rtDW__RateTransition2_ActiveBufIdx to i64
  %159 = getelementptr inbounds [2 x float], [2 x float]* %157, i64 0, i64 %158
  %160 = bitcast float* %159 to i32*
  %_rtDW__RateTransition2_Buffer_el408 = load i32, i32* %160, align 1
  %161 = getelementptr inbounds i8, i8* %5, i64 548
  %162 = bitcast i8* %161 to i32*
  store i32 %_rtDW__RateTransition2_Buffer_el408, i32* %162, align 1
  %163 = getelementptr inbounds i8, i8* %5, i64 424
  %164 = bitcast i8* %163 to double*
  %_rtB__J_SI = load double, double* %164, align 1
  %165 = getelementptr inbounds i8, i8* %5, i64 432
  %166 = bitcast i8* %165 to double*
  %_rtB__UnitConversion_b3 = load double, double* %166, align 1
  %tmp14 = fdiv double %_rtB__J_SI, %_rtB__UnitConversion_b3
  %167 = getelementptr inbounds i8, i8* %5, i64 240
  %168 = bitcast i8* %167 to double*
  %_rtB__RateTransition_el268 = load double, double* %168, align 1
  %tmp15 = fmul double %tmp14, %_rtB__RateTransition_el268
  %169 = getelementptr inbounds i8, i8* %5, i64 440
  %170 = bitcast i8* %169 to double*
  %_rtB__r_SI = load double, double* %170, align 1
  %171 = getelementptr inbounds i8, i8* %5, i64 448
  %172 = bitcast i8* %171 to double*
  %_rtB__UnitConversion_m = load double, double* %172, align 1
  %tmp16 = fdiv double %_rtB__r_SI, %_rtB__UnitConversion_m
  %173 = getelementptr inbounds i8, i8* %5, i64 232
  %174 = bitcast i8* %173 to double*
  %_rtB__RateTransition_el272 = load double, double* %174, align 1
  %tmp17 = fmul double %tmp16, %_rtB__RateTransition_el272
  %tmp18 = fadd double %tmp15, %tmp17
  %175 = getelementptr inbounds i8, i8* %5, i64 384
  %176 = bitcast i8* %175 to double*
  %_rtB__UnitConversion_c = load double, double* %176, align 1
  %tmp19 = fmul double %rtb_control_error_a_.0, %_rtB__UnitConversion_c
  %tmp20 = fadd double %tmp18, %tmp19
  %177 = getelementptr inbounds i8, i8* %3, i64 144
  %178 = bitcast i8* %177 to double*
  %_rtDW__DiscreteTimeIntegrator_DSTATE_d = load double, double* %178, align 1
  %tmp21 = fadd double %_rtDW__DiscreteTimeIntegrator_DSTATE_d, %tmp20
  %179 = getelementptr inbounds i8, i8* %5, i64 280
  %180 = bitcast i8* %179 to double*
  store double %tmp21, double* %180, align 1
  %181 = getelementptr inbounds i8, i8* %5, i64 376
  %182 = bitcast i8* %181 to double*
  %_rtB__UnitConversion_l = load double, double* %182, align 1
  %tmp22 = fmul double %rtb_control_error_a_.0, %_rtB__UnitConversion_l
  %183 = getelementptr inbounds i8, i8* %5, i64 296
  %184 = bitcast i8* %183 to double*
  store double %tmp22, double* %184, align 1
  %185 = getelementptr inbounds i8, i8* %4, i64 232
  %186 = bitcast i8* %185 to double*
  %_rtP__Saturation_UpperSat_d = load double, double* %186, align 1
  %187 = fcmp ogt double %tmp21, %_rtP__Saturation_UpperSat_d
  %188 = bitcast double %tmp21 to i64
  %189 = bitcast double %_rtP__Saturation_UpperSat_d to i64
  br i1 %187, label %true40, label %false41

false39:                                          ; preds = %false37, %true58, %true60, %false61
  %190 = icmp eq i32 %0, 0
  br i1 %190, label %false63, label %true62

true40:                                           ; preds = %true38
  %191 = bitcast i8* %185 to i64*
  %192 = getelementptr inbounds i8, i8* %5, i64 288
  %193 = bitcast i8* %192 to i64*
  store i64 %189, i64* %193, align 1
  br label %merge80

false41:                                          ; preds = %true38
  %194 = getelementptr inbounds i8, i8* %4, i64 240
  %195 = bitcast i8* %194 to double*
  %_rtP__Saturation_LowerSat_j = load double, double* %195, align 1
  %196 = fcmp olt double %tmp21, %_rtP__Saturation_LowerSat_j
  %197 = bitcast double %_rtP__Saturation_LowerSat_j to i64
  br i1 %196, label %true42, label %false43

true42:                                           ; preds = %false41
  %198 = bitcast i8* %194 to i64*
  %199 = getelementptr inbounds i8, i8* %5, i64 288
  %200 = bitcast i8* %199 to i64*
  store i64 %197, i64* %200, align 1
  br label %merge80

false43:                                          ; preds = %false41
  %201 = bitcast i8* %179 to i64*
  %202 = getelementptr inbounds i8, i8* %5, i64 288
  %203 = bitcast i8* %202 to i64*
  store i64 %188, i64* %203, align 1
  br label %merge80

true44:                                           ; preds = %merge80
  %tmp24 = fsub double %_rtDW__UnitDelay_DSTATE_f, %_rtP__DeadZone_End_m
  br label %merge81

false45:                                          ; preds = %merge80
  %204 = getelementptr inbounds i8, i8* %4, i64 264
  %205 = bitcast i8* %204 to double*
  %_rtP__DeadZone_Start_a = load double, double* %205, align 1
  %206 = fcmp ult double %_rtDW__UnitDelay_DSTATE_f, %_rtP__DeadZone_Start_a
  br i1 %206, label %false47, label %merge81

false47:                                          ; preds = %false45
  %tmp23 = fsub double %_rtDW__UnitDelay_DSTATE_f, %_rtP__DeadZone_Start_a
  br label %merge81

false49:                                          ; preds = %merge81
  %207 = call double @muDoubleScalarRem(double %395, double 2.560000e+02)
  br label %merge82

false51:                                          ; preds = %merge82
  %208 = call double @muDoubleScalarRem(double %399, double 2.560000e+02)
  br label %merge83

true56:                                           ; preds = %merge83
  %209 = getelementptr inbounds i8, i8* %5, i64 392
  %210 = bitcast i8* %209 to i64*
  %_rtB__Constant413 = load i64, i64* %210, align 1
  %211 = bitcast i8* %183 to i64*
  store i64 %_rtB__Constant413, i64* %211, align 1
  br label %false57

false57:                                          ; preds = %merge83, %true56
  %212 = getelementptr inbounds i8, i8* %5, i64 408
  %213 = bitcast i8* %212 to double*
  %_rtB__UnitConversion_b = load double, double* %213, align 1
  %tmp30 = fmul double %rtb_DataTypeConversion_.0, %_rtB__UnitConversion_b
  %214 = getelementptr inbounds i8, i8* %5, i64 264
  %215 = bitcast i8* %214 to double*
  %_rtB__omg_observed = load double, double* %215, align 1
  %216 = getelementptr inbounds i8, i8* %5, i64 416
  %217 = bitcast i8* %216 to double*
  %_rtB__UnitConversion_o = load double, double* %217, align 1
  %tmp31 = fmul double %_rtB__omg_observed, %_rtB__UnitConversion_o
  %tmp32 = fsub double %tmp30, %tmp31
  %218 = getelementptr inbounds i8, i8* %5, i64 272
  %219 = bitcast i8* %218 to double*
  %_rtB__UnitDelay = load double, double* %219, align 1
  %tmp33 = fsub double %tmp32, %_rtB__UnitDelay
  %220 = getelementptr inbounds i8, i8* %5, i64 400
  %221 = bitcast i8* %220 to double*
  %_rtB__UnitConversion_k = load double, double* %221, align 1
  %tmp34 = fdiv double %tmp33, %_rtB__UnitConversion_k
  %222 = getelementptr inbounds i8, i8* %5, i64 304
  %223 = bitcast i8* %222 to double*
  store double %tmp34, double* %223, align 1
  %224 = getelementptr inbounds i8, i8* %5, i64 464
  %225 = bitcast i8* %224 to double*
  %_rtB__THatk = load double, double* %225, align 1
  %226 = getelementptr inbounds i8, i8* %4, i64 280
  %227 = bitcast i8* %226 to double*
  %_rtP__Saturation_UpperSat_e = load double, double* %227, align 1
  %228 = fcmp ogt double %_rtB__THatk, %_rtP__Saturation_UpperSat_e
  %229 = bitcast double %_rtB__THatk to i64
  %230 = bitcast double %_rtP__Saturation_UpperSat_e to i64
  br i1 %228, label %true58, label %false59

true58:                                           ; preds = %false57
  %231 = bitcast i8* %226 to i64*
  %232 = getelementptr inbounds i8, i8* %5, i64 312
  %233 = bitcast i8* %232 to i64*
  store i64 %230, i64* %233, align 1
  br label %false39

false59:                                          ; preds = %false57
  %234 = getelementptr inbounds i8, i8* %4, i64 288
  %235 = bitcast i8* %234 to double*
  %_rtP__Saturation_LowerSat_j3 = load double, double* %235, align 1
  %236 = fcmp olt double %_rtB__THatk, %_rtP__Saturation_LowerSat_j3
  %237 = bitcast double %_rtP__Saturation_LowerSat_j3 to i64
  br i1 %236, label %true60, label %false61

true60:                                           ; preds = %false59
  %238 = bitcast i8* %234 to i64*
  %239 = getelementptr inbounds i8, i8* %5, i64 312
  %240 = bitcast i8* %239 to i64*
  store i64 %237, i64* %240, align 1
  br label %false39

false61:                                          ; preds = %false59
  %241 = bitcast i8* %224 to i64*
  %242 = getelementptr inbounds i8, i8* %5, i64 312
  %243 = bitcast i8* %242 to i64*
  store i64 %229, i64* %243, align 1
  br label %false39

true62:                                           ; preds = %false39
  %244 = bitcast i8* %6 to float*
  %_rtU__RefSignal = load float, float* %244, align 1
  %245 = fpext float %_rtU__RefSignal to double
  %246 = getelementptr inbounds i8, i8* %5, i64 320
  %247 = bitcast i8* %246 to double*
  store double %245, double* %247, align 1
  br label %false63

false63:                                          ; preds = %false39, %true62
  br i1 %7, label %true13, label %true64

true64:                                           ; preds = %false63
  %248 = getelementptr inbounds i8, i8* %5, i64 488
  %249 = bitcast i8* %248 to double*
  %_rtB__OUTPUT_1_0_el357 = load double, double* %249, align 1
  %250 = getelementptr inbounds i8, i8* %4, i64 296
  %251 = bitcast i8* %250 to double*
  %_rtP__Bias_Bias = load double, double* %251, align 1
  %tmp35 = fadd double %_rtB__OUTPUT_1_0_el357, %_rtP__Bias_Bias
  %252 = getelementptr inbounds i8, i8* %5, i64 328
  %253 = bitcast i8* %252 to double*
  store double %tmp35, double* %253, align 1
  call void @vm_ssCallAccelRunBlock(i8* %S, i32 3, i32 89, i32 104)
  %254 = call i8 @vm_getHasError(i8* %S)
  %255 = and i8 %254, 1
  %256 = icmp eq i8 %255, 0
  br i1 %256, label %false65, label %true13

false65:                                          ; preds = %true64
  %257 = getelementptr inbounds i8, i8* %4, i64 304
  %258 = bitcast i8* %257 to double*
  %_rtP__GAIN_Gain_h = load double, double* %258, align 1
  %259 = getelementptr inbounds i8, i8* %5, i64 520
  %260 = bitcast i8* %259 to double*
  %_rtB__OUTPUT_1_0_el364 = load double, double* %260, align 1
  %tmp36 = fmul double %_rtP__GAIN_Gain_h, %_rtB__OUTPUT_1_0_el364
  %261 = fptrunc double %tmp36 to float
  %262 = getelementptr inbounds i8, i8* %5, i64 552
  %263 = bitcast i8* %262 to float*
  store float %261, float* %263, align 1
  %264 = getelementptr inbounds i8, i8* %5, i64 536
  %265 = bitcast i8* %264 to i32*
  %_rtB__DataTypeConversion1367404 = load i32, i32* %265, align 1
  %266 = getelementptr inbounds i8, i8* %5, i64 16
  %267 = bitcast i8* %266 to i32*
  store i32 %_rtB__DataTypeConversion1367404, i32* %267, align 1
  %268 = getelementptr inbounds i8, i8* %5, i64 540
  %269 = bitcast i8* %268 to i32*
  %_rtB__DataTypeConversion_l370405 = load i32, i32* %269, align 1
  %270 = getelementptr inbounds i8, i8* %5, i64 20
  %271 = bitcast i8* %270 to i32*
  store i32 %_rtB__DataTypeConversion_l370405, i32* %271, align 1
  %272 = bitcast i8* %262 to i32*
  %273 = bitcast float %261 to i32
  %274 = getelementptr inbounds i8, i8* %5, i64 24
  %275 = bitcast i8* %274 to i32*
  store i32 %273, i32* %275, align 1
  call void @vm_ssCallAccelRunBlock(i8* %S, i32 3, i32 108, i32 104)
  %276 = call i8 @vm_getHasError(i8* %S)
  %277 = and i8 %276, 1
  %278 = icmp eq i8 %277, 0
  br i1 %278, label %false66, label %true13

false66:                                          ; preds = %false65
  %279 = getelementptr inbounds i8, i8* %4, i64 312
  %280 = bitcast i8* %279 to double*
  %_rtP__Gain_Gain_k = load double, double* %280, align 1
  %281 = bitcast i8* %268 to float*
  %_rtB__DataTypeConversion_l378 = load float, float* %281, align 1
  %282 = fpext float %_rtB__DataTypeConversion_l378 to double
  %tmp37 = fmul double %_rtP__Gain_Gain_k, %282
  %283 = getelementptr inbounds i8, i8* %5, i64 336
  %284 = bitcast i8* %283 to double*
  store double %tmp37, double* %284, align 1
  %285 = getelementptr inbounds i8, i8* %3, i64 216
  %286 = bitcast i8* %285 to [2 x double]*
  %287 = getelementptr inbounds i8, i8* %3, i64 449
  %_rtDW__RateTransition_ActiveBufIdx = load i8, i8* %287, align 1
  %288 = sext i8 %_rtDW__RateTransition_ActiveBufIdx to i64
  %289 = getelementptr inbounds [2 x double], [2 x double]* %286, i64 0, i64 %288
  %290 = bitcast double* %289 to i64*
  %_rtDW__RateTransition_Buffer_el407 = load i64, i64* %290, align 1
  %291 = getelementptr inbounds i8, i8* %5, i64 344
  %292 = bitcast i8* %291 to i64*
  store i64 %_rtDW__RateTransition_Buffer_el407, i64* %292, align 1
  call void @vm_ssCallAccelRunBlock(i8* %S, i32 3, i32 126, i32 104)
  %293 = call i8 @vm_getHasError(i8* %S)
  %294 = and i8 %293, 1
  %295 = icmp eq i8 %294, 0
  br i1 %295, label %false67, label %true13

false67:                                          ; preds = %false66
  call void @vm_ssCallAccelRunBlock(i8* %S, i32 3, i32 127, i32 104)
  %296 = call i8 @vm_getHasError(i8* %S)
  %297 = and i8 %296, 1
  %298 = icmp eq i8 %297, 0
  br i1 %298, label %false68, label %true13

false68:                                          ; preds = %false67
  call void @vm_ssCallAccelRunBlock(i8* %S, i32 3, i32 128, i32 104)
  %299 = call i8 @vm_getHasError(i8* %S)
  %300 = and i8 %299, 1
  %301 = icmp eq i8 %300, 0
  br i1 %301, label %false69, label %true13

false69:                                          ; preds = %false68
  call void @vm_ssCallAccelRunBlock(i8* %S, i32 3, i32 129, i32 104)
  %302 = call i8 @vm_getHasError(i8* %S)
  %303 = and i8 %302, 1
  %304 = icmp eq i8 %303, 0
  br i1 %304, label %false70, label %true13

false70:                                          ; preds = %false69
  call void @vm_ssCallAccelRunBlock(i8* %S, i32 3, i32 130, i32 104)
  %305 = call i8 @vm_getHasError(i8* %S)
  %306 = and i8 %305, 1
  %307 = icmp eq i8 %306, 0
  br i1 %307, label %false71, label %true13

false71:                                          ; preds = %false70
  call void @vm_ssCallAccelRunBlock(i8* %S, i32 3, i32 131, i32 104)
  %308 = call i8 @vm_getHasError(i8* %S)
  %309 = and i8 %308, 1
  %310 = icmp eq i8 %309, 0
  br i1 %310, label %false72, label %true13

false72:                                          ; preds = %false71
  call void @vm_ssCallAccelRunBlock(i8* %S, i32 3, i32 132, i32 104)
  %311 = call i8 @vm_getHasError(i8* %S)
  %312 = and i8 %311, 1
  %313 = icmp eq i8 %312, 0
  br i1 %313, label %false73, label %true13

false73:                                          ; preds = %false72
  %314 = getelementptr inbounds i8, i8* %5, i64 544
  %315 = bitcast i8* %314 to float*
  %_rtB__DataTypeConversion_g398 = load float, float* %315, align 1
  %316 = fpext float %_rtB__DataTypeConversion_g398 to double
  %317 = getelementptr inbounds i8, i8* %5, i64 496
  %318 = bitcast i8* %317 to double*
  %_rtB__OUTPUT_1_0_el400 = load double, double* %318, align 1
  %tmp38 = fmul double %_rtB__OUTPUT_1_0_el400, %316
  %319 = getelementptr inbounds i8, i8* %5, i64 352
  %320 = bitcast i8* %319 to double*
  store double %tmp38, double* %320, align 1
  call void @vm_ssCallAccelRunBlock(i8* %S, i32 3, i32 134, i32 104)
  %321 = call i8 @vm_getHasError(i8* %S)
  br label %true13

merge:                                            ; preds = %true5, %true7, %false8
  %_rtB__Merge118 = phi double [ %_rtP__Saturation_UpperSat, %true5 ], [ %_rtP__Saturation_LowerSat, %true7 ], [ %tmp2, %false8 ]
  %322 = getelementptr inbounds i8, i8* %5, i64 32
  %323 = bitcast i8* %322 to double*
  %324 = fcmp ult double %_rtB__Merge118, 0.000000e+00
  br i1 %324, label %false10, label %true9

merge74:                                          ; preds = %true9, %false10
  %325 = bitcast i8* %322 to i64*
  %_rtB__Merge129427 = load i64, i64* %325, align 1
  %326 = getelementptr inbounds i8, i8* %5, i64 40
  %327 = bitcast i8* %326 to i64*
  store i64 %_rtB__Merge129427, i64* %327, align 1
  %328 = getelementptr inbounds i8, i8* %5, i64 48
  %329 = bitcast i8* %328 to double*
  store double 0.000000e+00, double* %329, align 1
  %330 = getelementptr inbounds i8, i8* %5, i64 56
  %331 = bitcast i8* %330 to double*
  store double 0.000000e+00, double* %331, align 1
  %332 = bitcast i8* %326 to double*
  %333 = bitcast i64 %_rtB__Merge129427 to double
  %334 = getelementptr inbounds i8, i8* %3, i64 16
  %335 = bitcast i8* %334 to double*
  %_rtDW__INPUT_1_1_1_Discrete_el = load double, double* %335, align 1
  %336 = fcmp une double %333, %_rtDW__INPUT_1_1_1_Discrete_el
  %337 = uitofp i1 %336 to double
  %338 = getelementptr inbounds i8, i8* %3, i64 8
  %339 = bitcast i8* %338 to double*
  store double %337, double* %339, align 1
  %_rtB__INPUT_1_1_1_el137428 = load i64, i64* %327, align 1
  %340 = bitcast i8* %334 to i64*
  store i64 %_rtB__INPUT_1_1_1_el137428, i64* %340, align 1
  store i64 %_rtB__INPUT_1_1_1_el137428, i64* %327, align 1
  %341 = bitcast i8* %338 to i64*
  %_rtDW__INPUT_1_1_1_Discrete_el143430 = load i64, i64* %341, align 1
  %342 = getelementptr inbounds i8, i8* %5, i64 64
  %343 = bitcast i8* %342 to i64*
  store i64 %_rtDW__INPUT_1_1_1_Discrete_el143430, i64* %343, align 1
  %344 = getelementptr inbounds i8, i8* %5, i64 72
  %345 = bitcast i8* %344 to i64*
  %_rtB__Merge1431 = load i64, i64* %345, align 1
  %346 = getelementptr inbounds i8, i8* %5, i64 80
  %347 = bitcast i8* %346 to i64*
  store i64 %_rtB__Merge1431, i64* %347, align 1
  %348 = getelementptr inbounds i8, i8* %5, i64 88
  %349 = bitcast i8* %348 to double*
  store double 0.000000e+00, double* %349, align 1
  %350 = getelementptr inbounds i8, i8* %5, i64 96
  %351 = bitcast i8* %350 to double*
  store double 0.000000e+00, double* %351, align 1
  %352 = bitcast i8* %346 to double*
  %353 = bitcast i64 %_rtB__Merge1431 to double
  %354 = getelementptr inbounds i8, i8* %3, i64 32
  %355 = bitcast i8* %354 to double*
  %_rtDW__INPUT_2_1_1_Discrete_el = load double, double* %355, align 1
  %356 = fcmp une double %353, %_rtDW__INPUT_2_1_1_Discrete_el
  %357 = uitofp i1 %356 to double
  %358 = getelementptr inbounds i8, i8* %3, i64 24
  %359 = bitcast i8* %358 to double*
  store double %357, double* %359, align 1
  %_rtB__INPUT_2_1_1_el153432 = load i64, i64* %347, align 1
  %360 = bitcast i8* %354 to i64*
  store i64 %_rtB__INPUT_2_1_1_el153432, i64* %360, align 1
  store i64 %_rtB__INPUT_2_1_1_el153432, i64* %347, align 1
  %361 = bitcast i8* %358 to i64*
  %_rtDW__INPUT_2_1_1_Discrete_el159434 = load i64, i64* %361, align 1
  %362 = getelementptr inbounds i8, i8* %5, i64 104
  %363 = bitcast i8* %362 to i64*
  store i64 %_rtDW__INPUT_2_1_1_Discrete_el159434, i64* %363, align 1
  call void @vm_ssCallAccelRunBlock(i8* %S, i32 3, i32 14, i32 104)
  %364 = call i8 @vm_getHasError(i8* %S)
  %365 = and i8 %364, 1
  %366 = icmp eq i8 %365, 0
  br i1 %366, label %false14, label %true13

merge75:                                          ; preds = %false18, %true17, %false20
  %rtb_DeadZone_.0 = phi double [ %tmp6, %true17 ], [ %tmp5, %false20 ], [ 0.000000e+00, %false18 ]
  %367 = getelementptr inbounds i8, i8* %5, i64 368
  %368 = bitcast i8* %367 to double*
  %_rtB__UnitConversion_f = load double, double* %368, align 1
  %tmp7 = fmul double %tmp0, %_rtB__UnitConversion_f
  %369 = getelementptr inbounds i8, i8* %5, i64 216
  %370 = bitcast i8* %369 to double*
  store double %tmp7, double* %370, align 1
  %371 = call double @muDoubleScalarSign(double %rtb_DeadZone_.0)
  %372 = call i8 @muDoubleScalarIsNaN(double %371)
  %373 = and i8 %372, 1
  %374 = icmp eq i8 %373, 0
  br i1 %374, label %false22, label %merge76

merge76:                                          ; preds = %merge75, %false22
  %rtb_control_error_.0 = phi double [ %88, %false22 ], [ 0.000000e+00, %merge75 ]
  %_rtB__Switch = load double, double* %370, align 1
  %375 = call double @muDoubleScalarSign(double %_rtB__Switch)
  %376 = call i8 @muDoubleScalarIsNaN(double %375)
  %377 = and i8 %376, 1
  %378 = icmp eq i8 %377, 0
  br i1 %378, label %false24, label %merge77

merge77:                                          ; preds = %merge76, %false24
  %tmp_.0 = phi double [ %89, %false24 ], [ 0.000000e+00, %merge76 ]
  %379 = fcmp olt double %rtb_control_error_.0, 0.000000e+00
  %tmp8 = fsub double -0.000000e+00, %rtb_control_error_.0
  %380 = fptoui double %tmp8 to i8
  %tmp9 = sub i8 0, %380
  %381 = fptoui double %rtb_control_error_.0 to i8
  %rtb_control_error_3.0.in = select i1 %379, i8 %tmp9, i8 %381
  %382 = fcmp olt double %tmp_.0, 0.000000e+00
  %tmp10 = fsub double -0.000000e+00, %tmp_.0
  %383 = fptoui double %tmp10 to i8
  %tmp11 = sub i8 0, %383
  %384 = fptoui double %tmp_.0 to i8
  %tmp_4.0.in = select i1 %382, i8 %tmp11, i8 %384
  %385 = getelementptr inbounds i8, i8* %4, i64 128
  %386 = bitcast i8* %385 to double*
  %_rtP__ZeroGain_Gain = load double, double* %386, align 1
  %tmp12 = fmul double %tmp2, %_rtP__ZeroGain_Gain
  %387 = fcmp une double %tmp12, %rtb_DeadZone_.0
  %388 = icmp eq i8 %rtb_control_error_3.0.in, %tmp_4.0.in
  %389 = and i1 %388, %387
  br i1 %389, label %true29, label %false30

merge80:                                          ; preds = %true40, %true42, %false43
  %390 = getelementptr inbounds i8, i8* %3, i64 152
  %391 = bitcast i8* %390 to double*
  %_rtDW__UnitDelay_DSTATE_f = load double, double* %391, align 1
  %392 = getelementptr inbounds i8, i8* %4, i64 272
  %393 = bitcast i8* %392 to double*
  %_rtP__DeadZone_End_m = load double, double* %393, align 1
  %394 = fcmp ogt double %_rtDW__UnitDelay_DSTATE_f, %_rtP__DeadZone_End_m
  br i1 %394, label %true44, label %false45

merge81:                                          ; preds = %false45, %true44, %false47
  %rtb_control_error_a_.1 = phi double [ %tmp24, %true44 ], [ %tmp23, %false47 ], [ 0.000000e+00, %false45 ]
  %395 = call double @muDoubleScalarSign(double %rtb_control_error_a_.1)
  %396 = call i8 @muDoubleScalarIsNaN(double %395)
  %397 = and i8 %396, 1
  %398 = icmp eq i8 %397, 0
  br i1 %398, label %false49, label %merge82

merge82:                                          ; preds = %merge81, %false49
  %rtb_control_error_.1 = phi double [ %207, %false49 ], [ 0.000000e+00, %merge81 ]
  %_rtB__Switch_l = load double, double* %184, align 1
  %399 = call double @muDoubleScalarSign(double %_rtB__Switch_l)
  %400 = call i8 @muDoubleScalarIsNaN(double %399)
  %401 = and i8 %400, 1
  %402 = icmp eq i8 %401, 0
  br i1 %402, label %false51, label %merge83

merge83:                                          ; preds = %merge82, %false51
  %tmp_.1 = phi double [ %208, %false51 ], [ 0.000000e+00, %merge82 ]
  %403 = fcmp olt double %rtb_control_error_.1, 0.000000e+00
  %tmp25 = fsub double -0.000000e+00, %rtb_control_error_.1
  %404 = fptoui double %tmp25 to i8
  %tmp26 = sub i8 0, %404
  %405 = fptoui double %rtb_control_error_.1 to i8
  %rtb_control_error_1.0.in = select i1 %403, i8 %tmp26, i8 %405
  %406 = fcmp olt double %tmp_.1, 0.000000e+00
  %tmp27 = fsub double -0.000000e+00, %tmp_.1
  %407 = fptoui double %tmp27 to i8
  %tmp28 = sub i8 0, %407
  %408 = fptoui double %tmp_.1 to i8
  %tmp_2.0.in = select i1 %406, i8 %tmp28, i8 %408
  %409 = getelementptr inbounds i8, i8* %4, i64 256
  %410 = bitcast i8* %409 to double*
  %_rtP__ZeroGain_Gain_m = load double, double* %410, align 1
  %_rtDW__UnitDelay_DSTATE_f321 = load double, double* %391, align 1
  %tmp29 = fmul double %_rtP__ZeroGain_Gain_m, %_rtDW__UnitDelay_DSTATE_f321
  %411 = fcmp une double %tmp29, %rtb_control_error_a_.1
  %412 = icmp eq i8 %rtb_control_error_1.0.in, %tmp_2.0.in
  %413 = and i1 %412, %411
  %414 = zext i1 %413 to i8
  %415 = getelementptr inbounds i8, i8* %5, i64 556
  store i8 %414, i8* %415, align 1
  %416 = getelementptr inbounds i8, i8* %3, i64 454
  %_rtDW__Memory_PreviousInput = load i8, i8* %416, align 1
  %417 = and i8 %_rtDW__Memory_PreviousInput, 1
  %418 = icmp eq i8 %417, 0
  br i1 %418, label %false57, label %true56
}

declare i8* @vm_ssGetU(i8*)

declare void @vm_srUpdateBC(i8*)

declare double @muDoubleScalarSign(double)

declare i8 @muDoubleScalarIsNaN(double)

declare double @muDoubleScalarRem(double, double)

define void @SystemInitialize(i8* %S) {
SystemInitialize_entry:
  %0 = call i8* @vm_ssGetRootDWork(i8* %S)
  %1 = call i8* @vm_ssGetModelRtp(i8* %S)
  %2 = call i8* @vm__ssGetModelBlockIO(i8* %S)
  %3 = getelementptr inbounds i8, i8* %1, i64 64
  %4 = bitcast i8* %3 to i64*
  %_rtP__RateTransition3_InitialCondition44 = load i64, i64* %4, align 1
  %5 = getelementptr inbounds i8, i8* %0, i64 160
  %6 = bitcast i8* %5 to i64*
  store i64 %_rtP__RateTransition3_InitialCondition44, i64* %6, align 1
  %7 = getelementptr inbounds i8, i8* %1, i64 456
  %8 = bitcast i8* %7 to i32*
  %_rtP__UnitDelay1_InitialCondition45 = load i32, i32* %8, align 1
  %9 = getelementptr inbounds i8, i8* %0, i64 392
  %10 = bitcast i8* %9 to i32*
  store i32 %_rtP__UnitDelay1_InitialCondition45, i32* %10, align 1
  %11 = getelementptr inbounds i8, i8* %1, i64 80
  %12 = bitcast i8* %11 to i64*
  %_rtP__Integrator_IC46 = load i64, i64* %12, align 1
  %13 = bitcast i8* %0 to i64*
  store i64 %_rtP__Integrator_IC46, i64* %13, align 1
  %14 = getelementptr inbounds i8, i8* %1, i64 460
  %15 = bitcast i8* %14 to i32*
  %_rtP__RateTransition1_InitialCondition47 = load i32, i32* %15, align 1
  %16 = getelementptr inbounds i8, i8* %0, i64 400
  %17 = bitcast i8* %16 to i32*
  store i32 %_rtP__RateTransition1_InitialCondition47, i32* %17, align 1
  %18 = getelementptr inbounds i8, i8* %1, i64 152
  %19 = bitcast i8* %18 to i64*
  %_rtP__RateTransition_InitialCondition48 = load i64, i64* %19, align 1
  %20 = getelementptr inbounds i8, i8* %0, i64 192
  %21 = bitcast i8* %20 to i64*
  store i64 %_rtP__RateTransition_InitialCondition48, i64* %21, align 1
  %_rtP__RateTransition_InitialCondition1549 = load i64, i64* %19, align 1
  %22 = getelementptr inbounds i8, i8* %0, i64 200
  %23 = bitcast i8* %22 to i64*
  store i64 %_rtP__RateTransition_InitialCondition1549, i64* %23, align 1
  %_rtP__RateTransition_InitialCondition1850 = load i64, i64* %19, align 1
  %24 = getelementptr inbounds i8, i8* %0, i64 208
  %25 = bitcast i8* %24 to i64*
  store i64 %_rtP__RateTransition_InitialCondition1850, i64* %25, align 1
  %26 = getelementptr inbounds i8, i8* %1, i64 464
  %27 = bitcast i8* %26 to i32*
  %_rtP__UnitDelay_InitialCondition_g51 = load i32, i32* %27, align 1
  %28 = getelementptr inbounds i8, i8* %0, i64 396
  %29 = bitcast i8* %28 to i32*
  store i32 %_rtP__UnitDelay_InitialCondition_g51, i32* %29, align 1
  %30 = getelementptr inbounds i8, i8* %1, i64 168
  %31 = bitcast i8* %30 to i64*
  %_rtP__DiscreteTimeIntegrator1_IC52 = load i64, i64* %31, align 1
  %32 = getelementptr inbounds i8, i8* %0, i64 120
  %33 = bitcast i8* %32 to i64*
  store i64 %_rtP__DiscreteTimeIntegrator1_IC52, i64* %33, align 1
  %34 = getelementptr inbounds i8, i8* %1, i64 184
  %35 = bitcast i8* %34 to i64*
  %_rtP__DiscreteTimeIntegrator_IC53 = load i64, i64* %35, align 1
  %36 = getelementptr inbounds i8, i8* %0, i64 128
  %37 = bitcast i8* %36 to i64*
  store i64 %_rtP__DiscreteTimeIntegrator_IC53, i64* %37, align 1
  %38 = getelementptr inbounds i8, i8* %1, i64 208
  %39 = bitcast i8* %38 to i64*
  %_rtP__UnitDelay_InitialCondition54 = load i64, i64* %39, align 1
  %40 = getelementptr inbounds i8, i8* %0, i64 136
  %41 = bitcast i8* %40 to i64*
  store i64 %_rtP__UnitDelay_InitialCondition54, i64* %41, align 1
  %42 = getelementptr inbounds i8, i8* %1, i64 468
  %43 = bitcast i8* %42 to i32*
  %_rtP__RateTransition2_InitialCondition55 = load i32, i32* %43, align 1
  %44 = getelementptr inbounds i8, i8* %0, i64 408
  %45 = bitcast i8* %44 to i32*
  store i32 %_rtP__RateTransition2_InitialCondition55, i32* %45, align 1
  %46 = getelementptr inbounds i8, i8* %1, i64 224
  %47 = bitcast i8* %46 to i64*
  %_rtP__DiscreteTimeIntegrator_IC_f56 = load i64, i64* %47, align 1
  %48 = getelementptr inbounds i8, i8* %0, i64 144
  %49 = bitcast i8* %48 to i64*
  store i64 %_rtP__DiscreteTimeIntegrator_IC_f56, i64* %49, align 1
  %50 = getelementptr inbounds i8, i8* %1, i64 248
  %51 = bitcast i8* %50 to i64*
  %_rtP__UnitDelay_InitialCondition_m57 = load i64, i64* %51, align 1
  %52 = getelementptr inbounds i8, i8* %0, i64 152
  %53 = bitcast i8* %52 to i64*
  store i64 %_rtP__UnitDelay_InitialCondition_m57, i64* %53, align 1
  %54 = getelementptr inbounds i8, i8* %1, i64 472
  %_rtP__Memory_InitialCondition = load i8, i8* %54, align 1
  %55 = getelementptr inbounds i8, i8* %0, i64 454
  store i8 %_rtP__Memory_InitialCondition, i8* %55, align 1
  %56 = getelementptr inbounds i8, i8* %1, i64 320
  %57 = bitcast i8* %56 to i64*
  %_rtP__RateTransition_InitialCondition_j58 = load i64, i64* %57, align 1
  %58 = getelementptr inbounds i8, i8* %0, i64 216
  %59 = bitcast i8* %58 to i64*
  store i64 %_rtP__RateTransition_InitialCondition_j58, i64* %59, align 1
  %60 = getelementptr inbounds i8, i8* %1, i64 104
  %61 = bitcast i8* %60 to i64*
  %_rtP__Merge_InitialOutput59 = load i64, i64* %61, align 1
  %62 = getelementptr inbounds i8, i8* %2, i64 32
  %63 = bitcast i8* %62 to i64*
  store i64 %_rtP__Merge_InitialOutput59, i64* %63, align 1
  %64 = getelementptr inbounds i8, i8* %1, i64 112
  %65 = bitcast i8* %64 to i64*
  %_rtP__Merge1_InitialOutput60 = load i64, i64* %65, align 1
  %66 = getelementptr inbounds i8, i8* %2, i64 72
  %67 = bitcast i8* %66 to i64*
  store i64 %_rtP__Merge1_InitialOutput60, i64* %67, align 1
  call void @vm_ssCallAccelRunBlock(i8* %S, i32 2, i32 0, i32 102)
  %68 = call i8 @vm_getHasError(i8* %S)
  ret void
}


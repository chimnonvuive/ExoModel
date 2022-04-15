    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 3;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (rtP)
        ;%
            section.nData     = 47;
            section.data(47)  = dumData; %prealloc

                    ;% rtP.x3001_5
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.x30A0_1
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.x30A0_2
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.x30A2_1
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.x30A2_2
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.x30A3_1
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.x30A3_2
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.x30A3_3
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.x30A3_4
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.x30A3_5
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.x520886_ICont
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.x607325_RotIner
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.x607325_RotOmgMax
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.x607325_Torq
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 13;

                    ;% rtP.x607325_TorqConst
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 14;

                    ;% rtP.x607325_VNom
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 15;

                    ;% rtP.DiscretePIController_InitialConditionForIntegrator
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 16;

                    ;% rtP.feedforward_acceleration_Value
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 17;

                    ;% rtP.feedforward_velocity_Value
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 18;

                    ;% rtP.Zero_Value
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 19;

                    ;% rtP.Out1_Y0
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 20;

                    ;% rtP.Gain_Gain
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 21;

                    ;% rtP.Constant1_Value
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 22;

                    ;% rtP.RateTransition3_InitialCondition
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 23;

                    ;% rtP.Integrator_gainval
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 24;

                    ;% rtP.Merge_InitialOutput
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 25;

                    ;% rtP.Merge1_InitialOutput
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 26;

                    ;% rtP.GAIN_Gain
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 27;

                    ;% rtP.ZeroGain_Gain
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 28;

                    ;% rtP.RateTransition_InitialCondition
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 29;

                    ;% rtP.DiscreteTimeIntegrator1_gainval
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 30;

                    ;% rtP.DiscreteTimeIntegrator1_IC
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 31;

                    ;% rtP.DiscreteTimeIntegrator_gainval
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 32;

                    ;% rtP.DiscreteTimeIntegrator_IC
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 33;

                    ;% rtP.UnitDelay_InitialCondition
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 34;

                    ;% rtP.DiscreteTimeIntegrator_gainval_bz4vjpssjb
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 35;

                    ;% rtP.DiscreteTimeIntegrator_IC_f5egosl31z
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 36;

                    ;% rtP.UnitDelay_InitialCondition_mz0dqclppl
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 37;

                    ;% rtP.ZeroGain_Gain_m40ckabu3g
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 38;

                    ;% rtP.Bias_Bias
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 39;

                    ;% rtP.GAIN_Gain_hw2btsfaso
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 40;

                    ;% rtP.Gain_Gain_ktcz42xa5t
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 41;

                    ;% rtP.RateTransition_InitialCondition_jp45hakdeo
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 42;

                    ;% rtP.Constant_Value
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 43;

                    ;% rtP.Gain_Gain_pah44eqa5n
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 44;

                    ;% rtP.Gain_Gain_gofic1b4wb
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 45;

                    ;% rtP.Gain1_Gain
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 46;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% rtP.UnitDelay1_InitialCondition
                    section.data(1).logicalSrcIdx = 47;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.RateTransition1_InitialCondition
                    section.data(2).logicalSrcIdx = 48;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.UnitDelay_InitialCondition_gjecjbvtlj
                    section.data(3).logicalSrcIdx = 49;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.RateTransition2_InitialCondition
                    section.data(4).logicalSrcIdx = 50;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.Memory_InitialCondition
                    section.data(1).logicalSrcIdx = 51;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 3;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (rtB)
        ;%
            section.nData     = 30;
            section.data(30)  = dumData; %prealloc

                    ;% rtB.fu0jmlqjl4
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.pfzpikjxxm
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.gvcs01gfki
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 5;

                    ;% rtB.dm5dfvv4bd
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 6;

                    ;% rtB.jio04e5l2y
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 10;

                    ;% rtB.dq414il1rg
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 23;

                    ;% rtB.bq1g2orrwt
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 24;

                    ;% rtB.dqihdby3th
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 27;

                    ;% rtB.mlqvt2g1kq
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 28;

                    ;% rtB.m0vxoft0f3
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 29;

                    ;% rtB.llz1du4krc
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 30;

                    ;% rtB.kzcwpgqn1e
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 31;

                    ;% rtB.cooy4a5ivy
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 32;

                    ;% rtB.onfqtofgj3
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 33;

                    ;% rtB.dt3k0ww03w
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 34;

                    ;% rtB.akpvqkyld1
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 35;

                    ;% rtB.gzvslpqkcd
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 36;

                    ;% rtB.fjg2zg0f3m
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 37;

                    ;% rtB.lh1uwltxg0
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 38;

                    ;% rtB.knorcxbsbi
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 39;

                    ;% rtB.hcs0qpqt3t
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 40;

                    ;% rtB.opqftfcl54
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 41;

                    ;% rtB.pyuyn3v4dn
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 42;

                    ;% rtB.alrmk4rget
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 43;

                    ;% rtB.gv4hdvrgjr
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 44;

                    ;% rtB.m0pnodctem
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 45;

                    ;% rtB.dj030qsvlg
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 46;

                    ;% rtB.ciumjk5i4b
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 47;

                    ;% rtB.jv03wguaj0
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 48;

                    ;% rtB.ewoec4jpzh
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 49;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 5;
            section.data(5)  = dumData; %prealloc

                    ;% rtB.dbxopmzlmg
                    section.data(1).logicalSrcIdx = 30;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.dyrup5dyjo
                    section.data(2).logicalSrcIdx = 31;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.f3ovsqvcrg
                    section.data(3).logicalSrcIdx = 32;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.ekyms1wurq
                    section.data(4).logicalSrcIdx = 33;
                    section.data(4).dtTransOffset = 3;

                    ;% rtB.lugwzdstdq
                    section.data(5).logicalSrcIdx = 34;
                    section.data(5).dtTransOffset = 4;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtB.oixjxwb01f
                    section.data(1).logicalSrcIdx = 35;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(3) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 6;
        sectIdxOffset = 3;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (rtDW)
        ;%
            section.nData     = 13;
            section.data(13)  = dumData; %prealloc

                    ;% rtDW.i1ov2bkgtq
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.pxmhr5ub4g
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.b3ieuujw5h
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 3;

                    ;% rtDW.ehs0ismbbz
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 5;

                    ;% rtDW.pov3wcjhuh
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 15;

                    ;% rtDW.djn0bieqvx
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 16;

                    ;% rtDW.bwk11a0owp
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 17;

                    ;% rtDW.kxbojg1zkz
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 18;

                    ;% rtDW.okvdpbekia
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 19;

                    ;% rtDW.ep34iowbww
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 20;

                    ;% rtDW.idsvig0gbj
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 22;

                    ;% rtDW.jy0ot5cu1a
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 23;

                    ;% rtDW.hu3arlbsbz
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 26;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 19;
            section.data(19)  = dumData; %prealloc

                    ;% rtDW.curcdagsjb
                    section.data(1).logicalSrcIdx = 13;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.an0iwqneok
                    section.data(2).logicalSrcIdx = 14;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.k32aasjgy5
                    section.data(3).logicalSrcIdx = 15;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.k10l4nww4e
                    section.data(4).logicalSrcIdx = 16;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.ebj3xgeqfr
                    section.data(5).logicalSrcIdx = 17;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.ct2a0l3urc
                    section.data(6).logicalSrcIdx = 18;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.enba3cq10q
                    section.data(7).logicalSrcIdx = 19;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.lwnxawb1gu
                    section.data(8).logicalSrcIdx = 20;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.h05rg3xqon
                    section.data(9).logicalSrcIdx = 21;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.ljaggftgsd
                    section.data(10).logicalSrcIdx = 22;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.fzxgf0zfea.LoggedData
                    section.data(11).logicalSrcIdx = 23;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.m5juniwyrn.LoggedData
                    section.data(12).logicalSrcIdx = 24;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.dkzhh4atc0.LoggedData
                    section.data(13).logicalSrcIdx = 25;
                    section.data(13).dtTransOffset = 13;

                    ;% rtDW.hjucof00tp.AQHandles
                    section.data(14).logicalSrcIdx = 26;
                    section.data(14).dtTransOffset = 14;

                    ;% rtDW.odhcan23dk.LoggedData
                    section.data(15).logicalSrcIdx = 27;
                    section.data(15).dtTransOffset = 15;

                    ;% rtDW.e0cigxu0i5.LoggedData
                    section.data(16).logicalSrcIdx = 28;
                    section.data(16).dtTransOffset = 16;

                    ;% rtDW.jgmnqn1qxg.LoggedData
                    section.data(17).logicalSrcIdx = 29;
                    section.data(17).dtTransOffset = 17;

                    ;% rtDW.oe2lgyaknx.LoggedData
                    section.data(18).logicalSrcIdx = 30;
                    section.data(18).dtTransOffset = 18;

                    ;% rtDW.iut021q1ij.LoggedData
                    section.data(19).logicalSrcIdx = 31;
                    section.data(19).dtTransOffset = 19;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% rtDW.bsf12pb2h5
                    section.data(1).logicalSrcIdx = 32;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.alwmsbt4vi
                    section.data(2).logicalSrcIdx = 33;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.ewa1ky2aid
                    section.data(3).logicalSrcIdx = 34;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.fu12tl5lft
                    section.data(4).logicalSrcIdx = 35;
                    section.data(4).dtTransOffset = 4;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.pk134fwa0i
                    section.data(1).logicalSrcIdx = 36;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.krdhpu2htv
                    section.data(2).logicalSrcIdx = 37;
                    section.data(2).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 8;
            section.data(8)  = dumData; %prealloc

                    ;% rtDW.cwozdkk230
                    section.data(1).logicalSrcIdx = 38;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.jelgxmupj2
                    section.data(2).logicalSrcIdx = 39;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.idud0pvpup
                    section.data(3).logicalSrcIdx = 40;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.gy1pmud0mj
                    section.data(4).logicalSrcIdx = 41;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.dmyez5rj5c
                    section.data(5).logicalSrcIdx = 42;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.enj3fp5ek4
                    section.data(6).logicalSrcIdx = 43;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.fvfxc3w3vh
                    section.data(7).logicalSrcIdx = 44;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.ckv0xszqnn
                    section.data(8).logicalSrcIdx = 45;
                    section.data(8).dtTransOffset = 7;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtDW.goks4dbmi4
                    section.data(1).logicalSrcIdx = 46;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.apyngkq3zi
                    section.data(2).logicalSrcIdx = 47;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.gkhcdetyhn
                    section.data(3).logicalSrcIdx = 48;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 223359711;
    targMap.checksum1 = 930802253;
    targMap.checksum2 = 1300783331;
    targMap.checksum3 = 2119893538;


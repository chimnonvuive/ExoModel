load motorModel.mat
load expsetup
% ts=0.001; a=25;b=133; sys=tf(b,[1,a,0]);
csys = canon(m12,'companion');

dsys = c2d(ss(csys.A',csys.C',csys.B',csys.D),Ts)
% A = dsys.A; B = dsys.B;
% c = 15;
% C = [c 1]';

% sys_cont = tf(133,[1 25 0]);
% csys = canon(sys_cont,'companion');
% A = csys.A';
% B = csys.C';
% C = csys.B';
% D = csys.D;
% sys_disc = c2d(ss(A,B,C,D),0.001)
% C = [15 1]';

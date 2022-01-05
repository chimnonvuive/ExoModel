function winterfig(MM)
% figure EMG profile, filtered 3 Hz according to Winter
Tc = [ 1.6 1.36 1.18 1.10 1.02 ] ;% stride times for these data
for k = 1:5 % speeds 
	[B,A] = winterf(3*Tc(k)/50);
	mf = filter(B,A,[MM(:,k);MM(:,k)]);
   MF(:,k) = mf(101:200);
end

	p = [ 100,1:100,1:50];
   plot(MF(p,:));
   axis([0 150 0 inf]);
   legend('0.75 m/s','1.00 m/s','1.25 m/s','1.50 m/s','1.75 m/s');
   xlabel('% of stride');
   ylabel('filtered EMG (µV)');
%ginput(1)

function [ B , A ] = winterf(f0)
%calculates filter coefficients 
%for 2nd order critically damped filter
% according to DA Winter
% f0 = cutoff freq as a fraction of HALF the sampling freq
wc = tan(pi*f0/2);
K1 = 2*wc;
K2 = wc^2;
B(1) = K2/(1+K1+K2);
B(2) = 2*B(1);
B(3) = B(1);
K3 = 2*B(1)/K2;
A(1) = 1;
A(2) = 2*B(1)-K3;
A(3) = -1 + 2*B(1)+K3;

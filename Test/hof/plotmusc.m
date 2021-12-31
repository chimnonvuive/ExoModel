function plotmusc(MM)
% plots set of EMG profiles
	p = [ 100,1:100,1:50];
   plot(MM(p,:));
   axis([0 150 0 inf]);
   legend('0.75 m/s','1.00 m/s','1.25 m/s','1.50 m/s','1.75 m/s');
   xlabel('% of stride');
   ylabel('EMG (µV)');
   
   
% tmp = out.simout;
% x = tmp.time;
% v = tmp.Data;
% xq = linspace(0,10,1000)';
% vq1 = interp1(x,v,xq);
% 
% TT = timetable(seconds(xq),vq1);
% 
% [pxx,f] = pspectrum(TT);
% 
% plot(f,abs(pxx))
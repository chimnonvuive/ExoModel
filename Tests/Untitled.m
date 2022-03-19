tmp = p1;
x = tmp.time;
v = tmp.Data(:,4);
xq = (0:0.001:x(end))';
vq1 = interp1(x,v,xq);

TT = timetable(seconds(xq),vq1);

[pxx,f] = pspectrum(TT);

plot(f,abs(pxx))

% Ts = 0.015;
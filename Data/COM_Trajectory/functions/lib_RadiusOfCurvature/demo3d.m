N = 101;
theta = linspace(0,pi,N);
x = sin(2*theta);
y = cos(4*theta);
z = cos(6*theta);
X = [x',y',z'];
[L,R,K] = curvature(X);
figure;
plot(L,1./R)
xlabel L
ylabel R
title('Curvature vs. cumulative curve length')
figure;
h = plot3(X(:,1),X(:,2),X(:,3)); 
grid on; 
axis equal
set(h,'marker','.');
xlabel x
ylabel y
zlabel z
title('3D curve with curvature vectors')
hold on
quiver3(X(:,1),X(:,2),X(:,3),K(:,1),K(:,2),K(:,3));
hold off
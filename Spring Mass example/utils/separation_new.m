function [x, u, w] = separation_new(X, W, n, m, N)
x = [];%very inefficient but okay...
u = [];
w = [];
startX = 1;
startW = 1;
lenx = n;
lenu = m;
for i = 1:N
    x = [x, X(startX:(startX+lenx -1))];
    startX = startX+ lenx;
    u = [u, X(startX:(startX+lenu-1))];

    startX = startX + lenu;
   
    w = [w, W(startW: (startW+lenx -1))];
    startW = startW + lenx;
end
x = [x, X(startX:(startX+lenx -1))];

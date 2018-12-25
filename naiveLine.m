x0 = 10;
y0 = 10;
y1 = 90;
x1 = 80;
dx = x1 - x0;
dy = y1 - y0;
y = 0;
screen = zeros(200);
for x= x0:x1
    y = y1 + dy * (x - x0) / dx;
    screen(x, round(y)) = 1;
end

imshow(screen)
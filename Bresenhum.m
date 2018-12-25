x0 = 10;
y0 = 10;
y1 = 90;
x1 = 80;
m_new = 2 * (y1 - y0);
slope_error_new = m_new - (x1 - x0);
y = y0;
screen = zeros(200);
for x = x0:x1
    slope_error_new = slope_error_new + m_new;
    if (slope_error_new >= 0)
        y = y + 1;
        slope_error_new = slope_error_new - (2 * (x1 - x0));
    end
    screen(x, y) = 1;
end

imshow(screen)
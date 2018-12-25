theta_grid = linspace(0,2*pi);
phi = 45 * 180 / pi;
X0=10;
Y0=20;
a=40;
b=15;

% the ellipse in x and y coordinates centered at 0
ellipse_x_r = a * cos( theta_grid );
ellipse_y_r = b * sin( theta_grid );

% Define a rotation matrix
R = [ cos(phi) sin(phi); -sin(phi) cos(phi) ];
n = length(ellipse_x_r);

% let's rotate the ellipse to some angle phii and then translate it to (X0, Y0)
r_ellipse = R * [ellipse_x_r; ellipse_y_r] + repmat([X0; Y0], [1, n]);

plot(r_ellipse(1,:),r_ellipse(2,:))
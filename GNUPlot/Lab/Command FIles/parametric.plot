#x(t) = (a + b) cost − b cos((a/b + 1)t)
#y(t) = (a + b)sin t − b sin((a/b + 1)t)
set term png size 600, 600
set title "Epicycloid"
set parametric
set output "parametric.png"
set samples 10000
plot [0:100*pi] 47*cos(t)-29*cos(1.6206*t),47*sin(t)-29*sin(1.6206*t) linestyle 3 title "Parametric Curve"

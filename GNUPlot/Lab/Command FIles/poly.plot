set term png size 1200, 700
# set size 0.5, 0.5
set output "poly.png"
set title "Damping Function"
set ylabel "f(x)"
set xlabel "x"
poly(x) = exp(-x/5)*cos(2*pi*x)
plot [0:5*pi] poly(x) title "exp(-x/10)*cos(2pix)" lw 2 linetype 2

set term png size 600, 400
# set size 0.5, 0.5
set output "poly1.png"
poly(x) = x*x+2*x+3
plot [-15:15] poly(x)  linetype 4

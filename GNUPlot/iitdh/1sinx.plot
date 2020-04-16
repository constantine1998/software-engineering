set term png size 600, 400
# set size 0.5, 0.5
set output "figure1.png"
plot [-3.14:3.14] sin(x) linetype 1  #uses linetype color 4

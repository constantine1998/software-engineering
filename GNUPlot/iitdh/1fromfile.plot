set term png size 600, 400
set size 0.95, 0.98

myTITLE="Effectiveness of Partitions"
myXLABEL="No of Edges"
myYLABEL="Metric values"
mytitle1= "partition 1 cohesion"
mytitle2= "comparing with coupling metric"


set title myTITLE font "Courier new,18" textcolor rgbcolor "violet" 
set xlabel myXLABEL
set ylabel myYLABEL

set key noautotitles
set key title "Symbols\n"


set output "plot1.png"
plot for [col=4:5] 'mydata' using 3:col title columnhead with points

set output "plot2.png"
set title mytitle1 font "Courier new,18" textcolor rgbcolor "violet" 
plot for [col=4:6] 'mydata' using 3:col title columnhead with points

set xlabel "coh1"
set ylabel "metrics"
set output "plot3.png"
set title mytitle2 font "Courier new,18" textcolor rgbcolor "violet" 
plot for [col=5:8] 'mydata' using 5:col title columnhead with points


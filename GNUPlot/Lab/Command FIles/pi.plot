set term png size 600, 600
set title "Souces(Public Distribution) of water in Africa"
set output "pi.png"
unset border
unset tics

b=0.25
s=0.05
B=0.5

a1=0.39*360
a2=a1+0.24*360
a3=a2+0.24*360
a4=a3+0.07*360
a5=a4+0.06*360
set angles degree
set yrange [0:1]
set xrange [0:10]
set style fill solid 1.0 border -1
set obj 1 circle arc [0:a1] fc rgb "red"
set obj 2 circle arc [a1:a2] fc rgb "orange"
set obj 3 circle arc [a2:a3] fc rgb "yellow"
set obj 4 circle arc [a3:a4] fc rgb "forest-green"
set obj 5 circle arc [a4:a5] fc rgb "dark-turquoise"
set obj 1 circle at screen B+s*cos(a1/2),B+s*sin(a1/2) size screen b front
set obj 2 circle at screen B,B size screen b front
set obj 3 circle at screen B,B size screen b front
set obj 4 circle at screen B,B size screen b front
set obj 5 circle at screen B,B size screen b front
set label "Piped Water 39.8%" at 6, 0.9
set label "Standposts 24.5%" at 0,0.25
set label "Wells/Boreholes 24.5%" at 4,0.2
set label "Vendors 4.1%" at 7.9,0.45
set label "Surface Water 7.1%" at 7.5,0.35
plot 2 title ""

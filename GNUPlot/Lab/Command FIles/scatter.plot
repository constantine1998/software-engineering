set term png size 900, 700
# set size 0.5, 0.5
set output "scatter.png"
set title "Scores in a test"
set ylabel "RollNumber"
set xlabel "Marks"
plot [-1:11] "scatter.txt" using 2:1 title "Marks"

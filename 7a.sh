#7a. Write a shell script that gets executed and displays the message either “Good Morning” or“Good Afternoon” or “Good Evening” depending upon time at which the user logs in.
set -- `who`
u=`whoami`
n=5
for i in $*
do
if [ $u = $i ]
then
t=$4

fi
done
set -- `echo $t | tr ":" " "`
h=$1
if [ $h -ge 4 ] && [ $h -lt 12 ]
then
echo "Good morning Mr./Mrs. $u"
elif [ $h -ge 12 ] && [ $h -lt 16 ]
then
echo "Good Afternoon Mr./Mrs. $u"
elif [ $h -ge 16 ] && [ $h -lt 19 ]
then
echo "Good Evening Mr./Mrs. $u"
else
echo "Good Night Mr./Mrs. $u"
fi

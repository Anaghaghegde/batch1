set -- `who`
user=$1
time=$4
set -- `echo $time |tr ":" " "`
hr=$1
if [ $hr -ge 5 ] && [ $hr -lt 12 ]
then
 echo "good morning $user"
 elif [ $hr -ge 5 ] && [ $hr -lt 15 ]
 then
  echo "good afternoon $user"
 elif [ $hr -ge 15 ] && [ $hr -lt 19 ]
 then
 echo "good evening $user"
 else
 echo "good night $user"
 fi

echo "enter the passwd"
stty -echo
read p1
echo "enter passwd for conformation"
stty -echo
read p2
while [ "$p1" != "$p2" ]
do
echo -n  "passwd dosent  match re enter the passwd"
stty -echo
read p2
done
clear
echo "--------------terminal locked------------"
echo "enter the passw to unlock"
stty -echo
read p3
while [ "$p1" != "$p3" ]
do
clear
done
echo "---------terminal unlock-----"

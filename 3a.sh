if [ -e $1 ]
then
x=`ls -ld $1`
p=1
for i in $x
do 
case $p in
1) echo "permission are $i";;
2) echo "file link count is $i";;
[6-8]) echo "file modification done on $5 $6 @ $7"
esac
p=`expr $p+1`
echo $i
done
else
echo "file dose not exist"
fi 

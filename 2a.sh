file1=$1
file2=$2
if [ -e $file1 ]
then
set -- `ls -ld $file1`
file1perm=$1
else
echo "file dose not exists"
exit
fi

 
if [ -e $file2 ]
then
set -- `ls -ld $file2`
file2perm=$1
else
echo "file dosent exit"
exit
fi

 
if [ $file1perm=$file2perm ]
then
echo " file permission are identical"
echo "permission is $file1perm"
else
echo " file permission are not identical"
echo "permission is $file1perm"
echo "permission is $file2perm"
fi

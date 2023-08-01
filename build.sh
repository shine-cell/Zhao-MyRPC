#！/bin/bash

set -e  # 表示在脚本执行过程中，一旦出现非零的返回值，立即停止脚本执行，避免出现错误继续执行的情况。

rm -rf `pwd`/build/* #删除项目根目录下的 build 文件夹及其下的所有内容。
cd `pwd`/build && 
    cmake .. &&
    make
cd ..
cp -r `pwd`/src/include `pwd`/lib
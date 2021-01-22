###
 # @Author: Jingsheng Lyu
 # @Date: 2021-01-22 17:56:03
 # @LastEditors: Jingsheng Lyu
 # @LastEditTime: 2021-01-22 17:56:03
 # @FilePath: /ModernCpp/Homework_Solution/HW1/homework_1/task_2/build.sh
 # @Github: https://github.com/jingshenglyu
 # @Web: https://jingshenglyu.github.io/
 # @E-Mail: jingshenglyu@gmail.com
### 
wc -l data.dat

(grep dolor data.dat) | wc -l

(grep dalor data.dat) | wc -l

wc -w data.dat

(grep mol* data.dat) | wc -w
<!--
 * @Author: Jingsheng Lyu
 * @Date: 2021-01-22 17:48:14
 * @LastEditors: Jingsheng Lyu
 * @LastEditTime: 2021-01-22 17:48:14
 * @FilePath: /ModernCpp/Homework_Solution/HW1/solution.md
 * @Github: https://github.com/jingshenglyu
 * @Web: https://jingshenglyu.github.io/
 * @E-Mail: jingshenglyu@gmail.com
-->
## Task A Using the terminal
1. (1 points) Count how many lines are there in “data.dat”.
   * 
    ```
    >:~/ModernCpp/Homework_Solution/HW1/homework_1/task_1$ wc -l data.dat 
    175 data.dat
    ```
2. (1 points) Count how many lines of those contain “dolor” or “dalor”?
   * 
    ```
    >:~/ModernCpp/Homework_Solution/HW1/homework_1/task_1$ (grep dolor data.dat) | wc -l
    105
    >:~/ModernCpp/Homework_Solution/HW1/homework_1/task_1$ (grep dalor data.dat) | wc -l
    1
    ```
3. (1 points) Count how many words are there in “data.dat”?
   * 
    ```
    >:~/ModernCpp/Homework_Solution/HW1/homework_1/task_1$ wc -w data.dat 
    1904 data.dat
    ```
4. (1 points) Count how many of those start with “mol”?
   * 
    ```
    >:~/ModernCpp/Homework_Solution/HW1/homework_1/task_1$ (grep mol* data.dat) | wc -w
    931
    ```
    
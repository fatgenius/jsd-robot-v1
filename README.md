# 华晟泛达科技有限公司 除草机器人实验

# 除草机器人第一方案测试 
          使用超声波感应器 HC-SR04 
          使用舵机 sg-90
          使用舵机库 servo

# 关于超声波感应器：
          VCC - 5V
          GND - 接地
          Tri - 接atmega 328p 的10号管脚
          Echo -接atmega 328p 的11号管脚
          
          
# 关于舵机：
         旋转角度为左右摇摆180度
         用的delay（） 来控制摆动的角度
         
# 算法与公式：
          t = S/V
          S= 0.034(CM/S)/2  一个来回的距离所以必须除2
 
# Processsing 图像处理：
          使用语言为Java
          需要调用名为toxi的库
 

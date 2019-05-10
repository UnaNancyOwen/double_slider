Double Slider Trackbar based on CVUI
====================================
This repository is experimental implementation of double slider tarckbar based on cvui.  
The cvui.h that included in this repository is additionally implemented based on cvui 2.7.0.  
(NOTE: This function has not been fully tested yet.)  

![double_slider](double_slider.gif)  

How To Use
----------
```cpp
// Double Slider Trackbar
int32_t value_min = 0;
int32_t value_max = 255;
cvui::trackbar( ui_canvas, ui_origin.x, ui_origin.y, trackbar_length, &value_min, &value_max, trackbar_min, trackbar_max );
```

The move method of this indicator is a little different from general operation.  
If you want move min value indicator, Please drag with keep press down the left mouce button.  
If you want move max value indicator, Please drag with keep press down the right mouce button.  

Environment
-----------
* Visual Studio 2015/2017 / GCC 4.9 / Clang 3.4 (or later)
* OpenCV 3.4.1 (or later)
* CMake 3.14.0 (latest release is preferred)

License
-------
Copyright &copy; 2019 Tsukasa SUGIURA  
Distributed under the [MIT License](http://www.opensource.org/licenses/mit-license.php "MIT License | Open Source Initiative").

The original part of cvui is distributed under the MIT License.  
I would like to pay tribute to his great job. Thanks!  

Copyright &copy; 2016 Fernando Bevilacqua  
Distributed under the [MIT License](https://github.com/Dovyski/cvui/blob/master/LICENSE.md).

Contact
-------
* Tsukasa Sugiura  
    * <t.sugiura0204@gmail.com>  
    * <http://unanancyowen.com>  

Reference
---------
* Dovyski/cvui | GitHub  
  <https://github.com/Dovyski/cvui>

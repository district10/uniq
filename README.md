# uniq written in c++

uniq written in 30 lines of c++.

## Why | 原因

I'v got `sort` in Git Bash for Windows.
But there is no `uniq`, and I need it.

Git Bash for Windows 自带了 `sort`，
但是没有 `uniq`，真是太糟糕了，因为我需要它。

## Assumption | 设定

I suppose you've already sorted the file.

假定你已经 sort 过了文件（流）。

## Usage | 使用

```bash
$ cat includes.txt
#include <boost/algorithm/string.hpp>
#include <boost/algorithm/string/case_conv.hpp>
#include <boost/algorithm/string/case_conv.hpp>
#include <boost/algorithm/string/case_conv.hpp>
#include <boost/algorithm/string/case_conv.hpp>
#include <boost/algorithm/string/case_conv.hpp>
#include <boost/algorithm/string/classification.hpp>
#include <boost/algorithm/string/classification.hpp>

$ cat includes.txt | ./uniq
#include <boost/algorithm/string.hpp>
#include <boost/algorithm/string/case_conv.hpp>
#include <boost/algorithm/string/classification.hpp>
```

## Compile/Binaries | 编译/执行档

If you don't know how to use cmake, checkout
[HOWTO: Win + CMake + Visual Studio 2010 · Issue #1 · district10/cmake-templates](https://github.com/district10/cmake-templates/issues/1).

如果你不知道怎么使用 cmake，参考我的博客：
[CMake 简介和 CMake 模板](http://tangzx.qiniudn.com/post-0100-cmake-templates.html)。

Binaries/执行档

-   Windows VS2015 x64 release build: [uniq.exe](bin/win_vs2015_x64_release/uniq.exe) (20 KB)
-   Windows g++ x64 static build: [uniq.exe](bin/win_g++_x64_static/uniq.exe) (2.61 MB)
-   Linux g++ x64 release build: [uniq](bin/linux_g++_x64/uniq) (15 KB)
-   Linux g++ x64 static build: [uniq](bin/linux_g++_x64_static/uniq) (1.7 MB)

## Credits | 感谢

Based on [district10/HitChanges: 小程序用来处理浮动车 CSV 数据](https://github.com/district10/HitChanges). My code too. :smile:

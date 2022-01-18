# crash_test
我测试的时候，在普通权限下设置的ulimit无效，必须用root设置和执行才能有效生成core文件。

执行-g文件时，出错生成的core，在gdb的时候，无论是gdb -c core test_g 还是 gdb -c core test都可以获得正常的调试信息；
执行不带-g的文件时，出错生成的core，在gdb的时候，无论怎样也无法看到是那行代码导致的错误。

必须在编译动态库的时候也使用-g选项，否则gdb无法调试动态库中的代码。

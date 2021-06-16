# test-addon

本项目使用 N-API 编写了一个 C++ 插件。 

经实验，在 Win 和 Linux 下构建的文件不能混用。因此切换平台需要执行`npm run clean`和`npm run build`

## 插件原理

![AddonPrinciple](./AddonPrinciple.png)

## 参考链接

[Beginners guide to writing NodeJS Addons using C++ and N-API (node-addon-api)](https://medium.com/@a7ul/beginners-guide-to-writing-nodejs-addons-using-c-and-n-api-node-addon-api-9b3b718a9a7f)




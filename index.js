const testAddon = require('./build/Release/testaddon.node');

console.log('addon', testAddon)
console.log('hello', testAddon.hello())

console.log('add', testAddon.add(1, 2));

const classEampleInstance = new testAddon.ClassExample(7)

console.log(classEampleInstance.getValue())
console.log(classEampleInstance.add(124))

const classEampleInstance2 = new testAddon.ClassExample(classEampleInstance)
console.log(classEampleInstance2.getValue())
# PBJDebuggingTools
[![CI Status](http://img.shields.io/travis/SnugJoker/PBJDebuggingTools.svg?style=flat)](https://travis-ci.org/SnugJoker/PBJDebuggingTools)
[![Version](https://img.shields.io/cocoapods/v/PBJDebuggingTools.svg?style=flat)](http://cocoapods.org/pods/PBJDebuggingTools)
[![License](https://img.shields.io/cocoapods/l/PBJDebuggingTools.svg?style=flat)](http://cocoapods.org/pods/PBJDebuggingTools)
[![Platform](https://img.shields.io/cocoapods/p/PBJDebuggingTools.svg?style=flat)](http://cocoapods.org/pods/PBJDebuggingTools)

## Description
PBJDebuggingTools is a nice collection of some useful debugging tools.

## Installation
PBJDebuggingTools is available through [CocoaPods](http://cocoapods.org). 
To install it, simply add the following line to your Podfile:

```ruby
pod 'PBJDebuggingTools'
```

## How To Use
To use PBJDebuggingTools simply add one of the methods to your code.

#### Objective C ####       
* Text Transitions     
       
```objectivec
+(void)animateTextFromLeftToRightWithLeftLabel:(UILabel *)leftLabel andWithRightLabel:(UILabel *)rightLabel onSuperView:(UIView *)viewSuper;
+(void)animateTextFromRightToLeftWithLeftLabel:(UILabel *)leftLabel andWithRightLabel:(UILabel *)rightLabel onSuperView:(UIView *)viewSuper;
+(void)animateTextFromRightToLeftOnFirstPageWithLeftLabel:(UILabel *)leftLabel onSuperView:(UIView *)viewSuper;
```
    
## Author
Joseph Razon, razonjoe@gmail.com

## License
PBJDebuggingTools is available under the MIT license. See the LICENSE file for more info.

//
//  testClass.h
//  DucumentDemo
//
//  Created by TanJian on 17/6/21.
//  Copyright © 2017年 Joshpell. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


#pragma mark protocol
/**
 @protocol testClassProtocol
 
 测试类的代理
 */
@protocol testClassProtocol <NSObject>
/**
 testclass类的代理方法
 */
-(void)testClassProtocolMethod;

@end

#pragma mark enum

/**
 天气枚举
 
 - WeatherConditionsInDaysSun: Good weather
 - WeatherConditionsInDaysClouds: Where's the sun?
 - WeatherConditionsInDaysRain: Get an umbrella
 - WeatherConditionsInDaysSnow: Watch out... A snowball is coming!
 */
typedef NS_ENUM(NSUInteger,WeatherConditionsInDays) {
    
    WeatherConditionsInDaysSun,
    WeatherConditionsInDaysClouds,
    WeatherConditionsInDaysRain,
    WeatherConditionsInDaysSnow,
    
} ;

#pragma mark 类的说明

/**
 @interface testClass
 
 @brief 类描述测试类testClass
 
 @superclass SuperClass: NSObject
 
 @classdesign 特殊的一些配置，比如是单例类
 
 @coclass 合作开发的类，如AppDelegate
 
 @author joshpell (作者信息)
 
 @version 1.00 2017/06/21 Creation (此文档的版本信息)
 */

@interface testClass : NSObject

#pragma mark property
/**
 @brief testname
 
 简单的属性说明.（testClass）
 */
@property (nonatomic, copy) NSString *testname;
/**
 @brief This property knows my testid.
 */
@property (nonatomic, copy) NSString *testid;

@property (nonatomic, assign) WeatherConditionsInDays day;

#pragma mark function

/**
 testClass的方法说明
 
 @code
 NSString *string = @"代码提示"（testClass）
 @endcode
 
 @remark 我是重点提示（testClass）
 
 @param num 参数说明（testClass）
 
 @return 返回值说明（testClass）
 
 */
-(NSString *)testClassmethodWithParam:(CGFloat)num;


@end

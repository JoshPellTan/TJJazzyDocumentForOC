//
//  peopleClass.h
//  DucumentDemo
//
//  Created by TanJian on 17/6/21.
//  Copyright © 2017年 Joshpell. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/**
 @class peopleClass
 
 @brief 测试类peopleClass
 @superclass SuperClass: NSObject
 
 */
@interface peopleClass : NSObject

/**
 简单的属性说明.(peopleClass)
 */
@property (nonatomic, copy) NSString *testname;
/**
 @brief This property knows my testid(peopleClass).
 */
@property (nonatomic, copy) NSString *testid;


/**
 testClass的方法说明
 
 @code
 NSString *string = @"代码提示"(peopleClass)
 @endcode
 
 @remark 我是重点提示(peopleClass)
 
 @param num 参数说明(peopleClass)
 
 @return 返回值说明(peopleClass)
 
 */
-(NSString *)testClassmethodWithParam:(CGFloat)num;

@end

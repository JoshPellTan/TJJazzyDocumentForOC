//
//  dogClass.h
//  DucumentDemo
//
//  Created by TanJian on 17/6/21.
//  Copyright © 2017年 Joshpell. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/**
 @class dogClass
 
 @brief 测试类dogClass
 @superclass SuperClass: NSObject
 
 */
@interface dogClass : NSObject

/**
 简单的属性说明.(dogClass)
 */
@property (nonatomic, copy) NSString *testname;
/**
 @brief This property knows my testid(dogClass).
 */
@property (nonatomic, copy) NSString *testid;

/**
 testClass的方法说明
 
 @code
 NSString *string = @"代码提示"(dogClass)
 @endcode
 
 @remark 我是重点提示(dogClass)
 
 @param num 参数说明(dogClass)
 
 @return 返回值说明(dogClass)
 
 */
-(NSString *)testClassmethodWithParam:(CGFloat)num;

@end

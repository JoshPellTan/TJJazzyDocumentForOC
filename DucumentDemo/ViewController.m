//
//  ViewController.m
//  DucumentDemo
//
//  Created by TanJian on 17/6/21.
//  Copyright © 2017年 Joshpell. All rights reserved.
//

#import "ViewController.h"
#import "PrefixHeader.pch"


@interface ViewController ()<testClassProtocol>

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    testClass *newModel = [testClass new];
    newModel.testname = @"";
    newModel.day = WeatherConditionsInDaysSun;
    newModel.testid = @"";
    [newModel testClassmethodWithParam:1.0];
    
    peopleClass *people = [peopleClass new];
    people.testname = @"";
    people.testid = @"";
    [people testClassmethodWithParam:1.0];
    
    dogClass *dog = [dogClass new];
    dog.testname = @"";
    dog.testid = @"";
    [dog testClassmethodWithParam:1.0];
    
}

-(void)testClassProtocolMethod{
    
    
}

@end

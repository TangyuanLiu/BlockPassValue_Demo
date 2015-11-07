//
//  SecondViewController.h
//  SixPassValue-Block_demo
//
//  Created by lanou3g on 15/9/17.
//  Copyright (c) 2015年 lanou3g. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^PassValueBlock)(NSString *);

@interface SecondViewController : UIViewController
//声明block 属性
@property(nonatomic,copy)PassValueBlock passValueBlock;

@end

//
//  XHDrawerController.h
//  XHDrawerController
//
//  Created by 曾 宪华 on 13-12-27.
//  Copyright (c) 2013年 嗨，我是曾宪华(@xhzengAIB)，曾加入YY Inc.担任高级移动开发工程师，拍立秀App联合创始人，热衷于简洁、而富有理性的事物 QQ:543413507 主页:http://zengxianhua.com All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, XHDrawerSide){
    XHDrawerSideNone = 0,
    XHDrawerSideLeft,
    XHDrawerSideRight,
};


@interface XHDrawerController : UIViewController

@property (nonatomic, assign, readonly) XHDrawerSide openSide;

@property (nonatomic, assign) CGFloat animateDuration;
@property (nonatomic, assign) CGFloat animationDampingDuration;
@property (nonatomic, assign) CGFloat animationVelocity;
@property (nonatomic, strong) UIViewController *centerViewController;
@property (nonatomic, strong) UIViewController *leftViewController;
@property (nonatomic, strong) UIViewController *rightViewController;
@property (nonatomic, strong) UIView *backgroundView;
@property (nonatomic, assign, getter = isSpringAnimationOn) BOOL springAnimationOn;

- (void)toggleDrawerSide:(XHDrawerSide)drawerSide animated:(BOOL)animated completion:(void(^)(BOOL finished))completion;

- (void)closeDrawerAnimated:(BOOL)animated completion:(void(^)(BOOL finished))completion;

- (void)openDrawerSide:(XHDrawerSide)drawerSide animated:(BOOL)animated completion:(void(^)(BOOL finished))completion;

@end


@interface UIViewController (XHDrawerController)

@property (nonatomic, readonly) XHDrawerController *drawerController;

@end

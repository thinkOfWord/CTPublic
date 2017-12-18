
//
//  SY_Adapter.h
//  JinDouYun
//  常用的一些系统版本、屏幕宽度、打印等
//
//  Created by 柴通 on 14-6-22.
//  Copyright (c) 2014年 chaitong. All rights reserved.
//

#ifndef CTAdapter_h
#define CTAdapter_h

#pragma mark - 系统版本判断


#define CT_APP_NAME    ([[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleName"])
#define CT_APP_VERSION ([[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"])
#define CT_APP_BUILD   ([[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleVersion"])
#define CT_SYS_VERSION [[UIDevice currentDevice] systemVersion]


#pragma mark - 屏幕宽度

#define ViewSafeAreaInsets(view) ({UIEdgeInsets i; if(@available(iOS 11.0, *)) {i = view.safeAreaInsets;} else {i = UIEdgeInsetsZero;} i;})

#define MainWindowSafeAreaInsets ({UIEdgeInsets i; if(@available(iOS 11.0, *)) {i = ([UIApplication sharedApplication].delegate.window).safeAreaInsets;} else {i = UIEdgeInsetsZero;} i;})

#define ContentInsetAdjustmentBehaviorAutomatic(scrollView) if(@available(iOS 11.0, *)){ scrollView.contentInsetAdjustmentBehavior = UIScrollViewContentInsetAdjustmentAutomatic; }

#define ContentInsetAdjustmentBehaviorNever(scrollView) if(@available(iOS 11.0, *)){ scrollView.contentInsetAdjustmentBehavior = UIScrollViewContentInsetAdjustmentNever; }

#define ContentInsetAdjustmentBehaviorAlways(scrollView) if(@available(iOS 11.0, *)){ scrollView.contentInsetAdjustmentBehavior = UIScrollViewContentInsetAdjustmentAlways; }

#define SCREEN_SIZE   [UIScreen mainScreen].bounds.size
#define SCREEN_WIDTH  [UIScreen mainScreen].bounds.size.width
#define SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height
#define SAFEAREA_HEIGHT  (MainWindowSafeAreaInsets.bottom - 10 > 0 ? MainWindowSafeAreaInsets.bottom - 10 : 0)
#define SAFEDOWN_HEIGHT  (IS_IPHONE_X ? 34 : 0)


#define SCREEN_HEIHT_RATIO    (SCREEN_HEIGHT / 667.0)
#define SCREEN_RATIO_L  (SCREEN_WIDTH / 320.0)
#define SCREEN_RATIO    (SCREEN_WIDTH / 375.0)      //相对于6的比例
#define SCREEN_RATIO_S  (SCREEN_WIDTH / 375.0 < 1.0 ? SCREEN_WIDTH / 375.0 : 1.0)      //相对于6的比例 如果 plus也是1
#define CT1PXWIDTH      (1 / [UIScreen mainScreen].scale)


#define IS_IPAD       (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define IS_IPHONE     (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define IS_RETINA     ([[UIScreen mainScreen] scale] >= 2.0)

#define SCREEN_MAX_LENGTH (MAX(SCREEN_WIDTH, SCREEN_HEIGHT))
#define SCREEN_MIN_LENGTH (MIN(SCREEN_WIDTH, SCREEN_HEIGHT))

#define IS_IPHONE_4_OR_LESS (IS_IPHONE && SCREEN_MAX_LENGTH < 568.0)
#define IS_IPHONE_5         (IS_IPHONE && SCREEN_MAX_LENGTH == 568.0)
#define IS_IPHONE_678       (IS_IPHONE && SCREEN_MAX_LENGTH == 667.0)
#define IS_IPHONE_678P      (IS_IPHONE && SCREEN_MAX_LENGTH == 736.0)
#define IS_IPHONE_X         (IS_IPHONE && SCREEN_MAX_LENGTH == 812.0)


#pragma mark - 打印日志

//调试状态打印
#ifdef DEBUG
#define CTLog(FORMAT, ...) fprintf(stderr,"%s:%d\t%s\n",[[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String], __LINE__, [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String]);
#else
#define CTLog(...)
#endif



#define WeakSelf(weakSelf)      __weak __typeof(&*self)    weakSelf  = self;
#define StrongSelf(strongSelf)  __strong __typeof(&*self) strongSelf = weakSelf;


#pragma mark - 单例
#define CTApplicationDelegate ((AppDelegate *)[UIApplication sharedApplication].delegate)


#endif /* CTAdapter_h */



//
//  CT_Notification.h
//  JinDouYun
//  软件用到的通知以及通知的宏定义
//
//  Created by 柴通 on 2016/11/18.
//  Copyright © 2016年 柴通. All rights reserved.
//

#ifndef CTNotification_h
#define CTNotification_h


#define PostNotifacation(key)                           [[NSNotificationCenter defaultCenter] postNotificationName:key object:nil]
#define AddObserveNotifacation(target, action, key)     [[NSNotificationCenter defaultCenter] addObserver:target selector:action name:key object:nil]
#define RemoveNotifacation(target,key)                  [[NSNotificationCenter defaultCenter] removeObserver:target name:key object:nil];


//讲师是否关注 同步通知
static NSString *TNBNotifacationLecturerFollow = @"TNBNotifacationLecturerFollow";


static NSString *TNBNotifacationGlobalCirculatory = @"TNBNotifacationGlobalCirculatory";

static NSString *TNBApplicationStateChanged       = @"TNBApplicationStateChanged";

static NSString *TNBAliPayCallBack               = @"TNBAliPayCallBack";
static NSString *TNBCollectStateChanged          = @"TNBCollectStateChanged";

//登录提示
static NSString *TNBNotifacationLogIn            = @"TNBNotifacationLogIn";
static NSString *TNBNotifacationLogOut           = @"TNBNotifacationLogOut";


//个股详情 解盘页面事件通知
static NSString *TNBAnalyzeStockNotification          = @"TNBAnalyzeStockNotification";

#endif /* CTNotification_h */

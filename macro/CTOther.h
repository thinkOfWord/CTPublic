//
//  CT_Other.h
//  JinDouYun
//
//  Created by 柴通 on 16/11/20.
//  Copyright © 2016年 柴通. All rights reserved.
//

#ifndef CTOther_h
#define CTOther_h

/*
 * navigation的一些操作
 */
#define NavigationPush(controller)          [self.navigationController pushViewController:controller animated:YES]
#define NavigationPushNoAnimate(controller) [self.navigationController pushViewController:controller animated:NO]
#define NavigationPop()                     [self.navigationController popViewControllerAnimated:YES];
#define NavigationPopNoAnimate()            [self.navigationController popViewControllerAnimated:NO];
#define NavigationPopToRoot()               [self.navigationController popToRootViewControllerAnimated:YES];


/*
 * 初始化对象
 */

#define InitMethod(Class)                   [[Class alloc] init]

#define CT_DOCUMENT_DIRECTORY NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES).firstObject


//和讯行情 SDK
#define __HXSDK_TaoNiuBang__

/*
 * 常用block
 */

typedef void (^CTNoValueBlock)        (void);
typedef void (^CTBoolBlock)           (BOOL flag);
typedef void (^CTOneValueBlock)       (id model);
typedef void (^CTTypeBlock)           (NSInteger type);
typedef void (^CTTwoIntValueBlock)    (NSInteger value, NSInteger type);
typedef void (^CTOneValueTypeBlock)   (id model, NSInteger type);
typedef void (^CTArrayAndIndexBlock)  (NSArray *arr, NSInteger index);
typedef void (^CTFloatValueBlock)     (CGFloat floatValue);




/*
 * 常用高度设置
 */

#define INPUTVIEW_HEIGHT   (45 * SCREEN_RATIO)         //登录等输入框高度


#define GUIDEDIALOGS_WIDTH  (SCREEN_WIDTH - 60 * SCREEN_RATIO_L)


//bannder高度 首页热门讲师高度
#define hotLecturerWidth    ((SCREEN_WIDTH - 15) * 0.3)
#define hotLecturerRatio    1.12

#define BANNER_HEIGHT       (180 * SCREEN_RATIO)
#define HOTLECTURTR_HRIGHT  (hotLecturerWidth * hotLecturerRatio  + 55)


#define LECT_HEADER_HEIGTH   (210 + SAFEAREA_HEIGHT)   //讲师主页 header高度

#define VIDEO_HEIGHT        (SCREEN_WIDTH * 0.5625)   //视频界面的高度
#define VIDEO_CELL_HEIGHT   ((SCREEN_WIDTH - 24) * 0.5625 + 24)

#define FEEDBACK_ADDIMG_HEIGHT  ((SCREEN_WIDTH - 60) * 0.25)




/*
 * SSKeychain
 */
#define TNB_SERVICE_NAME    @"app.uniwa.cc"
#define TNB_SERIALNUMBER    @"91110113348294863Y"

/*
 * FMDB
 */

#define UW_FMDB_PATH [NSString stringWithFormat:@"%@/%@.db", CT_DOCUMENT_DIRECTORY, CT_APP_NAME]



#endif /* CTOther_h */

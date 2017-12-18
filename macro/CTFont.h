//
//  CTFont.h
//  lesheng
//
//  Created by 柴通 on 2016/12/16.
//  Copyright © 2016年 柴通. All rights reserved.
//

#ifndef CTFont_h
#define CTFont_h

#define PingFangRegular    @"PingFangSC-Regular"   //常规
#define PingFangSemibold   @"PingFangSC-Semibold"  //粗体
#define PingFangMedium     @"PingFangSC-Medium"    //中等

//9.0以下系统用
#define HelveticaneueR     @"HelveticaNeue"                 //
#define HelveticaneueB     @"HelveticaNeue-Bold"   //
#define HelveticaneueM     @"HelveticaNeue-Medium"          //


#define PFS_FONT45 kiOS9Later ? [UIFont fontWithName:PingFangSemibold size:45] : [UIFont fontWithName:HelveticaneueB size:45]
#define PFS_FONT28 kiOS9Later ? [UIFont fontWithName:PingFangSemibold size:28] : [UIFont fontWithName:HelveticaneueB size:28]
#define PFS_FONT18 kiOS9Later ? [UIFont fontWithName:PingFangSemibold size:18] : [UIFont fontWithName:HelveticaneueB size:18]
#define PFS_FONT17 kiOS9Later ? [UIFont fontWithName:PingFangSemibold size:17] : [UIFont fontWithName:HelveticaneueB size:17]
#define PFS_FONT14 kiOS9Later ? [UIFont fontWithName:PingFangSemibold size:14] : [UIFont fontWithName:HelveticaneueB size:14]



//#define PFM_FONT17 kiOS9Later ? [UIFont fontWithName:PingFangMedium size:17] : [UIFont fontWithName:HelveticaneueM size:17]
//#define PFM_FONT16 kiOS9Later ? [UIFont fontWithName:PingFangMedium size:16] : [UIFont fontWithName:HelveticaneueM size:16]

#define PFR_FONT24 kiOS9Later ? [UIFont fontWithName:PingFangRegular size:24] : [UIFont systemFontOfSize:24]
#define PFR_FONT20 kiOS9Later ? [UIFont fontWithName:PingFangRegular size:20] : [UIFont systemFontOfSize:20]
#define PFR_FONT18 kiOS9Later ? [UIFont fontWithName:PingFangRegular size:18] : [UIFont systemFontOfSize:18]
#define PFR_FONT17 kiOS9Later ? [UIFont fontWithName:PingFangRegular size:17] : [UIFont systemFontOfSize:17]
#define PFR_FONT16 kiOS9Later ? [UIFont fontWithName:PingFangRegular size:16] : [UIFont systemFontOfSize:16]
#define PFR_FONT15 kiOS9Later ? [UIFont fontWithName:PingFangRegular size:15] : [UIFont systemFontOfSize:15]
#define PFR_FONT14 kiOS9Later ? [UIFont fontWithName:PingFangRegular size:14] : [UIFont systemFontOfSize:14]
#define PFR_FONT13 kiOS9Later ? [UIFont fontWithName:PingFangRegular size:13] : [UIFont systemFontOfSize:13]
#define PFR_FONT12 kiOS9Later ? [UIFont fontWithName:PingFangRegular size:12] : [UIFont systemFontOfSize:12]
#define PFR_FONT11 kiOS9Later ? [UIFont fontWithName:PingFangRegular size:11] : [UIFont systemFontOfSize:11]
#define PFR_FONT10 kiOS9Later ? [UIFont fontWithName:PingFangRegular size:10] : [UIFont systemFontOfSize:11]


#define PFR_FONTAUTO(fontSize)  [UIFont fontWithName:PingFangRegular size: fontSize * ScreenRatio];

#endif /* CTFont_h */

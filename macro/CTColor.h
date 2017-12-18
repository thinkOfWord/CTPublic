//
//  CTColor.h
//  JinDouYun
//  软件中用到的常用颜色以及颜色定义的宏
//
//  Created by 柴通 on 2016/11/18.
//  Copyright © 2016年 柴通. All rights reserved.
//

#ifndef CTColor_h
#define CTColor_h


#pragma mark - RGB取色
#define CTColorRGBA(r,g,b,a) [UIColor colorWithRed:((float)(r+1))/255.0 green:((float)(g+1))/255.0 blue:((float)(b+1))/255.0 alpha:a]
#define CTColorRGB(r,g,b) [UIColor colorWithRed:((float)(r+1))/255.0 green:((float)(g+1))/255.0 blue:((float)(b+1))/255.0 alpha:1]

#define CTColorHex(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
#define CTColorHexA(rgbValue, a) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:(a)]


#endif /* CTColor_h */

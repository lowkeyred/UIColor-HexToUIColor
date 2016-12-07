//
//  UIColor+HexToUIColor.h
//  shanmeng
//
//  Created by 凡城软件 on 16/12/1.
//  Copyright © 2016年 fancheng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (HexToUIColor)
+ (UIColor*)colorWithHexString:(NSString*)stringToConvert;

+ (UIColor*)colorWithRGBHex:(UInt32)hex;
@end

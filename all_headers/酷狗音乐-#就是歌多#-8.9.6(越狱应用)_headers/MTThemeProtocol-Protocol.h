//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTProtocol-Protocol.h"

@class NSArray, NSString, UIColor, UIImage;

@protocol MTThemeProtocol <MTProtocol>
- (_Bool)isUseCustomTheme;
- (NSArray *)imagesForKey:(NSString *)arg1;
- (UIImage *)imageForKey:(NSString *)arg1;
- (UIColor *)colorForKey:(NSString *)arg1;
@end


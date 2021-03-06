//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface BadgeStyle : NSObject
{
    UIColor *badgeTextColor;
    UIColor *badgeInsetColor;
    UIColor *badgeFrameColor;
    _Bool badgeFrame;
    _Bool badgeShining;
    unsigned long long badgeFontType;
    _Bool badgeShadow;
}

+ (id)freeStyleWithTextColor:(id)arg1 withInsetColor:(id)arg2 withFrameColor:(id)arg3 withFrame:(_Bool)arg4 withShadow:(_Bool)arg5 withShining:(_Bool)arg6 withFontType:(unsigned long long)arg7;
+ (id)oldStyle;
+ (id)defaultStyle;
@property(nonatomic) unsigned long long badgeFontType; // @synthesize badgeFontType;
@property(nonatomic) _Bool badgeFrame; // @synthesize badgeFrame;
@property(nonatomic) _Bool badgeShadow; // @synthesize badgeShadow;
@property(nonatomic) _Bool badgeShining; // @synthesize badgeShining;
@property(retain, nonatomic) UIColor *badgeFrameColor; // @synthesize badgeFrameColor;
@property(retain, nonatomic) UIColor *badgeInsetColor; // @synthesize badgeInsetColor;
@property(retain, nonatomic) UIColor *badgeTextColor; // @synthesize badgeTextColor;
- (void).cxx_destruct;

@end


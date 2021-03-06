//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface WBFaceThemeManager : NSObject
{
    long long _theme;
    NSString *_bundlePath;
    NSString *_type;
    NSString *_resourcePath;
    NSString *_voiceDocPath;
    NSString *_imageDocPath;
    NSString *_themePath;
    UIColor *_blueColor;
    UIColor *_lightBlueColor;
    UIColor *_darkBlueColor;
    long long _statusBarStyle;
}

+ (id)sharedManager;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(retain, nonatomic) UIColor *darkBlueColor; // @synthesize darkBlueColor=_darkBlueColor;
@property(retain, nonatomic) UIColor *lightBlueColor; // @synthesize lightBlueColor=_lightBlueColor;
@property(retain, nonatomic) UIColor *blueColor; // @synthesize blueColor=_blueColor;
@property(copy, nonatomic) NSString *themePath; // @synthesize themePath=_themePath;
@property(copy, nonatomic) NSString *imageDocPath; // @synthesize imageDocPath=_imageDocPath;
@property(copy, nonatomic) NSString *voiceDocPath; // @synthesize voiceDocPath=_voiceDocPath;
@property(copy, nonatomic) NSString *resourcePath; // @synthesize resourcePath=_resourcePath;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
@property(nonatomic) long long theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *progressVCTextColor;
@property(readonly, nonatomic) UIColor *resultVCBtnTextColor;
@property(readonly, nonatomic) UIColor *resultVCTitleColor;
@property(readonly, nonatomic) UIColor *bottomStartButtonBgColor;
@property(readonly, nonatomic) UIColor *guideViewTextColor;
@property(readonly, nonatomic) UIColor *vcBgColor;
@property(readonly, nonatomic) UIColor *guideViewBgColor;
@property(readonly, nonatomic) UIColor *kalaokEndColor;
@property(readonly, nonatomic) UIColor *kalaokInitColor;
@property(readonly, nonatomic) UIColor *bottomTipsLabelColor;
@property(readonly, nonatomic) UIColor *smallNumColor;
@property(readonly, nonatomic) UIColor *lineBoarderColor;
@property(readonly, nonatomic) UIColor *bigNumColor;
@property(readonly, nonatomic) UIColor *navbarShadowColor;
@property(readonly, nonatomic) UIColor *navTitleColor;
@property(readonly, nonatomic) UIColor *navBarBgColor;
- (id)imagePathWithImageName:(id)arg1;
- (id)voicePathWithVoiceName:(id)arg1;
- (void)setFaceVerifyType:(id)arg1;
- (id)init;

@end


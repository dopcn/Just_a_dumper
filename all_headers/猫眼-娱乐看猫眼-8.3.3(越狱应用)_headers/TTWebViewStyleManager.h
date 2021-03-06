//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

@interface TTWebViewStyleManager : NSObject
{
    CDUnknownBlockType _showSplashActionBlock;
    UIColor *_titleColor;
    UIFont *_titleFont;
    UIColor *_otherTitleColor;
    UIFont *_otherTitleFont;
    UIColor *_subtitleColor;
    UIColor *_barTextColor;
    UIColor *_sourceTextColor;
    UIFont *_sourceTextFont;
    UIColor *_backgroundColor;
    UIColor *_progressBarColor;
    UIFont *_subtitleFont;
    UIFont *_barTextFont;
    UIColor *_barIconColor;
    Class _errorViewCls;
    CDUnknownBlockType _createRefreshHeaderView;
}

+ (id)sharedManager;
@property(copy, nonatomic) CDUnknownBlockType createRefreshHeaderView; // @synthesize createRefreshHeaderView=_createRefreshHeaderView;
@property(nonatomic) Class errorViewCls; // @synthesize errorViewCls=_errorViewCls;
@property(retain, nonatomic) UIColor *barIconColor; // @synthesize barIconColor=_barIconColor;
@property(retain, nonatomic) UIFont *barTextFont; // @synthesize barTextFont=_barTextFont;
@property(retain, nonatomic) UIFont *subtitleFont; // @synthesize subtitleFont=_subtitleFont;
@property(retain, nonatomic) UIColor *progressBarColor; // @synthesize progressBarColor=_progressBarColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIFont *sourceTextFont; // @synthesize sourceTextFont=_sourceTextFont;
@property(retain, nonatomic) UIColor *sourceTextColor; // @synthesize sourceTextColor=_sourceTextColor;
@property(retain, nonatomic) UIColor *barTextColor; // @synthesize barTextColor=_barTextColor;
@property(retain, nonatomic) UIColor *subtitleColor; // @synthesize subtitleColor=_subtitleColor;
@property(retain, nonatomic) UIFont *otherTitleFont; // @synthesize otherTitleFont=_otherTitleFont;
@property(retain, nonatomic) UIColor *otherTitleColor; // @synthesize otherTitleColor=_otherTitleColor;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) CDUnknownBlockType showSplashActionBlock; // @synthesize showSplashActionBlock=_showSplashActionBlock;
- (void).cxx_destruct;
- (id)init;
- (void)showSplash:(id)arg1 inViewController:(id)arg2;

@end


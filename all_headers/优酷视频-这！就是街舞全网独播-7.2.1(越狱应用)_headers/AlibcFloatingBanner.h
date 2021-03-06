//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString;
@protocol AlibcFloatingBannerDelegate;

@interface AlibcFloatingBanner : UIButton
{
    id <AlibcFloatingBannerDelegate> _backDelegate;
    NSString *_appName;
    unsigned long long _bannerState;
}

@property(nonatomic) unsigned long long bannerState; // @synthesize bannerState=_bannerState;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(nonatomic) __weak id <AlibcFloatingBannerDelegate> backDelegate; // @synthesize backDelegate=_backDelegate;
- (void).cxx_destruct;
- (void)onPanned:(id)arg1;
- (void)onClicked:(id)arg1 withEvent:(id)arg2;
- (void)setBannerState:(unsigned long long)arg1 animate:(_Bool)arg2;
- (id)backgroundviewWithAppName:(id)arg1 tipsIcon:(id)arg2;
- (id)bannerColor;
- (void)hideTips;
- (void)showTips;
- (id)initWithTipsParam:(id)arg1;
- (void)dealloc;

@end


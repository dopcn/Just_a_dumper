//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XAdEngineVideoAdView.h"

@class XAdVRTipViewPad, YTEngineScreenMode;

@interface XAdEngineVideoAdViewPad : XAdEngineVideoAdView
{
    YTEngineScreenMode *_screenMode;
    XAdVRTipViewPad *_vrView;
}

@property(retain, nonatomic) XAdVRTipViewPad *vrView; // @synthesize vrView=_vrView;
- (id)screenMode;
- (void).cxx_destruct;
- (void)setScreenMode:(id)arg1;
- (void)layoutContentViews;
- (void)layoutInnerViews;
- (void)layoutSkipAdView;
- (void)installComponents;

@end


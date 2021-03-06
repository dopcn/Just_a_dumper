//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, UIView;
@protocol IMAVideoDisplay;

@interface IMAAdDisplayContainer : NSObject
{
    UIView *_adContainer;
    UIView *_adView;
    UIView *_adVideoRenderingView;
    UIView *_videoAdUiView;
    id <IMAVideoDisplay> _videoDisplay;
    NSDictionary *_companionSlotMap;
    long long _videoDisplayType;
}

@property(nonatomic) long long videoDisplayType; // @synthesize videoDisplayType=_videoDisplayType;
@property(copy, nonatomic) NSDictionary *companionSlotMap; // @synthesize companionSlotMap=_companionSlotMap;
@property(retain, nonatomic) id <IMAVideoDisplay> videoDisplay; // @synthesize videoDisplay=_videoDisplay;
@property(retain, nonatomic) UIView *videoAdUiView; // @synthesize videoAdUiView=_videoAdUiView;
@property(retain, nonatomic) UIView *adVideoRenderingView; // @synthesize adVideoRenderingView=_adVideoRenderingView;
@property(retain, nonatomic) UIView *adView; // @synthesize adView=_adView;
@property(readonly, nonatomic) UIView *adContainer; // @synthesize adContainer=_adContainer;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *companionSlots;
- (void)setCompanionSlots:(id)arg1;
- (void)dealloc;
- (void)reset;
- (void)resetCompanionAdSlots;
- (void)showVideoView;
- (void)hideVideoView;
- (void)useWebViewVideoDisplayWithVideoAdUiView:(id)arg1;
- (void)usePlayerVideoDisplay:(id)arg1 videoAdUiView:(id)arg2;
- (void)useCustomVideoDisplay:(id)arg1 videoAdUiView:(id)arg2;
- (id)description;
- (id)initWithAdContainer:(id)arg1 companionSlots:(id)arg2;

@end


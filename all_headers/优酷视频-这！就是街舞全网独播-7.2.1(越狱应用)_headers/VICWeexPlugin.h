//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VICPlugin.h"

@class NSString, UIViewController, VICPosition, WXSDKInstance;

@interface VICWeexPlugin : VICPlugin
{
    _Bool _hideByPlayError;
    NSString *_weexBundleUrl;
    WXSDKInstance *_weexInstance;
    UIViewController *_viewController;
    VICPosition *_initialPosition;
}

@property(retain, nonatomic) VICPosition *initialPosition; // @synthesize initialPosition=_initialPosition;
@property(nonatomic) _Bool hideByPlayError; // @synthesize hideByPlayError=_hideByPlayError;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) WXSDKInstance *weexInstance; // @synthesize weexInstance=_weexInstance;
@property(copy, nonatomic) NSString *weexBundleUrl; // @synthesize weexBundleUrl=_weexBundleUrl;
- (void).cxx_destruct;
- (void)dealloc;
- (void)receiveEvent:(id)arg1;
- (_Bool)isGestureInterrupt;
- (void)unload;
- (void)load;
- (void)relayoutWithScreenSize:(struct CGSize)arg1;
- (void)handleLayerViewClick;
- (void)render;
- (void)setupViews;
- (void)initSpamInfo;
- (void)setupWithData:(id)arg1 config:(id)arg2;

@end


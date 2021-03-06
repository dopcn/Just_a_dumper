//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "ArgoComponentProtocol-Protocol.h"
#import "ArgoViewDelegate-Protocol.h"

@class ArgoWeexComponentAdapter, NSDictionary, NSString, UIView, WXSDKInstance;
@protocol ArgoComponentCallback;

@interface ArgoWeexComponent : UIViewController <ArgoViewDelegate, ArgoComponentProtocol>
{
    _Bool _isReady;
    _Bool _isStartLoading;
    NSString *_url;
    ArgoWeexComponentAdapter *_componentAdapter;
    WXSDKInstance *_weexInstance;
    UIView *_weexView;
    id <ArgoComponentCallback> _delegate;
    CDUnknownBlockType _didCreateBlock;
    CDUnknownBlockType _didFinishLoadBlock;
    CDUnknownBlockType _didFailLoadBlock;
    NSDictionary *_dimension;
}

+ (id)getArgoComponentType;
@property(retain, nonatomic) NSDictionary *dimension; // @synthesize dimension=_dimension;
@property(nonatomic) _Bool isStartLoading; // @synthesize isStartLoading=_isStartLoading;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(copy, nonatomic) CDUnknownBlockType didFailLoadBlock; // @synthesize didFailLoadBlock=_didFailLoadBlock;
@property(copy, nonatomic) CDUnknownBlockType didFinishLoadBlock; // @synthesize didFinishLoadBlock=_didFinishLoadBlock;
@property(copy, nonatomic) CDUnknownBlockType didCreateBlock; // @synthesize didCreateBlock=_didCreateBlock;
@property(nonatomic) __weak id <ArgoComponentCallback> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *weexView; // @synthesize weexView=_weexView;
@property(retain, nonatomic) WXSDKInstance *weexInstance; // @synthesize weexInstance=_weexInstance;
@property(nonatomic) __weak ArgoWeexComponentAdapter *componentAdapter; // @synthesize componentAdapter=_componentAdapter;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)argo_OnLayoutContentView;
- (void)notifyRefreshWithEventData:(id)arg1;
- (void)notifyEvent:(id)arg1 withEventData:(id)arg2;
- (void)stopLoadingArgoComponent;
- (void)setIsArgoComponentStartLoading:(_Bool)arg1;
- (_Bool)isArgoComponentStartLoading;
- (void)setArgoComponentReady:(_Bool)arg1;
- (_Bool)isArgoComponentReady;
- (void)destroyArgoComponent;
- (id)getArgoComponentIdentifier;
- (id)getArgoComponentView;
- (void)startLoadingArgoComponentContent;
- (id)getArgoComponentCallbackDelegate;
- (id)initArgoComponentWithParams:(id)arg1 delegate:(id)arg2;
- (void)updateWeexInstanceState:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)onRenderFinish:(id)arg1;
- (void)onLoadFailWeexView:(id)arg1;
- (void)onCreateWeexView:(id)arg1;
- (void)setupWeexInstance;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithUrl:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


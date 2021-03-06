//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, NSTimer, UIImageView, UILabel;

@interface BMSharedBikeLoadingView : UIView
{
    CAShapeLayer *_shapeLayer;
    UIView *_contentView;
    UILabel *_tipsView;
    NSTimer *_timer;
    CDUnknownBlockType _timeOut;
    UIView *_layerView;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *layerView; // @synthesize layerView=_layerView;
@property(copy, nonatomic) CDUnknownBlockType timeOut; // @synthesize timeOut=_timeOut;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UILabel *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
- (void).cxx_destruct;
- (void)stopLoadingAction;
- (void)stopTimer;
- (void)startTimer:(long long)arg1;
- (void)startAnimation:(long long)arg1 withTimeOutBlock:(CDUnknownBlockType)arg2;
- (void)updateMessage:(id)arg1 withLabel:(_Bool)arg2;
- (void)stopAnimation;
- (void)startAnimation;
- (void)setHidden:(_Bool)arg1;
- (void)resetLoadingContentWhenFrameChange;
- (void)initViewWithFrame:(struct CGRect)arg1;
- (void)becomeActiveNotification:(id)arg1;
- (void)enterBackgroundNotification:(id)arg1;
- (void)removeNotification;
- (void)addNotification;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class CAShapeLayer, NSArray, NSPointerArray, NSString;
@protocol HXVoiceMenuViewDelegate;

@interface HXVoiceMenuView : UIView <CAAnimationDelegate>
{
    id <HXVoiceMenuViewDelegate> _delegate;
    NSArray *_itemModelArray;
    CAShapeLayer *_maskLayer;
    NSPointerArray *_redDotViewArray;
    struct CGRect _maskFrame;
}

@property(retain, nonatomic) NSPointerArray *redDotViewArray; // @synthesize redDotViewArray=_redDotViewArray;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(nonatomic) struct CGRect maskFrame; // @synthesize maskFrame=_maskFrame;
@property(retain, nonatomic) NSArray *itemModelArray; // @synthesize itemModelArray=_itemModelArray;
@property(nonatomic) __weak id <HXVoiceMenuViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)updateRedDotShow:(_Bool)arg1 atIndex:(long long)arg2;
- (void)itemsDismissAnimation;
- (void)itemsShowAnimation;
- (void)dismissWithAnimation;
- (void)show;
- (void)menuButtonActionWithButton:(id)arg1;
- (void)initLayer;
- (void)initView;
- (void)initItemsModel;
- (id)initWithFrame:(struct CGRect)arg1 maskFrame:(struct CGRect)arg2;
- (void)removeAllAnimations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


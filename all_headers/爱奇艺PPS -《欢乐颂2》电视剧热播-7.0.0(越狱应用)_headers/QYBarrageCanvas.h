//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QYBarrageGradientView;

@interface QYBarrageCanvas : UIView
{
    _Bool _isSplitScreen;
    CDUnknownBlockType _isScreenLocked;
    double _opacity;
    UIView *_contentView;
    UIView *_mirrorContentView;
    QYBarrageGradientView *_gradientView;
}

@property(retain, nonatomic) QYBarrageGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UIView *mirrorContentView; // @synthesize mirrorContentView=_mirrorContentView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) _Bool isSplitScreen; // @synthesize isSplitScreen=_isSplitScreen;
@property(copy, nonatomic) CDUnknownBlockType isScreenLocked; // @synthesize isScreenLocked=_isScreenLocked;
- (void).cxx_destruct;
- (void)__layoutSubviews;
- (void)__removeSubviewsOnMirrorContentView;
- (void)__removeSubviewsOnContentView;
- (void)resume;
- (void)pause;
- (void)removeAllSubViews;
- (void)addSubview:(id)arg1 isMirror:(_Bool)arg2;
@property(readonly, nonatomic) double canvasWidth;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;
- (void)__commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end


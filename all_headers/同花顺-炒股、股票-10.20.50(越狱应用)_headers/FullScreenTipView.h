//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol FullScreenTipViewDelegate;

@interface FullScreenTipView : UIView
{
    id <FullScreenTipViewDelegate> _delegate;
    struct CGPoint _clickPoint;
}

@property(nonatomic) struct CGPoint clickPoint; // @synthesize clickPoint=_clickPoint;
@property(nonatomic) __weak id <FullScreenTipViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)addToEqWindow;
- (id)initWithAlpha:(float)arg1 delegate:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end


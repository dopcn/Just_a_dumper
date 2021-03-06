//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol QNDraggableViewDelegate;

@interface QNDraggableView : UIView
{
    _Bool _touchMoved;
    id <QNDraggableViewDelegate> _delegate;
    struct CGPoint _lastPoint;
}

@property(nonatomic) _Bool touchMoved; // @synthesize touchMoved=_touchMoved;
@property(nonatomic) struct CGPoint lastPoint; // @synthesize lastPoint=_lastPoint;
@property(nonatomic) __weak id <QNDraggableViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)moveToPoint:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)onTouchEnd:(id)arg1;
- (void)moveByDeltaX:(double)arg1 deltaY:(double)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end


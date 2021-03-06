//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIPanGestureRecognizer, UIPinchGestureRecognizer, UITapGestureRecognizer;
@protocol ARGestureResponseDelegate, DoubleTapResponseDelegate;

@interface ARGestureView : UIView
{
    id <ARGestureResponseDelegate> _delegate;
    id <DoubleTapResponseDelegate> _doubleTapdelegate;
    UIPanGestureRecognizer *_pan2GestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UITapGestureRecognizer *_doubleTapGestrueRecognizer;
}

@property(retain, nonatomic) UITapGestureRecognizer *doubleTapGestrueRecognizer; // @synthesize doubleTapGestrueRecognizer=_doubleTapGestrueRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // @synthesize pinchGestureRecognizer=_pinchGestureRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *pan2GestureRecognizer; // @synthesize pan2GestureRecognizer=_pan2GestureRecognizer;
@property(nonatomic) __weak id <DoubleTapResponseDelegate> doubleTapdelegate; // @synthesize doubleTapdelegate=_doubleTapdelegate;
@property(nonatomic) __weak id <ARGestureResponseDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleDoubleTapGes:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)handlePinch:(id)arg1;
- (void)handlePanOf2Touches:(id)arg1;
- (void)removeARGestures;
- (void)setupARGestures;

@end


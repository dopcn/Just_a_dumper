//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BMPanScrollViewConfig, UIPanGestureRecognizer, UIScrollView, UIView;
@protocol BMPanScrollViewDelegate;

@interface BMPanScrollViewController : NSObject
{
    UIView *_view;
    id <BMPanScrollViewDelegate> _delegate;
    BMPanScrollViewConfig *_config;
    UIPanGestureRecognizer *_panGesture;
    UIScrollView *_scrollView;
}

@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) BMPanScrollViewConfig *config; // @synthesize config=_config;
@property(nonatomic) __weak id <BMPanScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)amendViewLocationWithAnimation:(_Bool)arg1 fromStatus:(long long)arg2;
- (void)moveViewToY:(double)arg1;
- (void)ajustViewToStatus:(long long)arg1;
- (id)initWithConfig:(id)arg1 scrollView:(id)arg2;

@end


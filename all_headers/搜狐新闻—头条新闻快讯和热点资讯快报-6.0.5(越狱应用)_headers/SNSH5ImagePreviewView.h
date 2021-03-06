//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UIImageView, UILabel, UIView;

@interface SNSH5ImagePreviewView : UIScrollView <UIScrollViewDelegate>
{
    _Bool _isDoubleZoom;
    UIImageView *_imageView;
    UILabel *_progressLable;
    UIView *_markView;
    struct CGPoint _touchBegin;
}

@property(nonatomic) struct CGPoint touchBegin; // @synthesize touchBegin=_touchBegin;
@property(nonatomic) _Bool isDoubleZoom; // @synthesize isDoubleZoom=_isDoubleZoom;
@property(retain, nonatomic) UIView *markView; // @synthesize markView=_markView;
@property(retain, nonatomic) UILabel *progressLable; // @synthesize progressLable=_progressLable;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)adjustZoomScale;
- (struct CGRect)frameWithW:(double)arg1 h:(double)arg2 center:(struct CGPoint)arg3;
- (void)handleDoubleTap:(id)arg1;
- (void)changeToDayOrNight;
- (void)loadWebImage:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)hideLoading;
- (void)showLoading;
- (void)disMiss;
- (id)initWithImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


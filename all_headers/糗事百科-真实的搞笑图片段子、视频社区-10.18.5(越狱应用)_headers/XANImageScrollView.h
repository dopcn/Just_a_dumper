//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UIImage, UIImageView;

@interface XANImageScrollView : UIScrollView <UIScrollViewDelegate>
{
    UIImageView *imageView;
    UIImage *image;
}

@property(retain, nonatomic) UIImage *image; // @synthesize image;
@property(readonly, retain, nonatomic) UIImageView *imageView; // @synthesize imageView;
- (void).cxx_destruct;
- (void)handleDoubleTapGuesture:(id)arg1;
- (struct CGRect)zoomRectForScale:(float)arg1 withCenter:(struct CGPoint)arg2;
- (void)scrollViewDidZoom:(id)arg1;
- (void)animateToRect:(struct CGRect)arg1;
- (void)animateFromRect:(struct CGRect)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setImageKeepScale:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


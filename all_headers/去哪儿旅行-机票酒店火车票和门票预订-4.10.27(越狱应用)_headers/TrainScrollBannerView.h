//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSTimer, UIImageView, UIPageControl;
@protocol TrainScrollBannerViewDelegate;

@interface TrainScrollBannerView : UIView
{
    _Bool _toLeft;
    id <TrainScrollBannerViewDelegate> _delegate;
    UIView *_middleView;
    UIView *_sideView;
    UIImageView *_sideImageView;
    UIImageView *_middleImageView;
    double _windowWidth;
    double _windowHeight;
    NSMutableArray *_images;
    long long _imageIndex;
    NSTimer *_timer;
    UIPageControl *_pageControl;
    NSArray *_scrollImages;
}

@property(retain, nonatomic) NSArray *scrollImages; // @synthesize scrollImages=_scrollImages;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) long long imageIndex; // @synthesize imageIndex=_imageIndex;
@property(retain, nonatomic) NSMutableArray *images; // @synthesize images=_images;
@property(nonatomic) _Bool toLeft; // @synthesize toLeft=_toLeft;
@property(nonatomic) double windowHeight; // @synthesize windowHeight=_windowHeight;
@property(nonatomic) double windowWidth; // @synthesize windowWidth=_windowWidth;
@property(retain, nonatomic) UIImageView *middleImageView; // @synthesize middleImageView=_middleImageView;
@property(retain, nonatomic) UIImageView *sideImageView; // @synthesize sideImageView=_sideImageView;
@property(retain, nonatomic) UIView *sideView; // @synthesize sideView=_sideView;
@property(retain, nonatomic) UIView *middleView; // @synthesize middleView=_middleView;
@property(nonatomic) __weak id <TrainScrollBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setBannerText:(id)arg1 withIndex:(long long)arg2;
- (void)imagePressed:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)setupPageControl;
- (void)handle;
- (void)stopTimer;
- (void)stopScroll;
- (void)startTimer;
- (void)startScroll;
- (void)setupViews;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1 images:(id)arg2;

@end


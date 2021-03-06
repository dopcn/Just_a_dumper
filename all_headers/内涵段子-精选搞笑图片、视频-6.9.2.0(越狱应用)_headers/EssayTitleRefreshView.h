//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

@class CALayer, SSThemedImageView;

@interface EssayTitleRefreshView : SSThemedView
{
    _Bool _loading;
    SSThemedImageView *_imageView;
    double _progress;
    CALayer *_imageLayer;
}

@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) SSThemedImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)startAnimation;
- (void)themeChanged:(id)arg1;
- (void)createImageLayer;
- (id)initWithFrame:(struct CGRect)arg1;

@end


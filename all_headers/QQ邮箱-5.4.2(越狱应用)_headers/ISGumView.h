//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSString, UIBezierPath, UIColor, UIImageView;

@interface ISGumView : UIView <CAAnimationDelegate>
{
    _Bool _shrinking;
    double _distance;
    UIColor *_tintColor;
    UIBezierPath *_bezierPath;
    double _mainRadius;
    double _subRadius;
    UIImageView *_imageView;
}

+ (Class)layerClass;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) double subRadius; // @synthesize subRadius=_subRadius;
@property(nonatomic) double mainRadius; // @synthesize mainRadius=_mainRadius;
@property(readonly, nonatomic) UIBezierPath *bezierPath; // @synthesize bezierPath=_bezierPath;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(nonatomic) _Bool shrinking; // @synthesize shrinking=_shrinking;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)shrink;
- (void)layoutSubviews;
- (id)pathForMainRadius:(double)arg1 subRadius:(double)arg2 distance:(double)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


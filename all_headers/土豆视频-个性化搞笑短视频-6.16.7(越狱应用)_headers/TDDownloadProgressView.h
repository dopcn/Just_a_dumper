//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface TDDownloadProgressView : UIView
{
    double _progress;
    CAShapeLayer *_shapeLayer;
}

@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)path:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface MDRecordCircleStrokenView : UIView
{
    CAShapeLayer *_progressLayer;
}

@property(retain, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
- (void).cxx_destruct;
- (void)setProgress:(double)arg1 animatedWithDuration:(double)arg2;
- (void)setProgress:(double)arg1;
- (void)createGrandientCircle;
- (id)initWithFrame:(struct CGRect)arg1;

@end


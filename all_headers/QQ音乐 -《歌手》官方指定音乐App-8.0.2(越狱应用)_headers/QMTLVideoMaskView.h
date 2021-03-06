//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer;

@interface QMTLVideoMaskView : UIView
{
    CALayer *_topLayer;
    CALayer *_leftLayer;
    CALayer *_rightLayer;
    CALayer *_bottomeLayer;
}

@property(retain, nonatomic) CALayer *bottomeLayer; // @synthesize bottomeLayer=_bottomeLayer;
@property(retain, nonatomic) CALayer *rightLayer; // @synthesize rightLayer=_rightLayer;
@property(retain, nonatomic) CALayer *leftLayer; // @synthesize leftLayer=_leftLayer;
@property(retain, nonatomic) CALayer *topLayer; // @synthesize topLayer=_topLayer;
- (void).cxx_destruct;
- (void)animateAction:(id)arg1 endRect:(struct CGRect)arg2 duration:(double)arg3;
- (void)setSubLayerRect:(struct CGRect)arg1 animate:(_Bool)arg2 duration:(double)arg3;

@end


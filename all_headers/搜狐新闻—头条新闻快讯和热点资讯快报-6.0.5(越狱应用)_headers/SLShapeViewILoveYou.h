//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SLShapeView.h"

#import "CAAnimationDelegate-Protocol.h"

@class NSMutableArray, NSString, NSTimer, UIImage;

@interface SLShapeViewILoveYou : SLShapeView <CAAnimationDelegate>
{
    UIImage *_shapeImage;
    NSMutableArray *_imageViewArray;
    NSTimer *_imageViewStayTimer;
    NSMutableArray *_theUnitElementArray;
}

- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animation;
- (void)caculate;
- (void)animationShape;
- (id)initAnimationView:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


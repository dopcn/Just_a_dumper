//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SNBFace : NSObject
{
}

+ (id)faceView;
+ (_Bool)isShow;
+ (void)hideFaceViewWithoutAnimationCompletion:(CDUnknownBlockType)arg1;
+ (void)hideFaceViewWithCompletion:(CDUnknownBlockType)arg1;
+ (void)showFaceViewWithCompletion:(CDUnknownBlockType)arg1;
+ (void)hideFaceView;
+ (void)showFaceView;
+ (struct CGRect)showFrame;
+ (struct CGRect)hideFrame;
+ (void)initFaceView;
+ (void)setFaceDelegate:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OIProducer.h"

@class UIImage;

@interface OIImage : OIProducer
{
    UIImage *sourceImage_;
    UIImage *processedImage_;
    _Bool animatedImage_;
    _Bool imageAnimating_;
    float animatedImageDuration_;
    int animatedImageRepeatCount_;
    double currentAnimationTime_;
    int currentRepeatCount_;
    double hasPlayedTime_;
    int currentImageIndex_;
}

@property(nonatomic) int animatedImageRepeatCount; // @synthesize animatedImageRepeatCount=animatedImageRepeatCount_;
@property(nonatomic) float animatedImageDuration; // @synthesize animatedImageDuration=animatedImageDuration_;
@property(readonly, nonatomic, getter=isAnimatedImage) _Bool animatedImage; // @synthesize animatedImage=animatedImage_;
@property(retain, nonatomic) UIImage *sourceImage; // @synthesize sourceImage=sourceImage_;
- (int)textureOrientationByImageOrientation:(long long)arg1;
- (void)initOutputTexture;
- (void)produceAtTime:(CDStruct_1b6d18a9)arg1;
- (void)setAnimationParametersToTargetForFinish;
- (_Bool)isImageAnimating;
- (void)pauseAnimating:(_Bool)arg1;
- (void)stopImageAnimating;
- (void)startImageAnimating;
- (void)removeAllConsumers;
- (void)removeConsumer:(id)arg1;
- (void)replaceConsumer:(id)arg1 withNewConsumer:(id)arg2;
- (void)addConsumer:(id)arg1;
@property(readonly, nonatomic) UIImage *processedImage;
- (id)initWithUIImage:(id)arg1;
- (id)init;
- (void)dealloc;

@end


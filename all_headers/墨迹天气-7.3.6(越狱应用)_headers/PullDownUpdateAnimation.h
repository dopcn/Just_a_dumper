//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BasePullDownAnimation;

@interface PullDownUpdateAnimation : NSObject
{
    _Bool isGray;
    BasePullDownAnimation *_pullAnimation;
}

@property(retain, nonatomic) BasePullDownAnimation *pullAnimation; // @synthesize pullAnimation=_pullAnimation;
@property(nonatomic) _Bool isGray; // @synthesize isGray;
- (void).cxx_destruct;
- (void)setPullDownUpdateAnimationState:(int)arg1 contentOffset:(struct CGPoint)arg2 animationView:(id)arg3;
- (id)getPullDownUpdateAnimationLayer;
- (id)init;

@end


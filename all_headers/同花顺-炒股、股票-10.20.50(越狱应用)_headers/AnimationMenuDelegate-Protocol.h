//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AnimationMenu, UIButton;

@protocol AnimationMenuDelegate <NSObject>
- (struct CGSize)sizeForButtonAthIndexInAnimationMenu:(AnimationMenu *)arg1;
- (UIButton *)animationMenu:(AnimationMenu *)arg1 buttonForRowAtIndex:(long long)arg2;
- (long long)numberOfRowsInAnimationMenu:(AnimationMenu *)arg1;
@end


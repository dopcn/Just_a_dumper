//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface QZPBubbleItem : UIButton
{
    _Bool _isForPet;
    unsigned long long _direction;
}

@property(nonatomic) _Bool isForPet; // @synthesize isForPet=_isForPet;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
- (id)bottomBubbleImageName;
- (id)midBubbleItemImageName;
- (id)topBubbleItemImageName;
- (id)fullBubbleImageName;
- (id)bubbleItemImageWithType:(unsigned long long)arg1 forPet:(_Bool)arg2 forSelected:(_Bool)arg3;
- (id)initWithView:(id)arg1 contentWidth:(double)arg2 type:(unsigned long long)arg3 isForPet:(_Bool)arg4 direction:(unsigned long long)arg5 icon:(id)arg6;

@end


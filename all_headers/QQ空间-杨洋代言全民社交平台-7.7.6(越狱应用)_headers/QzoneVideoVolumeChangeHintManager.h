//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIFont, UIImageView, UIView;

@interface QzoneVideoVolumeChangeHintManager : NSObject
{
    UIImageView *_volumeChangeHintImageView;
    UIView *_maskView;
    NSString *_hint;
    UIFont *_hintFont;
    struct CGRect _labelFrame;
    struct CGSize _hintImageViewSize;
}

+ (_Bool)isNeedPostVolumeChangeHint;
+ (void)clearHasShownHint;
+ (void)updateHasShownHint;
+ (id)userDefaultKeyForVolumeChange;
- (void).cxx_destruct;
- (void)dismissHintImmediatly;
- (void)onAutoFadeoutHintLabel;
- (id)genHintLabel:(id)arg1 font:(id)arg2 frame:(struct CGRect)arg3;
- (void)postVolumeChangeHint:(id)arg1 controller:(id)arg2;

@end


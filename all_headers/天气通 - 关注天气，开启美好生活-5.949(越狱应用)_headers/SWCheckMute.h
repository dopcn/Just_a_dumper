//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SWCheckMute : NSObject
{
    _Bool _isMute;
    float _soundDuration;
    float _volume;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isMute; // @synthesize isMute=_isMute;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) float soundDuration; // @synthesize soundDuration=_soundDuration;
- (void)startCheckMute;
- (void)showMessage:(id)arg1;
- (void)incrementTimer;
- (void)volumeChanged:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


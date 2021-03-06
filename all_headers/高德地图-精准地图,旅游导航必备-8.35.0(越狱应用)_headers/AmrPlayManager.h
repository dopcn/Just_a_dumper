//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NMAudioPlayer;
@protocol AmrPlayAudioDelegate;

@interface AmrPlayManager : NSObject
{
    NMAudioPlayer *_avPlayer;
    id <AmrPlayAudioDelegate> _delegate;
}

+ (id)sharedManager;
@property(nonatomic) __weak id <AmrPlayAudioDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)decodeAmr:(id)arg1;
- (void)stopPlay;
- (void)sendStatus:(int)arg1;
- (void)playFile:(id)arg1;
- (void)play;
- (void)dealloc;

@end


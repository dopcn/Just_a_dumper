//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FAPlayer, UIView;

@interface FAVideoManager : NSObject
{
    FAPlayer *_livePlayer;
    UIView *_playView;
    long long _videoManagerState;
}

+ (id)sharedInstance;
@property(nonatomic) long long videoManagerState; // @synthesize videoManagerState=_videoManagerState;
@property(retain, nonatomic) UIView *playView; // @synthesize playView=_playView;
@property(retain, nonatomic) FAPlayer *livePlayer; // @synthesize livePlayer=_livePlayer;
- (void).cxx_destruct;
- (void)resetPlayerView;
- (_Bool)shouldExecute:(long long)arg1;
- (void)setPlayViewFrame:(struct CGRect)arg1 withState:(long long)arg2;
- (id)getPlayView:(long long)arg1;
- (id)getLivePlayer:(long long)arg1;
- (void)removeVideoManagerState:(long long)arg1;
- (void)addVideoManagerState:(long long)arg1;
- (id)init;

@end


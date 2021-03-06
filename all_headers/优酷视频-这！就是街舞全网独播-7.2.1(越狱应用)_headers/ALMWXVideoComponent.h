//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXComponent.h"

#import "YKFWXHoveringVideoComponentProtocol-Protocol.h"

@class ALMWXPlayerModule, NSNumber, NSString;

@interface ALMWXVideoComponent : WXComponent <YKFWXHoveringVideoComponentProtocol>
{
    _Bool _mute;
    _Bool _autoPlay;
    NSString *_src;
    NSNumber *_seekTime;
    NSString *_playStatus;
    ALMWXPlayerModule *_playerModule;
}

@property(nonatomic) __weak ALMWXPlayerModule *playerModule; // @synthesize playerModule=_playerModule;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
@property(retain, nonatomic) NSString *playStatus; // @synthesize playStatus=_playStatus;
@property(nonatomic) _Bool mute; // @synthesize mute=_mute;
@property(retain, nonatomic) NSNumber *seekTime; // @synthesize seekTime=_seekTime;
@property(retain, nonatomic) NSString *src; // @synthesize src=_src;
- (void).cxx_destruct;
- (void)updatePlayState:(unsigned long long)arg1 playTime:(float)arg2;
- (void)updateAttributes:(id)arg1;
- (void)setVolume;
- (void)play;
- (void)setupPlayer;
- (void)viewDidLoad;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


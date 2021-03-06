//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AliDetailVideoMemento, AliDetailVideoMiniControl, NSMutableDictionary, NSString;
@protocol AliDetailMiniVideoDisplayProtocol;

@interface AliDetailVideoManager : NSObject
{
    id <AliDetailMiniVideoDisplayProtocol> _display;
    NSString *_eventToken;
    NSMutableDictionary *_mementoDic;
    AliDetailVideoMiniControl *_uniqueMiniVideoControl;
    AliDetailVideoMemento *_uniqueMiniVideoSourceMemento;
}

@property(retain, nonatomic) AliDetailVideoMemento *uniqueMiniVideoSourceMemento; // @synthesize uniqueMiniVideoSourceMemento=_uniqueMiniVideoSourceMemento;
@property(retain, nonatomic) AliDetailVideoMiniControl *uniqueMiniVideoControl; // @synthesize uniqueMiniVideoControl=_uniqueMiniVideoControl;
@property(retain, nonatomic) NSMutableDictionary *mementoDic; // @synthesize mementoDic=_mementoDic;
@property(retain, nonatomic) NSString *eventToken; // @synthesize eventToken=_eventToken;
@property(nonatomic) __weak id <AliDetailMiniVideoDisplayProtocol> display; // @synthesize display=_display;
- (void).cxx_destruct;
- (void)userCloseMiniVideoIfNeeded;
- (void)closeMiniVideoIfNeeded;
- (unsigned long long)miniVideoPriority;
- (_Bool)isMiniVideoPlaying;
- (_Bool)isMiniVideoShowing;
- (_Bool)checkPlayingViewIsSameAsControl:(id)arg1;
- (void)safeCloseMini;
- (void)tryDeliverMiniVideoToControl:(id)arg1;
- (void)deliverToMiniVideoFromControl:(id)arg1 cleanFrom:(_Bool)arg2;
- (void)internalDeliverVideoControllFrom:(id)arg1 to:(id)arg2 cleanFrom:(_Bool)arg3;
- (void)deliverVideoControllFrom:(id)arg1 to:(id)arg2 cleanFrom:(_Bool)arg3;

@end


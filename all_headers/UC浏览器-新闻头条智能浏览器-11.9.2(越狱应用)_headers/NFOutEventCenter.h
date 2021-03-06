//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UCThemeCoreHelper-Protocol.h"
#import "UCThemeCoreObserver-Protocol.h"

@class NSString, ObserverContainer;

@interface NFOutEventCenter : NSObject <UCThemeCoreHelper, UCThemeCoreObserver>
{
    ObserverContainer *_observers;
}

+ (id)sharedInstance;
@property(retain, nonatomic) ObserverContainer *observers; // @synthesize observers=_observers;
- (void)quitUCNewsMode;
- (void)enterUCNewsMode;
- (void)didUCNewsTabUnactive;
- (void)didUCNewsTabActive;
- (void)willEnterForegroud;
- (void)didEnterBackground;
- (void)didFinishSwitchThemeFrom:(id)arg1 andEffect:(id)arg2 to:(id)arg3 andEffect:(id)arg4;
- (void)willSwitchTheme;
- (void)didApplyTheme;
- (void)willApplyTheme;
- (void)didNewWindow:(id)arg1;
- (void)channelSwitchByClick:(id)arg1;
- (void)channelHasSwitched;
- (void)channelSwitch;
- (void)leaveMovie;
- (void)enterMovie;
- (void)windowDismissed;
- (void)windowPresented;
- (_Bool)removeObserver:(id)arg1;
- (_Bool)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


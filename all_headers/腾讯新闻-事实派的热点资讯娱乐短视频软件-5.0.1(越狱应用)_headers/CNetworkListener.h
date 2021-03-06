//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSTimer, Reachability;

@interface CNetworkListener : NSObject
{
    Reachability *_wifiReach;
    Reachability *_wwanReach;
    NSTimer *_timer;
    long long _networkSource;
    id _radioAccessTechnologyDidChangeObserver;
    NSString *_currentRadioAccessTechnology;
}

+ (id)sharedNetworkListener;
@property(copy, nonatomic) NSString *currentRadioAccessTechnology; // @synthesize currentRadioAccessTechnology=_currentRadioAccessTechnology;
@property(retain, nonatomic) id radioAccessTechnologyDidChangeObserver; // @synthesize radioAccessTechnologyDidChangeObserver=_radioAccessTechnologyDidChangeObserver;
@property(retain, nonatomic) Reachability *wwanReach; // @synthesize wwanReach=_wwanReach;
@property(retain, nonatomic) Reachability *wifiReach; // @synthesize wifiReach=_wifiReach;
@property(nonatomic) long long networkSource; // @synthesize networkSource=_networkSource;
- (void).cxx_destruct;
- (void)dealloc;
- (id)requestNetType;
- (id)networkNameForIOS7orLater;
- (id)networkName;
- (long long)checkAndGetNetworkSource;
- (void)stopTimer;
- (void)startTimer:(float)arg1;
- (void)timeCallback:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
- (void)retrieveNetworkSource;
- (void)restart;
- (void)stopListen;
- (_Bool)isListening;
- (void)startListen;
- (void)notifyListenComplete;
- (void)handleCTRadioAccessTechnologyDidChangeNotification:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBRequestDelegate-Protocol.h"

@class NSMutableDictionary, NSString, NSURL, WebRequest;
@protocol AdMoGoAppUpdateRemindDelegate;

@interface AdMoGoAppUpdateRemind : NSObject <WBRequestDelegate>
{
    NSString *appKey;
    WebRequest *webRequest;
    NSMutableDictionary *infoDic;
    id <AdMoGoAppUpdateRemindDelegate> aDelegate;
    _Bool isImmeUpdate;
    NSURL *downloadURL;
    _Bool isFinishCurrentThread;
    _Bool wayIsAlert;
    unsigned long long updateInterval;
    NSString *_customerVersion;
}

@property(retain, nonatomic) NSString *customerVersion; // @synthesize customerVersion=_customerVersion;
- (void)willPresentAlertView:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)request:(id)arg1 didFinishLoadingWithResult:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didReceiveRawData:(id)arg2;
- (void)request:(id)arg1 didReceiveResponse:(id)arg2;
- (void)dealloc;
- (void)updateRemind;
- (void)updateVersion;
- (void)requestAppInfo;
- (id)initImmeWithAppKey:(id)arg1 withDelegate:(id)arg2 withAppVersion:(id)arg3;
- (id)initWithAppKey:(id)arg1 withDelegate:(id)arg2 withAppVersion:(id)arg3;
- (id)initImmeWithAppKey:(id)arg1 withDelegate:(id)arg2;
- (id)initWithAppKey:(id)arg1 withDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


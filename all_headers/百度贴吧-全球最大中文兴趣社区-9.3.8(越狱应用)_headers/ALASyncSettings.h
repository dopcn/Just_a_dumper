//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ALASyncData, IDPStorage, NSString, TBCServerAPI;

@interface ALASyncSettings : NSObject
{
    ALASyncData *_syncData;
    TBCServerAPI *_syncHandler;
    NSString *_channelID;
    IDPStorage *_storage;
}

+ (id)sharedInstance;
+ (void)onAppLaunchFinish;
+ (void)load;
@property(retain, nonatomic) IDPStorage *storage; // @synthesize storage=_storage;
@property(copy, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
@property(retain, nonatomic) TBCServerAPI *syncHandler; // @synthesize syncHandler=_syncHandler;
@property(retain, nonatomic) ALASyncData *syncData; // @synthesize syncData=_syncData;
- (void).cxx_destruct;
- (id)getChannelID;
- (void)saveConfig;
- (void)syncSuccess;
- (void)sync;
- (void)handleEnterForeground;
- (id)init;

@end


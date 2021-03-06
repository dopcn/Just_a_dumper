//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FingerPrintBLL : NSObject
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedSingleton;
+ (long long)fingerPrintID;
+ (void)getHumInitiativeStopRecognizedWithAppId:(id)arg1 appKey:(id)arg2 fingerPrintId:(id)arg3 appVersion:(id)arg4 successBlock:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6;
+ (id)getHumFingerPrintDataWith:(id)arg1 appId:(id)arg2 appKey:(id)arg3 fingerPrintId:(id)arg4 appVersion:(id)arg5 error:(id *)arg6 isTheLast:(_Bool)arg7 multiRes:(int)arg8;
+ (void)getInitiativeStopRecognizedWithAppId:(id)arg1 appKey:(id)arg2 fingerPrintId:(id)arg3 appVersion:(id)arg4 successBlock:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6;
+ (id)getFingerPrintDataWith:(id)arg1 appId:(id)arg2 appKey:(id)arg3 fingerPrintId:(id)arg4 appVersion:(id)arg5 error:(id *)arg6 isTheLast:(_Bool)arg7 multiRes:(int)arg8;
- (void)sendHumRecordPCMWith:(id)arg1 fpId:(id)arg2 status:(unsigned long long)arg3;
- (void)sendRecordPCMWith:(id)arg1 fpId:(id)arg2 status:(unsigned long long)arg3;
- (void)configAllData;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end


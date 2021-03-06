//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CDBLECommandResponseFactory.h"

@interface CDBLECommandResponseFactory (CodEarphone)
+ (_Bool)checkValidFlagWithResponse:(id)arg1;
+ (unsigned short)getResponseCMDType:(id)arg1;
+ (id)getResponseParameter:(id)arg1;
+ (_Bool)checkValidWithResponse:(id)arg1 command:(id)arg2;
+ (id)codEarphone_restartAfterBootSuccessCommandResponse:(id)arg1 command:(id)arg2;
+ (id)codEarphone_getNextBlockIndexCommandResponse:(id)arg1 command:(id)arg2;
+ (id)codEarphone_sendBootCompletionConfirmCommandResponse:(id)arg1 command:(id)arg2;
+ (id)codEarphone_sendBootBlockCommandResponse:(id)arg1 command:(id)arg2;
+ (id)codEarphone_startBootCommandResponse:(id)arg1 command:(id)arg2;
+ (id)codEarphone_updateSportStateCommandResponse:(id)arg1 command:(id)arg2;
+ (id)confirmSportSyncCommandResponse:(id)arg1 command:(id)arg2;
+ (id)shutdownCodEarphoneCommandResponse:(id)arg1 command:(id)arg2;
+ (id)getWearStateCommandResponse:(id)arg1 command:(id)arg2;
+ (id)getDeviceTypeAndVersionForCodEarphoneCommandResponse:(id)arg1 command:(id)arg2;
+ (id)setDeviceDateOfCodEarphoneCommandResponse:(id)arg1 command:(id)arg2;
+ (id)getDeviceBatteryInfoCommandDataCommandResponse:(id)arg1 command:(id)arg2;
+ (id)stopSyncSportDatasCommandResponse:(id)arg1 command:(id)arg2;
+ (id)startSyncSportDatasCommandResponse:(id)arg1 command:(id)arg2;
+ (id)startSyncSportDatasCommandResponseTotalFrames:(id)arg1 command:(id)arg2;
+ (_Bool)checkDeviceBatteryInfoValidResponse:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (_Bool)checkSportAssistantValidResponse:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (_Bool)checkVoiceAssistantValidResponse:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (_Bool)splitHeartRateExcessData:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (_Bool)checkHeartRateValidResponse:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (id)stopMonitorHeartRateCommandResponse:(id)arg1 command:(id)arg2;
+ (id)startMonitorHeartRateCommandResponse:(id)arg1 command:(id)arg2;
+ (id)initializeCodEarphoneCommandResponse:(id)arg1 command:(id)arg2;
@end


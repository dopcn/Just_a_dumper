//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary;

@protocol GA_GenericAudioControllerDelegate <NSObject>
- (void)onAudioStateChange:(int)arg1;
- (void)onEvent:(int)arg1;

@optional
- (void)onBTv2DataReceived:(unsigned char)arg1 data:(NSData *)arg2;
- (void)onBTv2RawDataReceived:(NSData *)arg1;
- (void)onBTv2RawDataSent:(NSData *)arg1;
- (void)onDeviceUnplugged;
- (void)onDevicePlugged;
- (void)onDataReceived:(NSDictionary *)arg1;
- (void)onDataReceived:(unsigned char)arg1 data:(NSData *)arg2 cmdDataDict:(NSDictionary *)arg3;
- (void)onDataReceived:(unsigned char)arg1 data:(NSData *)arg2 cResendByte:(unsigned char)arg3;
- (void)onDataReceived:(unsigned char)arg1 data:(NSData *)arg2;
@end


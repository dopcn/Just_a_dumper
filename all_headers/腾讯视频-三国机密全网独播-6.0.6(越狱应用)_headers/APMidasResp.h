//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface APMidasResp : NSObject
{
    int resultCode;
    int realSaveNum;
    int payChannel;
    int payState;
    int provideState;
    NSString *resultInnerCode;
    NSString *resultMsg;
    NSString *extendInfo;
    NSString *respString;
    NSString *payReserve1;
    NSString *payReserve2;
    NSString *payReserve3;
}

+ (id)respWithResultCode:(int)arg1 innerCode:(id)arg2 respString:(id)arg3;
+ (id)respWithResultCode:(int)arg1 innerCode:(id)arg2 realSaveNum:(int)arg3 payChannel:(int)arg4 payState:(int)arg5 provideState:(int)arg6 resultMsg:(id)arg7;
@property(retain, nonatomic) NSString *payReserve3; // @synthesize payReserve3;
@property(retain, nonatomic) NSString *payReserve2; // @synthesize payReserve2;
@property(retain, nonatomic) NSString *payReserve1; // @synthesize payReserve1;
@property(retain, nonatomic) NSString *respString; // @synthesize respString;
@property(retain, nonatomic) NSString *extendInfo; // @synthesize extendInfo;
@property(retain, nonatomic) NSString *resultMsg; // @synthesize resultMsg;
@property(nonatomic) int provideState; // @synthesize provideState;
@property(nonatomic) int payState; // @synthesize payState;
@property(nonatomic) int payChannel; // @synthesize payChannel;
@property(nonatomic) int realSaveNum; // @synthesize realSaveNum;
@property(retain, nonatomic) NSString *resultInnerCode; // @synthesize resultInnerCode;
@property(nonatomic) int resultCode; // @synthesize resultCode;
- (void).cxx_destruct;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Command-Protocol.h"

@class NSArray, NSDictionary, NSString;
@protocol SNSLEnterIntoProductDTOProtocol;

@protocol SNSLBuyNowCommandProtocol <Command>

@optional
@property(nonatomic) int sourceType;
- (void)setCmdWithSourceId:(id)arg1 cmmdtys:(NSArray *)arg2 infoDic:(NSDictionary *)arg3 callBack:(void (^)(_Bool, _Bool, NSString *, void (^)(void)))arg4;
- (void)setCmdWithSourceId:(id)arg1 cmmdtys:(NSArray *)arg2 infoDic:(NSDictionary *)arg3;
- (void)setCmdWithSourceId:(id)arg1 cmmdty:(id <SNSLEnterIntoProductDTOProtocol>)arg2 infoDic:(NSDictionary *)arg3;
- (void)setCmdWithSourceCtrler:(id)arg1 isHwg:(_Bool)arg2 payPeriods:(NSString *)arg3 itemJsonStr:(NSString *)arg4;
@end


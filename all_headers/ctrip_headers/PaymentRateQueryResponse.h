//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface PaymentRateQueryResponse : CTBusinessBean
{
    int resultCode;
    NSString *subCode;
    NSString *resultMessage;
    NSString *debugMessage;
    NSMutableArray *payTransInfosList;
    NSMutableArray *payDisplaySettingsList;
}

@property(retain, nonatomic) NSMutableArray *payDisplaySettingsList; // @synthesize payDisplaySettingsList;
@property(retain, nonatomic) NSMutableArray *payTransInfosList; // @synthesize payTransInfosList;
@property(copy, nonatomic) NSString *debugMessage; // @synthesize debugMessage;
@property(copy, nonatomic) NSString *resultMessage; // @synthesize resultMessage;
@property(copy, nonatomic) NSString *subCode; // @synthesize subCode;
@property(nonatomic) int resultCode; // @synthesize resultCode;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end


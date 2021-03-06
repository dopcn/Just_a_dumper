//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface CMHuaBeiBillModel : NSObject
{
    long long _bankId;
    NSString *_billStartTime;
    NSString *_billEndTime;
    long long _billId;
    NSString *_billMonth;
    unsigned long long _billType;
    long long _billLineId;
    NSString *_lastModifyTime;
    NSString *_repayDueDate;
    double _repaymentAmount;
    unsigned long long _repayStatus;
    long long _userId;
    NSMutableArray *_consumeDetailArray;
}

+ (id)buildDataByEntity:(id)arg1;
@property(retain, nonatomic) NSMutableArray *consumeDetailArray; // @synthesize consumeDetailArray=_consumeDetailArray;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(nonatomic) unsigned long long repayStatus; // @synthesize repayStatus=_repayStatus;
@property(nonatomic) double repaymentAmount; // @synthesize repaymentAmount=_repaymentAmount;
@property(retain, nonatomic) NSString *repayDueDate; // @synthesize repayDueDate=_repayDueDate;
@property(retain, nonatomic) NSString *lastModifyTime; // @synthesize lastModifyTime=_lastModifyTime;
@property(nonatomic) long long billLineId; // @synthesize billLineId=_billLineId;
@property(nonatomic) unsigned long long billType; // @synthesize billType=_billType;
@property(retain, nonatomic) NSString *billMonth; // @synthesize billMonth=_billMonth;
@property(nonatomic) long long billId; // @synthesize billId=_billId;
@property(retain, nonatomic) NSString *billEndTime; // @synthesize billEndTime=_billEndTime;
@property(retain, nonatomic) NSString *billStartTime; // @synthesize billStartTime=_billStartTime;
@property(nonatomic) long long bankId; // @synthesize bankId=_bankId;
- (void).cxx_destruct;

@end


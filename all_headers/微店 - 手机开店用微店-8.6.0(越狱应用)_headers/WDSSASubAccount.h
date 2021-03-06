//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDSBaseData.h"

@class NSString, WDSSAPostData;

@interface WDSSASubAccount : WDSBaseData
{
    NSString *_accountId;
    NSString *_headImgUrl;
    NSString *_nickName;
    long long _roleStatus;
    unsigned long long _status;
    NSString *_userId;
    NSString *_subId;
    WDSSAPostData *_roleModel;
}

@property(retain, nonatomic) WDSSAPostData *roleModel; // @synthesize roleModel=_roleModel;
@property(copy, nonatomic) NSString *subId; // @synthesize subId=_subId;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) long long roleStatus; // @synthesize roleStatus=_roleStatus;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *headImgUrl; // @synthesize headImgUrl=_headImgUrl;
@property(copy, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
- (void).cxx_destruct;
- (id)parseInfoFromDictionaryManually:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YYModel-Protocol.h"

@class NSArray, NSString, VSReputationExpert;
@protocol Optional;

@interface VSReputationAlbum : NSObject <YYModel>
{
    NSString<Optional> *_albumId;
    NSString<Optional> *_title;
    NSString<Optional> *_createTime;
    VSReputationExpert<Optional> *_expertInfo;
    NSArray *_albumLabels;
    NSString<Optional> *_goodsCount;
    NSString<Optional> *_salesNum;
    NSString<Optional> *_isOpenShare;
    NSString<Optional> *_maxPage;
}

+ (id)modelCustomPropertyMapper;
@property(retain, nonatomic) NSString<Optional> *maxPage; // @synthesize maxPage=_maxPage;
@property(retain, nonatomic) NSString<Optional> *isOpenShare; // @synthesize isOpenShare=_isOpenShare;
@property(retain, nonatomic) NSString<Optional> *salesNum; // @synthesize salesNum=_salesNum;
@property(retain, nonatomic) NSString<Optional> *goodsCount; // @synthesize goodsCount=_goodsCount;
@property(retain, nonatomic) NSArray *albumLabels; // @synthesize albumLabels=_albumLabels;
@property(retain, nonatomic) VSReputationExpert<Optional> *expertInfo; // @synthesize expertInfo=_expertInfo;
@property(retain, nonatomic) NSString<Optional> *createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString<Optional> *albumId; // @synthesize albumId=_albumId;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


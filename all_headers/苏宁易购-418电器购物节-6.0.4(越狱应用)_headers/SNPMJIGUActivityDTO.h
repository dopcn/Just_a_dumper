//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNPMJIGUDTO.h"

#import "SNPMProtocol-Protocol.h"

@class NSMutableArray, NSString, SNPMJIGUUserDTO;

@interface SNPMJIGUActivityDTO : SNPMJIGUDTO <SNPMProtocol>
{
    _Bool _showProduct;
    _Bool _showSponsor;
    NSString *__id;
    NSString *_name;
    NSString *_detail;
    long long _activityStatus;
    long long _activityType;
    long long _joinType;
    NSString *_imageUrl;
    NSString *_cityCode;
    SNPMJIGUUserDTO *_userDTO;
    NSString *_createTime;
    NSString *_startTime;
    NSString *_endTime;
    NSMutableArray *_contentArray;
    NSString *_shareImgUrl;
    NSMutableArray *_voteArray;
    NSString *_contentCnt;
    NSString *_likeCnt;
    NSString *_joinCnt;
    NSMutableArray *_rewardArray;
    NSString *_sponsor;
    NSString *_sponsorImgUrl;
    NSString *_sponsorUrl;
    NSString *_defaultText;
}

+ (id)parser:(id)arg1;
@property(copy, nonatomic) NSString *defaultText; // @synthesize defaultText=_defaultText;
@property(copy, nonatomic) NSString *sponsorUrl; // @synthesize sponsorUrl=_sponsorUrl;
@property(copy, nonatomic) NSString *sponsorImgUrl; // @synthesize sponsorImgUrl=_sponsorImgUrl;
@property(copy, nonatomic) NSString *sponsor; // @synthesize sponsor=_sponsor;
@property(nonatomic) _Bool showSponsor; // @synthesize showSponsor=_showSponsor;
@property(nonatomic) _Bool showProduct; // @synthesize showProduct=_showProduct;
@property(retain, nonatomic) NSMutableArray *rewardArray; // @synthesize rewardArray=_rewardArray;
@property(copy, nonatomic) NSString *joinCnt; // @synthesize joinCnt=_joinCnt;
@property(copy, nonatomic) NSString *likeCnt; // @synthesize likeCnt=_likeCnt;
@property(copy, nonatomic) NSString *contentCnt; // @synthesize contentCnt=_contentCnt;
@property(retain, nonatomic) NSMutableArray *voteArray; // @synthesize voteArray=_voteArray;
@property(copy, nonatomic) NSString *shareImgUrl; // @synthesize shareImgUrl=_shareImgUrl;
@property(retain, nonatomic) NSMutableArray *contentArray; // @synthesize contentArray=_contentArray;
@property(copy, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(copy, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) SNPMJIGUUserDTO *userDTO; // @synthesize userDTO=_userDTO;
@property(copy, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) long long joinType; // @synthesize joinType=_joinType;
@property(nonatomic) long long activityType; // @synthesize activityType=_activityType;
@property(nonatomic) long long activityStatus; // @synthesize activityStatus=_activityStatus;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *_id; // @synthesize _id=__id;
- (void).cxx_destruct;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType callBackBlock;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCBaseItem.h"

@class ALALocationInfoItem, ALAPersonalCenterUserInfoItem, ALARelationInfoItem, NSArray, NSString;

@interface ALAGameLiveHostTabItem : TBCBaseItem
{
    ALAPersonalCenterUserInfoItem *_userInfo;
    ALARelationInfoItem *_relationInfo;
    ALALocationInfoItem *_locationInfo;
    ALAPersonalCenterUserInfoItem *_loginUserInfo;
    NSArray *_replayList;
    NSString *_pn;
    NSString *_ps;
    NSString *_hasMore;
}

@property(copy, nonatomic) NSString *hasMore; // @synthesize hasMore=_hasMore;
@property(copy, nonatomic) NSString *ps; // @synthesize ps=_ps;
@property(copy, nonatomic) NSString *pn; // @synthesize pn=_pn;
@property(retain, nonatomic) NSArray *replayList; // @synthesize replayList=_replayList;
@property(retain, nonatomic) ALAPersonalCenterUserInfoItem *loginUserInfo; // @synthesize loginUserInfo=_loginUserInfo;
@property(retain, nonatomic) ALALocationInfoItem *locationInfo; // @synthesize locationInfo=_locationInfo;
@property(retain, nonatomic) ALARelationInfoItem *relationInfo; // @synthesize relationInfo=_relationInfo;
@property(retain, nonatomic) ALAPersonalCenterUserInfoItem *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (id)init;

@end


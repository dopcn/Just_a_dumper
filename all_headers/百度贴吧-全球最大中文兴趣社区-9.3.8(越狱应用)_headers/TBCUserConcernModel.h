//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCBaseModel.h"

@class TBCUserConcernListItem;

@interface TBCUserConcernModel : TBCBaseModel
{
    TBCUserConcernListItem *_concernListItem;
}

@property(retain, nonatomic) TBCUserConcernListItem *concernListItem; // @synthesize concernListItem=_concernListItem;
- (void).cxx_destruct;
- (void)setAllowShowRecomCard;
- (void)handleParsedData:(id)arg1;
- (id)cacheConcernClickedTimeStampKey;
- (void)setCacheConcernButtonClickedTimeStamp:(id)arg1;
- (id)cacheConcernButtonClickedTimeStamp;
- (id)cacheTimeStampKey;
- (void)setCacheTimeStamp:(id)arg1;
- (id)cacheTimeStamp;
- (id)cacheConcernKey;
- (void)setCacheConcernListItem:(id)arg1;
- (id)cacheConcernListItem;
- (void)requestWithPageTag:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, SCItemAttentionFindFriendsCardCellObject, SCMakeMoneyGuideViewModel;

@interface SCCommunityHeaderViewModel : NSObject
{
    _Bool _isShowFriendsCard;
    NSArray *_banners;
    NSArray *_topics;
    SCItemAttentionFindFriendsCardCellObject *_friendsCardCellObject;
    double _emptyHeight;
    SCMakeMoneyGuideViewModel *_rewardModel;
}

@property(retain, nonatomic) SCMakeMoneyGuideViewModel *rewardModel; // @synthesize rewardModel=_rewardModel;
@property(nonatomic) double emptyHeight; // @synthesize emptyHeight=_emptyHeight;
@property(retain, nonatomic) SCItemAttentionFindFriendsCardCellObject *friendsCardCellObject; // @synthesize friendsCardCellObject=_friendsCardCellObject;
@property(nonatomic) _Bool isShowFriendsCard; // @synthesize isShowFriendsCard=_isShowFriendsCard;
@property(retain, nonatomic) NSArray *topics; // @synthesize topics=_topics;
@property(retain, nonatomic) NSArray *banners; // @synthesize banners=_banners;
- (void).cxx_destruct;
- (double)getHeaderViewHeight;

@end


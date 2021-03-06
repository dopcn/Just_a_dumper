//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "ASTextNodeDelegate-Protocol.h"
#import "SCFillCellProtocol-Protocol.h"

@class ASDisplayNode, ASNetworkImageNode, NSString, SCLiveMessageModel, SCLiveVipLevelNode, YYLabel;

@interface SCLiveCommentCell : UITableViewCell <ASTextNodeDelegate, SCFillCellProtocol>
{
    CDUnknownBlockType _didSelectCommentCallBack;
    SCLiveMessageModel *_model;
    ASDisplayNode *_userInfoContainerNode;
    ASNetworkImageNode *_vipNode;
    ASNetworkImageNode *_avatarNode;
    ASDisplayNode *_contenttNode;
    SCLiveVipLevelNode *_liveGradeContainerNode;
    YYLabel *_txtLabel;
}

+ (id)cellReuseIdentifier;
@property(retain, nonatomic) YYLabel *txtLabel; // @synthesize txtLabel=_txtLabel;
@property(retain, nonatomic) SCLiveVipLevelNode *liveGradeContainerNode; // @synthesize liveGradeContainerNode=_liveGradeContainerNode;
@property(retain, nonatomic) ASDisplayNode *contenttNode; // @synthesize contenttNode=_contenttNode;
@property(retain, nonatomic) ASNetworkImageNode *avatarNode; // @synthesize avatarNode=_avatarNode;
@property(retain, nonatomic) ASNetworkImageNode *vipNode; // @synthesize vipNode=_vipNode;
@property(retain, nonatomic) ASDisplayNode *userInfoContainerNode; // @synthesize userInfoContainerNode=_userInfoContainerNode;
@property(retain, nonatomic) SCLiveMessageModel *model; // @synthesize model=_model;
@property(copy, nonatomic) CDUnknownBlockType didSelectCommentCallBack; // @synthesize didSelectCommentCallBack=_didSelectCommentCallBack;
- (void).cxx_destruct;
- (void)fillCellWithModel:(id)arg1 indexPath:(id)arg2;
- (void)layoutSubviewsByMeasure;
- (void)layoutSubviewsByBouding;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


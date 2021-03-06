//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class PushMessage, UIImageView, UILabel, UIView;

@interface NHDLivePushMessageCell : UITableViewCell
{
    CDUnknownBlockType _pushMessageViewClickBlock;
    PushMessage *_pushMessage;
    UIView *_messageBackgroundView;
    UIImageView *_iconImageView;
    UILabel *_contentLabel;
    UIImageView *_arrowImageView;
}

+ (double)heightForPushMessageCell;
+ (id)identifierForPushMessageCell;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *messageBackgroundView; // @synthesize messageBackgroundView=_messageBackgroundView;
@property(retain, nonatomic) PushMessage *pushMessage; // @synthesize pushMessage=_pushMessage;
@property(copy, nonatomic) CDUnknownBlockType pushMessageViewClickBlock; // @synthesize pushMessageViewClickBlock=_pushMessageViewClickBlock;
- (void).cxx_destruct;
- (void)pr_click:(id)arg1;
- (void)buildView;
- (void)refreshWithMessage:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


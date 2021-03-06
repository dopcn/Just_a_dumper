//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "KTVFindFriendsCellProtocal-Protocol.h"

@class KTVImageView, NSString, UIImageView, UILabel;

@interface KTVFindNearbyFriendsTableViewCell : UITableViewCell <KTVFindFriendsCellProtocal>
{
    UIImageView *_iconImageView;
    UILabel *_nameLabel;
    KTVImageView *_firstImageView;
    KTVImageView *_secondImageView;
    KTVImageView *_thirdImageView;
}

@property(nonatomic) __weak KTVImageView *thirdImageView; // @synthesize thirdImageView=_thirdImageView;
@property(nonatomic) __weak KTVImageView *secondImageView; // @synthesize secondImageView=_secondImageView;
@property(nonatomic) __weak KTVImageView *firstImageView; // @synthesize firstImageView=_firstImageView;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)configCellWithData:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


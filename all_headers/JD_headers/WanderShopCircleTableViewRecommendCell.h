//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "WanderShopCircleDelegate-Protocol.h"

@class JDImageView, NSString, UILabel, WanderShopCircleModel;
@protocol WanderShopCircleDelegate;

@interface WanderShopCircleTableViewRecommendCell : UITableViewCell <WanderShopCircleDelegate>
{
    UILabel *titleLabel;
    UILabel *desLabel;
    UILabel *fansLabel;
    JDImageView *circleImage;
    WanderShopCircleModel *circleData;
    id <WanderShopCircleDelegate> _delegate;
}

@property(nonatomic) __weak id <WanderShopCircleDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)joinCircle:(id)arg1 CircleCell:(id)arg2;
- (void)openCircle:(id)arg1;
- (void)openCircle;
- (void)joinCircle:(id)arg1;
- (void)configRecommendCircle:(id)arg1;
- (void)setUI:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

